#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022692C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022692C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022693C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80226940: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226944: jal         0x8004FA7C
    // 0x80226948: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226948: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022694C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226950: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226954: bne         $v0, $zero, L_802269A0
    if (ctx->r2 != 0) {
        // 0x80226958: nop
    
            goto L_802269A0;
    }
    // 0x80226958: nop

    // 0x8022695C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80226960: beq         $v0, $zero, L_80226974
    if (ctx->r2 == 0) {
        // 0x80226964: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226974;
    }
    // 0x80226964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226968: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022696C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226970: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80226974:
    // 0x80226974: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80226978: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022697C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80226980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226984: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022698C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226990: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226994: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226998: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022699C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_802269A0:
    // 0x802269A0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802269A4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802269A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802269AC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802269B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802269B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269B8: jr          $ra
    // 0x802269BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230070_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230070: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230074: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230078: bne         $v0, $a0, L_802300C4
    if (ctx->r2 != ctx->r4) {
        // 0x8023007C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802300C4;
    }
    // 0x8023007C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80230080: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x80230084: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x80230088: beq         $v0, $zero, L_80230098
    if (ctx->r2 == 0) {
        // 0x8023008C: addiu       $v0, $zero, 0xCB
        ctx->r2 = ADD32(0, 0XCB);
            goto L_80230098;
    }
    // 0x8023008C: addiu       $v0, $zero, 0xCB
    ctx->r2 = ADD32(0, 0XCB);
    // 0x80230090: j           L_802300BC
    // 0x80230094: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_802300BC;
    // 0x80230094: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80230098:
    // 0x80230098: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023009C: beql        $v0, $zero, L_802300B4
    if (ctx->r2 == 0) {
        // 0x802300A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802300B4;
    }
    goto skip_0;
    // 0x802300A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802300A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300A8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802300AC: j           L_802300BC
    // 0x802300B0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
        goto L_802300BC;
    // 0x802300B0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
L_802300B4:
    // 0x802300B4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802300B8: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
L_802300BC:
    // 0x802300BC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802300C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802300C4:
    // 0x802300C4: jr          $ra
    // 0x802300C8: nop

    TRACE_RETURN()
    return;
    // 0x802300C8: nop

;}
RECOMP_FUNC void func_80227AFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227B00: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80227B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B14: bne         $v1, $v0, L_80227B3C
    if (ctx->r3 != ctx->r2) {
        // 0x80227B18: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80227B3C;
    }
    // 0x80227B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B1C: jal         0x80061724
    // 0x80227B20: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80227B20: nop

    after_0:
    // 0x80227B24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227B28: jal         0x800616FC
    // 0x80227B2C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80227B2C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80227B30: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227B34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B38: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227B3C:
    // 0x80227B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B44: jr          $ra
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802350E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802350E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802350E8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802350EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802350F0: bne         $v1, $v0, L_8023512C
    if (ctx->r3 != ctx->r2) {
        // 0x802350F4: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_8023512C;
    }
    // 0x802350F4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802350F8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802350FC: lw          $v1, -0x4A34($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4A34);
    // 0x80235100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235104: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235108: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x8023510C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235110: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x80235114: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235118: sb          $v0, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r2;
    // 0x8023511C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235120: sw          $v1, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r3;
    // 0x80235124: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80235128: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_8023512C:
    // 0x8023512C: bne         $v1, $v0, L_80235168
    if (ctx->r3 != ctx->r2) {
        // 0x80235130: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80235168;
    }
    // 0x80235130: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80235134: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235138: lw          $v0, -0x493C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X493C);
    // 0x8023513C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235140: sb          $v1, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r3;
    // 0x80235144: addiu       $v1, $zero, 0x83
    ctx->r3 = ADD32(0, 0X83);
    // 0x80235148: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023514C: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x80235150: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235154: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x80235158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023515C: sb          $v1, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r3;
    // 0x80235160: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235164: sw          $v0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r2;
L_80235168:
    // 0x80235168: jal         0x80234340
    // 0x8023516C: nop

    func_80234340_ovl27(rdram, ctx);
        goto after_0;
    // 0x8023516C: nop

    after_0:
    // 0x80235170: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235174: jr          $ra
    // 0x80235178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237098_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237098: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023709C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x802370A0: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x802370A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802370A8: addiu       $v0, $v0, -0x4270
    ctx->r2 = ADD32(ctx->r2, -0X4270);
    // 0x802370AC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802370B0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802370B4: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x802370B8: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802370BC: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x802370C0: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x802370C4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802370C8: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x802370CC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802370D0: jr          $ra
    // 0x802370D4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802370D4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802259E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802259E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802259F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802259F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802259F8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802259FC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80225A00: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225A04: beq         $v1, $zero, L_80225A14
    if (ctx->r3 == 0) {
        // 0x80225A08: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80225A14;
    }
    // 0x80225A08: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225A0C: j           L_80225A1C
    // 0x80225A10: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_80225A1C;
    // 0x80225A10: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80225A14:
    // 0x80225A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225A18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80225A1C:
    // 0x80225A1C: jal         0x8004D5D4
    // 0x80225A20: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225A20: nop

    after_0:
    // 0x80225A24: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225A28: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80225A2C: bne         $a0, $v0, L_80225A3C
    if (ctx->r4 != ctx->r2) {
        // 0x80225A30: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_80225A3C;
    }
    // 0x80225A30: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80225A34: j           L_80225AB0
    // 0x80225A38: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80225AB0;
    // 0x80225A38: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_80225A3C:
    // 0x80225A3C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80225A40: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80225A44: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225A48: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80225A4C: bne         $v1, $zero, L_80225AB0
    if (ctx->r3 != 0) {
        // 0x80225A50: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80225AB0;
    }
    // 0x80225A50: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80225A54: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80225A58: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80225A5C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80225A60: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225A64: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80225A68: bne         $v1, $zero, L_80225AB0
    if (ctx->r3 != 0) {
        // 0x80225A6C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80225AB0;
    }
    // 0x80225A6C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80225A70: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80225A74: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80225A78: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x80225A7C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225A80: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80225A84: bne         $v1, $zero, L_80225AB0
    if (ctx->r3 != 0) {
        // 0x80225A88: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80225AB0;
    }
    // 0x80225A88: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80225A8C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80225A90: bnel        $a0, $v0, L_80225AB0
    if (ctx->r4 != ctx->r2) {
        // 0x80225A94: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80225AB0;
    }
    goto skip_0;
    // 0x80225A94: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80225A98: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80225A9C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225AA0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225AA4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225AA8: j           L_80225AB8
    // 0x80225AAC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80225AB8;
    // 0x80225AAC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80225AB0:
    // 0x80225AB0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225AB4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80225AB8:
    // 0x80225AB8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225ABC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225AC0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225AC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225AC8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80225ACC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80225AD0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225AD4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80225AD8: bne         $v0, $zero, L_80225AE4
    if (ctx->r2 != 0) {
        // 0x80225ADC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80225AE4;
    }
    // 0x80225ADC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80225AE0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80225AE4:
    // 0x80225AE4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80225AE8: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80225AEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225AF0: jal         0x8009A3B4
    // 0x80225AF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225AF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80225AF8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80225AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225B04: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80225B08: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80225B0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225B10: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225B14: addiu       $v0, $v0, -0x6950
    ctx->r2 = ADD32(ctx->r2, -0X6950);
    // 0x80225B18: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80225B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B20: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225B24: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225B28: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80225B2C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80225B30: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80225B34: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80225B38: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80225B3C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225B40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225B44: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225B48: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80225B4C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80225B50: jal         0x80050294
    // 0x80225B54: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80225B54: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80225B58: jal         0x80225B74
    // 0x80225B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80225B74_ovl27(rdram, ctx);
        goto after_3;
    // 0x80225B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225B60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B6C: jr          $ra
    // 0x80225B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238050_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023805C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238060: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80238064: beq         $v1, $zero, L_8023807C
    if (ctx->r3 == 0) {
        // 0x80238068: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023807C;
    }
    // 0x80238068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023806C: beq         $v1, $v0, L_80238098
    if (ctx->r3 == ctx->r2) {
        // 0x80238070: nop
    
            goto L_80238098;
    }
    // 0x80238070: nop

    // 0x80238074: j           L_802380A0
    // 0x80238078: nop

        goto L_802380A0;
    // 0x80238078: nop

L_8023807C:
    // 0x8023807C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238080: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80238084: jal         0x80050294
    // 0x80238088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023808C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238094: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238098:
    // 0x80238098: jal         0x8005044C
    // 0x8023809C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023809C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802380A0:
    // 0x802380A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802380A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802380A8: jr          $ra
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E22C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E22C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022E230: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022E234: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022E238: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8022E23C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022E240: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022E244: jal         0x8003F754
    // 0x8022E248: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x8022E248: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E24C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E250: beq         $a0, $zero, L_8022E278
    if (ctx->r4 == 0) {
        // 0x8022E254: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022E278;
    }
    // 0x8022E254: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022E258: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8022E25C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E260: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022E264: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E268: jal         0x800711A8
    // 0x8022E26C: lw          $a1, -0x6014($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6014);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_1;
    // 0x8022E26C: lw          $a1, -0x6014($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6014);
    after_1:
    // 0x8022E270: j           L_8022E288
    // 0x8022E274: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
        goto L_8022E288;
    // 0x8022E274: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_8022E278:
    // 0x8022E278: lw          $v0, 0x9C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X9C);
    // 0x8022E27C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E280: beq         $v0, $zero, L_8022E2B0
    if (ctx->r2 == 0) {
        // 0x8022E284: addiu       $a0, $zero, 0xF2
        ctx->r4 = ADD32(0, 0XF2);
            goto L_8022E2B0;
    }
    // 0x8022E284: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_8022E288:
    // 0x8022E288: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x8022E28C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022E290: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022E294: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x8022E298: sw          $zero, 0xD0($s3)
    MEM_W(0XD0, ctx->r19) = 0;
    // 0x8022E29C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E2A0: jal         0x8002A33C
    // 0x8022E2A4: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E2A4: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    after_2:
    // 0x8022E2A8: j           L_8022E56C
    // 0x8022E2AC: nop

        goto L_8022E56C;
    // 0x8022E2AC: nop

L_8022E2B0:
    // 0x8022E2B0: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x8022E2B4: addiu       $s1, $s3, 0x1C
    ctx->r17 = ADD32(ctx->r19, 0X1C);
    // 0x8022E2B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E2BC: jal         0x8009A3B4
    // 0x8022E2C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022E2C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022E2C4: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x8022E2C8: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022E2CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E2D0: jal         0x8009A3B4
    // 0x8022E2D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022E2D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022E2D8: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8022E2DC: bltz        $v0, L_8022E374
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E2E0: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8022E374;
    }
    // 0x8022E2E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E2E4: addiu       $s1, $s3, 0xD8
    ctx->r17 = ADD32(ctx->r19, 0XD8);
    // 0x8022E2E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E2EC: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022E2F0: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8022E2F4: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    // 0x8022E2F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E2FC: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x8022E300: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x8022E304: jal         0x8009A3B4
    // 0x8022E308: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022E308: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    after_5:
    // 0x8022E30C: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x8022E310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E314: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E318: jal         0x8009A3B4
    // 0x8022E31C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022E31C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022E320: addiu       $s1, $s3, 0xE8
    ctx->r17 = ADD32(ctx->r19, 0XE8);
    // 0x8022E324: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E328: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E32C: jal         0x8009A3B4
    // 0x8022E330: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022E330: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022E334: addiu       $s2, $s3, 0xF0
    ctx->r18 = ADD32(ctx->r19, 0XF0);
    // 0x8022E338: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E33C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E340: jal         0x8009A3B4
    // 0x8022E344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022E344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022E348: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x8022E34C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E350: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E354: jal         0x8009A3B4
    // 0x8022E358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022E358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022E35C: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x8022E360: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E364: jal         0x8009A3B4
    // 0x8022E368: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022E368: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022E36C: j           L_8022E56C
    // 0x8022E370: nop

        goto L_8022E56C;
    // 0x8022E370: nop

L_8022E374:
    // 0x8022E374: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x8022E378: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E37C: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x8022E380: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E384: bne         $v0, $zero, L_8022E39C
    if (ctx->r2 != 0) {
        // 0x8022E388: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_8022E39C;
    }
    // 0x8022E388: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8022E38C: jal         0x8004F4F8
    // 0x8022E390: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_11;
    // 0x8022E390: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x8022E394: j           L_8022E50C
    // 0x8022E398: nop

        goto L_8022E50C;
    // 0x8022E398: nop

L_8022E39C:
    // 0x8022E39C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E3A0: jal         0x8022E634
    // 0x8022E3A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8022E634_ovl27(rdram, ctx);
        goto after_12;
    // 0x8022E3A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_12:
    // 0x8022E3A8: lui         $v0, 0xFFE
    ctx->r2 = S32(0XFFE << 16);
    // 0x8022E3AC: ori         $v0, $v0, 0xC430
    ctx->r2 = ctx->r2 | 0XC430;
    // 0x8022E3B0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022E3B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E3B8: addiu       $s0, $s3, 0xA4
    ctx->r16 = ADD32(ctx->r19, 0XA4);
    // 0x8022E3BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022E3C0: addiu       $a3, $zero, 0x1F9
    ctx->r7 = ADD32(0, 0X1F9);
    // 0x8022E3C4: jal         0x80051B48
    // 0x8022E3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_13;
    // 0x8022E3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x8022E3CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E3D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022E3D4: jal         0x8009A3B4
    // 0x8022E3D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022E3D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022E3DC: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x8022E3E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E3E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E3EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3F0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E3F4: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x8022E3F8: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x8022E3FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E404: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E408: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E40C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E410: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x8022E414: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x8022E418: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8022E41C: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x8022E420: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E424: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E428: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8022E42C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E430: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E434: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E438: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E43C: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x8022E440: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x8022E444: lh          $v0, 0x46($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X46);
    // 0x8022E448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E44C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E450: sw          $v1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r3;
    // 0x8022E454: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x8022E458: lw          $a2, 0x24($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X24);
    // 0x8022E45C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E460: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E464: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x8022E468: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8022E46C: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x8022E470: jal         0x8004DD04
    // 0x8022E474: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_15;
    // 0x8022E474: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    after_15:
    // 0x8022E478: jal         0x8022E700
    // 0x8022E47C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022E700_ovl27(rdram, ctx);
        goto after_16;
    // 0x8022E47C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_16:
    // 0x8022E480: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x8022E484: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x8022E488: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E48C: jal         0x8009A3B4
    // 0x8022E490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8022E490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8022E494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E498: addiu       $s0, $s3, 0xF0
    ctx->r16 = ADD32(ctx->r19, 0XF0);
    // 0x8022E49C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E4A0: jal         0x8009A3B4
    // 0x8022E4A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8022E4A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x8022E4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4AC: addiu       $s0, $s3, 0xE8
    ctx->r16 = ADD32(ctx->r19, 0XE8);
    // 0x8022E4B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E4B4: jal         0x8009A3B4
    // 0x8022E4B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8022E4B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x8022E4BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4C0: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x8022E4C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E4C8: jal         0x8009A3B4
    // 0x8022E4CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8022E4CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x8022E4D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4D4: addiu       $s0, $s3, 0xD8
    ctx->r16 = ADD32(ctx->r19, 0XD8);
    // 0x8022E4D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E4DC: jal         0x8009A3B4
    // 0x8022E4E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x8022E4E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x8022E4E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E4E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E4EC: jal         0x8009A3B4
    // 0x8022E4F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x8022E4F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x8022E4F4: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022E4F8: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8022E4FC: lhu         $a0, 0x18($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X18);
    // 0x8022E500: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x8022E504: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x8022E508: sh          $a0, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r4;
L_8022E50C:
    // 0x8022E50C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022E510: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E514: beq         $v0, $zero, L_8022E568
    if (ctx->r2 == 0) {
        // 0x8022E518: addiu       $v0, $s3, 0x9C
        ctx->r2 = ADD32(ctx->r19, 0X9C);
            goto L_8022E568;
    }
    // 0x8022E518: addiu       $v0, $s3, 0x9C
    ctx->r2 = ADD32(ctx->r19, 0X9C);
    // 0x8022E51C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x8022E520: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022E524: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E528: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E52C: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8022E530: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8022E534: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E538: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E53C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E540: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E544: lw          $v1, -0x6020($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6020);
    // 0x8022E548: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022E54C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E550: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E554: lui         $v0, 0x4900
    ctx->r2 = S32(0X4900 << 16);
    // 0x8022E558: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E55C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E560: jal         0x80051E18
    // 0x8022E564: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x8022E564: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_23:
L_8022E568:
    // 0x8022E568: sw          $zero, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = 0;
L_8022E56C:
    // 0x8022E56C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8022E570: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022E574: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022E578: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E57C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022E580: jr          $ra
    // 0x8022E584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022E584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022A248_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A248: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A24C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A250: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A254: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A258: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022A25C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022A260: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022A264: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A268: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A26C: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A270: jal         0x80053ED8
    // 0x8022A274: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022A274: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    after_0:
    // 0x8022A278: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A27C: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x8022A280: lh          $v0, 0x16($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X16);
    // 0x8022A284: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022A288: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022A28C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A290: bne         $v1, $zero, L_8022A3EC
    if (ctx->r3 != 0) {
        // 0x8022A294: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022A3EC;
    }
    // 0x8022A294: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A298: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022A29C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A2A0: addiu       $s5, $s3, 0x1C
    ctx->r21 = ADD32(ctx->r19, 0X1C);
    // 0x8022A2A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A2A8: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x8022A2AC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x8022A2B0: addiu       $s4, $zero, 0x800
    ctx->r20 = ADD32(0, 0X800);
    // 0x8022A2B4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8022A2B8: jal         0x8004FAEC
    // 0x8022A2BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022A2BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022A2C0: beq         $v0, $zero, L_8022A3EC
    if (ctx->r2 == 0) {
        // 0x8022A2C4: nop
    
            goto L_8022A3EC;
    }
    // 0x8022A2C4: nop

    // 0x8022A2C8: lb          $v0, 0x366($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X366);
    // 0x8022A2CC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022A2D0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8022A2D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A2D8: addu        $a1, $v0, $s1
    ctx->r5 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A2DC: lh          $v0, 0x70($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X70);
    // 0x8022A2E0: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A2E4: blez        $v0, L_8022A330
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A2E8: ori         $s2, $v1, 0x4
        ctx->r18 = ctx->r3 | 0X4;
            goto L_8022A330;
    }
    // 0x8022A2E8: ori         $s2, $v1, 0x4
    ctx->r18 = ctx->r3 | 0X4;
    // 0x8022A2EC: sll         $a0, $s2, 3
    ctx->r4 = S32(ctx->r18 << 3);
    // 0x8022A2F0: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x8022A2F4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022A2F8: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A2FC: lhu         $v0, 0x68($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X68);
    // 0x8022A300: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022A304: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022A308: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A30C: jal         0x8004F820
    // 0x8022A310: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A310: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x8022A314: lb          $a0, 0x366($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X366);
    // 0x8022A318: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8022A31C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x8022A320: lhu         $v1, 0x68($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X68);
    // 0x8022A324: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A328: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A32C: sh          $v1, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r3;
L_8022A330:
    // 0x8022A330: lb          $v0, 0x364($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X364);
    // 0x8022A334: bne         $v0, $zero, L_8022A3E4
    if (ctx->r2 != 0) {
        // 0x8022A338: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A3E4;
    }
    // 0x8022A338: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A33C: lb          $v0, 0x366($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X366);
    // 0x8022A340: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A344: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022A348: lh          $v0, 0x70($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X70);
    // 0x8022A34C: blez        $v0, L_8022A3D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A350: lui         $v0, 0x7F
        ctx->r2 = S32(0X7F << 16);
            goto L_8022A3D4;
    }
    // 0x8022A350: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8022A354: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022A358: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022A35C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A360: bne         $v0, $zero, L_8022A3EC
    if (ctx->r2 != 0) {
        // 0x8022A364: sll         $v1, $s2, 3
        ctx->r3 = S32(ctx->r18 << 3);
            goto L_8022A3EC;
    }
    // 0x8022A364: sll         $v1, $s2, 3
    ctx->r3 = S32(ctx->r18 << 3);
    // 0x8022A368: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022A36C: lh          $v0, 0x180($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X180);
    // 0x8022A370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A374: sw          $v0, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r2;
    // 0x8022A378: lh          $v0, 0x182($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X182);
    // 0x8022A37C: addiu       $a0, $s0, 0x2F4
    ctx->r4 = ADD32(ctx->r16, 0X2F4);
    // 0x8022A380: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A384: sw          $v0, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->r2;
    // 0x8022A388: lh          $v0, 0x184($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X184);
    // 0x8022A38C: lb          $v1, 0x366($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X366);
    // 0x8022A390: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A394: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A398: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022A39C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022A3A0: sw          $v0, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->r2;
    // 0x8022A3A4: lhu         $v1, 0x68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X68);
    // 0x8022A3A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A3AC: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x8022A3B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022A3B4: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x8022A3B8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8022A3BC: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022A3C0: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022A3C4: jal         0x8004FAEC
    // 0x8022A3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x8022A3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022A3CC: beq         $v0, $zero, L_8022A3EC
    if (ctx->r2 == 0) {
        // 0x8022A3D0: nop
    
            goto L_8022A3EC;
    }
    // 0x8022A3D0: nop

L_8022A3D4:
    // 0x8022A3D4: lbu         $v0, 0x365($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X365);
    // 0x8022A3D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A3DC: j           L_8022A3EC
    // 0x8022A3E0: sb          $v0, 0x365($s0)
    MEM_B(0X365, ctx->r16) = ctx->r2;
        goto L_8022A3EC;
    // 0x8022A3E0: sb          $v0, 0x365($s0)
    MEM_B(0X365, ctx->r16) = ctx->r2;
L_8022A3E4:
    // 0x8022A3E4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A3E8: sb          $v0, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r2;
L_8022A3EC:
    // 0x8022A3EC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022A3F0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022A3F4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022A3F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A3FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022A400: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A404: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A408: jr          $ra
    // 0x8022A40C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A40C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80231B54_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231B64: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80231B68: blez        $v0, L_80231BE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231B6C: nop
    
            goto L_80231BE4;
    }
    // 0x80231B6C: nop

    // 0x80231B70: jal         0x800A3450
    // 0x80231B74: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231B74: nop

    after_0:
    // 0x80231B78: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231B7C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231B80: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231B84: jal         0x800A3450
    // 0x80231B88: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231B88: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231B8C: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80231B90: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231B94: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231B98: jal         0x800A3450
    // 0x80231B9C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231B9C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80231BA0: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x80231BA4: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80231BA8: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231BAC: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x80231BB0: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80231BB4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80231BB8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231BBC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80231BC0: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x80231BC4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231BC8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80231BCC: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80231BD0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80231BD4: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x80231BD8: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x80231BDC: j           L_80231BEC
    // 0x80231BE0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_80231BEC;
    // 0x80231BE0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_80231BE4:
    // 0x80231BE4: jal         0x8004F5C4
    // 0x80231BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80231BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80231BEC:
    // 0x80231BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231BF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231BF4: jr          $ra
    // 0x80231BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228840_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228840: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228844: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228848: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022884C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228850: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80228854: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228858: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022885C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228860: lh          $v0, 0x334($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X334);
    // 0x80228864: addiu       $s1, $s2, 0x2C8
    ctx->r17 = ADD32(ctx->r18, 0X2C8);
    // 0x80228868: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022886C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80228870: bne         $v0, $zero, L_80228B4C
    if (ctx->r2 != 0) {
        // 0x80228874: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228B4C;
    }
    // 0x80228874: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228878: lbu         $v0, 0x34D($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34D);
    // 0x8022887C: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x80228880: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80228884: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80228888: bne         $v1, $zero, L_80228894
    if (ctx->r3 != 0) {
        // 0x8022888C: sb          $v0, 0x34D($s2)
        MEM_B(0X34D, ctx->r18) = ctx->r2;
            goto L_80228894;
    }
    // 0x8022888C: sb          $v0, 0x34D($s2)
    MEM_B(0X34D, ctx->r18) = ctx->r2;
    // 0x80228890: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80228894:
    // 0x80228894: lbu         $v0, 0x34A($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34A);
    // 0x80228898: bne         $v0, $zero, L_80228938
    if (ctx->r2 != 0) {
        // 0x8022889C: nop
    
            goto L_80228938;
    }
    // 0x8022889C: nop

    // 0x802288A0: bne         $v1, $zero, L_802288F4
    if (ctx->r3 != 0) {
        // 0x802288A4: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_802288F4;
    }
    // 0x802288A4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802288A8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802288AC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x802288B0: jal         0x8004F820
    // 0x802288B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802288B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x802288B8: lhu         $a1, 0x56($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X56);
    // 0x802288BC: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x802288C0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802288C4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802288C8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x802288CC: sh          $a1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r5;
    // 0x802288D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802288D4: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x802288D8: addiu       $a3, $s3, 0x1C
    ctx->r7 = ADD32(ctx->r19, 0X1C);
    // 0x802288DC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802288E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802288E4: jal         0x8004FAEC
    // 0x802288E8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x802288E8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802288EC: beq         $v0, $zero, L_80228938
    if (ctx->r2 == 0) {
        // 0x802288F0: nop
    
            goto L_80228938;
    }
    // 0x802288F0: nop

L_802288F4:
    // 0x802288F4: jal         0x8004EFE4
    // 0x802288F8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x802288F8: nop

    after_2:
    // 0x802288FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228900: beq         $v1, $zero, L_80228938
    if (ctx->r3 == 0) {
        // 0x80228904: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228938;
    }
    // 0x80228904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228908: sw          $v1, 0x310($s2)
    MEM_W(0X310, ctx->r18) = ctx->r3;
    // 0x8022890C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228910: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228914: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228918: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x8022891C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80228920: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228924: lbu         $v0, 0x34D($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34D);
    // 0x80228928: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022892C: sb          $v1, 0x34E($s2)
    MEM_B(0X34E, ctx->r18) = ctx->r3;
    // 0x80228930: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228934: sb          $v0, 0x34D($s2)
    MEM_B(0X34D, ctx->r18) = ctx->r2;
L_80228938:
    // 0x80228938: lbu         $v0, 0x85($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X85);
    // 0x8022893C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228940: beq         $v0, $zero, L_80228B54
    if (ctx->r2 == 0) {
        // 0x80228944: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_80228B54;
    }
    // 0x80228944: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80228948: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022894C: bne         $v1, $v0, L_80228960
    if (ctx->r3 != ctx->r2) {
        // 0x80228950: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80228960;
    }
    // 0x80228950: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80228954: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x80228958: j           L_80228964
    // 0x8022895C: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
        goto L_80228964;
    // 0x8022895C: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
L_80228960:
    // 0x80228960: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
L_80228964:
    // 0x80228964: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80228968: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x8022896C: addiu       $v0, $zero, 0x11E0
    ctx->r2 = ADD32(0, 0X11E0);
    // 0x80228970: andi        $s3, $s0, 0xFF
    ctx->r19 = ctx->r16 & 0XFF;
    // 0x80228974: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80228978: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x8022897C: sll         $a0, $s3, 5
    ctx->r4 = S32(ctx->r19 << 5);
    // 0x80228980: addiu       $v0, $zero, -0x160
    ctx->r2 = ADD32(0, -0X160);
    // 0x80228984: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80228988: lw          $a2, 0x48($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X48);
    // 0x8022898C: addiu       $a0, $a0, 0x1E8
    ctx->r4 = ADD32(ctx->r4, 0X1E8);
    // 0x80228990: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x80228994: addiu       $a1, $a2, 0x14
    ctx->r5 = ADD32(ctx->r6, 0X14);
    // 0x80228998: jal         0x800308E8
    // 0x8022899C: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x8022899C: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    after_3:
    // 0x802289A0: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    // 0x802289A4: sll         $a2, $s3, 3
    ctx->r6 = S32(ctx->r19 << 3);
    // 0x802289A8: addu        $a1, $s2, $a2
    ctx->r5 = ADD32(ctx->r18, ctx->r6);
    // 0x802289AC: lhu         $v0, 0x180($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X180);
    // 0x802289B0: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x802289B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802289B8: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802289BC: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    // 0x802289C0: lhu         $v0, 0x182($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X182);
    // 0x802289C4: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x802289C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802289CC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x802289D0: lw          $a0, 0x48($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X48);
    // 0x802289D4: lhu         $v0, 0x184($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X184);
    // 0x802289D8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802289DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802289E0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x802289E4: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x802289E8: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x802289EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802289F0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802289F4: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x802289F8: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x802289FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A00: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80228A04: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x80228A08: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80228A0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A10: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80228A14: lbu         $v0, 0x82($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X82);
    // 0x80228A18: beq         $v0, $zero, L_80228B40
    if (ctx->r2 == 0) {
        // 0x80228A1C: addiu       $v0, $a2, 0x180
        ctx->r2 = ADD32(ctx->r6, 0X180);
            goto L_80228B40;
    }
    // 0x80228A1C: addiu       $v0, $a2, 0x180
    ctx->r2 = ADD32(ctx->r6, 0X180);
    // 0x80228A20: lw          $a1, 0x48($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X48);
    // 0x80228A24: addu        $s4, $s2, $v0
    ctx->r20 = ADD32(ctx->r18, ctx->r2);
    // 0x80228A28: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80228A2C: jal         0x8004EC38
    // 0x80228A30: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x80228A30: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_4:
    // 0x80228A34: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80228A38: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80228A3C: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x80228A40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228A44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A48: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228A4C: jal         0x8004F820
    // 0x80228A50: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80228A50: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80228A54: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80228A58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80228A5C: addu        $s3, $s1, $s3
    ctx->r19 = ADD32(ctx->r17, ctx->r19);
    // 0x80228A60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228A64: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228A68: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x80228A6C: lh          $a2, 0x66($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X66);
    // 0x80228A70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228A74: jal         0x8004F978
    // 0x80228A78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F978_2AD78(rdram, ctx);
        goto after_6;
    // 0x80228A78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_6:
    // 0x80228A7C: lh          $v1, 0x66($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X66);
    // 0x80228A80: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228A84: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80228A88: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80228A8C: slti        $v1, $v1, 0xC01
    ctx->r3 = SIGNED(ctx->r3) < 0XC01 ? 1 : 0;
    // 0x80228A90: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80228A94: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228A98: beq         $v0, $zero, L_80228AA8
    if (ctx->r2 == 0) {
        // 0x80228A9C: addu        $v0, $a1, $a0
        ctx->r2 = ADD32(ctx->r5, ctx->r4);
            goto L_80228AA8;
    }
    // 0x80228A9C: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x80228AA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228AA4: sh          $v0, 0x66($s3)
    MEM_H(0X66, ctx->r19) = ctx->r2;
L_80228AA8:
    // 0x80228AA8: lw          $a1, 0x48($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X48);
    // 0x80228AAC: lb          $v0, 0xC($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XC);
    // 0x80228AB0: beq         $v0, $zero, L_80228B54
    if (ctx->r2 == 0) {
        // 0x80228AB4: nop
    
            goto L_80228B54;
    }
    // 0x80228AB4: nop

    // 0x80228AB8: lbu         $v0, 0x86($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X86);
    // 0x80228ABC: bne         $v0, $zero, L_80228B38
    if (ctx->r2 != 0) {
        // 0x80228AC0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228B38;
    }
    // 0x80228AC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228AC4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80228AC8: jal         0x8004EC38
    // 0x80228ACC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_7;
    // 0x80228ACC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_7:
    // 0x80228AD0: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x80228AD4: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80228AD8: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x80228ADC: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80228AE0: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80228AE4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80228AE8: sb          $zero, 0x82($s1)
    MEM_B(0X82, ctx->r17) = 0;
    // 0x80228AEC: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80228AF0: beq         $v0, $zero, L_80228B18
    if (ctx->r2 == 0) {
        // 0x80228AF4: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_80228B18;
    }
    // 0x80228AF4: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80228AF8: sh          $v0, 0x6C($s1)
    MEM_H(0X6C, ctx->r17) = ctx->r2;
    // 0x80228AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B00: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
    // 0x80228B04: sb          $zero, 0x82($s1)
    MEM_B(0X82, ctx->r17) = 0;
    // 0x80228B08: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x80228B0C: lbu         $v0, 0x85($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X85);
    // 0x80228B10: j           L_80228B30
    // 0x80228B14: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
        goto L_80228B30;
    // 0x80228B14: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
L_80228B18:
    // 0x80228B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B1C: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80228B20: lbu         $v0, 0x85($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X85);
    // 0x80228B24: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80228B28: sb          $v1, 0x86($s1)
    MEM_B(0X86, ctx->r17) = ctx->r3;
    // 0x80228B2C: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
L_80228B30:
    // 0x80228B30: j           L_80228B54
    // 0x80228B34: sb          $v0, 0x85($s1)
    MEM_B(0X85, ctx->r17) = ctx->r2;
        goto L_80228B54;
    // 0x80228B34: sb          $v0, 0x85($s1)
    MEM_B(0X85, ctx->r17) = ctx->r2;
L_80228B38:
    // 0x80228B38: j           L_80228B54
    // 0x80228B3C: sb          $v0, 0x86($s1)
    MEM_B(0X86, ctx->r17) = ctx->r2;
        goto L_80228B54;
    // 0x80228B3C: sb          $v0, 0x86($s1)
    MEM_B(0X86, ctx->r17) = ctx->r2;
L_80228B40:
    // 0x80228B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B44: j           L_80228B54
    // 0x80228B48: sb          $v0, 0x82($s1)
    MEM_B(0X82, ctx->r17) = ctx->r2;
        goto L_80228B54;
    // 0x80228B48: sb          $v0, 0x82($s1)
    MEM_B(0X82, ctx->r17) = ctx->r2;
L_80228B4C:
    // 0x80228B4C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228B50: sh          $v0, 0x334($s2)
    MEM_H(0X334, ctx->r18) = ctx->r2;
L_80228B54:
    // 0x80228B54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80228B58: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80228B5C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228B60: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228B64: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228B68: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228B6C: jr          $ra
    // 0x80228B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80234FF4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234FF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234FFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235004: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80235008: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023500C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80235010: bne         $v0, $zero, L_8023503C
    if (ctx->r2 != 0) {
        // 0x80235014: slti        $v0, $v0, 0xC
        ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_8023503C;
    }
    // 0x80235014: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80235018: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8023501C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235020: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80235024: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80235028: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x8023502C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235030: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80235034: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80235038: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
L_8023503C:
    // 0x8023503C: beq         $v0, $zero, L_80235064
    if (ctx->r2 == 0) {
        // 0x80235040: lui         $v1, 0xFFFD
        ctx->r3 = S32(0XFFFD << 16);
            goto L_80235064;
    }
    // 0x80235040: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x80235044: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235048: lw          $v0, 0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4DD8);
    // 0x8023504C: addiu       $a0, $a1, 0x428
    ctx->r4 = ADD32(ctx->r5, 0X428);
    // 0x80235050: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235054: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235058: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023505C: jal         0x8004DD04
    // 0x80235060: addiu       $a1, $a1, 0x438
    ctx->r5 = ADD32(ctx->r5, 0X438);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80235060: addiu       $a1, $a1, 0x438
    ctx->r5 = ADD32(ctx->r5, 0X438);
    after_0:
L_80235064:
    // 0x80235064: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80235068: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023506C: bne         $v1, $v0, L_802350A8
    if (ctx->r3 != ctx->r2) {
        // 0x80235070: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_802350A8;
    }
    // 0x80235070: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80235074: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235078: lw          $v0, -0x4A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A38);
    // 0x8023507C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235080: sb          $v1, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r3;
    // 0x80235084: addiu       $v1, $zero, 0x82
    ctx->r3 = ADD32(0, 0X82);
    // 0x80235088: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023508C: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x80235090: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235094: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x80235098: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023509C: sb          $v1, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r3;
    // 0x802350A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802350A4: sw          $v0, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r2;
L_802350A8:
    // 0x802350A8: jal         0x80234340
    // 0x802350AC: nop

    func_80234340_ovl27(rdram, ctx);
        goto after_1;
    // 0x802350AC: nop

    after_1:
    // 0x802350B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802350B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802350B8: jr          $ra
    // 0x802350BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802350BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022596C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022596C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022597C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225980: bne         $v0, $zero, L_8022599C
    if (ctx->r2 != 0) {
        // 0x80225984: nop
    
            goto L_8022599C;
    }
    // 0x80225984: nop

    // 0x80225988: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022598C: jal         0x800607C4
    // 0x80225990: addiu       $a0, $a0, -0x6F40
    ctx->r4 = ADD32(ctx->r4, -0X6F40);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225990: addiu       $a0, $a0, -0x6F40
    ctx->r4 = ADD32(ctx->r4, -0X6F40);
    after_0:
    // 0x80225994: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225998: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022599C:
    // 0x8022599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259A4: jr          $ra
    // 0x802259A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802259AC: nop

;}
RECOMP_FUNC void func_80235250_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235250: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80235254: bne         $v0, $zero, L_80235268
    if (ctx->r2 != 0) {
        // 0x80235258: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80235268;
    }
    // 0x80235258: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023525C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80235260: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235264: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80235268:
    // 0x80235268: jr          $ra
    // 0x8023526C: nop

    TRACE_RETURN()
    return;
    // 0x8023526C: nop

;}
RECOMP_FUNC void func_8022EA80_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA80: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022EA84: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022EA88: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022EA8C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022EA90: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8022EA94: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022EA98: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8022EA9C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8022EAA0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022EAA4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022EAA8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022EAAC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022EAB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022EAB4: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_8022EAB8:
    // 0x8022EAB8: sll         $s1, $v0, 3
    ctx->r17 = S32(ctx->r2 << 3);
    // 0x8022EABC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EAC0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022EAC4: lh          $v0, -0x5FF8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5FF8);
    // 0x8022EAC8: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x8022EACC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022EAD0: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022EAD4: beq         $v1, $zero, L_8022ED2C
    if (ctx->r3 == 0) {
        // 0x8022EAD8: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8022ED2C;
    }
    // 0x8022EAD8: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022EADC: jal         0x8003B878
    // 0x8022EAE0: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022EAE0: nop

    after_0:
    // 0x8022EAE4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022EAE8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022EAEC: lh          $v1, -0x5FF8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5FF8);
    // 0x8022EAF0: lw          $a0, 0xD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD0);
    // 0x8022EAF4: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x8022EAF8: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022EAFC: beq         $v1, $zero, L_8022EB74
    if (ctx->r3 == 0) {
        // 0x8022EB00: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8022EB74;
    }
    // 0x8022EB00: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022EB04: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
    // 0x8022EB08: addiu       $fp, $zero, 0xE0
    ctx->r30 = ADD32(0, 0XE0);
    // 0x8022EB0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EB10: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022EB14: lh          $v0, -0x5FF2($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5FF2);
    // 0x8022EB18: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022EB1C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x8022EB20: lhu         $s0, -0x5FF4($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X5FF4);
    // 0x8022EB24: bgez        $v0, L_8022EB30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EB28: addiu       $s7, $zero, 0x60
        ctx->r23 = ADD32(0, 0X60);
            goto L_8022EB30;
    }
    // 0x8022EB28: addiu       $s7, $zero, 0x60
    ctx->r23 = ADD32(0, 0X60);
    // 0x8022EB2C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_8022EB30:
    // 0x8022EB30: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022EB34: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022EB38: lh          $v1, -0x5FF6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5FF6);
    // 0x8022EB3C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022EB40: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EB44: mflo        $s4
    ctx->r20 = lo;
    // 0x8022EB48: nop

    // 0x8022EB4C: nop

    // 0x8022EB50: bltzl       $v1, L_8022EB58
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022EB54: addiu       $v1, $v1, 0xF
        ctx->r3 = ADD32(ctx->r3, 0XF);
            goto L_8022EB58;
    }
    goto skip_0;
    // 0x8022EB54: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    skip_0:
L_8022EB58:
    // 0x8022EB58: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8022EB5C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EB60: mflo        $s1
    ctx->r17 = lo;
    // 0x8022EB64: nop

    // 0x8022EB68: nop

    // 0x8022EB6C: j           L_8022EC50
    // 0x8022EB70: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
        goto L_8022EC50;
    // 0x8022EB70: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_8022EB74:
    // 0x8022EB74: subu        $t1, $a0, $a3
    ctx->r9 = SUB32(ctx->r4, ctx->r7);
    // 0x8022EB78: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x8022EB7C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022EB80: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022EB84: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EB88: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EB8C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8022EB90: subu        $s5, $v1, $v0
    ctx->r21 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EB94: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022EB98: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EB9C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EBA0: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x8022EBA4: subu        $fp, $v1, $v0
    ctx->r30 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EBA8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022EBAC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022EBB0: lh          $v1, -0x5FF2($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5FF2);
    // 0x8022EBB4: addu        $s7, $s5, $zero
    ctx->r23 = ADD32(ctx->r21, 0);
    // 0x8022EBB8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022EBBC: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x8022EBC0: lhu         $s0, -0x5FF4($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X5FF4);
    // 0x8022EBC4: bgez        $v1, L_8022EBD0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022EBC8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022EBD0;
    }
    // 0x8022EBC8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022EBCC: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_8022EBD0:
    // 0x8022EBD0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022EBD4: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x8022EBD8: lh          $a1, -0x5FF6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5FF6);
    // 0x8022EBDC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022EBE0: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EBE4: mflo        $t0
    ctx->r8 = lo;
    // 0x8022EBE8: nop

    // 0x8022EBEC: nop

    // 0x8022EBF0: bgez        $a1, L_8022EBFC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8022EBF4: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_8022EBFC;
    }
    // 0x8022EBF4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8022EBF8: addiu       $a2, $a1, 0xF
    ctx->r6 = ADD32(ctx->r5, 0XF);
L_8022EBFC:
    // 0x8022EBFC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022EC00: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x8022EC04: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EC08: mflo        $v1
    ctx->r3 = lo;
    // 0x8022EC0C: nop

    // 0x8022EC10: nop

    // 0x8022EC14: bltzl       $a0, L_8022EC1C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022EC18: addiu       $a0, $a0, 0x1F
        ctx->r4 = ADD32(ctx->r4, 0X1F);
            goto L_8022EC1C;
    }
    goto skip_1;
    // 0x8022EC18: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
    skip_1:
L_8022EC1C:
    // 0x8022EC1C: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8022EC20: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EC24: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EC28: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8022EC2C: nop

    // 0x8022EC30: bgez        $a0, L_8022EC3C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022EC34: addu        $s4, $t0, $v0
        ctx->r20 = ADD32(ctx->r8, ctx->r2);
            goto L_8022EC3C;
    }
    // 0x8022EC34: addu        $s4, $t0, $v0
    ctx->r20 = ADD32(ctx->r8, ctx->r2);
    // 0x8022EC38: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
L_8022EC3C:
    // 0x8022EC3C: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8022EC40: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EC44: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EC48: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC4C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_8022EC50:
    // 0x8022EC50: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022EC54: jal         0x800324B4
    // 0x8022EC58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022EC58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EC5C: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x8022EC60: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8022EC64: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EC68: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EC6C: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x8022EC70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC74: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022EC78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC7C: jal         0x80032498
    // 0x8022EC80: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022EC80: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022EC84: nop

    // 0x8022EC88: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EC8C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EC90: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x8022EC94: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022EC98: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x8022EC9C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022ECA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ECA4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8022ECA8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022ECAC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022ECB0: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022ECB4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022ECB8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022ECBC: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x8022ECC0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022ECC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022ECC8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022ECCC: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8022ECD0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022ECD4: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x8022ECD8: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8022ECDC: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x8022ECE0: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x8022ECE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ECE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ECEC: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x8022ECF0: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8022ECF4: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x8022ECF8: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x8022ECFC: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022ED00: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x8022ED04: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022ED08: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x8022ED0C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8022ED10: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022ED14: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x8022ED18: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022ED1C: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x8022ED20: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ED24: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
    // 0x8022ED28: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_8022ED2C:
    // 0x8022ED2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ED30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022ED34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ED38: lh          $v0, -0x5FF8($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5FF8);
    // 0x8022ED3C: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x8022ED40: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022ED44: bne         $v1, $v0, L_8022ED58
    if (ctx->r3 != ctx->r2) {
        // 0x8022ED48: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8022ED58;
    }
    // 0x8022ED48: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8022ED4C: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x8022ED50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ED54: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
L_8022ED58:
    // 0x8022ED58: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022ED5C: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x8022ED60: bne         $v0, $zero, L_8022EAB8
    if (ctx->r2 != 0) {
        // 0x8022ED64: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8022EAB8;
    }
    // 0x8022ED64: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8022ED68: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022ED6C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8022ED70: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8022ED74: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8022ED78: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022ED7C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022ED80: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022ED84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022ED88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022ED8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022ED90: jr          $ra
    // 0x8022ED94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022ED94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8022ED98: nop

    // 0x8022ED9C: nop

;}
RECOMP_FUNC void func_80225EEC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225EF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225EF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225EF8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225EFC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225F00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225F04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F08: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x80225F0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F10: addiu       $v0, $v0, -0x6898
    ctx->r2 = ADD32(ctx->r2, -0X6898);
    // 0x80225F14: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80225F18: jal         0x800A3450
    // 0x80225F1C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80225F1C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80225F20: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225F24: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80225F28: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80225F2C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225F30: addiu       $s0, $s0, -0x6858
    ctx->r16 = ADD32(ctx->r16, -0X6858);
    // 0x80225F34: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80225F38: beq         $v1, $zero, L_80225F54
    if (ctx->r3 == 0) {
        // 0x80225F3C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80225F54;
    }
    // 0x80225F3C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80225F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F44: beq         $v1, $v0, L_80225F74
    if (ctx->r3 == ctx->r2) {
        // 0x80225F48: nop
    
            goto L_80225F74;
    }
    // 0x80225F48: nop

    // 0x80225F4C: j           L_80225F88
    // 0x80225F50: nop

        goto L_80225F88;
    // 0x80225F50: nop

L_80225F54:
    // 0x80225F54: jal         0x80227F38
    // 0x80225F58: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80227F38_ovl27(rdram, ctx);
        goto after_1;
    // 0x80225F58: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80225F5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225F64: jal         0x80227F78
    // 0x80225F68: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80227F78_ovl27(rdram, ctx);
        goto after_2;
    // 0x80225F68: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80225F6C: j           L_80225FE0
    // 0x80225F70: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80225FE0;
    // 0x80225F70: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80225F74:
    // 0x80225F74: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225F78: jal         0x80227F28
    // 0x80225F7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80227F28_ovl27(rdram, ctx);
        goto after_3;
    // 0x80225F7C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80225F80: j           L_80225FE0
    // 0x80225F84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80225FE0;
    // 0x80225F84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80225F88:
    // 0x80225F88: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80225F8C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80225F90: bne         $v1, $v0, L_80225FA0
    if (ctx->r3 != ctx->r2) {
        // 0x80225F94: nop
    
            goto L_80225FA0;
    }
    // 0x80225F94: nop

    // 0x80225F98: j           L_80225FE0
    // 0x80225F9C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80225FE0;
    // 0x80225F9C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80225FA0:
    // 0x80225FA0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225FA4: jal         0x80227F38
    // 0x80225FA8: nop

    func_80227F38_ovl27(rdram, ctx);
        goto after_4;
    // 0x80225FA8: nop

    after_4:
    // 0x80225FAC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80225FB0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80225FB4: beq         $v0, $zero, L_80225FC8
    if (ctx->r2 == 0) {
        // 0x80225FB8: nop
    
            goto L_80225FC8;
    }
    // 0x80225FB8: nop

    // 0x80225FBC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80225FC0: j           L_80225FD8
    // 0x80225FC4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80225FD8;
    // 0x80225FC4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80225FC8:
    // 0x80225FC8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80225FCC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80225FD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225FD4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80225FD8:
    // 0x80225FD8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225FDC: addiu       $s0, $s0, -0x6838
    ctx->r16 = ADD32(ctx->r16, -0X6838);
L_80225FE0:
    // 0x80225FE0: jal         0x800A3450
    // 0x80225FE4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80225FE4: nop

    after_5:
    // 0x80225FE8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225FEC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80225FF0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225FF4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80225FF8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80225FFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226000: beq         $v1, $v0, L_80226018
    if (ctx->r3 == ctx->r2) {
        // 0x80226004: nop
    
            goto L_80226018;
    }
    // 0x80226004: nop

    // 0x80226008: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022600C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226010: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226014: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226018:
    // 0x80226018: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022601C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226020: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226024: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022602C: jr          $ra
    // 0x80226030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231DD0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231DD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231DDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231DE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231DE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231DE8: lw          $v0, -0x5DD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5DD0);
    // 0x80231DEC: jalr        $v0
    // 0x80231DF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231DF0: nop

    after_0:
    // 0x80231DF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231DF8: jr          $ra
    // 0x80231DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802369D0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802369D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802369DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802369E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802369E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802369E8: jal         0x8009A3B4
    // 0x802369EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802369EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802369F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802369F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802369F8: jal         0x8009A3B4
    // 0x802369FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802369FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80236A00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80236A04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80236A08: jal         0x8009A3B4
    // 0x80236A0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236A0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80236A10: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80236A14: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80236A18: bne         $v1, $zero, L_80236A60
    if (ctx->r3 != 0) {
        // 0x80236A1C: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80236A60;
    }
    // 0x80236A1C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236A24: jal         0x8004D5D4
    // 0x80236A28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80236A28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80236A2C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80236A30: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236A34: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236A38: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236A3C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236A40: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236A44: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236A48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236A4C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80236A50: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80236A54: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236A58: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236A5C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80236A60:
    // 0x80236A60: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236A64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236A68: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236A6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236A70: lw          $v0, -0x4390($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4390);
    // 0x80236A74: jalr        $v0
    // 0x80236A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80236A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80236A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236A80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236A84: jr          $ra
    // 0x80236A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B4C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227B5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227B60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B64: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227B68: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227B6C: jal         0x8004FA7C
    // 0x80227B70: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227B70: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80227B74: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227B78: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80227B7C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227B80: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80227B84: beq         $v0, $zero, L_80227B9C
    if (ctx->r2 == 0) {
        // 0x80227B88: nop
    
            goto L_80227B9C;
    }
    // 0x80227B88: nop

    // 0x80227B8C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227B90: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227B94: beq         $v0, $zero, L_80227BE8
    if (ctx->r2 == 0) {
        // 0x80227B98: nop
    
            goto L_80227BE8;
    }
    // 0x80227B98: nop

L_80227B9C:
    // 0x80227B9C: jal         0x8003516C
    // 0x80227BA0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80227BA0: nop

    after_1:
    // 0x80227BA4: bne         $v0, $zero, L_80227BE8
    if (ctx->r2 != 0) {
        // 0x80227BA8: nop
    
            goto L_80227BE8;
    }
    // 0x80227BA8: nop

    // 0x80227BAC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80227BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BB4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80227BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BBC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80227BC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227BC4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80227BC8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227BCC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80227BD0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227BD4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227BD8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80227BDC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80227BE0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227BE4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80227BE8:
    // 0x80227BE8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227BEC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227BF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227BF4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227BFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227C00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C08: jr          $ra
    // 0x80227C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CEBC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CEBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CEC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CEC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CECC: lhu         $v0, 0x378($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X378);
    // 0x8022CED0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CED4: sh          $v0, 0x378($s0)
    MEM_H(0X378, ctx->r16) = ctx->r2;
    // 0x8022CED8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022CEDC: bne         $v0, $zero, L_8022CF34
    if (ctx->r2 != 0) {
        // 0x8022CEE0: nop
    
            goto L_8022CF34;
    }
    // 0x8022CEE0: nop

    // 0x8022CEE4: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x8022CEE8: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x8022CEEC: beq         $a0, $zero, L_8022CF00
    if (ctx->r4 == 0) {
        // 0x8022CEF0: nop
    
            goto L_8022CF00;
    }
    // 0x8022CEF0: nop

    // 0x8022CEF4: jal         0x8002A33C
    // 0x8022CEF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022CEF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022CEFC: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
L_8022CF00:
    // 0x8022CF00: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x8022CF04: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8022CF08: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x8022CF0C: sw          $a1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r5;
    // 0x8022CF10: sh          $v0, 0x378($s0)
    MEM_H(0X378, ctx->r16) = ctx->r2;
    // 0x8022CF14: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x8022CF18: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8022CF1C: bne         $v1, $v0, L_8022CF34
    if (ctx->r3 != ctx->r2) {
        // 0x8022CF20: nop
    
            goto L_8022CF34;
    }
    // 0x8022CF20: nop

    // 0x8022CF24: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8022CF28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CF2C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x8022CF30: sw          $v0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r2;
L_8022CF34:
    // 0x8022CF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF3C: jr          $ra
    // 0x8022CF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227850_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227854: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227858: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022785C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227860: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227864: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227868: lw          $v0, -0x672C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X672C);
    // 0x8022786C: jalr        $v0
    // 0x80227870: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227870: nop

    after_0:
    // 0x80227874: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227878: jr          $ra
    // 0x8022787C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022787C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232FC4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232FCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232FD0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80232FD4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232FD8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80232FDC: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x80232FE0: bne         $v1, $v0, L_80233058
    if (ctx->r3 != ctx->r2) {
        // 0x80232FE4: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80233058;
    }
    // 0x80232FE4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232FE8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80232FEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232FF0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80232FF4: addiu       $v0, $zero, -0x1C2
    ctx->r2 = ADD32(0, -0X1C2);
    // 0x80232FF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232FFC: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233000: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80233004: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233008: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023300C: lui         $v0, 0xFE3E
    ctx->r2 = S32(0XFE3E << 16);
    // 0x80233010: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233014: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80233018: lui         $v0, 0x64
    ctx->r2 = S32(0X64 << 16);
    // 0x8023301C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233020: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80233024: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80233028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023302C: sh          $zero, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = 0;
    // 0x80233030: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233034: sw          $zero, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = 0;
    // 0x80233038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023303C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80233040: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233044: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80233048: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023304C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80233050: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80233054: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_80233058:
    // 0x80233058: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023305C: lhu         $v0, 0x4DE8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DE8);
    // 0x80233060: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80233064: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233068: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8023306C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233070: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233074: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80233078: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x8023307C: slti        $v0, $a0, 0xEC
    ctx->r2 = SIGNED(ctx->r4) < 0XEC ? 1 : 0;
    // 0x80233080: bne         $v0, $zero, L_80233098
    if (ctx->r2 != 0) {
        // 0x80233084: andi        $v0, $a0, 0xF
        ctx->r2 = ctx->r4 & 0XF;
            goto L_80233098;
    }
    // 0x80233084: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80233088: bne         $v0, $zero, L_80233098
    if (ctx->r2 != 0) {
        // 0x8023308C: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_80233098;
    }
    // 0x8023308C: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x80233090: jal         0x8002A33C
    // 0x80233094: addiu       $a1, $s0, 0x438
    ctx->r5 = ADD32(ctx->r16, 0X438);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233094: addiu       $a1, $s0, 0x438
    ctx->r5 = ADD32(ctx->r16, 0X438);
    after_0:
L_80233098:
    // 0x80233098: jal         0x80234148
    // 0x8023309C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x8023309C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802330A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802330A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802330A8: jr          $ra
    // 0x802330AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802330AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269D0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802269D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269D8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802269DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802269E0: bne         $v0, $zero, L_80226A34
    if (ctx->r2 != 0) {
        // 0x802269E4: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226A34;
    }
    // 0x802269E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802269E8: jal         0x80227FC4
    // 0x802269EC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x802269EC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x802269F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802269F4: beq         $v0, $zero, L_80226A30
    if (ctx->r2 == 0) {
        // 0x802269F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226A30;
    }
    // 0x802269F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226A00: jal         0x80227F38
    // 0x80226A04: nop

    func_80227F38_ovl27(rdram, ctx);
        goto after_1;
    // 0x80226A04: nop

    after_1:
    // 0x80226A08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226A0C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226A10: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80226A14: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226A18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226A1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226A20: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226A24: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226A28: j           L_80226A34
    // 0x80226A2C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80226A34;
    // 0x80226A2C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80226A30:
    // 0x80226A30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226A34:
    // 0x80226A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A3C: jr          $ra
    // 0x80226A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1A8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C1AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C1B8: lhu         $v1, 0x35E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022C1BC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022C1C0: beq         $v1, $zero, L_8022C1E0
    if (ctx->r3 == 0) {
        // 0x8022C1C4: sh          $v0, 0x35E($s0)
        MEM_H(0X35E, ctx->r16) = ctx->r2;
            goto L_8022C1E0;
    }
    // 0x8022C1C4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022C1C8: jal         0x8022CEBC
    // 0x8022C1CC: nop

    func_8022CEBC_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022C1CC: nop

    after_0:
    // 0x8022C1D0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C1D4: bgez        $v0, L_8022C1E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C1D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C1E0;
    }
    // 0x8022C1D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1DC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C1E0:
    // 0x8022C1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C1E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C1E8: jr          $ra
    // 0x8022C1EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C1EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237FB8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237FC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237FC8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237FCC: beq         $v1, $zero, L_80237FE4
    if (ctx->r3 == 0) {
        // 0x80237FD0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237FE4;
    }
    // 0x80237FD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237FD4: beq         $v1, $v0, L_80238000
    if (ctx->r3 == ctx->r2) {
        // 0x80237FD8: nop
    
            goto L_80238000;
    }
    // 0x80237FD8: nop

    // 0x80237FDC: j           L_80238014
    // 0x80237FE0: nop

        goto L_80238014;
    // 0x80237FE0: nop

L_80237FE4:
    // 0x80237FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237FE8: addiu       $v0, $zero, -0x4E2
    ctx->r2 = ADD32(0, -0X4E2);
    // 0x80237FEC: jal         0x8005044C
    // 0x80237FF0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80237FF0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237FF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237FF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237FFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238000:
    // 0x80238000: jal         0x8005044C
    // 0x80238004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80238004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238008: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023800C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238010: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80238014:
    // 0x80238014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023801C: jr          $ra
    // 0x80238020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233A2C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233A30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233A34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233A38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233A3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233A40: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233A44: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80233A48: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80233A4C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80233A50: beq         $v1, $v0, L_80233AB0
    if (ctx->r3 == ctx->r2) {
        // 0x80233A54: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_80233AB0;
    }
    // 0x80233A54: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x80233A58: beq         $v0, $zero, L_80233ABC
    if (ctx->r2 == 0) {
        // 0x80233A5C: nop
    
            goto L_80233ABC;
    }
    // 0x80233A5C: nop

    // 0x80233A60: beq         $v1, $zero, L_80233A78
    if (ctx->r3 == 0) {
        // 0x80233A64: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80233A78;
    }
    // 0x80233A64: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233A68: beq         $v1, $v0, L_80233AA0
    if (ctx->r3 == ctx->r2) {
        // 0x80233A6C: nop
    
            goto L_80233AA0;
    }
    // 0x80233A6C: nop

    // 0x80233A70: j           L_80233ABC
    // 0x80233A74: nop

        goto L_80233ABC;
    // 0x80233A74: nop

L_80233A78:
    // 0x80233A78: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x80233A7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233A80: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233A84: jal         0x802340E8
    // 0x80233A88: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233A88: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x80233A8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80233A90: jal         0x80234028
    // 0x80233A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234028_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80233A98: j           L_80233ABC
    // 0x80233A9C: nop

        goto L_80233ABC;
    // 0x80233A9C: nop

L_80233AA0:
    // 0x80233AA0: jal         0x802340E8
    // 0x80233AA4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_802340E8_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233AA4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_2:
    // 0x80233AA8: j           L_80233ABC
    // 0x80233AAC: nop

        goto L_80233ABC;
    // 0x80233AAC: nop

L_80233AB0:
    // 0x80233AB0: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80233AB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233AB8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80233ABC:
    // 0x80233ABC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233AC0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233AC4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233AC8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233ACC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233AD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233AD4: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233AD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233ADC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233AE0: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    // 0x80233AE4: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80233AE8: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80233AEC: bne         $v0, $zero, L_80233B0C
    if (ctx->r2 != 0) {
        // 0x80233AF0: nop
    
            goto L_80233B0C;
    }
    // 0x80233AF0: nop

    // 0x80233AF4: lhu         $v0, 0x43C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X43C);
    // 0x80233AF8: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x80233AFC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80233B00: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233B04: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x80233B08: sw          $v1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r3;
L_80233B0C:
    // 0x80233B0C: jal         0x80234148
    // 0x80233B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234148_ovl27(rdram, ctx);
        goto after_3;
    // 0x80233B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233B14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233B18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233B1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B20: jr          $ra
    // 0x80233B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E010_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E014: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E018: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E01C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022E020: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E024: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022E028: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022E02C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022E030: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x8022E034: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8022E038: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E03C: jal         0x8009A3B4
    // 0x8022E040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E044: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E048: jr          $ra
    // 0x8022E04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802335B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802335B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802335B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802335B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802335BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802335C0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802335C4: bne         $v0, $zero, L_80233608
    if (ctx->r2 != 0) {
        // 0x802335C8: addiu       $v0, $zero, -0xB4
        ctx->r2 = ADD32(0, -0XB4);
            goto L_80233608;
    }
    // 0x802335C8: addiu       $v0, $zero, -0xB4
    ctx->r2 = ADD32(0, -0XB4);
    // 0x802335CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802335D0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x802335D4: lui         $v0, 0xFF4C
    ctx->r2 = S32(0XFF4C << 16);
    // 0x802335D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802335DC: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802335E0: addiu       $v0, $zero, 0x86
    ctx->r2 = ADD32(0, 0X86);
    // 0x802335E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802335E8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802335EC: jal         0x802340E8
    // 0x802335F0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x802335F0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x802335F4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802335F8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802335FC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233600: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80233604: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233608:
    // 0x80233608: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023360C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80233610: bne         $v1, $v0, L_80233620
    if (ctx->r3 != ctx->r2) {
        // 0x80233614: nop
    
            goto L_80233620;
    }
    // 0x80233614: nop

    // 0x80233618: jal         0x802340E8
    // 0x8023361C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_802340E8_ovl27(rdram, ctx);
        goto after_1;
    // 0x8023361C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
L_80233620:
    // 0x80233620: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233624: jal         0x80234148
    // 0x80233628: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233628: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x8023362C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233630: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233634: jr          $ra
    // 0x80233638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023333C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023333C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233340: bne         $v0, $zero, L_80233370
    if (ctx->r2 != 0) {
        // 0x80233344: addiu       $v0, $zero, -0x5
        ctx->r2 = ADD32(0, -0X5);
            goto L_80233370;
    }
    // 0x80233344: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x80233348: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023334C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80233350: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x80233354: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233358: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023335C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80233360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233364: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233368: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023336C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233370:
    // 0x80233370: jr          $ra
    // 0x80233374: nop

    TRACE_RETURN()
    return;
    // 0x80233374: nop

;}
RECOMP_FUNC void func_80234950_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234954: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80234958: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023495C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80234960: bne         $v0, $zero, L_80234970
    if (ctx->r2 != 0) {
        // 0x80234964: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80234970;
    }
    // 0x80234964: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023496C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80234970:
    // 0x80234970: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80234974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234978: bne         $v1, $v0, L_802349DC
    if (ctx->r3 != ctx->r2) {
        // 0x8023497C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802349DC;
    }
    // 0x8023497C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234980: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234984: lw          $v0, -0x4A30($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A30);
    // 0x80234988: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023498C: lw          $a0, -0x4938($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4938);
    // 0x80234990: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80234994: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234998: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x8023499C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349A0: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x802349A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349A8: sb          $v1, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r3;
    // 0x802349AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349B0: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x802349B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349B8: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x802349BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349C0: sb          $v1, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r3;
    // 0x802349C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349C8: sw          $v0, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r2;
    // 0x802349CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349D0: sw          $a0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r4;
    // 0x802349D4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802349D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802349DC:
    // 0x802349DC: bne         $v1, $v0, L_80234A40
    if (ctx->r3 != ctx->r2) {
        // 0x802349E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80234A40;
    }
    // 0x802349E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802349E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802349E8: lw          $v1, -0x4A2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4A2C);
    // 0x802349EC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802349F0: lw          $a0, -0x4934($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4934);
    // 0x802349F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802349F8: sb          $v0, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r2;
    // 0x802349FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A00: sb          $v0, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r2;
    // 0x80234A04: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x80234A08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A0C: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x80234A10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A14: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x80234A18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A1C: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x80234A20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A24: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x80234A28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234A2C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80234A30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A34: sw          $v1, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r3;
    // 0x80234A38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A3C: sw          $a0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r4;
L_80234A40:
    // 0x80234A40: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80234A44: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80234A48: bne         $v1, $v0, L_80234A7C
    if (ctx->r3 != ctx->r2) {
        // 0x80234A4C: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80234A7C;
    }
    // 0x80234A4C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80234A50: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80234A54: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234A58: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234A5C: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x80234A60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80234A64: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234A68: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80234A6C: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x80234A70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234A74: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234A78: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234A7C:
    // 0x80234A7C: jal         0x80234340
    // 0x80234A80: nop

    func_80234340_ovl27(rdram, ctx);
        goto after_0;
    // 0x80234A80: nop

    after_0:
    // 0x80234A84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234A88: jr          $ra
    // 0x80234A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802313B4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802313B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802313B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802313BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802313C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802313C4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802313C8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802313CC: bne         $v0, $zero, L_802314B0
    if (ctx->r2 != 0) {
        // 0x802313D0: nop
    
            goto L_802314B0;
    }
    // 0x802313D0: nop

    // 0x802313D4: jal         0x8004F144
    // 0x802313D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802313D8: nop

    after_0:
    // 0x802313DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802313E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802313E4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802313E8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802313EC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802313F0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802313F4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802313F8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802313FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231400: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80231404: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80231408: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023140C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80231410: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231414: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x80231418: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8023141C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231420: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80231424: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80231428: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8023142C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231430: bne         $v1, $v0, L_8023144C
    if (ctx->r3 != ctx->r2) {
        // 0x80231434: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_8023144C;
    }
    // 0x80231434: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80231438: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8023143C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80231440: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80231444: j           L_8023147C
    // 0x80231448: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
        goto L_8023147C;
    // 0x80231448: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
L_8023144C:
    // 0x8023144C: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80231450: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80231454: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80231458: lui         $v1, 0xAE00
    ctx->r3 = S32(0XAE00 << 16);
    // 0x8023145C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80231460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231464: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231468: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023146C: lw          $v0, -0x5E10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E10);
    // 0x80231470: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80231474: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80231478: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8023147C:
    // 0x8023147C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80231480: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80231484: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80231488: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8023148C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80231490: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80231494: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231498: bne         $v1, $zero, L_802314A8
    if (ctx->r3 != 0) {
        // 0x8023149C: sh          $v0, 0x24($a0)
        MEM_H(0X24, ctx->r4) = ctx->r2;
            goto L_802314A8;
    }
    // 0x8023149C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x802314A0: j           L_802314AC
    // 0x802314A4: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
        goto L_802314AC;
    // 0x802314A4: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_802314A8:
    // 0x802314A8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_802314AC:
    // 0x802314AC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_802314B0:
    // 0x802314B0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802314B4: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x802314B8: bne         $v0, $zero, L_802314D0
    if (ctx->r2 != 0) {
        // 0x802314BC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802314D0;
    }
    // 0x802314BC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802314C0: jal         0x8004F5C4
    // 0x802314C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x802314C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802314C8: j           L_802314D4
    // 0x802314CC: nop

        goto L_802314D4;
    // 0x802314CC: nop

L_802314D0:
    // 0x802314D0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802314D4:
    // 0x802314D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802314D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802314DC: jr          $ra
    // 0x802314E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802314E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225528_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022552C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225538: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022553C: bne         $v0, $zero, L_80225558
    if (ctx->r2 != 0) {
        // 0x80225540: nop
    
            goto L_80225558;
    }
    // 0x80225540: nop

    // 0x80225544: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225548: jal         0x800607C4
    // 0x8022554C: addiu       $a0, $a0, -0x6F38
    ctx->r4 = ADD32(ctx->r4, -0X6F38);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022554C: addiu       $a0, $a0, -0x6F38
    ctx->r4 = ADD32(ctx->r4, -0X6F38);
    after_0:
    // 0x80225550: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225554: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225558:
    // 0x80225558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022555C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225560: jr          $ra
    // 0x80225564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236DE0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236DE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236DE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236DEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236DF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236DF4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236DF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236DFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236E00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236E04: lw          $v0, -0x4370($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4370);
    // 0x80236E08: jalr        $v0
    // 0x80236E0C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236E0C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80236E10: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236E14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236E18: jal         0x8009A3B4
    // 0x80236E1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236E1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236E20: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236E24: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236E28: jal         0x8009A3B4
    // 0x80236E2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236E2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80236E30: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80236E34: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80236E38: jal         0x8009A3B4
    // 0x80236E3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80236E3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80236E40: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80236E44: bne         $v0, $zero, L_80236E5C
    if (ctx->r2 != 0) {
        // 0x80236E48: nop
    
            goto L_80236E5C;
    }
    // 0x80236E48: nop

    // 0x80236E4C: jal         0x8005044C
    // 0x80236E50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80236E50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80236E54: j           L_80236E70
    // 0x80236E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236E70;
    // 0x80236E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236E5C:
    // 0x80236E5C: jal         0x80051770
    // 0x80236E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x80236E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80236E64: jal         0x80051248
    // 0x80236E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x80236E68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80236E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236E70:
    // 0x80236E70: jal         0x802370D8
    // 0x80236E74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802370D8_ovl27(rdram, ctx);
        goto after_7;
    // 0x80236E74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80236E78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236E7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236E80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236E84: jr          $ra
    // 0x80236E88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236E88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802342A4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802342A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802342A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802342AC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802342B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802342B4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802342B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802342BC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802342C0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802342C4: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x802342C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802342CC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802342D0: addiu       $s1, $s1, -0x3790
    ctx->r17 = ADD32(ctx->r17, -0X3790);
    // 0x802342D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_802342D8:
    // 0x802342D8: jal         0x8004F144
    // 0x802342DC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802342DC: nop

    after_0:
    // 0x802342E0: beql        $v0, $zero, L_80234314
    if (ctx->r2 == 0) {
        // 0x802342E4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80234314;
    }
    goto skip_0;
    // 0x802342E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802342E8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x802342EC: sb          $s2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r18;
    // 0x802342F0: sb          $s4, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r20;
    // 0x802342F4: sb          $s3, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r19;
    // 0x802342F8: sb          $s0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r16;
    // 0x802342FC: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80234300: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80234304: sb          $s2, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r18;
    // 0x80234308: sb          $s0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r16;
    // 0x8023430C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80234310: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80234314:
    // 0x80234314: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80234318: bne         $v0, $zero, L_802342D8
    if (ctx->r2 != 0) {
        // 0x8023431C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802342D8;
    }
    // 0x8023431C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80234320: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234324: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234328: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023432C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234330: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234334: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234338: jr          $ra
    // 0x8023433C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023433C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229CF8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CF8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80229CFC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80229D00: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80229D04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80229D08: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80229D0C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80229D10: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80229D14: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229D18: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229D1C: jal         0x8022B02C
    // 0x80229D20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_8022B02C_ovl27(rdram, ctx);
        goto after_0;
    // 0x80229D20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80229D24: lbu         $v1, 0x8($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8);
    // 0x80229D28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229D2C: beq         $v1, $v0, L_8022A1C4
    if (ctx->r3 == ctx->r2) {
        // 0x80229D30: addiu       $s5, $s4, 0x2E8
        ctx->r21 = ADD32(ctx->r20, 0X2E8);
            goto L_8022A1C4;
    }
    // 0x80229D30: addiu       $s5, $s4, 0x2E8
    ctx->r21 = ADD32(ctx->r20, 0X2E8);
    // 0x80229D34: lbu         $v0, 0x363($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X363);
    // 0x80229D38: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229D3C: beql        $v0, $zero, L_80229D50
    if (ctx->r2 == 0) {
        // 0x80229D40: addiu       $a0, $s4, 0x334
        ctx->r4 = ADD32(ctx->r20, 0X334);
            goto L_80229D50;
    }
    goto skip_0;
    // 0x80229D40: addiu       $a0, $s4, 0x334
    ctx->r4 = ADD32(ctx->r20, 0X334);
    skip_0:
    // 0x80229D44: jal         0x8022B340
    // 0x80229D48: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8022B340_ovl27(rdram, ctx);
        goto after_1;
    // 0x80229D48: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_1:
    // 0x80229D4C: addiu       $a0, $s4, 0x334
    ctx->r4 = ADD32(ctx->r20, 0X334);
L_80229D50:
    // 0x80229D50: jal         0x800540D0
    // 0x80229D54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_2;
    // 0x80229D54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x80229D58: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80229D5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229D64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229D68: lw          $v0, -0x656C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X656C);
    // 0x80229D6C: jalr        $v0
    // 0x80229D70: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80229D70: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_3:
    // 0x80229D74: lb          $v1, 0x366($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X366);
    // 0x80229D78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229D7C: beq         $v1, $v0, L_80229DB0
    if (ctx->r3 == ctx->r2) {
        // 0x80229D80: nop
    
            goto L_80229DB0;
    }
    // 0x80229D80: nop

    // 0x80229D84: lbu         $v0, 0x363($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X363);
    // 0x80229D88: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229D8C: beq         $v0, $zero, L_80229DB0
    if (ctx->r2 == 0) {
        // 0x80229D90: nop
    
            goto L_80229DB0;
    }
    // 0x80229D90: nop

    // 0x80229D94: lbu         $v0, 0x365($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X365);
    // 0x80229D98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229DA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229DA4: lw          $v0, -0x6574($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6574);
    // 0x80229DA8: jalr        $v0
    // 0x80229DAC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229DAC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
L_80229DB0:
    // 0x80229DB0: jal         0x800504EC
    // 0x80229DB4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_5;
    // 0x80229DB4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_5:
    // 0x80229DB8: lhu         $v0, 0x68($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X68);
    // 0x80229DBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229DC0: sh          $v0, -0x3D6E($at)
    MEM_H(-0X3D6E, ctx->r1) = ctx->r2;
    // 0x80229DC4: lhu         $v0, 0x6A($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X6A);
    // 0x80229DC8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229DCC: sh          $v0, -0x3D56($at)
    MEM_H(-0X3D56, ctx->r1) = ctx->r2;
    // 0x80229DD0: jal         0x80051248
    // 0x80229DD4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x80229DD4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80229DD8: addiu       $s6, $s5, 0x1C
    ctx->r22 = ADD32(ctx->r21, 0X1C);
    // 0x80229DDC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229DE0: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80229DE4: jal         0x8009A3B4
    // 0x80229DE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80229DE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80229DEC: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229DF0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229DF4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80229DF8: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80229DFC: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229E00: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80229E04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229E08: addiu       $v0, $s5, 0x2C
    ctx->r2 = ADD32(ctx->r21, 0X2C);
    // 0x80229E0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229E10: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229E14: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x80229E18: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229E1C: lui         $s2, 0x508
    ctx->r18 = S32(0X508 << 16);
    // 0x80229E20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229E24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229E28: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80229E2C: jal         0x80051E18
    // 0x80229E30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x80229E30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x80229E34: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229E38: addiu       $a1, $s4, 0x188
    ctx->r5 = ADD32(ctx->r20, 0X188);
    // 0x80229E3C: jal         0x8009A3B4
    // 0x80229E40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80229E40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80229E44: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229E48: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229E4C: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x80229E50: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80229E54: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229E58: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80229E5C: addiu       $s1, $s5, 0x44
    ctx->r17 = ADD32(ctx->r21, 0X44);
    // 0x80229E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229E64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229E6C: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x80229E70: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229E74: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x80229E78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229E7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229E80: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80229E84: jal         0x80051E18
    // 0x80229E88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x80229E88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x80229E8C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229E90: addiu       $a1, $s4, 0x190
    ctx->r5 = ADD32(ctx->r20, 0X190);
    // 0x80229E94: jal         0x8009A3B4
    // 0x80229E98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80229E98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80229E9C: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229EA0: addiu       $v0, $v0, 0x59
    ctx->r2 = ADD32(ctx->r2, 0X59);
    // 0x80229EA4: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229EA8: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80229EAC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229EB0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80229EB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229EB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229EBC: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x80229EC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229EC4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229EC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229ECC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229ED0: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80229ED4: jal         0x80051E18
    // 0x80229ED8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80229ED8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x80229EDC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229EE0: addiu       $a1, $s4, 0x1A8
    ctx->r5 = ADD32(ctx->r20, 0X1A8);
    // 0x80229EE4: jal         0x8009A3B4
    // 0x80229EE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80229EE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80229EEC: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229EF0: addiu       $v0, $v0, 0x59
    ctx->r2 = ADD32(ctx->r2, 0X59);
    // 0x80229EF4: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229EF8: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80229EFC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229F00: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80229F04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229F08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229F0C: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x80229F10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229F14: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229F18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229F1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229F20: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80229F24: jal         0x80051E18
    // 0x80229F28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_14;
    // 0x80229F28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_14:
    // 0x80229F2C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229F30: addiu       $a1, $s4, 0x198
    ctx->r5 = ADD32(ctx->r20, 0X198);
    // 0x80229F34: jal         0x8009A3B4
    // 0x80229F38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80229F38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x80229F3C: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229F40: lh          $v1, 0x20($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X20);
    // 0x80229F44: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229F48: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80229F4C: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229F50: lh          $v0, 0x1C($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X1C);
    // 0x80229F54: lh          $a1, 0x1E($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X1E);
    // 0x80229F58: addiu       $s3, $s5, 0xC
    ctx->r19 = ADD32(ctx->r21, 0XC);
    // 0x80229F5C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229F60: sw          $v1, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r3;
    // 0x80229F64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F68: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80229F6C: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x80229F70: sw          $a1, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r5;
    // 0x80229F74: lhu         $a2, 0x56($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X56);
    // 0x80229F78: addiu       $a3, $zero, 0x2C0
    ctx->r7 = ADD32(0, 0X2C0);
    // 0x80229F7C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80229F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229F84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80229F88: jal         0x8004DBA0
    // 0x80229F8C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_16;
    // 0x80229F8C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x80229F90: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80229F94: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229F98: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    // 0x80229F9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229FA0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229FA4: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x80229FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229FAC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229FB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229FB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229FB8: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x80229FBC: jal         0x80051E18
    // 0x80229FC0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_17;
    // 0x80229FC0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_17:
    // 0x80229FC4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229FC8: addiu       $a1, $s4, 0x1B0
    ctx->r5 = ADD32(ctx->r20, 0X1B0);
    // 0x80229FCC: jal         0x8009A3B4
    // 0x80229FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x80229FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x80229FD4: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80229FD8: lh          $v1, 0x20($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X20);
    // 0x80229FDC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80229FE0: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x80229FE4: lh          $v0, 0x1C($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X1C);
    // 0x80229FE8: lh          $a1, 0x1E($s5)
    ctx->r5 = MEM_H(ctx->r21, 0X1E);
    // 0x80229FEC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80229FF0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229FF4: sw          $v1, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r3;
    // 0x80229FF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FFC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022A000: sw          $v0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r2;
    // 0x8022A004: sw          $a1, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r5;
    // 0x8022A008: lhu         $a2, 0x56($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X56);
    // 0x8022A00C: addiu       $a3, $zero, 0x2C0
    ctx->r7 = ADD32(0, 0X2C0);
    // 0x8022A010: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022A014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A018: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022A01C: jal         0x8004DBA0
    // 0x8022A020: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_19;
    // 0x8022A020: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_19:
    // 0x8022A024: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022A028: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8022A02C: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    // 0x8022A030: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A034: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A038: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x8022A03C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A040: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A044: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022A048: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A04C: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x8022A050: jal         0x80051E18
    // 0x8022A054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8022A054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
    // 0x8022A058: lh          $v0, 0x70($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X70);
    // 0x8022A05C: blez        $v0, L_8022A0B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A060: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_8022A0B8;
    }
    // 0x8022A060: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8022A064: addiu       $a1, $s4, 0x1A0
    ctx->r5 = ADD32(ctx->r20, 0X1A0);
    // 0x8022A068: jal         0x8009A3B4
    // 0x8022A06C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x8022A06C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x8022A070: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x8022A074: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8022A078: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8022A07C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A080: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x8022A084: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022A088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A08C: addiu       $v0, $s5, 0x34
    ctx->r2 = ADD32(ctx->r21, 0X34);
    // 0x8022A090: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A094: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022A098: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022A09C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A0A0: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022A0A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022A0A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022A0AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022A0B0: jal         0x80051E18
    // 0x8022A0B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_22;
    // 0x8022A0B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_22:
L_8022A0B8:
    // 0x8022A0B8: lh          $v0, 0x72($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X72);
    // 0x8022A0BC: blez        $v0, L_8022A118
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A0C0: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_8022A118;
    }
    // 0x8022A0C0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8022A0C4: addiu       $a1, $s4, 0x1B8
    ctx->r5 = ADD32(ctx->r20, 0X1B8);
    // 0x8022A0C8: jal         0x8009A3B4
    // 0x8022A0CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x8022A0CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x8022A0D0: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x8022A0D4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8022A0D8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8022A0DC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A0E0: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x8022A0E4: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022A0E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A0EC: addiu       $v0, $s5, 0x3C
    ctx->r2 = ADD32(ctx->r21, 0X3C);
    // 0x8022A0F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A0F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022A0F8: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022A0FC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A100: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022A104: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022A108: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022A10C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022A110: jal         0x80051E18
    // 0x8022A114: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x8022A114: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_24:
L_8022A118:
    // 0x8022A118: lbu         $v0, 0xA6($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA6);
    // 0x8022A11C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A120: bne         $v0, $zero, L_8022A138
    if (ctx->r2 != 0) {
        // 0x8022A124: nop
    
            goto L_8022A138;
    }
    // 0x8022A124: nop

    // 0x8022A128: lbu         $v0, 0x7B($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7B);
    // 0x8022A12C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A130: beq         $v0, $zero, L_8022A1A0
    if (ctx->r2 == 0) {
        // 0x8022A134: nop
    
            goto L_8022A1A0;
    }
    // 0x8022A134: nop

L_8022A138:
    // 0x8022A138: lbu         $v0, 0x7B($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7B);
    // 0x8022A13C: andi        $v1, $v0, 0xFD
    ctx->r3 = ctx->r2 & 0XFD;
    // 0x8022A140: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A144: beq         $v0, $zero, L_8022A16C
    if (ctx->r2 == 0) {
        // 0x8022A148: sb          $v1, 0x7B($s5)
        MEM_B(0X7B, ctx->r21) = ctx->r3;
            goto L_8022A16C;
    }
    // 0x8022A148: sb          $v1, 0x7B($s5)
    MEM_B(0X7B, ctx->r21) = ctx->r3;
    // 0x8022A14C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A150: lbu         $v0, 0x434F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434F);
    // 0x8022A154: bne         $v0, $zero, L_8022A194
    if (ctx->r2 != 0) {
        // 0x8022A158: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_8022A194;
    }
    // 0x8022A158: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8022A15C: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022A160: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022A164: j           L_8022A18C
    // 0x8022A168: addiu       $a3, $s4, 0x14
    ctx->r7 = ADD32(ctx->r20, 0X14);
        goto L_8022A18C;
    // 0x8022A168: addiu       $a3, $s4, 0x14
    ctx->r7 = ADD32(ctx->r20, 0X14);
L_8022A16C:
    // 0x8022A16C: addiu       $a0, $zero, 0x1B0
    ctx->r4 = ADD32(0, 0X1B0);
    // 0x8022A170: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022A174: jal         0x8002A33C
    // 0x8022A178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_25;
    // 0x8022A178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_25:
    // 0x8022A17C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8022A180: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022A184: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022A188: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
L_8022A18C:
    // 0x8022A18C: jal         0x8003491C
    // 0x8022A190: nop

    func_8003491C_FD1C(rdram, ctx);
        goto after_26;
    // 0x8022A190: nop

    after_26:
L_8022A194:
    // 0x8022A194: lbu         $v0, 0x7B($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7B);
    // 0x8022A198: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A19C: sb          $v0, 0x7B($s5)
    MEM_B(0X7B, ctx->r21) = ctx->r2;
L_8022A1A0:
    // 0x8022A1A0: lbu         $v0, 0xA6($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA6);
    // 0x8022A1A4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022A1A8: beq         $v0, $zero, L_8022A1D4
    if (ctx->r2 == 0) {
        // 0x8022A1AC: nop
    
            goto L_8022A1D4;
    }
    // 0x8022A1AC: nop

    // 0x8022A1B0: lbu         $v0, 0x7B($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X7B);
    // 0x8022A1B4: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022A1B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A1BC: j           L_8022A1D4
    // 0x8022A1C0: sb          $v0, 0x7B($s5)
    MEM_B(0X7B, ctx->r21) = ctx->r2;
        goto L_8022A1D4;
    // 0x8022A1C0: sb          $v0, 0x7B($s5)
    MEM_B(0X7B, ctx->r21) = ctx->r2;
L_8022A1C4:
    // 0x8022A1C4: jal         0x800504EC
    // 0x8022A1C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_27;
    // 0x8022A1C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_27:
    // 0x8022A1CC: jal         0x80051248
    // 0x8022A1D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_28;
    // 0x8022A1D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_28:
L_8022A1D4:
    // 0x8022A1D4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A1D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A1DC: beq         $v0, $zero, L_8022A1F4
    if (ctx->r2 == 0) {
        // 0x8022A1E0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022A1F4;
    }
    // 0x8022A1E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022A1E4: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x8022A1E8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A1EC: jal         0x8003B564
    // 0x8022A1F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_29;
    // 0x8022A1F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_29:
L_8022A1F4:
    // 0x8022A1F4: sw          $zero, 0x2C($s5)
    MEM_W(0X2C, ctx->r21) = 0;
    // 0x8022A1F8: sw          $zero, 0x34($s5)
    MEM_W(0X34, ctx->r21) = 0;
    // 0x8022A1FC: sw          $zero, 0x3C($s5)
    MEM_W(0X3C, ctx->r21) = 0;
    // 0x8022A200: sw          $zero, 0x44($s5)
    MEM_W(0X44, ctx->r21) = 0;
    // 0x8022A204: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022A208: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022A20C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A210: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022A214: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022A218: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A21C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A220: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A224: jr          $ra
    // 0x8022A228: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022A228: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80228B74_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B74: lh          $v0, 0x330($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X330);
    // 0x80228B78: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80228B7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228B80: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80228B84: bne         $v0, $zero, L_80228B9C
    if (ctx->r2 != 0) {
        // 0x80228B88: addiu       $a1, $a0, 0x2C8
        ctx->r5 = ADD32(ctx->r4, 0X2C8);
            goto L_80228B9C;
    }
    // 0x80228B88: addiu       $a1, $a0, 0x2C8
    ctx->r5 = ADD32(ctx->r4, 0X2C8);
    // 0x80228B8C: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80228B90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228B94: j           L_80228BAC
    // 0x80228B98: sh          $v0, 0x330($a0)
    MEM_H(0X330, ctx->r4) = ctx->r2;
        goto L_80228BAC;
    // 0x80228B98: sh          $v0, 0x330($a0)
    MEM_H(0X330, ctx->r4) = ctx->r2;
L_80228B9C:
    // 0x80228B9C: lbu         $v0, 0x34A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34A);
    // 0x80228BA0: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
    // 0x80228BA4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228BA8: sb          $v0, 0x34A($a0)
    MEM_B(0X34A, ctx->r4) = ctx->r2;
L_80228BAC:
    // 0x80228BAC: lh          $v0, 0x6A($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X6A);
    // 0x80228BB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228BB4: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80228BB8: bne         $v0, $zero, L_80228BCC
    if (ctx->r2 != 0) {
        // 0x80228BBC: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80228BCC;
    }
    // 0x80228BBC: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80228BC0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228BC4: j           L_80228BDC
    // 0x80228BC8: sh          $v0, 0x6A($a1)
    MEM_H(0X6A, ctx->r5) = ctx->r2;
        goto L_80228BDC;
    // 0x80228BC8: sh          $v0, 0x6A($a1)
    MEM_H(0X6A, ctx->r5) = ctx->r2;
L_80228BCC:
    // 0x80228BCC: lbu         $v0, 0x82($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X82);
    // 0x80228BD0: sh          $zero, 0x6A($a1)
    MEM_H(0X6A, ctx->r5) = 0;
    // 0x80228BD4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228BD8: sb          $v0, 0x82($a1)
    MEM_B(0X82, ctx->r5) = ctx->r2;
L_80228BDC:
    // 0x80228BDC: lbu         $v1, 0x82($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X82);
    // 0x80228BE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228BE4: bne         $v1, $v0, L_80228BF4
    if (ctx->r3 != ctx->r2) {
        // 0x80228BE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228BF4;
    }
    // 0x80228BE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228BEC: sb          $zero, 0x82($a1)
    MEM_B(0X82, ctx->r5) = 0;
    // 0x80228BF0: sb          $v0, 0x81($a1)
    MEM_B(0X81, ctx->r5) = ctx->r2;
L_80228BF4:
    // 0x80228BF4: jr          $ra
    // 0x80228BF8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80228BF8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80235E60_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235E64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235E68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235E6C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235E70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235E74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80235E7C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235E80: jal         0x8009A3B4
    // 0x80235E84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235E84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80235E88: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235E8C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235E90: jal         0x8009A3B4
    // 0x80235E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80235E98: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235E9C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80235EA0: jal         0x8009A3B4
    // 0x80235EA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235EA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235EA8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80235EAC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80235EB0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235EB4: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80235EB8: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x80235EBC: bne         $v0, $zero, L_80235F2C
    if (ctx->r2 != 0) {
        // 0x80235EC0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235F2C;
    }
    // 0x80235EC0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235EC8: jal         0x8004D5D4
    // 0x80235ECC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80235ECC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80235ED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235ED4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235ED8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235EDC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235EE0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235EE4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235EE8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235EEC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235EF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235EF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80235EF8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80235EFC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235F00: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80235F04: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    // 0x80235F08: jal         0x8023629C
    // 0x80235F0C: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    func_8023629C_ovl27(rdram, ctx);
        goto after_4;
    // 0x80235F0C: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    after_4:
    // 0x80235F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235F14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235F18: jal         0x802362C4
    // 0x80235F1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802362C4_ovl27(rdram, ctx);
        goto after_5;
    // 0x80235F1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80235F20: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235F24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235F2C:
    // 0x80235F2C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235F30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F3C: lw          $v0, -0x43C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X43C0);
    // 0x80235F40: jalr        $v0
    // 0x80235F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80235F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80235F48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235F4C: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80235F50: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x80235F54: beq         $v0, $zero, L_8023626C
    if (ctx->r2 == 0) {
        // 0x80235F58: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023626C;
    }
    // 0x80235F58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235F5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F60: addu        $at, $at, $v0
    gpr jr_addend_80235F68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F64: lw          $v0, -0x3860($at)
    ctx->r2 = ADD32(ctx->r1, -0X3860);
    // 0x80235F68: jr          $v0
    // 0x80235F6C: nop

    switch (jr_addend_80235F68 >> 2) {
        case 0: goto L_80235F70; break;
        case 1: goto L_8023626C; break;
        case 2: goto L_8023626C; break;
        case 3: goto L_8023626C; break;
        case 4: goto L_8023626C; break;
        case 5: goto L_8023626C; break;
        case 6: goto L_8023626C; break;
        case 7: goto L_80235FA4; break;
        case 8: goto L_8023626C; break;
        case 9: goto L_80235FF8; break;
        case 10: goto L_8023626C; break;
        case 11: goto L_80236058; break;
        case 12: goto L_802360C8; break;
        case 13: goto L_8023626C; break;
        case 14: goto L_80236138; break;
        case 15: goto L_8023626C; break;
        case 16: goto L_80236194; break;
        case 17: goto L_8023623C; break;
        default: switch_error(__func__, 0x80235F68, 0x8023C7A0);
    }
    // 0x80235F6C: nop

L_80235F70:
    // 0x80235F70: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80235F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235F78: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80235F7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80235F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235F80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235F84: jal         0x802362C4
    // 0x80235F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802362C4_ovl27(rdram, ctx);
        goto after_7;
    // 0x80235F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80235F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235F90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235F94: jal         0x8023629C
    // 0x80235F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023629C_ovl27(rdram, ctx);
        goto after_8;
    // 0x80235F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x80235F9C: j           L_80236270
    // 0x80235FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236270;
    // 0x80235FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235FA4:
    // 0x80235FA4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80235FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235FAC: bne         $v1, $v0, L_80235FCC
    if (ctx->r3 != ctx->r2) {
        // 0x80235FB0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80235FCC;
    }
    // 0x80235FB0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80235FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235FBC: jal         0x8023629C
    // 0x80235FC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023629C_ovl27(rdram, ctx);
        goto after_9;
    // 0x80235FC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80235FC4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80235FC8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80235FCC:
    // 0x80235FCC: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80235FD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80235FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235FD8: jal         0x802362C4
    // 0x80235FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802362C4_ovl27(rdram, ctx);
        goto after_10;
    // 0x80235FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x80235FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235FE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235FE8: jal         0x8023629C
    // 0x80235FEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8023629C_ovl27(rdram, ctx);
        goto after_11;
    // 0x80235FEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_11:
    // 0x80235FF0: j           L_80236270
    // 0x80235FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236270;
    // 0x80235FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235FF8:
    // 0x80235FF8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80235FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236000: bne         $v1, $v0, L_80236020
    if (ctx->r3 != ctx->r2) {
        // 0x80236004: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80236020;
    }
    // 0x80236004: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80236008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023600C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236010: jal         0x8023629C
    // 0x80236014: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023629C_ovl27(rdram, ctx);
        goto after_12;
    // 0x80236014: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x80236018: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023601C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_80236020:
    // 0x80236020: bne         $v1, $v0, L_80236034
    if (ctx->r3 != ctx->r2) {
        // 0x80236024: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236034;
    }
    // 0x80236024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236028: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023602C: jal         0x8023629C
    // 0x80236030: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023629C_ovl27(rdram, ctx);
        goto after_13;
    // 0x80236030: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_13:
L_80236034:
    // 0x80236034: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80236038: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023603C: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80236040: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80236040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236044: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236048: jal         0x8023629C
    // 0x8023604C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8023629C_ovl27(rdram, ctx);
        goto after_14;
    // 0x8023604C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_14:
    // 0x80236050: j           L_80236270
    // 0x80236054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236270;
    // 0x80236054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236058:
    // 0x80236058: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023605C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236060: bne         $v1, $v0, L_80236090
    if (ctx->r3 != ctx->r2) {
        // 0x80236064: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80236090;
    }
    // 0x80236064: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80236068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023606C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236070: jal         0x802362C4
    // 0x80236074: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802362C4_ovl27(rdram, ctx);
        goto after_15;
    // 0x80236074: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_15:
    // 0x80236078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023607C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236080: jal         0x8023629C
    // 0x80236084: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023629C_ovl27(rdram, ctx);
        goto after_16;
    // 0x80236084: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_16:
    // 0x80236088: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023608C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80236090:
    // 0x80236090: bne         $v1, $v0, L_802360A4
    if (ctx->r3 != ctx->r2) {
        // 0x80236094: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802360A4;
    }
    // 0x80236094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236098: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023609C: jal         0x8023629C
    // 0x802360A0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023629C_ovl27(rdram, ctx);
        goto after_17;
    // 0x802360A0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_17:
L_802360A4:
    // 0x802360A4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802360A8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802360AC: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x802360B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x802360B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802360B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802360B8: jal         0x8023629C
    // 0x802360BC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023629C_ovl27(rdram, ctx);
        goto after_18;
    // 0x802360BC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_18:
    // 0x802360C0: j           L_80236270
    // 0x802360C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236270;
    // 0x802360C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802360C8:
    // 0x802360C8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802360CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802360D0: bne         $v1, $v0, L_80236100
    if (ctx->r3 != ctx->r2) {
        // 0x802360D4: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80236100;
    }
    // 0x802360D4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802360D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802360DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802360E0: jal         0x8023629C
    // 0x802360E4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023629C_ovl27(rdram, ctx);
        goto after_19;
    // 0x802360E4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_19:
    // 0x802360E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802360EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802360F0: jal         0x802362C4
    // 0x802360F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802362C4_ovl27(rdram, ctx);
        goto after_20;
    // 0x802360F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_20:
    // 0x802360F8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802360FC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80236100:
    // 0x80236100: bne         $v1, $v0, L_80236114
    if (ctx->r3 != ctx->r2) {
        // 0x80236104: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236114;
    }
    // 0x80236104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236108: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023610C: jal         0x8023629C
    // 0x80236110: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8023629C_ovl27(rdram, ctx);
        goto after_21;
    // 0x80236110: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_21:
L_80236114:
    // 0x80236114: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80236118: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8023611C: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80236120: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80236120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236124: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236128: jal         0x8023629C
    // 0x8023612C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023629C_ovl27(rdram, ctx);
        goto after_22;
    // 0x8023612C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_22:
    // 0x80236130: j           L_80236270
    // 0x80236134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236270;
    // 0x80236134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236138:
    // 0x80236138: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023613C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236140: bne         $v1, $v0, L_80236170
    if (ctx->r3 != ctx->r2) {
        // 0x80236144: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80236170;
    }
    // 0x80236144: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80236148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023614C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236150: jal         0x8023629C
    // 0x80236154: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023629C_ovl27(rdram, ctx);
        goto after_23;
    // 0x80236154: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x80236158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023615C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236160: jal         0x802362C4
    // 0x80236164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802362C4_ovl27(rdram, ctx);
        goto after_24;
    // 0x80236164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_24:
    // 0x80236168: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023616C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80236170:
    // 0x80236170: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80236174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80236174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236178: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023617C: jal         0x8023629C
    // 0x80236180: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023629C_ovl27(rdram, ctx);
        goto after_25;
    // 0x80236180: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_25:
    // 0x80236184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236188: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023618C: j           L_80236264
    // 0x80236190: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80236264;
    // 0x80236190: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80236194:
    // 0x80236194: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80236198: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023619C: bne         $v1, $v0, L_802361CC
    if (ctx->r3 != ctx->r2) {
        // 0x802361A0: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_802361CC;
    }
    // 0x802361A0: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x802361A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802361AC: jal         0x8023629C
    // 0x802361B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023629C_ovl27(rdram, ctx);
        goto after_26;
    // 0x802361B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_26:
    // 0x802361B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802361BC: jal         0x802362C4
    // 0x802361C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802362C4_ovl27(rdram, ctx);
        goto after_27;
    // 0x802361C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x802361C4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802361C8: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_802361CC:
    // 0x802361CC: bne         $v1, $v0, L_802361F0
    if (ctx->r3 != ctx->r2) {
        // 0x802361D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802361F0;
    }
    // 0x802361D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802361D8: jal         0x8023629C
    // 0x802361DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023629C_ovl27(rdram, ctx);
        goto after_28;
    // 0x802361DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_28:
    // 0x802361E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802361E8: jal         0x802362C4
    // 0x802361EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802362C4_ovl27(rdram, ctx);
        goto after_29;
    // 0x802361EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_29:
L_802361F0:
    // 0x802361F0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802361F4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802361F8: bne         $v1, $v0, L_80236218
    if (ctx->r3 != ctx->r2) {
        // 0x802361FC: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80236218;
    }
    // 0x802361FC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80236200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236204: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236208: jal         0x8023629C
    // 0x8023620C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023629C_ovl27(rdram, ctx);
        goto after_30;
    // 0x8023620C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_30:
    // 0x80236210: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80236214: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_80236218:
    // 0x80236218: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x8023621C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x8023621C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236220: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236224: jal         0x8023629C
    // 0x80236228: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023629C_ovl27(rdram, ctx);
        goto after_31;
    // 0x80236228: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_31:
    // 0x8023622C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236230: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236234: j           L_80236264
    // 0x80236238: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80236264;
    // 0x80236238: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8023623C:
    // 0x8023623C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80236240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236244: bne         $v1, $v0, L_80236270
    if (ctx->r3 != ctx->r2) {
        // 0x80236248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236270;
    }
    // 0x80236248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023624C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236250: jal         0x8023629C
    // 0x80236254: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8023629C_ovl27(rdram, ctx);
        goto after_32;
    // 0x80236254: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_32:
    // 0x80236258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023625C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236260: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80236264:
    // 0x80236264: jal         0x802362C4
    // 0x80236268: nop

    func_802362C4_ovl27(rdram, ctx);
        goto after_33;
    // 0x80236268: nop

    after_33:
L_8023626C:
    // 0x8023626C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236270:
    // 0x80236270: jal         0x802362EC
    // 0x80236274: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802362EC_ovl27(rdram, ctx);
        goto after_34;
    // 0x80236274: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_34:
    // 0x80236278: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023627C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236280: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80236284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236288: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023628C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236294: jr          $ra
    // 0x80236298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802296E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296E0: jr          $ra
    // 0x802296E4: nop

    TRACE_RETURN()
    return;
    // 0x802296E4: nop

    // 0x802296E8: nop

    // 0x802296EC: nop

;}
RECOMP_FUNC void func_8022BF48_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BF4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BF50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF54: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022BF58: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022BF5C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BF60: lhu         $a0, 0x49C4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C4);
    // 0x8022BF64: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022BF68: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x8022BF6C: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022BF70: addiu       $v0, $zero, 0x1F40
    ctx->r2 = ADD32(0, 0X1F40);
    // 0x8022BF74: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BF78: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BF7C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BF80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BF84: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BF88: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022BF8C: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8022BF90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BF94: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8022BF98: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022BF9C: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8022BFA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BFA4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022BFA8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022BFAC: and         $a2, $a2, $v1
    ctx->r6 = ctx->r6 & ctx->r3;
    // 0x8022BFB0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BFB4: lhu         $a0, 0x49C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C6);
    // 0x8022BFB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BFBC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022BFC0: and         $a3, $a3, $v1
    ctx->r7 = ctx->r7 & ctx->r3;
    // 0x8022BFC4: or          $a0, $t0, $a0
    ctx->r4 = ctx->r8 | ctx->r4;
    // 0x8022BFC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BFCC: lhu         $v0, 0x49CA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49CA);
    // 0x8022BFD0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BFD4: lhu         $t0, 0x1A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022BFD8: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022BFDC: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022BFE0: jal         0x8022CE54
    // 0x8022BFE4: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022BFE4: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    after_0:
    // 0x8022BFE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BFEC: beq         $v0, $zero, L_8022C144
    if (ctx->r2 == 0) {
        // 0x8022BFF0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C144;
    }
    // 0x8022BFF0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022BFF4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BFF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BFFC: jal         0x8009A3B4
    // 0x8022C000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C004: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C008: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C00C: jal         0x8009A3B4
    // 0x8022C010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022C014: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C018: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C01C: jal         0x8009A3B4
    // 0x8022C020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022C024: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C028: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022C02C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022C030: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C034: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C038: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C03C: lw          $v0, -0x61E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X61E0);
    // 0x8022C040: jalr        $v0
    // 0x8022C044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022C044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C048: jal         0x8022CAA4
    // 0x8022C04C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CAA4_ovl27(rdram, ctx);
        goto after_5;
    // 0x8022C04C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C050: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C054: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C058: beq         $v0, $a1, L_8022C070
    if (ctx->r2 == ctx->r5) {
        // 0x8022C05C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C070;
    }
    // 0x8022C05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C060: jal         0x80050294
    // 0x8022C064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022C064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022C068: j           L_8022C07C
    // 0x8022C06C: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
        goto L_8022C07C;
    // 0x8022C06C: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
L_8022C070:
    // 0x8022C070: jal         0x8005044C
    // 0x8022C074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x8022C074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022C078: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
L_8022C07C:
    // 0x8022C07C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C080: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C084: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022C088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C08C: jal         0x8009A3B4
    // 0x8022C090: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C090: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_8:
    // 0x8022C094: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x8022C098: beq         $v0, $zero, L_8022C0D0
    if (ctx->r2 == 0) {
        // 0x8022C09C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022C0D0;
    }
    // 0x8022C09C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C0A0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C0A4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8022C0A8: addiu       $v1, $s1, 0x40
    ctx->r3 = ADD32(ctx->r17, 0X40);
    // 0x8022C0AC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8022C0B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C0B4: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x8022C0B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C0BC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C0C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022C0C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022C0C8: jal         0x80051E18
    // 0x8022C0CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022C0CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_9:
L_8022C0D0:
    // 0x8022C0D0: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x8022C0D4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C0D8: bne         $v0, $zero, L_8022C0F4
    if (ctx->r2 != 0) {
        // 0x8022C0DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0F4;
    }
    // 0x8022C0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022C0E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C0E8: jal         0x80047284
    // 0x8022C0EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022C0EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8022C0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C0F4:
    // 0x8022C0F4: jal         0x80040F30
    // 0x8022C0F8: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_11;
    // 0x8022C0F8: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    after_11:
    // 0x8022C0FC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C100: lbu         $v1, -0x37B0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X37B0);
    // 0x8022C104: beq         $v1, $zero, L_8022C124
    if (ctx->r3 == 0) {
        // 0x8022C108: sw          $v0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r2;
            goto L_8022C124;
    }
    // 0x8022C108: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x8022C10C: jal         0x8022CF44
    // 0x8022C110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CF44_ovl27(rdram, ctx);
        goto after_12;
    // 0x8022C110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022C114: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x8022C118: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C11C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C120: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
L_8022C124:
    // 0x8022C124: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C128: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C12C: beq         $v0, $zero, L_8022C144
    if (ctx->r2 == 0) {
        // 0x8022C130: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C144;
    }
    // 0x8022C130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C134: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022C138: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C13C: jal         0x8003B564
    // 0x8022C140: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_13;
    // 0x8022C140: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
L_8022C144:
    // 0x8022C144: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022C148: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C14C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C150: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C154: jr          $ra
    // 0x8022C158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80231268_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231268: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023126C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231270: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80231274: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231278: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x8023127C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231280: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231284: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231288: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023128C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231290: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80231294: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231298: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8023129C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802312A0: jal         0x8004F144
    // 0x802312A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802312A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x802312A8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802312AC: beq         $s1, $zero, L_80231334
    if (ctx->r17 == 0) {
        // 0x802312B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231334;
    }
    // 0x802312B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802312B4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802312B8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x802312BC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x802312C0: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802312C4: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x802312C8: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x802312CC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802312D0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802312D4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802312D8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x802312DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802312E0: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x802312E4: beq         $s4, $zero, L_802312F8
    if (ctx->r20 == 0) {
        // 0x802312E8: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_802312F8;
    }
    // 0x802312E8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802312EC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802312F0: j           L_80231300
    // 0x802312F4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80231300;
    // 0x802312F4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802312F8:
    // 0x802312F8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802312FC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_80231300:
    // 0x80231300: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80231304: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x80231308: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8023130C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231310: blez        $v0, L_80231334
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231314: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80231334;
    }
    // 0x80231314: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80231318: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8023131C:
    // 0x8023131C: jal         0x802310D8
    // 0x80231320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802310D8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80231320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80231324: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231328: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8023132C: bne         $v0, $zero, L_8023131C
    if (ctx->r2 != 0) {
        // 0x80231330: nop
    
            goto L_8023131C;
    }
    // 0x80231330: nop

L_80231334:
    // 0x80231334: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80231338: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023133C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231340: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231344: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231348: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023134C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231350: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231358: jr          $ra
    // 0x8023135C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023135C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022AB58_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AB68: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022AB6C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022AB70: beq         $v0, $zero, L_8022AB94
    if (ctx->r2 == 0) {
        // 0x8022AB74: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8022AB94;
    }
    // 0x8022AB74: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022AB78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB7C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AB80: jal         0x800502EC
    // 0x8022AB84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022AB84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AB88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AB8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AB90: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022AB94:
    // 0x8022AB94: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022AB98: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022AB9C: beq         $v0, $zero, L_8022ABC4
    if (ctx->r2 == 0) {
        // 0x8022ABA0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022ABC4;
    }
    // 0x8022ABA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ABA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022ABA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ABAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ABB0: jal         0x800502EC
    // 0x8022ABB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022ABB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022ABB8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022ABBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ABC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022ABC4:
    // 0x8022ABC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ABC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABCC: jr          $ra
    // 0x8022ABD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ABD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023641C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023641C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236424: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023642C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236430: bne         $v0, $zero, L_80236454
    if (ctx->r2 != 0) {
        // 0x80236434: addiu       $v0, $zero, -0x600
        ctx->r2 = ADD32(0, -0X600);
            goto L_80236454;
    }
    // 0x80236434: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x80236438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023643C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236440: jal         0x80050294
    // 0x80236444: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236444: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236448: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023644C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236450: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236454:
    // 0x80236454: jal         0x80051770
    // 0x80236458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023645C: jal         0x80051248
    // 0x80236460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023646C: jr          $ra
    // 0x80236470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235A1C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235A20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235A24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235A28: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235A2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235A30: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235A34: bne         $v0, $zero, L_80235A70
    if (ctx->r2 != 0) {
        // 0x80235A38: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235A70;
    }
    // 0x80235A38: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235A3C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80235A40: jal         0x80050294
    // 0x80235A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80235A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80235A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235A50: jal         0x80235CD8
    // 0x80235A54: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80235A54: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x80235A58: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80235A5C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80235A60: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80235A64: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235A68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235A6C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80235A70:
    // 0x80235A70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235A74: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235A78: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80235A7C: beq         $v1, $v0, L_80235AC8
    if (ctx->r3 == ctx->r2) {
        // 0x80235A80: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80235AC8;
    }
    // 0x80235A80: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80235A84: beq         $v0, $zero, L_80235A9C
    if (ctx->r2 == 0) {
        // 0x80235A88: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235A9C;
    }
    // 0x80235A88: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235A8C: beq         $v1, $v0, L_80235ABC
    if (ctx->r3 == ctx->r2) {
        // 0x80235A90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235ABC;
    }
    // 0x80235A90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A94: j           L_80235AE8
    // 0x80235A98: nop

        goto L_80235AE8;
    // 0x80235A98: nop

L_80235A9C:
    // 0x80235A9C: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80235AA0: beq         $v1, $v0, L_80235AB8
    if (ctx->r3 == ctx->r2) {
        // 0x80235AA4: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80235AB8;
    }
    // 0x80235AA4: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80235AA8: beq         $v1, $v0, L_80235AD8
    if (ctx->r3 == ctx->r2) {
        // 0x80235AAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235AD8;
    }
    // 0x80235AAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235AB0: j           L_80235AE8
    // 0x80235AB4: nop

        goto L_80235AE8;
    // 0x80235AB4: nop

L_80235AB8:
    // 0x80235AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235ABC:
    // 0x80235ABC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235AC0: j           L_80235AE0
    // 0x80235AC4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
        goto L_80235AE0;
    // 0x80235AC4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
L_80235AC8:
    // 0x80235AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235ACC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235AD0: j           L_80235AE0
    // 0x80235AD4: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
        goto L_80235AE0;
    // 0x80235AD4: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
L_80235AD8:
    // 0x80235AD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235ADC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_80235AE0:
    // 0x80235AE0: jal         0x80235CD8
    // 0x80235AE4: nop

    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x80235AE4: nop

    after_2:
L_80235AE8:
    // 0x80235AE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235AEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235AF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235AF4: jr          $ra
    // 0x80235AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802277B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802277B4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802277B8: bne         $v0, $zero, L_802277F0
    if (ctx->r2 != 0) {
        // 0x802277BC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_802277F0;
    }
    // 0x802277BC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x802277C0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x802277C4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x802277C8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802277CC: beq         $v1, $zero, L_802277DC
    if (ctx->r3 == 0) {
        // 0x802277D0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_802277DC;
    }
    // 0x802277D0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x802277D4: j           L_802277E0
    // 0x802277D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802277E0;
    // 0x802277D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802277DC:
    // 0x802277DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802277E0:
    // 0x802277E0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802277E4: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x802277E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277EC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_802277F0:
    // 0x802277F0: jr          $ra
    // 0x802277F4: nop

    TRACE_RETURN()
    return;
    // 0x802277F4: nop

;}
RECOMP_FUNC void func_8022A22C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A22C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A230: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A234: jal         0x8004F418
    // 0x8022A238: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022A238: nop

    after_0:
    // 0x8022A23C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A240: jr          $ra
    // 0x8022A244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A5C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229A60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229A64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A68: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229A6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229A70: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229A74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A78: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229A7C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229A80: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x80229A84: jal         0x8004D5D4
    // 0x80229A88: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229A88: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229A8C: addiu       $a0, $s0, 0x334
    ctx->r4 = ADD32(ctx->r16, 0X334);
    // 0x80229A90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A94: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80229A98: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229A9C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229AA0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229AA4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229AA8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229AAC: addiu       $v0, $v0, -0x65F0
    ctx->r2 = ADD32(ctx->r2, -0X65F0);
    // 0x80229AB0: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80229AB4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229AB8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80229ABC: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80229AC0: jal         0x800540BC
    // 0x80229AC4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80229AC4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229AC8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229ACC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229AD0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229AD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229ADC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229AE0: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80229AE4: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80229AE8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229AEC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229AF0: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229AF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229AF8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229AFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229B00: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229B04: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80229B08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229B0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229B10: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80229B14: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80229B18: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80229B1C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80229B20: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229B24: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229B28: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x80229B2C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229B30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229B34: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229B38: sh          $v0, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r2;
    // 0x80229B3C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229B40: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x80229B44: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x80229B48: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80229B4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229B50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229B58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229B5C: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80229B60: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80229B64: sh          $v1, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = ctx->r3;
    // 0x80229B68: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_80229B6C:
    // 0x80229B6C: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80229B70: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229B74: sh          $a1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r5;
    // 0x80229B78: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80229B7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229B80: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229B84: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229B88: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80229B8C: bne         $v0, $zero, L_80229B6C
    if (ctx->r2 != 0) {
        // 0x80229B90: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_80229B6C;
    }
    // 0x80229B90: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80229B94: lbu         $v0, 0x7B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7B);
    // 0x80229B98: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80229B9C: sb          $v0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r2;
    // 0x80229BA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229BA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229BA8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229BB4: jal         0x800502EC
    // 0x80229BB8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_2;
    // 0x80229BB8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229BBC: jal         0x80051248
    // 0x80229BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x80229BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229BC4: jal         0x8004EEAC
    // 0x80229BC8: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_4;
    // 0x80229BC8: nop

    after_4:
    // 0x80229BCC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80229BD0: beq         $a2, $zero, L_80229C48
    if (ctx->r6 == 0) {
        // 0x80229BD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229C48;
    }
    // 0x80229BD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BD8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80229BDC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229BE0: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80229BE4: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80229BE8: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
    // 0x80229BEC: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x80229BF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229BF4: sh          $v0, 0x56($a2)
    MEM_H(0X56, ctx->r6) = ctx->r2;
    // 0x80229BF8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80229BFC: sb          $zero, 0xD($a2)
    MEM_B(0XD, ctx->r6) = 0;
    // 0x80229C00: sb          $zero, 0xE($a2)
    MEM_B(0XE, ctx->r6) = 0;
    // 0x80229C04: sb          $zero, 0xF($a2)
    MEM_B(0XF, ctx->r6) = 0;
    // 0x80229C08: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80229C0C: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x80229C10: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80229C14: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80229C18: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80229C1C: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80229C20: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x80229C24: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80229C28: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x80229C2C: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x80229C30: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229C34: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x80229C38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C3C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229C40: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80229C44: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
L_80229C48:
    // 0x80229C48: lui         $a3, 0x2C78
    ctx->r7 = S32(0X2C78 << 16);
    // 0x80229C4C: ori         $a3, $a3, 0x6060
    ctx->r7 = ctx->r7 | 0X6060;
    // 0x80229C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229C58: lbu         $v1, 0x1($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1);
    // 0x80229C5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229C60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229C64: addiu       $v0, $v0, -0x65F0
    ctx->r2 = ADD32(ctx->r2, -0X65F0);
    // 0x80229C68: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x80229C6C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80229C70: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80229C74: sb          $v0, 0x7C($s1)
    MEM_B(0X7C, ctx->r17) = ctx->r2;
    // 0x80229C78: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229C7C: sb          $v0, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r2;
    // 0x80229C80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229C84: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
    // 0x80229C88: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80229C8C: sh          $zero, 0x6C($s1)
    MEM_H(0X6C, ctx->r17) = 0;
    // 0x80229C90: sh          $v0, 0x6C($s1)
    MEM_H(0X6C, ctx->r17) = ctx->r2;
    // 0x80229C94: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x80229C98: sh          $zero, 0x68($s1)
    MEM_H(0X68, ctx->r17) = 0;
    // 0x80229C9C: sh          $zero, 0x6A($s1)
    MEM_H(0X6A, ctx->r17) = 0;
    // 0x80229CA0: sb          $zero, 0x7E($s1)
    MEM_B(0X7E, ctx->r17) = 0;
    // 0x80229CA4: sb          $zero, 0x82($s1)
    MEM_B(0X82, ctx->r17) = 0;
    // 0x80229CA8: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x80229CAC: sb          $zero, 0x7F($s1)
    MEM_B(0X7F, ctx->r17) = 0;
    // 0x80229CB0: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x80229CB4: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x80229CB8: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x80229CBC: sb          $zero, 0x7D($s1)
    MEM_B(0X7D, ctx->r17) = 0;
    // 0x80229CC0: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x80229CC4: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80229CC8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80229CCC: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80229CD0: sh          $zero, 0x74($s1)
    MEM_H(0X74, ctx->r17) = 0;
    // 0x80229CD4: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80229CD8: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x80229CDC: jal         0x8004A00C
    // 0x80229CE0: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8004A00C_2540C(rdram, ctx);
        goto after_5;
    // 0x80229CE0: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_5:
    // 0x80229CE4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229CE8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229CEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229CF0: jr          $ra
    // 0x80229CF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229CF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227F28_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F28: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80227F2C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80227F30: jr          $ra
    // 0x80227F34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80227F34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_802303BC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802303C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802303C4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802303C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802303CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802303D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802303D4: lw          $v0, -0x5E78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E78);
    // 0x802303D8: jalr        $v0
    // 0x802303DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802303DC: nop

    after_0:
    // 0x802303E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802303E4: jr          $ra
    // 0x802303E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802303E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802339B4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802339B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802339B8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802339BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802339C0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802339C4: bne         $v0, $zero, L_802339F8
    if (ctx->r2 != 0) {
        // 0x802339C8: addiu       $a0, $zero, -0x3
        ctx->r4 = ADD32(0, -0X3);
            goto L_802339F8;
    }
    // 0x802339C8: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x802339CC: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x802339D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802339D4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802339D8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802339DC: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x802339E0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802339E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802339E8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802339EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802339F0: jal         0x80234028
    // 0x802339F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_80234028_ovl27(rdram, ctx);
        goto after_0;
    // 0x802339F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_802339F8:
    // 0x802339F8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802339FC: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233A00: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233A04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233A08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A10: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233A14: sll         $v0, $v0, 17
    ctx->r2 = S32(ctx->r2 << 17);
    // 0x80233A18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233A1C: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    // 0x80233A20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233A24: jr          $ra
    // 0x80233A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229880_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022988C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229890: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229894: bne         $v0, $zero, L_802298B8
    if (ctx->r2 != 0) {
        // 0x80229898: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_802298B8;
    }
    // 0x80229898: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022989C: jal         0x800504EC
    // 0x802298A0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x802298A0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_0:
    // 0x802298A4: jal         0x8005129C
    // 0x802298A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x802298A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802298AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802298B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802298B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802298B8:
    // 0x802298B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802298BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802298C0: jr          $ra
    // 0x802298C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
