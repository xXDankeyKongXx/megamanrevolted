#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802281C0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802281C4: lw          $v0, -0x3690($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3690);
    // 0x802281C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802281D8: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x802281DC: bgtz        $a0, L_80228200
    if (SIGNED(ctx->r4) > 0) {
        // 0x802281E0: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_80228200;
    }
    // 0x802281E0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802281E4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802281E8: addiu       $v0, $v0, -0x3690
    ctx->r2 = ADD32(ctx->r2, -0X3690);
    // 0x802281EC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802281F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802281F4: sh          $zero, -0x368C($at)
    MEM_H(-0X368C, ctx->r1) = 0;
    // 0x802281F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802281FC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80228200:
    // 0x80228200: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228204: addiu       $a1, $a1, -0x368C
    ctx->r5 = ADD32(ctx->r5, -0X368C);
    // 0x80228208: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022820C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80228210: lw          $a0, -0x3690($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3690);
    // 0x80228214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228218: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8022821C: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80228220: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228224: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228228: bne         $v0, $v1, L_80228264
    if (ctx->r2 != ctx->r3) {
        // 0x8022822C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80228264;
    }
    // 0x8022822C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80228230: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228234: sw          $v0, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r2;
    // 0x80228238: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8022823C: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80228240: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80228244: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80228248: jal         0x8003B85C
    // 0x8022824C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022824C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80228250: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80228254: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80228258: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022825C: jal         0x8003B840
    // 0x80228260: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228260: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80228264:
    // 0x80228264: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228268: lw          $v0, -0x3688($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3688);
    // 0x8022826C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x80228270: bgtz        $a0, L_80228294
    if (SIGNED(ctx->r4) > 0) {
        // 0x80228274: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_80228294;
    }
    // 0x80228274: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80228278: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022827C: addiu       $v0, $v0, -0x3688
    ctx->r2 = ADD32(ctx->r2, -0X3688);
    // 0x80228280: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80228284: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228288: sh          $zero, -0x3684($at)
    MEM_H(-0X3684, ctx->r1) = 0;
    // 0x8022828C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228290: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80228294:
    // 0x80228294: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228298: addiu       $a1, $a1, -0x3684
    ctx->r5 = ADD32(ctx->r5, -0X3684);
    // 0x8022829C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802282A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802282A4: lw          $a0, -0x3688($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3688);
    // 0x802282A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282AC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802282B0: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x802282B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802282BC: bne         $v0, $v1, L_802282F8
    if (ctx->r2 != ctx->r3) {
        // 0x802282C0: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_802282F8;
    }
    // 0x802282C0: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x802282C4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802282C8: sw          $v0, -0x3688($at)
    MEM_W(-0X3688, ctx->r1) = ctx->r2;
    // 0x802282CC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802282D0: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x802282D4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802282D8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802282DC: jal         0x8003B85C
    // 0x802282E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802282E0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802282E4: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802282E8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802282EC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802282F0: jal         0x8003B840
    // 0x802282F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802282F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802282F8:
    // 0x802282F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802282FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228300: jr          $ra
    // 0x80228304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022670C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022670C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226710: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226714: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022671C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226720: bne         $v0, $zero, L_80226820
    if (ctx->r2 != 0) {
        // 0x80226724: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226820;
    }
    // 0x80226724: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022672C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226734: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226738: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022673C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226740: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226744: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226748: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022674C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226754: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226758: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022675C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226764: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022676C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226770: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226774: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022677C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226784: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226788: jal         0x8004CB2C
    // 0x8022678C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8022678C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80226790: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80226794: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226798: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022679C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267A0: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802267A4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267A8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802267AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267B0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x802267B4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802267BC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267C0: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x802267C4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267C8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802267CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267D0: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802267D4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802267DC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267E0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802267E4: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x802267E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267EC: sb          $v1, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r3;
    // 0x802267F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267F4: sw          $zero, 0x4470($at)
    MEM_W(0X4470, ctx->r1) = 0;
    // 0x802267F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267FC: sw          $zero, 0x4438($at)
    MEM_W(0X4438, ctx->r1) = 0;
    // 0x80226800: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226804: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x80226808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022680C: sb          $v1, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r3;
    // 0x80226810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226814: sb          $zero, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = 0;
    // 0x80226818: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022681C: sb          $zero, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = 0;
L_80226820:
    // 0x80226820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226828: jr          $ra
    // 0x8022682C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022682C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A64_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A64: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80228A68: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80228A6C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80228A70: bne         $v1, $v0, L_80228A84
    if (ctx->r3 != ctx->r2) {
        // 0x80228A74: nop
    
            goto L_80228A84;
    }
    // 0x80228A74: nop

    // 0x80228A78: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228A7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A80: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228A84:
    // 0x80228A84: jr          $ra
    // 0x80228A88: nop

    TRACE_RETURN()
    return;
    // 0x80228A88: nop

;}
RECOMP_FUNC void func_802274D8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274D8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802274DC: lbu         $v0, 0xC($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XC);
    // 0x802274E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274E4: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x802274E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802274EC: bne         $v0, $zero, L_80227508
    if (ctx->r2 != 0) {
        // 0x802274F0: lui         $a0, 0x2222
        ctx->r4 = S32(0X2222 << 16);
            goto L_80227508;
    }
    // 0x802274F0: lui         $a0, 0x2222
    ctx->r4 = S32(0X2222 << 16);
    // 0x802274F4: lbu         $v0, 0xA($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XA);
    // 0x802274F8: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x802274FC: sb          $v1, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r3;
    // 0x80227500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227504: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
L_80227508:
    // 0x80227508: ori         $a0, $a0, 0xFFE9
    ctx->r4 = ctx->r4 | 0XFFE9;
    // 0x8022750C: lui         $a1, 0x1111
    ctx->r5 = S32(0X1111 << 16);
    // 0x80227510: lw          $v0, 0x48($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X48);
    // 0x80227514: lw          $v1, 0x4C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4C);
    // 0x80227518: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x8022751C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227520: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80227524: sw          $v0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r2;
    // 0x80227528: jr          $ra
    // 0x8022752C: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022752C: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void func_80226218_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022621C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80226220: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226224: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226228: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022622C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226230: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80226234: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80226238: beq         $v0, $zero, L_802265A0
    if (ctx->r2 == 0) {
        // 0x8022623C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802265A0;
    }
    // 0x8022623C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226240: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226244: addu        $at, $at, $v0
    gpr jr_addend_8022624C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226248: lw          $v0, -0x3740($at)
    ctx->r2 = ADD32(ctx->r1, -0X3740);
    // 0x8022624C: jr          $v0
    // 0x80226250: nop

    switch (jr_addend_8022624C >> 2) {
        case 0: goto L_80226254; break;
        case 1: goto L_8022627C; break;
        case 2: goto L_80226290; break;
        case 3: goto L_802262AC; break;
        case 4: goto L_802262D4; break;
        case 5: goto L_802262E8; break;
        case 6: goto L_80226330; break;
        default: switch_error(__func__, 0x8022624C, 0x8022C8C0);
    }
    // 0x80226250: nop

L_80226254:
    // 0x80226254: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226258: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022625C: jal         0x8006FF84
    // 0x80226260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226264: beq         $v0, $zero, L_802265A0
    if (ctx->r2 == 0) {
        // 0x80226268: nop
    
            goto L_802265A0;
    }
    // 0x80226268: nop

    // 0x8022626C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226270: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80226274: j           L_802262C4
    // 0x80226278: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_802262C4;
    // 0x80226278: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022627C:
    // 0x8022627C: lui         $a0, 0x107
    ctx->r4 = S32(0X107 << 16);
    // 0x80226280: jal         0x80036B1C
    // 0x80226284: ori         $a0, $a0, 0x2800
    ctx->r4 = ctx->r4 | 0X2800;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80226284: ori         $a0, $a0, 0x2800
    ctx->r4 = ctx->r4 | 0X2800;
    after_1:
    // 0x80226288: j           L_802262C4
    // 0x8022628C: nop

        goto L_802262C4;
    // 0x8022628C: nop

L_80226290:
    // 0x80226290: jal         0x80036B7C
    // 0x80226294: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x80226294: nop

    after_2:
    // 0x80226298: beq         $v0, $zero, L_802265A0
    if (ctx->r2 == 0) {
        // 0x8022629C: addiu       $v1, $zero, 0x14
        ctx->r3 = ADD32(0, 0X14);
            goto L_802265A0;
    }
    // 0x8022629C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x802262A0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802262A4: j           L_802262C8
    // 0x802262A8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_802262C8;
    // 0x802262A8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_802262AC:
    // 0x802262AC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802262B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802262B4: bne         $v0, $zero, L_802265A0
    if (ctx->r2 != 0) {
        // 0x802262B8: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_802265A0;
    }
    // 0x802262B8: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x802262BC: jal         0x80036E48
    // 0x802262C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802262C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_802262C4:
    // 0x802262C4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_802262C8:
    // 0x802262C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262CC: j           L_802265A0
    // 0x802262D0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_802265A0;
    // 0x802262D0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802262D4:
    // 0x802262D4: jal         0x802260C4
    // 0x802262D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802260C4_ovl6(rdram, ctx);
        goto after_4;
    // 0x802262D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x802262DC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802262E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802262E8:
    // 0x802262E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262EC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802262F0: bne         $v0, $zero, L_80226330
    if (ctx->r2 != 0) {
        // 0x802262F4: nop
    
            goto L_80226330;
    }
    // 0x802262F4: nop

    // 0x802262F8: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802262FC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226300: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226304: beq         $v1, $v0, L_8022631C
    if (ctx->r3 == ctx->r2) {
        // 0x80226308: nop
    
            goto L_8022631C;
    }
    // 0x80226308: nop

    // 0x8022630C: jal         0x8006072C
    // 0x80226310: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80226310: nop

    after_5:
    // 0x80226314: beq         $v0, $zero, L_80226330
    if (ctx->r2 == 0) {
        // 0x80226318: nop
    
            goto L_80226330;
    }
    // 0x80226318: nop

L_8022631C:
    // 0x8022631C: jal         0x80036E48
    // 0x80226320: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80226320: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x80226324: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226328: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022632C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226330:
    // 0x80226330: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226334: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226338: beq         $v1, $v0, L_80226350
    if (ctx->r3 == ctx->r2) {
        // 0x8022633C: nop
    
            goto L_80226350;
    }
    // 0x8022633C: nop

    // 0x80226340: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226344: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226348: jalr        $v0
    // 0x8022634C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x8022634C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
L_80226350:
    // 0x80226350: jal         0x8005FB90
    // 0x80226354: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80226354: nop

    after_8:
    // 0x80226358: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022635C: lbu         $v0, -0x36C3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X36C3);
    // 0x80226360: beq         $v0, $zero, L_80226438
    if (ctx->r2 == 0) {
        // 0x80226364: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80226438;
    }
    // 0x80226364: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226368: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022636C: lbu         $a3, -0x36BF($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X36BF);
    // 0x80226370: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226374: lbu         $a0, -0x36C2($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X36C2);
    // 0x80226378: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022637C: lbu         $a1, -0x36C1($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X36C1);
    // 0x80226380: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80226384: lbu         $a2, -0x36C0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X36C0);
    // 0x80226388: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8022638C: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226390: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80226394: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80226398: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022639C: sb          $a1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r5;
    // 0x802263A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802263A4: sb          $a2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r6;
    // 0x802263A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802263AC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802263B0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x802263B4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802263B8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802263BC: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x802263C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802263C4: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x802263C8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x802263CC: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x802263D0: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x802263D4: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x802263D8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802263DC: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x802263E0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x802263E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802263E8: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x802263EC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802263F0: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x802263F4: jal         0x8003055C
    // 0x802263F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_9;
    // 0x802263F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x802263FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226400: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226404: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80226408: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022640C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226410: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80226414: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226418: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022641C: jal         0x8002FD30
    // 0x80226420: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_10;
    // 0x80226420: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_10:
    // 0x80226424: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226428: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022642C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226430: jal         0x8002FD30
    // 0x80226434: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_11;
    // 0x80226434: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_11:
L_80226438:
    // 0x80226438: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022643C: lbu         $v1, -0x36C4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X36C4);
    // 0x80226440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226444: beq         $v1, $v0, L_80226480
    if (ctx->r3 == ctx->r2) {
        // 0x80226448: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226480;
    }
    // 0x80226448: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022644C: beql        $v0, $zero, L_80226464
    if (ctx->r2 == 0) {
        // 0x80226450: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226464;
    }
    goto skip_0;
    // 0x80226450: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226454: beq         $v1, $zero, L_80226474
    if (ctx->r3 == 0) {
        // 0x80226458: nop
    
            goto L_80226474;
    }
    // 0x80226458: nop

    // 0x8022645C: j           L_802264D4
    // 0x80226460: nop

        goto L_802264D4;
    // 0x80226460: nop

L_80226464:
    // 0x80226464: beq         $v1, $v0, L_802264AC
    if (ctx->r3 == ctx->r2) {
        // 0x80226468: nop
    
            goto L_802264AC;
    }
    // 0x80226468: nop

    // 0x8022646C: j           L_802264D4
    // 0x80226470: nop

        goto L_802264D4;
    // 0x80226470: nop

L_80226474:
    // 0x80226474: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226478: j           L_802264D4
    // 0x8022647C: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
        goto L_802264D4;
    // 0x8022647C: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
L_80226480:
    // 0x80226480: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226484: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226488: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022648C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226490: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226494: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226498: lh          $v0, -0x4180($at)
    ctx->r2 = MEM_H(ctx->r1, -0X4180);
    // 0x8022649C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802264A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802264A4: j           L_802264D4
    // 0x802264A8: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
        goto L_802264D4;
    // 0x802264A8: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_802264AC:
    // 0x802264AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802264B0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802264B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802264B8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802264BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802264C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802264C4: lh          $v0, -0x4178($at)
    ctx->r2 = MEM_H(ctx->r1, -0X4178);
    // 0x802264C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802264CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802264D0: sw          $v0, 0xA70($at)
    MEM_W(0XA70, ctx->r1) = ctx->r2;
L_802264D4:
    // 0x802264D4: jal         0x80060018
    // 0x802264D8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x802264D8: nop

    after_12:
    // 0x802264DC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802264E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802264E4: bne         $v1, $v0, L_802265A0
    if (ctx->r3 != ctx->r2) {
        // 0x802264E8: nop
    
            goto L_802265A0;
    }
    // 0x802264E8: nop

    // 0x802264EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802264F0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802264F4: bne         $v0, $zero, L_802265A0
    if (ctx->r2 != 0) {
        // 0x802264F8: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802265A0;
    }
    // 0x802264F8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802264FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226504: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022650C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226510: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226514: addiu       $v0, $zero, -0x11E8
    ctx->r2 = ADD32(0, -0X11E8);
    // 0x80226518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022651C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226520: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226524: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226528: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022652C: addiu       $v0, $zero, -0x597
    ctx->r2 = ADD32(0, -0X597);
    // 0x80226530: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226534: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226538: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022653C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226540: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80226544: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226548: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022654C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226550: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226558: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022655C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226560: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226564: jal         0x80060590
    // 0x80226568: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x80226568: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    after_13:
    // 0x8022656C: jal         0x80060590
    // 0x80226570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x80226570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_14:
    // 0x80226574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022657C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226580: jal         0x80036B00
    // 0x80226584: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_15;
    // 0x80226584: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_15:
    // 0x80226588: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022658C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226590: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80226594: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226598: jal         0x80070050
    // 0x8022659C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x8022659C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_16:
L_802265A0:
    // 0x802265A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802265A4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802265A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802265AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802265B0: jr          $ra
    // 0x802265B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802265B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B06C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B06C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B070: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022B074: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B078: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022B07C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022B080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B084: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022B088: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8022B08C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B090: jal         0x8003BA58
    // 0x8022B094: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022B094: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022B098: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022B09C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022B0A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B0A4: jal         0x8003BB80
    // 0x8022B0A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022B0A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B0AC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022B0B0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8022B0B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B0B8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022B0BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B0C0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022B0C4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B0C8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022B0CC: lbu         $v1, -0x377F($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X377F);
    // 0x8022B0D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B0D4: bne         $v0, $v1, L_8022B0F4
    if (ctx->r2 != ctx->r3) {
        // 0x8022B0D8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B0F4;
    }
    // 0x8022B0D8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022B0DC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022B0E0: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022B0E4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022B0E8: bne         $v1, $v0, L_8022B0F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022B0EC: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_8022B0F4;
    }
    // 0x8022B0EC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022B0F0: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8022B0F4:
    // 0x8022B0F4: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022B0F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022B0FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B100: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B104: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B108: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B10C: lbu         $v1, -0x37A8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X37A8);
    // 0x8022B110: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022B114: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x8022B118: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B11C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B120: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B124: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B128: addiu       $v0, $v0, 0x2F
    ctx->r2 = ADD32(ctx->r2, 0X2F);
    // 0x8022B12C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8022B130: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8022B134: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x8022B138: jal         0x8003BC68
    // 0x8022B13C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022B13C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B140: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022B144: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022B148: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022B14C: jr          $ra
    // 0x8022B150: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022B150: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022B154: nop

    // 0x8022B158: nop

    // 0x8022B15C: nop

;}
RECOMP_FUNC void func_80228470_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022847C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228480: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228484: bne         $v0, $zero, L_802284E4
    if (ctx->r2 != 0) {
        // 0x80228488: nop
    
            goto L_802284E4;
    }
    // 0x80228488: nop

    // 0x8022848C: jal         0x8004D5D4
    // 0x80228490: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228490: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80228494: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228498: sb          $v0, 0x147($s0)
    MEM_B(0X147, ctx->r16) = ctx->r2;
    // 0x8022849C: sb          $v0, 0x143($s0)
    MEM_B(0X143, ctx->r16) = ctx->r2;
    // 0x802284A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802284A4: addiu       $v0, $v0, -0x3DC0
    ctx->r2 = ADD32(ctx->r2, -0X3DC0);
    // 0x802284A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802284AC: sw          $v0, -0x3680($at)
    MEM_W(-0X3680, ctx->r1) = ctx->r2;
    // 0x802284B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802284B4: addiu       $v0, $v0, -0x3D58
    ctx->r2 = ADD32(ctx->r2, -0X3D58);
    // 0x802284B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802284BC: sw          $v0, -0x367C($at)
    MEM_W(-0X367C, ctx->r1) = ctx->r2;
    // 0x802284C0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802284C4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802284C8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802284CC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802284D0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802284D4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802284D8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802284DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802284E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802284E4:
    // 0x802284E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802284E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802284EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802284F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802284F4: lw          $v0, -0x3C6C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3C6C);
    // 0x802284F8: jalr        $v0
    // 0x802284FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802284FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228500: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80228504: bne         $v0, $zero, L_8022851C
    if (ctx->r2 != 0) {
        // 0x80228508: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022851C;
    }
    // 0x80228508: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022850C: jal         0x8004DD04
    // 0x80228510: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80228510: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80228514: jal         0x8005044C
    // 0x80228518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80228518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022851C:
    // 0x8022851C: jal         0x80228308
    // 0x80228520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228308_ovl6(rdram, ctx);
        goto after_4;
    // 0x80228520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80228524: jal         0x8022853C
    // 0x80228528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022853C_ovl6(rdram, ctx);
        goto after_5;
    // 0x80228528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022852C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228534: jr          $ra
    // 0x80228538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022716C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022716C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227174: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227178: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022717C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227180: jal         0x8004DD04
    // 0x80227184: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80227184: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227188: jal         0x800504EC
    // 0x8022718C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_1;
    // 0x8022718C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227190: jal         0x8005129C
    // 0x80227194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_2;
    // 0x80227194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022719C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271A0: jr          $ra
    // 0x802271A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802271A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272E4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272E4: jr          $ra
    // 0x802272E8: nop

    TRACE_RETURN()
    return;
    // 0x802272E8: nop

;}
RECOMP_FUNC void func_80226874_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226874: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226878: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x8022687C: bne         $v0, $zero, L_802268B8
    if (ctx->r2 != 0) {
        // 0x80226880: lui         $v0, 0xF6C1
        ctx->r2 = S32(0XF6C1 << 16);
            goto L_802268B8;
    }
    // 0x80226880: lui         $v0, 0xF6C1
    ctx->r2 = S32(0XF6C1 << 16);
    // 0x80226884: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226888: lui         $v0, 0xFF9F
    ctx->r2 = S32(0XFF9F << 16);
    // 0x8022688C: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80226890: lui         $v0, 0xFEA0
    ctx->r2 = S32(0XFEA0 << 16);
    // 0x80226894: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022689C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802268A0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802268A4: sh          $zero, 0x56($a1)
    MEM_H(0X56, ctx->r5) = 0;
    // 0x802268A8: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802268AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802268B0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802268B4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_802268B8:
    // 0x802268B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802268BC: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x802268C0: bne         $v1, $v0, L_802268D0
    if (ctx->r3 != ctx->r2) {
        // 0x802268C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802268D0;
    }
    // 0x802268C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802268C8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802268CC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_802268D0:
    // 0x802268D0: jr          $ra
    // 0x802268D4: nop

    TRACE_RETURN()
    return;
    // 0x802268D4: nop

;}
RECOMP_FUNC void func_80226838_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226838: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022683C: bne         $v0, $zero, L_80226864
    if (ctx->r2 != 0) {
        // 0x80226840: lui         $v0, 0xF700
        ctx->r2 = S32(0XF700 << 16);
            goto L_80226864;
    }
    // 0x80226840: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x80226844: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226848: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022684C: lui         $v0, 0xFE8D
    ctx->r2 = S32(0XFE8D << 16);
    // 0x80226850: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226854: lui         $v0, 0xFFA8
    ctx->r2 = S32(0XFFA8 << 16);
    // 0x80226858: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022685C: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80226860: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226864:
    // 0x80226864: jr          $ra
    // 0x80226868: nop

    TRACE_RETURN()
    return;
    // 0x80226868: nop

;}
RECOMP_FUNC void func_802289AC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802289B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802289B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802289B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802289BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802289C0: bne         $v0, $zero, L_802289DC
    if (ctx->r2 != 0) {
        // 0x802289C4: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802289DC;
    }
    // 0x802289C4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802289C8: jal         0x80050294
    // 0x802289CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802289CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802289D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802289D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802289D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802289DC:
    // 0x802289DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802289E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289E4: jr          $ra
    // 0x802289E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279D0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802279D8: jal         0x8004F418
    // 0x802279DC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802279DC: nop

    after_0:
    // 0x802279E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802279E4: jr          $ra
    // 0x802279E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802279EC: nop

;}
RECOMP_FUNC void func_802253C0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x802253C4: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x802253C8: bne         $v0, $zero, L_8022545C
    if (ctx->r2 != 0) {
        // 0x802253CC: slti        $v0, $v0, 0xB4
        ctx->r2 = SIGNED(ctx->r2) < 0XB4 ? 1 : 0;
            goto L_8022545C;
    }
    // 0x802253CC: slti        $v0, $v0, 0xB4
    ctx->r2 = SIGNED(ctx->r2) < 0XB4 ? 1 : 0;
    // 0x802253D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802253D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253D8: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x802253DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253E0: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x802253E4: lui         $v0, 0xF0
    ctx->r2 = S32(0XF0 << 16);
    // 0x802253E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253EC: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x802253F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253F4: sw          $v0, 0x4438($at)
    MEM_W(0X4438, ctx->r1) = ctx->r2;
    // 0x802253F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253FC: sw          $v0, 0x4470($at)
    MEM_W(0X4470, ctx->r1) = ctx->r2;
    // 0x80225400: lw          $v1, 0x30($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X30);
    // 0x80225404: lui         $v0, 0x50
    ctx->r2 = S32(0X50 << 16);
    // 0x80225408: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022540C: sw          $v0, -0x36CC($at)
    MEM_W(-0X36CC, ctx->r1) = ctx->r2;
    // 0x80225410: lui         $v0, 0xFF06
    ctx->r2 = S32(0XFF06 << 16);
    // 0x80225414: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225418: sw          $v0, -0x36C8($at)
    MEM_W(-0X36C8, ctx->r1) = ctx->r2;
    // 0x8022541C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225420: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225424: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225428: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022542C: lw          $a0, -0x36D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36D0);
    // 0x80225430: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225434: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    // 0x80225438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022543C: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80225440: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x80225444: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80225448: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022544C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225450: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x80225454: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x80225458: slti        $v0, $v0, 0xB4
    ctx->r2 = SIGNED(ctx->r2) < 0XB4 ? 1 : 0;
L_8022545C:
    // 0x8022545C: beq         $v0, $zero, L_80225518
    if (ctx->r2 == 0) {
        // 0x80225460: lui         $a2, 0xFFFE
        ctx->r6 = S32(0XFFFE << 16);
            goto L_80225518;
    }
    // 0x80225460: lui         $a2, 0xFFFE
    ctx->r6 = S32(0XFFFE << 16);
    // 0x80225464: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x80225468: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x8022546C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225470: addiu       $a0, $a0, 0x4438
    ctx->r4 = ADD32(ctx->r4, 0X4438);
    // 0x80225474: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80225478: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022547C: lw          $v1, 0x4470($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4470);
    // 0x80225480: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80225484: lw          $a1, -0x36C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X36C8);
    // 0x80225488: ori         $a3, $a3, 0x5555
    ctx->r7 = ctx->r7 | 0X5555;
    // 0x8022548C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225490: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225494: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80225498: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022549C: sw          $v1, 0x4470($at)
    MEM_W(0X4470, ctx->r1) = ctx->r3;
    // 0x802254A0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802254A4: lw          $v1, -0x36D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X36D0);
    // 0x802254A8: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x802254AC: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x802254B0: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802254B4: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x802254B8: lui         $a0, 0xB60B
    ctx->r4 = S32(0XB60B << 16);
    // 0x802254BC: ori         $a0, $a0, 0x60B7
    ctx->r4 = ctx->r4 | 0X60B7;
    // 0x802254C0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802254C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802254C8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802254CC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802254D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254D4: sw          $a1, -0x36C8($at)
    MEM_W(-0X36C8, ctx->r1) = ctx->r5;
    // 0x802254D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254E0: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x802254E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254E8: sb          $v0, -0x36BF($at)
    MEM_B(-0X36BF, ctx->r1) = ctx->r2;
    // 0x802254EC: mfhi        $t1
    ctx->r9 = hi;
    // 0x802254F0: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x802254F4: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x802254F8: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x802254FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80225500: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225504: sb          $v0, -0x36C0($at)
    MEM_B(-0X36C0, ctx->r1) = ctx->r2;
    // 0x80225508: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022550C: sb          $v0, -0x36C1($at)
    MEM_B(-0X36C1, ctx->r1) = ctx->r2;
    // 0x80225510: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225514: sb          $v0, -0x36C2($at)
    MEM_B(-0X36C2, ctx->r1) = ctx->r2;
L_80225518:
    // 0x80225518: jr          $ra
    // 0x8022551C: nop

    TRACE_RETURN()
    return;
    // 0x8022551C: nop

;}
RECOMP_FUNC void func_802274A8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274A8: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x802274AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274B0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802274B4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802274B8: bne         $v0, $zero, L_802274D0
    if (ctx->r2 != 0) {
        // 0x802274BC: addiu       $v1, $zero, 0x2D
        ctx->r3 = ADD32(0, 0X2D);
            goto L_802274D0;
    }
    // 0x802274BC: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x802274C0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802274C4: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x802274C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274CC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802274D0:
    // 0x802274D0: jr          $ra
    // 0x802274D4: nop

    TRACE_RETURN()
    return;
    // 0x802274D4: nop

;}
RECOMP_FUNC void func_80226D50_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D50: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226D54: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226D58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D5C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80226D60: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226D64: bne         $v0, $v1, L_80226D88
    if (ctx->r2 != ctx->r3) {
        // 0x80226D68: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80226D88;
    }
    // 0x80226D68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226D74: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    // 0x80226D78: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80226D7C: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80226D80: jal         0x80229D40
    // 0x80226D84: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80226D84: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_0:
L_80226D88:
    // 0x80226D88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226D8C: jr          $ra
    // 0x80226D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229040_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229040: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229044: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229048: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022904C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229050: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80229054: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80229058: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022905C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229060: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229068: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8022906C: beq         $v0, $zero, L_802291F4
    if (ctx->r2 == 0) {
        // 0x80229070: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_802291F4;
    }
    // 0x80229070: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80229074: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80229078: addiu       $s1, $s1, -0x3670
    ctx->r17 = ADD32(ctx->r17, -0X3670);
    // 0x8022907C: lui         $s4, 0x51EB
    ctx->r20 = S32(0X51EB << 16);
    // 0x80229080: ori         $s4, $s4, 0x851F
    ctx->r20 = ctx->r20 | 0X851F;
    // 0x80229084: addiu       $s6, $zero, 0xC0
    ctx->r22 = ADD32(0, 0XC0);
    // 0x80229088: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x8022908C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80229090:
    // 0x80229090: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229094: beql        $v0, $zero, L_802291E4
    if (ctx->r2 == 0) {
        // 0x80229098: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_802291E4;
    }
    goto skip_0;
    // 0x80229098: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x8022909C: lh          $a0, 0x1C($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1C);
    // 0x802290A0: lh          $a3, 0x1($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1);
    // 0x802290A4: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x802290A8: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x802290AC: lh          $a2, 0x1E($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X1E);
    // 0x802290B0: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x802290B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802290B8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x802290BC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x802290C0: addiu       $a0, $a0, -0xA0
    ctx->r4 = ADD32(ctx->r4, -0XA0);
    // 0x802290C4: mult        $a0, $a3
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802290C8: mflo        $a0
    ctx->r4 = lo;
    // 0x802290CC: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x802290D0: lbu         $v1, 0x7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X7);
    // 0x802290D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802290D8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802290DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802290E0: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x802290E4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802290E8: sb          $v1, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r3;
    // 0x802290EC: mult        $a0, $s4
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802290F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802290F4: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x802290F8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802290FC: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80229100: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229104: mfhi        $v1
    ctx->r3 = hi;
    // 0x80229108: addiu       $a2, $a2, -0x78
    ctx->r6 = ADD32(ctx->r6, -0X78);
    // 0x8022910C: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80229110: mult        $a2, $a3
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229114: mflo        $a2
    ctx->r6 = lo;
    // 0x80229118: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022911C: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80229120: sra         $v1, $v1, 5
    ctx->r3 = S32(SIGNED(ctx->r3) >> 5);
    // 0x80229124: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80229128: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x8022912C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229130: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80229134: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80229138: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8022913C: mult        $a2, $s4
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229140: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229144: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229148: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022914C: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
    // 0x80229150: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x80229154: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229158: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022915C: mfhi        $a3
    ctx->r7 = hi;
    // 0x80229160: sra         $v1, $a3, 5
    ctx->r3 = S32(SIGNED(ctx->r7) >> 5);
    // 0x80229164: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80229168: addiu       $v1, $v1, 0x78
    ctx->r3 = ADD32(ctx->r3, 0X78);
    // 0x8022916C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229170: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80229174: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x80229178: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8022917C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229180: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229184: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229188: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8022918C: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    // 0x80229190: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229194: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80229198: addiu       $v1, $v0, 0x40
    ctx->r3 = ADD32(ctx->r2, 0X40);
    // 0x8022919C: addiu       $v0, $v0, 0x7F
    ctx->r2 = ADD32(ctx->r2, 0X7F);
    // 0x802291A0: sb          $v1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r3;
    // 0x802291A4: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x802291A8: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x802291AC: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x802291B0: sb          $s6, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r22;
    // 0x802291B4: sb          $s6, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r22;
    // 0x802291B8: sb          $s5, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r21;
    // 0x802291BC: sb          $s5, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r21;
    // 0x802291C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802291C4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x802291C8: addiu       $v0, $zero, 0x7F48
    ctx->r2 = ADD32(0, 0X7F48);
    // 0x802291CC: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x802291D0: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x802291D4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x802291D8: jal         0x8002FD30
    // 0x802291DC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x802291DC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x802291E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802291E4:
    // 0x802291E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802291E8: slti        $v0, $s2, 0xA
    ctx->r2 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x802291EC: bne         $v0, $zero, L_80229090
    if (ctx->r2 != 0) {
        // 0x802291F0: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80229090;
    }
    // 0x802291F0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_802291F4:
    // 0x802291F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802291F8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802291FC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80229200: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80229204: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229208: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022920C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229214: jr          $ra
    // 0x80229218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226B44_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B44: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226B48: bne         $v0, $zero, L_80226B78
    if (ctx->r2 != 0) {
        // 0x80226B4C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226B78;
    }
    // 0x80226B4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226B50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B54: sb          $zero, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = 0;
    // 0x80226B58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B5C: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x80226B60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B64: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x80226B68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B6C: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x80226B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B74: sb          $v0, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = ctx->r2;
L_80226B78:
    // 0x80226B78: jr          $ra
    // 0x80226B7C: nop

    TRACE_RETURN()
    return;
    // 0x80226B7C: nop

;}
RECOMP_FUNC void func_802273C4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273C4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802273C8: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x802273CC: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802273D0: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x802273D4: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x802273D8: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
    // 0x802273DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802273E0: jr          $ra
    // 0x802273E4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x802273E4: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802288F4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288F4: jr          $ra
    // 0x802288F8: nop

    TRACE_RETURN()
    return;
    // 0x802288F8: nop

;}
RECOMP_FUNC void func_802289FC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228A0C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228A14: jal         0x8006FF84
    // 0x80228A18: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80228A18: nop

    after_0:
    // 0x80228A1C: beq         $v0, $zero, L_80228AE0
    if (ctx->r2 == 0) {
        // 0x80228A20: nop
    
            goto L_80228AE0;
    }
    // 0x80228A20: nop

    // 0x80228A24: jal         0x8004EEAC
    // 0x80228A28: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x80228A28: nop

    after_1:
    // 0x80228A2C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80228A30: beq         $a2, $zero, L_80228A98
    if (ctx->r6 == 0) {
        // 0x80228A34: addiu       $v0, $zero, 0x1884
        ctx->r2 = ADD32(0, 0X1884);
            goto L_80228A98;
    }
    // 0x80228A34: addiu       $v0, $zero, 0x1884
    ctx->r2 = ADD32(0, 0X1884);
    // 0x80228A38: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80228A3C: lh          $v1, 0x14($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X14);
    // 0x80228A40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228A44: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80228A48: lh          $a0, 0x16($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X16);
    // 0x80228A4C: addiu       $v0, $zero, 0x5CDF
    ctx->r2 = ADD32(0, 0X5CDF);
    // 0x80228A50: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80228A54: lh          $a1, 0x18($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X18);
    // 0x80228A58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A5C: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80228A60: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80228A64: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80228A68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228A6C: sb          $v0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r2;
    // 0x80228A70: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80228A74: sh          $zero, 0x56($a2)
    MEM_H(0X56, ctx->r6) = 0;
    // 0x80228A78: sb          $zero, 0xE($a2)
    MEM_B(0XE, ctx->r6) = 0;
    // 0x80228A7C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228A80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228A84: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80228A88: sw          $v1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r3;
    // 0x80228A8C: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x80228A90: sw          $a1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r5;
    // 0x80228A94: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_80228A98:
    // 0x80228A98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228A9C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80228AA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AA4: sh          $zero, -0xCBA($at)
    MEM_H(-0XCBA, ctx->r1) = 0;
    // 0x80228AA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AAC: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80228AB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228AB4: sb          $zero, -0x5F40($at)
    MEM_B(-0X5F40, ctx->r1) = 0;
    // 0x80228AB8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80228ABC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228AC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AC4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80228AC8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80228ACC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228AD0: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80228AD4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80228AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228ADC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80228AE0:
    // 0x80228AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228AE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AE8: jr          $ra
    // 0x80228AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CD88_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD88: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022CD8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CD90: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022CD94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD98: bne         $v0, $zero, L_8022CDA4
    if (ctx->r2 != 0) {
        // 0x8022CD9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CDA4;
    }
    // 0x8022CD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDA0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022CDA4:
    // 0x8022CDA4: jr          $ra
    // 0x8022CDA8: nop

    TRACE_RETURN()
    return;
    // 0x8022CDA8: nop

;}
RECOMP_FUNC void func_80225D50_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D60: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225D64: bne         $v0, $zero, L_80225D7C
    if (ctx->r2 != 0) {
        // 0x80225D68: nop
    
            goto L_80225D7C;
    }
    // 0x80225D68: nop

    // 0x80225D6C: jal         0x802283FC
    // 0x80225D70: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225D70: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x80225D74: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D78: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D7C:
    // 0x80225D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D84: jr          $ra
    // 0x80225D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228AF0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228AF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228AF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B00: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80228B04: beq         $v1, $zero, L_80228B1C
    if (ctx->r3 == 0) {
        // 0x80228B08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228B1C;
    }
    // 0x80228B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B0C: beq         $v1, $v0, L_80228BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80228B10: nop
    
            goto L_80228BFC;
    }
    // 0x80228B10: nop

    // 0x80228B14: j           L_80228C1C
    // 0x80228B18: nop

        goto L_80228C1C;
    // 0x80228B18: nop

L_80228B1C:
    // 0x80228B1C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228B20: lbu         $v0, -0x5F40($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5F40);
    // 0x80228B24: beq         $v0, $zero, L_80228BB8
    if (ctx->r2 == 0) {
        // 0x80228B28: addiu       $v0, $zero, 0x1884
        ctx->r2 = ADD32(0, 0X1884);
            goto L_80228BB8;
    }
    // 0x80228B28: addiu       $v0, $zero, 0x1884
    ctx->r2 = ADD32(0, 0X1884);
    // 0x80228B2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228B30: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80228B34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B38: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228B3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228B40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B44: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80228B48: addiu       $v0, $zero, 0x407E
    ctx->r2 = ADD32(0, 0X407E);
    // 0x80228B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B50: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80228B54: lui         $v0, 0x1884
    ctx->r2 = S32(0X1884 << 16);
    // 0x80228B58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B5C: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228B60: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228B64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B68: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80228B6C: lui         $v0, 0x407E
    ctx->r2 = S32(0X407E << 16);
    // 0x80228B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B74: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228B78: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228B7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B80: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80228B84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B88: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228B8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B90: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80228B94: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80228B98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B9C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80228BA0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228BA4: addiu       $v0, $zero, 0x413C
    ctx->r2 = ADD32(0, 0X413C);
    // 0x80228BA8: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80228BAC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228BB0: lui         $v0, 0x413C
    ctx->r2 = S32(0X413C << 16);
    // 0x80228BB4: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_80228BB8:
    // 0x80228BB8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228BBC: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80228BC0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80228BC4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228BC8: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80228BCC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228BD0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x80228BD4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80228BD8: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80228BDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BE0: sh          $zero, -0xCBA($at)
    MEM_H(-0XCBA, ctx->r1) = 0;
    // 0x80228BE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BE8: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80228BEC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80228BF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BF4: j           L_80228C1C
    // 0x80228BF8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80228C1C;
    // 0x80228BF8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80228BFC:
    // 0x80228BFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228C00: jal         0x80070050
    // 0x80228C04: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x80228C04: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80228C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228C0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C10: jal         0x80034844
    // 0x80228C14: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_1;
    // 0x80228C14: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_1:
    // 0x80228C18: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80228C1C:
    // 0x80228C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C24: jr          $ra
    // 0x80228C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228C2C: nop

;}
RECOMP_FUNC void func_8022B8D0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B8D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022B8D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8DC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022B8E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022B8E4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022B8E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B8EC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022B8F0: lw          $s1, 0x5638($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5638);
    // 0x8022B8F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B8F8: beq         $v1, $v0, L_8022B974
    if (ctx->r3 == ctx->r2) {
        // 0x8022B8FC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022B974;
    }
    // 0x8022B8FC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022B900: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B904: beql        $v0, $zero, L_8022B91C
    if (ctx->r2 == 0) {
        // 0x8022B908: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B91C;
    }
    goto skip_0;
    // 0x8022B908: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B90C: beq         $v1, $zero, L_8022B934
    if (ctx->r3 == 0) {
        // 0x8022B910: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B934;
    }
    // 0x8022B910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B914: j           L_8022BB50
    // 0x8022B918: nop

        goto L_8022BB50;
    // 0x8022B918: nop

L_8022B91C:
    // 0x8022B91C: beq         $v1, $v0, L_8022BAD8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B920: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BAD8;
    }
    // 0x8022B920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B924: beq         $v1, $v0, L_8022BB04
    if (ctx->r3 == ctx->r2) {
        // 0x8022B928: nop
    
            goto L_8022BB04;
    }
    // 0x8022B928: nop

    // 0x8022B92C: j           L_8022BB50
    // 0x8022B930: nop

        goto L_8022BB50;
    // 0x8022B930: nop

L_8022B934:
    // 0x8022B934: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B938: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B93C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022B940: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B944: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B948: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022B94C: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    // 0x8022B950: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022B954: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022B958: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B95C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022B960: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022B964: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B968: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022B96C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022B970: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022B974:
    // 0x8022B974: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022B978: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B97C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022B980: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B984: bltz        $v0, L_8022BA20
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B988: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BA20;
    }
    // 0x8022B988: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B98C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022B990: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B994: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B998: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022B99C: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022B9A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B9A4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8022B9A8: jal         0x8004F820
    // 0x8022B9AC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B9AC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022B9B0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B9B4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022B9B8: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8022B9BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B9C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B9C4: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022B9C8: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x8022B9CC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022B9D0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B9D4: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022B9D8: sh          $a1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r5;
    // 0x8022B9DC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022B9E0: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022B9E4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022B9E8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022B9EC: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022B9F0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022B9F4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022B9F8: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022B9FC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BA00: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022BA04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BA08: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022BA0C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022BA10: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022BA14: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BA18: j           L_8022BB50
    // 0x8022BA1C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022BB50;
    // 0x8022BA1C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022BA20:
    // 0x8022BA20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022BA24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BA28: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022BA2C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022BA30: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022BA34: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022BA38: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022BA3C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022BA40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA44: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022BA48: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022BA4C: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022BA50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BA54: addiu       $a0, $a1, 0xC4
    ctx->r4 = ADD32(ctx->r5, 0XC4);
    // 0x8022BA58: jal         0x8009A3B4
    // 0x8022BA5C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA5C: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_1:
    // 0x8022BA60: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022BA64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA68: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022BA6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BA70: lw          $v1, 0x5644($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5644);
    // 0x8022BA74: lhu         $v0, 0xC6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC6);
    // 0x8022BA78: addiu       $v0, $v0, -0x140
    ctx->r2 = ADD32(ctx->r2, -0X140);
    // 0x8022BA7C: sh          $v0, 0xC6($v1)
    MEM_H(0XC6, ctx->r3) = ctx->r2;
    // 0x8022BA80: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022BA84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BA88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA8C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022BA90: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022BA94: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022BA98: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x8022BA9C: jal         0x8004E428
    // 0x8022BAA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004E428_29828(rdram, ctx);
        goto after_2;
    // 0x8022BAA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022BAA4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022BAA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BAAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022BAB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BAB4: lw          $v0, 0x5644($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5644);
    // 0x8022BAB8: lb          $v0, 0xD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XD);
    // 0x8022BABC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BAC0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022BAC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BAC8: lw          $v1, 0x5644($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5644);
    // 0x8022BACC: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8022BAD0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022BAD4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8022BAD8:
    // 0x8022BAD8: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022BADC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BAE0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022BAE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BAE8: bgez        $v0, L_8022BB50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BAEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BB50;
    }
    // 0x8022BAEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BAF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BAF4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022BAF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BAFC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BB00: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022BB04:
    // 0x8022BB04: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022BB08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BB0C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022BB10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB14: bgez        $v0, L_8022BB3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BB18: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_8022BB3C;
    }
    // 0x8022BB18: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8022BB1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BB20: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022BB24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BB28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022BB2C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022BB30: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022BB34: j           L_8022BB50
    // 0x8022BB38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8022BB50;
    // 0x8022BB38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022BB3C:
    // 0x8022BB3C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BB40: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022BB44: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BB48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022BB50:
    // 0x8022BB50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022BB54: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022BB58: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022BB5C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022BB60: jr          $ra
    // 0x8022BB64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022BB64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80233CD8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233CDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233CE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233CE4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80233CE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233CEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233CF0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80233CF4: jal         0x8009A3B4
    // 0x80233CF8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233CF8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80233CFC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80233D00: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80233D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233D08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233D0C: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80233D10: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x80233D14: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80233D18: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80233D1C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80233D20: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80233D24: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80233D28: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233D2C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233D30: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80233D34: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80233D38: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x80233D3C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80233D40: jal         0x8004D5D4
    // 0x80233D44: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80233D44: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80233D48: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80233D4C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80233D50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233D54: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x80233D58: jal         0x80031600
    // 0x80233D5C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80233D5C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    after_2:
    // 0x80233D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233D64: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80233D68: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233D6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80233D70: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233D74: jal         0x80031DA8
    // 0x80233D78: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80233D78: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80233D7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80233D80: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80233D84: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80233D88: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80233D8C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233D90: addiu       $v0, $v0, -0x6B3C
    ctx->r2 = ADD32(ctx->r2, -0X6B3C);
    // 0x80233D94: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80233D98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233D9C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80233DA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233DA4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233DA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233DAC: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80233DB0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80233DB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80233DB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80233DBC: jr          $ra
    // 0x80233DC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233DC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CF4C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CF50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CF5C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CF60: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CF64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CF68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CF6C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CF70: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022CF74: bne         $v1, $v0, L_8022CF90
    if (ctx->r3 != ctx->r2) {
        // 0x8022CF78: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022CF90;
    }
    // 0x8022CF78: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022CF7C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022CF80: addiu       $s1, $s1, -0x6E10
    ctx->r17 = ADD32(ctx->r17, -0X6E10);
    // 0x8022CF84: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022CF88: j           L_8022CFA0
    // 0x8022CF8C: addiu       $s3, $s3, -0x6DF0
    ctx->r19 = ADD32(ctx->r19, -0X6DF0);
        goto L_8022CFA0;
    // 0x8022CF8C: addiu       $s3, $s3, -0x6DF0
    ctx->r19 = ADD32(ctx->r19, -0X6DF0);
L_8022CF90:
    // 0x8022CF90: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022CF94: addiu       $s1, $s1, -0x6E20
    ctx->r17 = ADD32(ctx->r17, -0X6E20);
    // 0x8022CF98: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022CF9C: addiu       $s3, $s3, -0x6E00
    ctx->r19 = ADD32(ctx->r19, -0X6E00);
L_8022CFA0:
    // 0x8022CFA0: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8022CFA4: jal         0x800A3450
    // 0x8022CFA8: addiu       $s4, $s4, -0x6DE0
    ctx->r20 = ADD32(ctx->r20, -0X6DE0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022CFA8: addiu       $s4, $s4, -0x6DE0
    ctx->r20 = ADD32(ctx->r20, -0X6DE0);
    after_0:
    // 0x8022CFAC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022CFB0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022CFB4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CFB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFBC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022CFC0: beq         $v1, $v0, L_8022D04C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CFC4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022D04C;
    }
    // 0x8022CFC4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CFC8: beql        $v0, $zero, L_8022CFE0
    if (ctx->r2 == 0) {
        // 0x8022CFCC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CFE0;
    }
    goto skip_0;
    // 0x8022CFCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CFD0: beq         $v1, $zero, L_8022CFF0
    if (ctx->r3 == 0) {
        // 0x8022CFD4: nop
    
            goto L_8022CFF0;
    }
    // 0x8022CFD4: nop

    // 0x8022CFD8: j           L_8022D0DC
    // 0x8022CFDC: nop

        goto L_8022D0DC;
    // 0x8022CFDC: nop

L_8022CFE0:
    // 0x8022CFE0: beq         $v1, $v0, L_8022D060
    if (ctx->r3 == ctx->r2) {
        // 0x8022CFE4: nop
    
            goto L_8022D060;
    }
    // 0x8022CFE4: nop

    // 0x8022CFE8: j           L_8022D0DC
    // 0x8022CFEC: nop

        goto L_8022D0DC;
    // 0x8022CFEC: nop

L_8022CFF0:
    // 0x8022CFF0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022CFF4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022CFF8: bne         $v0, $zero, L_8022D01C
    if (ctx->r2 != 0) {
        // 0x8022CFFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D01C;
    }
    // 0x8022CFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D000: jal         0x800A3450
    // 0x8022D004: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022D004: nop

    after_1:
    // 0x8022D008: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D00C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022D010: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D014: beq         $v0, $zero, L_8022D028
    if (ctx->r2 == 0) {
        // 0x8022D018: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D028;
    }
    // 0x8022D018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D01C:
    // 0x8022D01C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D020: j           L_8022D03C
    // 0x8022D024: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022D03C;
    // 0x8022D024: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022D028:
    // 0x8022D028: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D02C: jal         0x8022E3B8
    // 0x8022D030: nop

    func_8022E3B8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022D030: nop

    after_2:
    // 0x8022D034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022D03C:
    // 0x8022D03C: jal         0x8022E3F8
    // 0x8022D040: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022E3F8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022D040: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022D044: j           L_8022D100
    // 0x8022D048: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022D100;
    // 0x8022D048: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022D04C:
    // 0x8022D04C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D050: jal         0x8022E3A8
    // 0x8022D054: nop

    func_8022E3A8_ovl7(rdram, ctx);
        goto after_4;
    // 0x8022D054: nop

    after_4:
    // 0x8022D058: j           L_8022D100
    // 0x8022D05C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D100;
    // 0x8022D05C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D060:
    // 0x8022D060: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022D064: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022D068: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022D06C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D070: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022D074: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D078: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022D07C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022D080: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022D084: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022D088: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D08C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022D090: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022D094: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022D098: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D09C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022D0A0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022D0A4: beq         $v1, $zero, L_8022D0D4
    if (ctx->r3 == 0) {
        // 0x8022D0A8: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022D0D4;
    }
    // 0x8022D0A8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022D0AC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022D0B0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022D0B4: beq         $v0, $zero, L_8022D0D4
    if (ctx->r2 == 0) {
        // 0x8022D0B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D0D4;
    }
    // 0x8022D0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0BC: jal         0x8022E3F8
    // 0x8022D0C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022E3F8_ovl7(rdram, ctx);
        goto after_5;
    // 0x8022D0C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022D0C4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D0C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0CC: j           L_8022D100
    // 0x8022D0D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D100;
    // 0x8022D0D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D0D4:
    // 0x8022D0D4: j           L_8022D100
    // 0x8022D0D8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022D100;
    // 0x8022D0D8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022D0DC:
    // 0x8022D0DC: jal         0x800A3450
    // 0x8022D0E0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022D0E0: nop

    after_6:
    // 0x8022D0E4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D0E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D0EC: jal         0x8022E3B8
    // 0x8022D0F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022E3B8_ovl7(rdram, ctx);
        goto after_7;
    // 0x8022D0F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022D0F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D0F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D0FC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022D100:
    // 0x8022D100: jal         0x800A3450
    // 0x8022D104: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022D104: nop

    after_8:
    // 0x8022D108: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D10C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022D110: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D114: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022D118: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022D11C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D120: beq         $v1, $v0, L_8022D138
    if (ctx->r3 == ctx->r2) {
        // 0x8022D124: nop
    
            goto L_8022D138;
    }
    // 0x8022D124: nop

    // 0x8022D128: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D12C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D130: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022D134: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D138:
    // 0x8022D138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D13C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D140: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D144: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D148: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D14C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D150: jr          $ra
    // 0x8022D154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AD94_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AD98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ADA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022ADA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ADA8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ADAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADB0: beq         $v1, $v0, L_8022AE6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADB4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022AE6C;
    }
    // 0x8022ADB4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022ADB8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022ADBC: beql        $v0, $zero, L_8022ADD4
    if (ctx->r2 == 0) {
        // 0x8022ADC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022ADD4;
    }
    goto skip_0;
    // 0x8022ADC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022ADC4: beq         $v1, $zero, L_8022ADEC
    if (ctx->r3 == 0) {
        // 0x8022ADC8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022ADEC;
    }
    // 0x8022ADC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ADCC: j           L_8022AF84
    // 0x8022ADD0: nop

        goto L_8022AF84;
    // 0x8022ADD0: nop

L_8022ADD4:
    // 0x8022ADD4: beq         $v1, $v0, L_8022AEC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADD8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AEC8;
    }
    // 0x8022ADD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022ADDC: beq         $v1, $v0, L_8022AF50
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADE0: nop
    
            goto L_8022AF50;
    }
    // 0x8022ADE0: nop

    // 0x8022ADE4: j           L_8022AF84
    // 0x8022ADE8: nop

        goto L_8022AF84;
    // 0x8022ADE8: nop

L_8022ADEC:
    // 0x8022ADEC: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022ADF0: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ADF4: lb          $a1, 0xC($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XC);
    // 0x8022ADF8: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022ADFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE00: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AE04: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022AE08: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AE0C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022AE10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AE14: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022AE18: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022AE1C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022AE20: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022AE24: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022AE28: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022AE2C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022AE30: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
    // 0x8022AE34: beq         $a1, $zero, L_8022AE6C
    if (ctx->r5 == 0) {
        // 0x8022AE38: sh          $a0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r4;
            goto L_8022AE6C;
    }
    // 0x8022AE38: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x8022AE3C: lw          $v0, 0x380($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X380);
    // 0x8022AE40: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022AE44: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022AE48: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AE4C: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022AE50: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022AE54: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022AE58: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022AE5C: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022AE60: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022AE64: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022AE68: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022AE6C:
    // 0x8022AE6C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AE70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AE74: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AE78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE7C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AE80: bltz        $v0, L_8022AEB0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022AE84: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022AEB0;
    }
    // 0x8022AE84: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022AE88: beq         $v0, $zero, L_8022AF84
    if (ctx->r2 == 0) {
        // 0x8022AE8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AF84;
    }
    // 0x8022AE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE90: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022AE94: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022AE98: jal         0x8004DA90
    // 0x8022AE9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AE9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022AEA0: jal         0x80040F30
    // 0x8022AEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022AEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AEA8: j           L_8022AF84
    // 0x8022AEAC: nop

        goto L_8022AF84;
    // 0x8022AEAC: nop

L_8022AEB0:
    // 0x8022AEB0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022AEB4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AEB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AEBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AEC0: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x8022AEC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AEC8:
    // 0x8022AEC8: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AED0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AED4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AED8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022AEDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AEE0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022AEE4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022AEE8: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022AEEC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AEF0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AEF4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022AEF8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022AEFC: jal         0x8004DA90
    // 0x8022AF00: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022AF00: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022AF04: jal         0x80040F30
    // 0x8022AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AF0C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AF10: beq         $v1, $zero, L_8022AF84
    if (ctx->r3 == 0) {
        // 0x8022AF14: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022AF84;
    }
    // 0x8022AF14: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022AF18: bnel        $v0, $zero, L_8022AF20
    if (ctx->r2 != 0) {
        // 0x8022AF1C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022AF20;
    }
    goto skip_1;
    // 0x8022AF1C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022AF20:
    // 0x8022AF20: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022AF24: beq         $v0, $zero, L_8022AF84
    if (ctx->r2 == 0) {
        // 0x8022AF28: nop
    
            goto L_8022AF84;
    }
    // 0x8022AF28: nop

    // 0x8022AF2C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022AF30: bgtz        $v0, L_8022AF84
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022AF34: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022AF84;
    }
    // 0x8022AF34: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022AF38: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AF3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AF40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AF44: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8022AF48: j           L_8022AF84
    // 0x8022AF4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022AF84;
    // 0x8022AF4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AF50:
    // 0x8022AF50: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022AF54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AF58: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022AF5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF60: bgez        $v0, L_8022AF84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AF64: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022AF84;
    }
    // 0x8022AF64: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022AF68: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AF6C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AF70: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022AF74: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AF78: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022AF7C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022AF80: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022AF84:
    // 0x8022AF84: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AF88: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AF8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022AF90: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022AF94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AF98: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022AF9C: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022AFA0: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022AFA4: bgtz        $v0, L_8022AFC0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022AFA8: nop
    
            goto L_8022AFC0;
    }
    // 0x8022AFA8: nop

    // 0x8022AFAC: bne         $v1, $zero, L_8022AFC0
    if (ctx->r3 != 0) {
        // 0x8022AFB0: nop
    
            goto L_8022AFC0;
    }
    // 0x8022AFB0: nop

    // 0x8022AFB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AFB8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022AFBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022AFC0:
    // 0x8022AFC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AFC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AFC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AFCC: jr          $ra
    // 0x8022AFD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AFD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225628_ovl7(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80225638: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022563C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225640: beq         $v1, $v0, L_80225770
    if (ctx->r3 == ctx->r2) {
        // 0x80225644: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225770;
    }
    // 0x80225644: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225648: beql        $v0, $zero, L_80225660
    if (ctx->r2 == 0) {
        // 0x8022564C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225660;
    }
    goto skip_0;
    // 0x8022564C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225650: beq         $v1, $zero, L_80225670
    if (ctx->r3 == 0) {
        // 0x80225654: nop
    
            goto L_80225670;
    }
    // 0x80225654: nop

    // 0x80225658: j           L_8022586C
    // 0x8022565C: nop

        goto L_8022586C;
    // 0x8022565C: nop

L_80225660:
    // 0x80225660: beq         $v1, $v0, L_80225820
    if (ctx->r3 == ctx->r2) {
        // 0x80225664: nop
    
            goto L_80225820;
    }
    // 0x80225664: nop

    // 0x80225668: j           L_8022586C
    // 0x8022566C: nop

        goto L_8022586C;
    // 0x8022566C: nop

L_80225670:
    // 0x80225670: jal         0x8006033C
    // 0x80225674: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225674: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80225678: beq         $v0, $zero, L_80225690
    if (ctx->r2 == 0) {
        // 0x8022567C: nop
    
            goto L_80225690;
    }
    // 0x8022567C: nop

    // 0x80225680: jal         0x802283FC
    // 0x80225684: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802283FC_ovl7(rdram, ctx);
        goto after_1;
    // 0x80225684: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x80225688: j           L_80225868
    // 0x8022568C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80225868;
    // 0x8022568C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225690:
    // 0x80225690: jal         0x8006033C
    // 0x80225694: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225694: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_2:
    // 0x80225698: bne         $v0, $zero, L_802256B0
    if (ctx->r2 != 0) {
        // 0x8022569C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_802256B0;
    }
    // 0x8022569C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802256A0: jal         0x8006033C
    // 0x802256A4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802256A4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_3:
    // 0x802256A8: beq         $v0, $zero, L_802256D0
    if (ctx->r2 == 0) {
        // 0x802256AC: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_802256D0;
    }
    // 0x802256AC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_802256B0:
    // 0x802256B0: jal         0x802283FC
    // 0x802256B4: nop

    func_802283FC_ovl7(rdram, ctx);
        goto after_4;
    // 0x802256B4: nop

    after_4:
    // 0x802256B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x802256C0: jal         0x80226488
    // 0x802256C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226488_ovl7(rdram, ctx);
        goto after_5;
    // 0x802256C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x802256C8: j           L_8022586C
    // 0x802256CC: nop

        goto L_8022586C;
    // 0x802256CC: nop

L_802256D0:
    // 0x802256D0: jal         0x8006033C
    // 0x802256D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802256D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x802256D8: beq         $v0, $zero, L_802256F0
    if (ctx->r2 == 0) {
        // 0x802256DC: nop
    
            goto L_802256F0;
    }
    // 0x802256DC: nop

    // 0x802256E0: jal         0x802283FC
    // 0x802256E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802283FC_ovl7(rdram, ctx);
        goto after_7;
    // 0x802256E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x802256E8: j           L_8022572C
    // 0x802256EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022572C;
    // 0x802256EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802256F0:
    // 0x802256F0: jal         0x8006033C
    // 0x802256F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x802256F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x802256F8: beq         $v0, $zero, L_80225710
    if (ctx->r2 == 0) {
        // 0x802256FC: nop
    
            goto L_80225710;
    }
    // 0x802256FC: nop

    // 0x80225700: jal         0x802283FC
    // 0x80225704: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802283FC_ovl7(rdram, ctx);
        goto after_9;
    // 0x80225704: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80225708: j           L_8022572C
    // 0x8022570C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022572C;
    // 0x8022570C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80225710:
    // 0x80225710: jal         0x8006033C
    // 0x80225714: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80225714: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_10:
    // 0x80225718: beq         $v0, $zero, L_80225740
    if (ctx->r2 == 0) {
        // 0x8022571C: nop
    
            goto L_80225740;
    }
    // 0x8022571C: nop

    // 0x80225720: jal         0x802283FC
    // 0x80225724: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802283FC_ovl7(rdram, ctx);
        goto after_11;
    // 0x80225724: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x80225728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022572C:
    // 0x8022572C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225730: jal         0x80226488
    // 0x80225734: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80226488_ovl7(rdram, ctx);
        goto after_12;
    // 0x80225734: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x80225738: j           L_8022586C
    // 0x8022573C: nop

        goto L_8022586C;
    // 0x8022573C: nop

L_80225740:
    // 0x80225740: jal         0x802283FC
    // 0x80225744: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802283FC_ovl7(rdram, ctx);
        goto after_13;
    // 0x80225744: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x80225748: jal         0x80060690
    // 0x8022574C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060690_3BA90(rdram, ctx);
        goto after_14;
    // 0x8022574C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_14:
    // 0x80225750: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225758: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022575C: sb          $zero, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = 0;
    // 0x80225760: jal         0x80226488
    // 0x80225764: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_80226488_ovl7(rdram, ctx);
        goto after_15;
    // 0x80225764: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_15:
    // 0x80225768: j           L_8022586C
    // 0x8022576C: nop

        goto L_8022586C;
    // 0x8022576C: nop

L_80225770:
    // 0x80225770: jal         0x8006033C
    // 0x80225774: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x80225774: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_16:
    // 0x80225778: beq         $v0, $zero, L_8022586C
    if (ctx->r2 == 0) {
        // 0x8022577C: nop
    
            goto L_8022586C;
    }
    // 0x8022577C: nop

    // 0x80225780: jal         0x8006033C
    // 0x80225784: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_17;
    // 0x80225784: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_17:
    // 0x80225788: bne         $v0, $zero, L_80225860
    if (ctx->r2 != 0) {
        // 0x8022578C: nop
    
            goto L_80225860;
    }
    // 0x8022578C: nop

    // 0x80225790: jal         0x8006033C
    // 0x80225794: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_18;
    // 0x80225794: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_18:
    // 0x80225798: bne         $v0, $zero, L_8022586C
    if (ctx->r2 != 0) {
        // 0x8022579C: nop
    
            goto L_8022586C;
    }
    // 0x8022579C: nop

    // 0x802257A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802257A4: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x802257A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257AC: lb          $a0, 0x7130($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7130);
    // 0x802257B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802257B4: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x802257B8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802257BC: lbu         $a1, 0x7132($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7132);
    // 0x802257C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802257C4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802257C8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802257CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802257D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257D4: lb          $a0, 0x7131($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7131);
    // 0x802257D8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x802257DC: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x802257E0: beq         $v0, $zero, L_8022586C
    if (ctx->r2 == 0) {
        // 0x802257E4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8022586C;
    }
    // 0x802257E4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802257E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802257EC: lbu         $v0, 0x7133($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7133);
    // 0x802257F0: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802257F4: beq         $v0, $zero, L_8022586C
    if (ctx->r2 == 0) {
        // 0x802257F8: nop
    
            goto L_8022586C;
    }
    // 0x802257F8: nop

    // 0x802257FC: jal         0x80060690
    // 0x80225800: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060690_3BA90(rdram, ctx);
        goto after_19;
    // 0x80225800: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_19:
    // 0x80225804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225808: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022580C: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
    // 0x80225810: jal         0x8006036C
    // 0x80225814: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006036C_3B76C(rdram, ctx);
        goto after_20;
    // 0x80225814: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_20:
    // 0x80225818: j           L_8022586C
    // 0x8022581C: nop

        goto L_8022586C;
    // 0x8022581C: nop

L_80225820:
    // 0x80225820: jal         0x8006033C
    // 0x80225824: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_21;
    // 0x80225824: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_21:
    // 0x80225828: bne         $v0, $zero, L_80225860
    if (ctx->r2 != 0) {
        // 0x8022582C: nop
    
            goto L_80225860;
    }
    // 0x8022582C: nop

    // 0x80225830: jal         0x8006033C
    // 0x80225834: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_22;
    // 0x80225834: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_22:
    // 0x80225838: beq         $v0, $zero, L_8022586C
    if (ctx->r2 == 0) {
        // 0x8022583C: nop
    
            goto L_8022586C;
    }
    // 0x8022583C: nop

    // 0x80225840: jal         0x80060590
    // 0x80225844: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_23;
    // 0x80225844: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_23:
    // 0x80225848: jal         0x80060690
    // 0x8022584C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060690_3BA90(rdram, ctx);
        goto after_24;
    // 0x8022584C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_24:
    // 0x80225850: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225854: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225858: j           L_8022586C
    // 0x8022585C: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
        goto L_8022586C;
    // 0x8022585C: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
L_80225860:
    // 0x80225860: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225864: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225868:
    // 0x80225868: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022586C:
    // 0x8022586C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225870: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225874: jr          $ra
    // 0x80225878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802355C8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802355C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802355CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802355D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802355D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802355D8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802355DC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802355E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802355E4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802355E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802355EC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802355F0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802355F4: beq         $v1, $zero, L_80235614
    if (ctx->r3 == 0) {
        // 0x802355F8: nop
    
            goto L_80235614;
    }
    // 0x802355F8: nop

    // 0x802355FC: jal         0x802359E4
    // 0x80235600: nop

    func_802359E4_ovl7(rdram, ctx);
        goto after_0;
    // 0x80235600: nop

    after_0:
    // 0x80235604: beq         $v0, $zero, L_80235614
    if (ctx->r2 == 0) {
        // 0x80235608: nop
    
            goto L_80235614;
    }
    // 0x80235608: nop

    // 0x8023560C: jal         0x8004F62C
    // 0x80235610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80235610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80235614:
    // 0x80235614: jal         0x8023562C
    // 0x80235618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023562C_ovl7(rdram, ctx);
        goto after_2;
    // 0x80235618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023561C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235620: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235624: jr          $ra
    // 0x80235628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225EC8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EC8: jr          $ra
    // 0x80225ECC: nop

    TRACE_RETURN()
    return;
    // 0x80225ECC: nop

;}
RECOMP_FUNC void func_80225DD8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DE8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DEC: bne         $v0, $zero, L_80225E04
    if (ctx->r2 != 0) {
        // 0x80225DF0: nop
    
            goto L_80225E04;
    }
    // 0x80225DF0: nop

    // 0x80225DF4: jal         0x802283FC
    // 0x80225DF8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225DF8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x80225DFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E00: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225E04:
    // 0x80225E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E0C: jr          $ra
    // 0x80225E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234720_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234720: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234724: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023472C: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80234730: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234738: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023473C: jal         0x8009A3B4
    // 0x80234740: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234740: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80234744: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023474C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234750: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80234754: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80234758: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8023475C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80234760: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80234764: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80234768: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8023476C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80234770: jal         0x8004D5D4
    // 0x80234774: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80234774: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80234778: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8023477C: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80234780: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234784: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x80234788: jal         0x80031600
    // 0x8023478C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8023478C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    after_2:
    // 0x80234790: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234794: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234798: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023479C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802347A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802347A4: jal         0x80031DA8
    // 0x802347A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x802347A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x802347AC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802347B0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802347B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802347B8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802347BC: sh          $v0, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r2;
    // 0x802347C0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802347C4: addiu       $v0, $v0, -0x6A10
    ctx->r2 = ADD32(ctx->r2, -0X6A10);
    // 0x802347C8: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x802347CC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802347D0: addiu       $v0, $v0, -0x6A04
    ctx->r2 = ADD32(ctx->r2, -0X6A04);
    // 0x802347D4: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x802347D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802347DC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802347E0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802347E4: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x802347E8: jal         0x80234804
    // 0x802347EC: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    func_80234804_ovl7(rdram, ctx);
        goto after_4;
    // 0x802347EC: sw          $v1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r3;
    after_4:
    // 0x802347F0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802347F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802347F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802347FC: jr          $ra
    // 0x80234800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802260EC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260FC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226100: bne         $v0, $zero, L_80226118
    if (ctx->r2 != 0) {
        // 0x80226104: nop
    
            goto L_80226118;
    }
    // 0x80226104: nop

    // 0x80226108: jal         0x802283FC
    // 0x8022610C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022610C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_0:
    // 0x80226110: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226114: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226118:
    // 0x80226118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022611C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226120: jr          $ra
    // 0x80226124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231540_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231544: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231548: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023154C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231550: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231554: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231558: lw          $v0, -0x6C70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C70);
    // 0x8023155C: jalr        $v0
    // 0x80231560: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231560: nop

    after_0:
    // 0x80231564: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231568: jr          $ra
    // 0x8023156C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023156C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F720_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F72C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F730: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F738: jal         0x8009A3B4
    // 0x8022F73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F740: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F744: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F748: jal         0x8009A3B4
    // 0x8022F74C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F74C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F750: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F754: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F758: jal         0x8009A3B4
    // 0x8022F75C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F75C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F760: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F764: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F768: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F76C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F770: lw          $v0, -0x6CF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6CF4);
    // 0x8022F774: jalr        $v0
    // 0x8022F778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022F778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F77C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F780: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F784: beq         $v0, $zero, L_8022F79C
    if (ctx->r2 == 0) {
        // 0x8022F788: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F79C;
    }
    // 0x8022F788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F78C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022F790: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F794: jal         0x8003B564
    // 0x8022F798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022F798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022F79C:
    // 0x8022F79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F7A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F7A4: jr          $ra
    // 0x8022F7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228710_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022871C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228720: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228724: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80228728: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8022872C: addiu       $s1, $s1, 0x9D0
    ctx->r17 = ADD32(ctx->r17, 0X9D0);
    // 0x80228730: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80228734: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x80228738: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022873C: beq         $v0, $zero, L_80228978
    if (ctx->r2 == 0) {
        // 0x80228740: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228978;
    }
    // 0x80228740: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228744: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228748: addu        $at, $at, $v0
    gpr jr_addend_80228750 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022874C: lw          $v0, -0x6320($at)
    ctx->r2 = ADD32(ctx->r1, -0X6320);
    // 0x80228750: jr          $v0
    // 0x80228754: nop

    switch (jr_addend_80228750 >> 2) {
        case 0: goto L_80228758; break;
        case 1: goto L_8022876C; break;
        case 2: goto L_802287CC; break;
        case 3: goto L_80228860; break;
        case 4: goto L_80228950; break;
        default: switch_error(__func__, 0x80228750, 0x80239CE0);
    }
    // 0x80228754: nop

L_80228758:
    // 0x80228758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022875C: jal         0x800616FC
    // 0x80228760: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80228760: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    after_0:
    // 0x80228764: j           L_80228850
    // 0x80228768: nop

        goto L_80228850;
    // 0x80228768: nop

L_8022876C:
    // 0x8022876C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228770: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228774: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228778: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022877C: bne         $v0, $zero, L_80228978
    if (ctx->r2 != 0) {
        // 0x80228780: addiu       $v0, $zero, 0x320
        ctx->r2 = ADD32(0, 0X320);
            goto L_80228978;
    }
    // 0x80228780: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x80228784: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228788: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    // 0x8022878C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228794: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228798: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022879C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802287A0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802287A4: lh          $v0, 0x56($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X56);
    // 0x802287A8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x802287AC: beq         $v0, $zero, L_802287BC
    if (ctx->r2 == 0) {
        // 0x802287B0: nop
    
            goto L_802287BC;
    }
    // 0x802287B0: nop

    // 0x802287B4: j           L_802287C0
    // 0x802287B8: lhu         $v0, 0x12A($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X12A);
        goto L_802287C0;
    // 0x802287B8: lhu         $v0, 0x12A($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X12A);
L_802287BC:
    // 0x802287BC: lhu         $v0, 0x128($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X128);
L_802287C0:
    // 0x802287C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802287C4: j           L_80228850
    // 0x802287C8: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80228850;
    // 0x802287C8: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_802287CC:
    // 0x802287CC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802287D0: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x802287D4: slti        $v0, $v0, 0x4588
    ctx->r2 = SIGNED(ctx->r2) < 0X4588 ? 1 : 0;
    // 0x802287D8: bnel        $v0, $zero, L_802287E0
    if (ctx->r2 != 0) {
        // 0x802287DC: sh          $zero, 0x44($v1)
        MEM_H(0X44, ctx->r3) = 0;
            goto L_802287E0;
    }
    goto skip_0;
    // 0x802287DC: sh          $zero, 0x44($v1)
    MEM_H(0X44, ctx->r3) = 0;
    skip_0:
L_802287E0:
    // 0x802287E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802287E4: addiu       $a0, $a0, -0xCBE
    ctx->r4 = ADD32(ctx->r4, -0XCBE);
    // 0x802287E8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802287EC: lhu         $v0, 0x128($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X128);
    // 0x802287F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802287F4: beq         $v0, $zero, L_80228814
    if (ctx->r2 == 0) {
        // 0x802287F8: nop
    
            goto L_80228814;
    }
    // 0x802287F8: nop

    // 0x802287FC: lh          $v0, 0x56($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X56);
    // 0x80228800: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80228804: beq         $v0, $zero, L_80228824
    if (ctx->r2 == 0) {
        // 0x80228808: nop
    
            goto L_80228824;
    }
    // 0x80228808: nop

    // 0x8022880C: j           L_80228824
    // 0x80228810: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_80228824;
    // 0x80228810: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80228814:
    // 0x80228814: lh          $v0, 0x56($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X56);
    // 0x80228818: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022881C: beql        $v0, $zero, L_80228824
    if (ctx->r2 == 0) {
        // 0x80228820: sh          $zero, 0x0($a0)
        MEM_H(0X0, ctx->r4) = 0;
            goto L_80228824;
    }
    goto skip_1;
    // 0x80228820: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    skip_1:
L_80228824:
    // 0x80228824: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228828: lhu         $v0, -0xCBE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XCBE);
    // 0x8022882C: bne         $v0, $zero, L_80228978
    if (ctx->r2 != 0) {
        // 0x80228830: nop
    
            goto L_80228978;
    }
    // 0x80228830: nop

    // 0x80228834: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228838: lh          $v0, 0x44($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X44);
    // 0x8022883C: bne         $v0, $zero, L_80228978
    if (ctx->r2 != 0) {
        // 0x80228840: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228978;
    }
    // 0x80228840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228844: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228848: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022884C: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
L_80228850:
    // 0x80228850: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80228854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228858: j           L_80228978
    // 0x8022885C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80228978;
    // 0x8022885C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80228860:
    // 0x80228860: lbu         $v1, 0xBD($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XBD);
    // 0x80228864: addiu       $v0, $zero, 0x1884
    ctx->r2 = ADD32(0, 0X1884);
    // 0x80228868: sh          $v0, 0x438($t0)
    MEM_H(0X438, ctx->r8) = ctx->r2;
    // 0x8022886C: lh          $a0, 0x438($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X438);
    // 0x80228870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228874: sh          $v0, 0x43A($t0)
    MEM_H(0X43A, ctx->r8) = ctx->r2;
    // 0x80228878: lh          $a1, 0x43A($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X43A);
    // 0x8022887C: addiu       $v0, $zero, 0x407E
    ctx->r2 = ADD32(0, 0X407E);
    // 0x80228880: sh          $v0, 0x43C($t0)
    MEM_H(0X43C, ctx->r8) = ctx->r2;
    // 0x80228884: lh          $a2, 0x43C($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X43C);
    // 0x80228888: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022888C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80228890: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
    // 0x80228894: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228898: sh          $v0, 0x442($t0)
    MEM_H(0X442, ctx->r8) = ctx->r2;
    // 0x8022889C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802288A0: sb          $a3, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r7;
    // 0x802288A4: sh          $zero, 0x440($t0)
    MEM_H(0X440, ctx->r8) = 0;
    // 0x802288A8: sh          $zero, 0x444($t0)
    MEM_H(0X444, ctx->r8) = 0;
    // 0x802288AC: sb          $v0, 0x448($t0)
    MEM_B(0X448, ctx->r8) = ctx->r2;
    // 0x802288B0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802288B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802288B8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802288BC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802288C0: sb          $v1, 0xBD($t0)
    MEM_B(0XBD, ctx->r8) = ctx->r3;
    // 0x802288C4: sw          $a0, 0x428($t0)
    MEM_W(0X428, ctx->r8) = ctx->r4;
    // 0x802288C8: sw          $a1, 0x42C($t0)
    MEM_W(0X42C, ctx->r8) = ctx->r5;
    // 0x802288CC: sw          $a2, 0x430($t0)
    MEM_W(0X430, ctx->r8) = ctx->r6;
    // 0x802288D0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802288D4: sb          $a3, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r7;
    // 0x802288D8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802288DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802288E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802288E4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802288E8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802288EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802288F0: addiu       $v0, $zero, 0x413C
    ctx->r2 = ADD32(0, 0X413C);
    // 0x802288F4: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802288F8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802288FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228900: lui         $v0, 0x413C
    ctx->r2 = S32(0X413C << 16);
    // 0x80228904: jal         0x8005F6B4
    // 0x80228908: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80228908: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022890C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228910: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x80228914: lui         $v0, 0x19A1
    ctx->r2 = S32(0X19A1 << 16);
    // 0x80228918: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022891C: lui         $v0, 0xFF74
    ctx->r2 = S32(0XFF74 << 16);
    // 0x80228920: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x80228924: lui         $v0, 0x41B2
    ctx->r2 = S32(0X41B2 << 16);
    // 0x80228928: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x8022892C: lui         $v0, 0xA8E
    ctx->r2 = S32(0XA8E << 16);
    // 0x80228930: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80228934: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80228938: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x8022893C: jal         0x800616FC
    // 0x80228940: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80228940: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    after_2:
    // 0x80228944: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80228948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022894C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80228950:
    // 0x80228950: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228954: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228958: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022895C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228960: bne         $v0, $zero, L_80228978
    if (ctx->r2 != 0) {
        // 0x80228964: nop
    
            goto L_80228978;
    }
    // 0x80228964: nop

    // 0x80228968: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022896C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228970: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228974: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80228978:
    // 0x80228978: jal         0x8006072C
    // 0x8022897C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_3;
    // 0x8022897C: nop

    after_3:
    // 0x80228980: beq         $v0, $zero, L_802289B8
    if (ctx->r2 == 0) {
        // 0x80228984: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802289B8;
    }
    // 0x80228984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228988: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022898C: bne         $v1, $v0, L_802289B8
    if (ctx->r3 != ctx->r2) {
        // 0x80228990: nop
    
            goto L_802289B8;
    }
    // 0x80228990: nop

    // 0x80228994: jal         0x80061798
    // 0x80228998: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_4;
    // 0x80228998: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8022899C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802289A4: sb          $v0, -0x5F40($at)
    MEM_B(-0X5F40, ctx->r1) = ctx->r2;
    // 0x802289A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802289AC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802289B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802289B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802289B8:
    // 0x802289B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802289BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802289C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289C4: jr          $ra
    // 0x802289C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802289C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227F04_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227F08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F0C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80227F10: lw          $s0, -0x3E80($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E80);
    // 0x80227F14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227F1C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227F20: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227F24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227F28: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80227F2C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227F30: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80227F34: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80227F38: beq         $v0, $zero, L_80228234
    if (ctx->r2 == 0) {
        // 0x80227F3C: addu        $s3, $s0, $zero
        ctx->r19 = ADD32(ctx->r16, 0);
            goto L_80228234;
    }
    // 0x80227F3C: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x80227F40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227F44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227F48: addu        $at, $at, $v0
    gpr jr_addend_80227F50 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F4C: lw          $v0, -0x6340($at)
    ctx->r2 = ADD32(ctx->r1, -0X6340);
    // 0x80227F50: jr          $v0
    // 0x80227F54: nop

    switch (jr_addend_80227F50 >> 2) {
        case 0: goto L_80227F58; break;
        case 1: goto L_80227FD8; break;
        case 2: goto L_80228080; break;
        case 3: goto L_802280A8; break;
        case 4: goto L_80228104; break;
        case 5: goto L_80228184; break;
        case 6: goto L_802281A8; break;
        case 7: goto L_802281F4; break;
        default: switch_error(__func__, 0x80227F50, 0x80239CC0);
    }
    // 0x80227F54: nop

L_80227F58:
    // 0x80227F58: jal         0x8006FF84
    // 0x80227F5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80227F5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80227F60: beq         $v0, $zero, L_80228234
    if (ctx->r2 == 0) {
        // 0x80227F64: nop
    
            goto L_80228234;
    }
    // 0x80227F64: nop

    // 0x80227F68: jal         0x802283FC
    // 0x80227F6C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_802283FC_ovl7(rdram, ctx);
        goto after_1;
    // 0x80227F6C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x80227F70: jal         0x80060170
    // 0x80227F74: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x80227F74: nop

    after_2:
    // 0x80227F78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227F7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227F80: jal         0x8005F6B4
    // 0x80227F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_3;
    // 0x80227F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227F88: jal         0x8006033C
    // 0x80227F8C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80227F8C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_4:
    // 0x80227F90: beq         $v0, $zero, L_80227FA4
    if (ctx->r2 == 0) {
        // 0x80227F94: nop
    
            goto L_80227FA4;
    }
    // 0x80227F94: nop

    // 0x80227F98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227F9C: j           L_80227FAC
    // 0x80227FA0: addiu       $v0, $v0, -0x7A60
    ctx->r2 = ADD32(ctx->r2, -0X7A60);
        goto L_80227FAC;
    // 0x80227FA0: addiu       $v0, $v0, -0x7A60
    ctx->r2 = ADD32(ctx->r2, -0X7A60);
L_80227FA4:
    // 0x80227FA4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227FA8: addiu       $v0, $v0, -0x7AF0
    ctx->r2 = ADD32(ctx->r2, -0X7AF0);
L_80227FAC:
    // 0x80227FAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227FB0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227FB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227FB8: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80227FBC: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    // 0x80227FC0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227FC4: addiu       $v0, $v0, -0x7B10
    ctx->r2 = ADD32(ctx->r2, -0X7B10);
    // 0x80227FC8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80227FCC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227FD0: jal         0x800616FC
    // 0x80227FD4: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80227FD4: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_5:
L_80227FD8:
    // 0x80227FD8: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80227FDC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80227FE0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227FE4: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    // 0x80227FE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227FEC: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    // 0x80227FF0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80227FF4: jal         0x8006033C
    // 0x80227FF8: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80227FF8: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_6:
    // 0x80227FFC: beq         $v0, $zero, L_80228034
    if (ctx->r2 == 0) {
        // 0x80228000: addiu       $a0, $s2, 0x428
        ctx->r4 = ADD32(ctx->r18, 0X428);
            goto L_80228034;
    }
    // 0x80228000: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80228004: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80228008: lui         $v0, 0x1ADC
    ctx->r2 = S32(0X1ADC << 16);
    // 0x8022800C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80228010: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228014: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80228018: lui         $v0, 0x4E40
    ctx->r2 = S32(0X4E40 << 16);
    // 0x8022801C: jal         0x8004DD04
    // 0x80228020: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x80228020: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_7:
    // 0x80228024: addiu       $v0, $zero, 0x59C
    ctx->r2 = ADD32(0, 0X59C);
    // 0x80228028: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x8022802C: j           L_80228060
    // 0x80228030: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80228060;
    // 0x80228030: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80228034:
    // 0x80228034: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80228038: lui         $v0, 0x170B
    ctx->r2 = S32(0X170B << 16);
    // 0x8022803C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80228040: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228044: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80228048: lui         $v0, 0x5A9F
    ctx->r2 = S32(0X5A9F << 16);
    // 0x8022804C: jal         0x8004DD04
    // 0x80228050: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80228050: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_8:
    // 0x80228054: addiu       $v0, $zero, 0x1D1
    ctx->r2 = ADD32(0, 0X1D1);
    // 0x80228058: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x8022805C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80228060:
    // 0x80228060: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x80228064: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x80228068: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022806C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228070: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x80228074: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228078: j           L_802281EC
    // 0x8022807C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802281EC;
    // 0x8022807C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228080:
    // 0x80228080: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228084: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x80228088: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022808C: bne         $v1, $v0, L_80228234
    if (ctx->r3 != ctx->r2) {
        // 0x80228090: nop
    
            goto L_80228234;
    }
    // 0x80228090: nop

    // 0x80228094: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228098: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022809C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802280A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280A4: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
L_802280A8:
    // 0x802280A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802280AC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802280B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802280B4: jal         0x8004DB18
    // 0x802280B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DB18_28F18(rdram, ctx);
        goto after_9;
    // 0x802280B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x802280BC: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x802280C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802280C4: bne         $v1, $v0, L_802280E0
    if (ctx->r3 != ctx->r2) {
        // 0x802280C8: nop
    
            goto L_802280E0;
    }
    // 0x802280C8: nop

    // 0x802280CC: jal         0x800600F8
    // 0x802280D0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_10;
    // 0x802280D0: nop

    after_10:
    // 0x802280D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802280D8: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x802280DC: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
L_802280E0:
    // 0x802280E0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802280E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802280E8: bne         $v0, $zero, L_80228234
    if (ctx->r2 != 0) {
        // 0x802280EC: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80228234;
    }
    // 0x802280EC: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x802280F0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802280F4: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x802280F8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802280FC: j           L_802281EC
    // 0x80228100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802281EC;
    // 0x80228100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228104:
    // 0x80228104: lw          $v0, 0xA4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XA4);
    // 0x80228108: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022810C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228110: bne         $v1, $v0, L_80228234
    if (ctx->r3 != ctx->r2) {
        // 0x80228114: nop
    
            goto L_80228234;
    }
    // 0x80228114: nop

    // 0x80228118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022811C: jal         0x800616FC
    // 0x80228120: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x80228120: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_11:
    // 0x80228124: jal         0x802284F8
    // 0x80228128: nop

    func_802284F8_ovl7(rdram, ctx);
        goto after_12;
    // 0x80228128: nop

    after_12:
    // 0x8022812C: jal         0x802283FC
    // 0x80228130: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_802283FC_ovl7(rdram, ctx);
        goto after_13;
    // 0x80228130: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_13:
    // 0x80228134: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228138: lw          $s0, -0x3E80($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E80);
    // 0x8022813C: jal         0x8006033C
    // 0x80228140: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x80228140: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_14:
    // 0x80228144: bne         $v0, $zero, L_80228150
    if (ctx->r2 != 0) {
        // 0x80228148: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_80228150;
    }
    // 0x80228148: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x8022814C: addiu       $v0, $zero, 0x767
    ctx->r2 = ADD32(0, 0X767);
L_80228150:
    // 0x80228150: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228154: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228158: lw          $s0, -0x3E7C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E7C);
    // 0x8022815C: jal         0x8006033C
    // 0x80228160: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8006033C_3B73C(rdram, ctx);
        goto after_15;
    // 0x80228160: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_15:
    // 0x80228164: bne         $v0, $zero, L_80228170
    if (ctx->r2 != 0) {
        // 0x80228168: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_80228170;
    }
    // 0x80228168: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022816C: addiu       $v0, $zero, 0x727
    ctx->r2 = ADD32(0, 0X727);
L_80228170:
    // 0x80228170: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228178: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022817C: j           L_802281DC
    // 0x80228180: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
        goto L_802281DC;
    // 0x80228180: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
L_80228184:
    // 0x80228184: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80228188: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022818C: bne         $v0, $zero, L_80228234
    if (ctx->r2 != 0) {
        // 0x80228190: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80228234;
    }
    // 0x80228190: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80228194: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80228198: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x8022819C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802281A0: j           L_802281EC
    // 0x802281A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802281EC;
    // 0x802281A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802281A8:
    // 0x802281A8: addiu       $a0, $s2, 0x438
    ctx->r4 = ADD32(ctx->r18, 0X438);
    // 0x802281AC: lh          $a2, 0x442($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X442);
    // 0x802281B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802281B4: jal         0x8004F820
    // 0x802281B8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x802281B8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_16:
    // 0x802281BC: lhu         $v1, 0x442($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X442);
    // 0x802281C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802281C4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802281C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281CC: bne         $v0, $zero, L_80228234
    if (ctx->r2 != 0) {
        // 0x802281D0: sh          $v1, 0x442($s2)
        MEM_H(0X442, ctx->r18) = ctx->r3;
            goto L_80228234;
    }
    // 0x802281D0: sh          $v1, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r3;
    // 0x802281D4: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x802281D8: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
L_802281DC:
    // 0x802281DC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802281E0: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x802281E4: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x802281E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802281EC:
    // 0x802281EC: j           L_80228234
    // 0x802281F0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80228234;
    // 0x802281F0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802281F4:
    // 0x802281F4: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802281F8: beq         $v0, $zero, L_80228208
    if (ctx->r2 == 0) {
        // 0x802281FC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228208;
    }
    // 0x802281FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228200: bne         $v0, $zero, L_80228234
    if (ctx->r2 != 0) {
        // 0x80228204: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80228234;
    }
    // 0x80228204: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_80228208:
    // 0x80228208: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022820C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228210: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228214: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228218: bne         $v0, $zero, L_80228234
    if (ctx->r2 != 0) {
        // 0x8022821C: nop
    
            goto L_80228234;
    }
    // 0x8022821C: nop

    // 0x80228220: jal         0x80070050
    // 0x80228224: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_17;
    // 0x80228224: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
    // 0x80228228: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8022822C: jal         0x8006036C
    // 0x80228230: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8006036C_3B76C(rdram, ctx);
        goto after_18;
    // 0x80228230: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_18:
L_80228234:
    // 0x80228234: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228238: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022823C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80228240: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228244: beq         $v1, $zero, L_80228268
    if (ctx->r3 == 0) {
        // 0x80228248: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80228268;
    }
    // 0x80228248: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022824C: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x80228250: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228254: beq         $v1, $v0, L_80228268
    if (ctx->r3 == ctx->r2) {
        // 0x80228258: nop
    
            goto L_80228268;
    }
    // 0x80228258: nop

    // 0x8022825C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80228260: jalr        $v0
    // 0x80228264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_19;
    // 0x80228264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_19:
L_80228268:
    // 0x80228268: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8022826C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80228270: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x80228274: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228278: beq         $v1, $zero, L_802283BC
    if (ctx->r3 == 0) {
        // 0x8022827C: nop
    
            goto L_802283BC;
    }
    // 0x8022827C: nop

    // 0x80228280: jal         0x8006072C
    // 0x80228284: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_20;
    // 0x80228284: nop

    after_20:
    // 0x80228288: beq         $v0, $zero, L_802283BC
    if (ctx->r2 == 0) {
        // 0x8022828C: nop
    
            goto L_802283BC;
    }
    // 0x8022828C: nop

    // 0x80228290: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228294: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80228298: beq         $v0, $zero, L_802282A8
    if (ctx->r2 == 0) {
        // 0x8022829C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282A8;
    }
    // 0x8022829C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802282A4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
L_802282A8:
    // 0x802282A8: jal         0x80061724
    // 0x802282AC: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_21;
    // 0x802282AC: nop

    after_21:
    // 0x802282B0: jal         0x80061090
    // 0x802282B4: nop

    func_80061090_3C490(rdram, ctx);
        goto after_22;
    // 0x802282B4: nop

    after_22:
    // 0x802282B8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802282BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802282C0: jal         0x80036B00
    // 0x802282C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_23;
    // 0x802282C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x802282C8: jal         0x8002A488
    // 0x802282CC: nop

    func_8002A488_5888(rdram, ctx);
        goto after_24;
    // 0x802282CC: nop

    after_24:
    // 0x802282D0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x802282D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802282D8: jal         0x8002A2F8
    // 0x802282DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_25;
    // 0x802282DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x802282E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802282E4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802282E8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x802282EC: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x802282F0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x802282F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802282F8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802282FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228300: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80228304: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80228308: jal         0x8006033C
    // 0x8022830C: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    func_8006033C_3B73C(rdram, ctx);
        goto after_26;
    // 0x8022830C: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    after_26:
    // 0x80228310: beq         $v0, $zero, L_80228340
    if (ctx->r2 == 0) {
        // 0x80228314: addiu       $a1, $s2, 0x438
        ctx->r5 = ADD32(ctx->r18, 0X438);
            goto L_80228340;
    }
    // 0x80228314: addiu       $a1, $s2, 0x438
    ctx->r5 = ADD32(ctx->r18, 0X438);
    // 0x80228318: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x8022831C: lui         $v0, 0x19DA
    ctx->r2 = S32(0X19DA << 16);
    // 0x80228320: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x80228324: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228328: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x8022832C: lui         $v0, 0x4EFD
    ctx->r2 = S32(0X4EFD << 16);
    // 0x80228330: jal         0x8004DD04
    // 0x80228334: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_27;
    // 0x80228334: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_27:
    // 0x80228338: j           L_80228364
    // 0x8022833C: addiu       $v0, $zero, 0x315
    ctx->r2 = ADD32(0, 0X315);
        goto L_80228364;
    // 0x8022833C: addiu       $v0, $zero, 0x315
    ctx->r2 = ADD32(0, 0X315);
L_80228340:
    // 0x80228340: addiu       $a0, $s2, 0x428
    ctx->r4 = ADD32(ctx->r18, 0X428);
    // 0x80228344: lui         $v0, 0x1610
    ctx->r2 = S32(0X1610 << 16);
    // 0x80228348: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x8022834C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228350: sw          $v0, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r2;
    // 0x80228354: lui         $v0, 0x597D
    ctx->r2 = S32(0X597D << 16);
    // 0x80228358: jal         0x8004DD04
    // 0x8022835C: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_28;
    // 0x8022835C: sw          $v0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r2;
    after_28:
    // 0x80228360: addiu       $v0, $zero, 0xFCF
    ctx->r2 = ADD32(0, 0XFCF);
L_80228364:
    // 0x80228364: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x80228368: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x8022836C: jal         0x802284F8
    // 0x80228370: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    func_802284F8_ovl7(rdram, ctx);
        goto after_29;
    // 0x80228370: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    after_29:
    // 0x80228374: jal         0x802283FC
    // 0x80228378: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_802283FC_ovl7(rdram, ctx);
        goto after_30;
    // 0x80228378: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_30:
    // 0x8022837C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228380: lw          $s0, -0x3E80($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E80);
    // 0x80228384: jal         0x8006033C
    // 0x80228388: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8006033C_3B73C(rdram, ctx);
        goto after_31;
    // 0x80228388: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_31:
    // 0x8022838C: bne         $v0, $zero, L_80228398
    if (ctx->r2 != 0) {
        // 0x80228390: addiu       $v0, $zero, 0xBB8
        ctx->r2 = ADD32(0, 0XBB8);
            goto L_80228398;
    }
    // 0x80228390: addiu       $v0, $zero, 0xBB8
    ctx->r2 = ADD32(0, 0XBB8);
    // 0x80228394: addiu       $v0, $zero, 0x767
    ctx->r2 = ADD32(0, 0X767);
L_80228398:
    // 0x80228398: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022839C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802283A0: lw          $s0, -0x3E7C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E7C);
    // 0x802283A4: jal         0x8006033C
    // 0x802283A8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8006033C_3B73C(rdram, ctx);
        goto after_32;
    // 0x802283A8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_32:
    // 0x802283AC: bne         $v0, $zero, L_802283B8
    if (ctx->r2 != 0) {
        // 0x802283B0: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_802283B8;
    }
    // 0x802283B0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802283B4: addiu       $v0, $zero, 0x727
    ctx->r2 = ADD32(0, 0X727);
L_802283B8:
    // 0x802283B8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802283BC:
    // 0x802283BC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802283C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802283C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802283C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802283CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802283D0: jr          $ra
    // 0x802283D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802283D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802283D8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802283DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802283E0: jal         0x8005FB90
    // 0x802283E4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802283E4: nop

    after_0:
    // 0x802283E8: jal         0x80060018
    // 0x802283EC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_1;
    // 0x802283EC: nop

    after_1:
    // 0x802283F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802283F4: jr          $ra
    // 0x802283F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802283F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226468_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022646C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226470: jal         0x8006036C
    // 0x80226474: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80226474: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80226478: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022647C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226480: jr          $ra
    // 0x80226484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FFC8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFC8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022FFCC: beq         $a1, $zero, L_8022FFE0
    if (ctx->r5 == 0) {
        // 0x8022FFD0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022FFE0;
    }
    // 0x8022FFD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022FFD4: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022FFD8: j           L_8022FFE8
    // 0x8022FFDC: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_8022FFE8;
    // 0x8022FFDC: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_8022FFE0:
    // 0x8022FFE0: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x8022FFE4: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_8022FFE8:
    // 0x8022FFE8: jr          $ra
    // 0x8022FFEC: nop

    TRACE_RETURN()
    return;
    // 0x8022FFEC: nop

;}
RECOMP_FUNC void func_80230EF8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230F04: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230F08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230F0C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230F10: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230F14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230F18: jal         0x8009A3B4
    // 0x80230F1C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230F1C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230F20: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230F24: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230F28: jal         0x8009A3B4
    // 0x80230F2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230F2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230F30: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230F34: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230F38: jal         0x8009A3B4
    // 0x80230F3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230F3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230F40: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230F44: jal         0x800A3450
    // 0x80230F48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230F48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230F4C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230F50: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80230F54: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230F58: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230F5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230F60: lw          $v0, -0x6C8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6C8C);
    // 0x80230F64: jalr        $v0
    // 0x80230F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230F68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230F6C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230F70: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230F74: beq         $v0, $zero, L_80230F8C
    if (ctx->r2 == 0) {
        // 0x80230F78: nop
    
            goto L_80230F8C;
    }
    // 0x80230F78: nop

    // 0x80230F7C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230F80: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80230F84: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80230F88: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80230F8C:
    // 0x80230F8C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230F90: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230F94: beq         $v0, $a1, L_80230FAC
    if (ctx->r2 == ctx->r5) {
        // 0x80230F98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230FAC;
    }
    // 0x80230F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F9C: jal         0x80050294
    // 0x80230FA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230FA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230FA4: j           L_80230FB4
    // 0x80230FA8: nop

        goto L_80230FB4;
    // 0x80230FA8: nop

L_80230FAC:
    // 0x80230FAC: jal         0x8005044C
    // 0x80230FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80230FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80230FB4:
    // 0x80230FB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230FB8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230FBC: beq         $v0, $zero, L_80230FD4
    if (ctx->r2 == 0) {
        // 0x80230FC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230FD4;
    }
    // 0x80230FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FC4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80230FC8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230FCC: jal         0x8003B564
    // 0x80230FD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80230FD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80230FD4:
    // 0x80230FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80230FDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80230FE0: jal         0x80047284
    // 0x80230FE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80230FE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80230FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230FEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230FF0: jr          $ra
    // 0x80230FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F1B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F1B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F1B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1BC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F1C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F1C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F1C8: jal         0x8009A3B4
    // 0x8022F1CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F1CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F1D0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F1D4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F1D8: jal         0x8009A3B4
    // 0x8022F1DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F1DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F1E0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F1E4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F1E8: jal         0x8009A3B4
    // 0x8022F1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F1F0: jal         0x8022F248
    // 0x8022F1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F248_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022F1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F1F8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F1FC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F200: beq         $v0, $zero, L_8022F218
    if (ctx->r2 == 0) {
        // 0x8022F204: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F218;
    }
    // 0x8022F204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F208: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022F20C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F210: jal         0x8003B564
    // 0x8022F214: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022F214: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022F218:
    // 0x8022F218: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F21C: beq         $v0, $zero, L_8022F234
    if (ctx->r2 == 0) {
        // 0x8022F220: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022F234;
    }
    // 0x8022F220: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F224: jal         0x8005044C
    // 0x8022F228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022F228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022F22C: j           L_8022F238
    // 0x8022F230: nop

        goto L_8022F238;
    // 0x8022F230: nop

L_8022F234:
    // 0x8022F234: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F238:
    // 0x8022F238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F23C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F240: jr          $ra
    // 0x8022F244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1AC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C1B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C1B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C1B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C1BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1C0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x8022C1C4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022C1C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C1CC: addiu       $v0, $v0, -0x6F74
    ctx->r2 = ADD32(ctx->r2, -0X6F74);
    // 0x8022C1D0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x8022C1D4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8022C1D8: jal         0x8022E3A8
    // 0x8022C1DC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C1DC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022C1E0: jal         0x800A3450
    // 0x8022C1E4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022C1E4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022C1E8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C1EC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022C1F0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C1F4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C1F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C1FC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x8022C200: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C204: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C208: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C20C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C210: jr          $ra
    // 0x8022C214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802306CC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802306D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802306D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802306D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802306DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802306E0: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x802306E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802306E8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x802306EC: beq         $v1, $s1, L_80230738
    if (ctx->r3 == ctx->r17) {
        // 0x802306F0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230738;
    }
    // 0x802306F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802306F4: beq         $v0, $zero, L_802307DC
    if (ctx->r2 == 0) {
        // 0x802306F8: nop
    
            goto L_802307DC;
    }
    // 0x802306F8: nop

    // 0x802306FC: bne         $v1, $zero, L_802307DC
    if (ctx->r3 != 0) {
        // 0x80230700: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802307DC;
    }
    // 0x80230700: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80230704: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80230708: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023070C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230714: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80230718: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023071C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230720: jal         0x80053ED8
    // 0x80230724: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80230724: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230728: addiu       $a0, $s0, 0x354
    ctx->r4 = ADD32(ctx->r16, 0X354);
    // 0x8023072C: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x80230730: jal         0x8009A3B4
    // 0x80230734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_80230738:
    // 0x80230738: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023073C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230740: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230744: jal         0x8004F820
    // 0x80230748: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80230748: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    after_2:
    // 0x8023074C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230750: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230754: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023075C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230760: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230764: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230768: jal         0x8004DA90
    // 0x8023076C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023076C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_3:
    // 0x80230770: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80230774: bne         $v0, $s1, L_80230788
    if (ctx->r2 != ctx->r17) {
        // 0x80230778: addiu       $a0, $zero, 0x10A
        ctx->r4 = ADD32(0, 0X10A);
            goto L_80230788;
    }
    // 0x80230778: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x8023077C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230780: jal         0x8002A2F8
    // 0x80230784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80230784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80230788:
    // 0x80230788: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023078C: lh          $v0, 0x354($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X354);
    // 0x80230790: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80230794: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230798: mflo        $v1
    ctx->r3 = lo;
    // 0x8023079C: lh          $a0, 0x358($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X358);
    // 0x802307A0: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802307A4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802307A8: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802307AC: mflo        $v0
    ctx->r2 = lo;
    // 0x802307B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802307B4: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x802307B8: beq         $v1, $zero, L_802307DC
    if (ctx->r3 == 0) {
        // 0x802307BC: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_802307DC;
    }
    // 0x802307BC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x802307C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802307C4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802307C8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802307CC: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x802307D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802307D4: jal         0x8006036C
    // 0x802307D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802307D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_5:
L_802307DC:
    // 0x802307DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802307E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802307E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802307E8: jr          $ra
    // 0x802307EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802307EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232600_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232604: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232608: jal         0x8004F418
    // 0x8023260C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023260C: nop

    after_0:
    // 0x80232610: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232614: jr          $ra
    // 0x80232618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ACD4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACD4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022ACD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACDC: beq         $v1, $v0, L_8022AD3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022ACE0: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022AD3C;
    }
    // 0x8022ACE0: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022ACE4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022ACE8: beql        $v0, $zero, L_8022AD00
    if (ctx->r2 == 0) {
        // 0x8022ACEC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AD00;
    }
    goto skip_0;
    // 0x8022ACEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022ACF0: beq         $v1, $zero, L_8022AD10
    if (ctx->r3 == 0) {
        // 0x8022ACF4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022AD10;
    }
    // 0x8022ACF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022ACF8: j           L_8022AD8C
    // 0x8022ACFC: nop

        goto L_8022AD8C;
    // 0x8022ACFC: nop

L_8022AD00:
    // 0x8022AD00: beq         $v1, $v0, L_8022AD68
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD04: nop
    
            goto L_8022AD68;
    }
    // 0x8022AD04: nop

    // 0x8022AD08: j           L_8022AD8C
    // 0x8022AD0C: nop

        goto L_8022AD8C;
    // 0x8022AD0C: nop

L_8022AD10:
    // 0x8022AD10: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x8022AD14: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022AD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AD1C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022AD20: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022AD24: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022AD28: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022AD2C: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022AD30: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
    // 0x8022AD34: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022AD38: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_8022AD3C:
    // 0x8022AD3C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022AD40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AD44: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022AD48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD4C: bgez        $v0, L_8022AD68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AD50: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022AD68;
    }
    // 0x8022AD50: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AD54: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022AD58: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AD5C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022AD60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AD64: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_8022AD68:
    // 0x8022AD68: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022AD6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AD70: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022AD74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD78: bgez        $v0, L_8022AD8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AD7C: nop
    
            goto L_8022AD8C;
    }
    // 0x8022AD7C: nop

    // 0x8022AD80: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022AD84: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022AD88: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022AD8C:
    // 0x8022AD8C: jr          $ra
    // 0x8022AD90: nop

    TRACE_RETURN()
    return;
    // 0x8022AD90: nop

;}
RECOMP_FUNC void func_8022C92C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C92C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C930: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C934: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C938: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C93C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C940: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C944: lw          $v0, -0x6E98($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6E98);
    // 0x8022C948: jalr        $v0
    // 0x8022C94C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C94C: nop

    after_0:
    // 0x8022C950: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C954: jr          $ra
    // 0x8022C958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE30_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BE38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022BE3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BE40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BE44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BE48: lw          $v0, -0x6FB4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6FB4);
    // 0x8022BE4C: jalr        $v0
    // 0x8022BE50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BE50: nop

    after_0:
    // 0x8022BE54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE58: jr          $ra
    // 0x8022BE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233710_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233710: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233714: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233718: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023371C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80233720: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233724: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x80233728: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023372C: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80233730: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80233734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233738: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023373C: jal         0x8009A3B4
    // 0x80233740: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233740: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80233744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233748: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023374C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80233750: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80233754: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x80233758: jal         0x8004D5D4
    // 0x8023375C: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023375C: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    after_1:
    // 0x80233760: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80233764: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80233768: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8023376C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233770: sh          $zero, 0xC0($s1)
    MEM_H(0XC0, ctx->r17) = 0;
    // 0x80233774: beq         $v1, $v0, L_802337B4
    if (ctx->r3 == ctx->r2) {
        // 0x80233778: sw          $zero, 0x78($s1)
        MEM_W(0X78, ctx->r17) = 0;
            goto L_802337B4;
    }
    // 0x80233778: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x8023377C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233780: beql        $v0, $zero, L_80233798
    if (ctx->r2 == 0) {
        // 0x80233784: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233798;
    }
    goto skip_0;
    // 0x80233784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233788: beq         $v1, $zero, L_802337A8
    if (ctx->r3 == 0) {
        // 0x8023378C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802337A8;
    }
    // 0x8023378C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233790: j           L_802337C8
    // 0x80233794: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_802337C8;
    // 0x80233794: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80233798:
    // 0x80233798: beq         $v1, $v0, L_802337B8
    if (ctx->r3 == ctx->r2) {
        // 0x8023379C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802337B8;
    }
    // 0x8023379C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802337A0: j           L_802337C8
    // 0x802337A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_802337C8;
    // 0x802337A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_802337A8:
    // 0x802337A8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802337AC: j           L_802337C0
    // 0x802337B0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_802337C0;
    // 0x802337B0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_802337B4:
    // 0x802337B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802337B8:
    // 0x802337B8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802337BC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802337C0:
    // 0x802337C0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x802337C4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_802337C8:
    // 0x802337C8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802337CC: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x802337D0: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x802337D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802337D8: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x802337DC: jal         0x80031428
    // 0x802337E0: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x802337E0: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    after_2:
    // 0x802337E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802337E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802337EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802337F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802337F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802337F8: jal         0x80031DA8
    // 0x802337FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x802337FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80233800: jal         0x8023381C
    // 0x80233804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023381C_ovl7(rdram, ctx);
        goto after_4;
    // 0x80233804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80233808: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023380C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80233810: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233814: jr          $ra
    // 0x80233818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
