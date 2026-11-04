#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022E3A8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E3AC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E3B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E3B4: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x8022E3B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E3BC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022E3C0: jal         0x8002A33C
    // 0x8022E3C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E3C4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022E3C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3CC: jr          $ra
    // 0x8022E3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231ACC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231ACC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80231AD0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80231AD4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231AD8: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x80231ADC: jr          $ra
    // 0x80231AE0: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80231AE0: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80231AE4: nop

    // 0x80231AE8: nop

    // 0x80231AEC: nop

;}
RECOMP_FUNC void func_80231560_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231560: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231564: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231568: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023156C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231570: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231574: lbu         $a2, 0x0($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X0);
    // 0x80231578: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023157C: ori         $v0, $a2, 0x2
    ctx->r2 = ctx->r6 | 0X2;
    // 0x80231580: bne         $v1, $zero, L_802315DC
    if (ctx->r3 != 0) {
        // 0x80231584: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_802315DC;
    }
    // 0x80231584: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231588: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023158C: ori         $v0, $a2, 0x6
    ctx->r2 = ctx->r6 | 0X6;
    // 0x80231590: jal         0x8004D5D4
    // 0x80231594: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231594: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80231598: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023159C: jal         0x8002C654
    // 0x802315A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802315A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802315A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802315A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802315AC: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802315B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802315B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802315B8: jal         0x80031DA8
    // 0x802315BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x802315BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x802315C0: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x802315C4: jal         0x800317C0
    // 0x802315C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x802315C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802315CC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802315D0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802315D4: j           L_802317A8
    // 0x802315D8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
        goto L_802317A8;
    // 0x802315D8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_802315DC:
    // 0x802315DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802315E0: lb          $v0, 0x4518($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4518);
    // 0x802315E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802315E8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802315EC: beq         $v0, $v1, L_8023162C
    if (ctx->r2 == ctx->r3) {
        // 0x802315F0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8023162C;
    }
    // 0x802315F0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x802315F4: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_802315F8:
    // 0x802315F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802315FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231600: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231604: lb          $v0, 0x4518($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4518);
    // 0x80231608: bltz        $v0, L_80231740
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023160C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_80231740;
    }
    // 0x8023160C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80231610: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x80231614: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231618: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023161C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231620: lb          $v0, 0x4518($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4518);
    // 0x80231624: bne         $v0, $v1, L_802315F8
    if (ctx->r2 != ctx->r3) {
        // 0x80231628: andi        $v0, $t0, 0xFF
        ctx->r2 = ctx->r8 & 0XFF;
            goto L_802315F8;
    }
    // 0x80231628: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_8023162C:
    // 0x8023162C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231630: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80231634: lhu         $a0, 0x3A($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3A);
    // 0x80231638: ori         $v0, $v0, 0x28
    ctx->r2 = ctx->r2 | 0X28;
    // 0x8023163C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80231640: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231644: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231648: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023164C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231650: lbu         $v1, 0x4538($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X4538);
    // 0x80231654: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231658: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x8023165C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80231660: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231664: lbu         $v1, 0x4539($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4539);
    // 0x80231668: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023166C: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x80231670: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231674: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x80231678: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8023167C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231680: lbu         $v1, 0x453A($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X453A);
    // 0x80231684: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231688: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x8023168C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231690: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x80231694: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x80231698: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8023169C: lbu         $a3, 0x453B($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X453B);
    // 0x802316A0: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x802316A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802316A8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802316AC: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x802316B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802316B4: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    // 0x802316B8: sh          $a1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r5;
    // 0x802316BC: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x802316C0: beq         $a2, $v0, L_80231750
    if (ctx->r6 == ctx->r2) {
        // 0x802316C4: sh          $a3, 0x26($s1)
        MEM_H(0X26, ctx->r17) = ctx->r7;
            goto L_80231750;
    }
    // 0x802316C4: sh          $a3, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r7;
    // 0x802316C8: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x802316CC: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x802316D0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802316D4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802316D8: lh          $v0, 0x451E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X451E);
    // 0x802316DC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802316E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802316E4: lh          $v1, 0x451C($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X451C);
    // 0x802316E8: bgez        $v1, L_802316F4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802316EC: sll         $v0, $v0, 6
        ctx->r2 = S32(ctx->r2 << 6);
            goto L_802316F4;
    }
    // 0x802316EC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x802316F0: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_802316F4:
    // 0x802316F4: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802316F8: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x802316FC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231700: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80231704: lbu         $v0, 0x4519($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4519);
    // 0x80231708: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023170C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80231710: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80231714: lbu         $a0, 0x451A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X451A);
    // 0x80231718: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023171C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80231720: lbu         $a1, 0x451B($at)
    ctx->r5 = MEM_BU(ctx->r1, 0X451B);
    // 0x80231724: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80231728: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8023172C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80231730: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80231734: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231738: j           L_802317A8
    // 0x8023173C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
        goto L_802317A8;
    // 0x8023173C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
L_80231740:
    // 0x80231740: jal         0x8004F684
    // 0x80231744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x80231744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80231748: j           L_802317C8
    // 0x8023174C: nop

        goto L_802317C8;
    // 0x8023174C: nop

L_80231750:
    // 0x80231750: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x80231754: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80231758: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8023175C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231760: lbu         $v0, 0x4519($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4519);
    // 0x80231764: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80231768: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8023176C: lbu         $a0, 0x451A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X451A);
    // 0x80231770: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231774: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231778: lbu         $v1, 0x451B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X451B);
    // 0x8023177C: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x80231780: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80231784: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80231788: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8023178C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231790: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80231794: lui         $v1, 0x3EC0
    ctx->r3 = S32(0X3EC0 << 16);
    // 0x80231798: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023179C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x802317A0: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x802317A4: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_802317A8:
    // 0x802317A8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802317AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802317B0: addiu       $v0, $v0, 0x44AC
    ctx->r2 = ADD32(ctx->r2, 0X44AC);
    // 0x802317B4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x802317B8: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x802317BC: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x802317C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802317C4: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_802317C8:
    // 0x802317C8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802317CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802317D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802317D4: jr          $ra
    // 0x802317D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802317D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225150_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x2828
    ctx->r2 = ADD32(ctx->r2, 0X2828);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x29B4
    ctx->r2 = ADD32(ctx->r2, 0X29B4);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x29D0
    ctx->r2 = ADD32(ctx->r2, 0X29D0);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x2A8C
    ctx->r2 = ADD32(ctx->r2, 0X2A8C);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x2ACC
    ctx->r2 = ADD32(ctx->r2, 0X2ACC);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x2AD0
    ctx->r2 = ADD32(ctx->r2, 0X2AD0);
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
RECOMP_FUNC void func_80226A54_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226A58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226A60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226A64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226A68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A6C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80226A70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226A74: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226A78: beq         $v1, $zero, L_80226A94
    if (ctx->r3 == 0) {
        // 0x80226A7C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80226A94;
    }
    // 0x80226A7C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80226A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A84: beq         $v1, $v0, L_80226AB8
    if (ctx->r3 == ctx->r2) {
        // 0x80226A88: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_80226AB8;
    }
    // 0x80226A88: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80226A8C: j           L_80226B90
    // 0x80226A90: nop

        goto L_80226B90;
    // 0x80226A90: nop

L_80226A94:
    // 0x80226A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A98: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226A9C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80226AA0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80226AA4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226AA8: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x80226AAC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226AB0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80226AB4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_80226AB8:
    // 0x80226AB8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80226ABC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80226AC0: jal         0x8004F820
    // 0x80226AC4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226AC4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x80226AC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226ACC: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80226AD0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80226AD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226AD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226ADC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226AE0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226AE4: jal         0x8004DA90
    // 0x80226AE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226AE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x80226AEC: jal         0x80040F30
    // 0x80226AF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80226AF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80226AF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226AF8: jal         0x8003E934
    // 0x80226AFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80226AFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80226B00: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80226B04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226B08: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x80226B0C: bne         $s0, $zero, L_80226B48
    if (ctx->r16 != 0) {
        // 0x80226B10: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_80226B48;
    }
    // 0x80226B10: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80226B14: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x80226B18: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x80226B1C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80226B20: bltz        $v0, L_80226B38
    if (SIGNED(ctx->r2) < 0) {
        // 0x80226B24: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_80226B38;
    }
    // 0x80226B24: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80226B28: beq         $v0, $zero, L_80226B4C
    if (ctx->r2 == 0) {
        // 0x80226B2C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80226B4C;
    }
    // 0x80226B2C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80226B30: j           L_80226B78
    // 0x80226B34: nop

        goto L_80226B78;
    // 0x80226B34: nop

L_80226B38:
    // 0x80226B38: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80226B3C: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80226B40: bne         $v0, $zero, L_80226B78
    if (ctx->r2 != 0) {
        // 0x80226B44: nop
    
            goto L_80226B78;
    }
    // 0x80226B44: nop

L_80226B48:
    // 0x80226B48: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_80226B4C:
    // 0x80226B4C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80226B50: jal         0x8009A3B4
    // 0x80226B54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80226B54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80226B58: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80226B5C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80226B60: jal         0x8009A3B4
    // 0x80226B64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80226B64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80226B68: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80226B6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226B70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226B74: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80226B78:
    // 0x80226B78: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x80226B7C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80226B80: bne         $v0, $zero, L_80226B90
    if (ctx->r2 != 0) {
        // 0x80226B84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226B90;
    }
    // 0x80226B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B88: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226B8C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80226B90:
    // 0x80226B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226B98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BA0: jr          $ra
    // 0x80226BA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226BA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802255E4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255F8: bne         $v0, $zero, L_80225618
    if (ctx->r2 != 0) {
        // 0x802255FC: nop
    
            goto L_80225618;
    }
    // 0x802255FC: nop

    // 0x80225600: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225604: jal         0x800607C4
    // 0x80225608: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, 0X37B0);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225608: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, 0X37B0);
    after_0:
    // 0x8022560C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225614: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225618:
    // 0x80225618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022561C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225620: jr          $ra
    // 0x80225624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C48_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C58: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80228C5C: bgez        $v0, L_80228C90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228C60: nop
    
            goto L_80228C90;
    }
    // 0x80228C60: nop

    // 0x80228C64: jal         0x80229378
    // 0x80228C68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229378_ovl18(rdram, ctx);
        goto after_0;
    // 0x80228C68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80228C6C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228C70: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80228C74: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228C78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228C7C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228C80: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80228C84: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228C88: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80228C8C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228C90:
    // 0x80228C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C98: jr          $ra
    // 0x80228C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E5B0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E5B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E5BC: jal         0x8004F144
    // 0x8022E5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022E5C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E5C8: beq         $v1, $zero, L_8022E5FC
    if (ctx->r3 == 0) {
        // 0x8022E5CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E5FC;
    }
    // 0x8022E5CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E5D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022E5D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E5D8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E5DC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022E5E0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022E5E4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E5E8: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x8022E5EC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E5F0: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x8022E5F4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E5F8: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_8022E5FC:
    // 0x8022E5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E604: jr          $ra
    // 0x8022E608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CAB4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CAB8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022CABC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CAC0: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022CAC4: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x8022CAC8: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8022CACC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CAD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CAD4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022CAD8: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8022CADC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CAE0: bne         $v1, $zero, L_8022CAF4
    if (ctx->r3 != 0) {
        // 0x8022CAE4: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022CAF4;
    }
    // 0x8022CAE4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022CAE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CAEC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022CAF0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022CAF4:
    // 0x8022CAF4: jal         0x8022CBF8
    // 0x8022CAF8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8022CBF8_ovl18(rdram, ctx);
        goto after_0;
    // 0x8022CAF8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022CAFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB00: jr          $ra
    // 0x8022CB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227824_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022782C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227834: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227838: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022783C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227840: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227844: bne         $v0, $zero, L_802278B0
    if (ctx->r2 != 0) {
        // 0x80227848: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_802278B0;
    }
    // 0x80227848: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022784C: jal         0x80229414
    // 0x80227850: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229414_ovl18(rdram, ctx);
        goto after_0;
    // 0x80227850: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227854: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227858: beq         $v0, $zero, L_802278AC
    if (ctx->r2 == 0) {
        // 0x8022785C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802278AC;
    }
    // 0x8022785C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227860: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80227864: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80227868: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022786C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227870: bne         $v1, $zero, L_80227880
    if (ctx->r3 != 0) {
        // 0x80227874: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80227880;
    }
    // 0x80227874: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227878: j           L_802278B0
    // 0x8022787C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_802278B0;
    // 0x8022787C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80227880:
    // 0x80227880: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227884: jal         0x80229388
    // 0x80227888: nop

    func_80229388_ovl18(rdram, ctx);
        goto after_1;
    // 0x80227888: nop

    after_1:
    // 0x8022788C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227890: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227894: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227898: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022789C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x802278A0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802278A4: j           L_802278B0
    // 0x802278A8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_802278B0;
    // 0x802278A8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_802278AC:
    // 0x802278AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802278B0:
    // 0x802278B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278B8: jr          $ra
    // 0x802278BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F1C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227F2C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227F30: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227F34: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227F38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F3C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227F40: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227F44: bne         $v1, $v0, L_80227F60
    if (ctx->r3 != ctx->r2) {
        // 0x80227F48: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227F60;
    }
    // 0x80227F48: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227F4C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227F50: addiu       $s1, $s1, 0x4070
    ctx->r17 = ADD32(ctx->r17, 0X4070);
    // 0x80227F54: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227F58: j           L_80227F70
    // 0x80227F5C: addiu       $s3, $s3, 0x4090
    ctx->r19 = ADD32(ctx->r19, 0X4090);
        goto L_80227F70;
    // 0x80227F5C: addiu       $s3, $s3, 0x4090
    ctx->r19 = ADD32(ctx->r19, 0X4090);
L_80227F60:
    // 0x80227F60: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227F64: addiu       $s1, $s1, 0x4060
    ctx->r17 = ADD32(ctx->r17, 0X4060);
    // 0x80227F68: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227F6C: addiu       $s3, $s3, 0x4080
    ctx->r19 = ADD32(ctx->r19, 0X4080);
L_80227F70:
    // 0x80227F70: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80227F74: jal         0x800A3450
    // 0x80227F78: addiu       $s4, $s4, 0x40A0
    ctx->r20 = ADD32(ctx->r20, 0X40A0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227F78: addiu       $s4, $s4, 0x40A0
    ctx->r20 = ADD32(ctx->r20, 0X40A0);
    after_0:
    // 0x80227F7C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227F80: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227F84: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80227F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F8C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227F90: beq         $v1, $v0, L_8022801C
    if (ctx->r3 == ctx->r2) {
        // 0x80227F94: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022801C;
    }
    // 0x80227F94: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227F98: beql        $v0, $zero, L_80227FB0
    if (ctx->r2 == 0) {
        // 0x80227F9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227FB0;
    }
    goto skip_0;
    // 0x80227F9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227FA0: beq         $v1, $zero, L_80227FC0
    if (ctx->r3 == 0) {
        // 0x80227FA4: nop
    
            goto L_80227FC0;
    }
    // 0x80227FA4: nop

    // 0x80227FA8: j           L_802280AC
    // 0x80227FAC: nop

        goto L_802280AC;
    // 0x80227FAC: nop

L_80227FB0:
    // 0x80227FB0: beq         $v1, $v0, L_80228030
    if (ctx->r3 == ctx->r2) {
        // 0x80227FB4: nop
    
            goto L_80228030;
    }
    // 0x80227FB4: nop

    // 0x80227FB8: j           L_802280AC
    // 0x80227FBC: nop

        goto L_802280AC;
    // 0x80227FBC: nop

L_80227FC0:
    // 0x80227FC0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227FC4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227FC8: bne         $v0, $zero, L_80227FEC
    if (ctx->r2 != 0) {
        // 0x80227FCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FEC;
    }
    // 0x80227FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FD0: jal         0x800A3450
    // 0x80227FD4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227FD4: nop

    after_1:
    // 0x80227FD8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227FDC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227FE0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227FE4: beq         $v0, $zero, L_80227FF8
    if (ctx->r2 == 0) {
        // 0x80227FE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FF8;
    }
    // 0x80227FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227FEC:
    // 0x80227FEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227FF0: j           L_8022800C
    // 0x80227FF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022800C;
    // 0x80227FF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227FF8:
    // 0x80227FF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227FFC: jal         0x80229388
    // 0x80228000: nop

    func_80229388_ovl18(rdram, ctx);
        goto after_2;
    // 0x80228000: nop

    after_2:
    // 0x80228004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228008: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022800C:
    // 0x8022800C: jal         0x802293C8
    // 0x80228010: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_802293C8_ovl18(rdram, ctx);
        goto after_3;
    // 0x80228010: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80228014: j           L_802280D0
    // 0x80228018: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_802280D0;
    // 0x80228018: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022801C:
    // 0x8022801C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228020: jal         0x80229378
    // 0x80228024: nop

    func_80229378_ovl18(rdram, ctx);
        goto after_4;
    // 0x80228024: nop

    after_4:
    // 0x80228028: j           L_802280D0
    // 0x8022802C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802280D0;
    // 0x8022802C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228030:
    // 0x80228030: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80228034: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80228038: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022803C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80228040: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80228044: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228048: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022804C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80228050: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80228054: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80228058: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022805C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228060: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80228064: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80228068: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022806C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80228070: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80228074: beq         $v1, $zero, L_802280A4
    if (ctx->r3 == 0) {
        // 0x80228078: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_802280A4;
    }
    // 0x80228078: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022807C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80228080: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80228084: beq         $v0, $zero, L_802280A4
    if (ctx->r2 == 0) {
        // 0x80228088: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802280A4;
    }
    // 0x80228088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022808C: jal         0x802293C8
    // 0x80228090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293C8_ovl18(rdram, ctx);
        goto after_5;
    // 0x80228090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80228094: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022809C: j           L_802280D0
    // 0x802280A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802280D0;
    // 0x802280A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802280A4:
    // 0x802280A4: j           L_802280D0
    // 0x802280A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_802280D0;
    // 0x802280A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_802280AC:
    // 0x802280AC: jal         0x800A3450
    // 0x802280B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802280B0: nop

    after_6:
    // 0x802280B4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802280B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802280BC: jal         0x80229388
    // 0x802280C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80229388_ovl18(rdram, ctx);
        goto after_7;
    // 0x802280C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x802280C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280CC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_802280D0:
    // 0x802280D0: jal         0x800A3450
    // 0x802280D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802280D4: nop

    after_8:
    // 0x802280D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802280DC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x802280E0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802280E4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802280E8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802280EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802280F0: beq         $v1, $v0, L_80228108
    if (ctx->r3 == ctx->r2) {
        // 0x802280F4: nop
    
            goto L_80228108;
    }
    // 0x802280F4: nop

    // 0x802280F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228100: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228104: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228108:
    // 0x80228108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022810C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228110: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228114: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228118: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022811C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228120: jr          $ra
    // 0x80228124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F928_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F928: jr          $ra
    // 0x8022F92C: nop

    TRACE_RETURN()
    return;
    // 0x8022F92C: nop

;}
RECOMP_FUNC void func_80230694_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230694: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230698: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8023069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802306A0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802306A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802306A8: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x802306AC: bne         $v0, $v1, L_802306CC
    if (ctx->r2 != ctx->r3) {
        // 0x802306B0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802306CC;
    }
    // 0x802306B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802306B4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802306B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802306BC: addiu       $a0, $a0, 0x681
    ctx->r4 = ADD32(ctx->r4, 0X681);
    // 0x802306C0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x802306C4: jal         0x8006036C
    // 0x802306C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802306C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
L_802306CC:
    // 0x802306CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802306D0: jr          $ra
    // 0x802306D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802306D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802306D8: nop

    // 0x802306DC: nop

;}
RECOMP_FUNC void func_802327E4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327E4: lb          $v0, 0x5F30($at)
    ctx->r2 = MEM_B(ctx->r1, 0X5F30);
    // 0x802327E8: lb          $v0, 0x6E00($at)
    ctx->r2 = MEM_B(ctx->r1, 0X6E00);
    // 0x802327EC: lb          $v0, 0x6E00($at)
    ctx->r2 = MEM_B(ctx->r1, 0X6E00);
    // 0x802327F0: nop

    // 0x802327F4: nop

    // 0x802327F8: nop

    // 0x802327FC: lb          $v0, -0x6B40($at)
    ctx->r2 = MEM_B(ctx->r1, -0X6B40);
;}
RECOMP_FUNC void func_80226538_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022653C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226544: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226548: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022654C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226550: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226554: beq         $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x80226558: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80226700;
    }
    // 0x80226558: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022655C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226560: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226564: addu        $at, $at, $v0
    gpr jr_addend_8022656C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226568: lw          $v0, 0x45F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X45F8);
    // 0x8022656C: jr          $v0
    // 0x80226570: nop

    switch (jr_addend_8022656C >> 2) {
        case 0: goto L_80226574; break;
        case 1: goto L_802265B8; break;
        case 2: goto L_80226618; break;
        case 3: goto L_802266A4; break;
        case 4: goto L_802266D4; break;
        default: switch_error(__func__, 0x8022656C, 0x802345F8);
    }
    // 0x80226570: nop

L_80226574:
    // 0x80226574: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226578: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022657C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226580: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x80226584: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226588: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022658C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80226590: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226594: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80226598: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022659C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802265A0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802265A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802265A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802265AC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802265B0: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x802265B4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_802265B8:
    // 0x802265B8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802265BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802265C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802265C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802265C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802265CC: bltz        $v0, L_802265FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802265D0: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_802265FC;
    }
    // 0x802265D0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802265D4: beq         $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x802265D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226700;
    }
    // 0x802265D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265DC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802265E0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802265E4: jal         0x8004DA90
    // 0x802265E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802265E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802265EC: jal         0x80040F30
    // 0x802265F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802265F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802265F4: j           L_80226700
    // 0x802265F8: nop

        goto L_80226700;
    // 0x802265F8: nop

L_802265FC:
    // 0x802265FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226600: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80226604: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226608: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x8022660C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80226610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226614: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226618:
    // 0x80226618: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022661C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226620: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226624: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226628: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022662C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226630: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80226634: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80226638: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022663C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226640: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226644: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80226648: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022664C: jal         0x8004DA90
    // 0x80226650: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226650: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80226654: jal         0x80040F30
    // 0x80226658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80226658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022665C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226660: beq         $v1, $zero, L_80226700
    if (ctx->r3 == 0) {
        // 0x80226664: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80226700;
    }
    // 0x80226664: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80226668: bnel        $v0, $zero, L_80226670
    if (ctx->r2 != 0) {
        // 0x8022666C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80226670;
    }
    goto skip_0;
    // 0x8022666C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80226670:
    // 0x80226670: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80226674: beq         $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x80226678: nop
    
            goto L_80226700;
    }
    // 0x80226678: nop

    // 0x8022667C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80226680: bgtz        $v0, L_80226700
    if (SIGNED(ctx->r2) > 0) {
        // 0x80226684: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_80226700;
    }
    // 0x80226684: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80226688: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022668C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226690: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x80226694: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80226698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022669C: j           L_80226700
    // 0x802266A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226700;
    // 0x802266A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802266A4:
    // 0x802266A4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802266A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802266AC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802266B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802266B4: bgez        $v0, L_80226700
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802266B8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80226700;
    }
    // 0x802266B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802266BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802266C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802266C4: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x802266C8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802266CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802266D4:
    // 0x802266D4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802266D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802266DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802266E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802266E4: bgez        $v0, L_80226700
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802266E8: nop
    
            goto L_80226700;
    }
    // 0x802266E8: nop

    // 0x802266EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802266F0: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x802266F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802266F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802266FC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_80226700:
    // 0x80226700: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022670C: jr          $ra
    // 0x80226710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229B5C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229B60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229B64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229B68: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229B6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229B70: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229B74: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229B78: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80229B7C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80229B80: beq         $v0, $zero, L_80229FFC
    if (ctx->r2 == 0) {
        // 0x80229B84: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229FFC;
    }
    // 0x80229B84: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229B88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229B8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229B90: addu        $at, $at, $v0
    gpr jr_addend_80229B98 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229B94: lw          $v0, 0x4628($at)
    ctx->r2 = ADD32(ctx->r1, 0X4628);
    // 0x80229B98: jr          $v0
    // 0x80229B9C: nop

    switch (jr_addend_80229B98 >> 2) {
        case 0: goto L_80229BA0; break;
        case 1: goto L_80229C84; break;
        case 2: goto L_80229D2C; break;
        case 3: goto L_80229D70; break;
        case 4: goto L_80229DEC; break;
        case 5: goto L_80229E94; break;
        case 6: goto L_80229F10; break;
        case 7: goto L_80229FFC; break;
        case 8: goto L_80229FBC; break;
        default: switch_error(__func__, 0x80229B98, 0x80234628);
    }
    // 0x80229B9C: nop

L_80229BA0:
    // 0x80229BA0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229BAC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229BB0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229BB4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229BB8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229BBC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229BC0: jal         0x8004D5D4
    // 0x80229BC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229BC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BCC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229BD0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229BD4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229BD8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229BDC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229BE0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229BE4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229BE8: addiu       $v0, $v0, 0x4130
    ctx->r2 = ADD32(ctx->r2, 0X4130);
    // 0x80229BEC: jal         0x8003E934
    // 0x80229BF0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229BF0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229BFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229C00: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229C04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229C0C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229C10: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229C14: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229C18: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229C1C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229C20: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229C24: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229C28: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229C2C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80229C30: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80229C34: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80229C38: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80229C3C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80229C40: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229C44: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229C48: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229C4C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229C50: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80229C54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229C58: jal         0x80050294
    // 0x80229C5C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229C5C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80229C60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C64: jal         0x8022A378
    // 0x80229C68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A378_ovl18(rdram, ctx);
        goto after_3;
    // 0x80229C68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80229C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C70: jal         0x8022A358
    // 0x80229C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A358_ovl18(rdram, ctx);
        goto after_4;
    // 0x80229C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80229C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C7C: j           L_80229FFC
    // 0x80229C80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229FFC;
    // 0x80229C80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229C84:
    // 0x80229C84: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80229C88: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80229C8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229C90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229C94: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80229C98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229C9C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80229CA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229CA4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229CA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229CAC: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80229CB0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80229CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229CB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229CBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229CC0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229CC4: jal         0x8022A538
    // 0x80229CC8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8022A538_ovl18(rdram, ctx);
        goto after_5;
    // 0x80229CC8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x80229CCC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229CD0: bne         $v0, $zero, L_8022A000
    if (ctx->r2 != 0) {
        // 0x80229CD4: nop
    
            goto L_8022A000;
    }
    // 0x80229CD4: nop

    // 0x80229CD8: jal         0x8003E934
    // 0x80229CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229CE0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229CE4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229CE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229CEC: beq         $a1, $zero, L_80229CFC
    if (ctx->r5 == 0) {
        // 0x80229CF0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80229CFC;
    }
    // 0x80229CF0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229CF4: jal         0x8022A21C
    // 0x80229CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A21C_ovl18(rdram, ctx);
        goto after_7;
    // 0x80229CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80229CFC:
    // 0x80229CFC: jal         0x8022A29C
    // 0x80229D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A29C_ovl18(rdram, ctx);
        goto after_8;
    // 0x80229D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229D04: jal         0x8005044C
    // 0x80229D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80229D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80229D0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D10: bne         $v0, $zero, L_80229D24
    if (ctx->r2 != 0) {
        // 0x80229D14: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80229D24;
    }
    // 0x80229D14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229D1C: j           L_80229FFC
    // 0x80229D20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229FFC;
    // 0x80229D20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229D24:
    // 0x80229D24: j           L_80229FFC
    // 0x80229D28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229FFC;
    // 0x80229D28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229D2C:
    // 0x80229D2C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D30: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229D34: bne         $v1, $v0, L_80229D58
    if (ctx->r3 != ctx->r2) {
        // 0x80229D38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229D58;
    }
    // 0x80229D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D3C: jal         0x8022A21C
    // 0x80229D40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A21C_ovl18(rdram, ctx);
        goto after_10;
    // 0x80229D40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80229D44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D48: jal         0x800A3450
    // 0x80229D4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80229D4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80229D50: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229D54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229D58:
    // 0x80229D58: jal         0x8022A29C
    // 0x80229D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A29C_ovl18(rdram, ctx);
        goto after_12;
    // 0x80229D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80229D60: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229D68: j           L_80229FFC
    // 0x80229D6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229FFC;
    // 0x80229D6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229D70:
    // 0x80229D70: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229D74: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80229D78: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80229D7C: jal         0x8004F820
    // 0x80229D80: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80229D80: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x80229D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D88: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229D8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229D90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229D98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229D9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229DA0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229DA4: jal         0x8022A538
    // 0x80229DA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8022A538_ovl18(rdram, ctx);
        goto after_14;
    // 0x80229DA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x80229DAC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229DB0: bne         $v0, $zero, L_8022A000
    if (ctx->r2 != 0) {
        // 0x80229DB4: nop
    
            goto L_8022A000;
    }
    // 0x80229DB4: nop

    // 0x80229DB8: jal         0x8003E934
    // 0x80229DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x80229DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80229DC0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229DC4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229DC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229DCC: beq         $a1, $zero, L_80229DDC
    if (ctx->r5 == 0) {
        // 0x80229DD0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80229DDC;
    }
    // 0x80229DD0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229DD4: jal         0x8022A21C
    // 0x80229DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A21C_ovl18(rdram, ctx);
        goto after_16;
    // 0x80229DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_80229DDC:
    // 0x80229DDC: jal         0x8022A29C
    // 0x80229DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A29C_ovl18(rdram, ctx);
        goto after_17;
    // 0x80229DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80229DE4: j           L_80229FF4
    // 0x80229DE8: nop

        goto L_80229FF4;
    // 0x80229DE8: nop

L_80229DEC:
    // 0x80229DEC: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80229DF0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229DF4: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x80229DF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229DFC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229E00: beq         $v1, $zero, L_80229E58
    if (ctx->r3 == 0) {
        // 0x80229E04: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80229E58;
    }
    // 0x80229E04: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80229E08: jal         0x8002A33C
    // 0x80229E0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x80229E0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x80229E10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80229E18: jal         0x80050294
    // 0x80229E1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x80229E1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80229E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E24: jal         0x8022A378
    // 0x80229E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A378_ovl18(rdram, ctx);
        goto after_20;
    // 0x80229E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80229E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E30: jal         0x8022A358
    // 0x80229E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A358_ovl18(rdram, ctx);
        goto after_21;
    // 0x80229E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80229E38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229E3C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80229E40: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80229E44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229E48: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x80229E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E50: j           L_80229E60
    // 0x80229E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229E60;
    // 0x80229E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229E58:
    // 0x80229E58: jal         0x8005044C
    // 0x80229E5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x80229E5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80229E60:
    // 0x80229E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E64: jal         0x8022A538
    // 0x80229E68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A538_ovl18(rdram, ctx);
        goto after_23;
    // 0x80229E68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x80229E6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229E70: bne         $v0, $zero, L_8022A000
    if (ctx->r2 != 0) {
        // 0x80229E74: nop
    
            goto L_8022A000;
    }
    // 0x80229E74: nop

    // 0x80229E78: jal         0x8003E934
    // 0x80229E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x80229E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80229E80: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229E84: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229E88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E8C: j           L_80229EF8
    // 0x80229E90: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80229EF8;
    // 0x80229E90: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80229E94:
    // 0x80229E94: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229E98: bgez        $v0, L_80229ED4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229E9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229ED4;
    }
    // 0x80229E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80229EA4: jal         0x80050294
    // 0x80229EA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x80229EA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x80229EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EB0: jal         0x8022A378
    // 0x80229EB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A378_ovl18(rdram, ctx);
        goto after_26;
    // 0x80229EB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80229EB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EBC: jal         0x8022A358
    // 0x80229EC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A358_ovl18(rdram, ctx);
        goto after_27;
    // 0x80229EC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x80229EC4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229EC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229ECC: j           L_80229EDC
    // 0x80229ED0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229EDC;
    // 0x80229ED0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229ED4:
    // 0x80229ED4: jal         0x8005044C
    // 0x80229ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x80229ED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_80229EDC:
    // 0x80229EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EE0: jal         0x8022A538
    // 0x80229EE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A538_ovl18(rdram, ctx);
        goto after_29;
    // 0x80229EE4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x80229EE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229EEC: bne         $v0, $zero, L_8022A000
    if (ctx->r2 != 0) {
        // 0x80229EF0: nop
    
            goto L_8022A000;
    }
    // 0x80229EF0: nop

    // 0x80229EF4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80229EF8:
    // 0x80229EF8: beql        $a1, $zero, L_8022A000
    if (ctx->r5 == 0) {
        // 0x80229EFC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022A000;
    }
    goto skip_0;
    // 0x80229EFC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80229F00: jal         0x8022A21C
    // 0x80229F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A21C_ovl18(rdram, ctx);
        goto after_30;
    // 0x80229F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x80229F08: j           L_8022A000
    // 0x80229F0C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022A000;
    // 0x80229F0C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80229F10:
    // 0x80229F10: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229F14: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80229F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229F20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229F24: jal         0x8003E934
    // 0x80229F28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80229F28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x80229F2C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229F30: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x80229F34: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80229F38: beq         $v0, $zero, L_80229F4C
    if (ctx->r2 == 0) {
        // 0x80229F3C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_80229F4C;
    }
    // 0x80229F3C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229F40: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80229F44: j           L_80229F64
    // 0x80229F48: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80229F64;
    // 0x80229F48: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80229F4C:
    // 0x80229F4C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80229F50: beq         $v0, $zero, L_80229F60
    if (ctx->r2 == 0) {
        // 0x80229F54: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229F60;
    }
    // 0x80229F54: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229F58: j           L_80229F64
    // 0x80229F5C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80229F64;
    // 0x80229F5C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80229F60:
    // 0x80229F60: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80229F64:
    // 0x80229F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F68: jal         0x8022A538
    // 0x80229F6C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A538_ovl18(rdram, ctx);
        goto after_32;
    // 0x80229F6C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x80229F70: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229F74: bne         $v0, $zero, L_8022A000
    if (ctx->r2 != 0) {
        // 0x80229F78: nop
    
            goto L_8022A000;
    }
    // 0x80229F78: nop

    // 0x80229F7C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229F80: bne         $a1, $zero, L_80229F98
    if (ctx->r5 != 0) {
        // 0x80229F84: nop
    
            goto L_80229F98;
    }
    // 0x80229F84: nop

    // 0x80229F88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229F8C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229F90: bne         $v0, $zero, L_80229FA4
    if (ctx->r2 != 0) {
        // 0x80229F94: nop
    
            goto L_80229FA4;
    }
    // 0x80229F94: nop

L_80229F98:
    // 0x80229F98: jal         0x8022A21C
    // 0x80229F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A21C_ovl18(rdram, ctx);
        goto after_33;
    // 0x80229F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x80229FA0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80229FA4:
    // 0x80229FA4: jal         0x8022A4CC
    // 0x80229FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A4CC_ovl18(rdram, ctx);
        goto after_34;
    // 0x80229FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x80229FAC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229FB4: j           L_80229FF4
    // 0x80229FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229FF4;
    // 0x80229FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229FBC:
    // 0x80229FBC: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x80229FC0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229FC4: jal         0x8004FA7C
    // 0x80229FC8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x80229FC8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x80229FCC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229FD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229FD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229FDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229FE0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229FE4: bne         $v0, $zero, L_80229FF4
    if (ctx->r2 != 0) {
        // 0x80229FE8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229FF4;
    }
    // 0x80229FE8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229FEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229FF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229FF4:
    // 0x80229FF4: jal         0x8005044C
    // 0x80229FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x80229FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_80229FFC:
    // 0x80229FFC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022A000:
    // 0x8022A000: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A004: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A008: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A00C: jr          $ra
    // 0x8022A010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022792C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022792C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80227930: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80227934: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x80227938: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022793C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80227940: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80227944: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80227948: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022794C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227950: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80227954: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80227958: jr          $ra
    // 0x8022795C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022795C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802308DC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802308E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802308E4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802308E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802308EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802308F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802308F4: lw          $v0, 0x4458($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4458);
    // 0x802308F8: jalr        $v0
    // 0x802308FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802308FC: nop

    after_0:
    // 0x80230900: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230904: jr          $ra
    // 0x80230908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272E8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802272F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802272FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227300: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80227304: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227308: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022730C: jal         0x802293C8
    // 0x80227310: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_802293C8_ovl18(rdram, ctx);
        goto after_0;
    // 0x80227310: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227314: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227318: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022731C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227320: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227324: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227328: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022732C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227334: jr          $ra
    // 0x80227338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023144C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023144C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231450: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231454: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231458: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023145C: jal         0x8004F144
    // 0x80231460: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231460: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80231464: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231468: beq         $s0, $zero, L_802314A8
    if (ctx->r16 == 0) {
        // 0x8023146C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_802314A8;
    }
    // 0x8023146C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80231470: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231474: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231478: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023147C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231480: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80231484: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80231488: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023148C: jal         0x8009A3B4
    // 0x80231490: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231490: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231494: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80231498: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023149C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802314A0: jal         0x8004F684
    // 0x802314A4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x802314A4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_802314A8:
    // 0x802314A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802314AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802314B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802314B4: jr          $ra
    // 0x802314B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802314B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022733C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022733C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227340: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227344: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227348: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022734C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227350: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227358: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022735C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227360: addiu       $v0, $v0, 0x3F78
    ctx->r2 = ADD32(ctx->r2, 0X3F78);
    // 0x80227364: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80227368: jal         0x800A3450
    // 0x8022736C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022736C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80227370: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227374: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227378: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022737C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80227380: addiu       $s0, $s0, 0x3FB8
    ctx->r16 = ADD32(ctx->r16, 0X3FB8);
    // 0x80227384: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227388: beq         $v1, $zero, L_802273A4
    if (ctx->r3 == 0) {
        // 0x8022738C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_802273A4;
    }
    // 0x8022738C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80227390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227394: beq         $v1, $v0, L_802273C4
    if (ctx->r3 == ctx->r2) {
        // 0x80227398: nop
    
            goto L_802273C4;
    }
    // 0x80227398: nop

    // 0x8022739C: j           L_802273D8
    // 0x802273A0: nop

        goto L_802273D8;
    // 0x802273A0: nop

L_802273A4:
    // 0x802273A4: jal         0x80229388
    // 0x802273A8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80229388_ovl18(rdram, ctx);
        goto after_1;
    // 0x802273A8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x802273AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802273B4: jal         0x802293C8
    // 0x802273B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_802293C8_ovl18(rdram, ctx);
        goto after_2;
    // 0x802273B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x802273BC: j           L_80227430
    // 0x802273C0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80227430;
    // 0x802273C0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_802273C4:
    // 0x802273C4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802273C8: jal         0x80229378
    // 0x802273CC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80229378_ovl18(rdram, ctx);
        goto after_3;
    // 0x802273CC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x802273D0: j           L_80227430
    // 0x802273D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80227430;
    // 0x802273D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_802273D8:
    // 0x802273D8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x802273DC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x802273E0: bne         $v1, $v0, L_802273F0
    if (ctx->r3 != ctx->r2) {
        // 0x802273E4: nop
    
            goto L_802273F0;
    }
    // 0x802273E4: nop

    // 0x802273E8: j           L_80227430
    // 0x802273EC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80227430;
    // 0x802273EC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_802273F0:
    // 0x802273F0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802273F4: jal         0x80229388
    // 0x802273F8: nop

    func_80229388_ovl18(rdram, ctx);
        goto after_4;
    // 0x802273F8: nop

    after_4:
    // 0x802273FC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227400: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227404: beq         $v0, $zero, L_80227418
    if (ctx->r2 == 0) {
        // 0x80227408: nop
    
            goto L_80227418;
    }
    // 0x80227408: nop

    // 0x8022740C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80227410: j           L_80227428
    // 0x80227414: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80227428;
    // 0x80227414: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227418:
    // 0x80227418: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022741C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227420: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227424: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227428:
    // 0x80227428: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022742C: addiu       $s0, $s0, 0x3FD8
    ctx->r16 = ADD32(ctx->r16, 0X3FD8);
L_80227430:
    // 0x80227430: jal         0x800A3450
    // 0x80227434: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80227434: nop

    after_5:
    // 0x80227438: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022743C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227440: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227444: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227448: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022744C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227450: beq         $v1, $v0, L_80227468
    if (ctx->r3 == ctx->r2) {
        // 0x80227454: nop
    
            goto L_80227468;
    }
    // 0x80227454: nop

    // 0x80227458: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022745C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227460: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227464: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227468:
    // 0x80227468: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022746C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227470: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022747C: jr          $ra
    // 0x80227480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F9F0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F9F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F9F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F9FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022FA00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022FA04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022FA08: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FA0C: addiu       $s2, $s1, 0x3
    ctx->r18 = ADD32(ctx->r17, 0X3);
    // 0x8022FA10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022FA14: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022FA18: jal         0x8004D5D4
    // 0x8022FA1C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FA1C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022FA20: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022FA24: jal         0x8002C654
    // 0x8022FA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022FA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022FA2C: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FA30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FA34: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022FA38: jal         0x800319B4
    // 0x8022FA3C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022FA3C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022FA40: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FA44: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FA48: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022FA4C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8022FA50: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FA54: addiu       $v0, $v0, 0x441C
    ctx->r2 = ADD32(ctx->r2, 0X441C);
    // 0x8022FA58: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022FA5C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022FA60: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022FA64: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022FA68: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022FA6C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022FA70: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022FA74: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022FA78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FA7C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022FA80: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022FA84: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8022FA88: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022FA8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FA90: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x8022FA94: bne         $v0, $v1, L_8022FB18
    if (ctx->r2 != ctx->r3) {
        // 0x8022FA98: nop
    
            goto L_8022FB18;
    }
    // 0x8022FA98: nop

    // 0x8022FA9C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022FAA0: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8022FAA4: jal         0x8006033C
    // 0x8022FAA8: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022FAA8: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    after_3:
    // 0x8022FAAC: beq         $v0, $zero, L_8022FAC4
    if (ctx->r2 == 0) {
        // 0x8022FAB0: nop
    
            goto L_8022FAC4;
    }
    // 0x8022FAB0: nop

    // 0x8022FAB4: jal         0x8004F684
    // 0x8022FAB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8022FAB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022FABC: j           L_8022FB18
    // 0x8022FAC0: nop

        goto L_8022FB18;
    // 0x8022FAC0: nop

L_8022FAC4:
    // 0x8022FAC4: jal         0x8006033C
    // 0x8022FAC8: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022FAC8: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    after_5:
    // 0x8022FACC: beq         $v0, $zero, L_8022FAFC
    if (ctx->r2 == 0) {
        // 0x8022FAD0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022FAFC;
    }
    // 0x8022FAD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FAD4: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x8022FAD8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022FADC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022FAE0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FAE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022FAE8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022FAEC: jal         0x8004D5D4
    // 0x8022FAF0: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x8022FAF0: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    after_6:
    // 0x8022FAF4: j           L_8022FB18
    // 0x8022FAF8: nop

        goto L_8022FB18;
    // 0x8022FAF8: nop

L_8022FAFC:
    // 0x8022FAFC: jal         0x8006033C
    // 0x8022FB00: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022FB00: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    after_7:
    // 0x8022FB04: beq         $v0, $zero, L_8022FB18
    if (ctx->r2 == 0) {
        // 0x8022FB08: nop
    
            goto L_8022FB18;
    }
    // 0x8022FB08: nop

    // 0x8022FB0C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FB10: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022FB14: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022FB18:
    // 0x8022FB18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FB1C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022FB20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022FB24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022FB28: jr          $ra
    // 0x8022FB2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FB2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CE30_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE40: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CE44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CE48: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022CE4C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CE50: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022CE54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022CE58: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022CE5C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022CE60: jal         0x8004D5D4
    // 0x8022CE64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CE64: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022CE68: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022CE6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022CE70: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CE74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE78: lhu         $v1, 0x4208($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4208);
    // 0x8022CE7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE80: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CE84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CE88: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CE8C: addiu       $v0, $v0, 0x41FC
    ctx->r2 = ADD32(ctx->r2, 0X41FC);
    // 0x8022CE90: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022CE94: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x8022CE98: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x8022CE9C: jal         0x8003E934
    // 0x8022CEA0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022CEA0: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022CEA4: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022CEA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CEAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CEB0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CEB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CEB8: jal         0x8009A3B4
    // 0x8022CEBC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CEBC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022CEC0: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CEC4: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x8022CEC8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022CECC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CED0: addiu       $v0, $v0, 0x41F0
    ctx->r2 = ADD32(ctx->r2, 0X41F0);
    // 0x8022CED4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022CED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CEDC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022CEE0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022CEE4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022CEE8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022CEEC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022CEF0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022CEF4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022CEF8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022CEFC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022CF00: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022CF04: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CF08: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022CF0C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CF10: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x8022CF14: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x8022CF18: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x8022CF1C: beq         $a0, $v0, L_8022CF54
    if (ctx->r4 == ctx->r2) {
        // 0x8022CF20: sw          $v1, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r3;
            goto L_8022CF54;
    }
    // 0x8022CF20: sw          $v1, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r3;
    // 0x8022CF24: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022CF28: bnel        $v0, $zero, L_8022CF3C
    if (ctx->r2 != 0) {
        // 0x8022CF2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF3C;
    }
    goto skip_0;
    // 0x8022CF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022CF30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CF34: beq         $a0, $v0, L_8022CF70
    if (ctx->r4 == ctx->r2) {
        // 0x8022CF38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF70;
    }
    // 0x8022CF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CF3C:
    // 0x8022CF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CF40: jal         0x80050294
    // 0x8022CF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022CF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022CF48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF4C: j           L_8022CF90
    // 0x8022CF50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CF90;
    // 0x8022CF50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CF54:
    // 0x8022CF54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022CF5C: jal         0x80050294
    // 0x8022CF60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022CF60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022CF64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF68: j           L_8022CF90
    // 0x8022CF6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CF90;
    // 0x8022CF6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CF70:
    // 0x8022CF70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CF74: jal         0x80050294
    // 0x8022CF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022CF7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CF80: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022CF84: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022CF88: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022CF8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022CF90:
    // 0x8022CF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF98: jr          $ra
    // 0x8022CF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C89C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C89C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022C8A0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C8A4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022C8A8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C8AC: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022C8B0: bltzl       $v0, L_8022C8B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C8B4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022C8B8;
    }
    goto skip_0;
    // 0x8022C8B4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022C8B8:
    // 0x8022C8B8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C8BC: bne         $v0, $zero, L_8022C8D4
    if (ctx->r2 != 0) {
        // 0x8022C8C0: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022C8D4;
    }
    // 0x8022C8C0: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C8C4: bne         $v0, $zero, L_8022C8D0
    if (ctx->r2 != 0) {
        // 0x8022C8C8: addiu       $v0, $a1, 0x20
        ctx->r2 = ADD32(ctx->r5, 0X20);
            goto L_8022C8D0;
    }
    // 0x8022C8C8: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8022C8CC: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
L_8022C8D0:
    // 0x8022C8D0: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022C8D4:
    // 0x8022C8D4: jr          $ra
    // 0x8022C8D8: nop

    TRACE_RETURN()
    return;
    // 0x8022C8D8: nop

;}
RECOMP_FUNC void func_8022765C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022765C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227664: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022766C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227670: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227674: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227678: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022767C: bne         $v0, $zero, L_802276A4
    if (ctx->r2 != 0) {
        // 0x80227680: nop
    
            goto L_802276A4;
    }
    // 0x80227680: nop

    // 0x80227684: jal         0x802292E0
    // 0x80227688: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802292E0_ovl18(rdram, ctx);
        goto after_0;
    // 0x80227688: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022768C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227690: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227694: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80227698: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022769C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802276A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802276A4:
    // 0x802276A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276AC: jr          $ra
    // 0x802276B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282C0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282C0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802282C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802282C8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802282CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282D0: bne         $v0, $zero, L_802282DC
    if (ctx->r2 != 0) {
        // 0x802282D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802282DC;
    }
    // 0x802282D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802282DC:
    // 0x802282DC: jr          $ra
    // 0x802282E0: nop

    TRACE_RETURN()
    return;
    // 0x802282E0: nop

;}
RECOMP_FUNC void func_8022C564_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C570: jal         0x8004F144
    // 0x8022C574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022C574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C578: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C57C: beq         $v1, $zero, L_8022C5B4
    if (ctx->r3 == 0) {
        // 0x8022C580: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022C5B4;
    }
    // 0x8022C580: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022C584: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022C588: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C58C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C590: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C594: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C598: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C59C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C5A0: jal         0x8009A3B4
    // 0x8022C5A4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C5A4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022C5A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C5AC: jal         0x8007A1B8
    // 0x8022C5B0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022C5B0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022C5B4:
    // 0x8022C5B4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C5B8: bne         $v0, $zero, L_8022C63C
    if (ctx->r2 != 0) {
        // 0x8022C5BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C63C;
    }
    // 0x8022C5BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C5C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C5C4: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022C5C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C5D4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022C5D8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022C5DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022C5E0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022C5E4: jal         0x8009A3B4
    // 0x8022C5E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C5E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_3:
    // 0x8022C5EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C5F0: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022C5F4: lh          $v0, 0x190($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X190);
    // 0x8022C5F8: lh          $v1, 0x192($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X192);
    // 0x8022C5FC: lh          $a3, 0x194($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X194);
    // 0x8022C600: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022C604: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C608: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C60C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022C610: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022C614: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C618: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C61C: jal         0x8004DA90
    // 0x8022C620: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022C620: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022C624: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022C628: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022C62C: jal         0x8009A3B4
    // 0x8022C630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022C634: j           L_8022C640
    // 0x8022C638: nop

        goto L_8022C640;
    // 0x8022C638: nop

L_8022C63C:
    // 0x8022C63C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C640:
    // 0x8022C640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C648: jr          $ra
    // 0x8022C64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229388_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229388: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022938C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229390: beq         $a0, $v0, L_802293B4
    if (ctx->r4 == ctx->r2) {
        // 0x80229394: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_802293B4;
    }
    // 0x80229394: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80229398: bne         $v0, $zero, L_802293C0
    if (ctx->r2 != 0) {
        // 0x8022939C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293C0;
    }
    // 0x8022939C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293A0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x802293A4: beq         $v0, $zero, L_802293BC
    if (ctx->r2 == 0) {
        // 0x802293A8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_802293BC;
    }
    // 0x802293A8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x802293AC: bne         $v0, $zero, L_802293C0
    if (ctx->r2 != 0) {
        // 0x802293B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293C0;
    }
    // 0x802293B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802293B4:
    // 0x802293B4: j           L_802293C0
    // 0x802293B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802293C0;
    // 0x802293B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802293BC:
    // 0x802293BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802293C0:
    // 0x802293C0: jr          $ra
    // 0x802293C4: nop

    TRACE_RETURN()
    return;
    // 0x802293C4: nop

;}
RECOMP_FUNC void func_8022C08C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C08C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C090: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C094: jal         0x8004F418
    // 0x8022C098: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C098: nop

    after_0:
    // 0x8022C09C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0A0: jr          $ra
    // 0x8022C0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232330_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232338: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023233C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232340: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232348: lw          $v0, 0x4580($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4580);
    // 0x8023234C: jalr        $v0
    // 0x80232350: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232350: nop

    after_0:
    // 0x80232354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232358: jr          $ra
    // 0x8023235C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023235C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F834_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F838: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F83C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F840: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022F844: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F848: jal         0x8003E6BC
    // 0x8022F84C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022F84C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F850: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F854: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022F858: jal         0x8003E6BC
    // 0x8022F85C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022F85C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022F860: bne         $s0, $v0, L_8022F888
    if (ctx->r16 != ctx->r2) {
        // 0x8022F864: nop
    
            goto L_8022F888;
    }
    // 0x8022F864: nop

    // 0x8022F868: jal         0x8006033C
    // 0x8022F86C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022F86C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022F870: bne         $v0, $zero, L_8022F888
    if (ctx->r2 != 0) {
        // 0x8022F874: nop
    
            goto L_8022F888;
    }
    // 0x8022F874: nop

    // 0x8022F878: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F87C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022F880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F884: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F888:
    // 0x8022F888: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F88C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F890: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F894: jr          $ra
    // 0x8022F898: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F898: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C210_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C210: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C214: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C218: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C21C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022C220: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C224: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C228: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C22C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C234: lb          $v0, 0x36D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X36D);
    // 0x8022C238: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022C23C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022C240: beq         $v0, $zero, L_8022C480
    if (ctx->r2 == 0) {
        // 0x8022C244: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022C480;
    }
    // 0x8022C244: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022C248: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022C24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C250: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    // 0x8022C254: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C258: lhu         $v0, 0x322($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X322);
    // 0x8022C25C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022C260: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022C264: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C268: jal         0x8004F820
    // 0x8022C26C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C26C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022C270: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022C274: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C278: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C27C: jal         0x8004EFE4
    // 0x8022C280: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022C280: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022C284: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C288: beq         $s2, $zero, L_8022C464
    if (ctx->r18 == 0) {
        // 0x8022C28C: addiu       $a0, $zero, 0x148
        ctx->r4 = ADD32(0, 0X148);
            goto L_8022C464;
    }
    // 0x8022C28C: addiu       $a0, $zero, 0x148
    ctx->r4 = ADD32(0, 0X148);
    // 0x8022C290: jal         0x8002A33C
    // 0x8022C294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C298: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022C29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C2A0: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022C2A4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8022C2A8: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8022C2AC: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x8022C2B0: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022C2B4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022C2B8: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022C2BC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022C2C0: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022C2C4: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022C2C8: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8022C2CC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022C2D0: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x8022C2D4: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022C2D8: lh          $a3, 0x18($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X18);
    // 0x8022C2DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C2E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C2E4: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022C2E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C2EC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022C2F0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022C2F4: jal         0x8009A3B4
    // 0x8022C2F8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C2F8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    after_3:
    // 0x8022C2FC: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022C300: addiu       $a1, $s1, 0x190
    ctx->r5 = ADD32(ctx->r17, 0X190);
    // 0x8022C304: jal         0x8009A3B4
    // 0x8022C308: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C308: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C30C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C310: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C314: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C318: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022C31C: addiu       $a2, $s1, 0x34C
    ctx->r6 = ADD32(ctx->r17, 0X34C);
    // 0x8022C320: addiu       $a3, $s1, 0x354
    ctx->r7 = ADD32(ctx->r17, 0X354);
    // 0x8022C324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C32C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C330: jal         0x8004E150
    // 0x8022C334: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_5;
    // 0x8022C334: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C338: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C33C: beq         $v0, $zero, L_8022C378
    if (ctx->r2 == 0) {
        // 0x8022C340: nop
    
            goto L_8022C378;
    }
    // 0x8022C340: nop

    // 0x8022C344: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022C348: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C34C: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022C350: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C354: lhu         $a0, 0x49C8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C8);
    // 0x8022C358: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022C35C: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8022C360: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C364: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022C368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C36C: sh          $a0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r4;
    // 0x8022C370: j           L_8022C408
    // 0x8022C374: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_8022C408;
    // 0x8022C374: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022C378:
    // 0x8022C378: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    // 0x8022C37C: jal         0x80032424
    // 0x8022C380: nop

    func_80032424_D824(rdram, ctx);
        goto after_6;
    // 0x8022C380: nop

    after_6:
    // 0x8022C384: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022C388: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022C38C: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x8022C390: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022C394: jal         0x80032498
    // 0x8022C398: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8022C398: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_7:
    // 0x8022C39C: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022C3A0: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022C3A4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C3A8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022C3AC: jal         0x800324B4
    // 0x8022C3B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8022C3B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_8:
    // 0x8022C3B4: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022C3B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C3BC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C3C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C3C4: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022C3C8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022C3CC: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022C3D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C3D4: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022C3D8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022C3DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022C3E0: sh          $a0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r4;
    // 0x8022C3E4: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022C3E8: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C3EC: mflo        $s0
    ctx->r16 = lo;
    // 0x8022C3F0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022C3F4: srl         $s0, $s0, 12
    ctx->r16 = S32(U32(ctx->r16) >> 12);
    // 0x8022C3F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022C3FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C400: sh          $v0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r2;
    // 0x8022C404: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022C408:
    // 0x8022C408: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C40C: lh          $a2, 0x5E($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X5E);
    // 0x8022C410: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C414: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022C418: jal         0x8004E458
    // 0x8022C41C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E458_29858(rdram, ctx);
        goto after_9;
    // 0x8022C41C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022C420: jal         0x8022C650
    // 0x8022C424: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022C650_ovl18(rdram, ctx);
        goto after_10;
    // 0x8022C424: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022C428: jal         0x8004F144
    // 0x8022C42C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8022C42C: nop

    after_11:
    // 0x8022C430: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C434: beq         $v1, $zero, L_8022C464
    if (ctx->r3 == 0) {
        // 0x8022C438: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C464;
    }
    // 0x8022C438: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C43C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C440: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022C444: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C448: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022C44C: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022C450: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C454: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022C458: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022C45C: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022C460: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022C464:
    // 0x8022C464: lbu         $v0, 0x65($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X65);
    // 0x8022C468: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x8022C46C: sb          $v1, 0x66($s4)
    MEM_B(0X66, ctx->r20) = ctx->r3;
    // 0x8022C470: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C474: sb          $v0, 0x65($s4)
    MEM_B(0X65, ctx->r20) = ctx->r2;
    // 0x8022C478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C47C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022C480:
    // 0x8022C480: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C484: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C488: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C48C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C490: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C494: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C49C: jr          $ra
    // 0x8022C4A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C4A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229AD0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229AD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229AD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229ADC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229AE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229AE8: jal         0x8009A3B4
    // 0x80229AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80229AF0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229AF4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229AF8: jal         0x8009A3B4
    // 0x80229AFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229AFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229B00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229B04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229B08: jal         0x8009A3B4
    // 0x80229B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229B10: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229B14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229B18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229B1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229B20: lw          $v0, 0x413C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X413C);
    // 0x80229B24: jalr        $v0
    // 0x80229B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80229B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229B2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229B30: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229B34: beq         $v0, $zero, L_80229B4C
    if (ctx->r2 == 0) {
        // 0x80229B38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229B4C;
    }
    // 0x80229B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B3C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80229B40: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229B44: jal         0x8003B564
    // 0x80229B48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80229B48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80229B4C:
    // 0x80229B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229B50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B54: jr          $ra
    // 0x80229B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A358_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A358: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022A35C: beq         $a1, $zero, L_8022A36C
    if (ctx->r5 == 0) {
        // 0x8022A360: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022A36C;
    }
    // 0x8022A360: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A364: j           L_8022A370
    // 0x8022A368: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022A370;
    // 0x8022A368: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022A36C:
    // 0x8022A36C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022A370:
    // 0x8022A370: jr          $ra
    // 0x8022A374: nop

    TRACE_RETURN()
    return;
    // 0x8022A374: nop

;}
RECOMP_FUNC void func_8022D548_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D548: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D54C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D550: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D554: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D558: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022D55C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022D560: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D564: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D568: beq         $v1, $zero, L_8022D584
    if (ctx->r3 == 0) {
        // 0x8022D56C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D584;
    }
    // 0x8022D56C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D574: beq         $v1, $v0, L_8022D5CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D578: nop
    
            goto L_8022D5CC;
    }
    // 0x8022D578: nop

    // 0x8022D57C: j           L_8022D710
    // 0x8022D580: nop

        goto L_8022D710;
    // 0x8022D580: nop

L_8022D584:
    // 0x8022D584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D588: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022D58C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D590: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022D594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D598: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D59C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D5A0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D5A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022D5A8: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x8022D5AC: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x8022D5B0: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x8022D5B4: jal         0x80050294
    // 0x8022D5B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D5B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022D5BC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D5C0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D5C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D5C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D5CC:
    // 0x8022D5CC: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022D5D0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022D5D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D5D8: beq         $v0, $zero, L_8022D61C
    if (ctx->r2 == 0) {
        // 0x8022D5DC: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_8022D61C;
    }
    // 0x8022D5DC: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D5E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D5E4: jal         0x8009A3B4
    // 0x8022D5E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D5E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D5EC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D5F0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D5F4: jal         0x8009A3B4
    // 0x8022D5F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D5F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022D5FC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D600: beq         $v0, $zero, L_8022D710
    if (ctx->r2 == 0) {
        // 0x8022D604: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D710;
    }
    // 0x8022D604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D60C: jal         0x80050294
    // 0x8022D610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022D610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022D614: j           L_8022D710
    // 0x8022D618: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8022D710;
    // 0x8022D618: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D61C:
    // 0x8022D61C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D620: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D624: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D628: jal         0x8004DA90
    // 0x8022D62C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022D62C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022D630: jal         0x80040F30
    // 0x8022D634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022D634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D638: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022D63C: beq         $s2, $zero, L_8022D64C
    if (ctx->r18 == 0) {
        // 0x8022D640: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8022D64C;
    }
    // 0x8022D640: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8022D644: jal         0x80040834
    // 0x8022D648: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x8022D648: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8022D64C:
    // 0x8022D64C: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022D650: lh          $v0, 0x1C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1C);
    // 0x8022D654: bgez        $a2, L_8022D660
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022D658: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022D660;
    }
    // 0x8022D658: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022D65C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8022D660:
    // 0x8022D660: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D664: bltzl       $v0, L_8022D66C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D668: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022D66C;
    }
    goto skip_0;
    // 0x8022D668: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022D66C:
    // 0x8022D66C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D670: bne         $v0, $zero, L_8022D684
    if (ctx->r2 != 0) {
        // 0x8022D674: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8022D684;
    }
    // 0x8022D674: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8022D678: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x8022D67C: j           L_8022D694
    // 0x8022D680: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022D694;
    // 0x8022D680: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022D684:
    // 0x8022D684: bgez        $a2, L_8022D690
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022D688: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022D690;
    }
    // 0x8022D688: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022D68C: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022D690:
    // 0x8022D690: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022D694:
    // 0x8022D694: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D698: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D69C: jal         0x8004DE68
    // 0x8022D6A0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x8022D6A0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_7:
    // 0x8022D6A4: sltiu       $v0, $v0, 0x1001
    ctx->r2 = ctx->r2 < 0X1001 ? 1 : 0;
    // 0x8022D6A8: bne         $v0, $zero, L_8022D6D4
    if (ctx->r2 != 0) {
        // 0x8022D6AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D6D4;
    }
    // 0x8022D6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D6B4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D6B8: jal         0x8009A3B4
    // 0x8022D6BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D6BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022D6C0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D6C4: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D6C8: jal         0x8009A3B4
    // 0x8022D6CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022D6CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x8022D6D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D6D4:
    // 0x8022D6D4: jal         0x8022DA44
    // 0x8022D6D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022DA44_ovl18(rdram, ctx);
        goto after_10;
    // 0x8022D6D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8022D6DC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D6E0: bgez        $v0, L_8022D710
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D6E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D710;
    }
    // 0x8022D6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D6E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D6EC: jal         0x80050294
    // 0x8022D6F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022D6F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8022D6F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6F8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022D6FC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022D700: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D704: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D708: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D70C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D710:
    // 0x8022D710: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D714: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D718: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022D71C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D720: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D724: jr          $ra
    // 0x8022D728: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D728: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022DACC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DAD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DAD8: beq         $a1, $zero, L_8022DB24
    if (ctx->r5 == 0) {
        // 0x8022DADC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022DB24;
    }
    // 0x8022DADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DAE0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022DAE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DAE8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022DAEC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022DAF0: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022DAF4: bne         $v0, $zero, L_8022DB24
    if (ctx->r2 != 0) {
        // 0x8022DAF8: nop
    
            goto L_8022DB24;
    }
    // 0x8022DAF8: nop

    // 0x8022DAFC: jal         0x800A3450
    // 0x8022DB00: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DB00: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x8022DB04: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022DB08: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022DB0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DB10: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022DB14: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022DB18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DB1C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DB20: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_8022DB24:
    // 0x8022DB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DB28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB2C: jr          $ra
    // 0x8022DB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A29C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A2A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A2A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A2AC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022A2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A2B4: jal         0x8004DDE8
    // 0x8022A2B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022A2B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A2BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A2C0: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022A2C4: beq         $v0, $zero, L_8022A308
    if (ctx->r2 == 0) {
        // 0x8022A2C8: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022A308;
    }
    // 0x8022A2C8: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022A2CC: beq         $v0, $zero, L_8022A2E8
    if (ctx->r2 == 0) {
        // 0x8022A2D0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A2E8;
    }
    // 0x8022A2D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A2D4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A2D8: beq         $v1, $v0, L_8022A348
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2DC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A348;
    }
    // 0x8022A2DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A2E0: j           L_8022A348
    // 0x8022A2E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A348;
    // 0x8022A2E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A2E8:
    // 0x8022A2E8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A2EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A2F0: beq         $v1, $v0, L_8022A348
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A348;
    }
    // 0x8022A2F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A2F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A2FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A300: j           L_8022A328
    // 0x8022A304: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022A328;
    // 0x8022A304: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022A308:
    // 0x8022A308: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A30C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A310: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022A314: bne         $v0, $zero, L_8022A348
    if (ctx->r2 != 0) {
        // 0x8022A318: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A348;
    }
    // 0x8022A318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A31C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022A328:
    // 0x8022A328: jal         0x80050294
    // 0x8022A32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022A32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022A330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A334: jal         0x8022A378
    // 0x8022A338: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A378_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022A338: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022A33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A340: jal         0x8022A358
    // 0x8022A344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A358_ovl18(rdram, ctx);
        goto after_3;
    // 0x8022A344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022A348:
    // 0x8022A348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A34C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A350: jr          $ra
    // 0x8022A354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BA8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226BAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226BB0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226BB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80226BB8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80226BBC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226BC0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226BC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226BC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226BCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226BD0: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x80226BD4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80226BD8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80226BDC: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x80226BE0: beq         $s2, $zero, L_80226DCC
    if (ctx->r18 == 0) {
        // 0x80226BE4: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_80226DCC;
    }
    // 0x80226BE4: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x80226BE8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80226BEC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226BF0: beql        $v0, $zero, L_80226DC4
    if (ctx->r2 == 0) {
        // 0x80226BF4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80226DC4;
    }
    goto skip_0;
    // 0x80226BF4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80226BF8: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x80226BFC: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x80226C00: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80226C04: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80226C08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226C0C: bgtz        $v0, L_80226D04
    if (SIGNED(ctx->r2) > 0) {
        // 0x80226C10: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_80226D04;
    }
    // 0x80226C10: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x80226C14: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226C18: lhu         $a0, 0x348($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X348);
    // 0x80226C1C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80226C20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80226C24: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x80226C28: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80226C2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226C30: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x80226C34: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80226C38: andi        $a0, $a0, 0xFFF3
    ctx->r4 = ctx->r4 & 0XFFF3;
    // 0x80226C3C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226C40: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80226C44: sh          $a0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r4;
    // 0x80226C48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80226C4C: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x80226C50: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80226C54: lbu         $s2, 0x19($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X19);
L_80226C58:
    // 0x80226C58: jal         0x8004F144
    // 0x80226C5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226C5C: nop

    after_0:
    // 0x80226C60: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80226C64: beq         $a1, $zero, L_80226CF8
    if (ctx->r5 == 0) {
        // 0x80226C68: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80226CF8;
    }
    // 0x80226C68: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x80226C6C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80226C70: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x80226C74: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80226C78: sb          $s4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r20;
    // 0x80226C7C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226C80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226C84: lbu         $v0, 0x3960($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3960);
    // 0x80226C88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226C8C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226C90: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80226C94: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80226C98: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226C9C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226CA0: lbu         $v0, 0x3960($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3960);
    // 0x80226CA4: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80226CA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226CAC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226CB0: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80226CB4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226CB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226CBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226CC0: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80226CC4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226CC8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226CCC: lbu         $v0, 0x3960($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3960);
    // 0x80226CD0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226CD4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226CD8: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x80226CDC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80226CE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226CE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226CE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226CEC: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80226CF0: bne         $v0, $zero, L_80226C58
    if (ctx->r2 != 0) {
        // 0x80226CF4: sh          $v1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r3;
            goto L_80226C58;
    }
    // 0x80226CF4: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
L_80226CF8:
    // 0x80226CF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226CFC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226D00: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80226D04:
    // 0x80226D04: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80226D08: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80226D0C: beq         $v0, $zero, L_80226DB0
    if (ctx->r2 == 0) {
        // 0x80226D10: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80226DB0;
    }
    // 0x80226D10: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80226D14: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x80226D18: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x80226D1C: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80226D20: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80226D24: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226D28: bne         $v1, $zero, L_80226D60
    if (ctx->r3 != 0) {
        // 0x80226D2C: sh          $a0, 0xA($s3)
        MEM_H(0XA, ctx->r19) = ctx->r4;
            goto L_80226D60;
    }
    // 0x80226D2C: sh          $a0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r4;
    // 0x80226D30: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80226D34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80226D38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80226D3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226D44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226D48: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x80226D4C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80226D50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226D54: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226D58: bnel        $v0, $zero, L_80226DB8
    if (ctx->r2 != 0) {
        // 0x80226D5C: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_80226DB8;
    }
    goto skip_1;
    // 0x80226D5C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
L_80226D60:
    // 0x80226D60: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80226D64: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80226D68: jal         0x8002A33C
    // 0x80226D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80226D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226D74: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80226D78: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80226D7C: jal         0x8004FEA0
    // 0x80226D80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80226D80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80226D84: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x80226D88: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80226D8C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226D90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226D94: bne         $v0, $zero, L_80226DA0
    if (ctx->r2 != 0) {
        // 0x80226D98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226DA0;
    }
    // 0x80226D98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226DA0:
    // 0x80226DA0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226DA4: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80226DA8: j           L_80226DB8
    // 0x80226DAC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_80226DB8;
    // 0x80226DAC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80226DB0:
    // 0x80226DB0: jal         0x8002A33C
    // 0x80226DB4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80226DB4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_80226DB8:
    // 0x80226DB8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80226DBC: j           L_80226DCC
    // 0x80226DC0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_80226DCC;
    // 0x80226DC0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_80226DC4:
    // 0x80226DC4: jal         0x8002A33C
    // 0x80226DC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80226DC8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_80226DCC:
    // 0x80226DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80226DD4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80226DD8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80226DDC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226DE0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226DE4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226DE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226DEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DF0: jr          $ra
    // 0x80226DF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226DF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80226DF8: nop

    // 0x80226DFC: nop

;}
RECOMP_FUNC void func_8022E380_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E380: jr          $ra
    // 0x8022E384: nop

    TRACE_RETURN()
    return;
    // 0x8022E384: nop

;}
RECOMP_FUNC void func_802283D8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802283DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802283E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802283E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802283EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802283F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802283F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802283F8: jal         0x80229388
    // 0x802283FC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80229388_ovl18(rdram, ctx);
        goto after_0;
    // 0x802283FC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228400: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228408: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022840C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228410: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022841C: jr          $ra
    // 0x80228420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EC4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227ECC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227ED4: jal         0x802293C8
    // 0x80227ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293C8_ovl18(rdram, ctx);
        goto after_0;
    // 0x80227ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80227EDC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80227EE0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227EE4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227EE8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80227EEC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227EF0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227EF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227EF8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80227EFC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227F00: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80227F04: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80227F08: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80227F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F14: jr          $ra
    // 0x80227F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ACB0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACB0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022ACB4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022ACB8: bne         $v0, $zero, L_8022ACD8
    if (ctx->r2 != 0) {
        // 0x8022ACBC: nop
    
            goto L_8022ACD8;
    }
    // 0x8022ACBC: nop

    // 0x8022ACC0: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022ACC4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022ACC8: beq         $v0, $zero, L_8022AD00
    if (ctx->r2 == 0) {
        // 0x8022ACCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AD00;
    }
    // 0x8022ACCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACD0: j           L_8022AD00
    // 0x8022ACD4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8022AD00;
    // 0x8022ACD4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022ACD8:
    // 0x8022ACD8: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x8022ACDC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022ACE0: beq         $v0, $zero, L_8022AD00
    if (ctx->r2 == 0) {
        // 0x8022ACE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022AD00;
    }
    // 0x8022ACE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ACE8: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8022ACEC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022ACF0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022ACF4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ACF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ACFC: sh          $v0, 0x32E($a0)
    MEM_H(0X32E, ctx->r4) = ctx->r2;
L_8022AD00:
    // 0x8022AD00: jr          $ra
    // 0x8022AD04: nop

    TRACE_RETURN()
    return;
    // 0x8022AD04: nop

;}
RECOMP_FUNC void func_80228424_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228428: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022842C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228430: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228434: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228438: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022843C: lw          $v0, 0x40B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40B0);
    // 0x80228440: jalr        $v0
    // 0x80228444: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228444: nop

    after_0:
    // 0x80228448: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022844C: jr          $ra
    // 0x80228450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022988C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022988C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229898: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022989C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802298A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802298A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802298A8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802298AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802298B0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802298B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802298B8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802298BC: beq         $v1, $v0, L_80229974
    if (ctx->r3 == ctx->r2) {
        // 0x802298C0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229974;
    }
    // 0x802298C0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802298C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802298C8: beql        $v0, $zero, L_802298E0
    if (ctx->r2 == 0) {
        // 0x802298CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802298E0;
    }
    goto skip_0;
    // 0x802298CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802298D0: beq         $v1, $zero, L_802298F0
    if (ctx->r3 == 0) {
        // 0x802298D4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802298F0;
    }
    // 0x802298D4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802298D8: j           L_80229A28
    // 0x802298DC: nop

        goto L_80229A28;
    // 0x802298DC: nop

L_802298E0:
    // 0x802298E0: beq         $v1, $v0, L_802299C4
    if (ctx->r3 == ctx->r2) {
        // 0x802298E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802299C4;
    }
    // 0x802298E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802298E8: j           L_80229A28
    // 0x802298EC: nop

        goto L_80229A28;
    // 0x802298EC: nop

L_802298F0:
    // 0x802298F0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802298F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802298F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802298FC: addiu       $s2, $a1, 0x14
    ctx->r18 = ADD32(ctx->r5, 0X14);
    // 0x80229900: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229904: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229908: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022990C: jal         0x8004F820
    // 0x80229910: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229910: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80229914: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229918: bgez        $v0, L_80229944
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022991C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229944;
    }
    // 0x8022991C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229920: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229924: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229928: jal         0x8004F820
    // 0x8022992C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022992C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229930: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229934: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229938: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022993C: j           L_8022995C
    // 0x80229940: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022995C;
    // 0x80229940: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229944:
    // 0x80229944: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229948: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022994C: jal         0x8004F820
    // 0x80229950: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229950: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229954: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229958: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022995C:
    // 0x8022995C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229960: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x80229964: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229968: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022996C: j           L_80229A28
    // 0x80229970: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_80229A28;
    // 0x80229970: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80229974:
    // 0x80229974: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229978: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022997C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229980: jal         0x8004F820
    // 0x80229984: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229984: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x80229988: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022998C: lhu         $a0, 0x34C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34C);
    // 0x80229990: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229994: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229998: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022999C: sh          $a0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r4;
    // 0x802299A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802299A4: bgez        $a0, L_80229A0C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802299A8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229A0C;
    }
    // 0x802299A8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802299AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802299B0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802299B4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802299B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802299BC: j           L_80229A0C
    // 0x802299C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80229A0C;
    // 0x802299C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802299C4:
    // 0x802299C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802299C8: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802299CC: jal         0x8004F820
    // 0x802299D0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x802299D0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_4:
    // 0x802299D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802299D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802299DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802299E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802299E4: bgez        $a0, L_80229A0C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802299E8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229A0C;
    }
    // 0x802299E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802299EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802299F0: lhu         $v1, 0x34A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34A);
    // 0x802299F4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802299F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802299FC: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x80229A00: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80229A04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229A08: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
L_80229A0C:
    // 0x80229A0C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80229A10: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80229A14: bne         $v0, $zero, L_80229A28
    if (ctx->r2 != 0) {
        // 0x80229A18: nop
    
            goto L_80229A28;
    }
    // 0x80229A18: nop

    // 0x80229A1C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229A20: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229A24: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80229A28:
    // 0x80229A28: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229A2C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229A30: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229A34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A3C: jr          $ra
    // 0x80229A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BB04_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022BB08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BB0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BB10: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8022BB14: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022BB18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022BB1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BB20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BB24: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022BB28: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BB2C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022BB30: bne         $v0, $zero, L_8022BB44
    if (ctx->r2 != 0) {
        // 0x8022BB34: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022BB44;
    }
    // 0x8022BB34: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022BB38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BB3C: j           L_8022BB48
    // 0x8022BB40: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
        goto L_8022BB48;
    // 0x8022BB40: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
L_8022BB44:
    // 0x8022BB44: sb          $zero, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = 0;
L_8022BB48:
    // 0x8022BB48: lbu         $a0, 0x4E($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022BB4C: andi        $v0, $a0, 0xA
    ctx->r2 = ctx->r4 & 0XA;
    // 0x8022BB50: beq         $v0, $zero, L_8022BCE0
    if (ctx->r2 == 0) {
        // 0x8022BB54: nop
    
            goto L_8022BCE0;
    }
    // 0x8022BB54: nop

    // 0x8022BB58: lbu         $v0, 0x50($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X50);
    // 0x8022BB5C: bne         $v0, $zero, L_8022BCDC
    if (ctx->r2 != 0) {
        // 0x8022BB60: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022BCDC;
    }
    // 0x8022BB60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BB64: lbu         $v1, 0x51($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X51);
    // 0x8022BB68: ori         $v0, $a0, 0x8
    ctx->r2 = ctx->r4 | 0X8;
    // 0x8022BB6C: bne         $v1, $zero, L_8022BCD0
    if (ctx->r3 != 0) {
        // 0x8022BB70: sb          $v0, 0x4E($s2)
        MEM_B(0X4E, ctx->r18) = ctx->r2;
            goto L_8022BCD0;
    }
    // 0x8022BB70: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
    // 0x8022BB74: lbu         $v1, 0x4F($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022BB78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BB7C: beq         $v1, $zero, L_8022BCC0
    if (ctx->r3 == 0) {
        // 0x8022BB80: sb          $v0, 0x51($s2)
        MEM_B(0X51, ctx->r18) = ctx->r2;
            goto L_8022BCC0;
    }
    // 0x8022BB80: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
    // 0x8022BB84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8022BB88:
    // 0x8022BB88: jal         0x8004EFE4
    // 0x8022BB8C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022BB8C: nop

    after_0:
    // 0x8022BB90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022BB94: beq         $s0, $zero, L_8022BC9C
    if (ctx->r16 == 0) {
        // 0x8022BB98: addiu       $a0, $zero, 0xEB
        ctx->r4 = ADD32(0, 0XEB);
            goto L_8022BC9C;
    }
    // 0x8022BB98: addiu       $a0, $zero, 0xEB
    ctx->r4 = ADD32(0, 0XEB);
    // 0x8022BB9C: jal         0x8002A33C
    // 0x8022BBA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022BBA0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x8022BBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022BBAC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022BBB0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022BBB4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022BBB8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022BBBC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BBC0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BBC4: lhu         $v0, 0x188($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X188);
    // 0x8022BBC8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022BBCC: lhu         $v0, 0x18C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18C);
    // 0x8022BBD0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022BBD4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022BBD8: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022BBDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BBE4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022BBE8: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022BBEC: lbu         $v0, 0x54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X54);
    // 0x8022BBF0: bne         $v0, $zero, L_8022BC44
    if (ctx->r2 != 0) {
        // 0x8022BBF4: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022BC44;
    }
    // 0x8022BBF4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022BBF8: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022BBFC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022BC00: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022BC04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BC08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC0C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC10: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022BC14: beq         $v0, $zero, L_8022BC30
    if (ctx->r2 == 0) {
        // 0x8022BC18: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BC30;
    }
    // 0x8022BC18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BC1C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BC20: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC24: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BC28: j           L_8022BC8C
    // 0x8022BC2C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
        goto L_8022BC8C;
    // 0x8022BC2C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
L_8022BC30:
    // 0x8022BC30: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BC34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC38: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BC3C: j           L_8022BC8C
    // 0x8022BC40: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
        goto L_8022BC8C;
    // 0x8022BC40: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
L_8022BC44:
    // 0x8022BC44: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022BC48: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x8022BC4C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022BC50: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BC54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC5C: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022BC60: beq         $v0, $zero, L_8022BC7C
    if (ctx->r2 == 0) {
        // 0x8022BC64: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022BC7C;
    }
    // 0x8022BC64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BC68: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BC6C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC70: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BC74: j           L_8022BC8C
    // 0x8022BC78: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
        goto L_8022BC8C;
    // 0x8022BC78: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
L_8022BC7C:
    // 0x8022BC7C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022BC80: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BC84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022BC88: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
L_8022BC8C:
    // 0x8022BC8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022BC90: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BC94: jal         0x8004DBA0
    // 0x8022BC98: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022BC98: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
L_8022BC9C:
    // 0x8022BC9C: addiu       $v0, $s3, -0x1
    ctx->r2 = ADD32(ctx->r19, -0X1);
    // 0x8022BCA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022BCA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BCA8: bgez        $v0, L_8022BB88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BCAC: nop
    
            goto L_8022BB88;
    }
    // 0x8022BCAC: nop

    // 0x8022BCB0: lbu         $v0, 0x4F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022BCB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BCB8: j           L_8022BCE0
    // 0x8022BCBC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
        goto L_8022BCE0;
    // 0x8022BCBC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
L_8022BCC0:
    // 0x8022BCC0: lbu         $v0, 0x4E($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022BCC4: andi        $v0, $v0, 0xF5
    ctx->r2 = ctx->r2 & 0XF5;
    // 0x8022BCC8: j           L_8022BCE0
    // 0x8022BCCC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
        goto L_8022BCE0;
    // 0x8022BCCC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
L_8022BCD0:
    // 0x8022BCD0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BCD4: j           L_8022BCE0
    // 0x8022BCD8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
        goto L_8022BCE0;
    // 0x8022BCD8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
L_8022BCDC:
    // 0x8022BCDC: sb          $v0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r2;
L_8022BCE0:
    // 0x8022BCE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022BCE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022BCE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BCEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BCF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BCF4: jr          $ra
    // 0x8022BCF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022BCF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022BCFC: nop

;}
RECOMP_FUNC void func_80228CD0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228CD4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228CD8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228CDC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228CE0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80228CE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228CE8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228CEC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228CF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228CF4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80228CF8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x80228CFC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x80228D00: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228D04: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80228D08: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80228D0C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80228D10: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80228D14: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228D1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D24: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80228D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228D2C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80228D30: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80228D34: jal         0x8009A3B4
    // 0x80228D38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228D38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228D3C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80228D40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228D44: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80228D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228D4C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80228D50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228D54: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80228D58: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80228D5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228D60: jal         0x8004EC38
    // 0x80228D64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80228D64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80228D68: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80228D6C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80228D70: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80228D74: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80228D78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80228D7C: jal         0x80034FCC
    // 0x80228D80: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80228D80: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80228D84: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80228D88: jal         0x80229378
    // 0x80228D8C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80229378_ovl18(rdram, ctx);
        goto after_3;
    // 0x80228D8C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80228D90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80228D94: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80228D98: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228D9C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228DA0: jal         0x8004F820
    // 0x80228DA4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80228DA4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80228DA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DAC: bgez        $v0, L_80228DD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228DB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80228DD8;
    }
    // 0x80228DB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80228DB4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80228DB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228DBC: jal         0x8004F820
    // 0x80228DC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80228DC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80228DC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228DCC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228DD0: j           L_80228DF0
    // 0x80228DD4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80228DF0;
    // 0x80228DD4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80228DD8:
    // 0x80228DD8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80228DDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228DE0: jal         0x8004F820
    // 0x80228DE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x80228DE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x80228DE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DEC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80228DF0:
    // 0x80228DF0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80228DF4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x80228DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DFC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80228E00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228E04: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x80228E08: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228E0C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228E10: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228E14: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228E18: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228E1C: jr          $ra
    // 0x80228E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228E20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225B20_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225B30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225B34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B38: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80225B3C: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80225B40: lw          $s2, -0x3A2C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X3A2C);
    // 0x80225B44: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80225B48: beq         $v0, $zero, L_80225CEC
    if (ctx->r2 == 0) {
        // 0x80225B4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225CEC;
    }
    // 0x80225B4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225B50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225B54: addu        $at, $at, $v0
    gpr jr_addend_80225B5C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225B58: lw          $v0, 0x45A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X45A0);
    // 0x80225B5C: jr          $v0
    // 0x80225B60: nop

    switch (jr_addend_80225B5C >> 2) {
        case 0: goto L_80225B64; break;
        case 1: goto L_80225BD8; break;
        case 2: goto L_80225BF8; break;
        case 3: goto L_80225C18; break;
        case 4: goto L_80225C2C; break;
        case 5: goto L_80225C4C; break;
        case 6: goto L_80225C60; break;
        case 7: goto L_80225C80; break;
        case 8: goto L_80225CDC; break;
        default: switch_error(__func__, 0x80225B5C, 0x802345A0);
    }
    // 0x80225B60: nop

L_80225B64:
    // 0x80225B64: addiu       $v0, $zero, -0x1C0C
    ctx->r2 = ADD32(0, -0X1C0C);
    // 0x80225B68: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80225B6C: addiu       $v0, $zero, -0x201
    ctx->r2 = ADD32(0, -0X201);
    // 0x80225B70: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x80225B74: addiu       $v0, $zero, -0xDB0
    ctx->r2 = ADD32(0, -0XDB0);
    // 0x80225B78: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x80225B7C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225B80: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x80225B84: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225B88: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80225B8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225B90: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x80225B94: lbu         $a2, 0xD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XD);
    // 0x80225B98: lh          $a0, 0x43A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43A);
    // 0x80225B9C: lh          $a1, 0x43C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43C);
    // 0x80225BA0: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x80225BA4: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80225BA8: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x80225BAC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80225BB0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225BB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225BB8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225BBC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225BC0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225BC4: sw          $v1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r3;
    // 0x80225BC8: sw          $a0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r4;
    // 0x80225BCC: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
    // 0x80225BD0: j           L_80225CEC
    // 0x80225BD4: sb          $a2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r6;
        goto L_80225CEC;
    // 0x80225BD4: sb          $a2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r6;
L_80225BD8:
    // 0x80225BD8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225BDC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225BE0: bne         $v0, $zero, L_80225CEC
    if (ctx->r2 != 0) {
        // 0x80225BE4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225CEC;
    }
    // 0x80225BE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225BE8: jal         0x800616FC
    // 0x80225BEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80225BEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80225BF0: j           L_80225CCC
    // 0x80225BF4: nop

        goto L_80225CCC;
    // 0x80225BF4: nop

L_80225BF8:
    // 0x80225BF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225BFC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225C00: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225C04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225C08: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225C0C: nop
    
            goto L_80225CCC;
    }
    // 0x80225C0C: nop

    // 0x80225C10: j           L_80225CEC
    // 0x80225C14: nop

        goto L_80225CEC;
    // 0x80225C14: nop

L_80225C18:
    // 0x80225C18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225C1C: jal         0x800616FC
    // 0x80225C20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80225C20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x80225C24: j           L_80225CCC
    // 0x80225C28: nop

        goto L_80225CCC;
    // 0x80225C28: nop

L_80225C2C:
    // 0x80225C2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225C30: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225C34: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225C38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225C3C: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225C40: nop
    
            goto L_80225CCC;
    }
    // 0x80225C40: nop

    // 0x80225C44: j           L_80225CEC
    // 0x80225C48: nop

        goto L_80225CEC;
    // 0x80225C48: nop

L_80225C4C:
    // 0x80225C4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225C50: jal         0x800616FC
    // 0x80225C54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80225C54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80225C58: j           L_80225CCC
    // 0x80225C5C: nop

        goto L_80225CCC;
    // 0x80225C5C: nop

L_80225C60:
    // 0x80225C60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225C64: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225C68: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225C6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225C70: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225C74: nop
    
            goto L_80225CCC;
    }
    // 0x80225C74: nop

    // 0x80225C78: j           L_80225CEC
    // 0x80225C7C: nop

        goto L_80225CEC;
    // 0x80225C7C: nop

L_80225C80:
    // 0x80225C80: jal         0x8004F144
    // 0x80225C84: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80225C84: nop

    after_3:
    // 0x80225C88: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80225C8C: beq         $s1, $zero, L_80225CEC
    if (ctx->r17 == 0) {
        // 0x80225C90: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80225CEC;
    }
    // 0x80225C90: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80225C94: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80225C98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225C9C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80225CA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225CA4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80225CA8: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80225CAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225CB0: jal         0x8009A3B4
    // 0x80225CB4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80225CB4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_4:
    // 0x80225CB8: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80225CBC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80225CC0: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80225CC4: jal         0x8004F4F8
    // 0x80225CC8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_5;
    // 0x80225CC8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_5:
L_80225CCC:
    // 0x80225CCC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CD4: j           L_80225CEC
    // 0x80225CD8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80225CEC;
    // 0x80225CD8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80225CDC:
    // 0x80225CDC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225CE4: jal         0x800600F8
    // 0x80225CE8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_6;
    // 0x80225CE8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_6:
L_80225CEC:
    // 0x80225CEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225CF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225CF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225CF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CFC: jr          $ra
    // 0x80225D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232360_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232360: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232364: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232368: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023236C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232370: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232374: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232378: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023237C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80232380: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232384: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80232388: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023238C: beq         $v0, $zero, L_802325DC
    if (ctx->r2 == 0) {
        // 0x80232390: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802325DC;
    }
    // 0x80232390: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232394: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232398: addu        $at, $at, $v0
    gpr jr_addend_802323A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023239C: lw          $v0, 0x4888($at)
    ctx->r2 = ADD32(ctx->r1, 0X4888);
    // 0x802323A0: jr          $v0
    // 0x802323A4: nop

    switch (jr_addend_802323A0 >> 2) {
        case 0: goto L_802323A8; break;
        case 1: goto L_802323EC; break;
        case 2: goto L_8023249C; break;
        case 3: goto L_802324EC; break;
        case 4: goto L_8023258C; break;
        default: switch_error(__func__, 0x802323A0, 0x80234888);
    }
    // 0x802323A4: nop

L_802323A8:
    // 0x802323A8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802323AC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802323B0: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802323B4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802323B8: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802323BC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802323C0: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802323C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802323C8: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802323CC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802323D0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802323D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802323D8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802323DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802323E0: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x802323E4: j           L_802325DC
    // 0x802323E8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_802325DC;
    // 0x802323E8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802323EC:
    // 0x802323EC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x802323F0: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x802323F4: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x802323F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802323FC: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80232400: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232404: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80232408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023240C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80232410: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80232414: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80232418: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023241C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80232420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232424: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80232428: beq         $a0, $v0, L_80232470
    if (ctx->r4 == ctx->r2) {
        // 0x8023242C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80232470;
    }
    // 0x8023242C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x80232430: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80232434: beql        $v0, $zero, L_8023244C
    if (ctx->r2 == 0) {
        // 0x80232438: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023244C;
    }
    goto skip_0;
    // 0x80232438: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023243C: beq         $a0, $zero, L_8023245C
    if (ctx->r4 == 0) {
        // 0x80232440: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023245C;
    }
    // 0x80232440: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232444: j           L_802325DC
    // 0x80232448: nop

        goto L_802325DC;
    // 0x80232448: nop

L_8023244C:
    // 0x8023244C: beq         $a0, $v0, L_80232488
    if (ctx->r4 == ctx->r2) {
        // 0x80232450: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80232488;
    }
    // 0x80232450: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232454: j           L_802325DC
    // 0x80232458: nop

        goto L_802325DC;
    // 0x80232458: nop

L_8023245C:
    // 0x8023245C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80232460: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80232464: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232468: j           L_802325DC
    // 0x8023246C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802325DC;
    // 0x8023246C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80232470:
    // 0x80232470: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232474: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232478: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023247C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80232480: j           L_802325DC
    // 0x80232484: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802325DC;
    // 0x80232484: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80232488:
    // 0x80232488: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023248C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80232490: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80232494: j           L_802325DC
    // 0x80232498: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802325DC;
    // 0x80232498: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8023249C:
    // 0x8023249C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802324A0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802324A4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x802324A8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802324AC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x802324B0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802324B4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802324B8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802324BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802324C0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802324C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802324C8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802324CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802324D0: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x802324D4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802324D8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802324DC: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x802324E0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802324E4: j           L_802325DC
    // 0x802324E8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_802325DC;
    // 0x802324E8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_802324EC:
    // 0x802324EC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802324F0: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x802324F4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802324F8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802324FC: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80232500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232504: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232508: addiu       $a1, $a1, 0x4880
    ctx->r5 = ADD32(ctx->r5, 0X4880);
    // 0x8023250C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80232510: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80232514: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80232518: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023251C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80232520: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80232524: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232528: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023252C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80232530: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80232534: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80232538: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8023253C: jal         0x8009A3B4
    // 0x80232540: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232540: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80232544: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80232548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023254C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232550: addiu       $a1, $a1, 0x4884
    ctx->r5 = ADD32(ctx->r5, 0X4884);
    // 0x80232554: jal         0x8009A3B4
    // 0x80232558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8023255C: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80232560: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80232564: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80232568: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023256C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80232570: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80232574: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80232578: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023257C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80232580: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80232584: j           L_802325DC
    // 0x80232588: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_802325DC;
    // 0x80232588: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8023258C:
    // 0x8023258C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80232590: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80232594: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80232598: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8023259C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x802325A0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802325A4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802325A8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802325AC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802325B0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802325B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802325B8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802325BC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802325C0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x802325C4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802325C8: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x802325CC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x802325D0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802325D4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802325D8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_802325DC:
    // 0x802325DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802325E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802325E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802325E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802325EC: jr          $ra
    // 0x802325F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802325F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802287D0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802287D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802287E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802287E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802287E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802287EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802287F0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802287F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802287F8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802287FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228800: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80228804: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80228808: jal         0x80229378
    // 0x8022880C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229378_ovl18(rdram, ctx);
        goto after_0;
    // 0x8022880C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80228810: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228814: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228818: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022881C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228820: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228824: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228828: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022882C: jal         0x8004F820
    // 0x80228830: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228830: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228834: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228838: bgez        $v0, L_80228868
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022883C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80228868;
    }
    // 0x8022883C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228840: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228844: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228848: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022884C: jal         0x8004F820
    // 0x80228850: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228850: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80228854: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228858: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022885C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228860: j           L_80228884
    // 0x80228864: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228884;
    // 0x80228864: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80228868:
    // 0x80228868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022886C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228870: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228874: jal         0x8004F820
    // 0x80228878: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228878: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022887C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228880: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228884:
    // 0x80228884: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228888: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022888C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228894: jal         0x800610AC
    // 0x80228898: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80228898: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022889C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802288A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802288A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802288A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802288AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288B0: jr          $ra
    // 0x802288B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802288B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DA44_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DA48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DA4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DA58: jal         0x8003E934
    // 0x8022DA5C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022DA5C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022DA60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DA64: andi        $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 & 0X1000;
    // 0x8022DA68: bne         $s0, $zero, L_8022DAA4
    if (ctx->r16 != 0) {
        // 0x8022DA6C: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022DAA4;
    }
    // 0x8022DA6C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022DA70: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022DA74: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022DA78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022DA7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DA80: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022DA84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DA88: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022DA8C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022DA90: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022DA94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DA98: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022DA9C: beq         $v0, $zero, L_8022DAAC
    if (ctx->r2 == 0) {
        // 0x8022DAA0: nop
    
            goto L_8022DAAC;
    }
    // 0x8022DAA0: nop

L_8022DAA4:
    // 0x8022DAA4: sh          $a1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r5;
    // 0x8022DAA8: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8022DAAC:
    // 0x8022DAAC: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022DAB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DAB4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022DAB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DABC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAC4: jr          $ra
    // 0x8022DAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
