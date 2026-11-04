#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227550_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227550: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227558: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022755C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227560: bne         $v0, $zero, L_8022756C
    if (ctx->r2 != 0) {
        // 0x80227564: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022756C;
    }
    // 0x80227564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227568: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022756C:
    // 0x8022756C: jr          $ra
    // 0x80227570: nop

    TRACE_RETURN()
    return;
    // 0x80227570: nop

;}
RECOMP_FUNC void func_80225628_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022562C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225630: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225638: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022563C: bne         $v0, $zero, L_8022565C
    if (ctx->r2 != 0) {
        // 0x80225640: nop
    
            goto L_8022565C;
    }
    // 0x80225640: nop

    // 0x80225644: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225648: jal         0x800607C4
    // 0x8022564C: addiu       $a0, $a0, 0x3780
    ctx->r4 = ADD32(ctx->r4, 0X3780);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022564C: addiu       $a0, $a0, 0x3780
    ctx->r4 = ADD32(ctx->r4, 0X3780);
    after_0:
    // 0x80225650: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225658: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022565C:
    // 0x8022565C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225660: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225664: jr          $ra
    // 0x80225668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF30_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EF40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EF44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF48: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EF4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EF50: lw          $v0, 0x43BC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X43BC);
    // 0x8022EF54: jalr        $v0
    // 0x8022EF58: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EF58: nop

    after_0:
    // 0x8022EF5C: jal         0x800472C0
    // 0x8022EF60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x8022EF60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF6C: jr          $ra
    // 0x8022EF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228128_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228128: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022812C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228130: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228134: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228138: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022813C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228140: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228144: jal         0x80229414
    // 0x80228148: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80229414_ovl18(rdram, ctx);
        goto after_0;
    // 0x80228148: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022814C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228150: beq         $v0, $zero, L_80228180
    if (ctx->r2 == 0) {
        // 0x80228154: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80228180;
    }
    // 0x80228154: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228158: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022815C: bne         $v1, $v0, L_802282A8
    if (ctx->r3 != ctx->r2) {
        // 0x80228160: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282A8;
    }
    // 0x80228160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228164: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228168: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022816C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80228170: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228174: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228178: j           L_802282AC
    // 0x8022817C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_802282AC;
    // 0x8022817C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80228180:
    // 0x80228180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228184: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228188: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022818C: jal         0x8004DA90
    // 0x80228190: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228190: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80228194: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80228198: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022819C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x802281A0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x802281A4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x802281A8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802281AC: beq         $v0, $zero, L_802281BC
    if (ctx->r2 == 0) {
        // 0x802281B0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_802281BC;
    }
    // 0x802281B0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x802281B4: j           L_802281CC
    // 0x802281B8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_802281CC;
    // 0x802281B8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_802281BC:
    // 0x802281BC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x802281C0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802281C4: beq         $v0, $zero, L_802281FC
    if (ctx->r2 == 0) {
        // 0x802281C8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_802281FC;
    }
    // 0x802281C8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_802281CC:
    // 0x802281CC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802281D0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x802281D4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802281D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802281DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802281E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802281E4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802281E8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802281EC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802281F0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x802281F4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802281F8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_802281FC:
    // 0x802281FC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80228200: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80228204: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80228208: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022820C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228210: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228214: beq         $v0, $zero, L_80228228
    if (ctx->r2 == 0) {
        // 0x80228218: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80228228;
    }
    // 0x80228218: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022821C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228220: j           L_8022823C
    // 0x80228224: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022823C;
    // 0x80228224: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80228228:
    // 0x80228228: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022822C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228230: beq         $v0, $zero, L_8022826C
    if (ctx->r2 == 0) {
        // 0x80228234: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022826C;
    }
    // 0x80228234: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80228238: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022823C:
    // 0x8022823C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80228240: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228244: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228248: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022824C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228250: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228254: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228258: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022825C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228260: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80228264: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80228268: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022826C:
    // 0x8022826C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228270: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80228274: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80228278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022827C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228280: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228284: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228288: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022828C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80228290: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228294: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228298: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022829C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282A0: bne         $v0, $zero, L_802282AC
    if (ctx->r2 != 0) {
        // 0x802282A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282AC;
    }
    // 0x802282A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802282A8:
    // 0x802282A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802282AC:
    // 0x802282AC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802282B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802282B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802282B8: jr          $ra
    // 0x802282BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802282BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022C0A8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C0A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C0AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C0B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C0B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022C0B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C0BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C0C0: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022C0C4: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022C0C8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022C0CC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022C0D0: beq         $v0, $zero, L_8022C0E0
    if (ctx->r2 == 0) {
        // 0x8022C0D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C0E0;
    }
    // 0x8022C0D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C0D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C0DC: sb          $v0, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = ctx->r2;
L_8022C0E0:
    // 0x8022C0E0: lbu         $a0, 0x36A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022C0E4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022C0E8: bne         $v0, $zero, L_8022C11C
    if (ctx->r2 != 0) {
        // 0x8022C0EC: lui         $a1, 0xFFFF
        ctx->r5 = S32(0XFFFF << 16);
            goto L_8022C11C;
    }
    // 0x8022C0EC: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x8022C0F0: lbu         $v1, 0x36B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X36B);
    // 0x8022C0F4: bne         $v1, $zero, L_8022C108
    if (ctx->r3 != 0) {
        // 0x8022C0F8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8022C108;
    }
    // 0x8022C0F8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C0FC: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8022C100: j           L_8022C1B4
    // 0x8022C104: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022C1B4;
    // 0x8022C104: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022C108:
    // 0x8022C108: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022C10C: sb          $v1, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r3;
    // 0x8022C110: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022C114: j           L_8022C1B4
    // 0x8022C118: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022C1B4;
    // 0x8022C118: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022C11C:
    // 0x8022C11C: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x8022C120: lui         $a0, 0xA1
    ctx->r4 = S32(0XA1 << 16);
    // 0x8022C124: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C128: ori         $a0, $a0, 0x7FFE
    ctx->r4 = ctx->r4 | 0X7FFE;
    // 0x8022C12C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022C130: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022C134: sltu        $a0, $a0, $v1
    ctx->r4 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022C138: bne         $a0, $zero, L_8022C1B4
    if (ctx->r4 != 0) {
        // 0x8022C13C: sb          $v0, 0x36B($s0)
        MEM_B(0X36B, ctx->r16) = ctx->r2;
            goto L_8022C1B4;
    }
    // 0x8022C13C: sb          $v0, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r2;
    // 0x8022C140: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022C144: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022C148: jal         0x8009A3B4
    // 0x8022C14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C150: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022C154: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022C158: jal         0x8009A3B4
    // 0x8022C15C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C15C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C164: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C168: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C16C: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022C170: addiu       $a2, $s0, 0x34C
    ctx->r6 = ADD32(ctx->r16, 0X34C);
    // 0x8022C174: addiu       $a3, $s0, 0x354
    ctx->r7 = ADD32(ctx->r16, 0X354);
    // 0x8022C178: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C17C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C180: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C184: jal         0x8004E150
    // 0x8022C188: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022C188: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022C18C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C190: beq         $v0, $zero, L_8022C1B4
    if (ctx->r2 == 0) {
        // 0x8022C194: nop
    
            goto L_8022C1B4;
    }
    // 0x8022C194: nop

    // 0x8022C198: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022C19C: bne         $v0, $zero, L_8022C1B4
    if (ctx->r2 != 0) {
        // 0x8022C1A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1B4;
    }
    // 0x8022C1A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C1A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C1AC: sb          $zero, 0x36E($s0)
    MEM_B(0X36E, ctx->r16) = 0;
    // 0x8022C1B0: sb          $v0, 0x36D($s0)
    MEM_B(0X36D, ctx->r16) = ctx->r2;
L_8022C1B4:
    // 0x8022C1B4: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022C1B8: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022C1BC: beq         $v0, $zero, L_8022C1F8
    if (ctx->r2 == 0) {
        // 0x8022C1C0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C1F8;
    }
    // 0x8022C1C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C1C4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C1C8: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022C1CC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022C1D0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022C1D4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C1D8: jal         0x8004F820
    // 0x8022C1DC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022C1DC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022C1E0: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022C1E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C1EC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C1F0: jal         0x8022C650
    // 0x8022C1F4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    func_8022C650_ovl18(rdram, ctx);
        goto after_4;
    // 0x8022C1F4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    after_4:
L_8022C1F8:
    // 0x8022C1F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C1FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C200: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C208: jr          $ra
    // 0x8022C20C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C20C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802276B4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802276B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802276C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802276C8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802276CC: bgez        $v0, L_802276F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802276D0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802276F0;
    }
    // 0x802276D0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802276D4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276D8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802276DC: beq         $a0, $v0, L_802276F0
    if (ctx->r4 == ctx->r2) {
        // 0x802276E0: nop
    
            goto L_802276F0;
    }
    // 0x802276E0: nop

    // 0x802276E4: jal         0x80229378
    // 0x802276E8: nop

    func_80229378_ovl18(rdram, ctx);
        goto after_0;
    // 0x802276E8: nop

    after_0:
    // 0x802276EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802276F0:
    // 0x802276F0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802276F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802276F8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802276FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227700: bne         $v0, $zero, L_8022776C
    if (ctx->r2 != 0) {
        // 0x80227704: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022776C;
    }
    // 0x80227704: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227708: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022770C: bne         $a0, $v0, L_80227724
    if (ctx->r4 != ctx->r2) {
        // 0x80227710: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227724;
    }
    // 0x80227710: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227714: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227718: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022771C: j           L_8022773C
    // 0x80227720: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022773C;
    // 0x80227720: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227724:
    // 0x80227724: jal         0x80229388
    // 0x80227728: nop

    func_80229388_ovl18(rdram, ctx);
        goto after_1;
    // 0x80227728: nop

    after_1:
    // 0x8022772C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227730: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227734: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227738: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022773C:
    // 0x8022773C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227740: beq         $v0, $zero, L_80227754
    if (ctx->r2 == 0) {
        // 0x80227744: nop
    
            goto L_80227754;
    }
    // 0x80227744: nop

    // 0x80227748: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022774C: j           L_80227764
    // 0x80227750: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80227764;
    // 0x80227750: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227754:
    // 0x80227754: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227758: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022775C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227760: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227764:
    // 0x80227764: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80227768: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022776C:
    // 0x8022776C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227770: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227774: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227778: jr          $ra
    // 0x8022777C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022777C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228AB4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228AB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228ABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228AC0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228AC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228AC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228ACC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228AD0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228AD4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228AD8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x80228ADC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80228AE0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80228AE4: jal         0x80229414
    // 0x80228AE8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80229414_ovl18(rdram, ctx);
        goto after_0;
    // 0x80228AE8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228AEC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228AF0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228AF4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228AF8: beq         $v0, $zero, L_80228B8C
    if (ctx->r2 == 0) {
        // 0x80228AFC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80228B8C;
    }
    // 0x80228AFC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228B00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228B04: jal         0x80229378
    // 0x80228B08: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80228B08: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228B10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B14: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80228B18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228B1C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228B20: jal         0x8004F820
    // 0x80228B24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228B24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228B28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B2C: bgez        $v0, L_80228B58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B30: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228B58;
    }
    // 0x80228B30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228B34: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228B3C: jal         0x8004F820
    // 0x80228B40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228B40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228B44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228B4C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228B50: j           L_80228B70
    // 0x80228B54: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80228B70;
    // 0x80228B54: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80228B58:
    // 0x80228B58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228B60: jal         0x8004F820
    // 0x80228B64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80228B64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80228B68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B6C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80228B70:
    // 0x80228B70: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80228B74: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80228B78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B7C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80228B80: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228B84: j           L_80228BD4
    // 0x80228B88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80228BD4;
    // 0x80228B88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228B8C:
    // 0x80228B8C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228B90: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B94: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80228B98: jal         0x8004F820
    // 0x80228B9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80228B9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80228BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228BA4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228BA8: beq         $v0, $zero, L_80228BB8
    if (ctx->r2 == 0) {
        // 0x80228BAC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80228BB8;
    }
    // 0x80228BAC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80228BB0: j           L_80228BBC
    // 0x80228BB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80228BBC;
    // 0x80228BB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80228BB8:
    // 0x80228BB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80228BBC:
    // 0x80228BBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228BC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228BC4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80228BC8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228BCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BD0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228BD4:
    // 0x80228BD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228BD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228BDC: jal         0x800610AC
    // 0x80228BE0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x80228BE0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x80228BE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228BE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228BEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228BF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228BF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228BF8: jr          $ra
    // 0x80228BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E45C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E45C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E460: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E464: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E468: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E46C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E470: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E474: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E478: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E47C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E480: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E484: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E488: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022E48C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E490: lbu         $a1, 0x422F($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X422F);
    // 0x8022E494: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022E498: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E49C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E4A0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E4A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E4A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E4AC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E4B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E4B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E4B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E4BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E4C0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E4C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E4C8: lbu         $v1, 0x4231($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4231);
    // 0x8022E4CC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E4D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E4D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E4D8: lui         $v0, 0x40A
    ctx->r2 = S32(0X40A << 16);
    // 0x8022E4DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E4E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E4E4: jal         0x80051E18
    // 0x8022E4E8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8022E4E8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022E4EC: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8022E4F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E4F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E4F8: jr          $ra
    // 0x8022E4FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E4FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225D04_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225D08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225D0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225D10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225D14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D18: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80225D1C: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80225D20: beq         $v0, $zero, L_80225F08
    if (ctx->r2 == 0) {
        // 0x80225D24: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225F08;
    }
    // 0x80225D24: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225D28: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225D2C: addu        $at, $at, $v0
    gpr jr_addend_80225D34 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225D30: lw          $v0, 0x45C8($at)
    ctx->r2 = ADD32(ctx->r1, 0X45C8);
    // 0x80225D34: jr          $v0
    // 0x80225D38: nop

    switch (jr_addend_80225D34 >> 2) {
        case 0: goto L_80225D3C; break;
        case 1: goto L_80225DD8; break;
        case 2: goto L_80225E0C; break;
        case 3: goto L_80225F08; break;
        case 4: goto L_80225F08; break;
        case 5: goto L_80225F08; break;
        case 6: goto L_80225F08; break;
        case 7: goto L_80225F08; break;
        case 8: goto L_80225F08; break;
        case 9: goto L_80225F08; break;
        case 10: goto L_80225E98; break;
        case 11: goto L_80225ED8; break;
        default: switch_error(__func__, 0x80225D34, 0x802345C8);
    }
    // 0x80225D38: nop

L_80225D3C:
    // 0x80225D3C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225D40: jal         0x8006FF84
    // 0x80225D44: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225D44: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225D48: beq         $v0, $zero, L_80225F08
    if (ctx->r2 == 0) {
        // 0x80225D4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225F08;
    }
    // 0x80225D4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225D50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225D54: jal         0x8005F6B4
    // 0x80225D58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225D58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225D5C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D60: addiu       $a0, $a0, 0x38DC
    ctx->r4 = ADD32(ctx->r4, 0X38DC);
    // 0x80225D64: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225D68: addiu       $v0, $v0, 0x38B0
    ctx->r2 = ADD32(ctx->r2, 0X38B0);
    // 0x80225D6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225D70: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225D74: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225D78: addiu       $v0, $v0, 0x3904
    ctx->r2 = ADD32(ctx->r2, 0X3904);
    // 0x80225D7C: jal         0x8005FA7C
    // 0x80225D80: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225D80: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_2:
    // 0x80225D84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225D88: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x80225D8C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D90: addiu       $a0, $a0, 0x38F0
    ctx->r4 = ADD32(ctx->r4, 0X38F0);
    // 0x80225D94: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80225D98: jal         0x8005FA7C
    // 0x80225D9C: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80225D9C: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    after_3:
    // 0x80225DA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225DA4: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x80225DA8: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80225DAC: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x80225DB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225DB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DB8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC0: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80225DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC8: jal         0x8005FB90
    // 0x80225DCC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_4;
    // 0x80225DCC: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    after_4:
    // 0x80225DD0: j           L_80225EC8
    // 0x80225DD4: nop

        goto L_80225EC8;
    // 0x80225DD4: nop

L_80225DD8:
    // 0x80225DD8: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x80225DDC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80225DE0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225DE4: bne         $v1, $v0, L_80225DF8
    if (ctx->r3 != ctx->r2) {
        // 0x80225DE8: nop
    
            goto L_80225DF8;
    }
    // 0x80225DE8: nop

    // 0x80225DEC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80225DF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DF4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225DF8:
    // 0x80225DF8: jal         0x8006072C
    // 0x80225DFC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80225DFC: nop

    after_5:
    // 0x80225E00: beq         $v0, $zero, L_80225E0C
    if (ctx->r2 == 0) {
        // 0x80225E04: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80225E0C;
    }
    // 0x80225E04: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225E08: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225E0C:
    // 0x80225E0C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80225E10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E14: beq         $v1, $v0, L_80225E2C
    if (ctx->r3 == ctx->r2) {
        // 0x80225E18: nop
    
            goto L_80225E2C;
    }
    // 0x80225E18: nop

    // 0x80225E1C: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x80225E20: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225E24: jalr        $v0
    // 0x80225E28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80225E28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80225E2C:
    // 0x80225E2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E30: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x80225E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225E38: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E40: lw          $v0, 0x391C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X391C);
    // 0x80225E44: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225E48: jalr        $v0
    // 0x80225E4C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x80225E4C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_7:
    // 0x80225E50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225E54: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x80225E58: jal         0x8004DD04
    // 0x80225E5C: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80225E5C: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_8:
    // 0x80225E60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225E64: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x80225E68: jal         0x8004DD04
    // 0x80225E6C: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80225E6C: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_9:
    // 0x80225E70: jal         0x8005FB90
    // 0x80225E74: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x80225E74: nop

    after_10:
    // 0x80225E78: jal         0x80060018
    // 0x80225E7C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x80225E7C: nop

    after_11:
    // 0x80225E80: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80225E84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225E88: bne         $v1, $v0, L_80225F08
    if (ctx->r3 != ctx->r2) {
        // 0x80225E8C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80225F08;
    }
    // 0x80225E8C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225E90: j           L_80225F08
    // 0x80225E94: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_80225F08;
    // 0x80225E94: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225E98:
    // 0x80225E98: jal         0x80061798
    // 0x80225E9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_12;
    // 0x80225E9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x80225EA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225EA8: jal         0x80036B00
    // 0x80225EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_13;
    // 0x80225EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x80225EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EB8: jal         0x80034844
    // 0x80225EBC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_14;
    // 0x80225EBC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_14:
    // 0x80225EC0: jal         0x8004F4F8
    // 0x80225EC4: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_15;
    // 0x80225EC4: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_15:
L_80225EC8:
    // 0x80225EC8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80225ECC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225ED0: j           L_80225F08
    // 0x80225ED4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_80225F08;
    // 0x80225ED4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225ED8:
    // 0x80225ED8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225EDC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225EE0: jal         0x80070050
    // 0x80225EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x80225EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80225EE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225EEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225EF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EF4: sb          $v1, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r3;
    // 0x80225EF8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225EFC: jal         0x80035288
    // 0x80225F00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80035288_10688(rdram, ctx);
        goto after_17;
    // 0x80225F00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_17:
    // 0x80225F04: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80225F08:
    // 0x80225F08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225F0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225F10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F14: jr          $ra
    // 0x80225F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225F18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FC0C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FC10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FC14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FC18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FC1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FC20: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FC24: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022FC28: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022FC2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC30: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022FC34: beq         $v1, $v0, L_8022FC80
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC38: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FC80;
    }
    // 0x8022FC38: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FC3C: beql        $v0, $zero, L_8022FC54
    if (ctx->r2 == 0) {
        // 0x8022FC40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FC54;
    }
    goto skip_0;
    // 0x8022FC40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FC44: beq         $v1, $zero, L_8022FC6C
    if (ctx->r3 == 0) {
        // 0x8022FC48: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022FC6C;
    }
    // 0x8022FC48: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FC4C: j           L_8022FD04
    // 0x8022FC50: nop

        goto L_8022FD04;
    // 0x8022FC50: nop

L_8022FC54:
    // 0x8022FC54: beq         $v1, $v0, L_8022FCB0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC58: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FCB0;
    }
    // 0x8022FC58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FC5C: beq         $v1, $v0, L_8022FCD0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC60: nop
    
            goto L_8022FCD0;
    }
    // 0x8022FC60: nop

    // 0x8022FC64: j           L_8022FD04
    // 0x8022FC68: nop

        goto L_8022FD04;
    // 0x8022FC68: nop

L_8022FC6C:
    // 0x8022FC6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FC70: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022FC74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FC78: j           L_8022FCA0
    // 0x8022FC7C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
        goto L_8022FCA0;
    // 0x8022FC7C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
L_8022FC80:
    // 0x8022FC80: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022FC84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FC88: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FC8C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022FC90: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x8022FC94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FC98: jal         0x80061510
    // 0x8022FC9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8022FC9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_8022FCA0:
    // 0x8022FCA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FCA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FCA8: j           L_8022FD04
    // 0x8022FCAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FD04;
    // 0x8022FCAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FCB0:
    // 0x8022FCB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FCB4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FCB8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FCBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FCC0: bne         $v0, $zero, L_8022FD04
    if (ctx->r2 != 0) {
        // 0x8022FCC4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022FD04;
    }
    // 0x8022FCC4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022FCC8: j           L_8022FD04
    // 0x8022FCCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FD04;
    // 0x8022FCCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FCD0:
    // 0x8022FCD0: jal         0x8003516C
    // 0x8022FCD4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022FCD4: nop

    after_1:
    // 0x8022FCD8: bne         $v0, $zero, L_8022FD04
    if (ctx->r2 != 0) {
        // 0x8022FCDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FD04;
    }
    // 0x8022FCDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FCE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FCE4: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022FCE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FCEC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022FCF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FCF4: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022FCF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FCFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FD00: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022FD04:
    // 0x8022FD04: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FD08: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8022FD0C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022FD10: beq         $v0, $zero, L_8022FD34
    if (ctx->r2 == 0) {
        // 0x8022FD14: nop
    
            goto L_8022FD34;
    }
    // 0x8022FD14: nop

    // 0x8022FD18: jal         0x80061724
    // 0x8022FD1C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_2;
    // 0x8022FD1C: nop

    after_2:
    // 0x8022FD20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FD24: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022FD28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FD2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FD30: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022FD34:
    // 0x8022FD34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FD38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FD3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD40: jr          $ra
    // 0x8022FD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022724C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022724C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80227250: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80227254: beq         $v0, $zero, L_80227270
    if (ctx->r2 == 0) {
        // 0x80227258: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227270;
    }
    // 0x80227258: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022725C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227260: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80227264: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227268: bne         $v0, $zero, L_8022729C
    if (ctx->r2 != 0) {
        // 0x8022726C: nop
    
            goto L_8022729C;
    }
    // 0x8022726C: nop

L_80227270:
    // 0x80227270: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80227274: bgez        $v0, L_8022729C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227278: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022729C;
    }
    // 0x80227278: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022727C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80227280: bnel        $v1, $v0, L_8022729C
    if (ctx->r3 != ctx->r2) {
        // 0x80227284: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022729C;
    }
    goto skip_0;
    // 0x80227284: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80227288: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022728C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80227290: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80227294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227298: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022729C:
    // 0x8022729C: jr          $ra
    // 0x802272A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802272A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022F480_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F480: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F484: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022F488: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F48C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F490: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022F494: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022F498: jal         0x80071060
    // 0x8022F49C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8022F49C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8022F4A0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022F4A4: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x8022F4A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F4AC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F4B0: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x8022F4B4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022F4B8: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x8022F4BC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8022F4C0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F4C4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F4C8: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x8022F4CC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022F4D0: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x8022F4D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F4D8: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x8022F4DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F4E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F4E4: bne         $a0, $zero, L_8022F4F0
    if (ctx->r4 != 0) {
        // 0x8022F4E8: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_8022F4F0;
    }
    // 0x8022F4E8: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8022F4EC: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_8022F4F0:
    // 0x8022F4F0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F4F4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F4F8: beq         $v0, $zero, L_8022F53C
    if (ctx->r2 == 0) {
        // 0x8022F4FC: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8022F53C;
    }
    // 0x8022F4FC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022F500: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8022F504: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x8022F508: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022F50C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F510: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F514: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F518: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x8022F51C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F520: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F524: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022F528: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022F52C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F530: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F534: j           L_8022F594
    // 0x8022F538: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_8022F594;
    // 0x8022F538: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8022F53C:
    // 0x8022F53C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022F540: beq         $v0, $zero, L_8022F55C
    if (ctx->r2 == 0) {
        // 0x8022F544: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_8022F55C;
    }
    // 0x8022F544: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022F548: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F54C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F550: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F554: j           L_8022F570
    // 0x8022F558: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8022F570;
    // 0x8022F558: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022F55C:
    // 0x8022F55C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022F560: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F564: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F568: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F56C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_8022F570:
    // 0x8022F570: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F574: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F578: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022F57C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022F580: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F584: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022F588: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8022F58C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F590: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022F594:
    // 0x8022F594: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8022F598: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022F59C: jal         0x80051F9C
    // 0x8022F5A0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x8022F5A0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022F5A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F5A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022F5AC: jr          $ra
    // 0x8022F5B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F5B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228978_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022897C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228984: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228988: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022898C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228990: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228994: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80228998: jal         0x8004FA7C
    // 0x8022899C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022899C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802289A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802289A4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802289A8: beq         $v0, $zero, L_80228A3C
    if (ctx->r2 == 0) {
        // 0x802289AC: nop
    
            goto L_80228A3C;
    }
    // 0x802289AC: nop

    // 0x802289B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802289B4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802289B8: bne         $v0, $zero, L_80228A3C
    if (ctx->r2 != 0) {
        // 0x802289BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228A3C;
    }
    // 0x802289BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289C0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802289C4: beq         $v1, $v0, L_802289DC
    if (ctx->r3 == ctx->r2) {
        // 0x802289C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802289DC;
    }
    // 0x802289C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802289CC: beq         $v1, $v0, L_80228A0C
    if (ctx->r3 == ctx->r2) {
        // 0x802289D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A0C;
    }
    // 0x802289D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289D4: j           L_80228A30
    // 0x802289D8: nop

        goto L_80228A30;
    // 0x802289D8: nop

L_802289DC:
    // 0x802289DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802289E0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802289E4: bne         $v0, $zero, L_80228A30
    if (ctx->r2 != 0) {
        // 0x802289E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A30;
    }
    // 0x802289E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289EC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802289F0: bne         $v0, $zero, L_80228A30
    if (ctx->r2 != 0) {
        // 0x802289F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228A30;
    }
    // 0x802289F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802289FC: bne         $v1, $v0, L_80228A30
    if (ctx->r3 != ctx->r2) {
        // 0x80228A00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A30;
    }
    // 0x80228A00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A04: j           L_80228A30
    // 0x80228A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228A30;
    // 0x80228A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228A0C:
    // 0x80228A0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A10: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228A14: beq         $v0, $zero, L_80228A2C
    if (ctx->r2 == 0) {
        // 0x80228A18: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80228A2C;
    }
    // 0x80228A18: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228A1C: bne         $v0, $zero, L_80228A30
    if (ctx->r2 != 0) {
        // 0x80228A20: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A30;
    }
    // 0x80228A20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A24: j           L_80228A30
    // 0x80228A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228A30;
    // 0x80228A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228A2C:
    // 0x80228A2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80228A30:
    // 0x80228A30: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228A34: beq         $v0, $zero, L_80228A60
    if (ctx->r2 == 0) {
        // 0x80228A38: nop
    
            goto L_80228A60;
    }
    // 0x80228A38: nop

L_80228A3C:
    // 0x80228A3C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80228A40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228A44: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228A48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228A4C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228A50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228A54: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228A58: j           L_80228A70
    // 0x80228A5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228A70;
    // 0x80228A5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228A60:
    // 0x80228A60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228A64: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228A68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228A70:
    // 0x80228A70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A7C: jr          $ra
    // 0x80228A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A014_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A01C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A020: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A024: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A028: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A02C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A030: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A034: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022A038: beq         $v0, $zero, L_8022A1F4
    if (ctx->r2 == 0) {
        // 0x8022A03C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A1F4;
    }
    // 0x8022A03C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A040: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A044: addu        $at, $at, $v0
    gpr jr_addend_8022A04C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A048: lw          $v0, 0x4650($at)
    ctx->r2 = ADD32(ctx->r1, 0X4650);
    // 0x8022A04C: jr          $v0
    // 0x8022A050: nop

    switch (jr_addend_8022A04C >> 2) {
        case 0: goto L_8022A054; break;
        case 1: goto L_8022A114; break;
        case 2: goto L_8022A130; break;
        case 3: goto L_8022A198; break;
        case 4: goto L_8022A1C4; break;
        default: switch_error(__func__, 0x8022A04C, 0x80234650);
    }
    // 0x8022A050: nop

L_8022A054:
    // 0x8022A054: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A05C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A060: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A064: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022A068: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A06C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A070: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A074: jal         0x8004D5D4
    // 0x8022A078: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A078: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A07C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A080: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A084: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A088: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A08C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A090: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A094: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A098: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A09C: addiu       $v0, $v0, 0x4130
    ctx->r2 = ADD32(ctx->r2, 0X4130);
    // 0x8022A0A0: jal         0x8003E934
    // 0x8022A0A4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022A0A4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A0A8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A0AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A0B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A0B4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A0B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A0BC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022A0C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A0C4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A0C8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A0CC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022A0D0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022A0D4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022A0D8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A0DC: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022A0E0: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022A0E4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022A0E8: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022A0EC: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022A0F0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A0F4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A0F8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A0FC: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022A100: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A104: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022A108: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A10C: j           L_8022A1F4
    // 0x8022A110: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022A1F4;
    // 0x8022A110: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022A114:
    // 0x8022A114: jal         0x8022A3A0
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A3A0_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A11C: beq         $v0, $zero, L_8022A1F8
    if (ctx->r2 == 0) {
        // 0x8022A120: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A1F8;
    }
    // 0x8022A120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A124: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A128: j           L_8022A1F0
    // 0x8022A12C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A1F0;
    // 0x8022A12C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A130:
    // 0x8022A130: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A134: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A138: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A13C: jal         0x8004F820
    // 0x8022A140: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A140: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022A144: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A148: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A14C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A150: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A154: bne         $v0, $zero, L_8022A1F4
    if (ctx->r2 != 0) {
        // 0x8022A158: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A1F4;
    }
    // 0x8022A158: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A15C: jal         0x8003516C
    // 0x8022A160: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022A160: nop

    after_4:
    // 0x8022A164: bne         $v0, $zero, L_8022A1F8
    if (ctx->r2 != 0) {
        // 0x8022A168: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A1F8;
    }
    // 0x8022A168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A16C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A170: jal         0x800616FC
    // 0x8022A174: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022A174: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022A178: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A17C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A180: jal         0x80050294
    // 0x8022A184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022A184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022A188: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A18C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A190: j           L_8022A1F0
    // 0x8022A194: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A1F0;
    // 0x8022A194: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A198:
    // 0x8022A198: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A19C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A1A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A1A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A1A8: bne         $v0, $zero, L_8022A1F8
    if (ctx->r2 != 0) {
        // 0x8022A1AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A1F8;
    }
    // 0x8022A1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A1B0: jal         0x80034E3C
    // 0x8022A1B4: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022A1B4: nop

    after_7:
    // 0x8022A1B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A1BC: j           L_8022A1F0
    // 0x8022A1C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A1F0;
    // 0x8022A1C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A1C4:
    // 0x8022A1C4: jal         0x8003516C
    // 0x8022A1C8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022A1C8: nop

    after_8:
    // 0x8022A1CC: bne         $v0, $zero, L_8022A1F8
    if (ctx->r2 != 0) {
        // 0x8022A1D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A1F8;
    }
    // 0x8022A1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A1D4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022A1D8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A1DC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022A1E0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A1E4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022A1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1EC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022A1F0:
    // 0x8022A1F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A1F4:
    // 0x8022A1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A1F8:
    // 0x8022A1F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A1FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022A200: jal         0x80047284
    // 0x8022A204: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022A204: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022A208: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A20C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A214: jr          $ra
    // 0x8022A218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228A84_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228A8C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228A90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228A94: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228A98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228A9C: lw          $v0, 0x40CC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40CC);
    // 0x80228AA0: jalr        $v0
    // 0x80228AA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228AA4: nop

    after_0:
    // 0x80228AA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228AAC: jr          $ra
    // 0x80228AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E00_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226E08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80226E0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226E10: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E18: lw          $v0, 0x3ECC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3ECC);
    // 0x80226E1C: jalr        $v0
    // 0x80226E20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226E20: nop

    after_0:
    // 0x80226E24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226E28: jr          $ra
    // 0x80226E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231AF0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231AF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231AF8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80231AFC: bne         $v0, $zero, L_80231B1C
    if (ctx->r2 != 0) {
        // 0x80231B00: nop
    
            goto L_80231B1C;
    }
    // 0x80231B00: nop

    // 0x80231B04: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80231B08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231B0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231B10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231B14: j           L_80231B30
    // 0x80231B18: lw          $v0, 0x4560($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4560);
        goto L_80231B30;
    // 0x80231B18: lw          $v0, 0x4560($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4560);
L_80231B1C:
    // 0x80231B1C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80231B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231B24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231B28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231B2C: lw          $v0, 0x4570($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4570);
L_80231B30:
    // 0x80231B30: jalr        $v0
    // 0x80231B34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231B34: nop

    after_0:
    // 0x80231B38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231B3C: jr          $ra
    // 0x80231B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD08_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD08: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022AD0C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022AD10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AD14: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8022AD18: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022AD1C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022AD20: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022AD24: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022AD28: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022AD2C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8022AD30: bne         $v1, $zero, L_8022AE90
    if (ctx->r3 != 0) {
        // 0x8022AD34: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022AE90;
    }
    // 0x8022AD34: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022AD38: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022AD3C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AD40: beq         $v0, $zero, L_8022B1CC
    if (ctx->r2 == 0) {
        // 0x8022AD44: addiu       $s4, $s1, 0x14
        ctx->r20 = ADD32(ctx->r17, 0X14);
            goto L_8022B1CC;
    }
    // 0x8022AD44: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022AD48: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022AD4C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022AD50: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022AD54: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AD5C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8022AD60: jal         0x8004F820
    // 0x8022AD64: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022AD64: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022AD68: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022AD6C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022AD70: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD74: lhu         $v0, 0x32C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022AD78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AD7C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022AD80: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022AD84: jal         0x8004F820
    // 0x8022AD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022AD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022AD8C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AD94: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022AD98: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022AD9C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ADA0: beq         $v0, $zero, L_8022ADD8
    if (ctx->r2 == 0) {
        // 0x8022ADA4: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022ADD8;
    }
    // 0x8022ADA4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022ADA8: lb          $v0, 0x330($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X330);
    // 0x8022ADAC: bne         $v0, $zero, L_8022ADCC
    if (ctx->r2 != 0) {
        // 0x8022ADB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022ADCC;
    }
    // 0x8022ADB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022ADB4: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022ADB8: jal         0x8002A33C
    // 0x8022ADBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022ADBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8022ADC0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022ADC4: j           L_8022ADDC
    // 0x8022ADC8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022ADDC;
    // 0x8022ADC8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022ADCC:
    // 0x8022ADCC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022ADD0: j           L_8022ADDC
    // 0x8022ADD4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022ADDC;
    // 0x8022ADD4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022ADD8:
    // 0x8022ADD8: sb          $zero, 0x330($s1)
    MEM_B(0X330, ctx->r17) = 0;
L_8022ADDC:
    // 0x8022ADDC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022ADE0: beql        $v0, $zero, L_8022AE14
    if (ctx->r2 == 0) {
        // 0x8022ADE4: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022AE14;
    }
    goto skip_0;
    // 0x8022ADE4: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_0:
    // 0x8022ADE8: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022ADEC: bne         $v0, $zero, L_8022AE0C
    if (ctx->r2 != 0) {
        // 0x8022ADF0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AE0C;
    }
    // 0x8022ADF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022ADF4: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022ADF8: jal         0x8002A33C
    // 0x8022ADFC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022ADFC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022AE00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AE04: j           L_8022AE14
    // 0x8022AE08: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022AE14;
    // 0x8022AE08: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022AE0C:
    // 0x8022AE0C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AE10: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022AE14:
    // 0x8022AE14: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8022AE18: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022AE1C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022AE20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AE24: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022AE28: mflo        $v1
    ctx->r3 = lo;
    // 0x8022AE2C: nop

    // 0x8022AE30: nop

    // 0x8022AE34: blez        $v1, L_8022AE54
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022AE38: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022AE54;
    }
    // 0x8022AE38: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AE3C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AE40: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AE44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AE48: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AE4C: j           L_8022AE68
    // 0x8022AE50: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022AE68;
    // 0x8022AE50: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022AE54:
    // 0x8022AE54: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AE58: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AE5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AE60: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AE64: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022AE68:
    // 0x8022AE68: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022AE6C: jal         0x8004F820
    // 0x8022AE70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022AE70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_4:
    // 0x8022AE74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AE78: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AE7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AE80: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022AE84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AE88: j           L_8022B1C4
    // 0x8022AE8C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
        goto L_8022B1C4;
    // 0x8022AE8C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
L_8022AE90:
    // 0x8022AE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE94: bne         $v1, $v0, L_8022B08C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AE98: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B08C;
    }
    // 0x8022AE98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AE9C: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022AEA0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AEA4: beq         $v0, $zero, L_8022B1CC
    if (ctx->r2 == 0) {
        // 0x8022AEA8: nop
    
            goto L_8022B1CC;
    }
    // 0x8022AEA8: nop

    // 0x8022AEAC: lbu         $v0, 0x336($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X336);
    // 0x8022AEB0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022AEB4: bne         $v0, $zero, L_8022AEEC
    if (ctx->r2 != 0) {
        // 0x8022AEB8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022AEEC;
    }
    // 0x8022AEB8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022AEBC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AEC0: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AEC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AEC8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AECC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022AED0: jal         0x8004F820
    // 0x8022AED4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022AED4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_5:
    // 0x8022AED8: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AEDC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022AEE0: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022AEE4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AEE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8022AEEC:
    // 0x8022AEEC: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022AEF0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022AEF4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AEF8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AEFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AF00: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AF04: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022AF08: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022AF0C: jal         0x8004F820
    // 0x8022AF10: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022AF10: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_6:
    // 0x8022AF14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AF18: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022AF1C: beql        $v0, $zero, L_8022AF50
    if (ctx->r2 == 0) {
        // 0x8022AF20: sb          $zero, 0x48($s2)
        MEM_B(0X48, ctx->r18) = 0;
            goto L_8022AF50;
    }
    goto skip_1;
    // 0x8022AF20: sb          $zero, 0x48($s2)
    MEM_B(0X48, ctx->r18) = 0;
    skip_1:
    // 0x8022AF24: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022AF28: bne         $v0, $zero, L_8022AF48
    if (ctx->r2 != 0) {
        // 0x8022AF2C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AF48;
    }
    // 0x8022AF2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AF30: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022AF34: jal         0x8002A33C
    // 0x8022AF38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022AF38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x8022AF3C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022AF40: j           L_8022AF50
    // 0x8022AF44: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
        goto L_8022AF50;
    // 0x8022AF44: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022AF48:
    // 0x8022AF48: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AF4C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022AF50:
    // 0x8022AF50: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022AF54: beql        $v0, $zero, L_8022AF88
    if (ctx->r2 == 0) {
        // 0x8022AF58: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022AF88;
    }
    goto skip_2;
    // 0x8022AF58: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_2:
    // 0x8022AF5C: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022AF60: bne         $v0, $zero, L_8022AF80
    if (ctx->r2 != 0) {
        // 0x8022AF64: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AF80;
    }
    // 0x8022AF64: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AF68: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022AF6C: jal         0x8002A33C
    // 0x8022AF70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022AF70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x8022AF74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AF78: j           L_8022AF88
    // 0x8022AF7C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022AF88;
    // 0x8022AF7C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022AF80:
    // 0x8022AF80: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AF84: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022AF88:
    // 0x8022AF88: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022AF8C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AF90: beq         $v1, $zero, L_8022AFF0
    if (ctx->r3 == 0) {
        // 0x8022AF94: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8022AFF0;
    }
    // 0x8022AF94: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022AF98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AF9C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022AFA0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022AFA4: nop

    // 0x8022AFA8: nop

    // 0x8022AFAC: blez        $v0, L_8022AFCC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022AFB0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022AFCC;
    }
    // 0x8022AFB0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AFB4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AFB8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AFBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AFC0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AFC4: j           L_8022AFE0
    // 0x8022AFC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022AFE0;
    // 0x8022AFC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022AFCC:
    // 0x8022AFCC: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AFD0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AFD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AFD8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AFDC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022AFE0:
    // 0x8022AFE0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022AFE4: jal         0x8004F820
    // 0x8022AFE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8022AFE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x8022AFEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8022AFF0:
    // 0x8022AFF0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022AFF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022AFF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AFFC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022B000: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022B004: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022B008: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022B00C: bne         $v0, $zero, L_8022B028
    if (ctx->r2 != 0) {
        // 0x8022B010: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B028;
    }
    // 0x8022B010: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B014: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022B018: jal         0x8002A33C
    // 0x8022B01C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022B01C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_10:
    // 0x8022B020: j           L_8022B02C
    // 0x8022B024: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022B02C;
    // 0x8022B024: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022B028:
    // 0x8022B028: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022B02C:
    // 0x8022B02C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022B030: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B034: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022B038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B03C: jal         0x8004DA90
    // 0x8022B040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x8022B040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022B044: jal         0x80040F30
    // 0x8022B048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x8022B048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022B04C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B050: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x8022B054: bne         $v0, $zero, L_8022B074
    if (ctx->r2 != 0) {
        // 0x8022B058: andi        $v0, $s0, 0xF00
        ctx->r2 = ctx->r16 & 0XF00;
            goto L_8022B074;
    }
    // 0x8022B058: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
    // 0x8022B05C: jal         0x8003E934
    // 0x8022B060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8022B060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022B064: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022B068: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B06C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022B070: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
L_8022B074:
    // 0x8022B074: beq         $v0, $zero, L_8022B1C0
    if (ctx->r2 == 0) {
        // 0x8022B078: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B1C0;
    }
    // 0x8022B078: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B07C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022B080: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022B084: j           L_8022B1CC
    // 0x8022B088: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
        goto L_8022B1CC;
    // 0x8022B088: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022B08C:
    // 0x8022B08C: bne         $v1, $v0, L_8022B1CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B090: addiu       $s3, $s1, 0x14
        ctx->r19 = ADD32(ctx->r17, 0X14);
            goto L_8022B1CC;
    }
    // 0x8022B090: addiu       $s3, $s1, 0x14
    ctx->r19 = ADD32(ctx->r17, 0X14);
    // 0x8022B094: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B098: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022B09C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B0A0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B0A4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022B0A8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022B0AC: lhu         $a2, 0x32C($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022B0B0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022B0B4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022B0B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B0BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B0C0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B0C4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022B0C8: jal         0x8004F820
    // 0x8022B0CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_14;
    // 0x8022B0CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_14:
    // 0x8022B0D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B0D4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022B0D8: beql        $v0, $zero, L_8022B10C
    if (ctx->r2 == 0) {
        // 0x8022B0DC: sb          $zero, 0x331($s1)
        MEM_B(0X331, ctx->r17) = 0;
            goto L_8022B10C;
    }
    goto skip_3;
    // 0x8022B0DC: sb          $zero, 0x331($s1)
    MEM_B(0X331, ctx->r17) = 0;
    skip_3:
    // 0x8022B0E0: lb          $v0, 0x331($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X331);
    // 0x8022B0E4: bne         $v0, $zero, L_8022B104
    if (ctx->r2 != 0) {
        // 0x8022B0E8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B104;
    }
    // 0x8022B0E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B0EC: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022B0F0: jal         0x8002A33C
    // 0x8022B0F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022B0F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_15:
    // 0x8022B0F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B0FC: j           L_8022B10C
    // 0x8022B100: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
        goto L_8022B10C;
    // 0x8022B100: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022B104:
    // 0x8022B104: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022B108: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022B10C:
    // 0x8022B10C: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022B110: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022B114: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B118: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B11C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022B120: nop

    // 0x8022B124: nop

    // 0x8022B128: blez        $v0, L_8022B148
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022B12C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022B148;
    }
    // 0x8022B12C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022B130: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022B134: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022B138: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B13C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B140: j           L_8022B15C
    // 0x8022B144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022B15C;
    // 0x8022B144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022B148:
    // 0x8022B148: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022B14C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022B150: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B154: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B158: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022B15C:
    // 0x8022B15C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022B160: jal         0x8004F820
    // 0x8022B164: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x8022B164: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x8022B168: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B16C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022B170: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022B174: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B178: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022B17C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022B180: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022B184: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022B188: bne         $v0, $zero, L_8022B1A4
    if (ctx->r2 != 0) {
        // 0x8022B18C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B1A4;
    }
    // 0x8022B18C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B190: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022B194: jal         0x8002A33C
    // 0x8022B198: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x8022B198: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_17:
    // 0x8022B19C: j           L_8022B1A8
    // 0x8022B1A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8022B1A8;
    // 0x8022B1A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8022B1A4:
    // 0x8022B1A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022B1A8:
    // 0x8022B1A8: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022B1AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B1B0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022B1B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B1B8: jal         0x8004DA90
    // 0x8022B1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x8022B1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
L_8022B1C0:
    // 0x8022B1C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022B1C4:
    // 0x8022B1C4: jal         0x8022B95C
    // 0x8022B1C8: nop

    func_8022B95C_ovl18(rdram, ctx);
        goto after_19;
    // 0x8022B1C8: nop

    after_19:
L_8022B1CC:
    // 0x8022B1CC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8022B1D0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022B1D4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022B1D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022B1DC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022B1E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022B1E4: jr          $ra
    // 0x8022B1E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022B1E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022A610_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A614: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A618: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A61C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A620: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A624: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A628: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A62C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022A630: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A634: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A638: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A63C: jal         0x8004D5D4
    // 0x8022A640: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A640: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A648: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A64C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A650: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A654: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A658: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A65C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A660: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A664: addiu       $v0, $v0, 0x4130
    ctx->r2 = ADD32(ctx->r2, 0X4130);
    // 0x8022A668: jal         0x8003E934
    // 0x8022A66C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022A66C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A670: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A674: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A678: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A67C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A680: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022A684: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A688: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A68C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A690: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022A694: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022A698: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022A69C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A6A0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022A6A4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022A6A8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022A6AC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022A6B0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022A6B4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A6B8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A6BC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A6C0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022A6C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A6C8: jal         0x800A3450
    // 0x8022A6CC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022A6CC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022A6D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A6D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022A6D8: jal         0x80050294
    // 0x8022A6DC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A6DC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x8022A6E0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A6E4: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A6E8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022A6EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A6F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A6F4: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022A6F8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022A6FC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A704: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x8022A708: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022A70C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022A710: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A714: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022A718: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A71C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A720: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A724: jal         0x8002A33C
    // 0x8022A728: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022A728: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8022A72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A734: jr          $ra
    // 0x8022A738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A538_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A53C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A544: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A548: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022A54C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A550: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A554: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022A558: jal         0x8004DA90
    // 0x8022A55C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A55C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022A560: jal         0x8003E810
    // 0x8022A564: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022A564: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022A568: bne         $v0, $zero, L_8022A584
    if (ctx->r2 != 0) {
        // 0x8022A56C: nop
    
            goto L_8022A584;
    }
    // 0x8022A56C: nop

    // 0x8022A570: jal         0x80040F30
    // 0x8022A574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A578: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022A57C: j           L_8022A590
    // 0x8022A580: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022A590;
    // 0x8022A580: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A584:
    // 0x8022A584: jal         0x8004F418
    // 0x8022A588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022A588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A590:
    // 0x8022A590: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A594: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A598: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A59C: jr          $ra
    // 0x8022A5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225AF0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225AF8: jal         0x8005FB90
    // 0x80225AFC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x80225AFC: nop

    after_0:
    // 0x80225B00: jal         0x80060018
    // 0x80225B04: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x80225B04: nop

    after_1:
    // 0x80225B08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225B0C: jr          $ra
    // 0x80225B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225B14: nop

    // 0x80225B18: nop

    // 0x80225B1C: nop

;}
RECOMP_FUNC void func_802272A4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272A4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802272A8: bltzl       $v0, L_802272B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802272AC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802272B0;
    }
    goto skip_0;
    // 0x802272AC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_802272B0:
    // 0x802272B0: jr          $ra
    // 0x802272B4: nop

    TRACE_RETURN()
    return;
    // 0x802272B4: nop

;}
RECOMP_FUNC void func_80226314_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226314: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226318: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022631C: beq         $v1, $zero, L_80226338
    if (ctx->r3 == 0) {
        // 0x80226320: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80226338;
    }
    // 0x80226320: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80226324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226328: beq         $v1, $v0, L_80226344
    if (ctx->r3 == ctx->r2) {
        // 0x8022632C: nop
    
            goto L_80226344;
    }
    // 0x8022632C: nop

    // 0x80226330: j           L_80226370
    // 0x80226334: nop

        goto L_80226370;
    // 0x80226334: nop

L_80226338:
    // 0x80226338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022633C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80226340: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80226344:
    // 0x80226344: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80226348: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022634C: bne         $v0, $zero, L_8022636C
    if (ctx->r2 != 0) {
        // 0x80226350: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022636C;
    }
    // 0x80226350: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80226354: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80226358: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022635C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80226360: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226364: beq         $v0, $zero, L_80226370
    if (ctx->r2 == 0) {
        // 0x80226368: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80226370;
    }
    // 0x80226368: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_8022636C:
    // 0x8022636C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80226370:
    // 0x80226370: jr          $ra
    // 0x80226374: nop

    TRACE_RETURN()
    return;
    // 0x80226374: nop

;}
RECOMP_FUNC void func_8022E500_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E500: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E504: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E508: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E50C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022E510: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022E514: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E518: lh          $s2, 0x44($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X44);
    // 0x8022E51C: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E520: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E524: lh          $s0, 0x48($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X48);
    // 0x8022E528: nop

    // 0x8022E52C: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E530: mflo        $a0
    ctx->r4 = lo;
    // 0x8022E534: nop

    // 0x8022E538: nop

    // 0x8022E53C: jal         0x80032424
    // 0x8022E540: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8022E540: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8022E544: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x8022E548: jal         0x80032664
    // 0x8022E54C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8022E54C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022E550: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E554: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E558: jal         0x80032664
    // 0x8022E55C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x8022E55C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022E560: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E564: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
    // 0x8022E568: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E56C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E570: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022E574: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E578: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8022E57C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E580: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022E584: jal         0x80031600
    // 0x8022E588: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022E588: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022E58C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E590: jal         0x80031DA8
    // 0x8022E594: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022E594: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x8022E598: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022E59C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022E5A0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E5A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E5A8: jr          $ra
    // 0x8022E5AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E5AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228694_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022869C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802286A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802286A8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802286AC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802286B0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x802286B4: jal         0x8004FA7C
    // 0x802286B8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802286B8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802286BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802286C0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802286C4: beq         $v0, $zero, L_80228758
    if (ctx->r2 == 0) {
        // 0x802286C8: nop
    
            goto L_80228758;
    }
    // 0x802286C8: nop

    // 0x802286CC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802286D0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802286D4: bne         $v0, $zero, L_80228758
    if (ctx->r2 != 0) {
        // 0x802286D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228758;
    }
    // 0x802286D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802286DC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802286E0: beq         $v1, $v0, L_802286F8
    if (ctx->r3 == ctx->r2) {
        // 0x802286E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802286F8;
    }
    // 0x802286E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802286E8: beq         $v1, $v0, L_80228728
    if (ctx->r3 == ctx->r2) {
        // 0x802286EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228728;
    }
    // 0x802286EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802286F0: j           L_8022874C
    // 0x802286F4: nop

        goto L_8022874C;
    // 0x802286F4: nop

L_802286F8:
    // 0x802286F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802286FC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228700: bne         $v0, $zero, L_8022874C
    if (ctx->r2 != 0) {
        // 0x80228704: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022874C;
    }
    // 0x80228704: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228708: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022870C: bne         $v0, $zero, L_8022874C
    if (ctx->r2 != 0) {
        // 0x80228710: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022874C;
    }
    // 0x80228710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228714: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228718: bne         $v1, $v0, L_8022874C
    if (ctx->r3 != ctx->r2) {
        // 0x8022871C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022874C;
    }
    // 0x8022871C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228720: j           L_8022874C
    // 0x80228724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022874C;
    // 0x80228724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228728:
    // 0x80228728: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022872C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228730: beq         $v0, $zero, L_80228748
    if (ctx->r2 == 0) {
        // 0x80228734: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80228748;
    }
    // 0x80228734: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228738: bne         $v0, $zero, L_8022874C
    if (ctx->r2 != 0) {
        // 0x8022873C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022874C;
    }
    // 0x8022873C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228740: j           L_8022874C
    // 0x80228744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022874C;
    // 0x80228744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228748:
    // 0x80228748: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022874C:
    // 0x8022874C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228750: beq         $v0, $zero, L_8022877C
    if (ctx->r2 == 0) {
        // 0x80228754: nop
    
            goto L_8022877C;
    }
    // 0x80228754: nop

L_80228758:
    // 0x80228758: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022875C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228760: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228764: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228768: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022876C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228770: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228774: j           L_8022878C
    // 0x80228778: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022878C;
    // 0x80228778: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022877C:
    // 0x8022877C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228780: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228784: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228788: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022878C:
    // 0x8022878C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228790: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228794: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228798: jr          $ra
    // 0x8022879C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022879C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230544_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230544: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230548: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8023054C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230550: lbu         $a1, 0x3($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3);
    // 0x80230554: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80230558: addiu       $v0, $zero, 0x1FF
    ctx->r2 = ADD32(0, 0X1FF);
    // 0x8023055C: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x80230560: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x80230564: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x80230568: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023056C: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80230570: addiu       $a1, $a1, -0x400
    ctx->r5 = ADD32(ctx->r5, -0X400);
    // 0x80230574: andi        $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 & 0XC00;
    // 0x80230578: jal         0x8004FD60
    // 0x8023057C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x8023057C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80230580: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230584: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230588: jr          $ra
    // 0x8023058C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023058C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230FB4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230FB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230FBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230FC0: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80230FC4: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x80230FC8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80230FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230FD0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80230FD4: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x80230FD8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80230FDC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80230FE0: beql        $v0, $v1, L_80231028
    if (ctx->r2 == ctx->r3) {
        // 0x80230FE4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231028;
    }
    goto skip_0;
    // 0x80230FE4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80230FE8: beq         $a1, $zero, L_80231000
    if (ctx->r5 == 0) {
        // 0x80230FEC: nop
    
            goto L_80231000;
    }
    // 0x80230FEC: nop

    // 0x80230FF0: jal         0x8006033C
    // 0x80230FF4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230FF4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80230FF8: beq         $v0, $zero, L_80231028
    if (ctx->r2 == 0) {
        // 0x80230FFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231028;
    }
    // 0x80230FFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231000:
    // 0x80231000: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80231004: jal         0x8006033C
    // 0x80231008: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80231008: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x8023100C: bne         $v0, $zero, L_80231028
    if (ctx->r2 != 0) {
        // 0x80231010: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231028;
    }
    // 0x80231010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80231014: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80231018: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023101C: bne         $v1, $v0, L_80231028
    if (ctx->r3 != ctx->r2) {
        // 0x80231020: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231028;
    }
    // 0x80231020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231024: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231028:
    // 0x80231028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023102C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231030: jr          $ra
    // 0x80231034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A73C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A73C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A748: jal         0x8003E934
    // 0x8022A74C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022A74C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022A750: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A754: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x8022A758: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022A75C: beq         $v1, $zero, L_8022A76C
    if (ctx->r3 == 0) {
        // 0x8022A760: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022A76C;
    }
    // 0x8022A760: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A764: jal         0x8004F418
    // 0x8022A768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022A768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A76C:
    // 0x8022A76C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A774: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A778: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A77C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8022A780: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022A784: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022A788: jal         0x8004DA90
    // 0x8022A78C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A78C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022A790: jal         0x8003E810
    // 0x8022A794: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x8022A794: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022A798: beq         $v0, $zero, L_8022A7B0
    if (ctx->r2 == 0) {
        // 0x8022A79C: nop
    
            goto L_8022A7B0;
    }
    // 0x8022A79C: nop

    // 0x8022A7A0: jal         0x8004F418
    // 0x8022A7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022A7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022A7A8: j           L_8022A7C0
    // 0x8022A7AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A7C0;
    // 0x8022A7AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A7B0:
    // 0x8022A7B0: jal         0x80040F30
    // 0x8022A7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022A7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A7B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A7BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A7C0:
    // 0x8022A7C0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A7C4: bne         $v0, $zero, L_8022A7D4
    if (ctx->r2 != 0) {
        // 0x8022A7C8: nop
    
            goto L_8022A7D4;
    }
    // 0x8022A7C8: nop

    // 0x8022A7CC: jal         0x8005044C
    // 0x8022A7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022A7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022A7D4:
    // 0x8022A7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A7D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A7DC: jr          $ra
    // 0x8022A7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022A7E4: nop

    // 0x8022A7E8: nop

    // 0x8022A7EC: nop

;}
RECOMP_FUNC void func_8022EBD0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EBD4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022EBD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EBDC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022EBE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022EBE4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022EBE8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022EBEC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022EBF0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x8022EBF4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8022EBF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022EBFC: jal         0x8009A3B4
    // 0x8022EC00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EC00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EC04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC08: jr          $ra
    // 0x8022EC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F740_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F744: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F748: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F74C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022F750: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F754: jal         0x8003E6BC
    // 0x8022F758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022F758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F75C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F760: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022F764: jal         0x8003E6BC
    // 0x8022F768: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022F768: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022F76C: bne         $s0, $v0, L_8022F794
    if (ctx->r16 != ctx->r2) {
        // 0x8022F770: nop
    
            goto L_8022F794;
    }
    // 0x8022F770: nop

    // 0x8022F774: jal         0x8006033C
    // 0x8022F778: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022F778: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022F77C: beq         $v0, $zero, L_8022F794
    if (ctx->r2 == 0) {
        // 0x8022F780: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022F794;
    }
    // 0x8022F780: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022F784: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F788: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8022F78C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F790: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F794:
    // 0x8022F794: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F798: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F79C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F7A0: jr          $ra
    // 0x8022F7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F7A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B95C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B95C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B960: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B964: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B968: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B96C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B970: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B974: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022B978: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B97C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B980: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B984: jal         0x8009A3B4
    // 0x8022B988: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B988: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B98C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022B990: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022B994: jal         0x8009A3B4
    // 0x8022B998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B99C: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8022B9A0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B9A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B9A8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022B9AC: bne         $v0, $zero, L_8022BA40
    if (ctx->r2 != 0) {
        // 0x8022B9B0: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022BA40;
    }
    // 0x8022B9B0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022B9B4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B9B8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022B9BC: beq         $v0, $zero, L_8022BA40
    if (ctx->r2 == 0) {
        // 0x8022B9C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BA40;
    }
    // 0x8022B9C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B9C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B9C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B9CC: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022B9D0: addiu       $a2, $s0, 0x310
    ctx->r6 = ADD32(ctx->r16, 0X310);
    // 0x8022B9D4: addiu       $a3, $s0, 0x318
    ctx->r7 = ADD32(ctx->r16, 0X318);
    // 0x8022B9D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B9DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B9E4: jal         0x8004E150
    // 0x8022B9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022B9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B9EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B9F0: beq         $v0, $zero, L_8022BA28
    if (ctx->r2 == 0) {
        // 0x8022B9F4: nop
    
            goto L_8022BA28;
    }
    // 0x8022B9F4: nop

    // 0x8022B9F8: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022B9FC: bne         $v0, $zero, L_8022BA34
    if (ctx->r2 != 0) {
        // 0x8022BA00: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BA34;
    }
    // 0x8022BA00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BA04: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BA08: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BA0C: lbu         $v1, 0x336($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X336);
    // 0x8022BA10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BA14: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8022BA18: sb          $a0, 0x334($s0)
    MEM_B(0X334, ctx->r16) = ctx->r4;
    // 0x8022BA1C: sb          $a1, 0x335($s0)
    MEM_B(0X335, ctx->r16) = ctx->r5;
    // 0x8022BA20: j           L_8022BA40
    // 0x8022BA24: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
        goto L_8022BA40;
    // 0x8022BA24: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
L_8022BA28:
    // 0x8022BA28: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022BA2C: beq         $v0, $zero, L_8022BA40
    if (ctx->r2 == 0) {
        // 0x8022BA30: nop
    
            goto L_8022BA40;
    }
    // 0x8022BA30: nop

L_8022BA34:
    // 0x8022BA34: lbu         $v0, 0x53($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X53);
    // 0x8022BA38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BA3C: sb          $v0, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r2;
L_8022BA40:
    // 0x8022BA40: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BA44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BA48: beq         $v1, $v0, L_8022BAB4
    if (ctx->r3 == ctx->r2) {
        // 0x8022BA4C: addiu       $a0, $s0, 0xC4
        ctx->r4 = ADD32(ctx->r16, 0XC4);
            goto L_8022BAB4;
    }
    // 0x8022BA4C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022BA50: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022BA54: jal         0x8009A3B4
    // 0x8022BA58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022BA58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022BA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BA64: addiu       $a2, $s1, 0x28
    ctx->r6 = ADD32(ctx->r17, 0X28);
    // 0x8022BA68: jal         0x8004DF78
    // 0x8022BA6C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    func_8004DF78_29378(rdram, ctx);
        goto after_4;
    // 0x8022BA6C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    after_4:
    // 0x8022BA70: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BA74: beq         $v0, $zero, L_8022BAA4
    if (ctx->r2 == 0) {
        // 0x8022BA78: nop
    
            goto L_8022BAA4;
    }
    // 0x8022BA78: nop

    // 0x8022BA7C: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022BA80: andi        $v0, $v1, 0xA
    ctx->r2 = ctx->r3 & 0XA;
    // 0x8022BA84: bne         $v0, $zero, L_8022BAA4
    if (ctx->r2 != 0) {
        // 0x8022BA88: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_8022BAA4;
    }
    // 0x8022BA88: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8022BA8C: sb          $v0, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r2;
    // 0x8022BA90: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022BA94: sb          $v0, 0x50($s1)
    MEM_B(0X50, ctx->r17) = ctx->r2;
    // 0x8022BA98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BA9C: sb          $v0, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r2;
    // 0x8022BAA0: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
L_8022BAA4:
    // 0x8022BAA4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BAA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BAAC: bne         $v1, $v0, L_8022BAE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022BAB0: nop
    
            goto L_8022BAE4;
    }
    // 0x8022BAB0: nop

L_8022BAB4:
    // 0x8022BAB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BAB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BABC: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022BAC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BAC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BAC8: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    // 0x8022BACC: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8022BAD0: andi        $v1, $v1, 0xF5
    ctx->r3 = ctx->r3 & 0XF5;
    // 0x8022BAD4: jal         0x8022B344
    // 0x8022BAD8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    func_8022B344_ovl18(rdram, ctx);
        goto after_5;
    // 0x8022BAD8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    after_5:
    // 0x8022BADC: j           L_8022BAEC
    // 0x8022BAE0: nop

        goto L_8022BAEC;
    // 0x8022BAE0: nop

L_8022BAE4:
    // 0x8022BAE4: jal         0x8022BB04
    // 0x8022BAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BB04_ovl18(rdram, ctx);
        goto after_6;
    // 0x8022BAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022BAEC:
    // 0x8022BAEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022BAF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BAF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BAF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BAFC: jr          $ra
    // 0x8022BB00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BB00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022FBDC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FBE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FBE4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FBE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FBEC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FBF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBF4: lw          $v0, 0x440C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X440C);
    // 0x8022FBF8: jalr        $v0
    // 0x8022FBFC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FBFC: nop

    after_0:
    // 0x8022FC00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC04: jr          $ra
    // 0x8022FC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258C0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802258C8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802258CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802258D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802258D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802258D8: lw          $v0, 0x3870($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3870);
    // 0x802258DC: jalr        $v0
    // 0x802258E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802258E0: nop

    after_0:
    // 0x802258E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802258E8: jr          $ra
    // 0x802258EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF94_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BF98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFA0: addiu       $a0, $s0, 0x338
    ctx->r4 = ADD32(ctx->r16, 0X338);
    // 0x8022BFA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BFA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BFAC: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BFB0: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022BFB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BFB8: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022BFBC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022BFC0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022BFC4: jal         0x800540EC
    // 0x8022BFC8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x8022BFC8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022BFCC: bne         $v0, $zero, L_8022BFE0
    if (ctx->r2 != 0) {
        // 0x8022BFD0: nop
    
            goto L_8022BFE0;
    }
    // 0x8022BFD0: nop

    // 0x8022BFD4: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022BFD8: j           L_8022BFEC
    // 0x8022BFDC: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022BFEC;
    // 0x8022BFDC: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022BFE0:
    // 0x8022BFE0: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022BFE4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022BFE8: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
L_8022BFEC:
    // 0x8022BFEC: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
    // 0x8022BFF0: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x8022BFF4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022BFF8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BFFC: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022C000: beq         $a1, $zero, L_8022C05C
    if (ctx->r5 == 0) {
        // 0x8022C004: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022C05C;
    }
    // 0x8022C004: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022C008: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C00C: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C010: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C014: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022C018: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x8022C01C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022C020: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022C024: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022C028: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
    // 0x8022C02C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C030: bgtz        $v0, L_8022C054
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C034: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022C054;
    }
    // 0x8022C034: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022C038: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C03C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C040: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022C044: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022C048: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022C04C: j           L_8022C05C
    // 0x8022C050: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
        goto L_8022C05C;
    // 0x8022C050: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
L_8022C054:
    // 0x8022C054: jal         0x8002A33C
    // 0x8022C058: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022C058: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022C05C:
    // 0x8022C05C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C060: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C064: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C068: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C06C: lw          $v0, 0x419C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X419C);
    // 0x8022C070: jalr        $v0
    // 0x8022C074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022C074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C078: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C07C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C084: jr          $ra
    // 0x8022C088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FB30_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FB3C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022FB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB44: jal         0x80230544
    // 0x8022FB48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80230544_ovl18(rdram, ctx);
        goto after_0;
    // 0x8022FB48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022FB4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FB50: beq         $v0, $zero, L_8022FB9C
    if (ctx->r2 == 0) {
        // 0x8022FB54: nop
    
            goto L_8022FB9C;
    }
    // 0x8022FB54: nop

    // 0x8022FB58: jal         0x80230590
    // 0x8022FB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230590_ovl18(rdram, ctx);
        goto after_1;
    // 0x8022FB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022FB60: beq         $v0, $zero, L_8022FB74
    if (ctx->r2 == 0) {
        // 0x8022FB64: nop
    
            goto L_8022FB74;
    }
    // 0x8022FB64: nop

    // 0x8022FB68: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FB70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FB74:
    // 0x8022FB74: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8022FB78: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022FB7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FB80: beq         $v0, $zero, L_8022FB9C
    if (ctx->r2 == 0) {
        // 0x8022FB84: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FB9C;
    }
    // 0x8022FB84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FB88: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FB90: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FB94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FB98: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022FB9C:
    // 0x8022FB9C: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8022FBA0: bgez        $v0, L_8022FBCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FBA4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FBCC;
    }
    // 0x8022FBA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FBA8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022FBAC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FBB0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FBB4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022FBB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FBBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FBC0: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022FBC4: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022FBC8: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022FBCC:
    // 0x8022FBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBD4: jr          $ra
    // 0x8022FBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802325F4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802325F8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802325FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232600: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80232604: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232608: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8023260C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232610: bne         $v0, $zero, L_80232628
    if (ctx->r2 != 0) {
        // 0x80232614: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80232628;
    }
    // 0x80232614: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80232618: jal         0x8004F5C4
    // 0x8023261C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023261C: nop

    after_0:
    // 0x80232620: j           L_80232644
    // 0x80232624: nop

        goto L_80232644;
    // 0x80232624: nop

L_80232628:
    // 0x80232628: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8023262C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80232630: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80232634: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232638: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8023263C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80232640: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80232644:
    // 0x80232644: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232648: jr          $ra
    // 0x8023264C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023264C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293C8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293C8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x802293CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293D0: beq         $a1, $v0, L_802293FC
    if (ctx->r5 == ctx->r2) {
        // 0x802293D4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_802293FC;
    }
    // 0x802293D4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802293D8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x802293DC: bne         $a0, $v0, L_802293EC
    if (ctx->r4 != ctx->r2) {
        // 0x802293E0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802293EC;
    }
    // 0x802293E0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802293E4: j           L_8022940C
    // 0x802293E8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022940C;
    // 0x802293E8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_802293EC:
    // 0x802293EC: bne         $a0, $v1, L_8022940C
    if (ctx->r4 != ctx->r3) {
        // 0x802293F0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022940C;
    }
    // 0x802293F0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802293F4: j           L_8022940C
    // 0x802293F8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022940C;
    // 0x802293F8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_802293FC:
    // 0x802293FC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80229400: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229404: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229408: lbu         $v0, 0x3E50($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3E50);
L_8022940C:
    // 0x8022940C: jr          $ra
    // 0x80229410: nop

    TRACE_RETURN()
    return;
    // 0x80229410: nop

;}
RECOMP_FUNC void func_80231274_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231274: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231278: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023127C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231280: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231284: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231288: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023128C: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x80231290: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80231294: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80231298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023129C: beq         $s0, $v0, L_80231304
    if (ctx->r16 == ctx->r2) {
        // 0x802312A0: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80231304;
    }
    // 0x802312A0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802312A4: beql        $v0, $zero, L_802312BC
    if (ctx->r2 == 0) {
        // 0x802312A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802312BC;
    }
    goto skip_0;
    // 0x802312A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802312AC: beq         $s0, $zero, L_802312CC
    if (ctx->r16 == 0) {
        // 0x802312B0: nop
    
            goto L_802312CC;
    }
    // 0x802312B0: nop

    // 0x802312B4: j           L_80231434
    // 0x802312B8: nop

        goto L_80231434;
    // 0x802312B8: nop

L_802312BC:
    // 0x802312BC: beq         $s0, $v0, L_802313F8
    if (ctx->r16 == ctx->r2) {
        // 0x802312C0: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_802313F8;
    }
    // 0x802312C0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802312C4: j           L_80231434
    // 0x802312C8: nop

        goto L_80231434;
    // 0x802312C8: nop

L_802312CC:
    // 0x802312CC: jal         0x8006FF84
    // 0x802312D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802312D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x802312D4: beq         $v0, $zero, L_80231434
    if (ctx->r2 == 0) {
        // 0x802312D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231434;
    }
    // 0x802312D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802312DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802312E0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802312E4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802312E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802312EC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802312F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802312F4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802312F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802312FC: j           L_802313E8
    // 0x80231300: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_802313E8;
    // 0x80231300: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_80231304:
    // 0x80231304: jal         0x802314BC
    // 0x80231308: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802314BC_ovl18(rdram, ctx);
        goto after_1;
    // 0x80231308: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023130C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231310: beql        $v0, $zero, L_802313D8
    if (ctx->r2 == 0) {
        // 0x80231314: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_802313D8;
    }
    goto skip_1;
    // 0x80231314: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x80231318: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8023131C: bne         $v0, $zero, L_80231340
    if (ctx->r2 != 0) {
        // 0x80231320: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80231340;
    }
    // 0x80231320: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80231324: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80231328: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x8023132C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231330: jal         0x800610AC
    // 0x80231334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80231334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80231338: j           L_802313E8
    // 0x8023133C: nop

        goto L_802313E8;
    // 0x8023133C: nop

L_80231340:
    // 0x80231340: beq         $v0, $s0, L_802313E8
    if (ctx->r2 == ctx->r16) {
        // 0x80231344: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_802313E8;
    }
    // 0x80231344: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231348: beq         $v0, $zero, L_80231398
    if (ctx->r2 == 0) {
        // 0x8023134C: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80231398;
    }
    // 0x8023134C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80231350: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80231354: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80231358: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8023135C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231360: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231364: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80231368: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023136C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80231370: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231378: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023137C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80231380: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80231384: mfhi        $t0
    ctx->r8 = hi;
    // 0x80231388: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8023138C: nop

    // 0x80231390: j           L_802313B8
    // 0x80231394: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_802313B8;
    // 0x80231394: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_80231398:
    // 0x80231398: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8023139C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802313A0: beq         $v1, $v0, L_802313D4
    if (ctx->r3 == ctx->r2) {
        // 0x802313A4: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_802313D4;
    }
    // 0x802313A4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x802313A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802313AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802313B0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x802313B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802313B8:
    // 0x802313B8: jal         0x80069754
    // 0x802313BC: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x802313BC: nop

    after_3:
    // 0x802313C0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802313C4: jal         0x8006036C
    // 0x802313C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802313C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x802313CC: j           L_802313E8
    // 0x802313D0: nop

        goto L_802313E8;
    // 0x802313D0: nop

L_802313D4:
    // 0x802313D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802313D8:
    // 0x802313D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802313DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802313E0: jal         0x80069754
    // 0x802313E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x802313E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_802313E8:
    // 0x802313E8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802313EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802313F0: j           L_80231434
    // 0x802313F4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80231434;
    // 0x802313F4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802313F8:
    // 0x802313F8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802313FC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231400: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231404: bne         $v0, $zero, L_80231434
    if (ctx->r2 != 0) {
        // 0x80231408: nop
    
            goto L_80231434;
    }
    // 0x80231408: nop

    // 0x8023140C: jal         0x80070050
    // 0x80231410: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80231410: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80231414: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80231418: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023141C: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80231420: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231424: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80231428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023142C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80231430: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80231434:
    // 0x80231434: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231438: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023143C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231440: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231444: jr          $ra
    // 0x80231448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802285FC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228600: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228604: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022860C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228610: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228614: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228618: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022861C: jal         0x8004F820
    // 0x80228620: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228620: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228624: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228628: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022862C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228630: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228634: bgez        $a0, L_80228658
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80228638: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228658;
    }
    // 0x80228638: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022863C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228640: jal         0x80229378
    // 0x80228644: nop

    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80228644: nop

    after_1:
    // 0x80228648: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022864C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228650: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80228654: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80228658:
    // 0x80228658: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022865C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228660: bne         $v0, $zero, L_80228684
    if (ctx->r2 != 0) {
        // 0x80228664: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228684;
    }
    // 0x80228664: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228668: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022866C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228670: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80228674: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228678: jal         0x80229378
    // 0x8022867C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80229378_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022867C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228684:
    // 0x80228684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228688: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022868C: jr          $ra
    // 0x80228690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258F0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802258F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225900: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225904: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80225908: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022590C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225914: beq         $v1, $v0, L_80225A34
    if (ctx->r3 == ctx->r2) {
        // 0x80225918: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225A34;
    }
    // 0x80225918: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022591C: beql        $v0, $zero, L_80225934
    if (ctx->r2 == 0) {
        // 0x80225920: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225934;
    }
    goto skip_0;
    // 0x80225920: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225924: beq         $v1, $zero, L_80225944
    if (ctx->r3 == 0) {
        // 0x80225928: nop
    
            goto L_80225944;
    }
    // 0x80225928: nop

    // 0x8022592C: j           L_80225AB4
    // 0x80225930: nop

        goto L_80225AB4;
    // 0x80225930: nop

L_80225934:
    // 0x80225934: beq         $v1, $v0, L_80225A60
    if (ctx->r3 == ctx->r2) {
        // 0x80225938: nop
    
            goto L_80225A60;
    }
    // 0x80225938: nop

    // 0x8022593C: j           L_80225AB4
    // 0x80225940: nop

        goto L_80225AB4;
    // 0x80225940: nop

L_80225944:
    // 0x80225944: jal         0x8006FF84
    // 0x80225948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022594C: beq         $v0, $zero, L_80225AB4
    if (ctx->r2 == 0) {
        // 0x80225950: nop
    
            goto L_80225AB4;
    }
    // 0x80225950: nop

    // 0x80225954: jal         0x80060170
    // 0x80225958: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80225958: nop

    after_1:
    // 0x8022595C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225960: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225964: jal         0x8005F6B4
    // 0x80225968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80225968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022596C: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80225970: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225974: addiu       $v0, $v0, 0x3884
    ctx->r2 = ADD32(ctx->r2, 0X3884);
    // 0x80225978: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022597C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225980: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225984: addiu       $v0, $v0, 0x3874
    ctx->r2 = ADD32(ctx->r2, 0X3874);
    // 0x80225988: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022598C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225990: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80225994: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022599C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802259A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259A8: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802259AC: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x802259B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259B4: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802259B8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802259BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259C0: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802259C4: lui         $v0, 0xFEDD
    ctx->r2 = S32(0XFEDD << 16);
    // 0x802259C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259CC: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802259D0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802259D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259D8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x802259DC: jal         0x8004DD04
    // 0x802259E0: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x802259E0: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    after_3:
    // 0x802259E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802259E8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802259EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259F0: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802259F4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802259F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259FC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80225A00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A04: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80225A08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A0C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80225A10: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80225A14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225A18: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225A1C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80225A20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225A24: jal         0x800616FC
    // 0x80225A28: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80225A28: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_4:
    // 0x80225A2C: j           L_80225AB4
    // 0x80225A30: nop

        goto L_80225AB4;
    // 0x80225A30: nop

L_80225A34:
    // 0x80225A34: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80225A38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225A3C: bgez        $v0, L_80225A90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225A40: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80225A90;
    }
    // 0x80225A40: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80225A44: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80225A48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A4C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80225A50: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80225A54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225A58: j           L_80225A90
    // 0x80225A5C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80225A90;
    // 0x80225A5C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80225A60:
    // 0x80225A60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225A64: lb          $v0, 0x4A57($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A57);
    // 0x80225A68: bgez        $v0, L_80225A90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225A6C: nop
    
            goto L_80225A90;
    }
    // 0x80225A6C: nop

    // 0x80225A70: jal         0x800A3450
    // 0x80225A74: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80225A74: nop

    after_5:
    // 0x80225A78: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80225A7C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80225A80: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80225A84: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80225A88: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80225A8C: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_80225A90:
    // 0x80225A90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225A94: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225A98: bltz        $v0, L_80225AB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225A9C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80225AB4;
    }
    // 0x80225A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225AA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AA8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80225AAC: jal         0x80070050
    // 0x80225AB0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80225AB0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_6:
L_80225AB4:
    // 0x80225AB4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80225AB8: beq         $v0, $zero, L_80225ADC
    if (ctx->r2 == 0) {
        // 0x80225ABC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225ADC;
    }
    // 0x80225ABC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225AC0: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80225AC4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225AC8: beq         $v1, $v0, L_80225ADC
    if (ctx->r3 == ctx->r2) {
        // 0x80225ACC: nop
    
            goto L_80225ADC;
    }
    // 0x80225ACC: nop

    // 0x80225AD0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80225AD4: jalr        $v0
    // 0x80225AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x80225AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80225ADC:
    // 0x80225ADC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225AE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225AE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225AE8: jr          $ra
    // 0x80225AEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225AEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F340_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F34C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F350: jal         0x80071110
    // 0x8022F354: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8022F354: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022F358: bne         $v0, $zero, L_8022F36C
    if (ctx->r2 != 0) {
        // 0x8022F35C: nop
    
            goto L_8022F36C;
    }
    // 0x8022F35C: nop

    // 0x8022F360: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x8022F364: beq         $v0, $zero, L_8022F3A8
    if (ctx->r2 == 0) {
        // 0x8022F368: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_8022F3A8;
    }
    // 0x8022F368: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_8022F36C:
    // 0x8022F36C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F370: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F374: beq         $v0, $zero, L_8022F38C
    if (ctx->r2 == 0) {
        // 0x8022F378: nop
    
            goto L_8022F38C;
    }
    // 0x8022F378: nop

    // 0x8022F37C: jal         0x8004F4F8
    // 0x8022F380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x8022F380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F384: j           L_8022F398
    // 0x8022F388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022F398;
    // 0x8022F388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F38C:
    // 0x8022F38C: jal         0x8004F568
    // 0x8022F390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x8022F390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022F394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F398:
    // 0x8022F398: jal         0x8022F5B4
    // 0x8022F39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022F5B4_ovl18(rdram, ctx);
        goto after_3;
    // 0x8022F39C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8022F3A0: j           L_8022F470
    // 0x8022F3A4: nop

        goto L_8022F470;
    // 0x8022F3A4: nop

L_8022F3A8:
    // 0x8022F3A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F3AC: jal         0x8009A3B4
    // 0x8022F3B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F3B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022F3B4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F3B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F3BC: jal         0x8009A3B4
    // 0x8022F3C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022F3C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022F3C4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022F3C8: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8022F3CC: beq         $v1, $zero, L_8022F438
    if (ctx->r3 == 0) {
        // 0x8022F3D0: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_8022F438;
    }
    // 0x8022F3D0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022F3D4: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022F3D8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022F3DC: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x8022F3E0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8022F3E4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022F3E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F3EC: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022F3F0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022F3F4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022F3F8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022F3FC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8022F400: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8022F404: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8022F408: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022F40C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F410: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022F414: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022F418: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8022F41C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8022F420: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x8022F424: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022F428: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F42C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F430: j           L_8022F468
    // 0x8022F434: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
        goto L_8022F468;
    // 0x8022F434: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
L_8022F438:
    // 0x8022F438: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F43C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F440: beq         $v0, $zero, L_8022F458
    if (ctx->r2 == 0) {
        // 0x8022F444: nop
    
            goto L_8022F458;
    }
    // 0x8022F444: nop

    // 0x8022F448: jal         0x8004F4F8
    // 0x8022F44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x8022F44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022F450: j           L_8022F470
    // 0x8022F454: nop

        goto L_8022F470;
    // 0x8022F454: nop

L_8022F458:
    // 0x8022F458: jal         0x8004F568
    // 0x8022F45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_7;
    // 0x8022F45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022F460: j           L_8022F470
    // 0x8022F464: nop

        goto L_8022F470;
    // 0x8022F464: nop

L_8022F468:
    // 0x8022F468: jal         0x8022F480
    // 0x8022F46C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F480_ovl18(rdram, ctx);
        goto after_8;
    // 0x8022F46C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022F470:
    // 0x8022F470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F474: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F478: jr          $ra
    // 0x8022F47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282E4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802282F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282F8: jal         0x80229414
    // 0x802282FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229414_ovl18(rdram, ctx);
        goto after_0;
    // 0x802282FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80228300: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228304: beq         $v0, $zero, L_80228330
    if (ctx->r2 == 0) {
        // 0x80228308: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80228330;
    }
    // 0x80228308: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022830C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228310: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228314: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228318: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022831C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228320: jal         0x80229378
    // 0x80228324: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80228324: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80228328: j           L_80228370
    // 0x8022832C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228370;
    // 0x8022832C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228330:
    // 0x80228330: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228334: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228338: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022833C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228340: bne         $v0, $zero, L_80228350
    if (ctx->r2 != 0) {
        // 0x80228344: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228350;
    }
    // 0x80228344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022834C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228350:
    // 0x80228350: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228358: jal         0x8004DA90
    // 0x8022835C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022835C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228360: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228364: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80228368: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022836C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228370:
    // 0x80228370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228378: jr          $ra
    // 0x8022837C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022837C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: bne         $v0, $zero, L_802251E0
    if (ctx->r2 != 0) {
        // 0x802251C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E0;
    }
    // 0x802251C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D0: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251D8: j           L_802251E8
    // 0x802251DC: addiu       $a1, $a1, 0x302C
    ctx->r5 = ADD32(ctx->r5, 0X302C);
        goto L_802251E8;
    // 0x802251DC: addiu       $a1, $a1, 0x302C
    ctx->r5 = ADD32(ctx->r5, 0X302C);
L_802251E0:
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251E8:
    // 0x802251E8: jal         0x80037D80
    // 0x802251EC: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251EC: nop

    after_0:
    // 0x802251F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251F4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802251FC: addiu       $a1, $a1, 0xCB4
    ctx->r5 = ADD32(ctx->r5, 0XCB4);
    // 0x80225200: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225204: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80225208: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225214: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80225218: lui         $t0, 0x7FE9
    ctx->r8 = S32(0X7FE9 << 16);
    // 0x8022521C: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x80225220: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225224: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x80225228: lbu         $a3, 0x0($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X0);
    // 0x8022522C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225230: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225238: sb          $a3, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r7;
    // 0x8022523C: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x80225240: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225244: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x80225248: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022524C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225250: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225254: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80225258: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022525C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225260: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80225264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225268: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022526C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225270: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225274: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80225278: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022527C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225284: sb          $t1, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r9;
    // 0x80225288: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022528C: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x80225290: jal         0x8006033C
    // 0x80225294: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225294: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_1:
    // 0x80225298: bne         $v0, $zero, L_802252CC
    if (ctx->r2 != 0) {
        // 0x8022529C: nop
    
            goto L_802252CC;
    }
    // 0x8022529C: nop

    // 0x802252A0: jal         0x8006033C
    // 0x802252A4: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802252A4: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    after_2:
    // 0x802252A8: beq         $v0, $zero, L_802252CC
    if (ctx->r2 == 0) {
        // 0x802252AC: nop
    
            goto L_802252CC;
    }
    // 0x802252AC: nop

    // 0x802252B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252B4: lhu         $v0, -0x3BB6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BB6);
    // 0x802252B8: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802252BC: bne         $v0, $zero, L_802252CC
    if (ctx->r2 != 0) {
        // 0x802252C0: nop
    
            goto L_802252CC;
    }
    // 0x802252C0: nop

    // 0x802252C4: jal         0x8006036C
    // 0x802252C8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802252C8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_3:
L_802252CC:
    // 0x802252CC: jal         0x8006033C
    // 0x802252D0: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802252D0: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    after_4:
    // 0x802252D4: bne         $v0, $zero, L_80225308
    if (ctx->r2 != 0) {
        // 0x802252D8: nop
    
            goto L_80225308;
    }
    // 0x802252D8: nop

    // 0x802252DC: jal         0x8006033C
    // 0x802252E0: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x802252E0: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    after_5:
    // 0x802252E4: beq         $v0, $zero, L_80225308
    if (ctx->r2 == 0) {
        // 0x802252E8: nop
    
            goto L_80225308;
    }
    // 0x802252E8: nop

    // 0x802252EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252F0: lhu         $v0, -0x3BB6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BB6);
    // 0x802252F4: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802252F8: bne         $v0, $zero, L_80225308
    if (ctx->r2 != 0) {
        // 0x802252FC: nop
    
            goto L_80225308;
    }
    // 0x802252FC: nop

    // 0x80225300: jal         0x8006036C
    // 0x80225304: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225304: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    after_6:
L_80225308:
    // 0x80225308: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022530C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225310: bnel        $v0, $zero, L_802253A4
    if (ctx->r2 != 0) {
        // 0x80225314: sb          $zero, 0x44E($s0)
        MEM_B(0X44E, ctx->r16) = 0;
            goto L_802253A4;
    }
    goto skip_0;
    // 0x80225314: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
    skip_0:
    // 0x80225318: jal         0x8006033C
    // 0x8022531C: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022531C: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_7:
    // 0x80225320: beq         $v0, $zero, L_80225358
    if (ctx->r2 == 0) {
        // 0x80225324: nop
    
            goto L_80225358;
    }
    // 0x80225324: nop

    // 0x80225328: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022532C: addiu       $a0, $a0, 0x2D9C
    ctx->r4 = ADD32(ctx->r4, 0X2D9C);
    // 0x80225330: addiu       $a1, $a0, 0x30
    ctx->r5 = ADD32(ctx->r4, 0X30);
    // 0x80225334: jal         0x8009A3B4
    // 0x80225338: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80225338: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_8:
    // 0x8022533C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225340: jal         0x8003E6BC
    // 0x80225344: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_9;
    // 0x80225344: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    after_9:
    // 0x80225348: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022534C: lui         $a1, 0x18
    ctx->r5 = S32(0X18 << 16);
    // 0x80225350: j           L_80225394
    // 0x80225354: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
        goto L_80225394;
    // 0x80225354: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
L_80225358:
    // 0x80225358: jal         0x8006033C
    // 0x8022535C: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x8022535C: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    after_10:
    // 0x80225360: beq         $v0, $zero, L_802253A0
    if (ctx->r2 == 0) {
        // 0x80225364: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802253A0;
    }
    // 0x80225364: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225368: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022536C: addiu       $a0, $a0, 0x2D9C
    ctx->r4 = ADD32(ctx->r4, 0X2D9C);
    // 0x80225370: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    // 0x80225374: jal         0x8009A3B4
    // 0x80225378: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80225378: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_11:
    // 0x8022537C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225380: jal         0x8003E6BC
    // 0x80225384: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_12;
    // 0x80225384: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    after_12:
    // 0x80225388: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022538C: lui         $a1, 0x18
    ctx->r5 = S32(0X18 << 16);
    // 0x80225390: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
L_80225394:
    // 0x80225394: jal         0x80071ACC
    // 0x80225398: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_13;
    // 0x80225398: nop

    after_13:
    // 0x8022539C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802253A0:
    // 0x802253A0: sb          $v0, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = ctx->r2;
L_802253A4:
    // 0x802253A4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802253A8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802253AC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802253B4: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802253B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253C0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253C4: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x802253C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253D0: lw          $v0, 0x2F1C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2F1C);
    // 0x802253D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253D8: jal         0x8004C790
    // 0x802253DC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_14;
    // 0x802253DC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_14:
    // 0x802253E0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253E8: addiu       $a0, $a0, 0x2F7C
    ctx->r4 = ADD32(ctx->r4, 0X2F7C);
    // 0x802253EC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802253F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253F8: lw          $v1, 0x3014($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3014);
    // 0x802253FC: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225400: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225404: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225408: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022540C: addiu       $v0, $v0, 0x2F34
    ctx->r2 = ADD32(ctx->r2, 0X2F34);
    // 0x80225410: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225414: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225418: jal         0x80054FB8
    // 0x8022541C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_15;
    // 0x8022541C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_15:
    // 0x80225420: jal         0x8004A614
    // 0x80225424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_16;
    // 0x80225424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x80225428: jal         0x80225440
    // 0x8022542C: nop

    func_80225440_ovl18(rdram, ctx);
        goto after_17;
    // 0x8022542C: nop

    after_17:
    // 0x80225430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225434: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225438: jr          $ra
    // 0x8022543C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022543C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226378_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022637C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226384: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226388: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022638C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80226390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226394: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80226398: beq         $v1, $v0, L_80226410
    if (ctx->r3 == ctx->r2) {
        // 0x8022639C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80226410;
    }
    // 0x8022639C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802263A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802263A4: beql        $v0, $zero, L_802263BC
    if (ctx->r2 == 0) {
        // 0x802263A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802263BC;
    }
    goto skip_0;
    // 0x802263A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802263AC: beq         $v1, $zero, L_802263D4
    if (ctx->r3 == 0) {
        // 0x802263B0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802263D4;
    }
    // 0x802263B0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802263B4: j           L_80226524
    // 0x802263B8: nop

        goto L_80226524;
    // 0x802263B8: nop

L_802263BC:
    // 0x802263BC: beq         $v1, $v0, L_80226470
    if (ctx->r3 == ctx->r2) {
        // 0x802263C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226470;
    }
    // 0x802263C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802263C4: beq         $v1, $v0, L_802264FC
    if (ctx->r3 == ctx->r2) {
        // 0x802263C8: nop
    
            goto L_802264FC;
    }
    // 0x802263C8: nop

    // 0x802263CC: j           L_80226524
    // 0x802263D0: nop

        goto L_80226524;
    // 0x802263D0: nop

L_802263D4:
    // 0x802263D4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x802263D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802263DC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x802263E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802263E4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802263E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802263EC: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x802263F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802263F4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802263F8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x802263FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226400: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80226404: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x80226408: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022640C: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80226410:
    // 0x80226410: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80226414: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226418: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022641C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226420: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226424: bltz        $v0, L_80226454
    if (SIGNED(ctx->r2) < 0) {
        // 0x80226428: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80226454;
    }
    // 0x80226428: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022642C: beq         $v0, $zero, L_80226524
    if (ctx->r2 == 0) {
        // 0x80226430: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226524;
    }
    // 0x80226430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226434: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226438: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022643C: jal         0x8004DA90
    // 0x80226440: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226440: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226444: jal         0x80040F30
    // 0x80226448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80226448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022644C: j           L_80226524
    // 0x80226450: nop

        goto L_80226524;
    // 0x80226450: nop

L_80226454:
    // 0x80226454: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226458: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022645C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226460: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x80226464: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80226468: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022646C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226470:
    // 0x80226470: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80226474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226478: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022647C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226480: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226484: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226488: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022648C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80226490: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80226494: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226498: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022649C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802264A0: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x802264A4: jal         0x8004DA90
    // 0x802264A8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802264A8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x802264AC: jal         0x80040F30
    // 0x802264B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802264B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802264B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802264B8: beq         $v1, $zero, L_80226524
    if (ctx->r3 == 0) {
        // 0x802264BC: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80226524;
    }
    // 0x802264BC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x802264C0: bnel        $v0, $zero, L_802264C8
    if (ctx->r2 != 0) {
        // 0x802264C4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802264C8;
    }
    goto skip_1;
    // 0x802264C4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_802264C8:
    // 0x802264C8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x802264CC: beq         $v0, $zero, L_80226524
    if (ctx->r2 == 0) {
        // 0x802264D0: nop
    
            goto L_80226524;
    }
    // 0x802264D0: nop

    // 0x802264D4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802264D8: bgtz        $v0, L_80226524
    if (SIGNED(ctx->r2) > 0) {
        // 0x802264DC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80226524;
    }
    // 0x802264DC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802264E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802264E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802264E8: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x802264EC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802264F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264F4: j           L_80226524
    // 0x802264F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226524;
    // 0x802264F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802264FC:
    // 0x802264FC: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x80226500: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226504: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80226508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022650C: bgez        $v0, L_80226524
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226510: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80226524;
    }
    // 0x80226510: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80226514: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80226518: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022651C: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x80226520: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80226524:
    // 0x80226524: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226528: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022652C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226530: jr          $ra
    // 0x80226534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E3DC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E3E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E3E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E3E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E3EC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022E3F0: beq         $v1, $zero, L_8022E414
    if (ctx->r3 == 0) {
        // 0x8022E3F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E414;
    }
    // 0x8022E3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E3F8: bne         $v1, $v0, L_8022E408
    if (ctx->r3 != ctx->r2) {
        // 0x8022E3FC: addiu       $a0, $zero, 0x142
        ctx->r4 = ADD32(0, 0X142);
            goto L_8022E408;
    }
    // 0x8022E3FC: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x8022E400: jal         0x8002A33C
    // 0x8022E404: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E404: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022E408:
    // 0x8022E408: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022E40C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E410: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022E414:
    // 0x8022E414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E41C: jr          $ra
    // 0x8022E420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B64C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B64C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B650: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B654: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B658: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022B65C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B660: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022B664: beq         $v0, $zero, L_8022B6EC
    if (ctx->r2 == 0) {
        // 0x8022B668: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022B6EC;
    }
    // 0x8022B668: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022B66C: lb          $v0, 0x330($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X330);
    // 0x8022B670: bne         $v0, $zero, L_8022B68C
    if (ctx->r2 != 0) {
        // 0x8022B674: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B68C;
    }
    // 0x8022B674: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B678: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022B67C: jal         0x8002A33C
    // 0x8022B680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B684: j           L_8022B690
    // 0x8022B688: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_8022B690;
    // 0x8022B688: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8022B68C:
    // 0x8022B68C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022B690:
    // 0x8022B690: sb          $v0, 0x330($s0)
    MEM_B(0X330, ctx->r16) = ctx->r2;
    // 0x8022B694: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B698: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022B69C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B6A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B6A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B6A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022B6AC: jal         0x8004DBA0
    // 0x8022B6B0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_1;
    // 0x8022B6B0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    after_1:
    // 0x8022B6B4: jal         0x80040F30
    // 0x8022B6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B6BC: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022B6C0: bne         $v0, $zero, L_8022B6DC
    if (ctx->r2 != 0) {
        // 0x8022B6C4: nop
    
            goto L_8022B6DC;
    }
    // 0x8022B6C4: nop

    // 0x8022B6C8: jal         0x8003E934
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B6D0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B6D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6D8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B6DC:
    // 0x8022B6DC: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022B6E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B6E4: j           L_8022B6FC
    // 0x8022B6E8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
        goto L_8022B6FC;
    // 0x8022B6E8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022B6EC:
    // 0x8022B6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B6F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B6F4: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022B6F8: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
L_8022B6FC:
    // 0x8022B6FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022B700: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B708: jr          $ra
    // 0x8022B70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F6A0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F6A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F6A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F6AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F6B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F6B8: lw          $v0, 0x43D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X43D0);
    // 0x8022F6BC: jalr        $v0
    // 0x8022F6C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F6C0: nop

    after_0:
    // 0x8022F6C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6C8: jr          $ra
    // 0x8022F6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E710_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E71C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E720: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E728: jal         0x8009A3B4
    // 0x8022E72C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E72C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E730: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E734: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E738: jal         0x8009A3B4
    // 0x8022E73C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E73C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E740: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E744: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022E748: jal         0x8009A3B4
    // 0x8022E74C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E74C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E750: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E758: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E75C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E760: lw          $v0, 0x4388($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4388);
    // 0x8022E764: jalr        $v0
    // 0x8022E768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022E768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E774: jr          $ra
    // 0x8022E778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292E0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292E4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802292E8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802292EC: beq         $a0, $v0, L_80229354
    if (ctx->r4 == ctx->r2) {
        // 0x802292F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80229354;
    }
    // 0x802292F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802292F4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x802292F8: beql        $v0, $zero, L_80229318
    if (ctx->r2 == 0) {
        // 0x802292FC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80229318;
    }
    goto skip_0;
    // 0x802292FC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x80229300: beq         $a0, $zero, L_8022934C
    if (ctx->r4 == 0) {
        // 0x80229304: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022934C;
    }
    // 0x80229304: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80229308: beq         $a0, $v0, L_8022936C
    if (ctx->r4 == ctx->r2) {
        // 0x8022930C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022936C;
    }
    // 0x8022930C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229310: j           L_8022936C
    // 0x80229314: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022936C;
    // 0x80229314: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229318:
    // 0x80229318: beq         $a0, $v0, L_8022934C
    if (ctx->r4 == ctx->r2) {
        // 0x8022931C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022934C;
    }
    // 0x8022931C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80229320: beq         $v0, $zero, L_80229338
    if (ctx->r2 == 0) {
        // 0x80229324: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80229338;
    }
    // 0x80229324: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229328: beq         $a0, $v0, L_8022936C
    if (ctx->r4 == ctx->r2) {
        // 0x8022932C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022936C;
    }
    // 0x8022932C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229330: j           L_8022936C
    // 0x80229334: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022936C;
    // 0x80229334: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229338:
    // 0x80229338: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022933C: beq         $a0, $v0, L_8022935C
    if (ctx->r4 == ctx->r2) {
        // 0x80229340: nop
    
            goto L_8022935C;
    }
    // 0x80229340: nop

    // 0x80229344: j           L_8022936C
    // 0x80229348: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022936C;
    // 0x80229348: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022934C:
    // 0x8022934C: j           L_8022936C
    // 0x80229350: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022936C;
    // 0x80229350: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229354:
    // 0x80229354: j           L_8022936C
    // 0x80229358: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022936C;
    // 0x80229358: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022935C:
    // 0x8022935C: jal         0x800A3450
    // 0x80229360: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229360: nop

    after_0:
    // 0x80229364: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229368: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022936C:
    // 0x8022936C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229370: jr          $ra
    // 0x80229374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230D98_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230D9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230DA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230DA8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80230DAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230DB0: jal         0x8002C654
    // 0x80230DB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80230DB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80230DB8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230DBC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80230DC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80230DC4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80230DC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80230DCC: lhu         $a0, 0x4470($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4470);
    // 0x80230DD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230DD4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230DD8: jal         0x80031BB4
    // 0x80230DDC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x80230DDC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x80230DE0: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80230DE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230DE8: jal         0x800319B4
    // 0x80230DEC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80230DEC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80230DF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230DF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230DFC: jr          $ra
    // 0x80230E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
