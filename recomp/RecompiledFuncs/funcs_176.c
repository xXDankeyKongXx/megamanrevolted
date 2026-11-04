#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8024508C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024508C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80245090: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x80245094: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80245098: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024509C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802450A0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802450A4: bne         $v0, $zero, L_802450B8
    if (ctx->r2 != 0) {
        // 0x802450A8: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_802450B8;
    }
    // 0x802450A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802450AC: lui         $a1, 0x40A
    ctx->r5 = S32(0X40A << 16);
    // 0x802450B0: j           L_802450C0
    // 0x802450B4: ori         $a1, $a1, 0x60
    ctx->r5 = ctx->r5 | 0X60;
        goto L_802450C0;
    // 0x802450B4: ori         $a1, $a1, 0x60
    ctx->r5 = ctx->r5 | 0X60;
L_802450B8:
    // 0x802450B8: lui         $a1, 0x40A
    ctx->r5 = S32(0X40A << 16);
    // 0x802450BC: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
L_802450C0:
    // 0x802450C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802450C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802450C8: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x802450CC: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x802450D0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802450D4: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x802450D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802450DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802450E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802450E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802450E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802450EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802450F0: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802450F4: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x802450F8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x802450FC: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80245100: jal         0x80051E18
    // 0x80245104: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80245104: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x80245108: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8024510C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80245110: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80245114: jr          $ra
    // 0x80245118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80245118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E490_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E494: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E49C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E4A0: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022E4A4: addiu       $s1, $s1, 0x3724
    ctx->r17 = ADD32(ctx->r17, 0X3724);
    // 0x8022E4A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E4AC: jal         0x800A3450
    // 0x8022E4B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E4B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022E4B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E4B8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022E4BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E4C0: lbu         $v1, 0x3714($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3714);
    // 0x8022E4C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E4C8: beq         $v1, $v0, L_8022E568
    if (ctx->r3 == ctx->r2) {
        // 0x8022E4CC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022E568;
    }
    // 0x8022E4CC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022E4D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022E4D4: beql        $v0, $zero, L_8022E4EC
    if (ctx->r2 == 0) {
        // 0x8022E4D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E4EC;
    }
    goto skip_0;
    // 0x8022E4D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E4DC: beq         $v1, $zero, L_8022E4FC
    if (ctx->r3 == 0) {
        // 0x8022E4E0: nop
    
            goto L_8022E4FC;
    }
    // 0x8022E4E0: nop

    // 0x8022E4E4: j           L_8022E5B4
    // 0x8022E4E8: nop

        goto L_8022E5B4;
    // 0x8022E4E8: nop

L_8022E4EC:
    // 0x8022E4EC: beq         $v1, $v0, L_8022E588
    if (ctx->r3 == ctx->r2) {
        // 0x8022E4F0: nop
    
            goto L_8022E588;
    }
    // 0x8022E4F0: nop

    // 0x8022E4F4: j           L_8022E5B4
    // 0x8022E4F8: nop

        goto L_8022E5B4;
    // 0x8022E4F8: nop

L_8022E4FC:
    // 0x8022E4FC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022E500: bne         $v0, $zero, L_8022E514
    if (ctx->r2 != 0) {
        // 0x8022E504: nop
    
            goto L_8022E514;
    }
    // 0x8022E504: nop

    // 0x8022E508: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E50C: j           L_8022E51C
    // 0x8022E510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E51C;
    // 0x8022E510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E514:
    // 0x8022E514: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E518: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022E51C:
    // 0x8022E51C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E520: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E524: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022E528: beq         $v0, $zero, L_8022E544
    if (ctx->r2 == 0) {
        // 0x8022E52C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E544;
    }
    // 0x8022E52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E530: jal         0x8022FEF8
    // 0x8022E534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8022E538: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E53C: j           L_8022E558
    // 0x8022E540: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022E558;
    // 0x8022E540: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022E544:
    // 0x8022E544: jal         0x8022FEF8
    // 0x8022E548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022E548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022E54C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E550: jal         0x8022FEB8
    // 0x8022E554: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022E554: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_8022E558:
    // 0x8022E558: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022E55C: addiu       $s1, $s1, 0x3724
    ctx->r17 = ADD32(ctx->r17, 0X3724);
    // 0x8022E560: j           L_8022E5B4
    // 0x8022E564: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022E5B4;
    // 0x8022E564: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E568:
    // 0x8022E568: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E56C: jal         0x8022FEA8
    // 0x8022E570: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022E570: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8022E574: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E578: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E57C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022E580: j           L_8022E5B4
    // 0x8022E584: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022E5B4;
    // 0x8022E584: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022E588:
    // 0x8022E588: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E58C: jal         0x8022FEB8
    // 0x8022E590: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022E590: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x8022E594: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E598: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E59C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E5A0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022E5A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E5A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022E5AC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x8022E5B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E5B4:
    // 0x8022E5B4: jal         0x800A3450
    // 0x8022E5B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022E5B8: nop

    after_6:
    // 0x8022E5BC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E5C0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022E5C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E5C8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022E5CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E5D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E5D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E5D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E5DC: jr          $ra
    // 0x8022E5E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E5E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B4CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B4D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B4D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B4D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B4DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B4E0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023B4E4: beq         $v0, $zero, L_8023B56C
    if (ctx->r2 == 0) {
        // 0x8023B4E8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023B56C;
    }
    // 0x8023B4E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023B4EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B4F0: addu        $at, $at, $v0
    gpr jr_addend_8023B4F8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B4F4: lw          $v0, 0x5F90($at)
    ctx->r2 = ADD32(ctx->r1, 0X5F90);
    // 0x8023B4F8: jr          $v0
    // 0x8023B4FC: nop

    switch (jr_addend_8023B4F8 >> 2) {
        case 0: goto L_8023B500; break;
        case 1: goto L_8023B518; break;
        case 2: goto L_8023B56C; break;
        case 3: goto L_8023B530; break;
        case 4: goto L_8023B564; break;
        case 5: goto L_8023B56C; break;
        default: switch_error(__func__, 0x8023B4F8, 0x80255F90);
    }
    // 0x8023B4FC: nop

L_8023B500:
    // 0x8023B500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B504: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8023B508: jal         0x80050294
    // 0x8023B50C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023B50C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023B510: j           L_8023B520
    // 0x8023B514: nop

        goto L_8023B520;
    // 0x8023B514: nop

L_8023B518:
    // 0x8023B518: jal         0x8005044C
    // 0x8023B51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023B51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B520:
    // 0x8023B520: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B524: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B528: j           L_8023B56C
    // 0x8023B52C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023B56C;
    // 0x8023B52C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B530:
    // 0x8023B530: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023B534: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B538: lw          $v0, 0x467C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X467C);
    // 0x8023B53C: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x8023B540: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x8023B544: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8023B548: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B54C: lw          $v0, 0x45EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45EC);
    // 0x8023B550: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x8023B554: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8023B558: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B55C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B560: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B564:
    // 0x8023B564: jal         0x8005044C
    // 0x8023B568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023B568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023B56C:
    // 0x8023B56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B574: jr          $ra
    // 0x8023B578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802491CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802491CC: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x802491D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802491D4: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x802491D8: beq         $v1, $v0, L_80249218
    if (ctx->r3 == ctx->r2) {
        // 0x802491DC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80249218;
    }
    // 0x802491DC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802491E0: beq         $v0, $zero, L_8024923C
    if (ctx->r2 == 0) {
        // 0x802491E4: nop
    
            goto L_8024923C;
    }
    // 0x802491E4: nop

    // 0x802491E8: bne         $v1, $zero, L_8024923C
    if (ctx->r3 != 0) {
        // 0x802491EC: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_8024923C;
    }
    // 0x802491EC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x802491F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802491F4: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x802491F8: bne         $v1, $v0, L_8024923C
    if (ctx->r3 != ctx->r2) {
        // 0x802491FC: nop
    
            goto L_8024923C;
    }
    // 0x802491FC: nop

    // 0x80249200: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80249204: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x80249208: bne         $v0, $zero, L_8024923C
    if (ctx->r2 != 0) {
        // 0x8024920C: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8024923C;
    }
    // 0x8024920C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80249210: j           L_8024923C
    // 0x80249214: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8024923C;
    // 0x80249214: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80249218:
    // 0x80249218: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8024921C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80249220: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80249224: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80249228: bne         $v0, $zero, L_8024923C
    if (ctx->r2 != 0) {
        // 0x8024922C: nop
    
            goto L_8024923C;
    }
    // 0x8024922C: nop

    // 0x80249230: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80249234: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249238: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8024923C:
    // 0x8024923C: jr          $ra
    // 0x80249240: nop

    TRACE_RETURN()
    return;
    // 0x80249240: nop

;}
RECOMP_FUNC void func_802382F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802382F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802382F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802382FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238300: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238304: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80238308: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023830C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238310: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238314: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238318: jal         0x8004D5D4
    // 0x8023831C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023831C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80238320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238324: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023832C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238330: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80238334: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238338: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023833C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80238340: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80238344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238348: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023834C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238350: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80238354: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238358: jal         0x80238394
    // 0x8023835C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80238394_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023835C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_1:
    // 0x80238360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238364: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238368: jal         0x802383BC
    // 0x8023836C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802383BC_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023836C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80238370: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238374: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023837C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238380: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238384: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023838C: jr          $ra
    // 0x80238390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237818_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237818: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023781C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237824: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237828: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023782C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237830: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80237834: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80237838: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023783C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237840: jal         0x8009A3B4
    // 0x80237844: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237844: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80237848: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023784C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237850: jal         0x8009A3B4
    // 0x80237854: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237854: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80237858: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023785C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237860: jal         0x8009A3B4
    // 0x80237864: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237864: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237868: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023786C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237870: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237874: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x80237878: beq         $v0, $zero, L_80237CF4
    if (ctx->r2 == 0) {
        // 0x8023787C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80237CF4;
    }
    // 0x8023787C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237880: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237884: addu        $at, $at, $v0
    gpr jr_addend_8023788C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237888: lw          $v0, 0x5E70($at)
    ctx->r2 = ADD32(ctx->r1, 0X5E70);
    // 0x8023788C: jr          $v0
    // 0x80237890: nop

    switch (jr_addend_8023788C >> 2) {
        case 0: goto L_80237894; break;
        case 1: goto L_802378C0; break;
        case 2: goto L_802378EC; break;
        case 3: goto L_80237924; break;
        case 4: goto L_80237948; break;
        case 5: goto L_80237958; break;
        case 6: goto L_80237A58; break;
        case 7: goto L_80237A7C; break;
        case 8: goto L_80237AC0; break;
        case 9: goto L_80237AD0; break;
        case 10: goto L_80237B1C; break;
        case 11: goto L_80237B8C; break;
        case 12: goto L_80237BB8; break;
        case 13: goto L_80237C3C; break;
        case 14: goto L_80237C48; break;
        case 15: goto L_80237C68; break;
        case 16: goto L_80237C8C; break;
        case 17: goto L_80237CF4; break;
        default: switch_error(__func__, 0x8023788C, 0x80255E70);
    }
    // 0x80237890: nop

L_80237894:
    // 0x80237894: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237898: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023789C: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x802378A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x802378A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378A4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802378A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802378AC: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x802378B0: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_80237CF8;
    }
    // 0x802378B0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802378B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802378B8: j           L_80237CE8
    // 0x802378BC: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x802378BC: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_802378C0:
    // 0x802378C0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802378C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802378C8: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x802378CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x802378CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378D0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802378D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802378D8: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x802378DC: addiu       $v0, $zero, 0x1C
        ctx->r2 = ADD32(0, 0X1C);
            goto L_80237CF8;
    }
    // 0x802378DC: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x802378E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802378E4: j           L_80237CE8
    // 0x802378E8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x802378E8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_802378EC:
    // 0x802378EC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802378F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802378F4: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x802378F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x802378F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378FC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237900: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80237904: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237908: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80237CF8;
    }
    // 0x80237908: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023790C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80237910: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80237914: jal         0x80237D60
    // 0x80237918: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_3;
    // 0x80237918: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023791C: j           L_80237CE8
    // 0x80237920: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x80237920: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80237924:
    // 0x80237924: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80237928: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023792C: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237930: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237934: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237938: jal         0x80237D88
    // 0x8023793C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80237D88_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023793C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_4:
    // 0x80237940: j           L_80237CE8
    // 0x80237944: nop

        goto L_80237CE8;
    // 0x80237944: nop

L_80237948:
    // 0x80237948: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023794C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237950: j           L_80237CE8
    // 0x80237954: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x80237954: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80237958:
    // 0x80237958: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023795C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80237960: bne         $v1, $v0, L_80237A04
    if (ctx->r3 != ctx->r2) {
        // 0x80237964: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80237A04;
    }
    // 0x80237964: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237968: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x8023796C: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80237970: beq         $a1, $v0, L_802379C0
    if (ctx->r5 == ctx->r2) {
        // 0x80237974: slti        $v0, $a1, 0xE7
        ctx->r2 = SIGNED(ctx->r5) < 0XE7 ? 1 : 0;
            goto L_802379C0;
    }
    // 0x80237974: slti        $v0, $a1, 0xE7
    ctx->r2 = SIGNED(ctx->r5) < 0XE7 ? 1 : 0;
    // 0x80237978: beq         $v0, $zero, L_80237990
    if (ctx->r2 == 0) {
        // 0x8023797C: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_80237990;
    }
    // 0x8023797C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80237980: beq         $a1, $v0, L_802379AC
    if (ctx->r5 == ctx->r2) {
        // 0x80237984: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802379AC;
    }
    // 0x80237984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237988: j           L_80237CF4
    // 0x8023798C: nop

        goto L_80237CF4;
    // 0x8023798C: nop

L_80237990:
    // 0x80237990: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80237994: beq         $a1, $v0, L_802379D8
    if (ctx->r5 == ctx->r2) {
        // 0x80237998: addiu       $v0, $zero, 0x113
        ctx->r2 = ADD32(0, 0X113);
            goto L_802379D8;
    }
    // 0x80237998: addiu       $v0, $zero, 0x113
    ctx->r2 = ADD32(0, 0X113);
    // 0x8023799C: beq         $a1, $v0, L_802379F0
    if (ctx->r5 == ctx->r2) {
        // 0x802379A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802379F0;
    }
    // 0x802379A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802379A4: j           L_80237CF4
    // 0x802379A8: nop

        goto L_80237CF4;
    // 0x802379A8: nop

L_802379AC:
    // 0x802379AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802379B0: jal         0x80237D60
    // 0x802379B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80237D60_ovl28(rdram, ctx);
        goto after_5;
    // 0x802379B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802379B8: j           L_802379DC
    // 0x802379BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802379DC;
    // 0x802379BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802379C0:
    // 0x802379C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802379C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802379C8: jal         0x80237D60
    // 0x802379CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80237D60_ovl28(rdram, ctx);
        goto after_6;
    // 0x802379CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_6:
    // 0x802379D0: j           L_802379F0
    // 0x802379D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802379F0;
    // 0x802379D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802379D8:
    // 0x802379D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802379DC:
    // 0x802379DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802379E0: jal         0x80237D88
    // 0x802379E4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_80237D88_ovl28(rdram, ctx);
        goto after_7;
    // 0x802379E4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_7:
    // 0x802379E8: j           L_80237CF8
    // 0x802379EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237CF8;
    // 0x802379EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802379F0:
    // 0x802379F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802379F4: jal         0x80237D88
    // 0x802379F8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80237D88_ovl28(rdram, ctx);
        goto after_8;
    // 0x802379F8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_8:
    // 0x802379FC: j           L_80237CF8
    // 0x80237A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237CF8;
    // 0x80237A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237A04:
    // 0x80237A04: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237A08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A0C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237A10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237A14: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237A18: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80237CF8;
    }
    // 0x80237A18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237A1C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80237A20: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80237A24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237A28: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237A2C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80237A30: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    // 0x80237A34: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237A38: jal         0x80237D60
    // 0x80237A3C: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_9;
    // 0x80237A3C: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    after_9:
    // 0x80237A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A44: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237A48: jal         0x80237D88
    // 0x80237A4C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237D88_ovl28(rdram, ctx);
        goto after_10;
    // 0x80237A4C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x80237A50: j           L_80237CE8
    // 0x80237A54: nop

        goto L_80237CE8;
    // 0x80237A54: nop

L_80237A58:
    // 0x80237A58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237A5C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237A60: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237A64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80237A68: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237A6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A70: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237A74: j           L_80237CE0
    // 0x80237A78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80237CE0;
    // 0x80237A78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80237A7C:
    // 0x80237A7C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80237A80: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80237A84: bne         $a1, $v0, L_80237AA4
    if (ctx->r5 != ctx->r2) {
        // 0x80237A88: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80237AA4;
    }
    // 0x80237A88: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80237A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237A94: jal         0x80237D88
    // 0x80237A98: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_80237D88_ovl28(rdram, ctx);
        goto after_11;
    // 0x80237A98: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_11:
    // 0x80237A9C: j           L_80237CF8
    // 0x80237AA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237CF8;
    // 0x80237AA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237AA4:
    // 0x80237AA4: bne         $a1, $v0, L_80237CF8
    if (ctx->r5 != ctx->r2) {
        // 0x80237AA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237AAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237AB0: jal         0x80237D88
    // 0x80237AB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237D88_ovl28(rdram, ctx);
        goto after_12;
    // 0x80237AB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80237AB8: j           L_80237CE8
    // 0x80237ABC: nop

        goto L_80237CE8;
    // 0x80237ABC: nop

L_80237AC0:
    // 0x80237AC0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237AC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237AC8: j           L_80237CE8
    // 0x80237ACC: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x80237ACC: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80237AD0:
    // 0x80237AD0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237AD4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237AD8: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237ADC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237AE0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237AE8: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237AEC: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80237CF8;
    }
    // 0x80237AEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237AF0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80237AF4: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80237AF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237AFC: jal         0x80237D60
    // 0x80237B00: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_13;
    // 0x80237B00: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    after_13:
    // 0x80237B04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237B0C: jal         0x80237D88
    // 0x80237B10: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80237D88_ovl28(rdram, ctx);
        goto after_14;
    // 0x80237B10: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_14:
    // 0x80237B14: j           L_80237CE8
    // 0x80237B18: nop

        goto L_80237CE8;
    // 0x80237B18: nop

L_80237B1C:
    // 0x80237B1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237B20: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237B24: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237B28: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237B2C: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237B30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B34: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80237B38: bne         $a1, $v1, L_80237B68
    if (ctx->r5 != ctx->r3) {
        // 0x80237B3C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80237B68;
    }
    // 0x80237B3C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80237B40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B44: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237B48: jal         0x80237D60
    // 0x80237B4C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80237D60_ovl28(rdram, ctx);
        goto after_15;
    // 0x80237B4C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_15:
    // 0x80237B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237B58: jal         0x80237D88
    // 0x80237B5C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_80237D88_ovl28(rdram, ctx);
        goto after_16;
    // 0x80237B5C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_16:
    // 0x80237B60: j           L_80237CF8
    // 0x80237B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237CF8;
    // 0x80237B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237B68:
    // 0x80237B68: beq         $a1, $v0, L_80237BE0
    if (ctx->r5 == ctx->r2) {
        // 0x80237B6C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80237BE0;
    }
    // 0x80237B6C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80237B70: bne         $a1, $v0, L_80237CF8
    if (ctx->r5 != ctx->r2) {
        // 0x80237B74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237B7C: jal         0x80237D88
    // 0x80237B80: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_80237D88_ovl28(rdram, ctx);
        goto after_17;
    // 0x80237B80: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_17:
    // 0x80237B84: j           L_80237CE8
    // 0x80237B88: nop

        goto L_80237CE8;
    // 0x80237B88: nop

L_80237B8C:
    // 0x80237B8C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80237B90: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80237B94: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237B98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237B9C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80237BA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237BA4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80237BA8: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    // 0x80237BAC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80237BB0: j           L_80237CE8
    // 0x80237BB4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80237CE8;
    // 0x80237BB4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_80237BB8:
    // 0x80237BB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237BBC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237BC0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237BC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237BC8: bne         $v1, $v0, L_80237BFC
    if (ctx->r3 != ctx->r2) {
        // 0x80237BCC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80237BFC;
    }
    // 0x80237BCC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80237BD0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237BD4: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80237BD8: bne         $v1, $v0, L_80237BF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237BDC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80237BF8;
    }
    // 0x80237BDC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80237BE0:
    // 0x80237BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237BE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237BE8: jal         0x80237D88
    // 0x80237BEC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80237D88_ovl28(rdram, ctx);
        goto after_18;
    // 0x80237BEC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_18:
    // 0x80237BF0: j           L_80237CF8
    // 0x80237BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237CF8;
    // 0x80237BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237BF8:
    // 0x80237BF8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_80237BFC:
    // 0x80237BFC: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237C00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C04: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C0C: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237C10: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80237CF8;
    }
    // 0x80237C10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237C14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80237C18: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237C1C: jal         0x80237D60
    // 0x80237C20: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_19;
    // 0x80237C20: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    after_19:
    // 0x80237C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237C2C: jal         0x80237D88
    // 0x80237C30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80237D88_ovl28(rdram, ctx);
        goto after_20;
    // 0x80237C30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_20:
    // 0x80237C34: j           L_80237CE8
    // 0x80237C38: nop

        goto L_80237CE8;
    // 0x80237C38: nop

L_80237C3C:
    // 0x80237C3C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80237C40: j           L_80237CE0
    // 0x80237C44: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_80237CE0;
    // 0x80237C44: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80237C48:
    // 0x80237C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C4C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80237C50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237C54: jal         0x8004DA90
    // 0x80237C58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_21;
    // 0x80237C58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
    // 0x80237C5C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80237C60: j           L_80237CE0
    // 0x80237C64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237CE0;
    // 0x80237C64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80237C68:
    // 0x80237C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C6C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80237C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237C74: jal         0x8004DA90
    // 0x80237C78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_22;
    // 0x80237C78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_22:
    // 0x80237C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237C84: j           L_80237CE8
    // 0x80237C88: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237CE8;
    // 0x80237C88: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80237C8C:
    // 0x80237C8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237C90: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80237C94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237C98: jal         0x8004DA90
    // 0x80237C9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_23;
    // 0x80237C9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x80237CA0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80237CA4: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x80237CA8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80237CAC: xori        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 ^ 0XB;
    // 0x80237CB0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80237CB4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80237CB8: beq         $v1, $zero, L_80237CC8
    if (ctx->r3 == 0) {
        // 0x80237CBC: addiu       $a0, $zero, 0x91
        ctx->r4 = ADD32(0, 0X91);
            goto L_80237CC8;
    }
    // 0x80237CBC: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    // 0x80237CC0: jal         0x8002A33C
    // 0x80237CC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_24;
    // 0x80237CC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_24:
L_80237CC8:
    // 0x80237CC8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237CCC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80237CD0: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237CD4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237CD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CD8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80237CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237CE0:
    // 0x80237CE0: bne         $v1, $v0, L_80237CF8
    if (ctx->r3 != ctx->r2) {
        // 0x80237CE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237CF8;
    }
    // 0x80237CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237CE8:
    // 0x80237CE8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237CEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237CF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80237CF4:
    // 0x80237CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237CF8:
    // 0x80237CF8: jal         0x80237DB0
    // 0x80237CFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80237DB0_ovl28(rdram, ctx);
        goto after_25;
    // 0x80237CFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_25:
    // 0x80237D00: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80237D04: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80237D08: beq         $a1, $v0, L_80237D24
    if (ctx->r5 == ctx->r2) {
        // 0x80237D0C: nop
    
            goto L_80237D24;
    }
    // 0x80237D0C: nop

    // 0x80237D10: lh          $a2, 0x2($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X2);
    // 0x80237D14: jal         0x80050294
    // 0x80237D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_26;
    // 0x80237D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_26:
    // 0x80237D1C: j           L_80237D2C
    // 0x80237D20: nop

        goto L_80237D2C;
    // 0x80237D20: nop

L_80237D24:
    // 0x80237D24: jal         0x8005044C
    // 0x80237D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_27;
    // 0x80237D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_27:
L_80237D2C:
    // 0x80237D2C: lbu         $v0, 0x12($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X12);
    // 0x80237D30: beq         $v0, $zero, L_80237D48
    if (ctx->r2 == 0) {
        // 0x80237D34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237D48;
    }
    // 0x80237D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237D38: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80237D3C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80237D40: jal         0x8003B564
    // 0x80237D44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_28;
    // 0x80237D44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_28:
L_80237D48:
    // 0x80237D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237D4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237D50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237D54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237D58: jr          $ra
    // 0x80237D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AC48_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AC4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AC50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AC58: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023AC5C: beq         $v0, $a1, L_8023AC7C
    if (ctx->r2 == ctx->r5) {
        // 0x8023AC60: nop
    
            goto L_8023AC7C;
    }
    // 0x8023AC60: nop

    // 0x8023AC64: jal         0x80050294
    // 0x8023AC68: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023AC68: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    after_0:
    // 0x8023AC6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AC70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AC74: j           L_8023AC84
    // 0x8023AC78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023AC84;
    // 0x8023AC78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AC7C:
    // 0x8023AC7C: jal         0x8005044C
    // 0x8023AC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023AC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023AC84:
    // 0x8023AC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AC88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC8C: jr          $ra
    // 0x8023AC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802356E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802356E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802356E8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802356EC: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x802356F0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802356F4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802356F8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802356FC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235700: lw          $v0, 0x3B68($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B68);
    // 0x80235704: jr          $ra
    // 0x80235708: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235708: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80244030_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244030: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80244034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244038: lui         $a3, 0xFF00
    ctx->r7 = S32(0XFF00 << 16);
    // 0x8024403C: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
L_80244040:
    // 0x80244040: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80244044: bgez        $v0, L_80244050
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80244048: andi        $v1, $a1, 0xFF
        ctx->r3 = ctx->r5 & 0XFF;
            goto L_80244050;
    }
    // 0x80244048: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8024404C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
L_80244050:
    // 0x80244050: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80244054: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80244058: beq         $v0, $zero, L_8024407C
    if (ctx->r2 == 0) {
        // 0x8024405C: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_8024407C;
    }
    // 0x8024405C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80244060: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80244064: lw          $v0, 0xD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD0);
    // 0x80244068: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x8024406C: bne         $v0, $zero, L_80244080
    if (ctx->r2 != 0) {
        // 0x80244070: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80244080;
    }
    // 0x80244070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244074: j           L_80244040
    // 0x80244078: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_80244040;
    // 0x80244078: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8024407C:
    // 0x8024407C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80244080:
    // 0x80244080: jr          $ra
    // 0x80244084: nop

    TRACE_RETURN()
    return;
    // 0x80244084: nop

    // 0x80244088: nop

    // 0x8024408C: nop

;}
RECOMP_FUNC void func_8024A6B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A6B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A6B8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024A6BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024A6C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A6C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A6C8: lw          $v0, 0x523C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X523C);
    // 0x8024A6CC: jalr        $v0
    // 0x8024A6D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024A6D0: nop

    after_0:
    // 0x8024A6D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A6D8: jr          $ra
    // 0x8024A6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F650_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F660: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023F664: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F668: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F66C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F670: lw          $v0, 0x49A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X49A0);
    // 0x8023F674: jalr        $v0
    // 0x8023F678: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023F678: nop

    after_0:
    // 0x8023F67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F680: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023F684: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023F688: jal         0x8003B564
    // 0x8023F68C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x8023F68C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8023F690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023F694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F698: jr          $ra
    // 0x8023F69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023F69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231ED0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231ED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231ED4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231ED8: lh          $a1, 0x56($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X56);
    // 0x80231EDC: lh          $v0, 0x384($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X384);
    // 0x80231EE0: bne         $a1, $v0, L_80231EF8
    if (ctx->r5 != ctx->r2) {
        // 0x80231EE4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_80231EF8;
    }
    // 0x80231EE4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80231EE8: jal         0x802324AC
    // 0x80231EEC: nop

    func_802324AC_ovl28(rdram, ctx);
        goto after_0;
    // 0x80231EEC: nop

    after_0:
    // 0x80231EF0: j           L_80231F44
    // 0x80231EF4: nop

        goto L_80231F44;
    // 0x80231EF4: nop

L_80231EF8:
    // 0x80231EF8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80231EFC: bne         $v0, $zero, L_80231F08
    if (ctx->r2 != 0) {
        // 0x80231F00: addiu       $v0, $v1, -0x10
        ctx->r2 = ADD32(ctx->r3, -0X10);
            goto L_80231F08;
    }
    // 0x80231F00: addiu       $v0, $v1, -0x10
    ctx->r2 = ADD32(ctx->r3, -0X10);
    // 0x80231F04: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_80231F08:
    // 0x80231F08: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80231F0C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80231F10: lw          $v1, 0x358($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X358);
    // 0x80231F14: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231F18: beq         $v1, $zero, L_80231F44
    if (ctx->r3 == 0) {
        // 0x80231F1C: sh          $v0, 0x56($a0)
        MEM_H(0X56, ctx->r4) = ctx->r2;
            goto L_80231F44;
    }
    // 0x80231F1C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80231F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231F24: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231F28: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231F2C: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231F30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231F34: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231F38: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80231F3C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80231F40: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80231F44:
    // 0x80231F44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231F48: jr          $ra
    // 0x80231F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024AC04_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AC04: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8024AC08: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8024AC0C: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8024AC10: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8024AC14: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8024AC18: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8024AC1C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8024AC20: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8024AC24: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8024AC28: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8024AC2C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8024AC30: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8024AC34: lb          $a0, 0xC($s7)
    ctx->r4 = MEM_B(ctx->r23, 0XC);
    // 0x8024AC38: addiu       $fp, $s7, 0x28
    ctx->r30 = ADD32(ctx->r23, 0X28);
    // 0x8024AC3C: jal         0x80053ED8
    // 0x8024AC40: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024AC40: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    after_0:
    // 0x8024AC44: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8024AC48: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_8024AC4C:
    // 0x8024AC4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024AC50: addu        $s4, $v0, $fp
    ctx->r20 = ADD32(ctx->r2, ctx->r30);
    // 0x8024AC54: lb          $v0, 0x2($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X2);
    // 0x8024AC58: bne         $v0, $zero, L_8024AF2C
    if (ctx->r2 != 0) {
        // 0x8024AC5C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024AF2C;
    }
    // 0x8024AC5C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024AC60: lbu         $s1, 0x1($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0X1);
    // 0x8024AC64: lbu         $s3, 0x0($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X0);
    // 0x8024AC68: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x8024AC6C: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8024AC70: jal         0x800324B4
    // 0x8024AC74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8024AC74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8024AC78: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8024AC7C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AC80: mflo        $s0
    ctx->r16 = lo;
    // 0x8024AC84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024AC88: nop

    // 0x8024AC8C: jal         0x80032498
    // 0x8024AC90: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8024AC90: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_2:
    // 0x8024AC94: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8024AC98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AC9C: mflo        $s2
    ctx->r18 = lo;
    // 0x8024ACA0: sll         $s3, $s3, 7
    ctx->r19 = S32(ctx->r19 << 7);
    // 0x8024ACA4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8024ACA8: jal         0x800324B4
    // 0x8024ACAC: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8024ACAC: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    after_3:
    // 0x8024ACB0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8024ACB4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8024ACB8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024ACBC: mflo        $v0
    ctx->r2 = lo;
    // 0x8024ACC0: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x8024ACC4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8024ACC8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024ACCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024ACD0: jal         0x80032498
    // 0x8024ACD4: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x8024ACD4: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    after_4:
    // 0x8024ACD8: nop

    // 0x8024ACDC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024ACE0: mflo        $v0
    ctx->r2 = lo;
    // 0x8024ACE4: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x8024ACE8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024ACEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024ACF0: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    // 0x8024ACF4: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x8024ACF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024ACFC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8024AD00: jal         0x800324B4
    // 0x8024AD04: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8024AD04: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_5:
    // 0x8024AD08: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8024AD0C: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x8024AD10: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024AD14: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AD18: mflo        $s0
    ctx->r16 = lo;
    // 0x8024AD1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024AD20: nop

    // 0x8024AD24: jal         0x80032498
    // 0x8024AD28: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8024AD28: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_6:
    // 0x8024AD2C: lh          $v1, 0x6($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6);
    // 0x8024AD30: lbu         $a0, 0x3($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X3);
    // 0x8024AD34: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024AD38: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AD3C: mflo        $s1
    ctx->r17 = lo;
    // 0x8024AD40: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8024AD44: nop

    // 0x8024AD48: jal         0x800324B4
    // 0x8024AD4C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8024AD4C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    after_7:
    // 0x8024AD50: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8024AD54: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8024AD58: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AD5C: mflo        $v0
    ctx->r2 = lo;
    // 0x8024AD60: lhu         $v1, 0x38($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X38);
    // 0x8024AD64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8024AD68: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024AD6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AD70: jal         0x80032498
    // 0x8024AD74: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x8024AD74: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    after_8:
    // 0x8024AD78: nop

    // 0x8024AD7C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AD80: mflo        $v0
    ctx->r2 = lo;
    // 0x8024AD84: lhu         $v1, 0x3C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X3C);
    // 0x8024AD88: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024AD8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AD90: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x8024AD94: lhu         $v0, 0x3A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3A);
    // 0x8024AD98: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8024AD9C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8024ADA0: lh          $v0, 0x6($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X6);
    // 0x8024ADA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024ADA8: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8024ADAC: bne         $v0, $zero, L_8024ADB8
    if (ctx->r2 != 0) {
        // 0x8024ADB0: addiu       $v0, $v1, -0x8
        ctx->r2 = ADD32(ctx->r3, -0X8);
            goto L_8024ADB8;
    }
    // 0x8024ADB0: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
    // 0x8024ADB4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8024ADB8:
    // 0x8024ADB8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8024ADBC: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8024ADC0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8024ADC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024ADC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8024ADCC: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8024ADD0: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8024ADD4: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x8024ADD8: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x8024ADDC: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x8024ADE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024ADE4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8024ADE8: and         $a0, $a0, $t1
    ctx->r4 = ctx->r4 & ctx->r9;
    // 0x8024ADEC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024ADF0: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x8024ADF4: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8024ADF8: and         $a1, $a1, $t1
    ctx->r5 = ctx->r5 & ctx->r9;
    // 0x8024ADFC: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x8024AE00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AE04: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8024AE08: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x8024AE0C: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x8024AE10: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8024AE14: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8024AE18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AE1C: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8024AE20: and         $a3, $a3, $t1
    ctx->r7 = ctx->r7 & ctx->r9;
    // 0x8024AE24: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x8024AE28: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8024AE2C: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    // 0x8024AE30: jal         0x8024AF94
    // 0x8024AE34: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    func_8024AF94_ovl28(rdram, ctx);
        goto after_9;
    // 0x8024AE34: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    after_9:
    // 0x8024AE38: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8024AE3C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8024AE40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024AE44: beq         $v0, $zero, L_8024AE6C
    if (ctx->r2 == 0) {
        // 0x8024AE48: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8024AE6C;
    }
    // 0x8024AE48: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8024AE4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024AE50: addu        $a1, $v0, $fp
    ctx->r5 = ADD32(ctx->r2, ctx->r30);
    // 0x8024AE54: lbu         $a0, 0x4($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X4);
    // 0x8024AE58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024AE5C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8024AE60: beq         $v1, $v0, L_8024AE6C
    if (ctx->r3 == ctx->r2) {
        // 0x8024AE64: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8024AE6C;
    }
    // 0x8024AE64: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8024AE68: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
L_8024AE6C:
    // 0x8024AE6C: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8024AE70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024AE74: addu        $s0, $v0, $fp
    ctx->r16 = ADD32(ctx->r2, ctx->r30);
    // 0x8024AE78: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8024AE7C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8024AE80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024AE84: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8024AE88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AE8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024AE90: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024AE94: beq         $v0, $zero, L_8024AF38
    if (ctx->r2 == 0) {
        // 0x8024AE98: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8024AF38;
    }
    // 0x8024AE98: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8024AE9C: jal         0x800A3450
    // 0x8024AEA0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x8024AEA0: nop

    after_10:
    // 0x8024AEA4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024AEA8: jal         0x800A3450
    // 0x8024AEAC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8024AEAC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_11:
    // 0x8024AEB0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024AEB4: jal         0x800A3450
    // 0x8024AEB8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x8024AEB8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_12:
    // 0x8024AEBC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024AEC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AEC4: jal         0x800A3450
    // 0x8024AEC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8024AEC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_13:
    // 0x8024AECC: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x8024AED0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024AED4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AED8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024AEDC: lbu         $v1, 0x5251($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5251);
    // 0x8024AEE0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024AEE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AEE8: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8024AEEC: lbu         $v0, 0x3($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X3);
    // 0x8024AEF0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024AEF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AEF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024AEFC: lhu         $v0, 0x5252($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5252);
    // 0x8024AF00: jal         0x800A3450
    // 0x8024AF04: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x8024AF04: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_14:
    // 0x8024AF08: lbu         $v1, 0x3($s7)
    ctx->r3 = MEM_BU(ctx->r23, 0X3);
    // 0x8024AF0C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024AF10: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AF14: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024AF18: lhu         $v1, 0x5254($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5254);
    // 0x8024AF1C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024AF20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AF24: j           L_8024AF38
    // 0x8024AF28: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
        goto L_8024AF38;
    // 0x8024AF28: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
L_8024AF2C:
    // 0x8024AF2C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024AF30: sb          $v0, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r2;
    // 0x8024AF34: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8024AF38:
    // 0x8024AF38: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8024AF3C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8024AF40: bne         $v0, $zero, L_8024AC4C
    if (ctx->r2 != 0) {
        // 0x8024AF44: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8024AC4C;
    }
    // 0x8024AF44: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8024AF48: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8024AF4C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8024AF50: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8024AF54: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8024AF58: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8024AF5C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8024AF60: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8024AF64: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8024AF68: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8024AF6C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8024AF70: jr          $ra
    // 0x8024AF74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8024AF74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022E1E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E1E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E1F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E1F8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E1FC: bgez        $v0, L_8022E220
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E200: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022E220;
    }
    // 0x8022E200: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E204: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E208: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022E20C: beq         $a0, $v0, L_8022E220
    if (ctx->r4 == ctx->r2) {
        // 0x8022E210: nop
    
            goto L_8022E220;
    }
    // 0x8022E210: nop

    // 0x8022E214: jal         0x8022FEA8
    // 0x8022E218: nop

    func_8022FEA8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022E218: nop

    after_0:
    // 0x8022E21C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E220:
    // 0x8022E220: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022E224: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E228: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E22C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E230: bne         $v0, $zero, L_8022E29C
    if (ctx->r2 != 0) {
        // 0x8022E234: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022E29C;
    }
    // 0x8022E234: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022E238: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E23C: bne         $a0, $v0, L_8022E254
    if (ctx->r4 != ctx->r2) {
        // 0x8022E240: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022E254;
    }
    // 0x8022E240: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022E244: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E248: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E24C: j           L_8022E26C
    // 0x8022E250: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022E26C;
    // 0x8022E250: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E254:
    // 0x8022E254: jal         0x8022FEB8
    // 0x8022E258: nop

    func_8022FEB8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E258: nop

    after_1:
    // 0x8022E25C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E260: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E264: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E268: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022E26C:
    // 0x8022E26C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022E270: beq         $v0, $zero, L_8022E284
    if (ctx->r2 == 0) {
        // 0x8022E274: nop
    
            goto L_8022E284;
    }
    // 0x8022E274: nop

    // 0x8022E278: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022E27C: j           L_8022E294
    // 0x8022E280: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_8022E294;
    // 0x8022E280: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022E284:
    // 0x8022E284: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022E288: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E28C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E290: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022E294:
    // 0x8022E294: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022E298: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022E29C:
    // 0x8022E29C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E2A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E2A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E2A8: jr          $ra
    // 0x8022E2AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E2AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246360_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024636C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246370: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80246374: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80246378: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x8024637C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246380: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80246384: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x80246388: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x8024638C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80246390: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80246394: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80246398: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024639C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802463A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802463A4: lw          $v1, 0x4CC0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4CC0);
    // 0x802463A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802463AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802463B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802463B4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x802463B8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802463BC: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x802463C0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802463C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802463C8: sb          $a0, 0x6430($at)
    MEM_B(0X6430, ctx->r1) = ctx->r4;
    // 0x802463CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802463D0: sb          $v0, 0x6431($at)
    MEM_B(0X6431, ctx->r1) = ctx->r2;
    // 0x802463D4: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x802463D8: beq         $v0, $zero, L_80246430
    if (ctx->r2 == 0) {
        // 0x802463DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80246430;
    }
    // 0x802463DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802463E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802463E4: addu        $at, $at, $v0
    gpr jr_addend_802463EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802463E8: lw          $v0, 0x61C8($at)
    ctx->r2 = ADD32(ctx->r1, 0X61C8);
    // 0x802463EC: jr          $v0
    // 0x802463F0: nop

    switch (jr_addend_802463EC >> 2) {
        case 0: goto L_802463F4; break;
        case 1: goto L_80246430; break;
        case 2: goto L_80246430; break;
        case 3: goto L_80246430; break;
        case 4: goto L_80246430; break;
        case 5: goto L_80246430; break;
        case 6: goto L_80246430; break;
        case 7: goto L_80246430; break;
        case 8: goto L_80246430; break;
        case 9: goto L_802463FC; break;
        case 10: goto L_80246430; break;
        case 11: goto L_80246430; break;
        case 12: goto L_80246430; break;
        case 13: goto L_80246430; break;
        case 14: goto L_80246404; break;
        case 15: goto L_80246430; break;
        case 16: goto L_80246430; break;
        case 17: goto L_80246430; break;
        case 18: goto L_80246430; break;
        case 19: goto L_8024640C; break;
        case 20: goto L_80246414; break;
        case 21: goto L_80246430; break;
        case 22: goto L_80246430; break;
        case 23: goto L_80246430; break;
        case 24: goto L_80246430; break;
        case 25: goto L_80246430; break;
        case 26: goto L_8024641C; break;
        case 27: goto L_80246430; break;
        case 28: goto L_80246430; break;
        case 29: goto L_80246424; break;
        default: switch_error(__func__, 0x802463EC, 0x802561C8);
    }
    // 0x802463F0: nop

L_802463F4:
    // 0x802463F4: j           L_80246428
    // 0x802463F8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_80246428;
    // 0x802463F8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_802463FC:
    // 0x802463FC: j           L_80246428
    // 0x80246400: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80246428;
    // 0x80246400: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_80246404:
    // 0x80246404: j           L_80246428
    // 0x80246408: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80246428;
    // 0x80246408: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8024640C:
    // 0x8024640C: j           L_80246428
    // 0x80246410: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_80246428;
    // 0x80246410: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_80246414:
    // 0x80246414: j           L_80246428
    // 0x80246418: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_80246428;
    // 0x80246418: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_8024641C:
    // 0x8024641C: j           L_80246428
    // 0x80246420: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_80246428;
    // 0x80246420: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_80246424:
    // 0x80246424: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_80246428:
    // 0x80246428: jal         0x80060590
    // 0x8024642C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8024642C: nop

    after_0:
L_80246430:
    // 0x80246430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246434: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80246438: jal         0x80246450
    // 0x8024643C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80246450_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024643C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80246440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246444: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246448: jr          $ra
    // 0x8024644C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024644C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233D40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233D40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233D44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233D48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233D4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233D50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80233D54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233D58: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233D5C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233D60: addiu       $a1, $s0, 0xF
    ctx->r5 = ADD32(ctx->r16, 0XF);
    // 0x80233D64: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233D68: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233D6C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233D70: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80233D74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233D78: jal         0x8004D5D4
    // 0x80233D7C: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80233D7C: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_0:
    // 0x80233D80: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233D84: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80233D88: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80233D8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80233D90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233D94: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80233D98: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x80233D9C: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80233DA0: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80233DA4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80233DA8: bne         $v0, $zero, L_80233DB8
    if (ctx->r2 != 0) {
        // 0x80233DAC: sw          $zero, 0x354($s0)
        MEM_W(0X354, ctx->r16) = 0;
            goto L_80233DB8;
    }
    // 0x80233DAC: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80233DB0: j           L_80233DBC
    // 0x80233DB4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
        goto L_80233DBC;
    // 0x80233DB4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_80233DB8:
    // 0x80233DB8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233DBC:
    // 0x80233DBC: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x80233DC0: sh          $zero, 0x66($s2)
    MEM_H(0X66, ctx->r18) = 0;
    // 0x80233DC4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80233DC8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233DCC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80233DD0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233DD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233DD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233DDC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233DE0: addiu       $a0, $s2, 0x18
    ctx->r4 = ADD32(ctx->r18, 0X18);
    // 0x80233DE4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80233DE8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80233DEC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80233DF0: jal         0x800540BC
    // 0x80233DF4: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80233DF4: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    after_1:
    // 0x80233DF8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233DFC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80233E00: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233E04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233E08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233E0C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233E10: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80233E14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233E18: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80233E1C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233E20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233E2C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233E30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80233E34: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80233E38: addiu       $v0, $v0, 0x39F0
    ctx->r2 = ADD32(ctx->r2, 0X39F0);
    // 0x80233E3C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80233E40: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80233E44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233E48: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80233E4C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233E50: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x80233E54: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80233E58: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80233E5C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80233E60: jal         0x80050294
    // 0x80233E64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80233E64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x80233E68: jal         0x80040F30
    // 0x80233E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80233E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233E70: sw          $v0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r2;
    // 0x80233E74: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80233E78: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80233E7C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233E80: sh          $v0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r2;
    // 0x80233E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233E88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233E8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233E90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233E94: jr          $ra
    // 0x80233E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238600_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023860C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238610: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80238614: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238618: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023861C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238620: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238624: jal         0x8004D5D4
    // 0x80238628: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80238628: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023862C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238630: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238638: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023863C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80238640: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238644: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80238648: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023864C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80238650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238654: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238658: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023865C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80238660: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238664: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80238668: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x8023866C: jal         0x80238F9C
    // 0x80238670: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    func_80238F9C_ovl28(rdram, ctx);
        goto after_1;
    // 0x80238670: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    after_1:
    // 0x80238674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238678: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023867C: jal         0x80238FC4
    // 0x80238680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80238FC4_ovl28(rdram, ctx);
        goto after_2;
    // 0x80238680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80238684: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238688: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023868C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238690: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80238694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238698: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023869C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802386A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802386A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802386A8: jr          $ra
    // 0x802386AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802386AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235B4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235B50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B58: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80235B5C: lhu         $a0, -0x730C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X730C);
    // 0x80235B60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235B64: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235B68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235B6C: andi        $a0, $a0, 0x7C
    ctx->r4 = ctx->r4 & 0X7C;
    // 0x80235B70: jal         0x800324B4
    // 0x80235B74: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80235B74: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_0:
    // 0x80235B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B7C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80235B80: lui         $v1, 0xFED5
    ctx->r3 = S32(0XFED5 << 16);
    // 0x80235B84: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80235B88: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
    // 0x80235B8C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80235B90: jal         0x8005044C
    // 0x80235B94: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80235B94: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    after_1:
    // 0x80235B98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235B9C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235BA0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80235BA4: beq         $v1, $v0, L_80235CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80235BA8: slti        $v0, $v1, 0x97
        ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
            goto L_80235CA0;
    }
    // 0x80235BA8: slti        $v0, $v1, 0x97
    ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
    // 0x80235BAC: beq         $v0, $zero, L_80235BF0
    if (ctx->r2 == 0) {
        // 0x80235BB0: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80235BF0;
    }
    // 0x80235BB0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80235BB4: beq         $v1, $v0, L_80235C58
    if (ctx->r3 == ctx->r2) {
        // 0x80235BB8: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_80235C58;
    }
    // 0x80235BB8: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x80235BBC: beq         $v0, $zero, L_80235BD4
    if (ctx->r2 == 0) {
        // 0x80235BC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235BD4;
    }
    // 0x80235BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235BC4: beql        $v1, $v0, L_80235C30
    if (ctx->r3 == ctx->r2) {
        // 0x80235BC8: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80235C30;
    }
    goto skip_0;
    // 0x80235BC8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_0:
    // 0x80235BCC: j           L_80235CB4
    // 0x80235BD0: nop

        goto L_80235CB4;
    // 0x80235BD0: nop

L_80235BD4:
    // 0x80235BD4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235BD8: beq         $v1, $v0, L_80235CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80235BDC: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_80235CA0;
    }
    // 0x80235BDC: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80235BE0: beql        $v1, $v0, L_80235C6C
    if (ctx->r3 == ctx->r2) {
        // 0x80235BE4: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80235C6C;
    }
    goto skip_1;
    // 0x80235BE4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_1:
    // 0x80235BE8: j           L_80235CB4
    // 0x80235BEC: nop

        goto L_80235CB4;
    // 0x80235BEC: nop

L_80235BF0:
    // 0x80235BF0: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80235BF4: beq         $v1, $v0, L_80235CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80235BF8: slti        $v0, $v1, 0xDD
        ctx->r2 = SIGNED(ctx->r3) < 0XDD ? 1 : 0;
            goto L_80235CA0;
    }
    // 0x80235BF8: slti        $v0, $v1, 0xDD
    ctx->r2 = SIGNED(ctx->r3) < 0XDD ? 1 : 0;
    // 0x80235BFC: beq         $v0, $zero, L_80235C14
    if (ctx->r2 == 0) {
        // 0x80235C00: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80235C14;
    }
    // 0x80235C00: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80235C04: beql        $v1, $v0, L_80235C7C
    if (ctx->r3 == ctx->r2) {
        // 0x80235C08: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80235C7C;
    }
    goto skip_2;
    // 0x80235C08: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_2:
    // 0x80235C0C: j           L_80235CB4
    // 0x80235C10: nop

        goto L_80235CB4;
    // 0x80235C10: nop

L_80235C14:
    // 0x80235C14: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x80235C18: beq         $v1, $v0, L_80235C8C
    if (ctx->r3 == ctx->r2) {
        // 0x80235C1C: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_80235C8C;
    }
    // 0x80235C1C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80235C20: beql        $v1, $v0, L_80235CA4
    if (ctx->r3 == ctx->r2) {
        // 0x80235C24: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80235CA4;
    }
    goto skip_3;
    // 0x80235C24: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_3:
    // 0x80235C28: j           L_80235CB4
    // 0x80235C2C: nop

        goto L_80235CB4;
    // 0x80235C2C: nop

L_80235C30:
    // 0x80235C30: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C34: lw          $v0, 0x3C50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C50);
    // 0x80235C38: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80235C3C: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x80235C40: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80235C44: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C48: lw          $v0, 0x3BEC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BEC);
    // 0x80235C4C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80235C50: j           L_80235CB4
    // 0x80235C54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_80235CB4;
    // 0x80235C54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80235C58:
    // 0x80235C58: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80235C5C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C60: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235C64: j           L_80235CB0
    // 0x80235C68: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80235CB0;
    // 0x80235C68: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235C6C:
    // 0x80235C6C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C70: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235C74: j           L_80235CB0
    // 0x80235C78: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80235CB0;
    // 0x80235C78: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235C7C:
    // 0x80235C7C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C80: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235C84: j           L_80235CB0
    // 0x80235C88: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80235CB0;
    // 0x80235C88: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235C8C:
    // 0x80235C8C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80235C90: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C94: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235C98: j           L_80235CB0
    // 0x80235C9C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80235CB0;
    // 0x80235C9C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235CA0:
    // 0x80235CA0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80235CA4:
    // 0x80235CA4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235CA8: lw          $v0, 0x3C50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C50);
    // 0x80235CAC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235CB0:
    // 0x80235CB0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_80235CB4:
    // 0x80235CB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235CB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235CBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235CC0: jr          $ra
    // 0x80235CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244C08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244C08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80244C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244C10: jr          $ra
    // 0x80244C14: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80244C14: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802309F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802309F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802309F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802309FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230A00: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80230A04: blez        $v0, L_80230A38
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230A08: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230A38;
    }
    // 0x80230A08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230A0C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230A10: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80230A14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230A18: bne         $v0, $zero, L_80230AA0
    if (ctx->r2 != 0) {
        // 0x80230A1C: nop
    
            goto L_80230AA0;
    }
    // 0x80230A1C: nop

    // 0x80230A20: jal         0x800A3450
    // 0x80230A24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80230A24: nop

    after_0:
    // 0x80230A28: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80230A2C: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80230A30: j           L_80230AA0
    // 0x80230A34: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80230AA0;
    // 0x80230A34: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80230A38:
    // 0x80230A38: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80230A3C: blez        $v0, L_80230A8C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230A40: nop
    
            goto L_80230A8C;
    }
    // 0x80230A40: nop

    // 0x80230A44: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80230A48: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80230A4C: bne         $v0, $zero, L_80230A70
    if (ctx->r2 != 0) {
        // 0x80230A50: nop
    
            goto L_80230A70;
    }
    // 0x80230A50: nop

    // 0x80230A54: lbu         $v0, 0xFC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XFC);
    // 0x80230A58: xori        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 ^ 0XB;
    // 0x80230A5C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80230A60: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80230A64: andi        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 & 0XB;
    // 0x80230A68: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230A6C: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
L_80230A70:
    // 0x80230A70: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80230A74: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80230A78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230A7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230A80: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80230A84: j           L_80230AA0
    // 0x80230A88: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
        goto L_80230AA0;
    // 0x80230A88: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
L_80230A8C:
    // 0x80230A8C: jal         0x800A3450
    // 0x80230A90: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80230A90: nop

    after_1:
    // 0x80230A94: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80230A98: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x80230A9C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80230AA0:
    // 0x80230AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230AA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230AA8: jr          $ra
    // 0x80230AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024DD20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DD20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DD24: jr          $ra
    // 0x8024DD28: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8024DD28: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802421CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802421CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802421D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802421D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802421D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802421DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802421E0: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802421E4: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x802421E8: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x802421EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802421F0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802421F4: bne         $v0, $zero, L_8024223C
    if (ctx->r2 != 0) {
        // 0x802421F8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8024223C;
    }
    // 0x802421F8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x802421FC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242200: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80242204: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242208: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8024220C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80242210: bne         $v0, $zero, L_80242224
    if (ctx->r2 != 0) {
        // 0x80242214: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_80242224;
    }
    // 0x80242214: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x80242218: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8024221C: j           L_8024222C
    // 0x80242220: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8024222C;
    // 0x80242220: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80242224:
    // 0x80242224: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x80242228: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8024222C:
    // 0x8024222C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80242230: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80242234: j           L_8024228C
    // 0x80242238: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_8024228C;
    // 0x80242238: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_8024223C:
    // 0x8024223C: bne         $v0, $zero, L_80242260
    if (ctx->r2 != 0) {
        // 0x80242240: nop
    
            goto L_80242260;
    }
    // 0x80242240: nop

    // 0x80242244: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242248: lbu         $v0, 0x4B20($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B20);
    // 0x8024224C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80242250: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242254: lbu         $v0, 0x4B21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B21);
    // 0x80242258: j           L_80242278
    // 0x8024225C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80242278;
    // 0x8024225C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242260:
    // 0x80242260: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242264: lbu         $v0, 0x4B2C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B2C);
    // 0x80242268: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8024226C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242270: lbu         $v0, 0x4B2D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B2D);
    // 0x80242274: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242278:
    // 0x80242278: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8024227C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80242280: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80242284: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80242288: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_8024228C:
    // 0x8024228C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x80242290: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80242294: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80242298: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024229C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802422A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802422A4: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802422A8: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x802422AC: bne         $v0, $zero, L_802422D8
    if (ctx->r2 != 0) {
        // 0x802422B0: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_802422D8;
    }
    // 0x802422B0: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x802422B4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802422B8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802422BC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802422C0: bne         $v0, $zero, L_802422D0
    if (ctx->r2 != 0) {
        // 0x802422C4: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_802422D0;
    }
    // 0x802422C4: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x802422C8: j           L_802422E4
    // 0x802422CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802422E4;
    // 0x802422CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802422D0:
    // 0x802422D0: j           L_802422E4
    // 0x802422D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_802422E4;
    // 0x802422D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_802422D8:
    // 0x802422D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802422DC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802422E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802422E4:
    // 0x802422E4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802422E8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802422EC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802422F0: bne         $v0, $zero, L_802422FC
    if (ctx->r2 != 0) {
        // 0x802422F4: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_802422FC;
    }
    // 0x802422F4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x802422F8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_802422FC:
    // 0x802422FC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242300: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80242304: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80242308: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8024230C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242310: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80242314: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80242318: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8024231C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242320: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242324: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80242328: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024232C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242330: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80242334: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80242338: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8024233C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80242340: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80242344: jal         0x80051E18
    // 0x80242348: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80242348: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8024234C: jal         0x8003F754
    // 0x80242350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x80242350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80242354: bne         $v0, $zero, L_80242364
    if (ctx->r2 != 0) {
        // 0x80242358: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80242364;
    }
    // 0x80242358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024235C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242360: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80242364:
    // 0x80242364: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242368: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024236C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80242370: jr          $ra
    // 0x80242374: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80242374: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024BD60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BD60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024BD64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024BD68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BD6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024BD70: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024BD74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024BD78: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8024BD7C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024BD80: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024BD84: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8024BD88: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8024BD8C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024BD90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BD94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BD98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024BD9C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024BDA0: lhu         $a0, 0x5368($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5368);
    // 0x8024BDA4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8024BDA8: lui         $a1, 0x280
    ctx->r5 = S32(0X280 << 16);
    // 0x8024BDAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BDB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BDB4: sh          $a0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r4;
    // 0x8024BDB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BDBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BDC0: lhu         $v0, 0x536A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X536A);
    // 0x8024BDC4: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x8024BDC8: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8024BDCC: sw          $a1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r5;
    // 0x8024BDD0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024BDD4: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x8024BDD8: jal         0x8002C654
    // 0x8024BDDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8024BDDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024BDE0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024BDE4: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x8024BDE8: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8024BDEC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8024BDF0: beq         $v0, $zero, L_8024BE00
    if (ctx->r2 == 0) {
        // 0x8024BDF4: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_8024BE00;
    }
    // 0x8024BDF4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8024BDF8: j           L_8024BE38
    // 0x8024BDFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8024BE38;
    // 0x8024BDFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8024BE00:
    // 0x8024BE00: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x8024BE04: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8024BE08: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8024BE0C: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x8024BE10: beq         $v0, $zero, L_8024BE20
    if (ctx->r2 == 0) {
        // 0x8024BE14: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8024BE20;
    }
    // 0x8024BE14: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8024BE18: beq         $v0, $zero, L_8024BE3C
    if (ctx->r2 == 0) {
        // 0x8024BE1C: nop
    
            goto L_8024BE3C;
    }
    // 0x8024BE1C: nop

L_8024BE20:
    // 0x8024BE20: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8024BE24: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8024BE28: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8024BE2C: bne         $v0, $zero, L_8024BE38
    if (ctx->r2 != 0) {
        // 0x8024BE30: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8024BE38;
    }
    // 0x8024BE30: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024BE34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8024BE38:
    // 0x8024BE38: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_8024BE3C:
    // 0x8024BE3C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024BE40: bne         $v0, $zero, L_8024BE54
    if (ctx->r2 != 0) {
        // 0x8024BE44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024BE54;
    }
    // 0x8024BE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024BE48: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x8024BE4C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8024BE50: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_8024BE54:
    // 0x8024BE54: jal         0x8004D5D4
    // 0x8024BE58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8024BE58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x8024BE5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024BE60: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024BE64: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024BE68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BE6C: beq         $v1, $zero, L_8024BE80
    if (ctx->r3 == 0) {
        // 0x8024BE70: sb          $v0, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r2;
            goto L_8024BE80;
    }
    // 0x8024BE70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024BE74: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8024BE78: jal         0x8002A33C
    // 0x8024BE7C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8024BE7C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
L_8024BE80:
    // 0x8024BE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BE84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024BE88: jr          $ra
    // 0x8024BE8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024BE8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E354_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E358: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E35C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E364: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E368: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E36C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E374: bne         $v0, $zero, L_8022E3E0
    if (ctx->r2 != 0) {
        // 0x8022E378: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022E3E0;
    }
    // 0x8022E378: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E37C: jal         0x8022FF44
    // 0x8022E380: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022E380: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022E384: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E388: beq         $v0, $zero, L_8022E3DC
    if (ctx->r2 == 0) {
        // 0x8022E38C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E3DC;
    }
    // 0x8022E38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E390: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022E394: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x8022E398: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022E39C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E3A0: bne         $v1, $zero, L_8022E3B0
    if (ctx->r3 != 0) {
        // 0x8022E3A4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022E3B0;
    }
    // 0x8022E3A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E3A8: j           L_8022E3E0
    // 0x8022E3AC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_8022E3E0;
    // 0x8022E3AC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_8022E3B0:
    // 0x8022E3B0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E3B4: jal         0x8022FEB8
    // 0x8022E3B8: nop

    func_8022FEB8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E3B8: nop

    after_1:
    // 0x8022E3BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E3C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E3C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E3C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E3CC: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022E3D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E3D4: j           L_8022E3E0
    // 0x8022E3D8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022E3E0;
    // 0x8022E3D8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022E3DC:
    // 0x8022E3DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E3E0:
    // 0x8022E3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E3E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3E8: jr          $ra
    // 0x8022E3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AC94_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AC98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AC9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ACA0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8023ACA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ACA8: jal         0x80050294
    // 0x8023ACAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023ACAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023ACB0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023ACB4: sh          $v0, 0x514($s0)
    MEM_H(0X514, ctx->r16) = ctx->r2;
    // 0x8023ACB8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023ACBC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023ACC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACC4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023ACC8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023ACCC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023ACD0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023ACD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023ACD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ACDC: jr          $ra
    // 0x8023ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241758_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241758: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8024175C: lh          $a2, 0x0($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X0);
    // 0x80241760: addiu       $a1, $v1, -0x400
    ctx->r5 = ADD32(ctx->r3, -0X400);
    // 0x80241764: slti        $v1, $a2, 0x538
    ctx->r3 = SIGNED(ctx->r6) < 0X538 ? 1 : 0;
    // 0x80241768: slti        $a0, $a1, 0x538
    ctx->r4 = SIGNED(ctx->r5) < 0X538 ? 1 : 0;
    // 0x8024176C: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80241770: beq         $v1, $zero, L_802417C4
    if (ctx->r3 == 0) {
        // 0x80241774: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802417C4;
    }
    // 0x80241774: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80241778: slti        $a0, $a2, -0x537
    ctx->r4 = SIGNED(ctx->r6) < -0X537 ? 1 : 0;
    // 0x8024177C: xori        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 ^ 0X1;
    // 0x80241780: slti        $v1, $a1, -0x537
    ctx->r3 = SIGNED(ctx->r5) < -0X537 ? 1 : 0;
    // 0x80241784: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80241788: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x8024178C: beq         $a0, $zero, L_802417C4
    if (ctx->r4 == 0) {
        // 0x80241790: addiu       $v1, $a2, 0x8E5
        ctx->r3 = ADD32(ctx->r6, 0X8E5);
            goto L_802417C4;
    }
    // 0x80241790: addiu       $v1, $a2, 0x8E5
    ctx->r3 = ADD32(ctx->r6, 0X8E5);
    // 0x80241794: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241798: beq         $v1, $zero, L_802417C4
    if (ctx->r3 == 0) {
        // 0x8024179C: negu        $a0, $a2
        ctx->r4 = SUB32(0, ctx->r6);
            goto L_802417C4;
    }
    // 0x8024179C: negu        $a0, $a2
    ctx->r4 = SUB32(0, ctx->r6);
    // 0x802417A0: addiu       $v1, $a0, 0x8E5
    ctx->r3 = ADD32(ctx->r4, 0X8E5);
    // 0x802417A4: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802417A8: beq         $v1, $zero, L_802417C4
    if (ctx->r3 == 0) {
        // 0x802417AC: addiu       $v1, $a2, -0x8E5
        ctx->r3 = ADD32(ctx->r6, -0X8E5);
            goto L_802417C4;
    }
    // 0x802417AC: addiu       $v1, $a2, -0x8E5
    ctx->r3 = ADD32(ctx->r6, -0X8E5);
    // 0x802417B0: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802417B4: beq         $v1, $zero, L_802417C4
    if (ctx->r3 == 0) {
        // 0x802417B8: nop
    
            goto L_802417C4;
    }
    // 0x802417B8: nop

    // 0x802417BC: addiu       $v0, $a0, -0x8E5
    ctx->r2 = ADD32(ctx->r4, -0X8E5);
    // 0x802417C0: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
L_802417C4:
    // 0x802417C4: jr          $ra
    // 0x802417C8: nop

    TRACE_RETURN()
    return;
    // 0x802417C8: nop

;}
RECOMP_FUNC void func_8024B0F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B0F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B0F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024B0FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B100: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B104: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B108: lw          $v0, 0x52D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X52D4);
    // 0x8024B10C: jalr        $v0
    // 0x8024B110: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B110: nop

    after_0:
    // 0x8024B114: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B118: jr          $ra
    // 0x8024B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023603C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023603C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236044: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023604C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80236050: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80236054: jal         0x8004DA90
    // 0x80236058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80236058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8023605C: jal         0x8005044C
    // 0x80236060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236068: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023606C: jr          $ra
    // 0x80236070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236074: nop

    // 0x80236078: nop

    // 0x8023607C: nop

;}
RECOMP_FUNC void func_8022F800_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F800: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F804: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022F808: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F80C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F810: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022F814: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F818: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022F81C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022F820: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F824: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022F828: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022F82C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022F830: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F834: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022F838: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022F83C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022F840: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022F844: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F848: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F84C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F850: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F854: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022F858: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F85C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022F860: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022F864: jal         0x8009A3B4
    // 0x8022F868: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F868: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F86C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022F870: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F874: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022F878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F87C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022F880: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F884: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022F888: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022F88C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F890: jal         0x8004EC38
    // 0x8022F894: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022F894: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022F898: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F89C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022F8A0: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022F8A4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022F8A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022F8AC: jal         0x80034FCC
    // 0x8022F8B0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022F8B0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022F8B4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022F8B8: jal         0x8022FEA8
    // 0x8022F8BC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022F8BC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022F8C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F8C4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F8C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F8CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F8D0: jal         0x8004F820
    // 0x8022F8D4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022F8D4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022F8D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F8DC: bgez        $v0, L_8022F908
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F8E0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022F908;
    }
    // 0x8022F8E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F8E4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F8E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F8EC: jal         0x8004F820
    // 0x8022F8F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022F8F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022F8F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F8F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F8FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F900: j           L_8022F920
    // 0x8022F904: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022F920;
    // 0x8022F904: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022F908:
    // 0x8022F908: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F90C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F910: jal         0x8004F820
    // 0x8022F914: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022F914: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022F918: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F91C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022F920:
    // 0x8022F920: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022F924: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022F928: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F92C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022F930: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F934: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022F938: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F93C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022F940: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F944: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F948: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F94C: jr          $ra
    // 0x8022F950: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F950: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80246C90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246C9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80246CA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246CA4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80246CA8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80246CAC: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80246CB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246CB4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246CB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246CBC: lw          $v0, 0x4D50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4D50);
    // 0x80246CC0: addiu       $s1, $s0, 0x4C
    ctx->r17 = ADD32(ctx->r16, 0X4C);
    // 0x80246CC4: jalr        $v0
    // 0x80246CC8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80246CC8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80246CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246CD0: jal         0x8024750C
    // 0x80246CD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8024750C_ovl28(rdram, ctx);
        goto after_1;
    // 0x80246CD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80246CD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80246CDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246CE4: jr          $ra
    // 0x80246CE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246CE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237EE0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237EE0: lb          $v0, 0xE($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XE);
    // 0x80237EE4: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80237EE8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80237EEC: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80237EF0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80237EF4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80237EF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237EFC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237F00: beq         $a0, $v0, L_80237F20
    if (ctx->r4 == ctx->r2) {
        // 0x80237F04: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80237F20;
    }
    // 0x80237F04: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80237F08: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80237F0C: bne         $a0, $v0, L_80237F1C
    if (ctx->r4 != ctx->r2) {
        // 0x80237F10: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80237F1C;
    }
    // 0x80237F10: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80237F14: j           L_80237F20
    // 0x80237F18: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
        goto L_80237F20;
    // 0x80237F18: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
L_80237F1C:
    // 0x80237F1C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_80237F20:
    // 0x80237F20: lb          $v1, 0xE($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XE);
    // 0x80237F24: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80237F28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237F2C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80237F30: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80237F34: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80237F38: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x80237F3C: lb          $v1, 0x11($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X11);
    // 0x80237F40: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80237F44: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80237F48: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x80237F4C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237F50: beq         $a0, $v0, L_80237F6C
    if (ctx->r4 == ctx->r2) {
        // 0x80237F54: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80237F6C;
    }
    // 0x80237F54: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80237F58: bne         $a0, $v0, L_80237F68
    if (ctx->r4 != ctx->r2) {
        // 0x80237F5C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80237F68;
    }
    // 0x80237F5C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80237F60: j           L_80237F6C
    // 0x80237F64: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
        goto L_80237F6C;
    // 0x80237F64: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
L_80237F68:
    // 0x80237F68: sb          $v0, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r2;
L_80237F6C:
    // 0x80237F6C: lb          $v0, 0x11($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X11);
    // 0x80237F70: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x80237F74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237F78: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80237F7C: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80237F80: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80237F84: sb          $v0, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r2;
    // 0x80237F88: jr          $ra
    // 0x80237F8C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80237F8C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8024B2BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B2BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B2C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B2C4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024B2C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B2CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B2D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B2D4: lw          $v0, 0x52E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X52E0);
    // 0x8024B2D8: jalr        $v0
    // 0x8024B2DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B2DC: nop

    after_0:
    // 0x8024B2E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B2E4: jr          $ra
    // 0x8024B2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024AB00_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AB00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024AB04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024AB08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024AB0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8024AB10: addiu       $s3, $s1, 0x28
    ctx->r19 = ADD32(ctx->r17, 0X28);
    // 0x8024AB14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024AB18: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8024AB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024AB20: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024AB24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024AB28: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8024AB2C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8024AB30: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8024AB34: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8024AB38: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8024AB3C: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x8024AB40: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
L_8024AB44:
    // 0x8024AB44: jal         0x800A3450
    // 0x8024AB48: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024AB48: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    after_0:
    // 0x8024AB4C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8024AB50: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
    // 0x8024AB54: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024AB58: jal         0x800A3450
    // 0x8024AB5C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024AB5C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8024AB60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024AB64: jal         0x800A3450
    // 0x8024AB68: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024AB68: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_2:
    // 0x8024AB6C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024AB70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AB74: jal         0x800A3450
    // 0x8024AB78: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024AB78: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x8024AB7C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8024AB80: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024AB84: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AB88: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024AB8C: lbu         $v1, 0x5251($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5251);
    // 0x8024AB90: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024AB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AB98: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8024AB9C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024ABA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024ABA4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024ABA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024ABAC: lhu         $v0, 0x5252($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5252);
    // 0x8024ABB0: jal         0x800A3450
    // 0x8024ABB4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8024ABB4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_4:
    // 0x8024ABB8: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8024ABBC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024ABC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024ABC4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024ABC8: lhu         $v1, 0x5254($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5254);
    // 0x8024ABCC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8024ABD0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024ABD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024ABD8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8024ABDC: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8024ABE0: bne         $v0, $zero, L_8024AB44
    if (ctx->r2 != 0) {
        // 0x8024ABE4: sh          $v1, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r3;
            goto L_8024AB44;
    }
    // 0x8024ABE4: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8024ABE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024ABEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024ABF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024ABF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024ABF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024ABFC: jr          $ra
    // 0x8024AC00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024AC00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DE18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE28: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022DE2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DE30: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022DE34: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DE38: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022DE3C: jal         0x8022FEF8
    // 0x8022DE40: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022DE40: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DE44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DE48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DE4C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022DE50: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022DE54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DE58: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022DE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE64: jr          $ra
    // 0x8022DE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802319F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802319F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802319F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802319FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231A00: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231A04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231A08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231A0C: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80231A10: beq         $v0, $zero, L_80231A20
    if (ctx->r2 == 0) {
        // 0x80231A14: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231A20;
    }
    // 0x80231A14: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231A18: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231A1C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_80231A20:
    // 0x80231A20: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231A24: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80231A28: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80231A2C: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x80231A30: beq         $s2, $zero, L_80231BD4
    if (ctx->r18 == 0) {
        // 0x80231A34: nop
    
            goto L_80231BD4;
    }
    // 0x80231A34: nop

    // 0x80231A38: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80231A3C: xori        $v0, $a0, 0x6
    ctx->r2 = ctx->r4 ^ 0X6;
    // 0x80231A40: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80231A44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231A48: beql        $a0, $v0, L_80231A50
    if (ctx->r4 == ctx->r2) {
        // 0x80231A4C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80231A50;
    }
    goto skip_0;
    // 0x80231A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_80231A50:
    // 0x80231A50: bnel        $v1, $zero, L_80231BCC
    if (ctx->r3 != 0) {
        // 0x80231A54: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80231BCC;
    }
    goto skip_1;
    // 0x80231A54: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_1:
    // 0x80231A58: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231A5C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231A60: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231A64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231A68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231A6C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231A70: lbu         $s3, 0x9($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X9);
    // 0x80231A74: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231A78: bne         $a0, $v0, L_80231B48
    if (ctx->r4 != ctx->r2) {
        // 0x80231A7C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80231B48;
    }
    // 0x80231A7C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80231A80: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80231A84: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80231A88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231A8C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80231A90: jal         0x8002A33C
    // 0x80231A94: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80231A94: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231A98: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80231A9C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80231AA0: bgtz        $v1, L_80231AFC
    if (SIGNED(ctx->r3) > 0) {
        // 0x80231AA4: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80231AFC;
    }
    // 0x80231AA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231AA8: jal         0x8004F144
    // 0x80231AAC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80231AAC: nop

    after_1:
    // 0x80231AB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231AB4: beq         $v1, $zero, L_80231ADC
    if (ctx->r3 == 0) {
        // 0x80231AB8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80231ADC;
    }
    // 0x80231AB8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80231ABC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231AC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231AC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80231AC8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231AD0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231AD4: jal         0x8009A3B4
    // 0x80231AD8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231AD8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_80231ADC:
    // 0x80231ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231AE0: jal         0x8007A1B8
    // 0x80231AE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80231AE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80231AE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231AEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231AF0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231AF4: j           L_80231BD4
    // 0x80231AF8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80231BD4;
    // 0x80231AF8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80231AFC:
    // 0x80231AFC: lhu         $v0, 0x386($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X386);
    // 0x80231B00: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231B04: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80231B08: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80231B0C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80231B10: bne         $v1, $zero, L_80231B30
    if (ctx->r3 != 0) {
        // 0x80231B14: sh          $a0, 0x386($s0)
        MEM_H(0X386, ctx->r16) = ctx->r4;
            goto L_80231B30;
    }
    // 0x80231B14: sh          $a0, 0x386($s0)
    MEM_H(0X386, ctx->r16) = ctx->r4;
    // 0x80231B18: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80231B1C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231B20: sll         $v1, $s3, 4
    ctx->r3 = S32(ctx->r19 << 4);
    // 0x80231B24: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231B28: bne         $v0, $zero, L_80231BD4
    if (ctx->r2 != 0) {
        // 0x80231B2C: nop
    
            goto L_80231BD4;
    }
    // 0x80231B2C: nop

L_80231B30:
    // 0x80231B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231B34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231B38: jal         0x80231BF0
    // 0x80231B3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80231BF0_ovl28(rdram, ctx);
        goto after_4;
    // 0x80231B3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_4:
    // 0x80231B40: j           L_80231BC0
    // 0x80231B44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80231BC0;
    // 0x80231B44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80231B48:
    // 0x80231B48: lhu         $v0, 0xB2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB2);
    // 0x80231B4C: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231B50: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80231B54: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80231B58: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80231B5C: bne         $v1, $zero, L_80231B7C
    if (ctx->r3 != 0) {
        // 0x80231B60: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_80231B7C;
    }
    // 0x80231B60: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x80231B64: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80231B68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231B6C: sll         $v1, $s3, 4
    ctx->r3 = S32(ctx->r19 << 4);
    // 0x80231B70: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231B74: bne         $v0, $zero, L_80231BCC
    if (ctx->r2 != 0) {
        // 0x80231B78: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80231BCC;
    }
    // 0x80231B78: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
L_80231B7C:
    // 0x80231B7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231B80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231B84: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80231B88: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231B8C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231B90: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80231B94: sh          $zero, 0x386($s0)
    MEM_H(0X386, ctx->r16) = 0;
    // 0x80231B98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231B9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231BA0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231BA4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x80231BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231BAC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80231BB0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231BB4: jal         0x80231BF0
    // 0x80231BB8: sw          $v0, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r2;
    func_80231BF0_ovl28(rdram, ctx);
        goto after_5;
    // 0x80231BB8: sw          $v0, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r2;
    after_5:
    // 0x80231BBC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80231BC0:
    // 0x80231BC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80231BC4: j           L_80231BD4
    // 0x80231BC8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80231BD4;
    // 0x80231BC8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80231BCC:
    // 0x80231BCC: jal         0x8002A33C
    // 0x80231BD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80231BD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_80231BD4:
    // 0x80231BD4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231BD8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231BDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231BE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231BE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231BE8: jr          $ra
    // 0x80231BEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231BEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FF44_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FF48: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FF4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FF50: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022FF54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022FF58: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022FF5C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022FF60: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022FF64: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022FF68: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022FF6C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FF70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022FF74: jal         0x8004DC2C
    // 0x8022FF78: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022FF78: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022FF7C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022FF80: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FF84: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022FF88: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022FF8C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022FF90: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022FF94: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022FF98: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022FF9C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FFA0: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022FFA4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022FFA8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022FFAC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022FFB0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022FFB4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022FFB8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022FFBC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022FFC0: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022FFC4: beq         $a0, $zero, L_8022FFD4
    if (ctx->r4 == 0) {
        // 0x8022FFC8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022FFD4;
    }
    // 0x8022FFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022FFCC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022FFD0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022FFD4:
    // 0x8022FFD4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FFD8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FFDC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FFE0: jr          $ra
    // 0x8022FFE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FFE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022FFE8: nop

    // 0x8022FFEC: nop

;}
RECOMP_FUNC void func_80239120_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023912C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239130: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80239138: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023913C: jal         0x8009A3B4
    // 0x80239140: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239140: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80239144: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239148: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023914C: jal         0x8009A3B4
    // 0x80239150: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239150: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239154: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239158: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023915C: jal         0x8009A3B4
    // 0x80239160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239164: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80239168: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239170: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80239174: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80239178: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023917C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80239180: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239184: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239188: lw          $v0, 0x4310($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4310);
    // 0x8023918C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80239190: jalr        $v0
    // 0x80239194: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80239194: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80239198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023919C: jal         0x80239D04
    // 0x802391A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80239D04_ovl28(rdram, ctx);
        goto after_4;
    // 0x802391A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802391A4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802391A8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802391AC: beq         $a1, $v0, L_802391C8
    if (ctx->r5 == ctx->r2) {
        // 0x802391B0: nop
    
            goto L_802391C8;
    }
    // 0x802391B0: nop

    // 0x802391B4: lh          $a2, 0x4E2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4E2);
    // 0x802391B8: jal         0x80050294
    // 0x802391BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802391BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802391C0: j           L_802391D0
    // 0x802391C4: nop

        goto L_802391D0;
    // 0x802391C4: nop

L_802391C8:
    // 0x802391C8: jal         0x8005044C
    // 0x802391CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802391CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802391D0:
    // 0x802391D0: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x802391D4: beq         $v0, $zero, L_802391EC
    if (ctx->r2 == 0) {
        // 0x802391D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802391EC;
    }
    // 0x802391D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802391DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802391E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802391E4: jal         0x8003B564
    // 0x802391E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x802391E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_802391EC:
    // 0x802391EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802391F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802391F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802391F8: jr          $ra
    // 0x802391FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802391FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CE50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CE5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CE60: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE68: beq         $v1, $v0, L_8022CF54
    if (ctx->r3 == ctx->r2) {
        // 0x8022CE6C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022CF54;
    }
    // 0x8022CE6C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022CE70: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CE74: beql        $v0, $zero, L_8022CE8C
    if (ctx->r2 == 0) {
        // 0x8022CE78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CE8C;
    }
    goto skip_0;
    // 0x8022CE78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CE7C: beq         $v1, $zero, L_8022CEA4
    if (ctx->r3 == 0) {
        // 0x8022CE80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CEA4;
    }
    // 0x8022CE80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE84: j           L_8022D0D0
    // 0x8022CE88: nop

        goto L_8022D0D0;
    // 0x8022CE88: nop

L_8022CE8C:
    // 0x8022CE8C: beq         $v1, $v0, L_8022CF64
    if (ctx->r3 == ctx->r2) {
        // 0x8022CE90: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CF64;
    }
    // 0x8022CE90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CE94: beq         $v1, $v0, L_8022D080
    if (ctx->r3 == ctx->r2) {
        // 0x8022CE98: nop
    
            goto L_8022D080;
    }
    // 0x8022CE98: nop

    // 0x8022CE9C: j           L_8022D0D0
    // 0x8022CEA0: nop

        goto L_8022D0D0;
    // 0x8022CEA0: nop

L_8022CEA4:
    // 0x8022CEA4: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x8022CEA8: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CEAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CEB0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CEB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CEB8: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022CEBC: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022CEC0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022CEC4: beq         $a0, $zero, L_8022CF20
    if (ctx->r4 == 0) {
        // 0x8022CEC8: sh          $v1, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r3;
            goto L_8022CF20;
    }
    // 0x8022CEC8: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x8022CECC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CED0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CED4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022CED8: addiu       $v0, $v0, 0x305C
    ctx->r2 = ADD32(ctx->r2, 0X305C);
    // 0x8022CEDC: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022CEE0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CEE4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CEE8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022CEEC: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8022CEF0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CEF4: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x8022CEF8: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022CEFC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CF00: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022CF04: sh          $a0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r4;
    // 0x8022CF08: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022CF0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CF10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CF14: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x8022CF18: j           L_8022CF3C
    // 0x8022CF1C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_8022CF3C;
    // 0x8022CF1C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022CF20:
    // 0x8022CF20: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022CF24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CF28: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022CF2C: addiu       $v0, $v0, 0x3050
    ctx->r2 = ADD32(ctx->r2, 0X3050);
    // 0x8022CF30: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022CF34: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CF38: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_8022CF3C:
    // 0x8022CF3C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022CF40: bgtz        $v0, L_8022CF54
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CF44: nop
    
            goto L_8022CF54;
    }
    // 0x8022CF44: nop

    // 0x8022CF48: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CF4C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022CF50: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CF54:
    // 0x8022CF54: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022CF58: bgez        $v0, L_8022CF64
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CF5C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CF64;
    }
    // 0x8022CF5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CF60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CF64:
    // 0x8022CF64: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022CF68: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x8022CF6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF70: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022CF74: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022CF78: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CF7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CF80: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022CF84: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022CF88: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022CF8C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022CF90: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022CF94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CF98: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022CF9C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022CFA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CFA4: jal         0x8004DA90
    // 0x8022CFA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CFA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CFAC: jal         0x80040F30
    // 0x8022CFB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CFB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CFB4: beq         $v0, $zero, L_8022D0D0
    if (ctx->r2 == 0) {
        // 0x8022CFB8: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022D0D0;
    }
    // 0x8022CFB8: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022CFBC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022CFC0: bnel        $v0, $zero, L_8022CFC8
    if (ctx->r2 != 0) {
        // 0x8022CFC4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022CFC8;
    }
    goto skip_1;
    // 0x8022CFC4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022CFC8:
    // 0x8022CFC8: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022CFCC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022CFD0: beq         $v0, $zero, L_8022D0D0
    if (ctx->r2 == 0) {
        // 0x8022CFD4: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022D0D0;
    }
    // 0x8022CFD4: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022CFD8: jal         0x8002A33C
    // 0x8022CFDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022CFDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022CFE0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CFE4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022CFE8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022CFEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CFF0: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022CFF4: beq         $v0, $zero, L_8022D04C
    if (ctx->r2 == 0) {
        // 0x8022CFF8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022D04C;
    }
    // 0x8022CFF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CFFC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D000: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D004: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D008: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D00C: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022D010: beq         $a0, $zero, L_8022D020
    if (ctx->r4 == 0) {
        // 0x8022D014: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022D020;
    }
    // 0x8022D014: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D018: j           L_8022D024
    // 0x8022D01C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022D024;
    // 0x8022D01C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022D020:
    // 0x8022D020: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022D024:
    // 0x8022D024: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D028: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022D02C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x8022D030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D034: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D038: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D03C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022D040: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8022D044: j           L_8022D0D0
    // 0x8022D048: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D0D0;
    // 0x8022D048: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D04C:
    // 0x8022D04C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022D050: bgtz        $v0, L_8022D068
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D054: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D068;
    }
    // 0x8022D054: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D058: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D05C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D060: j           L_8022D0D0
    // 0x8022D064: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022D0D0;
    // 0x8022D064: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D068:
    // 0x8022D068: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D06C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022D070: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D074: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D078: j           L_8022D0D0
    // 0x8022D07C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D0D0;
    // 0x8022D07C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D080:
    // 0x8022D080: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022D084: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D088: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022D08C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D090: bgez        $v0, L_8022D0A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D094: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D0A8;
    }
    // 0x8022D094: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D098: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022D09C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022D0A0: j           L_8022D0D0
    // 0x8022D0A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022D0D0;
    // 0x8022D0A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022D0A8:
    // 0x8022D0A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D0AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D0B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D0B4: jal         0x8004F820
    // 0x8022D0B8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D0B8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022D0BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D0C0: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022D0C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D0C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D0CC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022D0D0:
    // 0x8022D0D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D0D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D0D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D0DC: jr          $ra
    // 0x8022D0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F9D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F9DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F9E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F9E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F9EC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F9F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F9F4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F9F8: jal         0x8004F820
    // 0x8022F9FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F9FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022FA00: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FA04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FA08: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FA0C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FA10: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022FA14: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022FA18: bne         $v0, $zero, L_8022FA50
    if (ctx->r2 != 0) {
        // 0x8022FA1C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022FA50;
    }
    // 0x8022FA1C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FA20: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FA24: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FA28: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022FA2C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022FA30: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022FA34: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022FA38: jal         0x8022FEA8
    // 0x8022FA3C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022FA3C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022FA40: jal         0x80034E3C
    // 0x8022FA44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022FA44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022FA48: j           L_8022FA6C
    // 0x8022FA4C: nop

        goto L_8022FA6C;
    // 0x8022FA4C: nop

L_8022FA50:
    // 0x8022FA50: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FA54: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022FA58: bne         $v1, $v0, L_8022FA6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022FA5C: nop
    
            goto L_8022FA6C;
    }
    // 0x8022FA5C: nop

    // 0x8022FA60: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FA64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FA68: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022FA6C:
    // 0x8022FA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA74: jr          $ra
    // 0x8022FA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EC58_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EC5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EC60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC64: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022EC68: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022EC6C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022EC70: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022EC74: jal         0x8022FF44
    // 0x8022EC78: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022EC78: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022EC7C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022EC80: beq         $v0, $zero, L_8022ECB0
    if (ctx->r2 == 0) {
        // 0x8022EC84: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022ECB0;
    }
    // 0x8022EC84: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022EC88: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EC8C: bne         $v1, $v0, L_8022EDD8
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDD8;
    }
    // 0x8022EC90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EC94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC98: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EC9C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022ECA0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022ECA4: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022ECA8: j           L_8022EDDC
    // 0x8022ECAC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022EDDC;
    // 0x8022ECAC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022ECB0:
    // 0x8022ECB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECB4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022ECB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ECBC: jal         0x8004DA90
    // 0x8022ECC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022ECC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022ECC4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022ECC8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022ECCC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022ECD0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022ECD4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022ECD8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022ECDC: beq         $v0, $zero, L_8022ECEC
    if (ctx->r2 == 0) {
        // 0x8022ECE0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022ECEC;
    }
    // 0x8022ECE0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022ECE4: j           L_8022ECFC
    // 0x8022ECE8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022ECFC;
    // 0x8022ECE8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022ECEC:
    // 0x8022ECEC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022ECF0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022ECF4: beq         $v0, $zero, L_8022ED2C
    if (ctx->r2 == 0) {
        // 0x8022ECF8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022ED2C;
    }
    // 0x8022ECF8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022ECFC:
    // 0x8022ECFC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED00: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022ED04: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022ED08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ED0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ED10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ED14: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022ED18: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022ED1C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022ED20: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022ED24: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ED28: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022ED2C:
    // 0x8022ED2C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022ED30: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022ED34: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022ED38: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022ED3C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022ED40: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022ED44: beq         $v0, $zero, L_8022ED58
    if (ctx->r2 == 0) {
        // 0x8022ED48: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022ED58;
    }
    // 0x8022ED48: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022ED4C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED50: j           L_8022ED6C
    // 0x8022ED54: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022ED6C;
    // 0x8022ED54: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022ED58:
    // 0x8022ED58: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022ED5C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022ED60: beq         $v0, $zero, L_8022ED9C
    if (ctx->r2 == 0) {
        // 0x8022ED64: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022ED9C;
    }
    // 0x8022ED64: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022ED68: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022ED6C:
    // 0x8022ED6C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022ED70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ED74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ED78: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022ED7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED84: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ED88: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022ED8C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022ED90: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022ED94: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022ED98: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022ED9C:
    // 0x8022ED9C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022EDA0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022EDA4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022EDA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDAC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EDB0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EDB4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022EDB8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022EDBC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022EDC0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022EDC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EDC8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022EDCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDD0: bne         $v0, $zero, L_8022EDDC
    if (ctx->r2 != 0) {
        // 0x8022EDD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDDC;
    }
    // 0x8022EDD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EDD8:
    // 0x8022EDD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EDDC:
    // 0x8022EDDC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022EDE0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EDE4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EDE8: jr          $ra
    // 0x8022EDEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022EDEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022DC7C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DC84: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DC88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DC8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022DC90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DC94: lw          $v0, 0x360C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X360C);
    // 0x8022DC98: jalr        $v0
    // 0x8022DC9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DC9C: nop

    after_0:
    // 0x8022DCA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCA4: jr          $ra
    // 0x8022DCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233188_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233188: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023318C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233194: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233198: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023319C: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x802331A0: jal         0x800324B4
    // 0x802331A4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802331A4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_0:
    // 0x802331A8: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x802331AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802331B0: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x802331B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802331B8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802331BC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x802331C0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x802331C4: jal         0x80032498
    // 0x802331C8: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802331C8: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    after_1:
    // 0x802331CC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802331D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802331D4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802331D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802331DC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802331E0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802331E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802331E8: bgez        $a0, L_8023326C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802331EC: sh          $v0, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r2;
            goto L_8023326C;
    }
    // 0x802331EC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802331F0: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x802331F4: bne         $v0, $zero, L_80233244
    if (ctx->r2 != 0) {
        // 0x802331F8: nop
    
            goto L_80233244;
    }
    // 0x802331F8: nop

    // 0x802331FC: jal         0x8004F144
    // 0x80233200: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80233200: nop

    after_2:
    // 0x80233204: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233208: beq         $v1, $zero, L_80233234
    if (ctx->r3 == 0) {
        // 0x8023320C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80233234;
    }
    // 0x8023320C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80233210: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233214: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233218: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023321C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233220: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80233224: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023322C: jal         0x8009A3B4
    // 0x80233230: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233230: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_3:
L_80233234:
    // 0x80233234: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233238: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023323C: j           L_8023326C
    // 0x80233240: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8023326C;
    // 0x80233240: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80233244:
    // 0x80233244: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233248: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023324C: bne         $v0, $zero, L_80233258
    if (ctx->r2 != 0) {
        // 0x80233250: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80233258;
    }
    // 0x80233250: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233254: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80233258:
    // 0x80233258: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023325C: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x80233260: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233268: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023326C:
    // 0x8023326C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233270: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233278: jr          $ra
    // 0x8023327C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023327C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E42C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E42C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E430: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E434: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E438: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E43C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E444: lw          $v0, 0x36F8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X36F8);
    // 0x8022E448: jalr        $v0
    // 0x8022E44C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E44C: nop

    after_0:
    // 0x8022E450: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E454: jr          $ra
    // 0x8022E458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225850_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225854: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225858: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022585C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225860: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225864: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225868: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x8022586C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225870: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225878: beq         $v1, $v0, L_80225928
    if (ctx->r3 == ctx->r2) {
        // 0x8022587C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225928;
    }
    // 0x8022587C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225880: beql        $v0, $zero, L_80225898
    if (ctx->r2 == 0) {
        // 0x80225884: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225898;
    }
    goto skip_0;
    // 0x80225884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225888: beq         $v1, $zero, L_802258A8
    if (ctx->r3 == 0) {
        // 0x8022588C: nop
    
            goto L_802258A8;
    }
    // 0x8022588C: nop

    // 0x80225890: j           L_802259F0
    // 0x80225894: nop

        goto L_802259F0;
    // 0x80225894: nop

L_80225898:
    // 0x80225898: beq         $v1, $v0, L_80225948
    if (ctx->r3 == ctx->r2) {
        // 0x8022589C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225948;
    }
    // 0x8022589C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802258A0: j           L_802259F0
    // 0x802258A4: nop

        goto L_802259F0;
    // 0x802258A4: nop

L_802258A8:
    // 0x802258A8: jal         0x8006FF84
    // 0x802258AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802258AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x802258B0: beq         $v0, $zero, L_802259F0
    if (ctx->r2 == 0) {
        // 0x802258B4: addiu       $a0, $zero, 0x15E
        ctx->r4 = ADD32(0, 0X15E);
            goto L_802259F0;
    }
    // 0x802258B4: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x802258B8: jal         0x8004CB2C
    // 0x802258BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x802258BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x802258C0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802258C4: addiu       $a0, $a0, 0x1130
    ctx->r4 = ADD32(ctx->r4, 0X1130);
    // 0x802258C8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802258CC: jal         0x8003E6BC
    // 0x802258D0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_2;
    // 0x802258D0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    after_2:
    // 0x802258D4: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x802258D8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802258DC: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x802258E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802258E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802258E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802258EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802258F0: lhu         $v1, 0x5082($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5082);
    // 0x802258F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802258F8: sh          $v0, 0x6390($at)
    MEM_H(0X6390, ctx->r1) = ctx->r2;
    // 0x802258FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225904: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225908: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022590C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80225910: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225914: sh          $v1, 0x6392($at)
    MEM_H(0X6392, ctx->r1) = ctx->r3;
    // 0x80225918: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022591C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225920: j           L_802259F0
    // 0x80225924: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_802259F0;
    // 0x80225924: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_80225928:
    // 0x80225928: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022592C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225930: jal         0x800739B0
    // 0x80225934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800739B0_4EDB0(rdram, ctx);
        goto after_3;
    // 0x80225934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80225938: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022593C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225940: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
    // 0x80225944: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80225948:
    // 0x80225948: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022594C: jal         0x8005F6B4
    // 0x80225950: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80225950: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225954: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225958: addiu       $v0, $v0, 0x574
    ctx->r2 = ADD32(ctx->r2, 0X574);
    // 0x8022595C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225960: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225964: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225968: addiu       $v0, $v0, 0xFA8
    ctx->r2 = ADD32(ctx->r2, 0XFA8);
    // 0x8022596C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    // 0x80225970: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x80225974: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80225978: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022597C: addiu       $a0, $a0, 0x380
    ctx->r4 = ADD32(ctx->r4, 0X380);
    // 0x80225980: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225984: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80225988: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022598C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225990: sh          $v0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r2;
    // 0x80225994: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225998: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x8022599C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802259A0: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x802259A4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802259A8: sb          $s0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r16;
    // 0x802259AC: sh          $zero, 0x438($s1)
    MEM_H(0X438, ctx->r17) = 0;
    // 0x802259B0: sh          $zero, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = 0;
    // 0x802259B4: sw          $zero, 0x428($s1)
    MEM_W(0X428, ctx->r17) = 0;
    // 0x802259B8: sw          $zero, 0x430($s1)
    MEM_W(0X430, ctx->r17) = 0;
    // 0x802259BC: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x802259C0: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x802259C4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x802259C8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802259CC: jal         0x8005FA7C
    // 0x802259D0: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x802259D0: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_5:
    // 0x802259D4: sb          $s0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r16;
    // 0x802259D8: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x802259DC: sb          $zero, 0x6($s2)
    MEM_B(0X6, ctx->r18) = 0;
    // 0x802259E0: jal         0x8005FB90
    // 0x802259E4: sb          $zero, 0x7($s2)
    MEM_B(0X7, ctx->r18) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x802259E4: sb          $zero, 0x7($s2)
    MEM_B(0X7, ctx->r18) = 0;
    after_6:
    // 0x802259E8: jal         0x80060018
    // 0x802259EC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x802259EC: nop

    after_7:
L_802259F0:
    // 0x802259F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802259F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802259F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802259FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A00: jr          $ra
    // 0x80225A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231BF0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231BF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231BF8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231BFC: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    // 0x80231C00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C04: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80231C08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231C0C: jal         0x8002A33C
    // 0x80231C10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80231C10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231C18: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80231C1C: addiu       $a1, $s1, 0x370
    ctx->r5 = ADD32(ctx->r17, 0X370);
    // 0x80231C20: jal         0x8004FEA0
    // 0x80231C24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80231C24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231C28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231C2C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80231C30: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80231C34: beq         $v0, $zero, L_80231C48
    if (ctx->r2 == 0) {
        // 0x80231C38: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80231C48;
    }
    // 0x80231C38: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80231C3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231C40: j           L_80231C4C
    // 0x80231C44: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80231C4C;
    // 0x80231C44: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80231C48:
    // 0x80231C48: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_80231C4C:
    // 0x80231C4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231C50: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231C54: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231C58: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
    // 0x80231C5C: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x80231C60: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231C64: jal         0x80232444
    // 0x80231C68: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    func_80232444_ovl28(rdram, ctx);
        goto after_2;
    // 0x80231C68: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    after_2:
    // 0x80231C6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231C70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231C74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C78: jr          $ra
    // 0x80231C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C560_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C560: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023C564: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023C568: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023C56C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023C570: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023C574: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023C578: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8023C57C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C580: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C584: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8023C588: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C58C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023C590: beq         $a0, $v0, L_8023C5AC
    if (ctx->r4 == ctx->r2) {
        // 0x8023C594: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023C5AC;
    }
    // 0x8023C594: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023C598: bne         $a0, $v0, L_8023C5A8
    if (ctx->r4 != ctx->r2) {
        // 0x8023C59C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023C5A8;
    }
    // 0x8023C59C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023C5A0: j           L_8023C5AC
    // 0x8023C5A4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8023C5AC;
    // 0x8023C5A4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023C5A8:
    // 0x8023C5A8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8023C5AC:
    // 0x8023C5AC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023C5B0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8023C5B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5B8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023C5BC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023C5C0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023C5C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023C5C8: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023C5CC: beq         $a0, $v1, L_8023C5F4
    if (ctx->r4 == ctx->r3) {
        // 0x8023C5D0: addiu       $a1, $zero, 0x3E
        ctx->r5 = ADD32(0, 0X3E);
            goto L_8023C5F4;
    }
    // 0x8023C5D0: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8023C5D4: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8023C5D8: jal         0x8003B85C
    // 0x8023C5DC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8023C5DC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8023C5E0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023C5E4: lui         $a1, 0xE
    ctx->r5 = S32(0XE << 16);
    // 0x8023C5E8: ori         $a1, $a1, 0xD
    ctx->r5 = ctx->r5 | 0XD;
    // 0x8023C5EC: jal         0x8003B840
    // 0x8023C5F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8023C5F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8023C5F4:
    // 0x8023C5F4: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8023C5F8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8023C5FC: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023C600: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023C604: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8023C608: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8023C60C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023C610: beq         $v1, $v0, L_8023C62C
    if (ctx->r3 == ctx->r2) {
        // 0x8023C614: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023C62C;
    }
    // 0x8023C614: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023C618: bne         $v1, $v0, L_8023C628
    if (ctx->r3 != ctx->r2) {
        // 0x8023C61C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023C628;
    }
    // 0x8023C61C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023C620: j           L_8023C62C
    // 0x8023C624: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8023C62C;
    // 0x8023C624: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8023C628:
    // 0x8023C628: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8023C62C:
    // 0x8023C62C: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8023C630: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8023C634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C638: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023C63C: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8023C640: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023C644: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023C648: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023C64C: beq         $a0, $v1, L_8023C674
    if (ctx->r4 == ctx->r3) {
        // 0x8023C650: addiu       $a1, $zero, 0x3E
        ctx->r5 = ADD32(0, 0X3E);
            goto L_8023C674;
    }
    // 0x8023C650: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8023C654: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x8023C658: jal         0x8003B85C
    // 0x8023C65C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8023C65C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x8023C660: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023C664: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8023C668: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8023C66C: jal         0x8003B840
    // 0x8023C670: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8023C670: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8023C674:
    // 0x8023C674: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023C678: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8023C67C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023C680: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023C684: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023C688: jr          $ra
    // 0x8023C68C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023C68C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FDAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDAC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FDB0: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022FDB4: bne         $a1, $a0, L_8022FE08
    if (ctx->r5 != ctx->r4) {
        // 0x8022FDB8: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022FE08;
    }
    // 0x8022FDB8: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022FDBC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022FDC0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022FDC4: bne         $v1, $v0, L_8022FDD4
    if (ctx->r3 != ctx->r2) {
        // 0x8022FDC8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022FDD4;
    }
    // 0x8022FDC8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022FDCC: j           L_8022FDF0
    // 0x8022FDD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022FDF0;
    // 0x8022FDD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022FDD4:
    // 0x8022FDD4: bne         $v1, $v0, L_8022FDE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022FDD8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022FDE4;
    }
    // 0x8022FDD8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022FDDC: j           L_8022FDF0
    // 0x8022FDE0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022FDF0;
    // 0x8022FDE0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022FDE4:
    // 0x8022FDE4: bne         $v1, $v0, L_8022FDF0
    if (ctx->r3 != ctx->r2) {
        // 0x8022FDE8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022FDF0;
    }
    // 0x8022FDE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FDEC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022FDF0:
    // 0x8022FDF0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022FDF4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022FDF8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022FDFC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022FE00: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022FE04: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022FE08:
    // 0x8022FE08: jr          $ra
    // 0x8022FE0C: nop

    TRACE_RETURN()
    return;
    // 0x8022FE0C: nop

;}
RECOMP_FUNC void func_8024DBCC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DBCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024DBD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024DBD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024DBD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024DBDC: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x8024DBE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024DBE4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024DBE8: addiu       $a1, $a1, 0x638C
    ctx->r5 = ADD32(ctx->r5, 0X638C);
    // 0x8024DBEC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8024DBF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024DBF4: jal         0x8009A3B4
    // 0x8024DBF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024DBF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8024DBFC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024DC00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DC04: beq         $v1, $v0, L_8024DC8C
    if (ctx->r3 == ctx->r2) {
        // 0x8024DC08: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024DC8C;
    }
    // 0x8024DC08: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024DC0C: beql        $v0, $zero, L_8024DC24
    if (ctx->r2 == 0) {
        // 0x8024DC10: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024DC24;
    }
    goto skip_0;
    // 0x8024DC10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024DC14: beq         $v1, $zero, L_8024DC3C
    if (ctx->r3 == 0) {
        // 0x8024DC18: nop
    
            goto L_8024DC3C;
    }
    // 0x8024DC18: nop

    // 0x8024DC1C: j           L_8024DD08
    // 0x8024DC20: nop

        goto L_8024DD08;
    // 0x8024DC20: nop

L_8024DC24:
    // 0x8024DC24: beq         $v1, $v0, L_8024DCBC
    if (ctx->r3 == ctx->r2) {
        // 0x8024DC28: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024DCBC;
    }
    // 0x8024DC28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024DC2C: beq         $v1, $v0, L_8024DCEC
    if (ctx->r3 == ctx->r2) {
        // 0x8024DC30: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_8024DCEC;
    }
    // 0x8024DC30: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024DC34: j           L_8024DD08
    // 0x8024DC38: nop

        goto L_8024DD08;
    // 0x8024DC38: nop

L_8024DC3C:
    // 0x8024DC3C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8024DC40: addiu       $s1, $s1, -0x3A9E
    ctx->r17 = ADD32(ctx->r17, -0X3A9E);
    // 0x8024DC44: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024DC48: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8024DC4C: bne         $v0, $zero, L_8024DD04
    if (ctx->r2 != 0) {
        // 0x8024DC50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024DD04;
    }
    // 0x8024DC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DC54: jal         0x8006033C
    // 0x8024DC58: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024DC58: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_1:
    // 0x8024DC5C: beq         $v0, $zero, L_8024DC74
    if (ctx->r2 == 0) {
        // 0x8024DC60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024DC74;
    }
    // 0x8024DC60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024DC64: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024DC68: ori         $v0, $v0, 0x24
    ctx->r2 = ctx->r2 | 0X24;
    // 0x8024DC6C: j           L_8024DD00
    // 0x8024DC70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8024DD00;
    // 0x8024DC70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8024DC74:
    // 0x8024DC74: jal         0x8024DD2C
    // 0x8024DC78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024DC78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8024DC7C: beq         $v0, $zero, L_8024DD08
    if (ctx->r2 == 0) {
        // 0x8024DC80: nop
    
            goto L_8024DD08;
    }
    // 0x8024DC80: nop

    // 0x8024DC84: j           L_8024DCDC
    // 0x8024DC88: nop

        goto L_8024DCDC;
    // 0x8024DC88: nop

L_8024DC8C:
    // 0x8024DC8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DC90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024DC94: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024DC98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024DC9C: bne         $v0, $zero, L_8024DD08
    if (ctx->r2 != 0) {
        // 0x8024DCA0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024DD08;
    }
    // 0x8024DCA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024DCA4: jal         0x8024DD2C
    // 0x8024DCA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_3;
    // 0x8024DCA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8024DCAC: bne         $v0, $zero, L_8024DCDC
    if (ctx->r2 != 0) {
        // 0x8024DCB0: nop
    
            goto L_8024DCDC;
    }
    // 0x8024DCB0: nop

    // 0x8024DCB4: j           L_8024DD08
    // 0x8024DCB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8024DD08;
    // 0x8024DCB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8024DCBC:
    // 0x8024DCBC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8024DCC0: jal         0x800616FC
    // 0x8024DCC4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8024DCC4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x8024DCC8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024DCCC: addiu       $v0, $v0, -0x3A9E
    ctx->r2 = ADD32(ctx->r2, -0X3A9E);
    // 0x8024DCD0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8024DCD4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8024DCD8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
L_8024DCDC:
    // 0x8024DCDC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024DCE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024DCE4: j           L_8024DD08
    // 0x8024DCE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024DD08;
    // 0x8024DCE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024DCEC:
    // 0x8024DCEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DCF0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024DCF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024DCF8: bne         $v0, $zero, L_8024DD08
    if (ctx->r2 != 0) {
        // 0x8024DCFC: nop
    
            goto L_8024DD08;
    }
    // 0x8024DCFC: nop

L_8024DD00:
    // 0x8024DD00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024DD04:
    // 0x8024DD04: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024DD08:
    // 0x8024DD08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024DD0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024DD10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DD14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024DD18: jr          $ra
    // 0x8024DD1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024DD1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802285B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802285B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802285B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802285BC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802285C0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802285C4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802285C8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802285CC: lbu         $v1, 0x6($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6);
    // 0x802285D0: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x802285D4: addiu       $t4, $t4, 0x49B0
    ctx->r12 = ADD32(ctx->r12, 0X49B0);
    // 0x802285D8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x802285DC: beq         $v1, $s3, L_802287BC
    if (ctx->r3 == ctx->r19) {
        // 0x802285E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802287BC;
    }
    // 0x802285E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802285E4: beql        $v0, $zero, L_802285FC
    if (ctx->r2 == 0) {
        // 0x802285E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802285FC;
    }
    goto skip_0;
    // 0x802285E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802285EC: beq         $v1, $zero, L_8022860C
    if (ctx->r3 == 0) {
        // 0x802285F0: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_8022860C;
    }
    // 0x802285F0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802285F4: j           L_80228830
    // 0x802285F8: nop

        goto L_80228830;
    // 0x802285F8: nop

L_802285FC:
    // 0x802285FC: beq         $v1, $v0, L_802287CC
    if (ctx->r3 == ctx->r2) {
        // 0x80228600: nop
    
            goto L_802287CC;
    }
    // 0x80228600: nop

    // 0x80228604: j           L_80228830
    // 0x80228608: nop

        goto L_80228830;
    // 0x80228608: nop

L_8022860C:
    // 0x8022860C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80228610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80228614: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x80228618: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022861C: lbu         $t0, 0x4A6D($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X4A6D);
    // 0x80228620: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80228624: lw          $t2, 0x198C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X198C);
    // 0x80228628: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8022862C: lw          $t3, 0x1948($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1948);
    // 0x80228630: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x80228634: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228638: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022863C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80228640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228644: addiu       $s1, $zero, -0xC1
    ctx->r17 = ADD32(0, -0XC1);
    // 0x80228648: addiu       $t1, $zero, 0x5DC
    ctx->r9 = ADD32(0, 0X5DC);
    // 0x8022864C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228650: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80228654: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x80228658: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022865C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80228660: lui         $v0, 0x5DC
    ctx->r2 = S32(0X5DC << 16);
    // 0x80228664: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228668: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022866C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228670: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228674: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228678: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022867C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228680: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228684: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80228688: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
    // 0x8022868C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228690: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80228694: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228698: sh          $s1, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r17;
    // 0x8022869C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286A0: sh          $t1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r9;
    // 0x802286A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286A8: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x802286AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286B0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802286B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286B8: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802286BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286C0: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x802286C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286C8: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x802286CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286D0: sb          $zero, 0x63CD($at)
    MEM_B(0X63CD, ctx->r1) = 0;
    // 0x802286D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286D8: sb          $zero, 0x63CC($at)
    MEM_B(0X63CC, ctx->r1) = 0;
    // 0x802286DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286E0: sb          $zero, 0x63CB($at)
    MEM_B(0X63CB, ctx->r1) = 0;
    // 0x802286E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286E8: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x802286EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286F0: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x802286F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802286F8: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x802286FC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80228700: sh          $s1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r17;
    // 0x80228704: sh          $t1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r9;
    // 0x80228708: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022870C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80228710: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80228714: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
    // 0x80228718: sb          $v1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r3;
    // 0x8022871C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228720: sb          $t0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r8;
    // 0x80228724: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228728: sw          $t2, 0x63D4($at)
    MEM_W(0X63D4, ctx->r1) = ctx->r10;
    // 0x8022872C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228730: sw          $t3, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r11;
    // 0x80228734: jal         0x8024CDE8
    // 0x80228738: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_8024CDE8_ovl28(rdram, ctx);
        goto after_0;
    // 0x80228738: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_0:
    // 0x8022873C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80228740: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228744: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80228748: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8022874C: sw          $v0, 0xA0($s2)
    MEM_W(0XA0, ctx->r18) = ctx->r2;
    // 0x80228750: addiu       $v0, $zero, 0x898
    ctx->r2 = ADD32(0, 0X898);
    // 0x80228754: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80228758: sh          $s1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r17;
    // 0x8022875C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80228760: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228764: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80228768: jal         0x8024CDE8
    // 0x8022876C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8024CDE8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022876C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x80228770: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80228774: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80228778: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022877C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x80228780: sw          $v0, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = ctx->r2;
    // 0x80228784: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x80228788: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022878C: addiu       $v0, $zero, 0x960
    ctx->r2 = ADD32(0, 0X960);
    // 0x80228790: sh          $s1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r17;
    // 0x80228794: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80228798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022879C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x802287A0: jal         0x8024CDE8
    // 0x802287A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_8024CDE8_ovl28(rdram, ctx);
        goto after_2;
    // 0x802287A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_2:
    // 0x802287A8: lbu         $v1, 0x6($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6);
    // 0x802287AC: sw          $v0, 0x98($s2)
    MEM_W(0X98, ctx->r18) = ctx->r2;
    // 0x802287B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802287B4: j           L_80228830
    // 0x802287B8: sb          $v1, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r3;
        goto L_80228830;
    // 0x802287B8: sb          $v1, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r3;
L_802287BC:
    // 0x802287BC: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x802287C0: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802287C4: j           L_80228824
    // 0x802287C8: sb          $v0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r2;
        goto L_80228824;
    // 0x802287C8: sb          $v0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r2;
L_802287CC:
    // 0x802287CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802287D0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802287D4: bne         $v0, $zero, L_80228830
    if (ctx->r2 != 0) {
        // 0x802287D8: addiu       $v1, $zero, -0x81
        ctx->r3 = ADD32(0, -0X81);
            goto L_80228830;
    }
    // 0x802287D8: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x802287DC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802287E0: lw          $v0, 0x1958($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1958);
    // 0x802287E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802287E8: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x802287EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802287F0: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x802287F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802287F8: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x802287FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228800: sw          $v0, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r2;
    // 0x80228804: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80228808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022880C: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
    // 0x80228810: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228814: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80228818: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022881C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228820: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
L_80228824:
    // 0x80228824: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80228828: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022882C: sb          $v0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r2;
L_80228830:
    // 0x80228830: jal         0x80228310
    // 0x80228834: nop

    func_80228310_ovl28(rdram, ctx);
        goto after_3;
    // 0x80228834: nop

    after_3:
    // 0x80228838: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022883C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80228840: beq         $v1, $v0, L_80228898
    if (ctx->r3 == ctx->r2) {
        // 0x80228844: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80228898;
    }
    // 0x80228844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228848: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8022884C: beq         $v0, $zero, L_80228864
    if (ctx->r2 == 0) {
        // 0x80228850: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80228864;
    }
    // 0x80228850: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80228854: beq         $v1, $v0, L_80228880
    if (ctx->r3 == ctx->r2) {
        // 0x80228858: addiu       $a1, $zero, 0x50
        ctx->r5 = ADD32(0, 0X50);
            goto L_80228880;
    }
    // 0x80228858: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022885C: j           L_80228904
    // 0x80228860: addiu       $v0, $v1, -0x1F
    ctx->r2 = ADD32(ctx->r3, -0X1F);
        goto L_80228904;
    // 0x80228860: addiu       $v0, $v1, -0x1F
    ctx->r2 = ADD32(ctx->r3, -0X1F);
L_80228864:
    // 0x80228864: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80228868: beq         $v1, $v0, L_802288B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022886C: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_802288B4;
    }
    // 0x8022886C: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80228870: beq         $v1, $v0, L_802288DC
    if (ctx->r3 == ctx->r2) {
        // 0x80228874: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802288DC;
    }
    // 0x80228874: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228878: j           L_802288FC
    // 0x8022887C: nop

        goto L_802288FC;
    // 0x8022887C: nop

L_80228880:
    // 0x80228880: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228884: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x80228888: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022888C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228890: j           L_802288F4
    // 0x80228894: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802288F4;
    // 0x80228894: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80228898:
    // 0x80228898: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022889C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802288A0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802288A4: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802288A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802288AC: j           L_802288F4
    // 0x802288B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802288F4;
    // 0x802288B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802288B4:
    // 0x802288B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802288B8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802288BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802288C0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802288C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802288C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802288CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802288D0: jal         0x8024CEF8
    // 0x802288D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8024CEF8_ovl28(rdram, ctx);
        goto after_4;
    // 0x802288D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x802288D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802288DC:
    // 0x802288DC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802288E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802288E4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802288E8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802288EC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802288F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802288F4:
    // 0x802288F4: jal         0x8024CEF8
    // 0x802288F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8024CEF8_ovl28(rdram, ctx);
        goto after_5;
    // 0x802288F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_5:
L_802288FC:
    // 0x802288FC: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80228900: addiu       $v0, $v1, -0x1F
    ctx->r2 = ADD32(ctx->r3, -0X1F);
L_80228904:
    // 0x80228904: sltiu       $v0, $v0, 0x3B
    ctx->r2 = ctx->r2 < 0X3B ? 1 : 0;
    // 0x80228908: beq         $v0, $zero, L_80228924
    if (ctx->r2 == 0) {
        // 0x8022890C: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80228924;
    }
    // 0x8022890C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80228910: lw          $v1, 0xA0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XA0);
    // 0x80228914: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80228918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022891C: j           L_80228934
    // 0x80228920: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_80228934;
    // 0x80228920: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80228924:
    // 0x80228924: bne         $v1, $v0, L_80228934
    if (ctx->r3 != ctx->r2) {
        // 0x80228928: nop
    
            goto L_80228934;
    }
    // 0x80228928: nop

    // 0x8022892C: jal         0x8004F5C4
    // 0x80228930: lw          $a0, 0xA0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80228930: lw          $a0, 0xA0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA0);
    after_6:
L_80228934:
    // 0x80228934: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228938: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022893C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228940: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228944: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228948: jr          $ra
    // 0x8022894C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022894C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80230854_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230858: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023085C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230860: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230868: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023086C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80230870: beq         $v0, $zero, L_802309DC
    if (ctx->r2 == 0) {
        // 0x80230874: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802309DC;
    }
    // 0x80230874: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80230878: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023087C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230880: addu        $at, $at, $v0
    gpr jr_addend_80230888 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230884: lw          $v0, 0x5D30($at)
    ctx->r2 = ADD32(ctx->r1, 0X5D30);
    // 0x80230888: jr          $v0
    // 0x8023088C: nop

    switch (jr_addend_80230888 >> 2) {
        case 0: goto L_80230890; break;
        case 1: goto L_80230920; break;
        case 2: goto L_80230948; break;
        case 3: goto L_80230994; break;
        case 4: goto L_802309BC; break;
        case 5: goto L_802309DC; break;
        default: switch_error(__func__, 0x80230888, 0x80255D30);
    }
    // 0x8023088C: nop

L_80230890:
    // 0x80230890: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230894: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230898: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023089C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802308A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802308A4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802308A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802308AC: lw          $v0, 0x3834($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3834);
    // 0x802308B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802308B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802308B8: jal         0x8004D5D4
    // 0x802308BC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802308BC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_0:
    // 0x802308C0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802308C4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802308C8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802308CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802308D0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802308D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802308D8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802308DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802308E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802308E4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802308E8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802308EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802308F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802308F4: lhu         $v1, 0x3848($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X3848);
    // 0x802308F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802308FC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230904: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230908: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023090C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230910: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230914: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230918: j           L_802309DC
    // 0x8023091C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802309DC;
    // 0x8023091C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80230920:
    // 0x80230920: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80230924: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80230928: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x8023092C: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_802309DC;
    }
    // 0x8023092C: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80230930: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80230934: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x80230938: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802309DC;
    }
    // 0x80230938: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023093C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230940: j           L_802309D4
    // 0x80230944: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_802309D4;
    // 0x80230944: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_80230948:
    // 0x80230948: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023094C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80230950: bne         $v1, $v0, L_80230974
    if (ctx->r3 != ctx->r2) {
        // 0x80230954: addiu       $v0, $zero, 0x1D
        ctx->r2 = ADD32(0, 0X1D);
            goto L_80230974;
    }
    // 0x80230954: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80230958: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023095C: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80230960: bne         $v1, $v0, L_8023096C
    if (ctx->r3 != ctx->r2) {
        // 0x80230964: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8023096C;
    }
    // 0x80230964: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80230968: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023096C:
    // 0x8023096C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80230970: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_80230974:
    // 0x80230974: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x80230978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802309DC;
    }
    // 0x80230978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023097C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80230980: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x80230984: nop
    
            goto L_802309DC;
    }
    // 0x80230984: nop

    // 0x80230988: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023098C: j           L_802309D4
    // 0x80230990: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
        goto L_802309D4;
    // 0x80230990: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80230994:
    // 0x80230994: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80230998: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8023099C: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x802309A0: addiu       $v0, $zero, 0xCD
        ctx->r2 = ADD32(0, 0XCD);
            goto L_802309DC;
    }
    // 0x802309A0: addiu       $v0, $zero, 0xCD
    ctx->r2 = ADD32(0, 0XCD);
    // 0x802309A4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802309A8: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x802309AC: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802309DC;
    }
    // 0x802309AC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802309B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802309B4: j           L_802309D4
    // 0x802309B8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_802309D4;
    // 0x802309B8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_802309BC:
    // 0x802309BC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802309C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802309C4: bne         $v1, $v0, L_802309DC
    if (ctx->r3 != ctx->r2) {
        // 0x802309C8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_802309DC;
    }
    // 0x802309C8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x802309CC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802309D0: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
L_802309D4:
    // 0x802309D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802309D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802309DC:
    // 0x802309DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802309E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802309E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802309E8: jr          $ra
    // 0x802309EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802309EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
