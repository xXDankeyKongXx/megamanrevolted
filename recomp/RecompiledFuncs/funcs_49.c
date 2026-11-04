#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022B4D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B4D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B4E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B4E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B4E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B4EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B4F0: lw          $v0, -0x2860($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2860);
    // 0x8022B4F4: jalr        $v0
    // 0x8022B4F8: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B4F8: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    after_0:
    // 0x8022B4FC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022B500: bne         $v0, $zero, L_8022B510
    if (ctx->r2 != 0) {
        // 0x8022B504: nop
    
            goto L_8022B510;
    }
    // 0x8022B504: nop

    // 0x8022B508: jal         0x8005044C
    // 0x8022B50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022B50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022B510:
    // 0x8022B510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B514: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B518: jr          $ra
    // 0x8022B51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802371FC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237200: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237204: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237208: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023720C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237210: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237214: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80237218: beq         $v0, $zero, L_802372FC
    if (ctx->r2 == 0) {
        // 0x8023721C: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_802372FC;
    }
    // 0x8023721C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80237220: bne         $v0, $zero, L_802372E0
    if (ctx->r2 != 0) {
        // 0x80237224: nop
    
            goto L_802372E0;
    }
    // 0x80237224: nop

    // 0x80237228: jal         0x8004F144
    // 0x8023722C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023722C: nop

    after_0:
    // 0x80237230: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80237234: beq         $s0, $zero, L_802372E0
    if (ctx->r16 == 0) {
        // 0x80237238: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802372E0;
    }
    // 0x80237238: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023723C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80237240: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80237244: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80237248: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023724C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80237250: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80237254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237258: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023725C: jal         0x800A3450
    // 0x80237260: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80237260: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80237264: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80237268: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023726C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237270: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80237274: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80237278: jal         0x800A3450
    // 0x8023727C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023727C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80237280: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80237284: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80237288: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023728C: jal         0x800A3450
    // 0x80237290: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80237290: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80237294: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80237298: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8023729C: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x802372A0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802372A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802372A8: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x802372AC: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x802372B0: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x802372B4: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x802372B8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802372BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802372C0: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x802372C4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x802372C8: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x802372CC: jal         0x800A3450
    // 0x802372D0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802372D0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x802372D4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802372D8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x802372DC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802372E0:
    // 0x802372E0: jal         0x800A3450
    // 0x802372E4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x802372E4: nop

    after_5:
    // 0x802372E8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802372EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802372F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802372F4: j           L_80237304
    // 0x802372F8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80237304;
    // 0x802372F8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802372FC:
    // 0x802372FC: jal         0x8004F5C4
    // 0x80237300: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80237300: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80237304:
    // 0x80237304: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237308: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023730C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237310: jr          $ra
    // 0x80237314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802255D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802255D8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802255DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802255E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802255E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802255E8: lw          $v0, -0x3BE0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3BE0);
    // 0x802255EC: jalr        $v0
    // 0x802255F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802255F0: nop

    after_0:
    // 0x802255F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802255F8: jr          $ra
    // 0x802255FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C6A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C6A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C6AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C6B0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C6B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C6B8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C6BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6C0: bne         $v0, $zero, L_8022C714
    if (ctx->r2 != 0) {
        // 0x8022C6C4: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022C714;
    }
    // 0x8022C6C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C6C8: jal         0x8022DCA4
    // 0x8022C6CC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022C6CC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022C6D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C6D4: beq         $v0, $zero, L_8022C710
    if (ctx->r2 == 0) {
        // 0x8022C6D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C710;
    }
    // 0x8022C6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C6DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C6E0: jal         0x8022DC18
    // 0x8022C6E4: nop

    func_8022DC18_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022C6E4: nop

    after_1:
    // 0x8022C6E8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C6EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C6F0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022C6F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C6F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C6FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C700: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022C704: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C708: j           L_8022C714
    // 0x8022C70C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022C714;
    // 0x8022C70C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022C710:
    // 0x8022C710: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C714:
    // 0x8022C714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C718: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C71C: jr          $ra
    // 0x8022C720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023065C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023065C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230664: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230668: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023066C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230670: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80230674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230678: beq         $v1, $v0, L_802307A0
    if (ctx->r3 == ctx->r2) {
        // 0x8023067C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_802307A0;
    }
    // 0x8023067C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80230680: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230684: beql        $v0, $zero, L_8023069C
    if (ctx->r2 == 0) {
        // 0x80230688: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023069C;
    }
    goto skip_0;
    // 0x80230688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023068C: beql        $v1, $zero, L_802306B4
    if (ctx->r3 == 0) {
        // 0x80230690: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_802306B4;
    }
    goto skip_1;
    // 0x80230690: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_1:
    // 0x80230694: j           L_802308C8
    // 0x80230698: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
        goto L_802308C8;
    // 0x80230698: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
L_8023069C:
    // 0x8023069C: beq         $v1, $v0, L_802307DC
    if (ctx->r3 == ctx->r2) {
        // 0x802306A0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802307DC;
    }
    // 0x802306A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802306A4: beq         $v1, $v0, L_80230880
    if (ctx->r3 == ctx->r2) {
        // 0x802306A8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80230880;
    }
    // 0x802306A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802306AC: j           L_802308CC
    // 0x802306B0: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
        goto L_802308CC;
    // 0x802306B0: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
L_802306B4:
    // 0x802306B4: jal         0x8004F144
    // 0x802306B8: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802306B8: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    after_0:
    // 0x802306BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802306C0: beq         $v1, $zero, L_802306FC
    if (ctx->r3 == 0) {
        // 0x802306C4: sw          $v1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r3;
            goto L_802306FC;
    }
    // 0x802306C4: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x802306C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802306CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802306D0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802306D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802306D8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802306DC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802306E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802306E4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802306E8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802306EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802306F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802306F4: jal         0x8009A3B4
    // 0x802306F8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802306F8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_1:
L_802306FC:
    // 0x802306FC: jal         0x8004F144
    // 0x80230700: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80230700: nop

    after_2:
    // 0x80230704: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230708: beq         $v1, $zero, L_80230744
    if (ctx->r3 == 0) {
        // 0x8023070C: sw          $v1, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r3;
            goto L_80230744;
    }
    // 0x8023070C: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
    // 0x80230710: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230714: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80230718: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8023071C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230720: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230724: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80230728: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023072C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80230730: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80230734: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80230738: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023073C: jal         0x8009A3B4
    // 0x80230740: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80230740: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_3:
L_80230744:
    // 0x80230744: jal         0x8004F144
    // 0x80230748: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80230748: nop

    after_4:
    // 0x8023074C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230750: beq         $v1, $zero, L_8023078C
    if (ctx->r3 == 0) {
        // 0x80230754: sw          $v1, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r3;
            goto L_8023078C;
    }
    // 0x80230754: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x80230758: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023075C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80230760: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80230764: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230768: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023076C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80230770: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230774: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80230778: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8023077C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80230780: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230784: jal         0x8009A3B4
    // 0x80230788: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80230788: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_8023078C:
    // 0x8023078C: addiu       $a0, $zero, 0x14D
    ctx->r4 = ADD32(0, 0X14D);
    // 0x80230790: jal         0x8002A33C
    // 0x80230794: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230794: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
    // 0x80230798: j           L_80230804
    // 0x8023079C: nop

        goto L_80230804;
    // 0x8023079C: nop

L_802307A0:
    // 0x802307A0: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x802307A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802307A8: bnel        $v1, $v0, L_802308C8
    if (ctx->r3 != ctx->r2) {
        // 0x802307AC: sh          $zero, 0x15E($s1)
        MEM_H(0X15E, ctx->r17) = 0;
            goto L_802308C8;
    }
    goto skip_2;
    // 0x802307AC: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
    skip_2:
    // 0x802307B0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x802307B4: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x802307B8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802307BC: beq         $v0, $zero, L_802308C4
    if (ctx->r2 == 0) {
        // 0x802307C0: addiu       $a0, $zero, 0x14E
        ctx->r4 = ADD32(0, 0X14E);
            goto L_802308C4;
    }
    // 0x802307C0: addiu       $a0, $zero, 0x14E
    ctx->r4 = ADD32(0, 0X14E);
    // 0x802307C4: jal         0x8002A33C
    // 0x802307C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x802307C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_7:
    // 0x802307CC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802307D0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802307D4: j           L_80230808
    // 0x802307D8: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
        goto L_80230808;
    // 0x802307D8: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
L_802307DC:
    // 0x802307DC: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x802307E0: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x802307E4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802307E8: bne         $v0, $zero, L_802307F4
    if (ctx->r2 != 0) {
        // 0x802307EC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802307F4;
    }
    // 0x802307EC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802307F0: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_802307F4:
    // 0x802307F4: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802307F8: slti        $v0, $v1, 0x259
    ctx->r2 = SIGNED(ctx->r3) < 0X259 ? 1 : 0;
    // 0x802307FC: bne         $v0, $zero, L_80230814
    if (ctx->r2 != 0) {
        // 0x80230800: slti        $v0, $v1, 0x12D
        ctx->r2 = SIGNED(ctx->r3) < 0X12D ? 1 : 0;
            goto L_80230814;
    }
    // 0x80230800: slti        $v0, $v1, 0x12D
    ctx->r2 = SIGNED(ctx->r3) < 0X12D ? 1 : 0;
L_80230804:
    // 0x80230804: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80230808:
    // 0x80230808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023080C: j           L_802308C4
    // 0x80230810: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802308C4;
    // 0x80230810: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230814:
    // 0x80230814: bnel        $v0, $zero, L_802308C8
    if (ctx->r2 != 0) {
        // 0x80230818: sh          $zero, 0x15E($s1)
        MEM_H(0X15E, ctx->r17) = 0;
            goto L_802308C8;
    }
    goto skip_3;
    // 0x80230818: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
    skip_3:
    // 0x8023081C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230820: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80230824: addiu       $t0, $zero, 0x258
    ctx->r8 = ADD32(0, 0X258);
    // 0x80230828: lui         $a3, 0x1B4E
    ctx->r7 = S32(0X1B4E << 16);
    // 0x8023082C: ori         $a3, $a3, 0x81B5
    ctx->r7 = ctx->r7 | 0X81B5;
    // 0x80230830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_80230834:
    // 0x80230834: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80230838: beq         $v0, $zero, L_8023086C
    if (ctx->r2 == 0) {
        // 0x8023083C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8023086C;
    }
    // 0x8023083C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230840: sb          $t1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r9;
    // 0x80230844: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80230848: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8023084C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80230850: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230854: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x80230858: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023085C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80230860: sra         $v1, $t2, 5
    ctx->r3 = S32(SIGNED(ctx->r10) >> 5);
    // 0x80230864: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80230868: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_8023086C:
    // 0x8023086C: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x80230870: bne         $v0, $zero, L_80230834
    if (ctx->r2 != 0) {
        // 0x80230874: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80230834;
    }
    // 0x80230874: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80230878: j           L_802308C8
    // 0x8023087C: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
        goto L_802308C8;
    // 0x8023087C: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
L_80230880:
    // 0x80230880: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80230884: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80230888: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_8023088C:
    // 0x8023088C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80230890: beq         $v0, $zero, L_802308AC
    if (ctx->r2 == 0) {
        // 0x80230894: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_802308AC;
    }
    // 0x80230894: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230898: sb          $a1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r5;
    // 0x8023089C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802308A0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802308A4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802308A8: sb          $a0, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r4;
L_802308AC:
    // 0x802308AC: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x802308B0: bne         $v0, $zero, L_8023088C
    if (ctx->r2 != 0) {
        // 0x802308B4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8023088C;
    }
    // 0x802308B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802308B8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802308BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802308C0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_802308C4:
    // 0x802308C4: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
L_802308C8:
    // 0x802308C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_802308CC:
    // 0x802308CC: addiu       $t1, $zero, 0x4210
    ctx->r9 = ADD32(0, 0X4210);
    // 0x802308D0: addiu       $t0, $zero, 0x1F
    ctx->r8 = ADD32(0, 0X1F);
    // 0x802308D4: addiu       $a3, $zero, -0x8000
    ctx->r7 = ADD32(0, -0X8000);
    // 0x802308D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_802308DC:
    // 0x802308DC: lh          $a0, 0x182($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X182);
    // 0x802308E0: slti        $v0, $a0, 0x21
    ctx->r2 = SIGNED(ctx->r4) < 0X21 ? 1 : 0;
    // 0x802308E4: bne         $v0, $zero, L_80230928
    if (ctx->r2 != 0) {
        // 0x802308E8: sh          $t1, 0x186($a1)
        MEM_H(0X186, ctx->r5) = ctx->r9;
            goto L_80230928;
    }
    // 0x802308E8: sh          $t1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r9;
    // 0x802308EC: addiu       $v1, $a0, -0x6A
    ctx->r3 = ADD32(ctx->r4, -0X6A);
    // 0x802308F0: bltzl       $v1, L_802308F8
    if (SIGNED(ctx->r3) < 0) {
        // 0x802308F4: addiu       $v1, $a0, -0x5B
        ctx->r3 = ADD32(ctx->r4, -0X5B);
            goto L_802308F8;
    }
    goto skip_4;
    // 0x802308F4: addiu       $v1, $a0, -0x5B
    ctx->r3 = ADD32(ctx->r4, -0X5B);
    skip_4:
L_802308F8:
    // 0x802308F8: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802308FC: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x80230900: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80230904: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80230908: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023090C: sra         $a0, $v1, 1
    ctx->r4 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80230910: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x80230914: sll         $v0, $a0, 5
    ctx->r2 = S32(ctx->r4 << 5);
    // 0x80230918: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x8023091C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230920: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80230924: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
L_80230928:
    // 0x80230928: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023092C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80230930: bne         $v0, $zero, L_802308DC
    if (ctx->r2 != 0) {
        // 0x80230934: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_802308DC;
    }
    // 0x80230934: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80230938: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023093C: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x80230940: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230944: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80230948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023094C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80230950: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230954: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023095C: jr          $ra
    // 0x80230960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D314_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D318: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D31C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022D320: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D324: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D328: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D32C: lw          $v0, -0x20D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20D4);
    // 0x8022D330: jalr        $v0
    // 0x8022D334: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D334: nop

    after_0:
    // 0x8022D338: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D33C: jr          $ra
    // 0x8022D340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A920_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A924: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A928: jal         0x8004EF48
    // 0x8023A92C: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x8023A92C: nop

    after_0:
    // 0x8023A930: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8023A934: beq         $t0, $zero, L_8023A9B0
    if (ctx->r8 == 0) {
        // 0x8023A938: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8023A9B0;
    }
    // 0x8023A938: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A93C: sb          $v0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r2;
    // 0x8023A940: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8023A944: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x8023A948: lh          $v1, 0x14($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X14);
    // 0x8023A94C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023A950: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x8023A954: lh          $a0, 0x16($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X16);
    // 0x8023A958: addiu       $v0, $zero, -0x1600
    ctx->r2 = ADD32(0, -0X1600);
    // 0x8023A95C: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
    // 0x8023A960: lh          $a1, 0x18($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X18);
    // 0x8023A964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023A968: sb          $a2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r6;
    // 0x8023A96C: sb          $a2, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r6;
    // 0x8023A970: sb          $zero, 0x3($t0)
    MEM_B(0X3, ctx->r8) = 0;
    // 0x8023A974: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023A978: lw          $a3, 0x1700($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1700);
    // 0x8023A97C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8023A980: sh          $v0, 0x56($t0)
    MEM_H(0X56, ctx->r8) = ctx->r2;
    // 0x8023A984: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A988: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023A98C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023A990: sw          $v1, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r3;
    // 0x8023A994: sw          $a0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r4;
    // 0x8023A998: sw          $a1, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r5;
    // 0x8023A99C: lbu         $v0, 0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1);
    // 0x8023A9A0: sb          $a2, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r6;
    // 0x8023A9A4: sb          $v0, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r2;
    // 0x8023A9A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A9AC: sw          $t0, 0x1704($at)
    MEM_W(0X1704, ctx->r1) = ctx->r8;
L_8023A9B0:
    // 0x8023A9B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A9B4: jr          $ra
    // 0x8023A9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023800C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023800C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238010: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238014: jal         0x8004F5C4
    // 0x80238018: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80238018: nop

    after_0:
    // 0x8023801C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238020: jr          $ra
    // 0x80238024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BA0C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BA10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BA14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BA18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BA1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA20: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x8022BA24: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BA28: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BA2C: addiu       $v0, $v0, -0x2294
    ctx->r2 = ADD32(ctx->r2, -0X2294);
    // 0x8022BA30: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x8022BA34: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8022BA38: jal         0x8022DC08
    // 0x8022BA3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022BA3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022BA40: jal         0x800A3450
    // 0x8022BA44: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022BA44: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022BA48: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022BA4C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022BA50: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022BA54: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA5C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022BA60: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022BA64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA70: jr          $ra
    // 0x8022BA74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BA74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BA78_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA88: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022BA8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BA90: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BA94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BA98: bne         $v0, $zero, L_8022BACC
    if (ctx->r2 != 0) {
        // 0x8022BA9C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022BACC;
    }
    // 0x8022BA9C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022BAA0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BAA4: bne         $v1, $v0, L_8022BAB0
    if (ctx->r3 != ctx->r2) {
        // 0x8022BAA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BAB0;
    }
    // 0x8022BAA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BAAC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_8022BAB0:
    // 0x8022BAB0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022BAB4: jal         0x8022DB70
    // 0x8022BAB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DB70_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022BAB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022BABC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BAC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BAC8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022BACC:
    // 0x8022BACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAD4: jr          $ra
    // 0x8022BAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227BBC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227BC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227BCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227BD0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227BD4: bne         $v0, $zero, L_80227C08
    if (ctx->r2 != 0) {
        // 0x80227BD8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80227C08;
    }
    // 0x80227BD8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80227BDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80227BE0: jal         0x80050294
    // 0x80227BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227BF0: jal         0x80227D3C
    // 0x80227BF4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80227D3C_ovl3(rdram, ctx);
        goto after_1;
    // 0x80227BF4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80227BF8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227BFC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80227C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227C08:
    // 0x80227C08: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227C0C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227C10: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80227C14: beq         $v1, $v0, L_80227CCC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C18: slti        $v0, $v1, 0xD3
        ctx->r2 = SIGNED(ctx->r3) < 0XD3 ? 1 : 0;
            goto L_80227CCC;
    }
    // 0x80227C18: slti        $v0, $v1, 0xD3
    ctx->r2 = SIGNED(ctx->r3) < 0XD3 ? 1 : 0;
    // 0x80227C1C: beq         $v0, $zero, L_80227C68
    if (ctx->r2 == 0) {
        // 0x80227C20: addiu       $v0, $zero, 0x91
        ctx->r2 = ADD32(0, 0X91);
            goto L_80227C68;
    }
    // 0x80227C20: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x80227C24: beq         $v1, $v0, L_80227CBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C28: slti        $v0, $v1, 0x92
        ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
            goto L_80227CBC;
    }
    // 0x80227C28: slti        $v0, $v1, 0x92
    ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
    // 0x80227C2C: beq         $v0, $zero, L_80227C4C
    if (ctx->r2 == 0) {
        // 0x80227C30: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80227C4C;
    }
    // 0x80227C30: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80227C34: beq         $v1, $v0, L_80227CBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C38: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80227CBC;
    }
    // 0x80227C38: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227C3C: beq         $v1, $v0, L_80227CB0
    if (ctx->r3 == ctx->r2) {
        // 0x80227C40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227CB0;
    }
    // 0x80227C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C44: j           L_80227D28
    // 0x80227C48: nop

        goto L_80227D28;
    // 0x80227C48: nop

L_80227C4C:
    // 0x80227C4C: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x80227C50: beq         $v1, $v0, L_80227CCC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C54: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80227CCC;
    }
    // 0x80227C54: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80227C58: beq         $v1, $v0, L_80227CE0
    if (ctx->r3 == ctx->r2) {
        // 0x80227C5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227CE0;
    }
    // 0x80227C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C60: j           L_80227D28
    // 0x80227C64: nop

        goto L_80227D28;
    // 0x80227C64: nop

L_80227C68:
    // 0x80227C68: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80227C6C: beq         $v1, $v0, L_80227CF8
    if (ctx->r3 == ctx->r2) {
        // 0x80227C70: slti        $v0, $v1, 0x141
        ctx->r2 = SIGNED(ctx->r3) < 0X141 ? 1 : 0;
            goto L_80227CF8;
    }
    // 0x80227C70: slti        $v0, $v1, 0x141
    ctx->r2 = SIGNED(ctx->r3) < 0X141 ? 1 : 0;
    // 0x80227C74: beq         $v0, $zero, L_80227C94
    if (ctx->r2 == 0) {
        // 0x80227C78: addiu       $v0, $zero, 0x11D
        ctx->r2 = ADD32(0, 0X11D);
            goto L_80227C94;
    }
    // 0x80227C78: addiu       $v0, $zero, 0x11D
    ctx->r2 = ADD32(0, 0X11D);
    // 0x80227C7C: beq         $v1, $v0, L_80227CDC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C80: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_80227CDC;
    }
    // 0x80227C80: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80227C84: beq         $v1, $v0, L_80227CEC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227CEC;
    }
    // 0x80227C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C8C: j           L_80227D28
    // 0x80227C90: nop

        goto L_80227D28;
    // 0x80227C90: nop

L_80227C94:
    // 0x80227C94: addiu       $v0, $zero, 0x16D
    ctx->r2 = ADD32(0, 0X16D);
    // 0x80227C98: beq         $v1, $v0, L_80227D08
    if (ctx->r3 == ctx->r2) {
        // 0x80227C9C: addiu       $v0, $zero, 0x190
        ctx->r2 = ADD32(0, 0X190);
            goto L_80227D08;
    }
    // 0x80227C9C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80227CA0: beq         $v1, $v0, L_80227D18
    if (ctx->r3 == ctx->r2) {
        // 0x80227CA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227D18;
    }
    // 0x80227CA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CA8: j           L_80227D28
    // 0x80227CAC: nop

        goto L_80227D28;
    // 0x80227CAC: nop

L_80227CB0:
    // 0x80227CB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227CB4: j           L_80227D20
    // 0x80227CB8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80227D20;
    // 0x80227CB8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80227CBC:
    // 0x80227CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227CC4: j           L_80227D20
    // 0x80227CC8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80227D20;
    // 0x80227CC8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80227CCC:
    // 0x80227CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227CD4: j           L_80227D20
    // 0x80227CD8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_80227D20;
    // 0x80227CD8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_80227CDC:
    // 0x80227CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227CE0:
    // 0x80227CE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227CE4: j           L_80227D20
    // 0x80227CE8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80227D20;
    // 0x80227CE8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80227CEC:
    // 0x80227CEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227CF0: j           L_80227D20
    // 0x80227CF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80227D20;
    // 0x80227CF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227CF8:
    // 0x80227CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227D00: j           L_80227D20
    // 0x80227D04: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_80227D20;
    // 0x80227D04: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_80227D08:
    // 0x80227D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227D0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227D10: j           L_80227D20
    // 0x80227D14: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_80227D20;
    // 0x80227D14: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_80227D18:
    // 0x80227D18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227D1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80227D20:
    // 0x80227D20: jal         0x80227D3C
    // 0x80227D24: nop

    func_80227D3C_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227D24: nop

    after_2:
L_80227D28:
    // 0x80227D28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227D2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227D30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D34: jr          $ra
    // 0x80227D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802286B0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802286B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802286B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802286C0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802286C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802286C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802286CC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802286D0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802286D4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802286D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802286DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802286E0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802286E4: jal         0x8004D5D4
    // 0x802286E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802286E8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802286EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802286F4: jal         0x80050294
    // 0x802286F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802286F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802286FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228700: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80228704: jal         0x80228C84
    // 0x80228708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022870C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80228710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228714: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228718: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022871C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228720: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80228724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022872C: jr          $ra
    // 0x80228730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802386A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802386A4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x802386A8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x802386AC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802386B0: sll         $s2, $a2, 24
    ctx->r18 = S32(ctx->r6 << 24);
    // 0x802386B4: sra         $s2, $s2, 24
    ctx->r18 = S32(SIGNED(ctx->r18) >> 24);
    // 0x802386B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802386BC: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x802386C0: addiu       $v0, $s1, 0x400
    ctx->r2 = ADD32(ctx->r17, 0X400);
    // 0x802386C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802386C8: addu        $s0, $a1, $v0
    ctx->r16 = ADD32(ctx->r5, ctx->r2);
    // 0x802386CC: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x802386D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802386D4: sll         $v0, $s2, 7
    ctx->r2 = S32(ctx->r18 << 7);
    // 0x802386D8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802386DC: andi        $s3, $v0, 0xFFF
    ctx->r19 = ctx->r2 & 0XFFF;
    // 0x802386E0: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x802386E4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802386E8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x802386EC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802386F0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802386F4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802386F8: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    // 0x802386FC: jal         0x800324B4
    // 0x80238700: sh          $s0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r16;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80238700: sh          $s0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238704: nop

    // 0x80238708: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023870C: mflo        $v0
    ctx->r2 = lo;
    // 0x80238710: lhu         $v1, 0x1C($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X1C);
    // 0x80238714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238718: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023871C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238720: jal         0x80032498
    // 0x80238724: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80238724: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80238728: nop

    // 0x8023872C: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238730: mflo        $v0
    ctx->r2 = lo;
    // 0x80238734: lhu         $v1, 0x20($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X20);
    // 0x80238738: addiu       $s6, $zero, 0xF0
    ctx->r22 = ADD32(0, 0XF0);
    // 0x8023873C: addiu       $s4, $zero, 0xA0
    ctx->r20 = ADD32(0, 0XA0);
    // 0x80238740: addiu       $s5, $zero, 0xA0
    ctx->r21 = ADD32(0, 0XA0);
    // 0x80238744: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x80238748: slti        $s2, $s2, 0x11
    ctx->r18 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8023874C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80238750: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238754: beq         $s2, $zero, L_80238780
    if (ctx->r18 == 0) {
        // 0x80238758: sh          $v1, 0x14($sp)
        MEM_H(0X14, ctx->r29) = ctx->r3;
            goto L_80238780;
    }
    // 0x80238758: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8023875C: jal         0x800324B4
    // 0x80238760: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80238760: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x80238764: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80238768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023876C: lhu         $v0, 0x1E($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X1E);
    // 0x80238770: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238774: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238778: j           L_80238784
    // 0x8023877C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_80238784;
    // 0x8023877C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_80238780:
    // 0x80238780: lhu         $v0, 0x1E($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X1E);
L_80238784:
    // 0x80238784: jal         0x8003B878
    // 0x80238788: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_3;
    // 0x80238788: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023878C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238790: sll         $s6, $s6, 16
    ctx->r22 = S32(ctx->r22 << 16);
    // 0x80238794: sll         $v0, $s4, 8
    ctx->r2 = S32(ctx->r20 << 8);
    // 0x80238798: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8023879C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802387A0: or          $s6, $s6, $v0
    ctx->r22 = ctx->r22 | ctx->r2;
    // 0x802387A4: or          $s6, $s5, $s6
    ctx->r22 = ctx->r21 | ctx->r22;
    // 0x802387A8: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x802387AC: sll         $s7, $s3, 8
    ctx->r23 = S32(ctx->r19 << 8);
    // 0x802387B0: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x802387B4: lui         $s4, 0x3D48
    ctx->r20 = S32(0X3D48 << 16);
    // 0x802387B8: or          $s4, $s5, $s4
    ctx->r20 = ctx->r21 | ctx->r20;
    // 0x802387BC: or          $s4, $s7, $s4
    ctx->r20 = ctx->r23 | ctx->r20;
    // 0x802387C0: addiu       $v1, $s5, 0x1F
    ctx->r3 = ADD32(ctx->r21, 0X1F);
    // 0x802387C4: lui         $v0, 0xE
    ctx->r2 = S32(0XE << 16);
    // 0x802387C8: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x802387CC: or          $s7, $s7, $v0
    ctx->r23 = ctx->r23 | ctx->r2;
    // 0x802387D0: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x802387D4: sw          $s4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r20;
    // 0x802387D8: sw          $s7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r23;
    // 0x802387DC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x802387E0: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x802387E4: addiu       $s3, $s3, 0x1F
    ctx->r19 = ADD32(ctx->r19, 0X1F);
    // 0x802387E8: sll         $s3, $s3, 8
    ctx->r19 = S32(ctx->r19 << 8);
    // 0x802387EC: or          $s5, $s3, $s5
    ctx->r21 = ctx->r19 | ctx->r21;
    // 0x802387F0: or          $s3, $s3, $v1
    ctx->r19 = ctx->r19 | ctx->r3;
    // 0x802387F4: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x802387F8: sw          $s3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r19;
    // 0x802387FC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80238800: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x80238804: lb          $v0, 0xD($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XD);
    // 0x80238808: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x8023880C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238810: sll         $s2, $a3, 24
    ctx->r18 = S32(ctx->r7 << 24);
    // 0x80238814: sra         $s2, $s2, 24
    ctx->r18 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80238818: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023881C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238820: lw          $v1, -0x1588($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1588);
    // 0x80238824: lhu         $a3, 0x1E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1E);
    // 0x80238828: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x8023882C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x80238830: addiu       $s1, $a3, -0x800
    ctx->r17 = ADD32(ctx->r7, -0X800);
    // 0x80238834: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x80238838: andi        $s1, $s1, 0xFFF
    ctx->r17 = ctx->r17 & 0XFFF;
    // 0x8023883C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238840: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x80238844: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x80238848: jal         0x800324B4
    // 0x8023884C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x8023884C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    after_4:
    // 0x80238850: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80238854: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80238858: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023885C: mflo        $v0
    ctx->r2 = lo;
    // 0x80238860: lhu         $v1, 0x1C($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X1C);
    // 0x80238864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238868: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023886C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238870: jal         0x80032498
    // 0x80238874: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80238874: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80238878: nop

    // 0x8023887C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238880: mflo        $v0
    ctx->r2 = lo;
    // 0x80238884: lhu         $v1, 0x20($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X20);
    // 0x80238888: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023888C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238890: jal         0x8003B878
    // 0x80238894: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_8003B878_16C78(rdram, ctx);
        goto after_6;
    // 0x80238894: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_6:
    // 0x80238898: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8023889C: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x802388A0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802388A4: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x802388A8: sw          $s4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r20;
    // 0x802388AC: sw          $s7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r23;
    // 0x802388B0: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x802388B4: sw          $s3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r19;
    // 0x802388B8: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x802388BC: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x802388C0: lb          $v0, 0xD($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XD);
    // 0x802388C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802388C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802388CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802388D0: lw          $v0, -0x1588($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1588);
    // 0x802388D4: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x802388D8: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x802388DC: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802388E0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802388E4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802388E8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802388EC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802388F0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802388F4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802388F8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802388FC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80238900: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80238904: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80238908: jr          $ra
    // 0x8023890C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023890C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80228B6C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228B70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228B7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228B80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B84: bne         $v0, $zero, L_80228BB8
    if (ctx->r2 != 0) {
        // 0x80228B88: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228BB8;
    }
    // 0x80228B88: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228B8C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80228B90: jal         0x80050294
    // 0x80228B94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228B94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228BA0: jal         0x80228C84
    // 0x80228BA4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228BA4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x80228BA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BAC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228BB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228BB8:
    // 0x80228BB8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228BBC: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228BC0: addiu       $v0, $zero, 0x127
    ctx->r2 = ADD32(0, 0X127);
    // 0x80228BC4: bne         $v1, $v0, L_80228BD8
    if (ctx->r3 != ctx->r2) {
        // 0x80228BC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BD8;
    }
    // 0x80228BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228BD0: jal         0x80228C84
    // 0x80228BD4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228BD4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
L_80228BD8:
    // 0x80228BD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228BDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228BE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228BE4: jr          $ra
    // 0x80228BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227ACC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227AD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227ADC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227AE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227AE4: bne         $v0, $zero, L_80227B14
    if (ctx->r2 != 0) {
        // 0x80227AE8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80227B14;
    }
    // 0x80227AE8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80227AEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227AF0: jal         0x80050294
    // 0x80227AF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227AF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227AFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227B00: jal         0x80227D3C
    // 0x80227B04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80227D3C_ovl3(rdram, ctx);
        goto after_1;
    // 0x80227B04: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80227B08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227B14:
    // 0x80227B14: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227B18: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227B1C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80227B20: beq         $v1, $v0, L_80227B80
    if (ctx->r3 == ctx->r2) {
        // 0x80227B24: slti        $v0, $v1, 0x2E
        ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
            goto L_80227B80;
    }
    // 0x80227B24: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x80227B28: beq         $v0, $zero, L_80227B48
    if (ctx->r2 == 0) {
        // 0x80227B2C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80227B48;
    }
    // 0x80227B2C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227B30: beq         $v1, $v0, L_80227B80
    if (ctx->r3 == ctx->r2) {
        // 0x80227B34: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80227B80;
    }
    // 0x80227B34: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80227B38: beq         $v1, $v0, L_80227B90
    if (ctx->r3 == ctx->r2) {
        // 0x80227B3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B90;
    }
    // 0x80227B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B40: j           L_80227BA0
    // 0x80227B44: nop

        goto L_80227BA0;
    // 0x80227B44: nop

L_80227B48:
    // 0x80227B48: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80227B4C: beq         $v1, $v0, L_80227B80
    if (ctx->r3 == ctx->r2) {
        // 0x80227B50: slti        $v0, $v1, 0x97
        ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
            goto L_80227B80;
    }
    // 0x80227B50: slti        $v0, $v1, 0x97
    ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
    // 0x80227B54: beq         $v0, $zero, L_80227B6C
    if (ctx->r2 == 0) {
        // 0x80227B58: addiu       $v0, $zero, 0x87
        ctx->r2 = ADD32(0, 0X87);
            goto L_80227B6C;
    }
    // 0x80227B58: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80227B5C: beq         $v1, $v0, L_80227B90
    if (ctx->r3 == ctx->r2) {
        // 0x80227B60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B90;
    }
    // 0x80227B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B64: j           L_80227BA0
    // 0x80227B68: nop

        goto L_80227BA0;
    // 0x80227B68: nop

L_80227B6C:
    // 0x80227B6C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80227B70: beq         $v1, $v0, L_80227B90
    if (ctx->r3 == ctx->r2) {
        // 0x80227B74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B90;
    }
    // 0x80227B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B78: j           L_80227BA0
    // 0x80227B7C: nop

        goto L_80227BA0;
    // 0x80227B7C: nop

L_80227B80:
    // 0x80227B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227B88: j           L_80227B98
    // 0x80227B8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_80227B98;
    // 0x80227B8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80227B90:
    // 0x80227B90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227B94: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_80227B98:
    // 0x80227B98: jal         0x80227D3C
    // 0x80227B9C: nop

    func_80227D3C_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227B9C: nop

    after_2:
L_80227BA0:
    // 0x80227BA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227BA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227BA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BAC: jr          $ra
    // 0x80227BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229B74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229B78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229B7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229B80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229B84: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229B88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229B8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229B90: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229B94: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B9C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80229BA0: beq         $a0, $v0, L_80229BEC
    if (ctx->r4 == ctx->r2) {
        // 0x80229BA4: addiu       $a1, $s0, 0x380
        ctx->r5 = ADD32(ctx->r16, 0X380);
            goto L_80229BEC;
    }
    // 0x80229BA4: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    // 0x80229BA8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80229BAC: beql        $v0, $zero, L_80229BC4
    if (ctx->r2 == 0) {
        // 0x80229BB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229BC4;
    }
    goto skip_0;
    // 0x80229BB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229BB4: beq         $a0, $zero, L_80229BDC
    if (ctx->r4 == 0) {
        // 0x80229BB8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80229BDC;
    }
    // 0x80229BB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229BBC: j           L_80229D5C
    // 0x80229BC0: nop

        goto L_80229D5C;
    // 0x80229BC0: nop

L_80229BC4:
    // 0x80229BC4: beq         $a0, $v0, L_80229C3C
    if (ctx->r4 == ctx->r2) {
        // 0x80229BC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229C3C;
    }
    // 0x80229BC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229BCC: beq         $a0, $v0, L_80229D0C
    if (ctx->r4 == ctx->r2) {
        // 0x80229BD0: nop
    
            goto L_80229D0C;
    }
    // 0x80229BD0: nop

    // 0x80229BD4: j           L_80229D5C
    // 0x80229BD8: nop

        goto L_80229D5C;
    // 0x80229BD8: nop

L_80229BDC:
    // 0x80229BDC: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x80229BE0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229BE4: ori         $v0, $v0, 0x600
    ctx->r2 = ctx->r2 | 0X600;
    // 0x80229BE8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_80229BEC:
    // 0x80229BEC: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80229BF0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229BF4: andi        $v1, $a0, 0xC
    ctx->r3 = ctx->r4 & 0XC;
    // 0x80229BF8: bne         $v1, $v0, L_80229C1C
    if (ctx->r3 != ctx->r2) {
        // 0x80229BFC: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_80229C1C;
    }
    // 0x80229BFC: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x80229C00: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x80229C04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229C08: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229C0C: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x80229C10: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80229C14: j           L_80229C2C
    // 0x80229C18: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
        goto L_80229C2C;
    // 0x80229C18: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
L_80229C1C:
    // 0x80229C1C: bne         $v0, $zero, L_80229C28
    if (ctx->r2 != 0) {
        // 0x80229C20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229C28;
    }
    // 0x80229C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229C28:
    // 0x80229C28: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229C2C:
    // 0x80229C2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229C30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229C34: j           L_80229D5C
    // 0x80229C38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80229D5C;
    // 0x80229C38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229C3C:
    // 0x80229C3C: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80229C40: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80229C44: beq         $v0, $zero, L_80229D5C
    if (ctx->r2 == 0) {
        // 0x80229C48: sra         $s1, $v0, 4
        ctx->r17 = S32(SIGNED(ctx->r2) >> 4);
            goto L_80229D5C;
    }
    // 0x80229C48: sra         $s1, $v0, 4
    ctx->r17 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80229C4C: jal         0x8004F144
    // 0x80229C50: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229C50: nop

    after_0:
    // 0x80229C54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229C58: beq         $a0, $zero, L_80229C98
    if (ctx->r4 == 0) {
        // 0x80229C5C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80229C98;
    }
    // 0x80229C5C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229C60: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229C64: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80229C68: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80229C6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229C70: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80229C74: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x80229C78: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229C7C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80229C80: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x80229C84: sh          $v1, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r3;
    // 0x80229C88: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x80229C8C: sh          $v1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r3;
    // 0x80229C90: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80229C94: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_80229C98:
    // 0x80229C98: jal         0x8022B11C
    // 0x80229C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B11C_ovl3(rdram, ctx);
        goto after_1;
    // 0x80229C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229CA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229CA4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80229CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229CAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229CB0: addiu       $v0, $s0, 0x464
    ctx->r2 = ADD32(ctx->r16, 0X464);
    // 0x80229CB4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229CB8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229CBC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229CC0: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80229CC4: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80229CC8: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80229CCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229CD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229CD4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229CD8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80229CDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229CE0: lbu         $v1, 0xE($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XE);
    // 0x80229CE4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229CE8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229CEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80229CF0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80229CF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229CF8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229CFC: jal         0x80051E18
    // 0x80229D00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x80229D00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x80229D04: j           L_80229D5C
    // 0x80229D08: nop

        goto L_80229D5C;
    // 0x80229D08: nop

L_80229D0C:
    // 0x80229D0C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229D10: bgez        $v0, L_80229D5C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229D14: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229D5C;
    }
    // 0x80229D14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229D18: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80229D1C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229D20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229D24: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80229D28: addiu       $a3, $s2, 0x14
    ctx->r7 = ADD32(ctx->r18, 0X14);
    // 0x80229D2C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229D30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229D34: jal         0x8004FD60
    // 0x80229D38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_3;
    // 0x80229D38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80229D3C: bne         $v0, $zero, L_80229D54
    if (ctx->r2 != 0) {
        // 0x80229D40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D54;
    }
    // 0x80229D40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D44: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x80229D48: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229D4C: j           L_80229D5C
    // 0x80229D50: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_80229D5C;
    // 0x80229D50: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_80229D54:
    // 0x80229D54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229D58: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80229D5C:
    // 0x80229D5C: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x80229D60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229D64: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229D68: bne         $v0, $v1, L_80229D78
    if (ctx->r2 != ctx->r3) {
        // 0x80229D6C: addiu       $a0, $zero, 0x152
        ctx->r4 = ADD32(0, 0X152);
            goto L_80229D78;
    }
    // 0x80229D6C: addiu       $a0, $zero, 0x152
    ctx->r4 = ADD32(0, 0X152);
    // 0x80229D70: jal         0x8002A33C
    // 0x80229D74: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80229D74: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80229D78:
    // 0x80229D78: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x80229D7C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80229D80: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229D84: bne         $v0, $v1, L_80229D94
    if (ctx->r2 != ctx->r3) {
        // 0x80229D88: addiu       $a0, $zero, 0x153
        ctx->r4 = ADD32(0, 0X153);
            goto L_80229D94;
    }
    // 0x80229D88: addiu       $a0, $zero, 0x153
    ctx->r4 = ADD32(0, 0X153);
    // 0x80229D8C: jal         0x8002A33C
    // 0x80229D90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80229D90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
L_80229D94:
    // 0x80229D94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229D98: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229D9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229DA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229DA4: jr          $ra
    // 0x80229DA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229DA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234D6C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234D74: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80234D78: lw          $s0, -0x3A2C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A2C);
    // 0x80234D7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234D80: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80234D84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234D88: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80234D8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234D90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234D98: jal         0x8009A3B4
    // 0x80234D9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234D9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80234DA0: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80234DA4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234DA8: jal         0x8009A3B4
    // 0x80234DAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234DAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234DB0: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x80234DB4: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80234DB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234DBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234DC0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80234DC4: jal         0x8009A3B4
    // 0x80234DC8: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234DC8: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    after_2:
    // 0x80234DCC: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80234DD0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234DD4: beq         $v0, $zero, L_80234DE8
    if (ctx->r2 == 0) {
        // 0x80234DD8: nop
    
            goto L_80234DE8;
    }
    // 0x80234DD8: nop

    // 0x80234DDC: lhu         $v0, 0xAC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XAC);
    // 0x80234DE0: j           L_80234DF0
    // 0x80234DE4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80234DF0;
    // 0x80234DE4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80234DE8:
    // 0x80234DE8: lhu         $v0, 0xAC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XAC);
    // 0x80234DEC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80234DF0:
    // 0x80234DF0: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x80234DF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234DF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234DFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234E00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234E04: jr          $ra
    // 0x80234E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80234E0C: nop

;}
RECOMP_FUNC void func_80235F70_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235F74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235F78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235F80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235F84: beq         $v0, $zero, L_80235F9C
    if (ctx->r2 == 0) {
        // 0x80235F88: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80235F9C;
    }
    // 0x80235F88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F8C: jal         0x80236338
    // 0x80235F90: nop

    func_80236338_ovl3(rdram, ctx);
        goto after_0;
    // 0x80235F90: nop

    after_0:
    // 0x80235F94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235F98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80235F9C:
    // 0x80235F9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235FA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235FA4: lw          $v0, -0x1788($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1788);
    // 0x80235FA8: jalr        $v0
    // 0x80235FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80235FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235FB0: jal         0x802363E4
    // 0x80235FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802363E4_ovl3(rdram, ctx);
        goto after_2;
    // 0x80235FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235FBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235FC0: jr          $ra
    // 0x80235FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802275B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802275B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802275C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802275CC: bne         $v0, $zero, L_802275EC
    if (ctx->r2 != 0) {
        // 0x802275D0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802275EC;
    }
    // 0x802275D0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802275D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802275D8: jal         0x80050294
    // 0x802275DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802275DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802275E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802275E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802275E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802275EC:
    // 0x802275EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802275F0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802275F4: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x802275F8: beq         $v1, $v0, L_80227658
    if (ctx->r3 == ctx->r2) {
        // 0x802275FC: slti        $v0, $v1, 0x49
        ctx->r2 = SIGNED(ctx->r3) < 0X49 ? 1 : 0;
            goto L_80227658;
    }
    // 0x802275FC: slti        $v0, $v1, 0x49
    ctx->r2 = SIGNED(ctx->r3) < 0X49 ? 1 : 0;
    // 0x80227600: beq         $v0, $zero, L_80227618
    if (ctx->r2 == 0) {
        // 0x80227604: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227618;
    }
    // 0x80227604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227608: beq         $v1, $v0, L_80227634
    if (ctx->r3 == ctx->r2) {
        // 0x8022760C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227634;
    }
    // 0x8022760C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227610: j           L_8022766C
    // 0x80227614: nop

        goto L_8022766C;
    // 0x80227614: nop

L_80227618:
    // 0x80227618: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8022761C: beq         $v1, $v0, L_80227648
    if (ctx->r3 == ctx->r2) {
        // 0x80227620: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80227648;
    }
    // 0x80227620: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80227624: beq         $v1, $v0, L_8022765C
    if (ctx->r3 == ctx->r2) {
        // 0x80227628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022765C;
    }
    // 0x80227628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022762C: j           L_8022766C
    // 0x80227630: nop

        goto L_8022766C;
    // 0x80227630: nop

L_80227634:
    // 0x80227634: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227638: jal         0x8022774C
    // 0x8022763C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022774C_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022763C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80227640: j           L_8022766C
    // 0x80227644: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8022766C;
    // 0x80227644: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80227648:
    // 0x80227648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022764C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227650: j           L_80227664
    // 0x80227654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_80227664;
    // 0x80227654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_80227658:
    // 0x80227658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022765C:
    // 0x8022765C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227660: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80227664:
    // 0x80227664: jal         0x8022774C
    // 0x80227668: nop

    func_8022774C_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227668: nop

    after_2:
L_8022766C:
    // 0x8022766C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227670: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227674: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227678: jr          $ra
    // 0x8022767C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022767C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232014_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023201C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232020: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232024: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232028: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023202C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80232030: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80232034: bne         $v0, $zero, L_80232070
    if (ctx->r2 != 0) {
        // 0x80232038: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80232070;
    }
    // 0x80232038: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023203C: jal         0x80050294
    // 0x80232040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232044: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232048: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8023204C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232050: bnel        $v1, $v0, L_80232064
    if (ctx->r3 != ctx->r2) {
        // 0x80232054: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80232064;
    }
    goto skip_0;
    // 0x80232054: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
    // 0x80232058: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023205C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232060: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80232064:
    // 0x80232064: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023206C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232070:
    // 0x80232070: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80232074: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232078: bne         $v1, $v0, L_8023208C
    if (ctx->r3 != ctx->r2) {
        // 0x8023207C: addiu       $v0, $zero, 0xDE
        ctx->r2 = ADD32(0, 0XDE);
            goto L_8023208C;
    }
    // 0x8023207C: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x80232080: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80232084: beql        $v1, $v0, L_8023208C
    if (ctx->r3 == ctx->r2) {
        // 0x80232088: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_8023208C;
    }
    goto skip_1;
    // 0x80232088: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_1:
L_8023208C:
    // 0x8023208C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232090: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232094: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232098: jr          $ra
    // 0x8023209C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023209C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237B8C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237B90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237B94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237B98: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80237B9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237BA0: jal         0x8002C678
    // 0x80237BA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80237BA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80237BA8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237BAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80237BB0: bne         $v1, $v0, L_80237BC0
    if (ctx->r3 != ctx->r2) {
        // 0x80237BB4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80237BC0;
    }
    // 0x80237BB4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80237BB8: j           L_80237BD8
    // 0x80237BBC: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_80237BD8;
    // 0x80237BBC: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_80237BC0:
    // 0x80237BC0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237BC4: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
    // 0x80237BC8: slti        $v0, $s1, 0x80
    ctx->r2 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x80237BCC: beql        $v0, $zero, L_80237BD4
    if (ctx->r2 == 0) {
        // 0x80237BD0: addiu       $s1, $zero, 0x80
        ctx->r17 = ADD32(0, 0X80);
            goto L_80237BD4;
    }
    goto skip_0;
    // 0x80237BD0: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    skip_0:
L_80237BD4:
    // 0x80237BD4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
L_80237BD8:
    // 0x80237BD8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237BDC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80237BE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237BE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80237BE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237BEC: sll         $a1, $v0, 7
    ctx->r5 = S32(ctx->r2 << 7);
    // 0x80237BF0: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
    // 0x80237BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237BF8: beq         $v1, $v0, L_80237C60
    if (ctx->r3 == ctx->r2) {
        // 0x80237BFC: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_80237C60;
    }
    // 0x80237BFC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80237C00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237C04: beql        $v0, $zero, L_80237C1C
    if (ctx->r2 == 0) {
        // 0x80237C08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237C1C;
    }
    goto skip_1;
    // 0x80237C08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80237C0C: beq         $v1, $zero, L_80237C2C
    if (ctx->r3 == 0) {
        // 0x80237C10: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80237C2C;
    }
    // 0x80237C10: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80237C14: j           L_80237C94
    // 0x80237C18: nop

        goto L_80237C94;
    // 0x80237C18: nop

L_80237C1C:
    // 0x80237C1C: beq         $v1, $v0, L_80237C8C
    if (ctx->r3 == ctx->r2) {
        // 0x80237C20: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80237C8C;
    }
    // 0x80237C20: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80237C24: j           L_80237C94
    // 0x80237C28: nop

        goto L_80237C94;
    // 0x80237C28: nop

L_80237C2C:
    // 0x80237C2C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237C30: jal         0x800324B4
    // 0x80237C34: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80237C34: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_1:
    // 0x80237C38: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80237C3C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80237C40: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80237C44: bgez        $v1, L_80237C50
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80237C48: sll         $a0, $v0, 2
        ctx->r4 = S32(ctx->r2 << 2);
            goto L_80237C50;
    }
    // 0x80237C48: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80237C4C: addiu       $v1, $v1, 0x1F
    ctx->r3 = ADD32(ctx->r3, 0X1F);
L_80237C50:
    // 0x80237C50: sra         $v0, $v1, 5
    ctx->r2 = S32(SIGNED(ctx->r3) >> 5);
    // 0x80237C54: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80237C58: j           L_80237C94
    // 0x80237C5C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
        goto L_80237C94;
    // 0x80237C5C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80237C60:
    // 0x80237C60: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80237C64: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237C68: jal         0x80032498
    // 0x80237C6C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80237C6C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_2:
    // 0x80237C70: bgez        $v0, L_80237C7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237C74: sll         $v1, $s1, 4
        ctx->r3 = S32(ctx->r17 << 4);
            goto L_80237C7C;
    }
    // 0x80237C74: sll         $v1, $s1, 4
    ctx->r3 = S32(ctx->r17 << 4);
    // 0x80237C78: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_80237C7C:
    // 0x80237C7C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80237C80: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80237C84: j           L_80237C94
    // 0x80237C88: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
        goto L_80237C94;
    // 0x80237C88: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80237C8C:
    // 0x80237C8C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80237C90: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80237C94:
    // 0x80237C94: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80237C98: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80237C9C: jal         0x800319B4
    // 0x80237CA0: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80237CA0: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    after_3:
    // 0x80237CA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237CA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237CAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237CB0: jr          $ra
    // 0x80237CB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237CB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225CFC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CFC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D00: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80225D04: beq         $v1, $v0, L_80225D40
    if (ctx->r3 == ctx->r2) {
        // 0x80225D08: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80225D40;
    }
    // 0x80225D08: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80225D0C: beql        $v0, $zero, L_80225D24
    if (ctx->r2 == 0) {
        // 0x80225D10: addiu       $v0, $zero, 0x104
        ctx->r2 = ADD32(0, 0X104);
            goto L_80225D24;
    }
    goto skip_0;
    // 0x80225D10: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    skip_0:
    // 0x80225D14: beq         $v1, $zero, L_80225D34
    if (ctx->r3 == 0) {
        // 0x80225D18: nop
    
            goto L_80225D34;
    }
    // 0x80225D18: nop

    // 0x80225D1C: j           L_80225D58
    // 0x80225D20: nop

        goto L_80225D58;
    // 0x80225D20: nop

L_80225D24:
    // 0x80225D24: beq         $v1, $v0, L_80225D4C
    if (ctx->r3 == ctx->r2) {
        // 0x80225D28: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80225D4C;
    }
    // 0x80225D28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225D2C: j           L_80225D58
    // 0x80225D30: nop

        goto L_80225D58;
    // 0x80225D30: nop

L_80225D34:
    // 0x80225D34: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225D38: j           L_80225D50
    // 0x80225D3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80225D50;
    // 0x80225D3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80225D40:
    // 0x80225D40: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225D44: j           L_80225D50
    // 0x80225D48: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80225D50;
    // 0x80225D48: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80225D4C:
    // 0x80225D4C: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
L_80225D50:
    // 0x80225D50: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225D54: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80225D58:
    // 0x80225D58: jr          $ra
    // 0x80225D5C: nop

    TRACE_RETURN()
    return;
    // 0x80225D5C: nop

;}
RECOMP_FUNC void func_802373D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802373D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802373D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802373D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802373DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802373E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802373E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802373E8: lw          $v0, -0x1720($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1720);
    // 0x802373EC: jalr        $v0
    // 0x802373F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802373F0: nop

    after_0:
    // 0x802373F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802373F8: jr          $ra
    // 0x802373FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802373FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BE0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225BE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225BE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225BEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225BF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BF4: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80225BF8: bne         $v0, $zero, L_80225C38
    if (ctx->r2 != 0) {
        // 0x80225BFC: nop
    
            goto L_80225C38;
    }
    // 0x80225BFC: nop

    // 0x80225C00: jal         0x8004F488
    // 0x80225C04: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80225C04: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_0:
    // 0x80225C08: jal         0x8004F418
    // 0x80225C0C: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80225C0C: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    after_1:
    // 0x80225C10: jal         0x8004F418
    // 0x80225C14: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80225C14: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_2:
    // 0x80225C18: jal         0x8004F418
    // 0x80225C1C: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80225C1C: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    after_3:
    // 0x80225C20: jal         0x8004F418
    // 0x80225C24: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80225C24: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_4:
    // 0x80225C28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225C2C: jal         0x80225D80
    // 0x80225C30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80225D80_ovl3(rdram, ctx);
        goto after_5;
    // 0x80225C30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x80225C34: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_80225C38:
    // 0x80225C38: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80225C3C: bne         $v0, $zero, L_80225C9C
    if (ctx->r2 != 0) {
        // 0x80225C40: nop
    
            goto L_80225C9C;
    }
    // 0x80225C40: nop

    // 0x80225C44: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225C48: addiu       $s0, $s0, -0x3BD4
    ctx->r16 = ADD32(ctx->r16, -0X3BD4);
    // 0x80225C4C: jal         0x8005FA7C
    // 0x80225C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80225C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225C54: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80225C58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225C5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225C60: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225C64: jal         0x8005FA7C
    // 0x80225C68: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80225C68: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    after_7:
    // 0x80225C6C: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x80225C70: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x80225C74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C78: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225C7C: jal         0x8005FA7C
    // 0x80225C80: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_8;
    // 0x80225C80: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    after_8:
    // 0x80225C84: lw          $v0, 0x2C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X2C);
    // 0x80225C88: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225C8C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225C90: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80225C94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225C98: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80225C9C:
    // 0x80225C9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225CA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CA8: jr          $ra
    // 0x80225CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225CD0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CD0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225CD4: bne         $v0, $zero, L_80225CF4
    if (ctx->r2 != 0) {
        // 0x80225CD8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80225CF4;
    }
    // 0x80225CD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225CDC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225CE0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225CE4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225CE8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225CEC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225CF0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80225CF4:
    // 0x80225CF4: jr          $ra
    // 0x80225CF8: nop

    TRACE_RETURN()
    return;
    // 0x80225CF8: nop

;}
RECOMP_FUNC void func_80238D80_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238D84: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238D8C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80238D90: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80238D94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80238D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238D9C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x80238DA0: jal         0x80053ED8
    // 0x80238DA4: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80238DA4: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x80238DA8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80238DAC: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x80238DB0: bne         $v0, $zero, L_80238DC8
    if (ctx->r2 != 0) {
        // 0x80238DB4: nop
    
            goto L_80238DC8;
    }
    // 0x80238DB4: nop

    // 0x80238DB8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80238DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238DC0: j           L_80238ED0
    // 0x80238DC4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80238ED0;
    // 0x80238DC4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80238DC8:
    // 0x80238DC8: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80238DCC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238DD0: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80238DD4: beq         $v0, $zero, L_80238DE0
    if (ctx->r2 == 0) {
        // 0x80238DD8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80238DE0;
    }
    // 0x80238DD8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80238DDC: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_80238DE0:
    // 0x80238DE0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x80238DE4: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80238DE8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80238DEC: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x80238DF0: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x80238DF4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80238DF8: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x80238DFC: jal         0x800324B4
    // 0x80238E00: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80238E00: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x80238E04: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80238E08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238E0C: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80238E10: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80238E14: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238E18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238E1C: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80238E20: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x80238E24: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80238E28: jal         0x80032498
    // 0x80238E2C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80238E2C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x80238E30: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80238E34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238E38: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80238E3C: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80238E40: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80238E44: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238E48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238E4C: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80238E50: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80238E54: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_80238E58:
    // 0x80238E58: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80238E5C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80238E60: beq         $v0, $zero, L_80238EA0
    if (ctx->r2 == 0) {
        // 0x80238E64: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80238EA0;
    }
    // 0x80238E64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238E68: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x80238E6C: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x80238E70: jal         0x80238EEC
    // 0x80238E74: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_80238EEC_ovl3(rdram, ctx);
        goto after_3;
    // 0x80238E74: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x80238E78: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80238E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238E80: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80238E84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238E88: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238E8C: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80238E90: beql        $v0, $zero, L_80238EC0
    if (ctx->r2 == 0) {
        // 0x80238E94: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_80238EC0;
    }
    goto skip_0;
    // 0x80238E94: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x80238E98: j           L_80238EC4
    // 0x80238E9C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80238EC4;
    // 0x80238E9C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238EA0:
    // 0x80238EA0: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80238EA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238EA8: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80238EAC: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80238EB0: beql        $v0, $zero, L_80238EC4
    if (ctx->r2 == 0) {
        // 0x80238EB4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80238EC4;
    }
    goto skip_1;
    // 0x80238EB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80238EB8: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80238EBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80238EC0:
    // 0x80238EC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238EC4:
    // 0x80238EC4: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x80238EC8: bne         $v0, $zero, L_80238E58
    if (ctx->r2 != 0) {
        // 0x80238ECC: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80238E58;
    }
    // 0x80238ECC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80238ED0:
    // 0x80238ED0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80238ED4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80238ED8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238EDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238EE4: jr          $ra
    // 0x80238EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235FC8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235FCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235FD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235FD4: lui         $t3, 0x3DC8
    ctx->r11 = S32(0X3DC8 << 16);
    // 0x80235FD8: ori         $t3, $t3, 0x2A
    ctx->r11 = ctx->r11 | 0X2A;
    // 0x80235FDC: lui         $t2, 0x2E80
    ctx->r10 = S32(0X2E80 << 16);
    // 0x80235FE0: ori         $t2, $t2, 0x8080
    ctx->r10 = ctx->r10 | 0X8080;
    // 0x80235FE4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235FE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80235FEC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80235FF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235FF4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80235FF8: lh          $a3, 0x14($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X14);
    // 0x80235FFC: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x80236000: lh          $t1, 0x18($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X18);
    // 0x80236004: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80236008: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x8023600C: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x80236010: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236014: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80236018: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023601C: addiu       $v0, $v0, -0x17A0
    ctx->r2 = ADD32(ctx->r2, -0X17A0);
    // 0x80236020: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80236024: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80236028: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023602C: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x80236030: sw          $t2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r10;
    // 0x80236034: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236038: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023603C: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80236040: sll         $t1, $t1, 16
    ctx->r9 = S32(ctx->r9 << 16);
    // 0x80236044: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80236048: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x8023604C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x80236050: sw          $t1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r9;
    // 0x80236054: sh          $t4, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r12;
    // 0x80236058: sh          $t5, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r13;
    // 0x8023605C: jal         0x8009A3B4
    // 0x80236060: sh          $t6, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r14;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236060: sh          $t6, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r14;
    after_0:
    // 0x80236064: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236068: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023606C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236070: jal         0x8009A3B4
    // 0x80236074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236078: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8023607C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80236080: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236084: jal         0x8009A3B4
    // 0x80236088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023608C: addiu       $s1, $s0, 0xD8
    ctx->r17 = ADD32(ctx->r16, 0XD8);
    // 0x80236090: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236094: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236098: jal         0x8009A3B4
    // 0x8023609C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023609C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802360A0: addiu       $s2, $s0, 0xE0
    ctx->r18 = ADD32(ctx->r16, 0XE0);
    // 0x802360A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802360A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802360AC: jal         0x8009A3B4
    // 0x802360B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802360B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802360B4: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x802360B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802360BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802360C0: jal         0x8009A3B4
    // 0x802360C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802360C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802360C8: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802360CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802360D0: jal         0x8009A3B4
    // 0x802360D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802360D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802360D8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802360DC: lbu         $v0, -0x1794($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1794);
    // 0x802360E0: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802360E4: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802360E8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802360EC: lbu         $v1, -0x1793($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1793);
    // 0x802360F0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802360F4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802360F8: jal         0x800324B4
    // 0x802360FC: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x802360FC: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_7:
    // 0x80236100: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80236104: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236108: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023610C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236110: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x80236114: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80236118: jal         0x80032498
    // 0x8023611C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x8023611C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    after_8:
    // 0x80236120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236124: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236128: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023612C: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    // 0x80236130: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236134: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x80236138: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8023613C: sh          $v1, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r3;
    // 0x80236140: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80236144: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80236148: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
    // 0x8023614C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80236150: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80236154: sh          $zero, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = 0;
    // 0x80236158: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023615C: jal         0x802363E4
    // 0x80236160: sb          $a1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r5;
    func_802363E4_ovl3(rdram, ctx);
        goto after_9;
    // 0x80236160: sb          $a1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r5;
    after_9:
    // 0x80236164: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236168: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023616C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80236170: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236174: jr          $ra
    // 0x80236178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C0B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C0B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C0B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C0BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C0C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C0C4: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C0C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C0CC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C0D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0D4: bne         $v0, $zero, L_8022C140
    if (ctx->r2 != 0) {
        // 0x8022C0D8: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022C140;
    }
    // 0x8022C0D8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C0DC: jal         0x8022DCA4
    // 0x8022C0E0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022C0E0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022C0E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C0E8: beq         $v0, $zero, L_8022C13C
    if (ctx->r2 == 0) {
        // 0x8022C0EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C13C;
    }
    // 0x8022C0EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0F0: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022C0F4: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x8022C0F8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022C0FC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C100: bne         $v1, $zero, L_8022C110
    if (ctx->r3 != 0) {
        // 0x8022C104: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022C110;
    }
    // 0x8022C104: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C108: j           L_8022C140
    // 0x8022C10C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_8022C140;
    // 0x8022C10C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_8022C110:
    // 0x8022C110: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C114: jal         0x8022DC18
    // 0x8022C118: nop

    func_8022DC18_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022C118: nop

    after_1:
    // 0x8022C11C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C120: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C124: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C128: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C12C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022C130: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C134: j           L_8022C140
    // 0x8022C138: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022C140;
    // 0x8022C138: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022C13C:
    // 0x8022C13C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C140:
    // 0x8022C140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C144: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C148: jr          $ra
    // 0x8022C14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F24_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F38: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227F3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227F40: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227F44: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227F48: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227F4C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227F50: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227F54: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227F58: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227F5C: jal         0x8004D5D4
    // 0x80227F60: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227F60: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227F64: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227F68: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80227F6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227F70: beq         $v1, $v0, L_80227FC8
    if (ctx->r3 == ctx->r2) {
        // 0x80227F74: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80227FC8;
    }
    // 0x80227F74: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80227F78: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227F7C: beql        $v0, $zero, L_80227F94
    if (ctx->r2 == 0) {
        // 0x80227F80: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227F94;
    }
    goto skip_0;
    // 0x80227F80: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_0:
    // 0x80227F84: beq         $v1, $zero, L_80227FA4
    if (ctx->r3 == 0) {
        // 0x80227F88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FA4;
    }
    // 0x80227F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F8C: j           L_8022804C
    // 0x80227F90: nop

        goto L_8022804C;
    // 0x80227F90: nop

L_80227F94:
    // 0x80227F94: beq         $v1, $v0, L_8022800C
    if (ctx->r3 == ctx->r2) {
        // 0x80227F98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022800C;
    }
    // 0x80227F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F9C: j           L_8022804C
    // 0x80227FA0: nop

        goto L_8022804C;
    // 0x80227FA0: nop

L_80227FA4:
    // 0x80227FA4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227FA8: jal         0x80050294
    // 0x80227FAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227FAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227FB8: jal         0x802284C0
    // 0x80227FBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227FBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80227FC0: j           L_80228048
    // 0x80227FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228048;
    // 0x80227FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227FC8:
    // 0x80227FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FCC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80227FD0: jal         0x80050294
    // 0x80227FD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227FD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227FE0: jal         0x802284C0
    // 0x80227FE4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_802284C0_ovl3(rdram, ctx);
        goto after_4;
    // 0x80227FE4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x80227FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FEC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227FF0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227FF4: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80227FF8: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80227FFC: jal         0x8005044C
    // 0x80228000: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80228000: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_5:
    // 0x80228004: j           L_80228048
    // 0x80228008: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80228048;
    // 0x80228008: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022800C:
    // 0x8022800C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80228010: jal         0x80050294
    // 0x80228014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80228014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80228018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022801C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228020: jal         0x802284C0
    // 0x80228024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802284C0_ovl3(rdram, ctx);
        goto after_7;
    // 0x80228024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80228028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022802C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228030: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80228034: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80228038: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8022803C: jal         0x8005044C
    // 0x80228040: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80228040: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_8:
    // 0x80228044: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228048:
    // 0x80228048: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022804C:
    // 0x8022804C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228050: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228054: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228058: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022805C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228060: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228064: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228068: jr          $ra
    // 0x8022806C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022806C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B2D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B2D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B2D8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B2DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B2E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B2E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B2E8: lw          $v0, -0xF70($at)
    ctx->r2 = MEM_W(ctx->r1, -0XF70);
    // 0x8023B2EC: jalr        $v0
    // 0x8023B2F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B2F0: nop

    after_0:
    // 0x8023B2F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B2F8: jr          $ra
    // 0x8023B2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227498_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022749C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802274A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802274A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802274AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802274B0: bne         $v0, $zero, L_802274E0
    if (ctx->r2 != 0) {
        // 0x802274B4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802274E0;
    }
    // 0x802274B4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802274B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802274BC: jal         0x80050294
    // 0x802274C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802274C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802274C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802274CC: jal         0x8022774C
    // 0x802274D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022774C_ovl3(rdram, ctx);
        goto after_1;
    // 0x802274D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x802274D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802274D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802274E0:
    // 0x802274E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802274E4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802274E8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802274EC: bne         $v1, $v0, L_80227500
    if (ctx->r3 != ctx->r2) {
        // 0x802274F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227500;
    }
    // 0x802274F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802274F8: jal         0x8022774C
    // 0x802274FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022774C_ovl3(rdram, ctx);
        goto after_2;
    // 0x802274FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80227500:
    // 0x80227500: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227504: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227508: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022750C: jr          $ra
    // 0x80227510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DD50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DD54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DD58: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022DD5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DD60: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022DD64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DD68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DD6C: jal         0x8004EEAC
    // 0x8022DD70: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022DD70: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022DD74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022DD78: bne         $a1, $zero, L_8022DD88
    if (ctx->r5 != 0) {
        // 0x8022DD7C: andi        $t0, $s1, 0xFF
        ctx->r8 = ctx->r17 & 0XFF;
            goto L_8022DD88;
    }
    // 0x8022DD7C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8022DD80: j           L_8022DE84
    // 0x8022DD84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DE84;
    // 0x8022DD84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DD88:
    // 0x8022DD88: sltiu       $v1, $t0, 0x1
    ctx->r3 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8022DD8C: sltiu       $v0, $t0, 0x7
    ctx->r2 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x8022DD90: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022DD94: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x8022DD98: beq         $t1, $zero, L_8022DDB0
    if (ctx->r9 == 0) {
        // 0x8022DD9C: lui         $a0, 0x2E80
        ctx->r4 = S32(0X2E80 << 16);
            goto L_8022DDB0;
    }
    // 0x8022DD9C: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x8022DDA0: jal         0x8004F418
    // 0x8022DDA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022DDA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8022DDA8: j           L_8022DE84
    // 0x8022DDAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DE84;
    // 0x8022DDAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DDB0:
    // 0x8022DDB0: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x8022DDB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DDB8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022DDBC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022DDC0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022DDC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DDC8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022DDCC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DDD0: sb          $v0, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r2;
    // 0x8022DDD4: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022DDD8: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8022DDDC: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8022DDE0: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8022DDE4: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x8022DDE8: sb          $v0, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r2;
    // 0x8022DDEC: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022DDF0: sb          $v1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r3;
    // 0x8022DDF4: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x8022DDF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DDFC: sb          $s1, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r17;
    // 0x8022DE00: sb          $zero, 0x93($a1)
    MEM_B(0X93, ctx->r5) = 0;
    // 0x8022DE04: sw          $a0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->r4;
    // 0x8022DE08: sw          $zero, 0x94($a1)
    MEM_W(0X94, ctx->r5) = 0;
    // 0x8022DE0C: sb          $v0, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r2;
    // 0x8022DE10: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8022DE14: beq         $v0, $zero, L_8022DE80
    if (ctx->r2 == 0) {
        // 0x8022DE18: addiu       $a3, $a1, 0x88
        ctx->r7 = ADD32(ctx->r5, 0X88);
            goto L_8022DE80;
    }
    // 0x8022DE18: addiu       $a3, $a1, 0x88
    ctx->r7 = ADD32(ctx->r5, 0X88);
    // 0x8022DE1C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_8022DE20:
    // 0x8022DE20: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022DE24: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022DE28: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8022DE2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022DE30: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022DE34: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022DE38: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022DE3C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_8022DE40:
    // 0x8022DE40: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022DE44: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022DE48: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DE4C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022DE50: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022DE54: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022DE58: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022DE5C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022DE60: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022DE64: bne         $v0, $zero, L_8022DE40
    if (ctx->r2 != 0) {
        // 0x8022DE68: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8022DE40;
    }
    // 0x8022DE68: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022DE6C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022DE70: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022DE74: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8022DE78: bne         $v0, $zero, L_8022DE20
    if (ctx->r2 != 0) {
        // 0x8022DE7C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022DE20;
    }
    // 0x8022DE7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022DE80:
    // 0x8022DE80: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8022DE84:
    // 0x8022DE84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DE88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DE8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE94: jr          $ra
    // 0x8022DE98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DE98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235410_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235410: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235414: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80235418: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023541C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80235420: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80235424: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235428: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023542C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80235430: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80235434: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023543C: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80235440: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80235444: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235448: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023544C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235450: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235454: bgtz        $v0, L_802355B8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80235458: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_802355B8;
    }
    // 0x80235458: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8023545C: bne         $v0, $zero, L_802354CC
    if (ctx->r2 != 0) {
        // 0x80235460: nop
    
            goto L_802354CC;
    }
    // 0x80235460: nop

    // 0x80235464: lh          $v0, 0x6($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X6);
    // 0x80235468: lh          $v1, 0x8($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X8);
    // 0x8023546C: lh          $a0, 0xA($s4)
    ctx->r4 = MEM_H(ctx->r20, 0XA);
    // 0x80235470: lh          $a1, 0xC($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XC);
    // 0x80235474: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235478: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023547C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80235480: sw          $v1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r3;
    // 0x80235484: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80235488: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x8023548C: bgez        $a1, L_802354C0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80235490: sw          $a0, 0x20($s4)
        MEM_W(0X20, ctx->r20) = ctx->r4;
            goto L_802354C0;
    }
    // 0x80235490: sw          $a0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r4;
    // 0x80235494: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235498: beq         $a1, $v0, L_802354CC
    if (ctx->r5 == ctx->r2) {
        // 0x8023549C: andi        $v0, $v1, 0x7F
        ctx->r2 = ctx->r3 & 0X7F;
            goto L_802354CC;
    }
    // 0x8023549C: andi        $v0, $v1, 0x7F
    ctx->r2 = ctx->r3 & 0X7F;
    // 0x802354A0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802354A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802354A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802354AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802354B0: addiu       $v0, $v0, -0x18A0
    ctx->r2 = ADD32(ctx->r2, -0X18A0);
    // 0x802354B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802354B8: j           L_802354CC
    // 0x802354BC: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
        goto L_802354CC;
    // 0x802354BC: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
L_802354C0:
    // 0x802354C0: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x802354C4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802354C8: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
L_802354CC:
    // 0x802354CC: lw          $v1, 0x2C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X2C);
    // 0x802354D0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x802354D4: beq         $v0, $zero, L_802355AC
    if (ctx->r2 == 0) {
        // 0x802354D8: addiu       $a0, $s3, 0x1C
        ctx->r4 = ADD32(ctx->r19, 0X1C);
            goto L_802355AC;
    }
    // 0x802354D8: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x802354DC: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    // 0x802354E0: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802354E4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x802354E8: lh          $s1, 0x4($v1)
    ctx->r17 = MEM_H(ctx->r3, 0X4);
    // 0x802354EC: lh          $v1, 0x18($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X18);
    // 0x802354F0: lw          $a2, 0x3C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X3C);
    // 0x802354F4: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x802354F8: lw          $v0, 0x1C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C);
    // 0x802354FC: subu        $s1, $s1, $v1
    ctx->r17 = SUB32(ctx->r17, ctx->r3);
    // 0x80235500: lw          $v1, 0x34($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X34);
    // 0x80235504: sll         $s2, $s2, 16
    ctx->r18 = S32(ctx->r18 << 16);
    // 0x80235508: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023550C: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x80235510: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80235514: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x80235518: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8023551C: sw          $a2, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r6;
    // 0x80235520: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80235524: sw          $v1, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r3;
    // 0x80235528: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8023552C: jal         0x8004DD04
    // 0x80235530: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80235530: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    after_0:
    // 0x80235534: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80235538: jal         0x8004DD04
    // 0x8023553C: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023553C: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    after_1:
    // 0x80235540: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80235544: addiu       $s0, $s0, 0x49CC
    ctx->r16 = ADD32(ctx->r16, 0X49CC);
    // 0x80235548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023554C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80235550: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80235554: lw          $v1, 0x49D4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X49D4);
    // 0x80235558: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x8023555C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80235560: lw          $a3, 0x49EC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X49EC);
    // 0x80235564: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80235568: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023556C: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x80235570: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x80235574: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80235578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023557C: sw          $v1, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r3;
    // 0x80235580: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x80235584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235588: sw          $a3, 0x49EC($at)
    MEM_W(0X49EC, ctx->r1) = ctx->r7;
    // 0x8023558C: jal         0x8004DD04
    // 0x80235590: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80235590: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
    after_2:
    // 0x80235594: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80235598: jal         0x8004DD04
    // 0x8023559C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8023559C: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x802355A0: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x802355A4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802355A8: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
L_802355AC:
    // 0x802355AC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802355B0: jal         0x80235784
    // 0x802355B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80235784_ovl3(rdram, ctx);
        goto after_4;
    // 0x802355B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
L_802355B8:
    // 0x802355B8: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x802355BC: lw          $v1, 0x18($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X18);
    // 0x802355C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802355C4: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x802355C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802355CC: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x802355D0: lw          $v0, 0x14($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X14);
    // 0x802355D4: lw          $v1, 0x1C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X1C);
    // 0x802355D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802355DC: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x802355E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802355E4: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x802355E8: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x802355EC: lw          $v1, 0x24($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X24);
    // 0x802355F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802355F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802355F8: sw          $v0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r2;
    // 0x802355FC: lh          $a1, 0x44($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X44);
    // 0x80235600: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x80235604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235608: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023560C: jal         0x8004DA90
    // 0x80235610: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80235610: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    after_5:
    // 0x80235614: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x80235618: bne         $v0, $zero, L_80235678
    if (ctx->r2 != 0) {
        // 0x8023561C: nop
    
            goto L_80235678;
    }
    // 0x8023561C: nop

    // 0x80235620: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80235624: addiu       $a1, $a1, -0x1830
    ctx->r5 = ADD32(ctx->r5, -0X1830);
    // 0x80235628: jal         0x8004DEE8
    // 0x8023562C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_6;
    // 0x8023562C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    after_6:
    // 0x80235630: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x80235634: beq         $v0, $zero, L_80235678
    if (ctx->r2 == 0) {
        // 0x80235638: nop
    
            goto L_80235678;
    }
    // 0x80235638: nop

    // 0x8023563C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235640: addiu       $v0, $v0, -0x18A0
    ctx->r2 = ADD32(ctx->r2, -0X18A0);
    // 0x80235644: sw          $v0, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r2;
    // 0x80235648: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8023564C: beq         $v0, $zero, L_80235664
    if (ctx->r2 == 0) {
        // 0x80235650: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80235664;
    }
    // 0x80235650: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80235654: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235658: lhu         $v0, -0x1898($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1898);
    // 0x8023565C: j           L_8023566C
    // 0x80235660: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_8023566C;
    // 0x80235660: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_80235664:
    // 0x80235664: jal         0x80235784
    // 0x80235668: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80235784_ovl3(rdram, ctx);
        goto after_7;
    // 0x80235668: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
L_8023566C:
    // 0x8023566C: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x80235670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235674: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_80235678:
    // 0x80235678: lw          $a0, 0xC0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC0);
    // 0x8023567C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80235680: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235684: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x80235688: beq         $v1, $zero, L_8023569C
    if (ctx->r3 == 0) {
        // 0x8023568C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023569C;
    }
    // 0x8023568C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80235690: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80235694: bnel        $v0, $zero, L_8023569C
    if (ctx->r2 != 0) {
        // 0x80235698: addu        $s5, $v1, $zero
        ctx->r21 = ADD32(ctx->r3, 0);
            goto L_8023569C;
    }
    goto skip_0;
    // 0x80235698: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    skip_0:
L_8023569C:
    // 0x8023569C: lw          $a0, 0xC8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC8);
    // 0x802356A0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802356A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802356A8: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x802356AC: beq         $v1, $zero, L_802356C0
    if (ctx->r3 == 0) {
        // 0x802356B0: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_802356C0;
    }
    // 0x802356B0: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x802356B4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x802356B8: bnel        $v0, $zero, L_802356C0
    if (ctx->r2 != 0) {
        // 0x802356BC: addu        $s6, $v1, $zero
        ctx->r22 = ADD32(ctx->r3, 0);
            goto L_802356C0;
    }
    goto skip_1;
    // 0x802356BC: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    skip_1:
L_802356C0:
    // 0x802356C0: slt         $v0, $s5, $s6
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x802356C4: bnel        $v0, $zero, L_802356CC
    if (ctx->r2 != 0) {
        // 0x802356C8: addu        $s5, $s6, $zero
        ctx->r21 = ADD32(ctx->r22, 0);
            goto L_802356CC;
    }
    goto skip_2;
    // 0x802356C8: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    skip_2:
L_802356CC:
    // 0x802356CC: beq         $s5, $zero, L_8023575C
    if (ctx->r21 == 0) {
        // 0x802356D0: nop
    
            goto L_8023575C;
    }
    // 0x802356D0: nop

    // 0x802356D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802356D8: lhu         $v0, -0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AA4);
    // 0x802356DC: bne         $v0, $zero, L_8023575C
    if (ctx->r2 != 0) {
        // 0x802356E0: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_8023575C;
    }
    // 0x802356E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802356E4: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x802356E8: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x802356EC: jal         0x8003491C
    // 0x802356F0: addiu       $a3, $s3, 0x14
    ctx->r7 = ADD32(ctx->r19, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_8;
    // 0x802356F0: addiu       $a3, $s3, 0x14
    ctx->r7 = ADD32(ctx->r19, 0X14);
    after_8:
    // 0x802356F4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802356F8: lhu         $v0, -0x3BBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBC);
    // 0x802356FC: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x80235700: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80235704: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x80235708: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023570C: bgez        $v0, L_8023571C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235710: nop
    
            goto L_8023571C;
    }
    // 0x80235710: nop

    // 0x80235714: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80235718: sh          $zero, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = 0;
L_8023571C:
    // 0x8023571C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80235720: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80235724: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80235728: lh          $a0, -0x3BBC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3BBC);
    // 0x8023572C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235730: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235734: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80235738: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023573C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80235740: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80235744: bne         $v1, $zero, L_8023575C
    if (ctx->r3 != 0) {
        // 0x80235748: nop
    
            goto L_8023575C;
    }
    // 0x80235748: nop

    // 0x8023574C: lw          $v1, 0x28($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X28);
    // 0x80235750: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80235754: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235758: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8023575C:
    // 0x8023575C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235760: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80235764: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80235768: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023576C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80235770: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235774: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235778: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023577C: jr          $ra
    // 0x80235780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229A48_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A48: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229A4C: bne         $v0, $zero, L_80229A5C
    if (ctx->r2 != 0) {
        // 0x80229A50: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80229A5C;
    }
    // 0x80229A50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229A54: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80229A58: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80229A5C:
    // 0x80229A5C: jr          $ra
    // 0x80229A60: nop

    TRACE_RETURN()
    return;
    // 0x80229A60: nop

;}
RECOMP_FUNC void func_802279B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802279BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802279C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802279CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279D0: bne         $v0, $zero, L_802279F0
    if (ctx->r2 != 0) {
        // 0x802279D4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802279F0;
    }
    // 0x802279D4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802279D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802279DC: jal         0x80050294
    // 0x802279E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802279E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802279E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802279F0:
    // 0x802279F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802279F4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802279F8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802279FC: beq         $v1, $v0, L_80227A14
    if (ctx->r3 == ctx->r2) {
        // 0x80227A00: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80227A14;
    }
    // 0x80227A00: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80227A04: beq         $v1, $v0, L_80227A24
    if (ctx->r3 == ctx->r2) {
        // 0x80227A08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A24;
    }
    // 0x80227A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A0C: j           L_80227A34
    // 0x80227A10: nop

        goto L_80227A34;
    // 0x80227A10: nop

L_80227A14:
    // 0x80227A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227A1C: j           L_80227A2C
    // 0x80227A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80227A2C;
    // 0x80227A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80227A24:
    // 0x80227A24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227A28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80227A2C:
    // 0x80227A2C: jal         0x80227D3C
    // 0x80227A30: nop

    func_80227D3C_ovl3(rdram, ctx);
        goto after_1;
    // 0x80227A30: nop

    after_1:
L_80227A34:
    // 0x80227A34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227A38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A40: jr          $ra
    // 0x80227A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB78_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BB88: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022BB8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BB90: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022BB94: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022BB98: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022BB9C: jal         0x8022DC58
    // 0x8022BBA0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022DC58_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022BBA0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BBA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BBA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BBAC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022BBB0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022BBB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BBB8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022BBBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BBC4: jr          $ra
    // 0x8022BBC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BBC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A390_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A390: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022A394: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022A398: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022A39C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022A3A0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022A3A4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022A3A8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022A3AC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022A3B0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A3B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A3B8: lbu         $v0, 0x38E($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X38E);
    // 0x8022A3BC: addiu       $s0, $s3, 0x380
    ctx->r16 = ADD32(ctx->r19, 0X380);
    // 0x8022A3C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022A3C4: addiu       $v0, $v0, 0xA4
    ctx->r2 = ADD32(ctx->r2, 0XA4);
    // 0x8022A3C8: addu        $s2, $s0, $v0
    ctx->r18 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A3CC: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x8022A3D0: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x8022A3D4: addiu       $s6, $s6, 0x49B0
    ctx->r22 = ADD32(ctx->r22, 0X49B0);
    // 0x8022A3D8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022A3DC: beq         $v1, $zero, L_8022A3F8
    if (ctx->r3 == 0) {
        // 0x8022A3E0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022A3F8;
    }
    // 0x8022A3E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A3E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3E8: beq         $v1, $v0, L_8022A430
    if (ctx->r3 == ctx->r2) {
        // 0x8022A3EC: nop
    
            goto L_8022A430;
    }
    // 0x8022A3EC: nop

    // 0x8022A3F0: j           L_8022A630
    // 0x8022A3F4: nop

        goto L_8022A630;
    // 0x8022A3F4: nop

L_8022A3F8:
    // 0x8022A3F8: sb          $v0, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r2;
    // 0x8022A3FC: lhu         $v0, 0x382($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X382);
    // 0x8022A400: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A404: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A408: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A40C: lbu         $v0, -0x288C($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X288C);
    // 0x8022A410: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
    // 0x8022A414: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A418: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A41C: jal         0x800A3450
    // 0x8022A420: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A420: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022A424: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022A428: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022A42C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
L_8022A430:
    // 0x8022A430: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8022A434: beq         $v0, $zero, L_8022A440
    if (ctx->r2 == 0) {
        // 0x8022A438: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022A440;
    }
    // 0x8022A438: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A43C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
L_8022A440:
    // 0x8022A440: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022A444: bne         $v0, $zero, L_8022A62C
    if (ctx->r2 != 0) {
        // 0x8022A448: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022A62C;
    }
    // 0x8022A448: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A44C: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8022A450: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x8022A454: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022A458: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A45C: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x8022A460: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A464: slti        $v0, $v0, 0x320
    ctx->r2 = SIGNED(ctx->r2) < 0X320 ? 1 : 0;
    // 0x8022A468: beq         $v0, $zero, L_8022A624
    if (ctx->r2 == 0) {
        // 0x8022A46C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022A624;
    }
    // 0x8022A46C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022A470: addiu       $s5, $s6, 0x14
    ctx->r21 = ADD32(ctx->r22, 0X14);
    // 0x8022A474: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022A478: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
    // 0x8022A47C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A480: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A484: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022A488: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A48C: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x8022A490: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022A494: subu        $a0, $s4, $a0
    ctx->r4 = SUB32(ctx->r20, ctx->r4);
    // 0x8022A498: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8022A49C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x8022A4A0: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x8022A4A4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A4A8: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x8022A4AC: jal         0x8004F820
    // 0x8022A4B0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A4B0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022A4B4: lbu         $v1, 0x2($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X2);
    // 0x8022A4B8: bne         $v1, $zero, L_8022A630
    if (ctx->r3 != 0) {
        // 0x8022A4BC: addiu       $v0, $v0, 0x9F
        ctx->r2 = ADD32(ctx->r2, 0X9F);
            goto L_8022A630;
    }
    // 0x8022A4BC: addiu       $v0, $v0, 0x9F
    ctx->r2 = ADD32(ctx->r2, 0X9F);
    // 0x8022A4C0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022A4C4: sltiu       $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 < 0X7F ? 1 : 0;
    // 0x8022A4C8: beq         $v0, $zero, L_8022A630
    if (ctx->r2 == 0) {
        // 0x8022A4CC: nop
    
            goto L_8022A630;
    }
    // 0x8022A4CC: nop

    // 0x8022A4D0: jal         0x8004EFE4
    // 0x8022A4D4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8022A4D4: nop

    after_2:
    // 0x8022A4D8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A4DC: beq         $s1, $zero, L_8022A630
    if (ctx->r17 == 0) {
        // 0x8022A4E0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022A630;
    }
    // 0x8022A4E0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022A4E4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8022A4E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A4EC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A4F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A4F4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022A4F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A4FC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A500: lbu         $a1, 0xE($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XE);
    // 0x8022A504: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022A508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A50C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A510: subu        $a1, $s4, $a1
    ctx->r5 = SUB32(ctx->r20, ctx->r5);
    // 0x8022A514: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022A518: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x8022A51C: jal         0x8009A3B4
    // 0x8022A520: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A520: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_3:
    // 0x8022A524: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A528: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022A52C: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022A530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A534: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A538: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A53C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A540: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022A544: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022A548: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022A54C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022A550: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A558: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A55C: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x8022A560: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022A564: sh          $a2, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r6;
    // 0x8022A568: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022A56C: lhu         $a3, -0x2884($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2884);
    // 0x8022A570: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A574: lhu         $v0, -0x2882($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2882);
    // 0x8022A578: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A57C: lhu         $v1, -0x2880($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2880);
    // 0x8022A580: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x8022A584: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022A588: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x8022A58C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A590: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8022A594: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A598: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A59C: jal         0x8004DBA0
    // 0x8022A5A0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_4;
    // 0x8022A5A0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_4:
    // 0x8022A5A4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022A5A8: jal         0x8004DEE8
    // 0x8022A5AC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_5;
    // 0x8022A5AC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
    // 0x8022A5B0: lui         $v1, 0xAAAA
    ctx->r3 = S32(0XAAAA << 16);
    // 0x8022A5B4: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022A5B8: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A5BC: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022A5C0: srl         $v0, $t0, 4
    ctx->r2 = S32(U32(ctx->r8) >> 4);
    // 0x8022A5C4: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8022A5C8: lh          $a0, 0x16($s6)
    ctx->r4 = MEM_H(ctx->r22, 0X16);
    // 0x8022A5CC: lh          $v0, 0x16($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X16);
    // 0x8022A5D0: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8022A5D4: bltz        $a2, L_8022A5F0
    if (SIGNED(ctx->r6) < 0) {
        // 0x8022A5D8: lui         $v1, 0x6666
        ctx->r3 = S32(0X6666 << 16);
            goto L_8022A5F0;
    }
    // 0x8022A5D8: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x8022A5DC: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x8022A5E0: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x8022A5E4: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A5E8: j           L_8022A600
    // 0x8022A5EC: sra         $v0, $a2, 31
    ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
        goto L_8022A600;
    // 0x8022A5EC: sra         $v0, $a2, 31
    ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
L_8022A5F0:
    // 0x8022A5F0: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x8022A5F4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A5F8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A5FC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
L_8022A600:
    // 0x8022A600: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022A604: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x8022A608: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A60C: sw          $v1, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r3;
    // 0x8022A610: addiu       $a0, $zero, 0x145
    ctx->r4 = ADD32(0, 0X145);
    // 0x8022A614: jal         0x8002A33C
    // 0x8022A618: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022A618: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
    // 0x8022A61C: j           L_8022A630
    // 0x8022A620: nop

        goto L_8022A630;
    // 0x8022A620: nop

L_8022A624:
    // 0x8022A624: j           L_8022A630
    // 0x8022A628: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
        goto L_8022A630;
    // 0x8022A628: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
L_8022A62C:
    // 0x8022A62C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
L_8022A630:
    // 0x8022A630: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022A634: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022A638: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A63C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022A640: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022A644: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A648: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A64C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A650: jr          $ra
    // 0x8022A654: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022A654: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80229130_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229130: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229134: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80229138: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022913C: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80229140: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80229144: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80229148: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022914C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80229150: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80229154: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80229158: lbu         $v0, 0xAC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XAC);
    // 0x8022915C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80229160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229164: jal         0x8009A3B4
    // 0x80229168: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229168: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    after_0:
    // 0x8022916C: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80229170: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80229174: jal         0x8009A3B4
    // 0x80229178: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229178: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022917C: addiu       $a0, $s3, 0x5C
    ctx->r4 = ADD32(ctx->r19, 0X5C);
    // 0x80229180: addiu       $a1, $s3, 0x54
    ctx->r5 = ADD32(ctx->r19, 0X54);
    // 0x80229184: jal         0x8009A3B4
    // 0x80229188: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229188: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022918C: lhu         $v0, 0x380($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X380);
    // 0x80229190: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229194: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229198: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x8022919C: beq         $v0, $zero, L_802291C8
    if (ctx->r2 == 0) {
        // 0x802291A0: addiu       $s1, $s3, 0x380
        ctx->r17 = ADD32(ctx->r19, 0X380);
            goto L_802291C8;
    }
    // 0x802291A0: addiu       $s1, $s3, 0x380
    ctx->r17 = ADD32(ctx->r19, 0X380);
    // 0x802291A4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x802291A8: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x802291AC: addiu       $v0, $s3, 0x40
    ctx->r2 = ADD32(ctx->r19, 0X40);
L_802291B0:
    // 0x802291B0: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x802291B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x802291B8: bgez        $s0, L_802291B0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802291BC: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_802291B0;
    }
    // 0x802291BC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802291C0: j           L_802291D0
    // 0x802291C4: nop

        goto L_802291D0;
    // 0x802291C4: nop

L_802291C8:
    // 0x802291C8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802291CC: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
L_802291D0:
    // 0x802291D0: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x802291D4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802291D8: jal         0x800A3450
    // 0x802291DC: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802291DC: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    after_3:
    // 0x802291E0: jal         0x80049EBC
    // 0x802291E4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_80049EBC_252BC(rdram, ctx);
        goto after_4;
    // 0x802291E4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_4:
    // 0x802291E8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802291EC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802291F0: beq         $v0, $zero, L_80229200
    if (ctx->r2 == 0) {
        // 0x802291F4: nop
    
            goto L_80229200;
    }
    // 0x802291F4: nop

    // 0x802291F8: jal         0x8022AA6C
    // 0x802291FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022AA6C_ovl3(rdram, ctx);
        goto after_5;
    // 0x802291FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
L_80229200:
    // 0x80229200: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229204: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80229208: beq         $v0, $zero, L_80229248
    if (ctx->r2 == 0) {
        // 0x8022920C: addiu       $a0, $s3, 0x14
        ctx->r4 = ADD32(ctx->r19, 0X14);
            goto L_80229248;
    }
    // 0x8022920C: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80229210: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80229214: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80229218: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022921C: addiu       $a3, $s2, 0x14
    ctx->r7 = ADD32(ctx->r18, 0X14);
    // 0x80229220: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229224: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229228: jal         0x8004FD60
    // 0x8022922C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_6;
    // 0x8022922C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_6:
    // 0x80229230: beq         $v0, $zero, L_80229248
    if (ctx->r2 == 0) {
        // 0x80229234: nop
    
            goto L_80229248;
    }
    // 0x80229234: nop

    // 0x80229238: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022923C: andi        $v0, $v0, 0xEFFF
    ctx->r2 = ctx->r2 & 0XEFFF;
    // 0x80229240: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229244: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229248:
    // 0x80229248: lhu         $v0, 0x56($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X56);
    // 0x8022924C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80229250: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229254: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    // 0x80229258: lw          $v0, 0xCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCC);
    // 0x8022925C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80229260: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229264: sw          $v1, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r3;
    // 0x80229268: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022926C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229270: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x80229274: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229278: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022927C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229280: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x80229284: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229288: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8022928C: lw          $v0, 0xCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCC);
    // 0x80229290: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229294: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229298: sw          $v0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r2;
    // 0x8022929C: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x802292A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802292A4: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
    // 0x802292A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802292AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802292B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802292B4: lw          $v0, -0x2948($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2948);
    // 0x802292B8: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x802292BC: addiu       $s4, $s4, -0x2920
    ctx->r20 = ADD32(ctx->r20, -0X2920);
    // 0x802292C0: jalr        $v0
    // 0x802292C4: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x802292C4: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    after_7:
L_802292C8:
    // 0x802292C8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802292CC: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x802292D0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802292D4: beq         $v1, $zero, L_802292F4
    if (ctx->r3 == 0) {
        // 0x802292D8: sb          $s0, 0xE($s1)
        MEM_B(0XE, ctx->r17) = ctx->r16;
            goto L_802292F4;
    }
    // 0x802292D8: sb          $s0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r16;
    // 0x802292DC: lbu         $v0, 0xA4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA4);
    // 0x802292E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802292E4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802292E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802292EC: jalr        $v0
    // 0x802292F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x802292F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_8:
L_802292F4:
    // 0x802292F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802292F8: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802292FC: bne         $v0, $zero, L_802292C8
    if (ctx->r2 != 0) {
        // 0x80229300: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_802292C8;
    }
    // 0x80229300: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80229304: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229308: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022930C: beq         $v0, $zero, L_80229330
    if (ctx->r2 == 0) {
        // 0x80229310: nop
    
            goto L_80229330;
    }
    // 0x80229310: nop

    // 0x80229314: lbu         $v0, 0xBC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBC);
    // 0x80229318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022931C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229320: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229324: lw          $v0, -0x2910($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2910);
    // 0x80229328: jalr        $v0
    // 0x8022932C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8022932C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
L_80229330:
    // 0x80229330: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229334: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80229338: beq         $v0, $zero, L_8022935C
    if (ctx->r2 == 0) {
        // 0x8022933C: nop
    
            goto L_8022935C;
    }
    // 0x8022933C: nop

    // 0x80229340: lbu         $v0, 0xB4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB4);
    // 0x80229344: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229348: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022934C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229350: lw          $v0, -0x2918($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2918);
    // 0x80229354: jalr        $v0
    // 0x80229358: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80229358: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
L_8022935C:
    // 0x8022935C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229360: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229364: beq         $v0, $zero, L_80229390
    if (ctx->r2 == 0) {
        // 0x80229368: nop
    
            goto L_80229390;
    }
    // 0x80229368: nop

    // 0x8022936C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x80229370: bnel        $v1, $zero, L_80229380
    if (ctx->r3 != 0) {
        // 0x80229374: sb          $zero, 0x9($s3)
        MEM_B(0X9, ctx->r19) = 0;
            goto L_80229380;
    }
    goto skip_0;
    // 0x80229374: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    skip_0:
    // 0x80229378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022937C: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_80229380:
    // 0x80229380: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80229384: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229388: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022938C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229390:
    // 0x80229390: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80229394: beq         $v0, $zero, L_802293A0
    if (ctx->r2 == 0) {
        // 0x80229398: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802293A0;
    }
    // 0x80229398: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022939C: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
L_802293A0:
    // 0x802293A0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x802293A4: beq         $v0, $zero, L_802293B4
    if (ctx->r2 == 0) {
        // 0x802293A8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802293B4;
    }
    // 0x802293A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802293AC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802293B0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802293B4:
    // 0x802293B4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802293B8: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x802293BC: beq         $v0, $zero, L_8022940C
    if (ctx->r2 == 0) {
        // 0x802293C0: nop
    
            goto L_8022940C;
    }
    // 0x802293C0: nop

    // 0x802293C4: lbu         $v0, 0xAD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XAD);
    // 0x802293C8: lbu         $a1, 0xAC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XAC);
    // 0x802293CC: beq         $v0, $a1, L_802293E4
    if (ctx->r2 == ctx->r5) {
        // 0x802293D0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802293E4;
    }
    // 0x802293D0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802293D4: jal         0x800502EC
    // 0x802293D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_11;
    // 0x802293D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x802293DC: j           L_802293EC
    // 0x802293E0: nop

        goto L_802293EC;
    // 0x802293E0: nop

L_802293E4:
    // 0x802293E4: jal         0x800504EC
    // 0x802293E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_12;
    // 0x802293E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
L_802293EC:
    // 0x802293EC: lhu         $v0, 0xA8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA8);
    // 0x802293F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802293F4: sh          $v0, -0x3D4E($at)
    MEM_H(-0X3D4E, ctx->r1) = ctx->r2;
    // 0x802293F8: lhu         $v0, 0xB0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XB0);
    // 0x802293FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229400: sh          $v0, -0x3D56($at)
    MEM_H(-0X3D56, ctx->r1) = ctx->r2;
    // 0x80229404: j           L_80229418
    // 0x80229408: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_80229418;
    // 0x80229408: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022940C:
    // 0x8022940C: jal         0x80051770
    // 0x80229410: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_13;
    // 0x80229410: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x80229414: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80229418:
    // 0x80229418: jal         0x80051248
    // 0x8022941C: nop

    func_80051248_2C648(rdram, ctx);
        goto after_14;
    // 0x8022941C: nop

    after_14:
    // 0x80229420: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229428: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022942C: jal         0x80047284
    // 0x80229430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_15;
    // 0x80229430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x80229434: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80229438: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022943C: beq         $v0, $zero, L_802296E4
    if (ctx->r2 == 0) {
        // 0x80229440: nop
    
            goto L_802296E4;
    }
    // 0x80229440: nop

    // 0x80229444: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229448: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022944C: beq         $v0, $zero, L_80229548
    if (ctx->r2 == 0) {
        // 0x80229450: addiu       $a1, $s3, 0x14
        ctx->r5 = ADD32(ctx->r19, 0X14);
            goto L_80229548;
    }
    // 0x80229450: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80229454: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x80229458: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022945C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229460: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229464: lw          $a0, 0xD0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD0);
    // 0x80229468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022946C: jal         0x8009A3B4
    // 0x80229470: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80229470: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_16:
    // 0x80229474: lw          $a0, 0xD0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD0);
    // 0x80229478: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022947C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80229480: jal         0x8009A3B4
    // 0x80229484: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80229484: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_17:
    // 0x80229488: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x8022948C: lhu         $v0, 0x56($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X56);
    // 0x80229490: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80229494: lw          $a1, 0xD0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XD0);
    // 0x80229498: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022949C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x802294A0: lhu         $a3, -0x28FC($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X28FC);
    // 0x802294A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802294A8: lhu         $v0, -0x28FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X28FA);
    // 0x802294AC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802294B0: lhu         $v1, -0x28F8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X28F8);
    // 0x802294B4: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x802294B8: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x802294BC: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x802294C0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802294C4: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x802294C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802294CC: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x802294D0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802294D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802294D8: jal         0x8004DBA0
    // 0x802294DC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_18;
    // 0x802294DC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_18:
    // 0x802294E0: lw          $a1, 0xD0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XD0);
    // 0x802294E4: addiu       $s0, $s1, 0x90
    ctx->r16 = ADD32(ctx->r17, 0X90);
    // 0x802294E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802294EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802294F0: jal         0x8009A3B4
    // 0x802294F4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x802294F4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_19:
    // 0x802294F8: lw          $v0, 0xD0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XD0);
    // 0x802294FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229500: lhu         $v0, 0x16($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X16);
    // 0x80229504: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80229508: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022950C: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80229510: sh          $v0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r2;
    // 0x80229514: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80229518: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022951C: addiu       $v0, $s1, 0x98
    ctx->r2 = ADD32(ctx->r17, 0X98);
    // 0x80229520: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229524: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80229528: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022952C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229530: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229534: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80229538: jal         0x80051E18
    // 0x8022953C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8022953C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_20:
    // 0x80229540: j           L_8022957C
    // 0x80229544: nop

        goto L_8022957C;
    // 0x80229544: nop

L_80229548:
    // 0x80229548: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x8022954C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229550: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229554: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229558: lw          $a0, 0xD0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD0);
    // 0x8022955C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229560: jal         0x8009A3B4
    // 0x80229564: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x80229564: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_21:
    // 0x80229568: lw          $a0, 0xD0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD0);
    // 0x8022956C: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80229570: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80229574: jal         0x8009A3B4
    // 0x80229578: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x80229578: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_22:
L_8022957C:
    // 0x8022957C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229580: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229584: beq         $v0, $zero, L_802295D0
    if (ctx->r2 == 0) {
        // 0x80229588: addiu       $s0, $s1, 0x10
        ctx->r16 = ADD32(ctx->r17, 0X10);
            goto L_802295D0;
    }
    // 0x80229588: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x8022958C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229590: addiu       $a1, $s3, 0x1A0
    ctx->r5 = ADD32(ctx->r19, 0X1A0);
    // 0x80229594: jal         0x8009A3B4
    // 0x80229598: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x80229598: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x8022959C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295A0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x802295A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295A8: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802295AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802295B0: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x802295B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802295B8: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802295BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802295C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802295C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802295C8: jal         0x80051E18
    // 0x802295CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x802295CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
L_802295D0:
    // 0x802295D0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802295D4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802295D8: beq         $v0, $zero, L_80229624
    if (ctx->r2 == 0) {
        // 0x802295DC: addiu       $s0, $s1, 0x24
        ctx->r16 = ADD32(ctx->r17, 0X24);
            goto L_80229624;
    }
    // 0x802295DC: addiu       $s0, $s1, 0x24
    ctx->r16 = ADD32(ctx->r17, 0X24);
    // 0x802295E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295E4: addiu       $a1, $s3, 0x1B0
    ctx->r5 = ADD32(ctx->r19, 0X1B0);
    // 0x802295E8: jal         0x8009A3B4
    // 0x802295EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_25;
    // 0x802295EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_25:
    // 0x802295F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295F4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x802295F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295FC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80229600: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229604: addiu       $v0, $s1, 0x2C
    ctx->r2 = ADD32(ctx->r17, 0X2C);
    // 0x80229608: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022960C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80229610: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80229614: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229618: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022961C: jal         0x80051E18
    // 0x80229620: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_26;
    // 0x80229620: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_26:
L_80229624:
    // 0x80229624: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229628: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022962C: beq         $v0, $zero, L_80229684
    if (ctx->r2 == 0) {
        // 0x80229630: addiu       $s0, $s1, 0x68
        ctx->r16 = ADD32(ctx->r17, 0X68);
            goto L_80229684;
    }
    // 0x80229630: addiu       $s0, $s1, 0x68
    ctx->r16 = ADD32(ctx->r17, 0X68);
    // 0x80229634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229638: addiu       $a1, $s3, 0x1C0
    ctx->r5 = ADD32(ctx->r19, 0X1C0);
    // 0x8022963C: jal         0x8009A3B4
    // 0x80229640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_27;
    // 0x80229640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_27:
    // 0x80229644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229648: lhu         $v0, 0x6A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6A);
    // 0x8022964C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80229650: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229654: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80229658: sh          $v0, 0x6A($s1)
    MEM_H(0X6A, ctx->r17) = ctx->r2;
    // 0x8022965C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80229660: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229664: addiu       $v0, $s1, 0x70
    ctx->r2 = ADD32(ctx->r17, 0X70);
    // 0x80229668: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022966C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80229670: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80229674: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229678: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022967C: jal         0x80051E18
    // 0x80229680: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_28;
    // 0x80229680: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_28:
L_80229684:
    // 0x80229684: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229688: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022968C: beq         $v0, $zero, L_802296E4
    if (ctx->r2 == 0) {
        // 0x80229690: addiu       $s0, $s1, 0x7C
        ctx->r16 = ADD32(ctx->r17, 0X7C);
            goto L_802296E4;
    }
    // 0x80229690: addiu       $s0, $s1, 0x7C
    ctx->r16 = ADD32(ctx->r17, 0X7C);
    // 0x80229694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229698: addiu       $a1, $s3, 0x1B8
    ctx->r5 = ADD32(ctx->r19, 0X1B8);
    // 0x8022969C: jal         0x8009A3B4
    // 0x802296A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_29;
    // 0x802296A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_29:
    // 0x802296A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802296A8: lhu         $v0, 0x7E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X7E);
    // 0x802296AC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802296B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802296B4: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x802296B8: sh          $v0, 0x7E($s1)
    MEM_H(0X7E, ctx->r17) = ctx->r2;
    // 0x802296BC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802296C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802296C4: addiu       $v0, $s1, 0x84
    ctx->r2 = ADD32(ctx->r17, 0X84);
    // 0x802296C8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802296CC: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802296D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802296D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802296D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802296DC: jal         0x80051E18
    // 0x802296E0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_30;
    // 0x802296E0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_30:
L_802296E4:
    // 0x802296E4: lb          $v0, 0xE($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XE);
    // 0x802296E8: beq         $v0, $zero, L_802297C8
    if (ctx->r2 == 0) {
        // 0x802296EC: nop
    
            goto L_802297C8;
    }
    // 0x802296EC: nop

    // 0x802296F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802296F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802296F8: bltz        $v0, L_802297C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802296FC: nop
    
            goto L_802297C8;
    }
    // 0x802296FC: nop

    // 0x80229700: lhu         $v1, 0xD8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XD8);
    // 0x80229704: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80229708: bne         $v0, $zero, L_8022973C
    if (ctx->r2 != 0) {
        // 0x8022970C: nop
    
            goto L_8022973C;
    }
    // 0x8022970C: nop

    // 0x80229710: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80229714: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80229718: bne         $v0, $zero, L_8022973C
    if (ctx->r2 != 0) {
        // 0x8022971C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8022973C;
    }
    // 0x8022971C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80229720: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80229724: ori         $v0, $v1, 0xF
    ctx->r2 = ctx->r3 | 0XF;
    // 0x80229728: jal         0x800616FC
    // 0x8022972C: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_31;
    // 0x8022972C: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    after_31:
    // 0x80229730: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229734: andi        $v0, $v0, 0xDFFF
    ctx->r2 = ctx->r2 & 0XDFFF;
    // 0x80229738: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022973C:
    // 0x8022973C: lhu         $a0, 0xD8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XD8);
    // 0x80229740: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x80229744: bne         $v0, $zero, L_80229778
    if (ctx->r2 != 0) {
        // 0x80229748: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_80229778;
    }
    // 0x80229748: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x8022974C: lb          $v1, 0xD($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XD);
    // 0x80229750: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229754: bne         $v1, $v0, L_80229778
    if (ctx->r3 != ctx->r2) {
        // 0x80229758: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_80229778;
    }
    // 0x80229758: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x8022975C: ori         $v0, $a0, 0x7
    ctx->r2 = ctx->r4 | 0X7;
    // 0x80229760: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x80229764: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80229768: jal         0x800616FC
    // 0x8022976C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_32;
    // 0x8022976C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_32:
    // 0x80229770: lhu         $a0, 0xD8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XD8);
    // 0x80229774: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
L_80229778:
    // 0x80229778: bne         $v0, $zero, L_8022979C
    if (ctx->r2 != 0) {
        // 0x8022977C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022979C;
    }
    // 0x8022977C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229780: lb          $v1, 0xD($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XD);
    // 0x80229784: bne         $v1, $v0, L_8022979C
    if (ctx->r3 != ctx->r2) {
        // 0x80229788: ori         $v0, $a0, 0x3
        ctx->r2 = ctx->r4 | 0X3;
            goto L_8022979C;
    }
    // 0x80229788: ori         $v0, $a0, 0x3
    ctx->r2 = ctx->r4 | 0X3;
    // 0x8022978C: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x80229790: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80229794: jal         0x800616FC
    // 0x80229798: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_33;
    // 0x80229798: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_33:
L_8022979C:
    // 0x8022979C: lhu         $v1, 0xD8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XD8);
    // 0x802297A0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802297A4: bne         $v0, $zero, L_802297C8
    if (ctx->r2 != 0) {
        // 0x802297A8: nop
    
            goto L_802297C8;
    }
    // 0x802297A8: nop

    // 0x802297AC: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802297B0: bne         $v0, $zero, L_802297C8
    if (ctx->r2 != 0) {
        // 0x802297B4: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_802297C8;
    }
    // 0x802297B4: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x802297B8: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x802297BC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802297C0: jal         0x800616FC
    // 0x802297C4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_34;
    // 0x802297C4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_34:
L_802297C8:
    // 0x802297C8: jal         0x8022B290
    // 0x802297CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022B290_ovl3(rdram, ctx);
        goto after_35;
    // 0x802297CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_35:
    // 0x802297D0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x802297D4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802297D8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802297DC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802297E0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802297E4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802297E8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802297EC: jr          $ra
    // 0x802297F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802297F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022C4B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C4B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C4BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C4C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C4C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C4CC: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022C4D0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022C4D4: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022C4D8: jal         0x8004FA7C
    // 0x8022C4DC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C4DC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022C4E0: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022C4E4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C4E8: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022C4EC: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022C4F0: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022C4F4: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022C4F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C4FC: bnel        $v0, $zero, L_8022C51C
    if (ctx->r2 != 0) {
        // 0x8022C500: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022C51C;
    }
    goto skip_0;
    // 0x8022C500: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022C504: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022C508: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022C50C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C510: beq         $v0, $zero, L_8022C520
    if (ctx->r2 == 0) {
        // 0x8022C514: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022C520;
    }
    // 0x8022C514: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022C518: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022C51C:
    // 0x8022C51C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022C520:
    // 0x8022C520: bne         $v0, $zero, L_8022C550
    if (ctx->r2 != 0) {
        // 0x8022C524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C550;
    }
    // 0x8022C524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C528: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C52C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022C530: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C534: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C538: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022C53C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C544: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022C548: j           L_8022C5A8
    // 0x8022C54C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022C5A8;
    // 0x8022C54C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022C550:
    // 0x8022C550: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022C554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C558: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022C55C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C560: beq         $v0, $zero, L_8022C5A4
    if (ctx->r2 == 0) {
        // 0x8022C564: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C5A4;
    }
    // 0x8022C564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C568: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C56C: jal         0x8022DCA4
    // 0x8022C570: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022C570: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022C574: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C578: beq         $v0, $zero, L_8022C5B0
    if (ctx->r2 == 0) {
        // 0x8022C57C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C5B0;
    }
    // 0x8022C57C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C580: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022C584: jal         0x8022DC08
    // 0x8022C588: nop

    func_8022DC08_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022C588: nop

    after_2:
    // 0x8022C58C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022C590: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C594: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022C598: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C59C: j           L_8022C5D0
    // 0x8022C5A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022C5D0;
    // 0x8022C5A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022C5A4:
    // 0x8022C5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C5A8:
    // 0x8022C5A8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C5AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022C5B0:
    // 0x8022C5B0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022C5B4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022C5B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C5BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C5C0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022C5C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C5C8: jal         0x8004DA90
    // 0x8022C5CC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022C5CC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022C5D0:
    // 0x8022C5D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C5D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C5D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C5DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C5E0: jr          $ra
    // 0x8022C5E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C5E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232988_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023298C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232990: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x80232994: jal         0x8002A33C
    // 0x80232998: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80232998: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_0:
    // 0x8023299C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802329A0: jr          $ra
    // 0x802329A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802329A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238448_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023844C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238450: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238454: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238458: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023845C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238460: lw          $v0, -0x156C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X156C);
    // 0x80238464: jalr        $v0
    // 0x80238468: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238468: nop

    after_0:
    // 0x8023846C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238470: jr          $ra
    // 0x80238474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226530_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022653C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226540: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226544: bne         $v0, $zero, L_80226584
    if (ctx->r2 != 0) {
        // 0x80226548: nop
    
            goto L_80226584;
    }
    // 0x80226548: nop

    // 0x8022654C: jal         0x8004F488
    // 0x80226550: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80226550: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x80226554: jal         0x8004F488
    // 0x80226558: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80226558: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
    // 0x8022655C: jal         0x8004F418
    // 0x80226560: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80226560: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_2:
    // 0x80226564: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226568: jal         0x8005FA7C
    // 0x8022656C: addiu       $a0, $a0, -0x3728
    ctx->r4 = ADD32(ctx->r4, -0X3728);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022656C: addiu       $a0, $a0, -0x3728
    ctx->r4 = ADD32(ctx->r4, -0X3728);
    after_3:
    // 0x80226570: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80226574: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80226578: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022657C: jal         0x802269B4
    // 0x80226580: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    func_802269B4_ovl3(rdram, ctx);
        goto after_4;
    // 0x80226580: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    after_4:
L_80226584:
    // 0x80226584: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226588: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022658C: bne         $v1, $v0, L_8022659C
    if (ctx->r3 != ctx->r2) {
        // 0x80226590: nop
    
            goto L_8022659C;
    }
    // 0x80226590: nop

    // 0x80226594: jal         0x80036E48
    // 0x80226598: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80226598: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
L_8022659C:
    // 0x8022659C: jal         0x80226AF0
    // 0x802265A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226AF0_ovl3(rdram, ctx);
        goto after_6;
    // 0x802265A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802265A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802265A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802265AC: jr          $ra
    // 0x802265B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802265B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4D8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D4E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D4E8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D4EC: bgez        $v0, L_8022D520
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D4F0: nop
    
            goto L_8022D520;
    }
    // 0x8022D4F0: nop

    // 0x8022D4F4: jal         0x8022DC08
    // 0x8022D4F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022D4F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022D4FC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022D500: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D504: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D508: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D50C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022D510: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022D514: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022D518: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022D51C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022D520:
    // 0x8022D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D528: jr          $ra
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A9BC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A9BC: beq         $a1, $zero, L_8023A9D8
    if (ctx->r5 == 0) {
        // 0x8023A9C0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8023A9D8;
    }
    // 0x8023A9C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A9C8: beq         $a1, $v0, L_8023A9F4
    if (ctx->r5 == ctx->r2) {
        // 0x8023A9CC: nop
    
            goto L_8023A9F4;
    }
    // 0x8023A9CC: nop

    // 0x8023A9D0: j           L_8023AA10
    // 0x8023A9D4: nop

        goto L_8023AA10;
    // 0x8023A9D4: nop

L_8023A9D8:
    // 0x8023A9D8: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8023A9DC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023A9E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A9E4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A9E8: addiu       $v0, $v0, -0x11FC
    ctx->r2 = ADD32(ctx->r2, -0X11FC);
    // 0x8023A9EC: j           L_8023AA28
    // 0x8023A9F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
        goto L_8023AA28;
    // 0x8023A9F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
L_8023A9F4:
    // 0x8023A9F4: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8023A9F8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023A9FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA00: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AA04: addiu       $v0, $v0, -0x11A8
    ctx->r2 = ADD32(ctx->r2, -0X11A8);
    // 0x8023AA08: j           L_8023AA28
    // 0x8023AA0C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
        goto L_8023AA28;
    // 0x8023AA0C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
L_8023AA10:
    // 0x8023AA10: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8023AA14: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023AA18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA1C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023AA20: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AA24: addiu       $v0, $v0, -0x119C
    ctx->r2 = ADD32(ctx->r2, -0X119C);
L_8023AA28:
    // 0x8023AA28: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA2C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8023AA30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023AA34: bne         $v1, $v0, L_8023AA44
    if (ctx->r3 != ctx->r2) {
        // 0x8023AA38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AA44;
    }
    // 0x8023AA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AA3C: j           L_8023AAD4
    // 0x8023AA40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023AAD4;
    // 0x8023AA40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023AA44:
    // 0x8023AA44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023AA48: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023AA4C: bne         $v1, $v0, L_8023AA74
    if (ctx->r3 != ctx->r2) {
        // 0x8023AA50: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AA74;
    }
    // 0x8023AA50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AA54: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8023AA58: bne         $v1, $v0, L_8023AAB4
    if (ctx->r3 != ctx->r2) {
        // 0x8023AA5C: nop
    
            goto L_8023AAB4;
    }
    // 0x8023AA5C: nop

L_8023AA60:
    // 0x8023AA60: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023AA64: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x8023AA68: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8023AA6C: j           L_8023AAC4
    // 0x8023AA70: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_8023AAC4;
    // 0x8023AA70: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8023AA74:
    // 0x8023AA74: bne         $v1, $zero, L_8023AA8C
    if (ctx->r3 != 0) {
        // 0x8023AA78: nop
    
            goto L_8023AA8C;
    }
    // 0x8023AA78: nop

    // 0x8023AA7C: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8023AA80: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8023AA84: j           L_8023AA98
    // 0x8023AA88: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_8023AA98;
    // 0x8023AA88: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8023AA8C:
    // 0x8023AA8C: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8023AA90: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x8023AA94: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8023AA98:
    // 0x8023AA98: beq         $v0, $zero, L_8023AAD0
    if (ctx->r2 == 0) {
        // 0x8023AA9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AAD0;
    }
    // 0x8023AA9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AAA0: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8023AAA4: beq         $v1, $v0, L_8023AA60
    if (ctx->r3 == ctx->r2) {
        // 0x8023AAA8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023AA60;
    }
    // 0x8023AAA8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023AAAC: bnel        $v1, $v0, L_8023AAD0
    if (ctx->r3 != ctx->r2) {
        // 0x8023AAB0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8023AAD0;
    }
    goto skip_0;
    // 0x8023AAB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    skip_0:
L_8023AAB4:
    // 0x8023AAB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023AAB8: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8023AABC: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8023AAC0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8023AAC4:
    // 0x8023AAC4: beq         $v0, $zero, L_8023AAD4
    if (ctx->r2 == 0) {
        // 0x8023AAC8: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8023AAD4;
    }
    // 0x8023AAC8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8023AACC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8023AAD0:
    // 0x8023AAD0: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8023AAD4:
    // 0x8023AAD4: jr          $ra
    // 0x8023AAD8: nop

    TRACE_RETURN()
    return;
    // 0x8023AAD8: nop

;}
RECOMP_FUNC void func_80232BB0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232BB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232BBC: jal         0x8004F144
    // 0x80232BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80232BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232BC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232BC8: beq         $v1, $zero, L_80232BFC
    if (ctx->r3 == 0) {
        // 0x80232BCC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232BFC;
    }
    // 0x80232BCC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232BD0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80232BD4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232BD8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80232BDC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80232BE0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80232BE4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80232BE8: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80232BEC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80232BF0: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80232BF4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80232BF8: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80232BFC:
    // 0x80232BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C04: jr          $ra
    // 0x80232C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B348_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B348: jr          $ra
    // 0x8023B34C: nop

    TRACE_RETURN()
    return;
    // 0x8023B34C: nop

;}
RECOMP_FUNC void func_80229A64_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229A6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A70: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229A74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229A78: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229A7C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80229A80: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x80229A84: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80229A88: beq         $a0, $zero, L_80229AA4
    if (ctx->r4 == 0) {
        // 0x80229A8C: addiu       $s1, $s0, 0x380
        ctx->r17 = ADD32(ctx->r16, 0X380);
            goto L_80229AA4;
    }
    // 0x80229A8C: addiu       $s1, $s0, 0x380
    ctx->r17 = ADD32(ctx->r16, 0X380);
    // 0x80229A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A94: beq         $a0, $v0, L_80229AC4
    if (ctx->r4 == ctx->r2) {
        // 0x80229A98: nop
    
            goto L_80229AC4;
    }
    // 0x80229A98: nop

    // 0x80229A9C: j           L_80229B18
    // 0x80229AA0: nop

        goto L_80229B18;
    // 0x80229AA0: nop

L_80229AA4:
    // 0x80229AA4: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x80229AA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229AAC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229AB0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229AB4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229AB8: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x80229ABC: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x80229AC0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_80229AC4:
    // 0x80229AC4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80229AC8: andi        $v0, $v1, 0xC
    ctx->r2 = ctx->r3 & 0XC;
    // 0x80229ACC: beq         $v0, $zero, L_80229B08
    if (ctx->r2 == 0) {
        // 0x80229AD0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229B08;
    }
    // 0x80229AD0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229AD4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229AD8: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80229ADC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229AE0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80229AE4: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x80229AE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229AEC: jal         0x8004FD60
    // 0x80229AF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x80229AF0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80229AF4: beq         $v0, $zero, L_80229B18
    if (ctx->r2 == 0) {
        // 0x80229AF8: nop
    
            goto L_80229B18;
    }
    // 0x80229AF8: nop

    // 0x80229AFC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229B00: j           L_80229B14
    // 0x80229B04: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_80229B14;
    // 0x80229B04: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80229B08:
    // 0x80229B08: andi        $v0, $v1, 0x3C
    ctx->r2 = ctx->r3 & 0X3C;
    // 0x80229B0C: bne         $v0, $zero, L_80229B18
    if (ctx->r2 != 0) {
        // 0x80229B10: ori         $v0, $v1, 0x400
        ctx->r2 = ctx->r3 | 0X400;
            goto L_80229B18;
    }
    // 0x80229B10: ori         $v0, $v1, 0x400
    ctx->r2 = ctx->r3 | 0X400;
L_80229B14:
    // 0x80229B14: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229B18:
    // 0x80229B18: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229B1C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229B20: beq         $v0, $zero, L_80229B3C
    if (ctx->r2 == 0) {
        // 0x80229B24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229B3C;
    }
    // 0x80229B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B28: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80229B2C: bne         $v1, $v0, L_80229B3C
    if (ctx->r3 != ctx->r2) {
        // 0x80229B30: addiu       $a0, $zero, 0x143
        ctx->r4 = ADD32(0, 0X143);
            goto L_80229B3C;
    }
    // 0x80229B30: addiu       $a0, $zero, 0x143
    ctx->r4 = ADD32(0, 0X143);
    // 0x80229B34: jal         0x8002A33C
    // 0x80229B38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80229B38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80229B3C:
    // 0x80229B3C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229B40: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229B44: beq         $v0, $zero, L_80229B60
    if (ctx->r2 == 0) {
        // 0x80229B48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229B60;
    }
    // 0x80229B48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229B4C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80229B50: bne         $v1, $v0, L_80229B60
    if (ctx->r3 != ctx->r2) {
        // 0x80229B54: addiu       $a0, $zero, 0x146
        ctx->r4 = ADD32(0, 0X146);
            goto L_80229B60;
    }
    // 0x80229B54: addiu       $a0, $zero, 0x146
    ctx->r4 = ADD32(0, 0X146);
    // 0x80229B58: jal         0x8002A33C
    // 0x80229B5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80229B5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_80229B60:
    // 0x80229B60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229B64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229B68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229B6C: jr          $ra
    // 0x80229B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233C40_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80233C44: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80233C48: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80233C4C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80233C50: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80233C54: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80233C58: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80233C5C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80233C60: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80233C64: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80233C68: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80233C6C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80233C70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233C74: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_80233C78:
    // 0x80233C78: sll         $s1, $v0, 3
    ctx->r17 = S32(ctx->r2 << 3);
    // 0x80233C7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233C80: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80233C84: lh          $v0, -0x1D98($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1D98);
    // 0x80233C88: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x80233C8C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80233C90: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80233C94: beq         $v1, $zero, L_80233EEC
    if (ctx->r3 == 0) {
        // 0x80233C98: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80233EEC;
    }
    // 0x80233C98: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80233C9C: jal         0x8003B878
    // 0x80233CA0: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80233CA0: nop

    after_0:
    // 0x80233CA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233CA8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80233CAC: lh          $v1, -0x1D98($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1D98);
    // 0x80233CB0: lw          $a0, 0xD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD0);
    // 0x80233CB4: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80233CB8: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80233CBC: beq         $v1, $zero, L_80233D34
    if (ctx->r3 == 0) {
        // 0x80233CC0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80233D34;
    }
    // 0x80233CC0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80233CC4: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
    // 0x80233CC8: addiu       $fp, $zero, 0xE0
    ctx->r30 = ADD32(0, 0XE0);
    // 0x80233CCC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233CD0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80233CD4: lh          $v0, -0x1D92($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1D92);
    // 0x80233CD8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80233CDC: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80233CE0: lhu         $s0, -0x1D94($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X1D94);
    // 0x80233CE4: bgez        $v0, L_80233CF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233CE8: addiu       $s7, $zero, 0x60
        ctx->r23 = ADD32(0, 0X60);
            goto L_80233CF0;
    }
    // 0x80233CE8: addiu       $s7, $zero, 0x60
    ctx->r23 = ADD32(0, 0X60);
    // 0x80233CEC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_80233CF0:
    // 0x80233CF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233CF4: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80233CF8: lh          $v1, -0x1D96($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1D96);
    // 0x80233CFC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233D00: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233D04: mflo        $s4
    ctx->r20 = lo;
    // 0x80233D08: nop

    // 0x80233D0C: nop

    // 0x80233D10: bltzl       $v1, L_80233D18
    if (SIGNED(ctx->r3) < 0) {
        // 0x80233D14: addiu       $v1, $v1, 0xF
        ctx->r3 = ADD32(ctx->r3, 0XF);
            goto L_80233D18;
    }
    goto skip_0;
    // 0x80233D14: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    skip_0:
L_80233D18:
    // 0x80233D18: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80233D1C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233D20: mflo        $s1
    ctx->r17 = lo;
    // 0x80233D24: nop

    // 0x80233D28: nop

    // 0x80233D2C: j           L_80233E10
    // 0x80233D30: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
        goto L_80233E10;
    // 0x80233D30: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_80233D34:
    // 0x80233D34: subu        $t1, $a0, $a3
    ctx->r9 = SUB32(ctx->r4, ctx->r7);
    // 0x80233D38: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x80233D3C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80233D40: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80233D44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233D48: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233D4C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80233D50: subu        $s5, $v1, $v0
    ctx->r21 = SUB32(ctx->r3, ctx->r2);
    // 0x80233D54: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80233D58: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233D5C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233D60: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x80233D64: subu        $fp, $v1, $v0
    ctx->r30 = SUB32(ctx->r3, ctx->r2);
    // 0x80233D68: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233D6C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80233D70: lh          $v1, -0x1D92($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1D92);
    // 0x80233D74: addu        $s7, $s5, $zero
    ctx->r23 = ADD32(ctx->r21, 0);
    // 0x80233D78: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80233D7C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80233D80: lhu         $s0, -0x1D94($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X1D94);
    // 0x80233D84: bgez        $v1, L_80233D90
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80233D88: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80233D90;
    }
    // 0x80233D88: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80233D8C: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_80233D90:
    // 0x80233D90: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233D94: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80233D98: lh          $a1, -0x1D96($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1D96);
    // 0x80233D9C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233DA0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233DA4: mflo        $t0
    ctx->r8 = lo;
    // 0x80233DA8: nop

    // 0x80233DAC: nop

    // 0x80233DB0: bgez        $a1, L_80233DBC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80233DB4: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_80233DBC;
    }
    // 0x80233DB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80233DB8: addiu       $a2, $a1, 0xF
    ctx->r6 = ADD32(ctx->r5, 0XF);
L_80233DBC:
    // 0x80233DBC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80233DC0: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80233DC4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233DC8: mflo        $v1
    ctx->r3 = lo;
    // 0x80233DCC: nop

    // 0x80233DD0: nop

    // 0x80233DD4: bltzl       $a0, L_80233DDC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80233DD8: addiu       $a0, $a0, 0x1F
        ctx->r4 = ADD32(ctx->r4, 0X1F);
            goto L_80233DDC;
    }
    goto skip_1;
    // 0x80233DD8: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
    skip_1:
L_80233DDC:
    // 0x80233DDC: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80233DE0: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233DE4: mflo        $v0
    ctx->r2 = lo;
    // 0x80233DE8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80233DEC: nop

    // 0x80233DF0: bgez        $a0, L_80233DFC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80233DF4: addu        $s4, $t0, $v0
        ctx->r20 = ADD32(ctx->r8, ctx->r2);
            goto L_80233DFC;
    }
    // 0x80233DF4: addu        $s4, $t0, $v0
    ctx->r20 = ADD32(ctx->r8, ctx->r2);
    // 0x80233DF8: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
L_80233DFC:
    // 0x80233DFC: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80233E00: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233E04: mflo        $v0
    ctx->r2 = lo;
    // 0x80233E08: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x80233E0C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_80233E10:
    // 0x80233E10: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80233E14: jal         0x800324B4
    // 0x80233E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80233E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233E1C: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x80233E20: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80233E24: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233E28: mflo        $v0
    ctx->r2 = lo;
    // 0x80233E2C: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x80233E30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233E34: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233E38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233E3C: jal         0x80032498
    // 0x80233E40: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80233E40: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80233E44: nop

    // 0x80233E48: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233E4C: mflo        $v0
    ctx->r2 = lo;
    // 0x80233E50: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x80233E54: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80233E58: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x80233E5C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233E60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233E64: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80233E68: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80233E6C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80233E70: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80233E74: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80233E78: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80233E7C: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x80233E80: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233E84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80233E88: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80233E8C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x80233E90: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80233E94: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x80233E98: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80233E9C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80233EA0: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x80233EA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233EA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233EAC: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80233EB0: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80233EB4: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80233EB8: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x80233EBC: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80233EC0: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80233EC4: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80233EC8: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x80233ECC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80233ED0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80233ED4: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x80233ED8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80233EDC: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80233EE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233EE4: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
    // 0x80233EE8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_80233EEC:
    // 0x80233EEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233EF0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233EF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233EF8: lh          $v0, -0x1D98($at)
    ctx->r2 = MEM_H(ctx->r1, -0X1D98);
    // 0x80233EFC: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x80233F00: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80233F04: bne         $v1, $v0, L_80233F18
    if (ctx->r3 != ctx->r2) {
        // 0x80233F08: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80233F18;
    }
    // 0x80233F08: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80233F0C: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x80233F10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233F14: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
L_80233F18:
    // 0x80233F18: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80233F1C: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80233F20: bne         $v0, $zero, L_80233C78
    if (ctx->r2 != 0) {
        // 0x80233F24: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_80233C78;
    }
    // 0x80233F24: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80233F28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80233F2C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80233F30: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80233F34: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80233F38: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80233F3C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80233F40: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80233F44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80233F48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80233F4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80233F50: jr          $ra
    // 0x80233F54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80233F54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80233F58: nop

    // 0x80233F5C: nop

;}
RECOMP_FUNC void func_80234CFC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234CFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234D04: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80234D08: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    // 0x80234D0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234D10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234D14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234D18: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80234D1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234D28: jal         0x8009A3B4
    // 0x80234D2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234D2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80234D30: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234D34: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234D38: jal         0x8009A3B4
    // 0x80234D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234D40: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80234D44: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234D48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D4C: jal         0x8009A3B4
    // 0x80234D50: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234D50: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    after_2:
    // 0x80234D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234D58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234D5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234D64: jr          $ra
    // 0x80234D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D3C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227D40: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80227D44: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x80227D48: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80227D4C: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80227D50: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80227D54: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80227D58: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80227D5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227D60: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227D64: lw          $v0, -0x2D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2D7C);
    // 0x80227D68: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80227D6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227D70: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227D74: lw          $v0, -0x2D40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2D40);
    // 0x80227D78: jr          $ra
    // 0x80227D7C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80227D7C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
