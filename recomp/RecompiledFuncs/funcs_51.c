#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802363E4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802363E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802363E8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802363EC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x802363F0: addiu       $v0, $a0, 0xC8
    ctx->r2 = ADD32(ctx->r4, 0XC8);
    // 0x802363F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802363F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802363FC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80236400: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80236404: lw          $v1, -0x14F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14F0);
    // 0x80236408: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8023640C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236410: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236414: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023641C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80236420: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80236424: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80236428: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023642C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80236430: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80236434: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236438: jal         0x80051E18
    // 0x8023643C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8023643C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80236440: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80236444: jr          $ra
    // 0x80236448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802315C8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802315C8: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x802315CC: addiu       $v0, $v1, -0x1200
    ctx->r2 = ADD32(ctx->r3, -0X1200);
    // 0x802315D0: bltz        $v0, L_802315EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802315D4: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_802315EC;
    }
    // 0x802315D4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x802315D8: slti        $v0, $v0, 0x2C00
    ctx->r2 = SIGNED(ctx->r2) < 0X2C00 ? 1 : 0;
    // 0x802315DC: bne         $v0, $zero, L_80231600
    if (ctx->r2 != 0) {
        // 0x802315E0: addiu       $a3, $zero, -0x7D0
        ctx->r7 = ADD32(0, -0X7D0);
            goto L_80231600;
    }
    // 0x802315E0: addiu       $a3, $zero, -0x7D0
    ctx->r7 = ADD32(0, -0X7D0);
    // 0x802315E4: j           L_80231634
    // 0x802315E8: nop

        goto L_80231634;
    // 0x802315E8: nop

L_802315EC:
    // 0x802315EC: addiu       $v0, $zero, 0x1200
    ctx->r2 = ADD32(0, 0X1200);
    // 0x802315F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802315F4: slti        $v0, $v0, 0x2C00
    ctx->r2 = SIGNED(ctx->r2) < 0X2C00 ? 1 : 0;
    // 0x802315F8: beq         $v0, $zero, L_80231634
    if (ctx->r2 == 0) {
        // 0x802315FC: addiu       $a3, $zero, -0x7D0
        ctx->r7 = ADD32(0, -0X7D0);
            goto L_80231634;
    }
    // 0x802315FC: addiu       $a3, $zero, -0x7D0
    ctx->r7 = ADD32(0, -0X7D0);
L_80231600:
    // 0x80231600: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x80231604: addiu       $v0, $v0, 0x600
    ctx->r2 = ADD32(ctx->r2, 0X600);
    // 0x80231608: bltzl       $v0, L_80231624
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023160C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80231624;
    }
    goto skip_0;
    // 0x8023160C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80231610: slti        $v0, $v0, 0x2A00
    ctx->r2 = SIGNED(ctx->r2) < 0X2A00 ? 1 : 0;
    // 0x80231614: bne         $v0, $zero, L_80231630
    if (ctx->r2 != 0) {
        // 0x80231618: addiu       $a3, $zero, -0x7D0
        ctx->r7 = ADD32(0, -0X7D0);
            goto L_80231630;
    }
    // 0x80231618: addiu       $a3, $zero, -0x7D0
    ctx->r7 = ADD32(0, -0X7D0);
    // 0x8023161C: j           L_80231634
    // 0x80231620: nop

        goto L_80231634;
    // 0x80231620: nop

L_80231624:
    // 0x80231624: slti        $v0, $v0, 0x2A00
    ctx->r2 = SIGNED(ctx->r2) < 0X2A00 ? 1 : 0;
    // 0x80231628: beq         $v0, $zero, L_80231634
    if (ctx->r2 == 0) {
        // 0x8023162C: addiu       $a3, $zero, -0x7D0
        ctx->r7 = ADD32(0, -0X7D0);
            goto L_80231634;
    }
    // 0x8023162C: addiu       $a3, $zero, -0x7D0
    ctx->r7 = ADD32(0, -0X7D0);
L_80231630:
    // 0x80231630: lhu         $a3, 0x28($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X28);
L_80231634:
    // 0x80231634: lh          $v1, 0x16($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X16);
    // 0x80231638: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023163C: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231640: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231644: beq         $v0, $zero, L_80231690
    if (ctx->r2 == 0) {
        // 0x80231648: slt         $v0, $v1, $a2
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80231690;
    }
    // 0x80231648: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023164C: lh          $v0, 0x20($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X20);
    // 0x80231650: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231654: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80231658: beql        $v0, $zero, L_8023166C
    if (ctx->r2 == 0) {
        // 0x8023165C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023166C;
    }
    goto skip_1;
    // 0x8023165C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    skip_1:
    // 0x80231660: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80231664: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80231668: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023166C:
    // 0x8023166C: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x80231670: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80231674: lhu         $v1, 0x20($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X20);
    // 0x80231678: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023167C: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80231680: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231684: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231688: j           L_802316D4
    // 0x8023168C: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
        goto L_802316D4;
    // 0x8023168C: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
L_80231690:
    // 0x80231690: beq         $v0, $zero, L_802316E4
    if (ctx->r2 == 0) {
        // 0x80231694: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802316E4;
    }
    // 0x80231694: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231698: lh          $v0, 0x22($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X22);
    // 0x8023169C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802316A0: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x802316A4: beq         $v0, $zero, L_802316B0
    if (ctx->r2 == 0) {
        // 0x802316A8: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_802316B0;
    }
    // 0x802316A8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x802316AC: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
L_802316B0:
    // 0x802316B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802316B4: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x802316B8: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x802316BC: lhu         $v1, 0x22($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X22);
    // 0x802316C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802316C4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x802316C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802316D0: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
L_802316D4:
    // 0x802316D4: bnel        $v0, $zero, L_802316EC
    if (ctx->r2 != 0) {
        // 0x802316D8: sh          $a3, 0x16($a0)
        MEM_H(0X16, ctx->r4) = ctx->r7;
            goto L_802316EC;
    }
    goto skip_2;
    // 0x802316D8: sh          $a3, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r7;
    skip_2:
    // 0x802316DC: j           L_802316EC
    // 0x802316E0: nop

        goto L_802316EC;
    // 0x802316E0: nop

L_802316E4:
    // 0x802316E4: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x802316E8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_802316EC:
    // 0x802316EC: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x802316F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316F4: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x802316F8: jr          $ra
    // 0x802316FC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802316FC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022EF50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EF54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EF58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EF5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF60: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022EF64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EF68: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8022EF6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EF70: jal         0x8004DA90
    // 0x8022EF74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022EF74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022EF78: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EF7C: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022EF80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EF84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF88: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x8022EF8C: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8022EF90: blez        $v1, L_8022F048
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022EF94: nop
    
            goto L_8022F048;
    }
    // 0x8022EF94: nop

    // 0x8022EF98: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8022EF9C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022EFA0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8022EFA4: bne         $v1, $zero, L_8022EFB0
    if (ctx->r3 != 0) {
        // 0x8022EFA8: nop
    
            goto L_8022EFB0;
    }
    // 0x8022EFA8: nop

    // 0x8022EFAC: break       7
    do_break(2149773228);
L_8022EFB0:
    // 0x8022EFB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022EFB4: bne         $v1, $at, L_8022EFC8
    if (ctx->r3 != ctx->r1) {
        // 0x8022EFB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022EFC8;
    }
    // 0x8022EFB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022EFBC: bne         $v0, $at, L_8022EFC8
    if (ctx->r2 != ctx->r1) {
        // 0x8022EFC0: nop
    
            goto L_8022EFC8;
    }
    // 0x8022EFC0: nop

    // 0x8022EFC4: break       6
    do_break(2149773252);
L_8022EFC8:
    // 0x8022EFC8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022EFCC: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8022EFD0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EFD4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022EFD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EFDC: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8022EFE0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EFE4: mflo        $v1
    ctx->r3 = lo;
    // 0x8022EFE8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8022EFEC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022EFF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EFF4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022EFF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EFFC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022F000: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x8022F004: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022F008: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F00C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022F010: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F014: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8022F018: bne         $a0, $zero, L_8022F024
    if (ctx->r4 != 0) {
        // 0x8022F01C: nop
    
            goto L_8022F024;
    }
    // 0x8022F01C: nop

    // 0x8022F020: break       7
    do_break(2149773344);
L_8022F024:
    // 0x8022F024: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022F028: bne         $a0, $at, L_8022F03C
    if (ctx->r4 != ctx->r1) {
        // 0x8022F02C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022F03C;
    }
    // 0x8022F02C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022F030: bne         $v0, $at, L_8022F03C
    if (ctx->r2 != ctx->r1) {
        // 0x8022F034: nop
    
            goto L_8022F03C;
    }
    // 0x8022F034: nop

    // 0x8022F038: break       6
    do_break(2149773368);
L_8022F03C:
    // 0x8022F03C: mfhi        $a0
    ctx->r4 = hi;
    // 0x8022F040: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022F044: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
L_8022F048:
    // 0x8022F048: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F04C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F054: jr          $ra
    // 0x8022F058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022F05C: nop

;}
RECOMP_FUNC void func_802284C0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802284C4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802284C8: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x802284CC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802284D0: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x802284D4: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x802284D8: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x802284DC: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x802284E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802284E4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802284E8: lw          $v0, -0x2B8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2B8C);
    // 0x802284EC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x802284F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802284F4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802284F8: lw          $v0, -0x2B58($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2B58);
    // 0x802284FC: jr          $ra
    // 0x80228500: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228500: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022AD90_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD9C: jal         0x8004F144
    // 0x8022ADA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022ADA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022ADA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022ADA8: beq         $a0, $zero, L_8022ADE4
    if (ctx->r4 == 0) {
        // 0x8022ADAC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022ADE4;
    }
    // 0x8022ADAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ADB0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022ADB4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022ADB8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022ADBC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022ADC0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022ADC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADC8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022ADCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ADD0: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022ADD4: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022ADD8: addiu       $a1, $s0, 0x1B0
    ctx->r5 = ADD32(ctx->r16, 0X1B0);
    // 0x8022ADDC: jal         0x8009A3B4
    // 0x8022ADE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022ADE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8022ADE4:
    // 0x8022ADE4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022ADE8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022ADEC: sb          $v1, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r3;
    // 0x8022ADF0: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
    // 0x8022ADF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ADF8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022ADFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE04: jr          $ra
    // 0x8022AE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233210_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233210: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233214: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80233218: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023321C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80233220: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80233224: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80233228: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023322C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80233230: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x80233234: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80233238: jr          $ra
    // 0x8023323C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023323C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802301C8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802301CC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802301D0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802301D4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802301D8: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802301DC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802301E0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802301E4: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x802301E8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802301EC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802301F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802301F4: beq         $v1, $v0, L_80230300
    if (ctx->r3 == ctx->r2) {
        // 0x802301F8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80230300;
    }
    // 0x802301F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802301FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230200: beql        $v0, $zero, L_80230218
    if (ctx->r2 == 0) {
        // 0x80230204: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230218;
    }
    goto skip_0;
    // 0x80230204: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230208: beq         $v1, $zero, L_80230230
    if (ctx->r3 == 0) {
        // 0x8023020C: nop
    
            goto L_80230230;
    }
    // 0x8023020C: nop

    // 0x80230210: j           L_80230458
    // 0x80230214: nop

        goto L_80230458;
    // 0x80230214: nop

L_80230218:
    // 0x80230218: beq         $v1, $v0, L_802303C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023021C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802303C4;
    }
    // 0x8023021C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230220: beq         $v1, $v0, L_80230448
    if (ctx->r3 == ctx->r2) {
        // 0x80230224: nop
    
            goto L_80230448;
    }
    // 0x80230224: nop

    // 0x80230228: j           L_80230458
    // 0x8023022C: nop

        goto L_80230458;
    // 0x8023022C: nop

L_80230230:
    // 0x80230230: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x80230234: slti        $v0, $v0, 0x30
    ctx->r2 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x80230238: beq         $v0, $zero, L_802303B8
    if (ctx->r2 == 0) {
        // 0x8023023C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802303B8;
    }
    // 0x8023023C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230240: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230244: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80230248: beq         $v0, $zero, L_8023025C
    if (ctx->r2 == 0) {
        // 0x8023024C: nop
    
            goto L_8023025C;
    }
    // 0x8023024C: nop

    // 0x80230250: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x80230254: j           L_80230264
    // 0x80230258: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_80230264;
    // 0x80230258: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_8023025C:
    // 0x8023025C: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x80230260: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
L_80230264:
    // 0x80230264: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230268: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x8023026C: lh          $v0, 0x198($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X198);
    // 0x80230270: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230274: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80230278: lh          $v0, 0x19A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X19A);
    // 0x8023027C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80230280: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230284: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230288: lh          $v0, 0x19C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X19C);
    // 0x8023028C: addiu       $s0, $s3, 0x1C
    ctx->r16 = ADD32(ctx->r19, 0X1C);
    // 0x80230290: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230294: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230298: jal         0x8004EB6C
    // 0x8023029C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_0;
    // 0x8023029C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x802302A0: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x802302A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802302A8: bgez        $v1, L_802302D4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802302AC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_802302D4;
    }
    // 0x802302AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802302B0: jal         0x8004EB6C
    // 0x802302B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_1;
    // 0x802302B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802302B8: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x802302BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802302C0: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x802302C4: bne         $v0, $zero, L_802303B8
    if (ctx->r2 != 0) {
        // 0x802302C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802303B8;
    }
    // 0x802302C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302CC: j           L_802302F0
    // 0x802302D0: nop

        goto L_802302F0;
    // 0x802302D0: nop

L_802302D4:
    // 0x802302D4: jal         0x8004EB6C
    // 0x802302D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004EB6C_29F6C(rdram, ctx);
        goto after_2;
    // 0x802302D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802302DC: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x802302E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802302E4: slti        $v1, $v1, 0x20
    ctx->r3 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x802302E8: bne         $v1, $zero, L_802303B8
    if (ctx->r3 != 0) {
        // 0x802302EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802303B8;
    }
    // 0x802302EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802302F0:
    // 0x802302F0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802302F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802302F8: j           L_80230458
    // 0x802302FC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
        goto L_80230458;
    // 0x802302FC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
L_80230300:
    // 0x80230300: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x80230304: bne         $v0, $zero, L_80230398
    if (ctx->r2 != 0) {
        // 0x80230308: nop
    
            goto L_80230398;
    }
    // 0x80230308: nop

    // 0x8023030C: jal         0x8004EFE4
    // 0x80230310: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x80230310: nop

    after_3:
    // 0x80230314: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230318: beq         $s0, $zero, L_80230398
    if (ctx->r16 == 0) {
        // 0x8023031C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230398;
    }
    // 0x8023031C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230320: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230324: addiu       $v0, $s3, 0x3A8
    ctx->r2 = ADD32(ctx->r19, 0X3A8);
    // 0x80230328: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023032C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80230330: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x80230334: lhu         $v0, 0x198($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X198);
    // 0x80230338: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023033C: lhu         $v0, 0x19A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X19A);
    // 0x80230340: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80230344: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230348: lhu         $v0, 0x19C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X19C);
    // 0x8023034C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80230350: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80230354: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80230358: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x8023035C: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x80230360: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    // 0x80230364: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230368: jal         0x80031600
    // 0x8023036C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8023036C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_4:
    // 0x80230370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230374: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80230378: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023037C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80230380: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80230384: jal         0x80031DA8
    // 0x80230388: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80230388: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_5:
    // 0x8023038C: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    // 0x80230390: jal         0x8002A33C
    // 0x80230394: addiu       $a1, $s2, 0x198
    ctx->r5 = ADD32(ctx->r18, 0X198);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230394: addiu       $a1, $s2, 0x198
    ctx->r5 = ADD32(ctx->r18, 0X198);
    after_6:
L_80230398:
    // 0x80230398: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8023039C: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802303A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802303A4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802303A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802303AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802303B0: bne         $v0, $v1, L_80230458
    if (ctx->r2 != ctx->r3) {
        // 0x802303B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230458;
    }
    // 0x802303B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802303B8:
    // 0x802303B8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x802303BC: j           L_80230458
    // 0x802303C0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80230458;
    // 0x802303C0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_802303C4:
    // 0x802303C4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802303C8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802303CC: beq         $v0, $zero, L_802303E0
    if (ctx->r2 == 0) {
        // 0x802303D0: nop
    
            goto L_802303E0;
    }
    // 0x802303D0: nop

    // 0x802303D4: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x802303D8: j           L_802303E8
    // 0x802303DC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
        goto L_802303E8;
    // 0x802303DC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
L_802303E0:
    // 0x802303E0: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x802303E4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_802303E8:
    // 0x802303E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802303EC: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x802303F0: lh          $v0, 0x56($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X56);
    // 0x802303F4: lh          $a0, 0x1A($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X1A);
    // 0x802303F8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802303FC: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x80230400: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80230404: bltz        $v0, L_8023041C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230408: slti        $v0, $v0, 0x20
        ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
            goto L_8023041C;
    }
    // 0x80230408: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8023040C: beq         $v0, $zero, L_80230458
    if (ctx->r2 == 0) {
        // 0x80230410: nop
    
            goto L_80230458;
    }
    // 0x80230410: nop

    // 0x80230414: j           L_8023042C
    // 0x80230418: nop

        goto L_8023042C;
    // 0x80230418: nop

L_8023041C:
    // 0x8023041C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80230420: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80230424: beq         $v0, $zero, L_80230458
    if (ctx->r2 == 0) {
        // 0x80230428: nop
    
            goto L_80230458;
    }
    // 0x80230428: nop

L_8023042C:
    // 0x8023042C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80230430: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80230434: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230438: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x8023043C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230440: j           L_80230458
    // 0x80230444: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80230458;
    // 0x80230444: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80230448:
    // 0x80230448: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023044C: andi        $v0, $v0, 0xFFCB
    ctx->r2 = ctx->r2 & 0XFFCB;
    // 0x80230450: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230454: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_80230458:
    // 0x80230458: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8023045C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80230460: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80230464: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80230468: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023046C: jr          $ra
    // 0x80230470: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80230470: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022B5B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B5BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B5C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B5C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022B5CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022B5D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B5D4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022B5D8: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022B5DC: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x8022B5E0: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x8022B5E4: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x8022B5E8: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022B5EC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022B5F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B5F4: jal         0x8004D5D4
    // 0x8022B5F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B5F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B5FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B604: jal         0x80050294
    // 0x8022B608: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B608: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B60C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8022B610: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8022B614: addiu       $v1, $s0, 0xC
    ctx->r3 = ADD32(ctx->r16, 0XC);
L_8022B618:
    // 0x8022B618: sb          $a1, 0xFB($v1)
    MEM_B(0XFB, ctx->r3) = ctx->r5;
    // 0x8022B61C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B620: sltiu       $v0, $a0, 0x9
    ctx->r2 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x8022B624: bne         $v0, $zero, L_8022B618
    if (ctx->r2 != 0) {
        // 0x8022B628: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8022B618;
    }
    // 0x8022B628: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022B62C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B630: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022B634: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x8022B638: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022B63C: addiu       $a2, $a2, -0x2850
    ctx->r6 = ADD32(ctx->r6, -0X2850);
    // 0x8022B640: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B644: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022B648: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022B64C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B650: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8022B654: jal         0x8022DD50
    // 0x8022B658: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    func_8022DD50_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022B658: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    after_2:
    // 0x8022B65C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022B660: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022B664: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8022B668: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022B66C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B670: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B674: jr          $ra
    // 0x8022B678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E040_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E040: andi        $a1, $a1, 0x3F
    ctx->r5 = ctx->r5 & 0X3F;
    // 0x8022E044: jr          $ra
    // 0x8022E048: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022E048: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8022E35C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E35C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E360: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022E364: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022E368: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E36C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8022E370: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E374: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022E378: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E37C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E388: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8022E38C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022E390: beq         $v0, $zero, L_8022E4E0
    if (ctx->r2 == 0) {
        // 0x8022E394: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022E4E0;
    }
    // 0x8022E394: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022E398: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8022E39C: addiu       $s6, $s6, -0xA70
    ctx->r22 = ADD32(ctx->r22, -0XA70);
    // 0x8022E3A0: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_8022E3A4:
    // 0x8022E3A4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022E3A8: beq         $v0, $zero, L_8022E408
    if (ctx->r2 == 0) {
        // 0x8022E3AC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E408;
    }
    // 0x8022E3AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E3B0: addu        $v0, $v0, $s6
    gpr jr_addend_8022E3B8 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022E3B4: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022E3B8: jr          $v0
    // 0x8022E3BC: nop

    switch (jr_addend_8022E3B8 >> 2) {
        case 0: goto L_8022E3C0; break;
        case 1: goto L_8022E3CC; break;
        case 2: goto L_8022E3D8; break;
        case 3: goto L_8022E3E4; break;
        case 4: goto L_8022E3F0; break;
        case 5: goto L_8022E3FC; break;
        default: switch_error(__func__, 0x8022E3B8, 0x8023F590);
    }
    // 0x8022E3BC: nop

L_8022E3C0:
    // 0x8022E3C0: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E3C4: j           L_8022E408
    // 0x8022E3C8: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
        goto L_8022E408;
    // 0x8022E3C8: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_8022E3CC:
    // 0x8022E3CC: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E3D0: j           L_8022E404
    // 0x8022E3D4: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022E404;
    // 0x8022E3D4: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022E3D8:
    // 0x8022E3D8: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E3DC: j           L_8022E404
    // 0x8022E3E0: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_8022E404;
    // 0x8022E3E0: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022E3E4:
    // 0x8022E3E4: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E3E8: j           L_8022E404
    // 0x8022E3EC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022E404;
    // 0x8022E3EC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022E3F0:
    // 0x8022E3F0: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E3F4: j           L_8022E404
    // 0x8022E3F8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
        goto L_8022E404;
    // 0x8022E3F8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022E3FC:
    // 0x8022E3FC: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E400: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
L_8022E404:
    // 0x8022E404: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
L_8022E408:
    // 0x8022E408: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8022E40C: beq         $v0, $zero, L_8022E470
    if (ctx->r2 == 0) {
        // 0x8022E410: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022E470;
    }
    // 0x8022E410: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E414: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022E418: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022E41C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022E420: beq         $v0, $zero, L_8022E450
    if (ctx->r2 == 0) {
        // 0x8022E424: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022E450;
    }
    // 0x8022E424: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E428: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E42C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_8022E430:
    // 0x8022E430: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022E434: jal         0x8022E5C0
    // 0x8022E438: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022E5C0_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022E438: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022E43C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E440: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E444: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022E448: bne         $v0, $zero, L_8022E430
    if (ctx->r2 != 0) {
        // 0x8022E44C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022E430;
    }
    // 0x8022E44C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_8022E450:
    // 0x8022E450: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E454: addu        $a0, $s4, $v0
    ctx->r4 = ADD32(ctx->r20, ctx->r2);
    // 0x8022E458: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022E45C: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022E460: beq         $v0, $zero, L_8022E4C8
    if (ctx->r2 == 0) {
        // 0x8022E464: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022E4C8;
    }
    // 0x8022E464: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E468: j           L_8022E4C8
    // 0x8022E46C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_8022E4C8;
    // 0x8022E46C: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022E470:
    // 0x8022E470: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022E474: addu        $v1, $s4, $a0
    ctx->r3 = ADD32(ctx->r20, ctx->r4);
    // 0x8022E478: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x8022E47C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022E480: bne         $v0, $zero, L_8022E4C8
    if (ctx->r2 != 0) {
        // 0x8022E484: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022E4C8;
    }
    // 0x8022E484: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E488: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022E48C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E490: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022E494: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8022E498: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x8022E49C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022E4A0:
    // 0x8022E4A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E4A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E4A8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E4AC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022E4B0: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022E4B4: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022E4B8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E4BC: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022E4C0: bne         $v0, $zero, L_8022E4A0
    if (ctx->r2 != 0) {
        // 0x8022E4C4: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022E4A0;
    }
    // 0x8022E4C4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022E4C8:
    // 0x8022E4C8: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022E4CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022E4D0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E4D4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022E4D8: bne         $v0, $zero, L_8022E3A4
    if (ctx->r2 != 0) {
        // 0x8022E4DC: andi        $v1, $s2, 0xFF
        ctx->r3 = ctx->r18 & 0XFF;
            goto L_8022E3A4;
    }
    // 0x8022E4DC: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
L_8022E4E0:
    // 0x8022E4E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E4E4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022E4E8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022E4EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E4F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E4F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E4F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E4FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E500: jr          $ra
    // 0x8022E504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DA04_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DA08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DA14: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DA18: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022DA1C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DA20: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DA24: jal         0x8004F820
    // 0x8022DA28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022DA28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022DA2C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DA34: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DA38: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022DA3C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022DA40: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022DA44: bne         $v0, $zero, L_8022DA68
    if (ctx->r2 != 0) {
        // 0x8022DA48: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022DA68;
    }
    // 0x8022DA48: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022DA4C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022DA50: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022DA54: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022DA58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022DA5C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022DA60: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022DA64: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022DA68:
    // 0x8022DA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA70: jr          $ra
    // 0x8022DA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802348D8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802348DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802348E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802348E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802348E8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802348EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802348F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802348F4: jal         0x80040F30
    // 0x802348F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x802348F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802348FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234900: beq         $s2, $zero, L_80234A70
    if (ctx->r18 == 0) {
        // 0x80234904: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80234A70;
    }
    // 0x80234904: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80234908: beq         $v0, $zero, L_80234A08
    if (ctx->r2 == 0) {
        // 0x8023490C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80234A08;
    }
    // 0x8023490C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80234910: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80234914: bltzl       $v0, L_80234930
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234918: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80234930;
    }
    goto skip_0;
    // 0x80234918: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8023491C: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80234920: bnel        $v0, $zero, L_80234940
    if (ctx->r2 != 0) {
        // 0x80234924: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80234940;
    }
    goto skip_1;
    // 0x80234924: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80234928: j           L_8023495C
    // 0x8023492C: nop

        goto L_8023495C;
    // 0x8023492C: nop

L_80234930:
    // 0x80234930: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80234934: beq         $v0, $zero, L_8023495C
    if (ctx->r2 == 0) {
        // 0x80234938: nop
    
            goto L_8023495C;
    }
    // 0x80234938: nop

    // 0x8023493C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80234940:
    // 0x80234940: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80234944: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80234948: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023494C: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80234950: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80234954: j           L_8023499C
    // 0x80234958: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8023499C;
    // 0x80234958: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_8023495C:
    // 0x8023495C: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80234960: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234964: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234968: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023496C: bltzl       $v0, L_80234974
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234970: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80234974;
    }
    goto skip_2;
    // 0x80234970: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80234974:
    // 0x80234974: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80234978: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8023497C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80234980: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80234984: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234988: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023498C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234990: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80234994: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80234998: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8023499C:
    // 0x8023499C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802349A0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802349A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802349A8: bne         $v1, $v0, L_80234A28
    if (ctx->r3 != ctx->r2) {
        // 0x802349AC: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80234A28;
    }
    // 0x802349AC: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x802349B0: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802349B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802349B8: bne         $v1, $v0, L_80234A28
    if (ctx->r3 != ctx->r2) {
        // 0x802349BC: nop
    
            goto L_80234A28;
    }
    // 0x802349BC: nop

    // 0x802349C0: jal         0x8004F568
    // 0x802349C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x802349C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802349C8: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x802349CC: jal         0x8002A33C
    // 0x802349D0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802349D0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x802349D4: jal         0x8004F144
    // 0x802349D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802349D8: nop

    after_3:
    // 0x802349DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802349E0: beq         $s0, $zero, L_802349F4
    if (ctx->r16 == 0) {
        // 0x802349E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802349F4;
    }
    // 0x802349E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802349E8: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x802349EC: jal         0x8009A3B4
    // 0x802349F0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802349F0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_802349F4:
    // 0x802349F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802349F8: jal         0x80234BCC
    // 0x802349FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80234BCC_ovl3(rdram, ctx);
        goto after_5;
    // 0x802349FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234A00: j           L_80234A68
    // 0x80234A04: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80234A68;
    // 0x80234A04: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80234A08:
    // 0x80234A08: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80234A0C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80234A10: bne         $v1, $v0, L_80234A28
    if (ctx->r3 != ctx->r2) {
        // 0x80234A14: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80234A28;
    }
    // 0x80234A14: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80234A18: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80234A1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234A20: beq         $v1, $v0, L_80234A30
    if (ctx->r3 == ctx->r2) {
        // 0x80234A24: nop
    
            goto L_80234A30;
    }
    // 0x80234A24: nop

L_80234A28:
    // 0x80234A28: jal         0x8002A33C
    // 0x80234A2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80234A2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80234A30:
    // 0x80234A30: jal         0x8004F144
    // 0x80234A34: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80234A34: nop

    after_7:
    // 0x80234A38: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234A3C: beq         $s0, $zero, L_80234A64
    if (ctx->r16 == 0) {
        // 0x80234A40: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234A64;
    }
    // 0x80234A40: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234A44: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80234A48: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80234A4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234A54: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80234A58: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80234A5C: jal         0x8009A3B4
    // 0x80234A60: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80234A60: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80234A64:
    // 0x80234A64: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80234A68:
    // 0x80234A68: jal         0x80040834
    // 0x80234A6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x80234A6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_80234A70:
    // 0x80234A70: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80234A74: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80234A78: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234A7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234A88: jr          $ra
    // 0x80234A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225584_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225588: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022558C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225594: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225598: bne         $v0, $zero, L_802255B4
    if (ctx->r2 != 0) {
        // 0x8022559C: nop
    
            goto L_802255B4;
    }
    // 0x8022559C: nop

    // 0x802255A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802255A4: jal         0x800607C4
    // 0x802255A8: addiu       $a0, $a0, -0x3BF4
    ctx->r4 = ADD32(ctx->r4, -0X3BF4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802255A8: addiu       $a0, $a0, -0x3BF4
    ctx->r4 = ADD32(ctx->r4, -0X3BF4);
    after_0:
    // 0x802255AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802255B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255B4:
    // 0x802255B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255BC: jr          $ra
    // 0x802255C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802255C4: nop

    // 0x802255C8: nop

    // 0x802255CC: nop

;}
RECOMP_FUNC void func_8022FE60_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FE64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FE68: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022FE6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FE70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FE74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FE78: lhu         $v0, 0x26($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X26);
    // 0x8022FE7C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022FE80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FE84: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8022FE88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FE8C: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x8022FE90: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FE94: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FE98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FE9C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8022FEA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FEA4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022FEA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FEAC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022FEB0: lhu         $v0, 0x26($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X26);
    // 0x8022FEB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FEB8: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x8022FEBC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FEC0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022FEC4: bne         $v0, $zero, L_8022FEEC
    if (ctx->r2 != 0) {
        // 0x8022FEC8: addiu       $s2, $s2, 0x49B0
        ctx->r18 = ADD32(ctx->r18, 0X49B0);
            goto L_8022FEEC;
    }
    // 0x8022FEC8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022FECC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022FED0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022FED4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022FED8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FEDC: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8022FEE0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FEE8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FEEC:
    // 0x8022FEEC: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FEF0: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8022FEF4: bne         $v0, $zero, L_8022FFE0
    if (ctx->r2 != 0) {
        // 0x8022FEF8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8022FFE0;
    }
    // 0x8022FEF8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022FEFC: beq         $v0, $zero, L_8022FF38
    if (ctx->r2 == 0) {
        // 0x8022FF00: nop
    
            goto L_8022FF38;
    }
    // 0x8022FF00: nop

    // 0x8022FF04: jal         0x800540B4
    // 0x8022FF08: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x8022FF08: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_0:
    // 0x8022FF0C: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x8022FF10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FF14: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8022FF18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FF1C: bgtz        $v0, L_8022FFE0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022FF20: nop
    
            goto L_8022FFE0;
    }
    // 0x8022FF20: nop

    // 0x8022FF24: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FF28: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022FF2C: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022FF30: j           L_8022FFE0
    // 0x8022FF34: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_8022FFE0;
    // 0x8022FF34: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8022FF38:
    // 0x8022FF38: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FF3C: bne         $v0, $zero, L_8022FF98
    if (ctx->r2 != 0) {
        // 0x8022FF40: addiu       $a0, $s0, 0x3C
        ctx->r4 = ADD32(ctx->r16, 0X3C);
            goto L_8022FF98;
    }
    // 0x8022FF40: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    // 0x8022FF44: lh          $a2, 0x1A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1A);
    // 0x8022FF48: jal         0x800540EC
    // 0x8022FF4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_1;
    // 0x8022FF4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022FF50: beq         $v0, $zero, L_8022FFE0
    if (ctx->r2 == 0) {
        // 0x8022FF54: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022FFE0;
    }
    // 0x8022FF54: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022FF58: lh          $a2, 0x1A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1A);
    // 0x8022FF5C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022FF60: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022FF64: jal         0x8004F820
    // 0x8022FF68: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022FF68: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    after_2:
    // 0x8022FF6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FF70: blez        $v0, L_8022FF88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022FF74: nop
    
            goto L_8022FF88;
    }
    // 0x8022FF74: nop

    // 0x8022FF78: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FF7C: ori         $v0, $v0, 0x15
    ctx->r2 = ctx->r2 | 0X15;
    // 0x8022FF80: j           L_8022FFE0
    // 0x8022FF84: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_8022FFE0;
    // 0x8022FF84: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8022FF88:
    // 0x8022FF88: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FF8C: ori         $v0, $v0, 0x25
    ctx->r2 = ctx->r2 | 0X25;
    // 0x8022FF90: j           L_8022FFE0
    // 0x8022FF94: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_8022FFE0;
    // 0x8022FF94: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8022FF98:
    // 0x8022FF98: jal         0x800540D0
    // 0x8022FF9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_3;
    // 0x8022FF9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022FFA0: beq         $v0, $zero, L_8022FFE0
    if (ctx->r2 == 0) {
        // 0x8022FFA4: nop
    
            goto L_8022FFE0;
    }
    // 0x8022FFA4: nop

    // 0x8022FFA8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022FFAC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FFB0: bne         $v0, $zero, L_8022FFD4
    if (ctx->r2 != 0) {
        // 0x8022FFB4: nop
    
            goto L_8022FFD4;
    }
    // 0x8022FFB4: nop

    // 0x8022FFB8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022FFBC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022FFC0: bne         $v0, $zero, L_8022FFD4
    if (ctx->r2 != 0) {
        // 0x8022FFC4: nop
    
            goto L_8022FFD4;
    }
    // 0x8022FFC4: nop

    // 0x8022FFC8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FFCC: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022FFD0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8022FFD4:
    // 0x8022FFD4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022FFD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FFDC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8022FFE0:
    // 0x8022FFE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FFE4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FFE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FFEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FFF0: jr          $ra
    // 0x8022FFF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FFF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227BB4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BB4: jr          $ra
    // 0x80227BB8: nop

    TRACE_RETURN()
    return;
    // 0x80227BB8: nop

;}
RECOMP_FUNC void func_8022E07C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E07C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E080: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x8022E084: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E088: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E08C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022E090: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E094: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E098: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E09C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E0A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0A4: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8022E0A8: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022E0AC: bgez        $v1, L_8022E0B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022E0B0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022E0B8;
    }
    // 0x8022E0B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022E0B4: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8022E0B8:
    // 0x8022E0B8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022E0BC: lh          $a1, -0x3BBC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3BBC);
    // 0x8022E0C0: sra         $a0, $v0, 2
    ctx->r4 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E0C4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E0C8: bne         $v0, $zero, L_8022E0D8
    if (ctx->r2 != 0) {
        // 0x8022E0CC: srl         $v0, $a2, 31
        ctx->r2 = S32(U32(ctx->r6) >> 31);
            goto L_8022E0D8;
    }
    // 0x8022E0CC: srl         $v0, $a2, 31
    ctx->r2 = S32(U32(ctx->r6) >> 31);
    // 0x8022E0D0: j           L_8022E100
    // 0x8022E0D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022E100;
    // 0x8022E0D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022E0D8:
    // 0x8022E0D8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E0DC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8022E0E0: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E0E4: bne         $v0, $zero, L_8022E0F4
    if (ctx->r2 != 0) {
        // 0x8022E0E8: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022E0F4;
    }
    // 0x8022E0E8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E0EC: j           L_8022E100
    // 0x8022E0F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022E100;
    // 0x8022E0F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022E0F4:
    // 0x8022E0F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E0F8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E0FC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8022E100:
    // 0x8022E100: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E104: beq         $v0, $zero, L_8022E180
    if (ctx->r2 == 0) {
        // 0x8022E108: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022E180;
    }
    // 0x8022E108: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022E10C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022E110: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022E114:
    // 0x8022E114: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E118: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022E11C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022E120: beq         $v0, $zero, L_8022E150
    if (ctx->r2 == 0) {
        // 0x8022E124: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022E150;
    }
    // 0x8022E124: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E128: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E12C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E130:
    // 0x8022E130: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022E134: jal         0x8022E5C0
    // 0x8022E138: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022E5C0_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022E138: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022E13C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E140: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E144: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022E148: bne         $v0, $zero, L_8022E130
    if (ctx->r2 != 0) {
        // 0x8022E14C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022E130;
    }
    // 0x8022E14C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E150:
    // 0x8022E150: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022E154: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E158: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022E15C: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022E160: beq         $v0, $zero, L_8022E16C
    if (ctx->r2 == 0) {
        // 0x8022E164: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022E16C;
    }
    // 0x8022E164: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E168: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022E16C:
    // 0x8022E16C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022E170: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022E174: sltu        $v0, $v0, $s4
    ctx->r2 = ctx->r2 < ctx->r20 ? 1 : 0;
    // 0x8022E178: bne         $v0, $zero, L_8022E114
    if (ctx->r2 != 0) {
        // 0x8022E17C: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022E114;
    }
    // 0x8022E17C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022E180:
    // 0x8022E180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E184: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E188: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E18C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E190: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E194: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E198: jr          $ra
    // 0x8022E19C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E19C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80239674_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239674: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80239678: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023967C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80239680: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80239684: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80239688: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023968C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80239690: bgez        $v1, L_802396D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80239694: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_802396D0;
    }
    // 0x80239694: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80239698: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023969C: bne         $v1, $v0, L_802396BC
    if (ctx->r3 != ctx->r2) {
        // 0x802396A0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_802396BC;
    }
    // 0x802396A0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x802396A4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802396A8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802396AC: bne         $v1, $v0, L_802396DC
    if (ctx->r3 != ctx->r2) {
        // 0x802396B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802396DC;
    }
    // 0x802396B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802396B4: j           L_80239700
    // 0x802396B8: nop

        goto L_80239700;
    // 0x802396B8: nop

L_802396BC:
    // 0x802396BC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x802396C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802396C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802396C8: j           L_802396DC
    // 0x802396CC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_802396DC;
    // 0x802396CC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_802396D0:
    // 0x802396D0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x802396D4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802396D8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_802396DC:
    // 0x802396DC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x802396E0: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x802396E4: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802396E8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802396EC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802396F0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x802396F4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802396F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802396FC: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80239700:
    // 0x80239700: jr          $ra
    // 0x80239704: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80239704: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80239708: nop

    // 0x8023970C: nop

;}
RECOMP_FUNC void func_802287FC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228800: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228804: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228808: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022880C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228810: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228814: bne         $v0, $zero, L_80228844
    if (ctx->r2 != 0) {
        // 0x80228818: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228844;
    }
    // 0x80228818: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022881C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228820: jal         0x80050294
    // 0x80228824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228824: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022882C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228830: jal         0x80228C84
    // 0x80228834: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228834: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80228838: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022883C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228840: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228844:
    // 0x80228844: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228848: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022884C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80228850: bne         $v1, $v0, L_80228864
    if (ctx->r3 != ctx->r2) {
        // 0x80228854: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228864;
    }
    // 0x80228854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228858: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022885C: jal         0x80228C84
    // 0x80228860: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228860: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
L_80228864:
    // 0x80228864: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022886C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228870: jr          $ra
    // 0x80228874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022818C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022818C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228190: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228194: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228198: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022819C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802281A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802281A4: bne         $v0, $zero, L_802281D4
    if (ctx->r2 != 0) {
        // 0x802281A8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802281D4;
    }
    // 0x802281A8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802281AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802281B0: jal         0x80050294
    // 0x802281B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802281B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802281B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802281BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802281C0: jal         0x802284C0
    // 0x802281C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x802281C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x802281C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802281CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802281D4:
    // 0x802281D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802281D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802281DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281E0: jr          $ra
    // 0x802281E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802281E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234B80_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B84: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80234B88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234B8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234B90: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80234B94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234B98: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80234B9C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80234BA0: bne         $v0, $zero, L_80234BAC
    if (ctx->r2 != 0) {
        // 0x80234BA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234BAC;
    }
    // 0x80234BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234BA8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_80234BAC:
    // 0x80234BAC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80234BB0: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80234BB4: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80234BB8: jal         0x8009A3B4
    // 0x80234BBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234BBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80234BC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234BC4: jr          $ra
    // 0x80234BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B498_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B49C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B4A4: jal         0x8004F488
    // 0x8022B4A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022B4A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B4AC: lw          $a0, 0x450($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X450);
    // 0x8022B4B0: jal         0x8004F418
    // 0x8022B4B4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022B4B4: nop

    after_1:
    // 0x8022B4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B4BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4C0: jr          $ra
    // 0x8022B4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022B4C8: nop

    // 0x8022B4CC: nop

;}
RECOMP_FUNC void func_80228070_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228078: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022807C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228080: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228084: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228088: bne         $v0, $zero, L_802280B8
    if (ctx->r2 != 0) {
        // 0x8022808C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802280B8;
    }
    // 0x8022808C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228090: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228094: jal         0x80050294
    // 0x80228098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022809C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802280A4: jal         0x802284C0
    // 0x802280A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x802280A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x802280AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802280B8:
    // 0x802280B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802280BC: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802280C0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802280C4: bne         $v1, $v0, L_802280D8
    if (ctx->r3 != ctx->r2) {
        // 0x802280C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802280D8;
    }
    // 0x802280C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802280D0: jal         0x802284C0
    // 0x802280D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x802280D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_802280D8:
    // 0x802280D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802280DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802280E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802280E4: jr          $ra
    // 0x802280E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802280E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227208_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227208: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022720C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80227210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227214: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80227218: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022721C: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80227220: lw          $s1, 0x24($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X24);
    // 0x80227224: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227228: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022722C: beq         $v1, $v0, L_8022725C
    if (ctx->r3 == ctx->r2) {
        // 0x80227230: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022725C;
    }
    // 0x80227230: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80227234: bne         $v0, $zero, L_8022724C
    if (ctx->r2 != 0) {
        // 0x80227238: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022724C;
    }
    // 0x80227238: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022723C: beq         $v1, $v0, L_80227274
    if (ctx->r3 == ctx->r2) {
        // 0x80227240: nop
    
            goto L_80227274;
    }
    // 0x80227240: nop

    // 0x80227244: j           L_8022728C
    // 0x80227248: nop

        goto L_8022728C;
    // 0x80227248: nop

L_8022724C:
    // 0x8022724C: bltz        $v1, L_8022728C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80227250: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022728C;
    }
    // 0x80227250: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227254: j           L_8022728C
    // 0x80227258: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8022728C;
    // 0x80227258: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022725C:
    // 0x8022725C: jal         0x80036E48
    // 0x80227260: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80227260: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80227264: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80227268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022726C: j           L_8022728C
    // 0x80227270: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8022728C;
    // 0x80227270: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80227274:
    // 0x80227274: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227278: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022727C: bne         $v0, $zero, L_8022728C
    if (ctx->r2 != 0) {
        // 0x80227280: nop
    
            goto L_8022728C;
    }
    // 0x80227280: nop

    // 0x80227284: jal         0x800600F8
    // 0x80227288: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80227288: nop

    after_1:
L_8022728C:
    // 0x8022728C: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80227290: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80227294: lh          $a2, -0x930($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X930);
    // 0x80227298: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022729C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802272A0: jal         0x8004DC2C
    // 0x802272A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_2;
    // 0x802272A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802272A8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802272AC: jal         0x8004DD04
    // 0x802272B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x802272B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x802272B4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802272B8: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x802272BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272C0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x802272C4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802272C8: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x802272CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272D0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802272D4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802272D8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802272DC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802272E0: jr          $ra
    // 0x802272E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802272E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802272E8: nop

    // 0x802272EC: nop

;}
RECOMP_FUNC void func_802326A8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326A8: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802326AC: bgez        $v0, L_802326C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802326B0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802326C4;
    }
    // 0x802326B0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802326B4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802326B8: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802326BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802326C0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802326C4:
    // 0x802326C4: jr          $ra
    // 0x802326C8: nop

    TRACE_RETURN()
    return;
    // 0x802326C8: nop

;}
RECOMP_FUNC void func_80231320_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231320: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231324: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231328: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023132C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231330: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231334: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231338: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023133C: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80231340: beq         $v0, $zero, L_80231350
    if (ctx->r2 == 0) {
        // 0x80231344: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231350;
    }
    // 0x80231344: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231348: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023134C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_80231350:
    // 0x80231350: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231354: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80231358: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023135C: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x80231360: beq         $s2, $zero, L_80231504
    if (ctx->r18 == 0) {
        // 0x80231364: nop
    
            goto L_80231504;
    }
    // 0x80231364: nop

    // 0x80231368: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8023136C: xori        $v0, $a0, 0x6
    ctx->r2 = ctx->r4 ^ 0X6;
    // 0x80231370: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80231374: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231378: beql        $a0, $v0, L_80231380
    if (ctx->r4 == ctx->r2) {
        // 0x8023137C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80231380;
    }
    goto skip_0;
    // 0x8023137C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_80231380:
    // 0x80231380: bnel        $v1, $zero, L_802314FC
    if (ctx->r3 != 0) {
        // 0x80231384: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802314FC;
    }
    goto skip_1;
    // 0x80231384: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_1:
    // 0x80231388: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023138C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231390: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231394: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231398: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023139C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802313A0: lbu         $s3, 0x9($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X9);
    // 0x802313A4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802313A8: bne         $a0, $v0, L_80231478
    if (ctx->r4 != ctx->r2) {
        // 0x802313AC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80231478;
    }
    // 0x802313AC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802313B0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802313B4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802313B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802313BC: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x802313C0: jal         0x8002A33C
    // 0x802313C4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802313C4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802313C8: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x802313CC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802313D0: bgtz        $v1, L_8023142C
    if (SIGNED(ctx->r3) > 0) {
        // 0x802313D4: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8023142C;
    }
    // 0x802313D4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802313D8: jal         0x8004F144
    // 0x802313DC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802313DC: nop

    after_1:
    // 0x802313E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802313E4: beq         $v1, $zero, L_8023140C
    if (ctx->r3 == 0) {
        // 0x802313E8: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8023140C;
    }
    // 0x802313E8: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802313EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802313F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802313F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802313F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802313FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231400: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231404: jal         0x8009A3B4
    // 0x80231408: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231408: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_8023140C:
    // 0x8023140C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231410: jal         0x8007A1B8
    // 0x80231414: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80231414: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80231418: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023141C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231420: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231424: j           L_80231504
    // 0x80231428: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80231504;
    // 0x80231428: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023142C:
    // 0x8023142C: lhu         $v0, 0x386($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X386);
    // 0x80231430: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231434: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80231438: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023143C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80231440: bne         $v1, $zero, L_80231460
    if (ctx->r3 != 0) {
        // 0x80231444: sh          $a0, 0x386($s0)
        MEM_H(0X386, ctx->r16) = ctx->r4;
            goto L_80231460;
    }
    // 0x80231444: sh          $a0, 0x386($s0)
    MEM_H(0X386, ctx->r16) = ctx->r4;
    // 0x80231448: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023144C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231450: sll         $v1, $s3, 4
    ctx->r3 = S32(ctx->r19 << 4);
    // 0x80231454: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80231458: bne         $v0, $zero, L_80231504
    if (ctx->r2 != 0) {
        // 0x8023145C: nop
    
            goto L_80231504;
    }
    // 0x8023145C: nop

L_80231460:
    // 0x80231460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231464: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231468: jal         0x80231520
    // 0x8023146C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80231520_ovl4(rdram, ctx);
        goto after_4;
    // 0x8023146C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_4:
    // 0x80231470: j           L_802314F0
    // 0x80231474: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802314F0;
    // 0x80231474: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80231478:
    // 0x80231478: lhu         $v0, 0xB2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB2);
    // 0x8023147C: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80231480: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80231484: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80231488: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023148C: bne         $v1, $zero, L_802314AC
    if (ctx->r3 != 0) {
        // 0x80231490: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_802314AC;
    }
    // 0x80231490: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x80231494: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80231498: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023149C: sll         $v1, $s3, 4
    ctx->r3 = S32(ctx->r19 << 4);
    // 0x802314A0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802314A4: bne         $v0, $zero, L_802314FC
    if (ctx->r2 != 0) {
        // 0x802314A8: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802314FC;
    }
    // 0x802314A8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
L_802314AC:
    // 0x802314AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802314B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802314B4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802314B8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802314BC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802314C0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802314C4: sh          $zero, 0x386($s0)
    MEM_H(0X386, ctx->r16) = 0;
    // 0x802314C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802314CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802314D0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802314D4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x802314D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802314DC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x802314E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802314E4: jal         0x80231520
    // 0x802314E8: sw          $v0, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r2;
    func_80231520_ovl4(rdram, ctx);
        goto after_5;
    // 0x802314E8: sw          $v0, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r2;
    after_5:
    // 0x802314EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802314F0:
    // 0x802314F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802314F4: j           L_80231504
    // 0x802314F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80231504;
    // 0x802314F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802314FC:
    // 0x802314FC: jal         0x8002A33C
    // 0x80231500: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80231500: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_80231504:
    // 0x80231504: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231508: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023150C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231510: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231518: jr          $ra
    // 0x8023151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231E6C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231E70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231E74: jal         0x8004F418
    // 0x80231E78: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80231E78: nop

    after_0:
    // 0x80231E7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231E80: jr          $ra
    // 0x80231E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231E88: nop

    // 0x80231E8C: nop

;}
RECOMP_FUNC void func_8022E4C8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E4CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E4D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E4D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E4D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E4DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E4E0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022E4E4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022E4E8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022E4EC: beq         $v0, $zero, L_8022E5F4
    if (ctx->r2 == 0) {
        // 0x8022E4F0: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_8022E5F4;
    }
    // 0x8022E4F0: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8022E4F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E4F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E4FC: addu        $at, $at, $v0
    gpr jr_addend_8022E504 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E500: lw          $v0, 0x1620($at)
    ctx->r2 = ADD32(ctx->r1, 0X1620);
    // 0x8022E504: jr          $v0
    // 0x8022E508: nop

    switch (jr_addend_8022E504 >> 2) {
        case 0: goto L_8022E50C; break;
        case 1: goto L_8022E530; break;
        case 2: goto L_8022E55C; break;
        case 3: goto L_8022E568; break;
        case 4: goto L_8022E5A4; break;
        case 5: goto L_8022E5C0; break;
        default: switch_error(__func__, 0x8022E504, 0x80241620);
    }
    // 0x8022E508: nop

L_8022E50C:
    // 0x8022E50C: jal         0x8022DE4C
    // 0x8022E510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DE4C_ovl4(rdram, ctx);
        goto after_0;
    // 0x8022E510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022E514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E518: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E51C: jal         0x80050294
    // 0x8022E520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022E520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022E524: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E528: j           L_8022E5B8
    // 0x8022E52C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E5B8;
    // 0x8022E52C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E530:
    // 0x8022E530: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022E534: bne         $v0, $s0, L_8022E5F4
    if (ctx->r2 != ctx->r16) {
        // 0x8022E538: nop
    
            goto L_8022E5F4;
    }
    // 0x8022E538: nop

    // 0x8022E53C: jal         0x8022E7F8
    // 0x8022E540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E7F8_ovl4(rdram, ctx);
        goto after_2;
    // 0x8022E540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E544: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E548: beql        $v0, $zero, L_8022E5F4
    if (ctx->r2 == 0) {
        // 0x8022E54C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022E5F4;
    }
    goto skip_0;
    // 0x8022E54C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022E550: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E554: j           L_8022E5B8
    // 0x8022E558: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E5B8;
    // 0x8022E558: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E55C:
    // 0x8022E55C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E560: j           L_8022E5B8
    // 0x8022E564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022E5B8;
    // 0x8022E564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E568:
    // 0x8022E568: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022E56C: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x8022E570: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022E574: jal         0x80061510
    // 0x8022E578: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8022E578: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8022E57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E584: jal         0x80050294
    // 0x8022E588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022E588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022E58C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022E590: jal         0x8002A33C
    // 0x8022E594: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022E594: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022E598: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E59C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E5A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E5A4:
    // 0x8022E5A4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022E5A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E5AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E5B0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E5B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022E5B8:
    // 0x8022E5B8: j           L_8022E5F4
    // 0x8022E5BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E5F4;
    // 0x8022E5BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E5C0:
    // 0x8022E5C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E5C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E5C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E5CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E5D0: bne         $v0, $zero, L_8022E5F4
    if (ctx->r2 != 0) {
        // 0x8022E5D4: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_8022E5F4;
    }
    // 0x8022E5D4: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x8022E5D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E5DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E5E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022E5E4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022E5E8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E5EC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E5F0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8022E5F4:
    // 0x8022E5F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E5F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E5FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E600: jr          $ra
    // 0x8022E604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802327D8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327D8: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802327DC: bgez        $v0, L_8023280C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802327E0: nop
    
            goto L_8023280C;
    }
    // 0x802327E0: nop

    // 0x802327E4: lhu         $v0, 0x34C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34C);
    // 0x802327E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802327EC: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x802327F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802327F4: bne         $v0, $zero, L_8023280C
    if (ctx->r2 != 0) {
        // 0x802327F8: nop
    
            goto L_8023280C;
    }
    // 0x802327F8: nop

    // 0x802327FC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232800: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80232804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232808: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8023280C:
    // 0x8023280C: jr          $ra
    // 0x80232810: nop

    TRACE_RETURN()
    return;
    // 0x80232810: nop

;}
RECOMP_FUNC void func_8023992C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023992C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023993C: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x80239940: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80239944: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80239948: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x8023994C: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80239950: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x80239954: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80239958: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023995C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80239960: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80239964: beq         $v1, $zero, L_80239970
    if (ctx->r3 == 0) {
        // 0x80239968: sh          $a0, 0xD8($s0)
        MEM_H(0XD8, ctx->r16) = ctx->r4;
            goto L_80239970;
    }
    // 0x80239968: sh          $a0, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r4;
    // 0x8023996C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80239970:
    // 0x80239970: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80239974: beql        $v0, $zero, L_8023997C
    if (ctx->r2 == 0) {
        // 0x80239978: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8023997C;
    }
    goto skip_0;
    // 0x80239978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
L_8023997C:
    // 0x8023997C: beq         $a1, $zero, L_802399D8
    if (ctx->r5 == 0) {
        // 0x80239980: nop
    
            goto L_802399D8;
    }
    // 0x80239980: nop

    // 0x80239984: jal         0x8004F144
    // 0x80239988: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239988: nop

    after_0:
    // 0x8023998C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239990: beq         $v1, $zero, L_802399B8
    if (ctx->r3 == 0) {
        // 0x80239994: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802399B8;
    }
    // 0x80239994: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80239998: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023999C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802399A0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802399A4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802399A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802399AC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802399B0: jal         0x8009A3B4
    // 0x802399B4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802399B4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
L_802399B8:
    // 0x802399B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399BC: jal         0x8007A1B8
    // 0x802399C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x802399C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802399C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802399C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802399CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802399D0: j           L_802399FC
    // 0x802399D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802399FC;
    // 0x802399D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802399D8:
    // 0x802399D8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802399DC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802399E0: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802399E4: jal         0x8004DA90
    // 0x802399E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802399E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802399EC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802399F0: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802399F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802399F8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_802399FC:
    // 0x802399FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239A00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239A04: jr          $ra
    // 0x80239A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C58_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227C5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227C68: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227C6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227C70: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80227C74: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80227C78: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80227C7C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x80227C80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C84: beq         $v0, $zero, L_80227E80
    if (ctx->r2 == 0) {
        // 0x80227C88: sw          $v0, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r2;
            goto L_80227E80;
    }
    // 0x80227C88: sw          $v0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r2;
    // 0x80227C8C: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80227C90: lui         $v1, 0x3800
    ctx->r3 = S32(0X3800 << 16);
    // 0x80227C94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C98: beq         $v0, $zero, L_80227E78
    if (ctx->r2 == 0) {
        // 0x80227C9C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80227E78;
    }
    // 0x80227C9C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80227CA0: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80227CA4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80227CA8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80227CAC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80227CB0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80227CB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227CB8: bgtz        $v1, L_80227CF0
    if (SIGNED(ctx->r3) > 0) {
        // 0x80227CBC: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80227CF0;
    }
    // 0x80227CBC: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80227CC0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227CC4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227CC8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227CCC: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227CD0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80227CD4: ori         $v0, $v0, 0x820
    ctx->r2 = ctx->r2 | 0X820;
    // 0x80227CD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227CDC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227CE0: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80227CE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80227CE8: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80227CEC: sw          $v0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r2;
L_80227CF0:
    // 0x80227CF0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227CF4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80227CF8: beq         $v0, $zero, L_80227E24
    if (ctx->r2 == 0) {
        // 0x80227CFC: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_80227E24;
    }
    // 0x80227CFC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80227D00: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x80227D04: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80227D08: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80227D0C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80227D10: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80227D14: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80227D18: bne         $v1, $zero, L_80227D50
    if (ctx->r3 != 0) {
        // 0x80227D1C: sh          $a0, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r4;
            goto L_80227D50;
    }
    // 0x80227D1C: sh          $a0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r4;
    // 0x80227D20: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80227D24: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80227D28: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80227D2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227D30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D34: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80227D38: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80227D3C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227D40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227D44: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80227D48: bne         $v0, $zero, L_80227E64
    if (ctx->r2 != 0) {
        // 0x80227D4C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80227E64;
    }
    // 0x80227D4C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80227D50:
    // 0x80227D50: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80227D54: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227D58: jal         0x8002A33C
    // 0x80227D5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227D5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80227D60: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x80227D64: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227D68: beq         $v0, $zero, L_80227DB8
    if (ctx->r2 == 0) {
        // 0x80227D6C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227DB8;
    }
    // 0x80227D6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227D70: jal         0x8004EC38
    // 0x80227D74: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227D74: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    after_1:
    // 0x80227D78: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80227D7C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227D80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227D84: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227D88: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227D8C: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80227D90: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227D94: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80227D98: beq         $v1, $zero, L_80227DAC
    if (ctx->r3 == 0) {
        // 0x80227D9C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227DAC;
    }
    // 0x80227D9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227DA0: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80227DA4: j           L_80227DF8
    // 0x80227DA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227DF8;
    // 0x80227DA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227DAC:
    // 0x80227DAC: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80227DB0: j           L_80227E08
    // 0x80227DB4: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
        goto L_80227E08;
    // 0x80227DB4: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_80227DB8:
    // 0x80227DB8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80227DBC: addiu       $a0, $a0, 0x770
    ctx->r4 = ADD32(ctx->r4, 0X770);
    // 0x80227DC0: jal         0x8004EC38
    // 0x80227DC4: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80227DC4: addiu       $a1, $s0, 0x344
    ctx->r5 = ADD32(ctx->r16, 0X344);
    after_2:
    // 0x80227DC8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80227DCC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227DD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227DD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227DD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227DDC: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80227DE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227DE4: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80227DE8: beq         $v0, $zero, L_80227E00
    if (ctx->r2 == 0) {
        // 0x80227DEC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80227E00;
    }
    // 0x80227DEC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227DF0: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80227DF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227DF8:
    // 0x80227DF8: j           L_80227E18
    // 0x80227DFC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80227E18;
    // 0x80227DFC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80227E00:
    // 0x80227E00: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80227E04: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80227E08:
    // 0x80227E08: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80227E0C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227E10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227E14: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227E18:
    // 0x80227E18: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227E1C: j           L_80227E6C
    // 0x80227E20: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_80227E6C;
    // 0x80227E20: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80227E24:
    // 0x80227E24: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80227E28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227E2C: bne         $v0, $zero, L_80227E64
    if (ctx->r2 != 0) {
        // 0x80227E30: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80227E64;
    }
    // 0x80227E30: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80227E34: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80227E38: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80227E3C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80227E40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227E44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227E48: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80227E4C: lh          $v0, 0x332($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X332);
    // 0x80227E50: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x80227E54: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80227E58: bne         $v0, $zero, L_80227E64
    if (ctx->r2 != 0) {
        // 0x80227E5C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80227E64;
    }
    // 0x80227E5C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80227E60: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80227E64:
    // 0x80227E64: jal         0x8002A33C
    // 0x80227E68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80227E68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80227E6C:
    // 0x80227E6C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227E70: j           L_80227E80
    // 0x80227E74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_80227E80;
    // 0x80227E74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80227E78:
    // 0x80227E78: jal         0x8002A33C
    // 0x80227E7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80227E7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80227E80:
    // 0x80227E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227E8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E94: jr          $ra
    // 0x80227E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80227E9C: nop

;}
RECOMP_FUNC void func_8023BFB8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BFB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BFBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BFC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023BFC4: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x8023BFC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BFCC: jal         0x8006033C
    // 0x8023BFD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023BFD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023BFD4: beq         $v0, $zero, L_8023C044
    if (ctx->r2 == 0) {
        // 0x8023BFD8: nop
    
            goto L_8023C044;
    }
    // 0x8023BFD8: nop

    // 0x8023BFDC: jal         0x8006033C
    // 0x8023BFE0: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8023BFE0: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8023BFE4: bne         $v0, $zero, L_8023C0B4
    if (ctx->r2 != 0) {
        // 0x8023BFE8: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023C0B4;
    }
    // 0x8023BFE8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023BFEC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023BFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BFF4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023BFF8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023BFFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023C000: jal         0x8002C678
    // 0x8023C004: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023C004: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x8023C008: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C00C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C010: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023C014: jal         0x800319B4
    // 0x8023C018: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023C018: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x8023C01C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023C020: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023C024: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C028: jal         0x8006036C
    // 0x8023C02C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023C02C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023C030: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023C034: jal         0x8002A33C
    // 0x8023C038: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8023C038: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x8023C03C: j           L_8023C0B4
    // 0x8023C040: nop

        goto L_8023C0B4;
    // 0x8023C040: nop

L_8023C044:
    // 0x8023C044: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C048: jal         0x8003E6BC
    // 0x8023C04C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x8023C04C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x8023C050: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023C054: beq         $v1, $v0, L_8023C0B4
    if (ctx->r3 == ctx->r2) {
        // 0x8023C058: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023C0B4;
    }
    // 0x8023C058: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023C05C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8023C060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C064: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023C068: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023C06C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023C070: jal         0x8002C678
    // 0x8023C074: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8023C074: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x8023C078: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023C07C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C080: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023C084: jal         0x800319B4
    // 0x8023C088: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x8023C088: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x8023C08C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023C090: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023C094: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C098: jal         0x8006036C
    // 0x8023C09C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8023C09C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x8023C0A0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023C0A4: jal         0x8002A33C
    // 0x8023C0A8: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023C0A8: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x8023C0AC: jal         0x80060590
    // 0x8023C0B0: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8023C0B0: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8023C0B4:
    // 0x8023C0B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C0B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C0BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C0C0: jr          $ra
    // 0x8023C0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230944_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230944: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230948: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023094C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230950: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80230954: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80230958: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023095C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230960: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230964: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230968: bne         $v1, $v0, L_802309F8
    if (ctx->r3 != ctx->r2) {
        // 0x8023096C: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_802309F8;
    }
    // 0x8023096C: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80230970: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80230974: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80230978: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8023097C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80230980: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80230984: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80230988: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8023098C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80230990: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230994: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80230998: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8023099C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802309A0: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x802309A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802309A8: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x802309AC: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x802309B0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802309B4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x802309B8: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802309BC: bne         $v1, $zero, L_802309F8
    if (ctx->r3 != 0) {
        // 0x802309C0: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802309F8;
    }
    // 0x802309C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802309C4: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x802309C8: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x802309CC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802309D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802309D4: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x802309D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802309DC: beq         $v1, $v0, L_802309F8
    if (ctx->r3 == ctx->r2) {
        // 0x802309E0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802309F8;
    }
    // 0x802309E0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802309E4: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802309E8: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x802309EC: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x802309F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802309F4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802309F8:
    // 0x802309F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802309FC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230A00: beq         $v0, $zero, L_80230B4C
    if (ctx->r2 == 0) {
        // 0x80230A04: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230B4C;
    }
    // 0x80230A04: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230A08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230A0C: addu        $at, $at, $v0
    gpr jr_addend_80230A14 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230A10: lw          $v0, 0x1658($at)
    ctx->r2 = ADD32(ctx->r1, 0X1658);
    // 0x80230A14: jr          $v0
    // 0x80230A18: nop

    switch (jr_addend_80230A14 >> 2) {
        case 0: goto L_80230A1C; break;
        case 1: goto L_80230A3C; break;
        case 2: goto L_80230A74; break;
        case 3: goto L_80230AA4; break;
        case 4: goto L_80230AA4; break;
        default: switch_error(__func__, 0x80230A14, 0x80241658);
    }
    // 0x80230A18: nop

L_80230A1C:
    // 0x80230A1C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230A20: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80230A24: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80230A28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230A2C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230A30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80230A34: j           L_80230A54
    // 0x80230A38: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_80230A54;
    // 0x80230A38: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_80230A3C:
    // 0x80230A3C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80230A40: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80230A44: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80230A48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230A4C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230A50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80230A54:
    // 0x80230A54: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80230A58: jal         0x8004DBA0
    // 0x80230A5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x80230A5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80230A60: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80230A64: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80230A68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230A6C: j           L_80230B4C
    // 0x80230A70: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80230B4C;
    // 0x80230A70: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80230A74:
    // 0x80230A74: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230A78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230A7C: bne         $v1, $v0, L_80230B4C
    if (ctx->r3 != ctx->r2) {
        // 0x80230A80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230B4C;
    }
    // 0x80230A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230A84: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80230A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230A8C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80230A90: jal         0x80050294
    // 0x80230A94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80230A94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230A98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230A9C: j           L_80230B4C
    // 0x80230AA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230B4C;
    // 0x80230AA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230AA4:
    // 0x80230AA4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80230AA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230AAC: bne         $v1, $v0, L_80230B18
    if (ctx->r3 != ctx->r2) {
        // 0x80230AB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230B18;
    }
    // 0x80230AB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230AB4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230AB8: bne         $v1, $v0, L_80230AD8
    if (ctx->r3 != ctx->r2) {
        // 0x80230ABC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230AD8;
    }
    // 0x80230ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230AC0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80230AC4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80230AC8: beq         $v0, $zero, L_80230AD8
    if (ctx->r2 == 0) {
        // 0x80230ACC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80230AD8;
    }
    // 0x80230ACC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230AD0: j           L_80230AF0
    // 0x80230AD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230AF0;
    // 0x80230AD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230AD8:
    // 0x80230AD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230ADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230AE4: jal         0x80050294
    // 0x80230AE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230AE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80230AEC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80230AF0:
    // 0x80230AF0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230AF4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80230AF8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230AFC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80230B00: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80230B04: sb          $v0, 0x3D($s2)
    MEM_B(0X3D, ctx->r18) = ctx->r2;
    // 0x80230B08: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230B0C: sb          $zero, 0x3C($s2)
    MEM_B(0X3C, ctx->r18) = 0;
    // 0x80230B10: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80230B14: sb          $v0, 0x395($s0)
    MEM_B(0X395, ctx->r16) = ctx->r2;
L_80230B18:
    // 0x80230B18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230B1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230B20: bne         $v1, $v0, L_80230B4C
    if (ctx->r3 != ctx->r2) {
        // 0x80230B24: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230B4C;
    }
    // 0x80230B24: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230B28: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230B2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230B30: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80230B34: jal         0x8004F820
    // 0x80230B38: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80230B38: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80230B3C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230B40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230B44: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230B48: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80230B4C:
    // 0x80230B4C: jal         0x8005044C
    // 0x80230B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80230B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230B54: jal         0x80040F30
    // 0x80230B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80230B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B60: jal         0x8003E934
    // 0x80230B64: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80230B64: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x80230B68: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80230B6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230B70: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80230B74: andi        $v1, $v1, 0x3000
    ctx->r3 = ctx->r3 & 0X3000;
    // 0x80230B78: bne         $v1, $v0, L_80230BD4
    if (ctx->r3 != ctx->r2) {
        // 0x80230B7C: nop
    
            goto L_80230BD4;
    }
    // 0x80230B7C: nop

    // 0x80230B80: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80230B84: bne         $a0, $v0, L_80230BD4
    if (ctx->r4 != ctx->r2) {
        // 0x80230B88: nop
    
            goto L_80230BD4;
    }
    // 0x80230B88: nop

    // 0x80230B8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230B90: bne         $v0, $zero, L_80230BAC
    if (ctx->r2 != 0) {
        // 0x80230B94: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80230BAC;
    }
    // 0x80230B94: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80230B98: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80230B9C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230BA4: j           L_80230BB8
    // 0x80230BA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80230BB8;
    // 0x80230BA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80230BAC:
    // 0x80230BAC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230BB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80230BB8:
    // 0x80230BB8: jal         0x80050294
    // 0x80230BBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230BBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80230BC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230BC8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80230BCC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80230BD0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80230BD4:
    // 0x80230BD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230BD8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80230BDC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230BE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230BE4: jr          $ra
    // 0x80230BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023A050_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A050: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023A054: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023A058: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023A05C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A060: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023A064: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023A068: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x8023A06C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023A070: addiu       $s4, $zero, -0x180
    ctx->r20 = ADD32(0, -0X180);
    // 0x8023A074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A078: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x8023A07C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023A080: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8023A084: addiu       $s2, $s2, 0xEBC
    ctx->r18 = ADD32(ctx->r18, 0XEBC);
    // 0x8023A088: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
L_8023A08C:
    // 0x8023A08C: jal         0x8003E6BC
    // 0x8023A090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023A090: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8023A094: addu        $v1, $s3, $s1
    ctx->r3 = ADD32(ctx->r19, ctx->r17);
    // 0x8023A098: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8023A09C: sll         $v0, $s1, 6
    ctx->r2 = S32(ctx->r17 << 6);
    // 0x8023A0A0: sh          $s5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r21;
    // 0x8023A0A4: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x8023A0A8: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8023A0AC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8023A0B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A0B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023A0B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A0BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A0C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023A0C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A0C8: sh          $s4, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r20;
    // 0x8023A0CC: sltiu       $v0, $s1, 0x3
    ctx->r2 = ctx->r17 < 0X3 ? 1 : 0;
    // 0x8023A0D0: bne         $v0, $zero, L_8023A08C
    if (ctx->r2 != 0) {
        // 0x8023A0D4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8023A08C;
    }
    // 0x8023A0D4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8023A0D8: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x8023A0DC: sw          $zero, 0x8($s3)
    MEM_W(0X8, ctx->r19) = 0;
    // 0x8023A0E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A0E4: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
    // 0x8023A0E8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023A0EC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023A0F0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023A0F4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A0F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023A0FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A100: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A104: jr          $ra
    // 0x8023A108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023A108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D050_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D050: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D054: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D058: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D05C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D060: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022D064: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022D068: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022D06C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D070: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D074: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022D078: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022D07C: beq         $v1, $zero, L_8022D098
    if (ctx->r3 == 0) {
        // 0x8022D080: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_8022D098;
    }
    // 0x8022D080: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x8022D084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D088: beq         $v1, $v0, L_8022D0C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D08C: nop
    
            goto L_8022D0C4;
    }
    // 0x8022D08C: nop

    // 0x8022D090: j           L_8022D28C
    // 0x8022D094: nop

        goto L_8022D28C;
    // 0x8022D094: nop

L_8022D098:
    // 0x8022D098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D09C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D0A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D0A8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022D0AC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022D0B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D0B4: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x8022D0B8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022D0BC: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x8022D0C0: sh          $zero, 0x350($s1)
    MEM_H(0X350, ctx->r17) = 0;
L_8022D0C4:
    // 0x8022D0C4: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022D0C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D0CC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022D0D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0D4: bgez        $v0, L_8022D0EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D0D8: addiu       $s2, $s1, 0x14
        ctx->r18 = ADD32(ctx->r17, 0X14);
            goto L_8022D0EC;
    }
    // 0x8022D0D8: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022D0DC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022D0E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022D0E4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022D0E8: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022D0EC:
    // 0x8022D0EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D0F0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022D0F4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022D0F8: jal         0x8004F820
    // 0x8022D0FC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D0FC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x8022D100: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D104: lbu         $a1, 0xA6($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA6);
    // 0x8022D108: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D10C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D110: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D114: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D118: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D11C: jal         0x8004DA90
    // 0x8022D120: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022D120: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022D124: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8022D128: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x8022D12C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D130: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D134: jal         0x80040F30
    // 0x8022D138: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022D138: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022D13C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D140: jal         0x8003E934
    // 0x8022D144: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022D144: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022D148: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022D14C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D150: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022D154: beq         $s0, $zero, L_8022D18C
    if (ctx->r16 == 0) {
        // 0x8022D158: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022D18C;
    }
    // 0x8022D158: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022D15C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D160: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D164: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D16C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D170: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D174: jal         0x8009A3B4
    // 0x8022D178: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D178: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022D17C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D180: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D184: jal         0x8009A3B4
    // 0x8022D188: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D188: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
L_8022D18C:
    // 0x8022D18C: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022D190: lh          $v0, 0x2E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2E);
    // 0x8022D194: subu        $v1, $a1, $v0
    ctx->r3 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D198: slti        $a0, $v1, 0x21
    ctx->r4 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8022D19C: bne         $a0, $zero, L_8022D1D0
    if (ctx->r4 != 0) {
        // 0x8022D1A0: nop
    
            goto L_8022D1D0;
    }
    // 0x8022D1A0: nop

    // 0x8022D1A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D1A8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D1AC: jal         0x8009A3B4
    // 0x8022D1B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D1B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022D1B4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D1B8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D1BC: jal         0x8009A3B4
    // 0x8022D1C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D1C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022D1C4: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022D1C8: j           L_8022D264
    // 0x8022D1CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022D264;
    // 0x8022D1CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022D1D0:
    // 0x8022D1D0: bltzl       $v1, L_8022D1E8
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022D1D4: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_8022D1E8;
    }
    goto skip_0;
    // 0x8022D1D4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    skip_0:
    // 0x8022D1D8: beq         $a0, $zero, L_8022D1F4
    if (ctx->r4 == 0) {
        // 0x8022D1DC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022D1F4;
    }
    // 0x8022D1DC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022D1E0: j           L_8022D220
    // 0x8022D1E4: nop

        goto L_8022D220;
    // 0x8022D1E4: nop

L_8022D1E8:
    // 0x8022D1E8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D1EC: bne         $v0, $zero, L_8022D220
    if (ctx->r2 != 0) {
        // 0x8022D1F0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022D220;
    }
    // 0x8022D1F0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022D1F4:
    // 0x8022D1F4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D1F8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D1FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D200: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D204: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D208: jal         0x8009A3B4
    // 0x8022D20C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D20C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_8:
    // 0x8022D210: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D214: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D218: jal         0x8009A3B4
    // 0x8022D21C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022D21C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_8022D220:
    // 0x8022D220: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022D224: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022D228: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022D22C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D230: bne         $v0, $zero, L_8022D274
    if (ctx->r2 != 0) {
        // 0x8022D234: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_8022D274;
    }
    // 0x8022D234: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D238: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D23C: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022D240: lh          $v1, 0x56($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X56);
    // 0x8022D244: addiu       $a3, $s4, 0x1C
    ctx->r7 = ADD32(ctx->r20, 0X1C);
    // 0x8022D248: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022D24C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D250: jal         0x8004FAEC
    // 0x8022D254: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_10;
    // 0x8022D254: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_10:
    // 0x8022D258: beq         $v0, $zero, L_8022D274
    if (ctx->r2 == 0) {
        // 0x8022D25C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022D274;
    }
    // 0x8022D25C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D260: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
L_8022D264:
    // 0x8022D264: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022D268: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022D26C: j           L_8022D28C
    // 0x8022D270: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
        goto L_8022D28C;
    // 0x8022D270: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
L_8022D274:
    // 0x8022D274: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x8022D278: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022D27C: bne         $v0, $zero, L_8022D28C
    if (ctx->r2 != 0) {
        // 0x8022D280: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022D28C;
    }
    // 0x8022D280: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022D284: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x8022D288: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8022D28C:
    // 0x8022D28C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D290: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022D294: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D298: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D29C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D2A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D2A4: jr          $ra
    // 0x8022D2A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D2A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225150_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x9FC
    ctx->r2 = ADD32(ctx->r2, -0X9FC);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x8EC
    ctx->r2 = ADD32(ctx->r2, -0X8EC);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x8E0
    ctx->r2 = ADD32(ctx->r2, -0X8E0);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x890
    ctx->r2 = ADD32(ctx->r2, -0X890);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x850
    ctx->r2 = ADD32(ctx->r2, -0X850);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x7C8
    ctx->r2 = ADD32(ctx->r2, -0X7C8);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80235BA0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235BA0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80235BA4: lbu         $v1, 0xA($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XA);
    // 0x80235BA8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80235BAC: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80235BB0: beq         $v1, $zero, L_80235BCC
    if (ctx->r3 == 0) {
        // 0x80235BB4: addiu       $t0, $a3, 0x4E0
        ctx->r8 = ADD32(ctx->r7, 0X4E0);
            goto L_80235BCC;
    }
    // 0x80235BB4: addiu       $t0, $a3, 0x4E0
    ctx->r8 = ADD32(ctx->r7, 0X4E0);
    // 0x80235BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235BBC: beq         $v1, $v0, L_80235BDC
    if (ctx->r3 == ctx->r2) {
        // 0x80235BC0: nop
    
            goto L_80235BDC;
    }
    // 0x80235BC0: nop

    // 0x80235BC4: j           L_80235CFC
    // 0x80235BC8: nop

        goto L_80235CFC;
    // 0x80235BC8: nop

L_80235BCC:
    // 0x80235BCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235BD0: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x80235BD4: sb          $zero, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = 0;
    // 0x80235BD8: sh          $zero, 0x4E8($a3)
    MEM_H(0X4E8, ctx->r7) = 0;
L_80235BDC:
    // 0x80235BDC: lh          $a2, 0x14($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X14);
    // 0x80235BE0: lui         $t2, 0x8024
    ctx->r10 = S32(0X8024 << 16);
    // 0x80235BE4: addiu       $t2, $t2, 0xCF4
    ctx->r10 = ADD32(ctx->r10, 0XCF4);
    // 0x80235BE8: lh          $a0, 0x0($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X0);
    // 0x80235BEC: lh          $a1, 0x18($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X18);
    // 0x80235BF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235BF4: lh          $v1, 0xCF6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XCF6);
    // 0x80235BF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235BFC: lh          $v0, 0xCF8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XCF8);
    // 0x80235C00: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80235C04: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80235C08: beq         $v0, $zero, L_80235C60
    if (ctx->r2 == 0) {
        // 0x80235C0C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80235C60;
    }
    // 0x80235C0C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80235C10: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235C14: lh          $v0, 0xCFA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XCFA);
    // 0x80235C18: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80235C1C: beq         $v0, $zero, L_80235C60
    if (ctx->r2 == 0) {
        // 0x80235C20: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80235C60;
    }
    // 0x80235C20: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80235C24: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x80235C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235C2C: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x80235C30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235C34: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x80235C38: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x80235C3C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80235C40: sh          $v1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r3;
    // 0x80235C44: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80235C48: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80235C4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235C50: sh          $zero, 0x56($a3)
    MEM_H(0X56, ctx->r7) = 0;
    // 0x80235C54: sh          $v0, 0x3E($t0)
    MEM_H(0X3E, ctx->r8) = ctx->r2;
    // 0x80235C58: j           L_80235CF8
    // 0x80235C5C: addiu       $v0, $t2, -0x70
    ctx->r2 = ADD32(ctx->r10, -0X70);
        goto L_80235CF8;
    // 0x80235C5C: addiu       $v0, $t2, -0x70
    ctx->r2 = ADD32(ctx->r10, -0X70);
L_80235C60:
    // 0x80235C60: lh          $a2, 0x14($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X14);
    // 0x80235C64: lui         $t2, 0x8024
    ctx->r10 = S32(0X8024 << 16);
    // 0x80235C68: addiu       $t2, $t2, 0xD00
    ctx->r10 = ADD32(ctx->r10, 0XD00);
    // 0x80235C6C: lh          $a0, 0x0($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X0);
    // 0x80235C70: lh          $a1, 0x18($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X18);
    // 0x80235C74: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235C78: lh          $v1, 0xD02($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XD02);
    // 0x80235C7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235C80: lh          $v0, 0xD04($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XD04);
    // 0x80235C84: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80235C88: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80235C8C: beq         $v0, $zero, L_80235CFC
    if (ctx->r2 == 0) {
        // 0x80235C90: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80235CFC;
    }
    // 0x80235C90: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80235C94: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235C98: lh          $v0, 0xD06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XD06);
    // 0x80235C9C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80235CA0: beq         $v0, $zero, L_80235CFC
    if (ctx->r2 == 0) {
        // 0x80235CA4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80235CFC;
    }
    // 0x80235CA4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80235CA8: lhu         $v1, 0x18($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X18);
    // 0x80235CAC: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x80235CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235CB4: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x80235CB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235CBC: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x80235CC0: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80235CC4: sh          $v1, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r3;
    // 0x80235CC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235CCC: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80235CD0: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x80235CD4: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80235CD8: sh          $v1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r3;
    // 0x80235CDC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80235CE0: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80235CE4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80235CE8: sh          $v0, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r2;
    // 0x80235CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235CF0: sh          $v0, 0x3E($t0)
    MEM_H(0X3E, ctx->r8) = ctx->r2;
    // 0x80235CF4: addiu       $v0, $t2, -0x4C
    ctx->r2 = ADD32(ctx->r10, -0X4C);
L_80235CF8:
    // 0x80235CF8: sw          $v0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r2;
L_80235CFC:
    // 0x80235CFC: jr          $ra
    // 0x80235D00: nop

    TRACE_RETURN()
    return;
    // 0x80235D00: nop

;}
RECOMP_FUNC void func_8022CA54_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CA58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CA5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CA60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CA64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CA68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CA6C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CA70: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022CA74: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022CA78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CA7C: jal         0x8004D5D4
    // 0x8022CA80: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CA80: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CA84: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CA88: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022CA8C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022CA90: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022CA94: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022CA98: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022CA9C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022CAA0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022CAA4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022CAA8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022CAAC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022CAB0: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022CAB4: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x8022CAB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CABC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022CAC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022CAC4: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x8022CAC8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022CACC: jal         0x800540BC
    // 0x8022CAD0: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022CAD0: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    after_1:
    // 0x8022CAD4: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022CAD8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CADC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022CAE0: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8022CAE4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CAE8: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x8022CAEC: sh          $v0, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r2;
    // 0x8022CAF0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CAF4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022CAF8: sh          $a0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r4;
    // 0x8022CAFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022CB00: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CB04: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022CB08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CB0C: addiu       $v0, $v0, 0xA44
    ctx->r2 = ADD32(ctx->r2, 0XA44);
    // 0x8022CB10: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022CB14: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022CB18: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022CB1C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022CB20: beq         $a0, $zero, L_8022CB3C
    if (ctx->r4 == 0) {
        // 0x8022CB24: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022CB3C;
    }
    // 0x8022CB24: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022CB28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB2C: beq         $a0, $v0, L_8022CB78
    if (ctx->r4 == ctx->r2) {
        // 0x8022CB30: nop
    
            goto L_8022CB78;
    }
    // 0x8022CB30: nop

    // 0x8022CB34: j           L_8022CBD4
    // 0x8022CB38: nop

        goto L_8022CBD4;
    // 0x8022CB38: nop

L_8022CB3C:
    // 0x8022CB3C: jal         0x8003E934
    // 0x8022CB40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022CB40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CB44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CB4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CB50: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CB54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022CB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CB64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CB68: jal         0x80050294
    // 0x8022CB6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CB6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x8022CB70: j           L_8022CC10
    // 0x8022CB74: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_8022CC10;
    // 0x8022CB74: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022CB78:
    // 0x8022CB78: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    // 0x8022CB7C: jal         0x8006033C
    // 0x8022CB80: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022CB80: nop

    after_4:
    // 0x8022CB84: bne         $v0, $zero, L_8022CBD4
    if (ctx->r2 != 0) {
        // 0x8022CB88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CBD4;
    }
    // 0x8022CB88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CB90: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CB94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CB98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CBA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CBA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CBA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CBAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CBB0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CBB4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022CBB8: jal         0x80050294
    // 0x8022CBBC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CBBC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_5:
    // 0x8022CBC0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CBC4: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022CBC8: andi        $v0, $v0, 0xFFF9
    ctx->r2 = ctx->r2 & 0XFFF9;
    // 0x8022CBCC: j           L_8022CC0C
    // 0x8022CBD0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022CC0C;
    // 0x8022CBD0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022CBD4:
    // 0x8022CBD4: jal         0x8003E934
    // 0x8022CBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022CBD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022CBDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CBE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CBE8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CBEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CBF0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022CBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CBFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CC00: jal         0x80050294
    // 0x8022CC04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022CC04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_7:
    // 0x8022CC08: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
L_8022CC0C:
    // 0x8022CC0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_8022CC10:
    // 0x8022CC10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC1C: jr          $ra
    // 0x8022CC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251B8: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802251C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251C4: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x802251C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802251CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802251D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D4: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x802251D8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802251DC: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251E4: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251E8: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x802251EC: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x802251F0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802251F4: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x802251F8: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x802251FC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225200: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225204: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225208: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022520C: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225210: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225214: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225218: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022521C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225220: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225224: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225228: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8022522C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225230: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225234: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225238: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022523C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225240: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225244: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225248: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8022524C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225250: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225258: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022525C: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225260: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225264: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x80225268: beq         $t1, $v0, L_802252C8
    if (ctx->r9 == ctx->r2) {
        // 0x8022526C: slti        $v0, $t1, 0x2
        ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
            goto L_802252C8;
    }
    // 0x8022526C: slti        $v0, $t1, 0x2
    ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80225270: beql        $v0, $zero, L_80225288
    if (ctx->r2 == 0) {
        // 0x80225274: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225288;
    }
    goto skip_0;
    // 0x80225274: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225278: beq         $t1, $zero, L_80225298
    if (ctx->r9 == 0) {
        // 0x8022527C: nop
    
            goto L_80225298;
    }
    // 0x8022527C: nop

    // 0x80225280: j           L_8022532C
    // 0x80225284: nop

        goto L_8022532C;
    // 0x80225284: nop

L_80225288:
    // 0x80225288: beq         $t1, $v0, L_802252F8
    if (ctx->r9 == ctx->r2) {
        // 0x8022528C: nop
    
            goto L_802252F8;
    }
    // 0x8022528C: nop

    // 0x80225290: j           L_8022532C
    // 0x80225294: nop

        goto L_8022532C;
    // 0x80225294: nop

L_80225298:
    // 0x80225298: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022529C: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x802252A0: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x802252A4: bne         $v0, $zero, L_802252BC
    if (ctx->r2 != 0) {
        // 0x802252A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802252BC;
    }
    // 0x802252A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252AC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802252B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252B4: j           L_8022532C
    // 0x802252B8: sb          $v0, -0x206($at)
    MEM_B(-0X206, ctx->r1) = ctx->r2;
        goto L_8022532C;
    // 0x802252B8: sb          $v0, -0x206($at)
    MEM_B(-0X206, ctx->r1) = ctx->r2;
L_802252BC:
    // 0x802252BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252C0: j           L_8022532C
    // 0x802252C4: sb          $v0, -0x206($at)
    MEM_B(-0X206, ctx->r1) = ctx->r2;
        goto L_8022532C;
    // 0x802252C4: sb          $v0, -0x206($at)
    MEM_B(-0X206, ctx->r1) = ctx->r2;
L_802252C8:
    // 0x802252C8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252CC: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x802252D0: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x802252D4: bne         $v0, $zero, L_802252EC
    if (ctx->r2 != 0) {
        // 0x802252D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802252EC;
    }
    // 0x802252D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252DC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802252E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252E4: j           L_8022532C
    // 0x802252E8: sb          $v0, -0x176($at)
    MEM_B(-0X176, ctx->r1) = ctx->r2;
        goto L_8022532C;
    // 0x802252E8: sb          $v0, -0x176($at)
    MEM_B(-0X176, ctx->r1) = ctx->r2;
L_802252EC:
    // 0x802252EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252F0: j           L_8022532C
    // 0x802252F4: sb          $v0, -0x176($at)
    MEM_B(-0X176, ctx->r1) = ctx->r2;
        goto L_8022532C;
    // 0x802252F4: sb          $v0, -0x176($at)
    MEM_B(-0X176, ctx->r1) = ctx->r2;
L_802252F8:
    // 0x802252F8: jal         0x8006033C
    // 0x802252FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802252FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80225300: beq         $v0, $zero, L_80225324
    if (ctx->r2 == 0) {
        // 0x80225304: nop
    
            goto L_80225324;
    }
    // 0x80225304: nop

    // 0x80225308: jal         0x8006033C
    // 0x8022530C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022530C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_1:
    // 0x80225310: bne         $v0, $zero, L_80225324
    if (ctx->r2 != 0) {
        // 0x80225314: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225324;
    }
    // 0x80225314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225318: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022531C: j           L_8022532C
    // 0x80225320: sb          $v0, -0x3D($at)
    MEM_B(-0X3D, ctx->r1) = ctx->r2;
        goto L_8022532C;
    // 0x80225320: sb          $v0, -0x3D($at)
    MEM_B(-0X3D, ctx->r1) = ctx->r2;
L_80225324:
    // 0x80225324: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225328: sb          $zero, -0x3D($at)
    MEM_B(-0X3D, ctx->r1) = 0;
L_8022532C:
    // 0x8022532C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225330: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225334: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225338: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x8022533C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225340: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225344: sb          $v1, 0x44E($s1)
    MEM_B(0X44E, ctx->r17) = ctx->r3;
    // 0x80225348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022534C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225350: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225354: lw          $a0, -0x230($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X230);
    // 0x80225358: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022535C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225360: lw          $v0, 0x3F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3F4);
    // 0x80225364: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225368: jal         0x8004C790
    // 0x8022536C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_2;
    // 0x8022536C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_2:
    // 0x80225370: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225374: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225378: addiu       $a0, $a0, 0x484
    ctx->r4 = ADD32(ctx->r4, 0X484);
    // 0x8022537C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225380: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225384: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225388: lw          $v1, 0x4DC($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4DC);
    // 0x8022538C: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225390: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225394: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225398: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022539C: addiu       $v0, $v0, 0x418
    ctx->r2 = ADD32(ctx->r2, 0X418);
    // 0x802253A0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802253A4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802253A8: jal         0x80054FB8
    // 0x802253AC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_3;
    // 0x802253AC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_3:
    // 0x802253B0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253B8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802253BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253C0: jal         0x8004A614
    // 0x802253C4: lw          $a0, -0x1A28($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A28);
    func_8004A614_25A14(rdram, ctx);
        goto after_4;
    // 0x802253C4: lw          $a0, -0x1A28($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A28);
    after_4:
    // 0x802253C8: jal         0x80225420
    // 0x802253CC: nop

    func_80225420_ovl4(rdram, ctx);
        goto after_5;
    // 0x802253CC: nop

    after_5:
    // 0x802253D0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802253D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802253DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802253E0: lw          $v1, 0x5B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5B0);
    // 0x802253E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802253E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253EC: lw          $v0, 0x5B4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5B4);
    // 0x802253F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802253F4: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x802253F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802253FC: sw          $v0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r2;
    // 0x80225400: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225404: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022540C: jr          $ra
    // 0x80225410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225414: nop

    // 0x80225418: nop

    // 0x8022541C: nop

;}
RECOMP_FUNC void func_8023AAC0_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AAC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023AAC4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023AAC8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8023AACC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023AAD0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023AAD4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023AAD8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023AADC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023AAE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023AAE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023AAE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023AAEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023AAF0: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x8023AAF4: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x8023AAF8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8023AAFC: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023AB00: addiu       $s3, $s3, 0x18A0
    ctx->r19 = ADD32(ctx->r19, 0X18A0);
    // 0x8023AB04: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8023AB08: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x8023AB0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023AB10: beq         $v1, $v0, L_8023AE1C
    if (ctx->r3 == ctx->r2) {
        // 0x8023AB14: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_8023AE1C;
    }
    // 0x8023AB14: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8023AB18: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x8023AB1C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_8023AB20:
    // 0x8023AB20: jal         0x8006033C
    // 0x8023AB24: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023AB24: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x8023AB28: bnel        $v0, $zero, L_8023AE04
    if (ctx->r2 != 0) {
        // 0x8023AB2C: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_8023AE04;
    }
    goto skip_0;
    // 0x8023AB2C: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x8023AB30: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x8023AB34: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023AB38: beq         $v1, $v0, L_8023AC30
    if (ctx->r3 == ctx->r2) {
        // 0x8023AB3C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_8023AC30;
    }
    // 0x8023AB3C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x8023AB40: beq         $v0, $zero, L_8023AB58
    if (ctx->r2 == 0) {
        // 0x8023AB44: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8023AB58;
    }
    // 0x8023AB44: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AB48: beq         $v1, $v0, L_8023AB74
    if (ctx->r3 == ctx->r2) {
        // 0x8023AB4C: nop
    
            goto L_8023AB74;
    }
    // 0x8023AB4C: nop

    // 0x8023AB50: j           L_8023AE04
    // 0x8023AB54: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8023AE04;
    // 0x8023AB54: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8023AB58:
    // 0x8023AB58: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023AB5C: beq         $v1, $v0, L_8023ACEC
    if (ctx->r3 == ctx->r2) {
        // 0x8023AB60: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023ACEC;
    }
    // 0x8023AB60: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023AB64: beq         $v1, $v0, L_8023AD98
    if (ctx->r3 == ctx->r2) {
        // 0x8023AB68: nop
    
            goto L_8023AD98;
    }
    // 0x8023AB68: nop

    // 0x8023AB6C: j           L_8023AE04
    // 0x8023AB70: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8023AE04;
    // 0x8023AB70: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8023AB74:
    // 0x8023AB74: jal         0x8004EEAC
    // 0x8023AB78: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x8023AB78: nop

    after_1:
    // 0x8023AB7C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023AB80: beq         $s1, $zero, L_8023AE00
    if (ctx->r17 == 0) {
        // 0x8023AB84: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8023AE00;
    }
    // 0x8023AB84: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8023AB88: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023AB8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023AB90: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8023AB94: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023AB98: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8023AB9C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023ABA0: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8023ABA4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8023ABA8: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8023ABAC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8023ABB0: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8023ABB4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8023ABB8: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8023ABBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ABC0: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8023ABC4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8023ABC8: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8023ABCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023ABD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ABD4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8023ABD8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023ABDC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8023ABE0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8023ABE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023ABE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ABEC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8023ABF0: jal         0x8009A3B4
    // 0x8023ABF4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023ABF4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023ABF8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023ABFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023AC00: jal         0x8009A3B4
    // 0x8023AC04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023AC04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023AC08: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8023AC0C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8023AC10: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8023AC14: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023AC18: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8023AC1C: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8023AC20: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023AC24: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8023AC28: j           L_8023ADF4
    // 0x8023AC2C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8023ADF4;
    // 0x8023AC2C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8023AC30:
    // 0x8023AC30: jal         0x8004EF48
    // 0x8023AC34: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x8023AC34: nop

    after_4:
    // 0x8023AC38: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023AC3C: beq         $s1, $zero, L_8023AE00
    if (ctx->r17 == 0) {
        // 0x8023AC40: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8023AE00;
    }
    // 0x8023AC40: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8023AC44: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023AC48: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023AC4C: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8023AC50: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023AC54: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8023AC58: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023AC5C: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8023AC60: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8023AC64: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8023AC68: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8023AC6C: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8023AC70: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8023AC74: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8023AC78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AC7C: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8023AC80: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8023AC84: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8023AC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AC8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AC90: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8023AC94: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023AC98: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8023AC9C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8023ACA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023ACA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ACA8: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8023ACAC: jal         0x8009A3B4
    // 0x8023ACB0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023ACB0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x8023ACB4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023ACB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023ACBC: jal         0x8009A3B4
    // 0x8023ACC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023ACC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023ACC4: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8023ACC8: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8023ACCC: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8023ACD0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023ACD4: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8023ACD8: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8023ACDC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023ACE0: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8023ACE4: j           L_8023ADF4
    // 0x8023ACE8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8023ADF4;
    // 0x8023ACE8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8023ACEC:
    // 0x8023ACEC: jal         0x8004EFE4
    // 0x8023ACF0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x8023ACF0: nop

    after_7:
    // 0x8023ACF4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023ACF8: beq         $s1, $zero, L_8023AE00
    if (ctx->r17 == 0) {
        // 0x8023ACFC: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8023AE00;
    }
    // 0x8023ACFC: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8023AD00: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023AD04: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023AD08: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8023AD0C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023AD10: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8023AD14: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023AD18: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8023AD1C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8023AD20: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8023AD24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AD28: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8023AD2C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8023AD30: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8023AD34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AD38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AD3C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8023AD40: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023AD44: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8023AD48: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8023AD4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023AD50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AD54: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8023AD58: jal         0x8009A3B4
    // 0x8023AD5C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023AD5C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x8023AD60: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023AD64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023AD68: jal         0x8009A3B4
    // 0x8023AD6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023AD6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023AD70: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8023AD74: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8023AD78: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8023AD7C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023AD80: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8023AD84: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8023AD88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023AD8C: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8023AD90: j           L_8023ADF4
    // 0x8023AD94: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8023ADF4;
    // 0x8023AD94: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8023AD98:
    // 0x8023AD98: jal         0x8004F2C4
    // 0x8023AD9C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x8023AD9C: nop

    after_10:
    // 0x8023ADA0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023ADA4: beq         $s0, $zero, L_8023AE00
    if (ctx->r16 == 0) {
        // 0x8023ADA8: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8023AE00;
    }
    // 0x8023ADA8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023ADAC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023ADB0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023ADB4: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8023ADB8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023ADBC: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8023ADC0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023ADC4: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8023ADC8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8023ADCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023ADD0: jal         0x8009A3B4
    // 0x8023ADD4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023ADD4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x8023ADD8: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x8023ADDC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023ADE0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8023ADE4: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x8023ADE8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8023ADEC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023ADF0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_8023ADF4:
    // 0x8023ADF4: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x8023ADF8: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x8023ADFC: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_8023AE00:
    // 0x8023AE00: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8023AE04:
    // 0x8023AE04: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x8023AE08: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x8023AE0C: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8023AE10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023AE14: bne         $v1, $v0, L_8023AB20
    if (ctx->r3 != ctx->r2) {
        // 0x8023AE18: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8023AB20;
    }
    // 0x8023AE18: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8023AE1C:
    // 0x8023AE1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023AE20: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8023AE24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023AE28: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x8023AE2C: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x8023AE30: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x8023AE34: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8023AE38: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x8023AE3C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x8023AE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AE44: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x8023AE48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8023AE4C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023AE50: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023AE54: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023AE58: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023AE5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023AE60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023AE64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023AE68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AE6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023AE70: jr          $ra
    // 0x8023AE74: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023AE74: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023AE78: nop

    // 0x8023AE7C: nop

;}
RECOMP_FUNC void func_80231D74_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231D78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231D7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231D84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231D88: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80231D8C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80231D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D94: jal         0x8004DA90
    // 0x80231D98: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80231D98: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231D9C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80231DA0: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80231DA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231DA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80231DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231DB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DB4: jr          $ra
    // 0x80231DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D7B8_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D7C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D7C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D7CC: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022D7D0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022D7D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D7D8: beq         $v0, $zero, L_8022D7E4
    if (ctx->r2 == 0) {
        // 0x8022D7DC: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D7E4;
    }
    // 0x8022D7DC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D7E0: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022D7E4:
    // 0x8022D7E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D7E8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D7EC: beq         $v0, $zero, L_8022DAE4
    if (ctx->r2 == 0) {
        // 0x8022D7F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022DAE4;
    }
    // 0x8022D7F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D7F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D7F8: addu        $at, $at, $v0
    gpr jr_addend_8022D800 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D7FC: lw          $v0, 0x15D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X15D0);
    // 0x8022D800: jr          $v0
    // 0x8022D804: nop

    switch (jr_addend_8022D800 >> 2) {
        case 0: goto L_8022D808; break;
        case 1: goto L_8022D84C; break;
        case 2: goto L_8022D904; break;
        case 3: goto L_8022D960; break;
        case 4: goto L_8022DA40; break;
        default: switch_error(__func__, 0x8022D800, 0x802415D0);
    }
    // 0x8022D804: nop

L_8022D808:
    // 0x8022D808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D80C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D810: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D814: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D818: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D81C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D820: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D824: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D828: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D82C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D830: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D834: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022D838: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D83C: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x8022D840: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x8022D844: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D848: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
L_8022D84C:
    // 0x8022D84C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D850: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D854: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D858: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D85C: bgez        $v0, L_8022D880
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D860: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D880;
    }
    // 0x8022D860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D864: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D868: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D86C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D870: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D874: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022D878: j           L_8022D904
    // 0x8022D87C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022D904;
    // 0x8022D87C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022D880:
    // 0x8022D880: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x8022D884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D888: jal         0x8004DA90
    // 0x8022D88C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D88C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022D890: jal         0x80040F30
    // 0x8022D894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D898: jal         0x8003E934
    // 0x8022D89C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022D89C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D8A0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D8A4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D8A8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D8AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D8B4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D8B8: bltz        $v0, L_8022D8D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D8BC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D8D0;
    }
    // 0x8022D8BC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D8C0: beq         $v0, $zero, L_8022D8E0
    if (ctx->r2 == 0) {
        // 0x8022D8C4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D8E0;
    }
    // 0x8022D8C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D8C8: j           L_8022DAE4
    // 0x8022D8CC: nop

        goto L_8022DAE4;
    // 0x8022D8CC: nop

L_8022D8D0:
    // 0x8022D8D0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D8D4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D8D8: bne         $v0, $zero, L_8022DAE4
    if (ctx->r2 != 0) {
        // 0x8022D8DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DAE4;
    }
    // 0x8022D8DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D8E0:
    // 0x8022D8E0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D8E4: jal         0x8009A3B4
    // 0x8022D8E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D8E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D8EC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D8F0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D8F4: jal         0x8009A3B4
    // 0x8022D8F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D8F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022D8FC: j           L_8022DAE4
    // 0x8022D900: nop

        goto L_8022DAE4;
    // 0x8022D900: nop

L_8022D904:
    // 0x8022D904: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D908: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D90C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D910: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D914: bgez        $v0, L_8022DAE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D918: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DAE4;
    }
    // 0x8022D918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D91C: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    // 0x8022D920: addiu       $a2, $zero, -0x5A0
    ctx->r6 = ADD32(0, -0X5A0);
    // 0x8022D924: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D928: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D92C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D930: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D934: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D938: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x8022D93C: jal         0x8004DA90
    // 0x8022D940: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022D940: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022D944: jal         0x80040F30
    // 0x8022D948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022D948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022D94C: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    // 0x8022D950: jal         0x8002A33C
    // 0x8022D954: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022D954: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x8022D958: j           L_8022DAE4
    // 0x8022D95C: nop

        goto L_8022DAE4;
    // 0x8022D95C: nop

L_8022D960:
    // 0x8022D960: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D964: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D968: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D96C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D970: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D974: bgez        $v0, L_8022D994
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D978: nop
    
            goto L_8022D994;
    }
    // 0x8022D978: nop

    // 0x8022D97C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D980: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D984: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D98C: j           L_8022D9AC
    // 0x8022D990: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
        goto L_8022D9AC;
    // 0x8022D990: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8022D994:
    // 0x8022D994: nop

    // 0x8022D998: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D99C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D9A0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D9A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D9A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_8022D9AC:
    // 0x8022D9AC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022D9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9B4: addiu       $a1, $zero, 0x370
    ctx->r5 = ADD32(0, 0X370);
    // 0x8022D9B8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022D9BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D9C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D9C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9C8: jal         0x8004DA90
    // 0x8022D9CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8022D9CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_8:
    // 0x8022D9D0: jal         0x80040F30
    // 0x8022D9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x8022D9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022D9D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D9DC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D9E0: bnel        $v0, $zero, L_8022D9E8
    if (ctx->r2 != 0) {
        // 0x8022D9E4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D9E8;
    }
    goto skip_0;
    // 0x8022D9E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022D9E8:
    // 0x8022D9E8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D9EC: beq         $v0, $zero, L_8022DA0C
    if (ctx->r2 == 0) {
        // 0x8022D9F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DA0C;
    }
    // 0x8022D9F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D9F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D9F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D9FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DA00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DA04: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DA08: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022DA0C:
    // 0x8022DA0C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022DA10: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022DA14: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DA18: beq         $v0, $zero, L_8022DAE4
    if (ctx->r2 == 0) {
        // 0x8022DA1C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022DAE4;
    }
    // 0x8022DA1C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022DA20: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA24: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022DA28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022DA2C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DA30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DA34: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022DA38: j           L_8022DAE4
    // 0x8022DA3C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_8022DAE4;
    // 0x8022DA3C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022DA40:
    // 0x8022DA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DA44: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022DA48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DA4C: jal         0x8004DA90
    // 0x8022DA50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_10;
    // 0x8022DA50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8022DA54: jal         0x80040F30
    // 0x8022DA58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_11;
    // 0x8022DA58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022DA5C: jal         0x8003E934
    // 0x8022DA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_12;
    // 0x8022DA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022DA64: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DA68: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022DA6C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022DA70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA74: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022DA78: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022DA7C: bltz        $v0, L_8022DA94
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DA80: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022DA94;
    }
    // 0x8022DA80: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DA84: beq         $v0, $zero, L_8022DAA4
    if (ctx->r2 == 0) {
        // 0x8022DA88: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DAA4;
    }
    // 0x8022DA88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DA8C: j           L_8022DAC0
    // 0x8022DA90: nop

        goto L_8022DAC0;
    // 0x8022DA90: nop

L_8022DA94:
    // 0x8022DA94: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022DA98: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DA9C: bne         $v0, $zero, L_8022DAC0
    if (ctx->r2 != 0) {
        // 0x8022DAA0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DAC0;
    }
    // 0x8022DAA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022DAA4:
    // 0x8022DAA4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022DAA8: jal         0x8009A3B4
    // 0x8022DAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022DAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8022DAB0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022DAB4: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022DAB8: jal         0x8009A3B4
    // 0x8022DABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022DABC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
L_8022DAC0:
    // 0x8022DAC0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022DAC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DAC8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022DACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DAD0: bgtz        $v0, L_8022DAE4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022DAD4: nop
    
            goto L_8022DAE4;
    }
    // 0x8022DAD4: nop

    // 0x8022DAD8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022DADC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022DAE0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022DAE4:
    // 0x8022DAE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAF0: jr          $ra
    // 0x8022DAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A640_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A640: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023A644: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8023A648: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8023A64C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023A650: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023A654: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023A658: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023A65C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023A660: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023A664: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023A668: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A66C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A670: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x8023A674: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x8023A678: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023A67C: beq         $v1, $v0, L_8023AA50
    if (ctx->r3 == ctx->r2) {
        // 0x8023A680: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_8023AA50;
    }
    // 0x8023A680: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x8023A684: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x8023A688: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x8023A68C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8023A690: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_8023A694:
    // 0x8023A694: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x8023A698: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x8023A69C: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x8023A6A0: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8023A6A4: beq         $v1, $v0, L_8023A93C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A6A8: nop
    
            goto L_8023A93C;
    }
    // 0x8023A6A8: nop

    // 0x8023A6AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A6B0: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x8023A6B4: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x8023A6B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023A6BC: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x8023A6C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A6C4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023A6C8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x8023A6CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A6D0: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x8023A6D4: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x8023A6D8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023A6DC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8023A6E0: beq         $v0, $zero, L_8023AA3C
    if (ctx->r2 == 0) {
        // 0x8023A6E4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8023AA3C;
    }
    // 0x8023A6E4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023A6E8: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x8023A6EC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8023A6F0: beq         $v0, $zero, L_8023AA3C
    if (ctx->r2 == 0) {
        // 0x8023A6F4: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_8023AA3C;
    }
    // 0x8023A6F4: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8023A6F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023A6FC: beql        $v1, $v0, L_8023A934
    if (ctx->r3 == ctx->r2) {
        // 0x8023A700: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_8023A934;
    }
    goto skip_0;
    // 0x8023A700: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x8023A704: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A708: lbu         $v0, 0x18A1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X18A1);
    // 0x8023A70C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023A710: addiu       $s1, $s1, 0x18A0
    ctx->r17 = ADD32(ctx->r17, 0X18A0);
    // 0x8023A714: beql        $v0, $s6, L_8023A934
    if (ctx->r2 == ctx->r22) {
        // 0x8023A718: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_8023A934;
    }
    goto skip_1;
    // 0x8023A718: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x8023A71C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_8023A720:
    // 0x8023A720: jal         0x8004DA68
    // 0x8023A724: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8023A724: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x8023A728: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A72C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023A730: beq         $v1, $v0, L_8023A7D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A734: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8023A7D4;
    }
    // 0x8023A734: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8023A738: beq         $v0, $zero, L_8023A750
    if (ctx->r2 == 0) {
        // 0x8023A73C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8023A750;
    }
    // 0x8023A73C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023A740: beq         $v1, $v0, L_8023A76C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A744: nop
    
            goto L_8023A76C;
    }
    // 0x8023A744: nop

    // 0x8023A748: j           L_8023A924
    // 0x8023A74C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8023A924;
    // 0x8023A74C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A750:
    // 0x8023A750: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023A754: beq         $v1, $v0, L_8023A83C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A758: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023A83C;
    }
    // 0x8023A758: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023A75C: beq         $v1, $v0, L_8023A894
    if (ctx->r3 == ctx->r2) {
        // 0x8023A760: nop
    
            goto L_8023A894;
    }
    // 0x8023A760: nop

    // 0x8023A764: j           L_8023A924
    // 0x8023A768: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8023A924;
    // 0x8023A768: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A76C:
    // 0x8023A76C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A770: jal         0x80053ED8
    // 0x8023A774: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x8023A774: nop

    after_1:
    // 0x8023A778: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023A77C: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x8023A780: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A784: lw          $a0, 0x1894($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1894);
    // 0x8023A788: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A78C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8023A790: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023A794: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023A798: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023A79C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8023A7A0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023A7A4: bne         $v0, $zero, L_8023A8D4
    if (ctx->r2 != 0) {
        // 0x8023A7A8: nop
    
            goto L_8023A8D4;
    }
    // 0x8023A7A8: nop

    // 0x8023A7AC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8023A7B0: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8023A7B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A7B8: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8023A7BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A7C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A7C4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8023A7C8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023A7CC: j           L_8023A914
    // 0x8023A7D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8023A914;
    // 0x8023A7D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023A7D4:
    // 0x8023A7D4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A7D8: jal         0x80053ED8
    // 0x8023A7DC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8023A7DC: nop

    after_2:
    // 0x8023A7E0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023A7E4: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x8023A7E8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A7EC: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x8023A7F0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A7F4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8023A7F8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023A7FC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023A800: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023A804: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8023A808: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023A80C: bne         $v0, $zero, L_8023A8D4
    if (ctx->r2 != 0) {
        // 0x8023A810: nop
    
            goto L_8023A8D4;
    }
    // 0x8023A810: nop

    // 0x8023A814: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8023A818: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8023A81C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023A820: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x8023A824: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A828: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A82C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8023A830: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023A834: j           L_8023A914
    // 0x8023A838: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8023A914;
    // 0x8023A838: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023A83C:
    // 0x8023A83C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A840: jal         0x80053ED8
    // 0x8023A844: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x8023A844: nop

    after_3:
    // 0x8023A848: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023A84C: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x8023A850: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A854: lw          $a0, 0x1898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1898);
    // 0x8023A858: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A85C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8023A860: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023A864: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023A868: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023A86C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8023A870: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023A874: bne         $v0, $zero, L_8023A8D4
    if (ctx->r2 != 0) {
        // 0x8023A878: nop
    
            goto L_8023A8D4;
    }
    // 0x8023A878: nop

    // 0x8023A87C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8023A880: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8023A884: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8023A888: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8023A88C: j           L_8023A914
    // 0x8023A890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8023A914;
    // 0x8023A890: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023A894:
    // 0x8023A894: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A898: jal         0x80053ED8
    // 0x8023A89C: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x8023A89C: nop

    after_4:
    // 0x8023A8A0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023A8A4: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x8023A8A8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A8AC: lw          $a0, 0x189C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X189C);
    // 0x8023A8B0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A8B4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8023A8B8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023A8BC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023A8C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023A8C4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8023A8C8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023A8CC: beq         $v0, $zero, L_8023A900
    if (ctx->r2 == 0) {
        // 0x8023A8D0: nop
    
            goto L_8023A900;
    }
    // 0x8023A8D0: nop

L_8023A8D4:
    // 0x8023A8D4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8023A8D8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8023A8DC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023A8E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A8E4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023A8E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023A8EC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x8023A8F0: jal         0x8006036C
    // 0x8023A8F4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8023A8F4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x8023A8F8: j           L_8023A924
    // 0x8023A8FC: nop

        goto L_8023A924;
    // 0x8023A8FC: nop

L_8023A900:
    // 0x8023A900: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8023A904: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8023A908: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023A90C: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x8023A910: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023A914:
    // 0x8023A914: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A918: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A91C: jalr        $v0
    // 0x8023A920: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8023A920: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_8023A924:
    // 0x8023A924: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A928: bne         $v0, $s6, L_8023A720
    if (ctx->r2 != ctx->r22) {
        // 0x8023A92C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8023A720;
    }
    // 0x8023A92C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8023A930: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_8023A934:
    // 0x8023A934: j           L_8023AA3C
    // 0x8023A938: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_8023AA3C;
    // 0x8023A938: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8023A93C:
    // 0x8023A93C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A940: lbu         $v0, 0x18A1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X18A1);
    // 0x8023A944: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023A948: addiu       $s1, $s1, 0x18A0
    ctx->r17 = ADD32(ctx->r17, 0X18A0);
    // 0x8023A94C: beql        $v0, $s6, L_8023AA40
    if (ctx->r2 == ctx->r22) {
        // 0x8023A950: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8023AA40;
    }
    goto skip_2;
    // 0x8023A950: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x8023A954: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_8023A958:
    // 0x8023A958: jal         0x8004DA68
    // 0x8023A95C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x8023A95C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x8023A960: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A964: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023A968: beq         $v1, $v0, L_8023A9B8
    if (ctx->r3 == ctx->r2) {
        // 0x8023A96C: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8023A9B8;
    }
    // 0x8023A96C: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8023A970: beq         $v0, $zero, L_8023A988
    if (ctx->r2 == 0) {
        // 0x8023A974: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8023A988;
    }
    // 0x8023A974: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023A978: beq         $v1, $v0, L_8023A9A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A97C: nop
    
            goto L_8023A9A4;
    }
    // 0x8023A97C: nop

    // 0x8023A980: j           L_8023AA30
    // 0x8023A984: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8023AA30;
    // 0x8023A984: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A988:
    // 0x8023A988: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023A98C: beq         $v1, $v0, L_8023A9CC
    if (ctx->r3 == ctx->r2) {
        // 0x8023A990: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023A9CC;
    }
    // 0x8023A990: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023A994: beq         $v1, $v0, L_8023A9E0
    if (ctx->r3 == ctx->r2) {
        // 0x8023A998: nop
    
            goto L_8023A9E0;
    }
    // 0x8023A998: nop

    // 0x8023A99C: j           L_8023AA30
    // 0x8023A9A0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8023AA30;
    // 0x8023A9A0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A9A4:
    // 0x8023A9A4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A9A8: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8023A9AC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A9B0: j           L_8023A9F0
    // 0x8023A9B4: lw          $v1, 0x1894($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1894);
        goto L_8023A9F0;
    // 0x8023A9B4: lw          $v1, 0x1894($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1894);
L_8023A9B8:
    // 0x8023A9B8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A9BC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8023A9C0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A9C4: j           L_8023A9F0
    // 0x8023A9C8: lw          $v1, 0x1890($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1890);
        goto L_8023A9F0;
    // 0x8023A9C8: lw          $v1, 0x1890($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1890);
L_8023A9CC:
    // 0x8023A9CC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A9D0: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x8023A9D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A9D8: j           L_8023A9F0
    // 0x8023A9DC: lw          $v1, 0x1898($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1898);
        goto L_8023A9F0;
    // 0x8023A9DC: lw          $v1, 0x1898($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1898);
L_8023A9E0:
    // 0x8023A9E0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A9E4: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x8023A9E8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A9EC: lw          $v1, 0x189C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X189C);
L_8023A9F0:
    // 0x8023A9F0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A9F4: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x8023A9F8: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x8023A9FC: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x8023AA00: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x8023AA04: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023AA08: beq         $v0, $zero, L_8023AA30
    if (ctx->r2 == 0) {
        // 0x8023AA0C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8023AA30;
    }
    // 0x8023AA0C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8023AA10: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8023AA14: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8023AA18: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023AA1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA20: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023AA24: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023AA28: jal         0x8006036C
    // 0x8023AA2C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8023AA2C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_8023AA30:
    // 0x8023AA30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023AA34: bne         $v0, $s6, L_8023A958
    if (ctx->r2 != ctx->r22) {
        // 0x8023AA38: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8023A958;
    }
    // 0x8023AA38: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8023AA3C:
    // 0x8023AA3C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_8023AA40:
    // 0x8023AA40: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x8023AA44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023AA48: bne         $v1, $v0, L_8023A694
    if (ctx->r3 != ctx->r2) {
        // 0x8023AA4C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8023A694;
    }
    // 0x8023AA4C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_8023AA50:
    // 0x8023AA50: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023AA54: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8023AA58: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023AA5C: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x8023AA60: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8023AA64: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x8023AA68: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8023AA6C: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x8023AA70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA74: sw          $v0, 0x1894($at)
    MEM_W(0X1894, ctx->r1) = ctx->r2;
    // 0x8023AA78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA7C: sw          $v1, 0x1890($at)
    MEM_W(0X1890, ctx->r1) = ctx->r3;
    // 0x8023AA80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA84: sw          $a0, 0x1898($at)
    MEM_W(0X1898, ctx->r1) = ctx->r4;
    // 0x8023AA88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA8C: sw          $a1, 0x189C($at)
    MEM_W(0X189C, ctx->r1) = ctx->r5;
    // 0x8023AA90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023AA94: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8023AA98: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023AA9C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023AAA0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023AAA4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023AAA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AAAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023AAB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023AAB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AAB8: jr          $ra
    // 0x8023AABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023AABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023BA8C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BA90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BA94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023BA9C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x8023BAA0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023BAA4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023BAA8: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8023BAAC: beq         $v1, $zero, L_8023BB20
    if (ctx->r3 == 0) {
        // 0x8023BAB0: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023BB20;
    }
    // 0x8023BAB0: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x8023BAB4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8023BAB8: beql        $v0, $zero, L_8023BB18
    if (ctx->r2 == 0) {
        // 0x8023BABC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023BB18;
    }
    goto skip_0;
    // 0x8023BABC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8023BAC0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8023BAC4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023BAC8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023BACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BAD0: bgtz        $v0, L_8023BAFC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023BAD4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8023BAFC;
    }
    // 0x8023BAD4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023BAD8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023BADC: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x8023BAE0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8023BAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BAE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023BAEC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023BAF0: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8023BAF4: j           L_8023BB00
    // 0x8023BAF8: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
        goto L_8023BB00;
    // 0x8023BAF8: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
L_8023BAFC:
    // 0x8023BAFC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
L_8023BB00:
    // 0x8023BB00: jal         0x8002A33C
    // 0x8023BB04: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023BB04: nop

    after_0:
    // 0x8023BB08: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023BB0C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023BB10: j           L_8023BB20
    // 0x8023BB14: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
        goto L_8023BB20;
    // 0x8023BB14: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8023BB18:
    // 0x8023BB18: jal         0x8002A33C
    // 0x8023BB1C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023BB1C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
L_8023BB20:
    // 0x8023BB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023BB28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BB2C: jr          $ra
    // 0x8023BB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023BB34: nop

    // 0x8023BB38: nop

    // 0x8023BB3C: nop

;}
RECOMP_FUNC void func_80226854_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226854: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226858: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022685C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226860: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226864: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80226868: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022686C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226870: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80226874: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80226878: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022687C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226880: beq         $v0, $zero, L_8022688C
    if (ctx->r2 == 0) {
        // 0x80226884: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022688C;
    }
    // 0x80226884: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226888: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022688C:
    // 0x8022688C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226890: beq         $v1, $zero, L_802268A8
    if (ctx->r3 == 0) {
        // 0x80226894: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802268A8;
    }
    // 0x80226894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226898: beq         $v1, $v0, L_802268D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022689C: nop
    
            goto L_802268D8;
    }
    // 0x8022689C: nop

    // 0x802268A0: j           L_80226A44
    // 0x802268A4: nop

        goto L_80226A44;
    // 0x802268A4: nop

L_802268A8:
    // 0x802268A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802268AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802268B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802268B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802268B8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802268BC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802268C0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802268C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802268C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802268CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802268D0: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x802268D4: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_802268D8:
    // 0x802268D8: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x802268DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802268E0: bne         $v1, $v0, L_802268F0
    if (ctx->r3 != ctx->r2) {
        // 0x802268E4: addiu       $a0, $zero, 0xB6
        ctx->r4 = ADD32(0, 0XB6);
            goto L_802268F0;
    }
    // 0x802268E4: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    // 0x802268E8: jal         0x8002A33C
    // 0x802268EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802268EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_802268F0:
    // 0x802268F0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802268F4: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x802268F8: bne         $v0, $zero, L_80226908
    if (ctx->r2 != 0) {
        // 0x802268FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226908;
    }
    // 0x802268FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226900: j           L_80226A40
    // 0x80226904: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
        goto L_80226A40;
    // 0x80226904: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_80226908:
    // 0x80226908: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022690C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226910: jal         0x8004DA90
    // 0x80226914: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226914: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80226918: jal         0x80040F30
    // 0x8022691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226924: jal         0x8003E934
    // 0x80226928: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80226928: sw          $v0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022692C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226930: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80226934: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80226938: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022693C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80226940: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80226944: bltz        $v0, L_8022695C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80226948: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022695C;
    }
    // 0x80226948: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022694C: beq         $v0, $zero, L_8022696C
    if (ctx->r2 == 0) {
        // 0x80226950: nop
    
            goto L_8022696C;
    }
    // 0x80226950: nop

    // 0x80226954: j           L_8022698C
    // 0x80226958: nop

        goto L_8022698C;
    // 0x80226958: nop

L_8022695C:
    // 0x8022695C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80226960: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80226964: bne         $v0, $zero, L_8022698C
    if (ctx->r2 != 0) {
        // 0x80226968: nop
    
            goto L_8022698C;
    }
    // 0x80226968: nop

L_8022696C:
    // 0x8022696C: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80226970: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80226974: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80226978: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022697C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226980: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226984: j           L_80226A44
    // 0x80226988: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_80226A44;
    // 0x80226988: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022698C:
    // 0x8022698C: lw          $v0, 0x5C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X5C);
    // 0x80226990: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80226994: bne         $v0, $zero, L_802269B0
    if (ctx->r2 != 0) {
        // 0x80226998: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802269B0;
    }
    // 0x80226998: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022699C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x802269A0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802269A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802269A8: beq         $v0, $zero, L_802269DC
    if (ctx->r2 == 0) {
        // 0x802269AC: lui         $v0, 0x48
        ctx->r2 = S32(0X48 << 16);
            goto L_802269DC;
    }
    // 0x802269AC: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
L_802269B0:
    // 0x802269B0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802269B4: jal         0x8009A3B4
    // 0x802269B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802269B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802269BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802269C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x802269C4: jal         0x8009A3B4
    // 0x802269C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802269C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802269CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802269D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802269D4: j           L_80226A44
    // 0x802269D8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80226A44;
    // 0x802269D8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802269DC:
    // 0x802269DC: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802269E0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802269E4: beq         $v0, $zero, L_80226A44
    if (ctx->r2 == 0) {
        // 0x802269E8: addiu       $a2, $zero, 0x800
        ctx->r6 = ADD32(0, 0X800);
            goto L_80226A44;
    }
    // 0x802269E8: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x802269EC: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x802269F0: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x802269F4: lh          $a1, 0x56($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X56);
    // 0x802269F8: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x802269FC: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x80226A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226A04: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226A08: jal         0x8004FC28
    // 0x80226A0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FC28_2B028(rdram, ctx);
        goto after_6;
    // 0x80226A0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x80226A10: beq         $v0, $zero, L_80226A44
    if (ctx->r2 == 0) {
        // 0x80226A14: addiu       $v1, $zero, 0xD
        ctx->r3 = ADD32(0, 0XD);
            goto L_80226A44;
    }
    // 0x80226A14: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x80226A18: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80226A1C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80226A20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226A24: bne         $v0, $v1, L_80226A38
    if (ctx->r2 != ctx->r3) {
        // 0x80226A28: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80226A38;
    }
    // 0x80226A28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226A2C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226A30: j           L_80226A40
    // 0x80226A34: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_80226A40;
    // 0x80226A34: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80226A38:
    // 0x80226A38: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226A3C: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
L_80226A40:
    // 0x80226A40: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226A44:
    // 0x80226A44: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226A48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226A4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226A50: jr          $ra
    // 0x80226A54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226A54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229088_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022908C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229090: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229094: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229098: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022909C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802290A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290A4: beq         $v1, $v0, L_80229120
    if (ctx->r3 == ctx->r2) {
        // 0x802290A8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80229120;
    }
    // 0x802290A8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802290AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802290B0: beql        $v0, $zero, L_802290C8
    if (ctx->r2 == 0) {
        // 0x802290B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802290C8;
    }
    goto skip_0;
    // 0x802290B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802290B8: beq         $v1, $zero, L_802290E0
    if (ctx->r3 == 0) {
        // 0x802290BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802290E0;
    }
    // 0x802290BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290C0: j           L_80229288
    // 0x802290C4: nop

        goto L_80229288;
    // 0x802290C4: nop

L_802290C8:
    // 0x802290C8: beq         $v1, $v0, L_80229130
    if (ctx->r3 == ctx->r2) {
        // 0x802290CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229130;
    }
    // 0x802290CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802290D0: beq         $v1, $v0, L_80229238
    if (ctx->r3 == ctx->r2) {
        // 0x802290D4: nop
    
            goto L_80229238;
    }
    // 0x802290D4: nop

    // 0x802290D8: j           L_80229288
    // 0x802290DC: nop

        goto L_80229288;
    // 0x802290DC: nop

L_802290E0:
    // 0x802290E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802290E4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802290E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802290EC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802290F0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802290F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802290F8: lbu         $v0, 0x7C4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7C4);
    // 0x802290FC: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x80229100: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80229104: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80229108: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022910C: andi        $v0, $a0, 0xFFF7
    ctx->r2 = ctx->r4 & 0XFFF7;
    // 0x80229110: bgtz        $v1, L_80229120
    if (SIGNED(ctx->r3) > 0) {
        // 0x80229114: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_80229120;
    }
    // 0x80229114: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80229118: andi        $v0, $a0, 0xFFF3
    ctx->r2 = ctx->r4 & 0XFFF3;
    // 0x8022911C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80229120:
    // 0x80229120: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80229124: bgez        $v0, L_80229130
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229128: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229130;
    }
    // 0x80229128: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022912C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229130:
    // 0x80229130: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80229134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229138: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022913C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80229140: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80229144: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80229148: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022914C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229150: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229154: lbu         $v0, 0x7C5($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X7C5);
    // 0x80229158: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022915C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80229160: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229164: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80229168: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022916C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80229170: jal         0x8004DA90
    // 0x80229174: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229174: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229178: jal         0x80040F30
    // 0x8022917C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022917C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229180: beq         $v0, $zero, L_80229288
    if (ctx->r2 == 0) {
        // 0x80229184: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_80229288;
    }
    // 0x80229184: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80229188: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022918C: bnel        $v0, $zero, L_80229194
    if (ctx->r2 != 0) {
        // 0x80229190: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80229194;
    }
    goto skip_1;
    // 0x80229190: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80229194:
    // 0x80229194: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80229198: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022919C: beq         $v0, $zero, L_80229288
    if (ctx->r2 == 0) {
        // 0x802291A0: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_80229288;
    }
    // 0x802291A0: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x802291A4: jal         0x8002A33C
    // 0x802291A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802291A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802291AC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802291B0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802291B4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802291B8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802291BC: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x802291C0: beq         $v0, $zero, L_80229204
    if (ctx->r2 == 0) {
        // 0x802291C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229204;
    }
    // 0x802291C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802291C8: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802291CC: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x802291D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802291D4: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802291D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802291DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802291E0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802291E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802291E8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802291EC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802291F0: lbu         $v1, 0x7C4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7C4);
    // 0x802291F4: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x802291F8: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802291FC: j           L_80229288
    // 0x80229200: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80229288;
    // 0x80229200: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229204:
    // 0x80229204: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80229208: bgtz        $v0, L_80229220
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022920C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229220;
    }
    // 0x8022920C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229210: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229214: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229218: j           L_80229288
    // 0x8022921C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80229288;
    // 0x8022921C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229220:
    // 0x80229220: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229224: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80229228: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022922C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80229230: j           L_80229288
    // 0x80229234: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229288;
    // 0x80229234: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229238:
    // 0x80229238: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022923C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229240: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80229244: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229248: bgez        $v0, L_80229260
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022924C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229260;
    }
    // 0x8022924C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229250: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229254: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80229258: j           L_80229288
    // 0x8022925C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_80229288;
    // 0x8022925C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80229260:
    // 0x80229260: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229264: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229268: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022926C: jal         0x8004F820
    // 0x80229270: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229270: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80229274: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229278: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022927C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229280: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229284: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229288:
    // 0x80229288: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022928C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229294: jr          $ra
    // 0x80229298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231C7C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231C88: jal         0x80231D54
    // 0x80231C8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80231D54_ovl4(rdram, ctx);
        goto after_0;
    // 0x80231C8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80231C90: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80231C94: bne         $v0, $zero, L_80231CD4
    if (ctx->r2 != 0) {
        // 0x80231C98: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80231CD4;
    }
    // 0x80231C98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231C9C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231CA0: bne         $v1, $v0, L_80231CB4
    if (ctx->r3 != ctx->r2) {
        // 0x80231CA4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80231CB4;
    }
    // 0x80231CA4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231CA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231CAC: j           L_80231CBC
    // 0x80231CB0: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
        goto L_80231CBC;
    // 0x80231CB0: addiu       $v0, $zero, -0xE0
    ctx->r2 = ADD32(0, -0XE0);
L_80231CB4:
    // 0x80231CB4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231CB8: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_80231CBC:
    // 0x80231CBC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80231CC0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231CC4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80231CC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231CCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231CD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231CD4:
    // 0x80231CD4: jal         0x80231D74
    // 0x80231CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D74_ovl4(rdram, ctx);
        goto after_1;
    // 0x80231CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231CE4: jr          $ra
    // 0x80231CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231960_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231964: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231968: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023196C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231970: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231974: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231978: lw          $v0, 0xB8C($at)
    ctx->r2 = MEM_W(ctx->r1, 0XB8C);
    // 0x8023197C: jalr        $v0
    // 0x80231980: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231980: nop

    after_0:
    // 0x80231984: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231988: jr          $ra
    // 0x8023198C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023198C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E608_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E60C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E610: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022E614: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022E618: beq         $v1, $zero, L_8022E634
    if (ctx->r3 == 0) {
        // 0x8022E61C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022E634;
    }
    // 0x8022E61C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E624: beq         $v1, $v0, L_8022E638
    if (ctx->r3 == ctx->r2) {
        // 0x8022E628: nop
    
            goto L_8022E638;
    }
    // 0x8022E628: nop

    // 0x8022E62C: j           L_8022E658
    // 0x8022E630: nop

        goto L_8022E658;
    // 0x8022E630: nop

L_8022E634:
    // 0x8022E634: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022E638:
    // 0x8022E638: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E63C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E640: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022E644: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E648: bne         $v0, $zero, L_8022E658
    if (ctx->r2 != 0) {
        // 0x8022E64C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E658;
    }
    // 0x8022E64C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E650: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022E654: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022E658:
    // 0x8022E658: jal         0x8022E87C
    // 0x8022E65C: nop

    func_8022E87C_ovl4(rdram, ctx);
        goto after_0;
    // 0x8022E65C: nop

    after_0:
    // 0x8022E660: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E664: jr          $ra
    // 0x8022E668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BE54_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BE54: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023BE58: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023BE5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023BE60: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023BE64: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023BE68: jr          $ra
    // 0x8023BE6C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8023BE6C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80228644_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228644: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228648: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022864C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228650: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228654: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228658: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022865C: beq         $v1, $zero, L_80228678
    if (ctx->r3 == 0) {
        // 0x80228660: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228678;
    }
    // 0x80228660: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228668: beq         $v1, $v0, L_80228688
    if (ctx->r3 == ctx->r2) {
        // 0x8022866C: nop
    
            goto L_80228688;
    }
    // 0x8022866C: nop

    // 0x80228670: j           L_802287B0
    // 0x80228674: nop

        goto L_802287B0;
    // 0x80228674: nop

L_80228678:
    // 0x80228678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022867C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228684: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80228688:
    // 0x80228688: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022868C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228690: bnel        $v1, $v0, L_802286A8
    if (ctx->r3 != ctx->r2) {
        // 0x80228694: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802286A8;
    }
    goto skip_0;
    // 0x80228694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80228698: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022869C: jal         0x8002A33C
    // 0x802286A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802286A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802286A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802286A8:
    // 0x802286A8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802286AC: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x802286B0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802286B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802286B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802286BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802286C0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802286C4: jal         0x8004DA90
    // 0x802286C8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802286C8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x802286CC: jal         0x80040F30
    // 0x802286D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802286D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802286D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286D8: jal         0x8003E934
    // 0x802286DC: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802286DC: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x802286E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802286E4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802286E8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802286EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802286F4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802286F8: bltz        $v0, L_80228710
    if (SIGNED(ctx->r2) < 0) {
        // 0x802286FC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228710;
    }
    // 0x802286FC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228700: beq         $v0, $zero, L_80228720
    if (ctx->r2 == 0) {
        // 0x80228704: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228720;
    }
    // 0x80228704: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228708: j           L_80228760
    // 0x8022870C: nop

        goto L_80228760;
    // 0x8022870C: nop

L_80228710:
    // 0x80228710: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80228714: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228718: bne         $v0, $zero, L_80228760
    if (ctx->r2 != 0) {
        // 0x8022871C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228760;
    }
    // 0x8022871C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228720:
    // 0x80228720: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80228724: jal         0x8009A3B4
    // 0x80228728: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228728: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022872C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228730: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228734: jal         0x8009A3B4
    // 0x80228738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022873C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228740: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228744: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228748: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022874C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80228750: bne         $v0, $zero, L_80228788
    if (ctx->r2 != 0) {
        // 0x80228754: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228788;
    }
    // 0x80228754: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228758: j           L_80228794
    // 0x8022875C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80228794;
    // 0x8022875C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80228760:
    // 0x80228760: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80228764: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228768: beq         $v0, $zero, L_8022879C
    if (ctx->r2 == 0) {
        // 0x8022876C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022879C;
    }
    // 0x8022876C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228770: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228774: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228778: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022877C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80228780: beq         $v0, $zero, L_80228790
    if (ctx->r2 == 0) {
        // 0x80228784: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228790;
    }
    // 0x80228784: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80228788:
    // 0x80228788: j           L_802287B0
    // 0x8022878C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_802287B0;
    // 0x8022878C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80228790:
    // 0x80228790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80228794:
    // 0x80228794: j           L_802287B0
    // 0x80228798: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_802287B0;
    // 0x80228798: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022879C:
    // 0x8022879C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802287A0: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802287A4: beq         $v0, $zero, L_802287B0
    if (ctx->r2 == 0) {
        // 0x802287A8: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_802287B0;
    }
    // 0x802287A8: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x802287AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802287B0:
    // 0x802287B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802287B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802287B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287BC: jr          $ra
    // 0x802287C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802287C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
