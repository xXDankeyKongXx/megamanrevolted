#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023C3E4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C3E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C3E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023C3EC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023C3F0: bne         $v0, $zero, L_8023C424
    if (ctx->r2 != 0) {
        // 0x8023C3F4: nop
    
            goto L_8023C424;
    }
    // 0x8023C3F4: nop

    // 0x8023C3F8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023C3FC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C400: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023C404: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, 0X1B4);
    // 0x8023C408: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023C40C: jal         0x8005FA7C
    // 0x8023C410: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C410: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023C414: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C418: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023C41C: jal         0x8023C540
    // 0x8023C420: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023C540_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023C420: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
L_8023C424:
    // 0x8023C424: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023C428: jr          $ra
    // 0x8023C42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C7B4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C7B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C7B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023C7BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023C7C0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023C7C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C7C8: beq         $v1, $v0, L_8023C898
    if (ctx->r3 == ctx->r2) {
        // 0x8023C7CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023C898;
    }
    // 0x8023C7CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023C7D0: beql        $v0, $zero, L_8023C7E8
    if (ctx->r2 == 0) {
        // 0x8023C7D4: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_8023C7E8;
    }
    goto skip_0;
    // 0x8023C7D4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    skip_0:
    // 0x8023C7D8: beq         $v1, $zero, L_8023C800
    if (ctx->r3 == 0) {
        // 0x8023C7DC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023C800;
    }
    // 0x8023C7DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C7E0: j           L_8023C918
    // 0x8023C7E4: nop

        goto L_8023C918;
    // 0x8023C7E4: nop

L_8023C7E8:
    // 0x8023C7E8: beq         $v1, $v0, L_8023C908
    if (ctx->r3 == ctx->r2) {
        // 0x8023C7EC: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_8023C908;
    }
    // 0x8023C7EC: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8023C7F0: beq         $v1, $v0, L_8023C908
    if (ctx->r3 == ctx->r2) {
        // 0x8023C7F4: nop
    
            goto L_8023C908;
    }
    // 0x8023C7F4: nop

    // 0x8023C7F8: j           L_8023C918
    // 0x8023C7FC: nop

        goto L_8023C918;
    // 0x8023C7FC: nop

L_8023C800:
    // 0x8023C800: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C804: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023C808: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023C80C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C810: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023C814: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C818: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C81C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8023C820: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C824: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023C828: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C82C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8023C830: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C834: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023C838: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C83C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8023C840: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C844: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023C848: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C84C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023C850: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C854: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023C858: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023C85C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C860: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023C864: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C868: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023C86C: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023C870: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023C874: addiu       $a0, $a0, 0x870
    ctx->r4 = ADD32(ctx->r4, 0X870);
    // 0x8023C878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C87C: jal         0x8005FA7C
    // 0x8023C880: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C880: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023C884: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8023C888: jal         0x8004CB2C
    // 0x8023C88C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8023C88C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x8023C890: j           L_8023C918
    // 0x8023C894: nop

        goto L_8023C918;
    // 0x8023C894: nop

L_8023C898:
    // 0x8023C898: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023C89C: addiu       $s0, $s0, 0xB84
    ctx->r16 = ADD32(ctx->r16, 0XB84);
    // 0x8023C8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C8A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8023C8A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023C8AC: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023C8B0: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x8023C8B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023C8B8: jal         0x80229A38
    // 0x8023C8BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023C8BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8023C8C0: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x8023C8C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023C8C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8023C8CC: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023C8D0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x8023C8D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023C8D8: jal         0x80229A38
    // 0x8023C8DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023C8DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8023C8E0: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x8023C8E4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023C8E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023C8EC: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023C8F0: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
    // 0x8023C8F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023C8F8: jal         0x80229A38
    // 0x8023C8FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023C8FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x8023C900: j           L_8023C918
    // 0x8023C904: nop

        goto L_8023C918;
    // 0x8023C904: nop

L_8023C908:
    // 0x8023C908: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023C90C: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023C910: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C914: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023C918:
    // 0x8023C918: jal         0x8023C690
    // 0x8023C91C: nop

    func_8023C690_ovl25(rdram, ctx);
        goto after_5;
    // 0x8023C91C: nop

    after_5:
    // 0x8023C920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023C928: jr          $ra
    // 0x8023C92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AFA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AFA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AFA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AFA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023AFAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023AFB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AFB4: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8023AFB8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023AFBC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023AFC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AFC4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023AFC8: beq         $v1, $v0, L_8023B0EC
    if (ctx->r3 == ctx->r2) {
        // 0x8023AFCC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023B0EC;
    }
    // 0x8023AFCC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AFD0: beql        $v0, $zero, L_8023AFE8
    if (ctx->r2 == 0) {
        // 0x8023AFD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AFE8;
    }
    goto skip_0;
    // 0x8023AFD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AFD8: beq         $v1, $zero, L_8023B000
    if (ctx->r3 == 0) {
        // 0x8023AFDC: nop
    
            goto L_8023B000;
    }
    // 0x8023AFDC: nop

    // 0x8023AFE0: j           L_8023B1C0
    // 0x8023AFE4: nop

        goto L_8023B1C0;
    // 0x8023AFE4: nop

L_8023AFE8:
    // 0x8023AFE8: beq         $v1, $v0, L_8023B138
    if (ctx->r3 == ctx->r2) {
        // 0x8023AFEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023B138;
    }
    // 0x8023AFEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AFF0: beq         $v1, $v0, L_8023B144
    if (ctx->r3 == ctx->r2) {
        // 0x8023AFF4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023B144;
    }
    // 0x8023AFF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023AFF8: j           L_8023B1C0
    // 0x8023AFFC: nop

        goto L_8023B1C0;
    // 0x8023AFFC: nop

L_8023B000:
    // 0x8023B000: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B004: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023B008: bne         $v0, $zero, L_8023B1C0
    if (ctx->r2 != 0) {
        // 0x8023B00C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023B1C0;
    }
    // 0x8023B00C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B010: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B014: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8023B018: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8023B01C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B020: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023B024: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023B028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B02C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023B030: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x8023B034: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B038: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023B03C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023B040: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B044: sb          $s0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r16;
    // 0x8023B048: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B04C: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8023B050: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B054: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x8023B058: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B05C: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8023B060: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B064: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x8023B068: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B06C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023B070: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B074: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023B078: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B07C: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023B080: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B084: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8023B088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B08C: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x8023B090: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B094: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x8023B098: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8023B09C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B0A0: jal         0x80054578
    // 0x8023B0A4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    func_80054578_2F978(rdram, ctx);
        goto after_0;
    // 0x8023B0A4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    after_0:
    // 0x8023B0A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B0AC: jal         0x80034844
    // 0x8023B0B0: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_1;
    // 0x8023B0B0: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_1:
    // 0x8023B0B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023B0B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023B0BC: jal         0x80036B00
    // 0x8023B0C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x8023B0C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023B0C4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023B0C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023B0CC: beq         $v0, $zero, L_8023B0DC
    if (ctx->r2 == 0) {
        // 0x8023B0D0: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_8023B0DC;
    }
    // 0x8023B0D0: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8023B0D4: jal         0x80036340
    // 0x8023B0D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036340_11740(rdram, ctx);
        goto after_3;
    // 0x8023B0D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8023B0DC:
    // 0x8023B0DC: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023B0E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B0E4: j           L_8023B1C0
    // 0x8023B0E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023B1C0;
    // 0x8023B0E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023B0EC:
    // 0x8023B0EC: jal         0x80070050
    // 0x8023B0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x8023B0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023B0F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B0F8: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x8023B0FC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023B100: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B104: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x8023B108: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8023B10C: jal         0x8004CB2C
    // 0x8023B110: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x8023B110: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023B114: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023B118: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023B11C: beq         $v0, $zero, L_8023B12C
    if (ctx->r2 == 0) {
        // 0x8023B120: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B12C;
    }
    // 0x8023B120: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B124: j           L_8023B1C0
    // 0x8023B128: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023B1C0;
    // 0x8023B128: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023B12C:
    // 0x8023B12C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B130: j           L_8023B1C0
    // 0x8023B134: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023B1C0;
    // 0x8023B134: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023B138:
    // 0x8023B138: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023B13C: j           L_8023B1C0
    // 0x8023B140: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023B1C0;
    // 0x8023B140: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023B144:
    // 0x8023B144: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B148: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8023B14C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B150: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B154: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023B158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B15C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023B160: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B164: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B168: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023B16C: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023B170: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B174: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023B178: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023B17C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B180: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8023B184: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B188: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B18C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023B190: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B194: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023B198: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B19C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023B1A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B1A4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023B1A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B1AC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023B1B0: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023B1B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B1B8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8023B1BC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8023B1C0:
    // 0x8023B1C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B1C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B1C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B1CC: jr          $ra
    // 0x8023B1D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B1D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802353BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802353BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802353C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802353C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802353C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802353CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802353D0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802353D4: beq         $v1, $zero, L_802353EC
    if (ctx->r3 == 0) {
        // 0x802353D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802353EC;
    }
    // 0x802353D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802353DC: beq         $v1, $v0, L_80235438
    if (ctx->r3 == ctx->r2) {
        // 0x802353E0: nop
    
            goto L_80235438;
    }
    // 0x802353E0: nop

    // 0x802353E4: j           L_80235440
    // 0x802353E8: nop

        goto L_80235440;
    // 0x802353E8: nop

L_802353EC:
    // 0x802353EC: jal         0x8004F144
    // 0x802353F0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802353F0: nop

    after_0:
    // 0x802353F4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802353F8: beq         $s0, $zero, L_80235428
    if (ctx->r16 == 0) {
        // 0x802353FC: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80235428;
    }
    // 0x802353FC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80235400: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235404: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235408: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023540C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80235410: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80235414: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80235418: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023541C: jal         0x8009A3B4
    // 0x80235420: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235420: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80235424: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80235428:
    // 0x80235428: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023542C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235430: j           L_80235440
    // 0x80235434: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80235440;
    // 0x80235434: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80235438:
    // 0x80235438: jal         0x8004F4F8
    // 0x8023543C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8023543C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_80235440:
    // 0x80235440: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235444: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235448: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023544C: jr          $ra
    // 0x80235450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B200_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B204: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B210: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B214: bne         $v1, $zero, L_8023B344
    if (ctx->r3 != 0) {
        // 0x8023B218: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023B344;
    }
    // 0x8023B218: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023B21C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8023B220: addiu       $v1, $zero, -0x400
    ctx->r3 = ADD32(0, -0X400);
    // 0x8023B224: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8023B228: lui         $v1, 0xFC00
    ctx->r3 = S32(0XFC00 << 16);
    // 0x8023B22C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8023B230: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023B234: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x8023B238: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x8023B23C: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8023B240: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8023B244: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8023B248: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8023B24C: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8023B250: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x8023B254: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B258: lbu         $a1, 0x4A6D($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A6D);
    // 0x8023B25C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B260: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B264: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8023B268: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023B26C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B270: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023B274: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023B278: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B27C: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023B280: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x8023B284: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B288: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023B28C: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8023B290: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B294: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023B298: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023B29C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2A0: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023B2A4: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x8023B2A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2AC: sb          $v1, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r3;
    // 0x8023B2B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2B4: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8023B2B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2BC: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8023B2C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2C4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023B2C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2CC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023B2D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2D4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023B2D8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8023B2DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B2E0: sb          $a1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r5;
    // 0x8023B2E4: jal         0x8023B914
    // 0x8023B2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8023B914_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023B2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8023B2EC: jal         0x8023B948
    // 0x8023B2F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8023B948_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023B2F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8023B2F4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023B2F8: addiu       $v1, $zero, -0x1000
    ctx->r3 = ADD32(0, -0X1000);
    // 0x8023B2FC: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x8023B300: addiu       $v1, $zero, -0x1400
    ctx->r3 = ADD32(0, -0X1400);
    // 0x8023B304: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8023B308: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8023B30C: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8023B310: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x8023B314: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8023B318: lui         $v1, 0xEC00
    ctx->r3 = S32(0XEC00 << 16);
    // 0x8023B31C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8023B320: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8023B324: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8023B328: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8023B32C: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8023B330: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8023B334: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x8023B338: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023B33C: j           L_8023B35C
    // 0x8023B340: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
        goto L_8023B35C;
    // 0x8023B340: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_8023B344:
    // 0x8023B344: bne         $v1, $v0, L_8023B35C
    if (ctx->r3 != ctx->r2) {
        // 0x8023B348: nop
    
            goto L_8023B35C;
    }
    // 0x8023B348: nop

    // 0x8023B34C: jal         0x8023B914
    // 0x8023B350: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8023B914_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023B350: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8023B354: jal         0x8023B948
    // 0x8023B358: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8023B948_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023B358: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_8023B35C:
    // 0x8023B35C: jal         0x8023B814
    // 0x8023B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B814_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023B360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023B364: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B368: jal         0x8023B97C
    // 0x8023B36C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8023B97C_ovl25(rdram, ctx);
        goto after_5;
    // 0x8023B36C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_5:
    // 0x8023B370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B378: jr          $ra
    // 0x8023B37C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B37C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B4F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4F0: jr          $ra
    // 0x8023B4F4: nop

    TRACE_RETURN()
    return;
    // 0x8023B4F4: nop

;}
RECOMP_FUNC void func_8022E500_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E504: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E508: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E50C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E510: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E514: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E518: lw          $v0, -0x1674($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1674);
    // 0x8022E51C: jalr        $v0
    // 0x8022E520: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E520: nop

    after_0:
    // 0x8022E524: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E528: jr          $ra
    // 0x8022E52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F86C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F86C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F870: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022F874: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F878: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022F87C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022F880: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022F884: bne         $s2, $zero, L_8022F8B8
    if (ctx->r18 != 0) {
        // 0x8022F888: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8022F8B8;
    }
    // 0x8022F888: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022F88C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022F890: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022F894: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8022F898: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F89C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F8A0: lh          $v0, -0x15E4($at)
    ctx->r2 = MEM_H(ctx->r1, -0X15E4);
    // 0x8022F8A4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022F8A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F8AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F8B0: j           L_8022F8E0
    // 0x8022F8B4: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
        goto L_8022F8E0;
    // 0x8022F8B4: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
L_8022F8B8:
    // 0x8022F8B8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022F8BC: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022F8C0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8022F8C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F8C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F8CC: lh          $v0, -0x15E4($at)
    ctx->r2 = MEM_H(ctx->r1, -0X15E4);
    // 0x8022F8D0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022F8D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F8D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F8DC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
L_8022F8E0:
    // 0x8022F8E0: jal         0x8004DC2C
    // 0x8022F8E4: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022F8E4: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_0:
    // 0x8022F8E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022F8EC: jal         0x8004DD04
    // 0x8022F8F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022F8F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8022F8F4: jal         0x8004EFE4
    // 0x8022F8F8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8022F8F8: nop

    after_2:
    // 0x8022F8FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F900: beq         $s0, $zero, L_8022F9FC
    if (ctx->r16 == 0) {
        // 0x8022F904: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F9FC;
    }
    // 0x8022F904: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F908: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022F90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F910: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022F914: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F918: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022F91C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022F920: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F924: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022F928: lbu         $v0, -0x15E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X15E8);
    // 0x8022F92C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F930: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F934: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8022F938: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022F93C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F940: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022F944: lbu         $v0, -0x15E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X15E8);
    // 0x8022F948: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F94C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F950: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022F954: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022F958: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F95C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F960: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022F964: lbu         $v0, -0x15E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X15E8);
    // 0x8022F968: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022F96C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F970: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022F974: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8022F978: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022F97C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022F980: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022F984: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F988: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022F98C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F990: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F994: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022F998: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022F99C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022F9A0: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8022F9A4: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022F9A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022F9AC: lh          $a3, -0x15DC($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X15DC);
    // 0x8022F9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F9B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F9B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F9BC: lh          $v0, -0x15DA($at)
    ctx->r2 = MEM_H(ctx->r1, -0X15DA);
    // 0x8022F9C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F9C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F9C8: jal         0x8004DBA0
    // 0x8022F9CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022F9CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022F9D0: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x8022F9D4: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
    // 0x8022F9D8: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022F9DC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022F9E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F9E4: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x8022F9E8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022F9EC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022F9F0: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022F9F4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022F9F8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8022F9FC:
    // 0x8022F9FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022FA00: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022FA04: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022FA08: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022FA0C: jr          $ra
    // 0x8022FA10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022FA10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802308D4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802308D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802308DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802308E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802308E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802308E8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802308EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802308F0: beq         $v0, $zero, L_80230900
    if (ctx->r2 == 0) {
        // 0x802308F4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_80230900;
    }
    // 0x802308F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802308F8: jal         0x8023183C
    // 0x802308FC: nop

    func_8023183C_ovl25(rdram, ctx);
        goto after_0;
    // 0x802308FC: nop

    after_0:
L_80230900:
    // 0x80230900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230904: jal         0x80231C4C
    // 0x80230908: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80231C4C_ovl25(rdram, ctx);
        goto after_1;
    // 0x80230908: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023090C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230910: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230914: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230918: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023091C: lw          $v0, -0x151C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X151C);
    // 0x80230920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230924: jalr        $v0
    // 0x80230928: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80230928: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8023092C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230930: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230934: beq         $v0, $zero, L_80230A8C
    if (ctx->r2 == 0) {
        // 0x80230938: nop
    
            goto L_80230A8C;
    }
    // 0x80230938: nop

    // 0x8023093C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230940: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80230944: beq         $v0, $zero, L_80230A7C
    if (ctx->r2 == 0) {
        // 0x80230948: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230A7C;
    }
    // 0x80230948: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023094C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230950: addu        $at, $at, $v0
    gpr jr_addend_80230958 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230954: lw          $v0, 0xF38($at)
    ctx->r2 = ADD32(ctx->r1, 0XF38);
    // 0x80230958: jr          $v0
    // 0x8023095C: nop

    switch (jr_addend_80230958 >> 2) {
        case 0: goto L_80230960; break;
        case 1: goto L_8023098C; break;
        case 2: goto L_802309A4; break;
        case 3: goto L_8023096C; break;
        case 4: goto L_802309A4; break;
        case 5: goto L_8023096C; break;
        case 6: goto L_8023098C; break;
        case 7: goto L_802309C0; break;
        case 8: goto L_802309F8; break;
        case 9: goto L_80230A30; break;
        case 10: goto L_80230A70; break;
        default: switch_error(__func__, 0x80230958, 0x80240F38);
    }
    // 0x8023095C: nop

L_80230960:
    // 0x80230960: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80230964: j           L_80230A7C
    // 0x80230968: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230968: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023096C:
    // 0x8023096C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230970: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80230974: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230978: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023097C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80230980: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230984: j           L_80230A7C
    // 0x80230988: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230988: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023098C:
    // 0x8023098C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230990: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80230994: beq         $v0, $zero, L_802309B8
    if (ctx->r2 == 0) {
        // 0x80230998: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802309B8;
    }
    // 0x80230998: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023099C: j           L_802309B8
    // 0x802309A0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_802309B8;
    // 0x802309A0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_802309A4:
    // 0x802309A4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802309A8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802309AC: beq         $v0, $zero, L_802309B8
    if (ctx->r2 == 0) {
        // 0x802309B0: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802309B8;
    }
    // 0x802309B0: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802309B4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_802309B8:
    // 0x802309B8: j           L_80230A7C
    // 0x802309BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80230A7C;
    // 0x802309BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802309C0:
    // 0x802309C0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802309C4: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x802309C8: bne         $v0, $zero, L_802309F0
    if (ctx->r2 != 0) {
        // 0x802309CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802309F0;
    }
    // 0x802309CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802309D0: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802309D4: beq         $v0, $zero, L_802309E4
    if (ctx->r2 == 0) {
        // 0x802309D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802309E4;
    }
    // 0x802309D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802309DC: j           L_80230A7C
    // 0x802309E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x802309E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802309E4:
    // 0x802309E4: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x802309E8: beq         $v0, $zero, L_80230A7C
    if (ctx->r2 == 0) {
        // 0x802309EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230A7C;
    }
    // 0x802309EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802309F0:
    // 0x802309F0: j           L_80230A7C
    // 0x802309F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x802309F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802309F8:
    // 0x802309F8: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802309FC: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80230A00: bne         $v0, $zero, L_80230A28
    if (ctx->r2 != 0) {
        // 0x80230A04: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80230A28;
    }
    // 0x80230A04: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230A08: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80230A0C: beq         $v0, $zero, L_80230A1C
    if (ctx->r2 == 0) {
        // 0x80230A10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230A1C;
    }
    // 0x80230A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230A14: j           L_80230A7C
    // 0x80230A18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230A18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230A1C:
    // 0x80230A1C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80230A20: beq         $v0, $zero, L_80230A7C
    if (ctx->r2 == 0) {
        // 0x80230A24: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80230A7C;
    }
    // 0x80230A24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80230A28:
    // 0x80230A28: j           L_80230A7C
    // 0x80230A2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230A2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230A30:
    // 0x80230A30: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80230A34: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80230A38: beq         $v0, $zero, L_80230A48
    if (ctx->r2 == 0) {
        // 0x80230A3C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80230A48;
    }
    // 0x80230A3C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230A40: j           L_80230A7C
    // 0x80230A44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230A44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230A48:
    // 0x80230A48: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80230A4C: beq         $v0, $zero, L_80230A5C
    if (ctx->r2 == 0) {
        // 0x80230A50: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80230A5C;
    }
    // 0x80230A50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230A54: j           L_80230A7C
    // 0x80230A58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230A58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230A5C:
    // 0x80230A5C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80230A60: beq         $v0, $zero, L_80230A7C
    if (ctx->r2 == 0) {
        // 0x80230A64: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80230A7C;
    }
    // 0x80230A64: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80230A68: j           L_80230A7C
    // 0x80230A6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230A7C;
    // 0x80230A6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230A70:
    // 0x80230A70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230A74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230A78: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80230A7C:
    // 0x80230A7C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230A80: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230A84: andi        $v0, $v0, 0xFFC6
    ctx->r2 = ctx->r2 & 0XFFC6;
    // 0x80230A88: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_80230A8C:
    // 0x80230A8C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80230A90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230A94: beq         $v0, $zero, L_80230AA4
    if (ctx->r2 == 0) {
        // 0x80230A98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230AA4;
    }
    // 0x80230A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230A9C: jal         0x80231FB8
    // 0x80230AA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80231FB8_ovl25(rdram, ctx);
        goto after_3;
    // 0x80230AA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_80230AA4:
    // 0x80230AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230AA8: jal         0x8023210C
    // 0x80230AAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023210C_ovl25(rdram, ctx);
        goto after_4;
    // 0x80230AAC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80230AB0: lbu         $v0, 0x1F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1F);
    // 0x80230AB4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80230AB8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80230ABC: sb          $v0, 0x1F($s1)
    MEM_B(0X1F, ctx->r17) = ctx->r2;
    // 0x80230AC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230AC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230ACC: jr          $ra
    // 0x80230AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802272C8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802272CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802272D0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802272D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802272D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802272DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272E0: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x802272E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802272E8: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x802272EC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802272F0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x802272F4: lbu         $s1, -0x2480($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X2480);
    // 0x802272F8: jal         0x8003B878
    // 0x802272FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x802272FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80227300: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x80227304: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x80227308: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022730C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80227310: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227314: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x80227318: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022731C: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x80227320: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x80227324: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227328: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022732C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80227330: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x80227334: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80227338: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022733C: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x80227340: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80227344: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x80227348: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022734C: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x80227350: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x80227354: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80227358: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022735C: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x80227360: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227364: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x80227368: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022736C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80227370: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80227374: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x80227378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022737C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227380: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227384: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227388: jr          $ra
    // 0x8022738C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022738C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802266EC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802266F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802266F4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802266F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802266FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226700: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226704: lw          $v0, -0x24B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X24B0);
    // 0x80226708: jalr        $v0
    // 0x8022670C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022670C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    after_0:
    // 0x80226710: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226714: jr          $ra
    // 0x80226718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802369E8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802369EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802369F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802369F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802369F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369FC: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80236A00: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x80236A04: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x80236A08: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236A0C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236A10: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236A14: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80236A18: mfhi        $t0
    ctx->r8 = hi;
    // 0x80236A1C: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80236A20: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236A24: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236A28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236A2C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80236A30: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80236A34: bne         $a0, $zero, L_80236AE8
    if (ctx->r4 != 0) {
        // 0x80236A38: nop
    
            goto L_80236AE8;
    }
    // 0x80236A38: nop

    // 0x80236A3C: jal         0x8004F144
    // 0x80236A40: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236A40: nop

    after_0:
    // 0x80236A44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236A48: beq         $s0, $zero, L_80236AE8
    if (ctx->r16 == 0) {
        // 0x80236A4C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80236AE8;
    }
    // 0x80236A4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236A50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236A54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236A58: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236A5C: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80236A60: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80236A64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236A68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236A6C: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x80236A70: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80236A74: jal         0x8009A3B4
    // 0x80236A78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236A78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236A7C: jal         0x800A3450
    // 0x80236A80: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236A80: nop

    after_2:
    // 0x80236A84: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80236A88: sra         $v1, $a1, 18
    ctx->r3 = S32(SIGNED(ctx->r5) >> 18);
    // 0x80236A8C: andi        $v1, $v1, 0x1FF
    ctx->r3 = ctx->r3 & 0X1FF;
    // 0x80236A90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236A94: bne         $v0, $zero, L_80236AA0
    if (ctx->r2 != 0) {
        // 0x80236A98: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_80236AA0;
    }
    // 0x80236A98: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80236A9C: negu        $a3, $v1
    ctx->r7 = SUB32(0, ctx->r3);
L_80236AA0:
    // 0x80236AA0: sra         $v0, $a1, 22
    ctx->r2 = S32(SIGNED(ctx->r5) >> 22);
    // 0x80236AA4: andi        $v1, $v0, 0x1FF
    ctx->r3 = ctx->r2 & 0X1FF;
    // 0x80236AA8: sra         $v0, $a1, 20
    ctx->r2 = S32(SIGNED(ctx->r5) >> 20);
    // 0x80236AAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236AB0: bne         $v0, $zero, L_80236ABC
    if (ctx->r2 != 0) {
        // 0x80236AB4: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80236ABC;
    }
    // 0x80236AB4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80236AB8: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
L_80236ABC:
    // 0x80236ABC: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80236AC0: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80236AC4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    // 0x80236AC8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80236ACC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80236AD0: addiu       $a0, $a0, -0x280
    ctx->r4 = ADD32(ctx->r4, -0X280);
    // 0x80236AD4: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80236AD8: srl         $v0, $a1, 24
    ctx->r2 = S32(U32(ctx->r5) >> 24);
    // 0x80236ADC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236AE0: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80236AE4: sh          $a0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r4;
L_80236AE8:
    // 0x80236AE8: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80236AEC: addiu       $v1, $zero, 0x33
    ctx->r3 = ADD32(0, 0X33);
    // 0x80236AF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236AF4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80236AF8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236AFC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236B00: bne         $v0, $v1, L_80236B10
    if (ctx->r2 != ctx->r3) {
        // 0x80236B04: nop
    
            goto L_80236B10;
    }
    // 0x80236B04: nop

    // 0x80236B08: jal         0x8004F5C4
    // 0x80236B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80236B0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80236B10:
    // 0x80236B10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236B14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236B1C: jr          $ra
    // 0x80236B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236B24: nop

    // 0x80236B28: nop

    // 0x80236B2C: nop

;}
RECOMP_FUNC void func_802354E8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802354E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802354EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802354F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802354F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802354F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802354FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235500: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80235504: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80235508: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023550C: beq         $v1, $s2, L_80235580
    if (ctx->r3 == ctx->r18) {
        // 0x80235510: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80235580;
    }
    // 0x80235510: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235514: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235518: beql        $v0, $zero, L_80235530
    if (ctx->r2 == 0) {
        // 0x8023551C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235530;
    }
    goto skip_0;
    // 0x8023551C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235520: beq         $v1, $zero, L_80235540
    if (ctx->r3 == 0) {
        // 0x80235524: nop
    
            goto L_80235540;
    }
    // 0x80235524: nop

    // 0x80235528: j           L_8023560C
    // 0x8023552C: nop

        goto L_8023560C;
    // 0x8023552C: nop

L_80235530:
    // 0x80235530: beq         $v1, $v0, L_802355B8
    if (ctx->r3 == ctx->r2) {
        // 0x80235534: nop
    
            goto L_802355B8;
    }
    // 0x80235534: nop

    // 0x80235538: j           L_8023560C
    // 0x8023553C: nop

        goto L_8023560C;
    // 0x8023553C: nop

L_80235540:
    // 0x80235540: jal         0x800A3450
    // 0x80235544: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80235544: nop

    after_0:
    // 0x80235548: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023554C: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x80235550: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235554: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235558: addiu       $v1, $v1, 0x3A0
    ctx->r3 = ADD32(ctx->r3, 0X3A0);
    // 0x8023555C: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
    // 0x80235560: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235564: bne         $v0, $s2, L_80235574
    if (ctx->r2 != ctx->r18) {
        // 0x80235568: nop
    
            goto L_80235574;
    }
    // 0x80235568: nop

    // 0x8023556C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80235570: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_80235574:
    // 0x80235574: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235578: j           L_80235608
    // 0x8023557C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80235608;
    // 0x8023557C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80235580:
    // 0x80235580: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235584: bne         $v0, $zero, L_802355A8
    if (ctx->r2 != 0) {
        // 0x80235588: nop
    
            goto L_802355A8;
    }
    // 0x80235588: nop

    // 0x8023558C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235590: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x80235594: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80235598:
    // 0x80235598: beq         $v0, $zero, L_8023560C
    if (ctx->r2 == 0) {
        // 0x8023559C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023560C;
    }
    // 0x8023559C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802355A0: j           L_80235608
    // 0x802355A4: nop

        goto L_80235608;
    // 0x802355A4: nop

L_802355A8:
    // 0x802355A8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802355AC: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x802355B0: j           L_80235598
    // 0x802355B4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_80235598;
    // 0x802355B4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_802355B8:
    // 0x802355B8: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802355BC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802355C0: beq         $v0, $zero, L_80235608
    if (ctx->r2 == 0) {
        // 0x802355C4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80235608;
    }
    // 0x802355C4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802355C8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802355CC: bne         $v0, $zero, L_802355E0
    if (ctx->r2 != 0) {
        // 0x802355D0: nop
    
            goto L_802355E0;
    }
    // 0x802355D0: nop

    // 0x802355D4: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x802355D8: j           L_802355E8
    // 0x802355DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802355E8;
    // 0x802355DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802355E0:
    // 0x802355E0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x802355E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_802355E8:
    // 0x802355E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802355EC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802355F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802355F4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802355F8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802355FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235600: j           L_8023560C
    // 0x80235604: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023560C;
    // 0x80235604: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80235608:
    // 0x80235608: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023560C:
    // 0x8023560C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80235610: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80235614: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80235618: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8023561C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80235620: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x80235624: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80235628: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023562C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80235630: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80235634: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80235638: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8023563C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80235640: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80235644: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80235648: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x8023564C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235650: mfhi        $t0
    ctx->r8 = hi;
    // 0x80235654: srl         $a0, $t0, 2
    ctx->r4 = S32(U32(ctx->r8) >> 2);
    // 0x80235658: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023565C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235660: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235664: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80235668: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8023566C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80235670: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235674: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235678: lbu         $v0, -0x10F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F8);
    // 0x8023567C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80235680: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235684: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235688: lbu         $v0, -0x10F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F7);
    // 0x8023568C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80235690: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80235694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235698: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8023569C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802356A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802356A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802356A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802356AC: jr          $ra
    // 0x802356B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802356B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C930_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C934: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C938: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C93C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C940: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C944: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8023C948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C94C: beq         $v1, $v0, L_8023CA24
    if (ctx->r3 == ctx->r2) {
        // 0x8023C950: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023CA24;
    }
    // 0x8023C950: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023C954: beql        $v0, $zero, L_8023C96C
    if (ctx->r2 == 0) {
        // 0x8023C958: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023C96C;
    }
    goto skip_0;
    // 0x8023C958: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023C95C: beq         $v1, $zero, L_8023C984
    if (ctx->r3 == 0) {
        // 0x8023C960: nop
    
            goto L_8023C984;
    }
    // 0x8023C960: nop

    // 0x8023C964: j           L_8023CAC8
    // 0x8023C968: nop

        goto L_8023CAC8;
    // 0x8023C968: nop

L_8023C96C:
    // 0x8023C96C: beq         $v1, $v0, L_8023CA5C
    if (ctx->r3 == ctx->r2) {
        // 0x8023C970: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023CA5C;
    }
    // 0x8023C970: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C974: beq         $v1, $v0, L_8023CA8C
    if (ctx->r3 == ctx->r2) {
        // 0x8023C978: nop
    
            goto L_8023CA8C;
    }
    // 0x8023C978: nop

    // 0x8023C97C: j           L_8023CAC8
    // 0x8023C980: nop

        goto L_8023CAC8;
    // 0x8023C980: nop

L_8023C984:
    // 0x8023C984: jal         0x8004F488
    // 0x8023C988: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023C988: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_0:
    // 0x8023C98C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C994: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023C998: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023C99C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9A0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023C9A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C9A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9AC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023C9B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C9B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9B8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023C9BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9C0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8023C9C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9C8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023C9CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9D0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8023C9D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9D8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023C9DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9E0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023C9E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C9E8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023C9EC: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023C9F0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C9F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C9F8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C9FC: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023CA00: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023CA04: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8023CA08: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023CA0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CA10: jal         0x8004CB2C
    // 0x8023CA14: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8023CA14: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    after_1:
    // 0x8023CA18: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023CA1C: j           L_8023CA84
    // 0x8023CA20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023CA84;
    // 0x8023CA20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023CA24:
    // 0x8023CA24: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8023CA28: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x8023CA2C: bne         $v1, $v0, L_8023CAC8
    if (ctx->r3 != ctx->r2) {
        // 0x8023CA30: nop
    
            goto L_8023CAC8;
    }
    // 0x8023CA30: nop

    // 0x8023CA34: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CA38: lw          $v0, 0x3290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3290);
    // 0x8023CA3C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023CA40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CA44: sw          $v0, 0x3290($at)
    MEM_W(0X3290, ctx->r1) = ctx->r2;
    // 0x8023CA48: jal         0x80036E48
    // 0x8023CA4C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8023CA4C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_2:
    // 0x8023CA50: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023CA54: j           L_8023CA84
    // 0x8023CA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023CA84;
    // 0x8023CA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023CA5C:
    // 0x8023CA5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023CA60: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023CA64: bne         $v0, $zero, L_8023CAC8
    if (ctx->r2 != 0) {
        // 0x8023CA68: nop
    
            goto L_8023CAC8;
    }
    // 0x8023CA68: nop

    // 0x8023CA6C: jal         0x8004F488
    // 0x8023CA70: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x8023CA70: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_3:
    // 0x8023CA74: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023CA78: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8023CA7C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8023CA80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023CA84:
    // 0x8023CA84: j           L_8023CAC8
    // 0x8023CA88: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8023CAC8;
    // 0x8023CA88: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8023CA8C:
    // 0x8023CA8C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023CA90: beq         $v0, $zero, L_8023CAA0
    if (ctx->r2 == 0) {
        // 0x8023CA94: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023CAA0;
    }
    // 0x8023CA94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023CA98: j           L_8023CAC8
    // 0x8023CA9C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023CAC8;
    // 0x8023CA9C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023CAA0:
    // 0x8023CAA0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023CAA4: addiu       $s0, $s0, 0x8C0
    ctx->r16 = ADD32(ctx->r16, 0X8C0);
    // 0x8023CAA8: jal         0x8005FA7C
    // 0x8023CAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x8023CAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023CAB0: jal         0x8005FA7C
    // 0x8023CAB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8023CAB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8023CAB8: jal         0x80036E48
    // 0x8023CABC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8023CABC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x8023CAC0: jal         0x800600F8
    // 0x8023CAC4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_7;
    // 0x8023CAC4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    after_7:
L_8023CAC8:
    // 0x8023CAC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023CACC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CAD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CAD4: jr          $ra
    // 0x8023CAD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CAD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802299E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802299E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802299E8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x802299EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802299F0: bne         $v1, $v0, L_80229A08
    if (ctx->r3 != ctx->r2) {
        // 0x802299F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229A08;
    }
    // 0x802299F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802299F8: jal         0x802297D0
    // 0x802299FC: nop

    func_802297D0_ovl25(rdram, ctx);
        goto after_0;
    // 0x802299FC: nop

    after_0:
    // 0x80229A00: j           L_80229A2C
    // 0x80229A04: nop

        goto L_80229A2C;
    // 0x80229A04: nop

L_80229A08:
    // 0x80229A08: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229A0C: beq         $v1, $v0, L_80229A24
    if (ctx->r3 == ctx->r2) {
        // 0x80229A10: nop
    
            goto L_80229A24;
    }
    // 0x80229A10: nop

    // 0x80229A14: jal         0x802298A8
    // 0x80229A18: nop

    func_802298A8_ovl25(rdram, ctx);
        goto after_1;
    // 0x80229A18: nop

    after_1:
    // 0x80229A1C: j           L_80229A2C
    // 0x80229A20: nop

        goto L_80229A2C;
    // 0x80229A20: nop

L_80229A24:
    // 0x80229A24: jal         0x8004F5C4
    // 0x80229A28: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80229A28: nop

    after_2:
L_80229A2C:
    // 0x80229A2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229A30: jr          $ra
    // 0x80229A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A610_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A614: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A618: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A61C: bne         $v0, $zero, L_8023A654
    if (ctx->r2 != 0) {
        // 0x8023A620: nop
    
            goto L_8023A654;
    }
    // 0x8023A620: nop

    // 0x8023A624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A628: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8023A62C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A630: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x8023A634: jal         0x8004F418
    // 0x8023A638: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023A638: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    after_0:
    // 0x8023A63C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A640: jal         0x8005FA7C
    // 0x8023A644: addiu       $a0, $a0, -0xC28
    ctx->r4 = ADD32(ctx->r4, -0XC28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023A644: addiu       $a0, $a0, -0xC28
    ctx->r4 = ADD32(ctx->r4, -0XC28);
    after_1:
    // 0x8023A648: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A64C: jal         0x8023A980
    // 0x8023A650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A980_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023A650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_8023A654:
    // 0x8023A654: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A658: jr          $ra
    // 0x8023A65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BDA4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022BDA8: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x8022BDAC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8022BDB0: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x8022BDB4: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8022BDB8: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8022BDBC: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x8022BDC0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BDC4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022BDC8: lw          $v0, -0x1C78($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C78);
    // 0x8022BDCC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8022BDD0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BDD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022BDD8: lw          $v0, -0x1C5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C5C);
    // 0x8022BDDC: jr          $ra
    // 0x8022BDE0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022BDE0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022EBD8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBD8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022EBDC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022EBE0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EBE4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022EBE8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022EBEC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022EBF0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EBF4: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022EBF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBFC: bne         $v1, $v0, L_8022EC14
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC00: addiu       $s3, $s2, 0x4E0
        ctx->r19 = ADD32(ctx->r18, 0X4E0);
            goto L_8022EC14;
    }
    // 0x8022EC00: addiu       $s3, $s2, 0x4E0
    ctx->r19 = ADD32(ctx->r18, 0X4E0);
    // 0x8022EC04: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022EC08: beq         $v0, $zero, L_8022EC14
    if (ctx->r2 == 0) {
        // 0x8022EC0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022EC14;
    }
    // 0x8022EC0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EC10: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8022EC14:
    // 0x8022EC14: lh          $v1, 0x2($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X2);
    // 0x8022EC18: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022EC1C: bne         $v1, $v0, L_8022EC28
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC20: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EC28;
    }
    // 0x8022EC20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EC24: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8022EC28:
    // 0x8022EC28: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022EC2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EC30: bne         $v1, $v0, L_8022EC44
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC34: nop
    
            goto L_8022EC44;
    }
    // 0x8022EC34: nop

    // 0x8022EC38: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022EC3C: bnel        $v0, $zero, L_8022EC44
    if (ctx->r2 != 0) {
        // 0x8022EC40: sb          $zero, 0xAC($s2)
        MEM_B(0XAC, ctx->r18) = 0;
            goto L_8022EC44;
    }
    goto skip_0;
    // 0x8022EC40: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    skip_0:
L_8022EC44:
    // 0x8022EC44: lh          $v0, 0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X2);
    // 0x8022EC48: bne         $v0, $zero, L_8022EC80
    if (ctx->r2 != 0) {
        // 0x8022EC4C: addiu       $s0, $sp, 0x18
        ctx->r16 = ADD32(ctx->r29, 0X18);
            goto L_8022EC80;
    }
    // 0x8022EC4C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022EC50: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    // 0x8022EC54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EC58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EC5C: jal         0x8002A2F8
    // 0x8022EC60: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8022EC60: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_0:
    // 0x8022EC64: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x8022EC68: sh          $v0, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r2;
    // 0x8022EC6C: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
    // 0x8022EC70: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8022EC74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC78: j           L_8022ED20
    // 0x8022EC7C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_8022ED20;
    // 0x8022EC7C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_8022EC80:
    // 0x8022EC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC84: addiu       $a1, $s3, 0x1A
    ctx->r5 = ADD32(ctx->r19, 0X1A);
    // 0x8022EC88: jal         0x8009A3B4
    // 0x8022EC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022EC90: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8022EC94: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x8022EC98: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x8022EC9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECA0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022ECA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ECA8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ECAC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022ECB0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022ECB4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8022ECB8: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x8022ECBC: lh          $a2, 0x22($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X22);
    // 0x8022ECC0: addiu       $a3, $zero, 0x7000
    ctx->r7 = ADD32(0, 0X7000);
    // 0x8022ECC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022ECC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022ECCC: jal         0x8004DBA0
    // 0x8022ECD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022ECD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8022ECD4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022ECD8: lhu         $v0, 0x22($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X22);
    // 0x8022ECDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022ECE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022ECE4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022ECE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ECEC: jal         0x8009A3B4
    // 0x8022ECF0: sh          $v0, 0x22($s3)
    MEM_H(0X22, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022ECF0: sh          $v0, 0x22($s3)
    MEM_H(0X22, ctx->r19) = ctx->r2;
    after_3:
    // 0x8022ECF4: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022ECF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022ECFC: jal         0x8009A3B4
    // 0x8022ED00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022ED00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022ED04: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022ED08: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022ED0C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED10: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022ED14: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x8022ED18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ED1C: sh          $v0, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r2;
L_8022ED20:
    // 0x8022ED20: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022ED24: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022ED28: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022ED2C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022ED30: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022ED34: jr          $ra
    // 0x8022ED38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022ED38: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022D7E4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D7E8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022D7EC: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022D7F0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022D7F4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022D7F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D7FC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022D800: lw          $v0, -0x18F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X18F8);
    // 0x8022D804: jr          $ra
    // 0x8022D808: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D808: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022653C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022653C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226540: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226544: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80226548: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022654C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80226550: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226554: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80226558: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022655C: jal         0x8004EEAC
    // 0x80226560: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80226560: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80226564: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226568: bne         $a0, $zero, L_80226578
    if (ctx->r4 != 0) {
        // 0x8022656C: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_80226578;
    }
    // 0x8022656C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x80226570: j           L_802266C4
    // 0x80226574: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802266C4;
    // 0x80226574: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226578:
    // 0x80226578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022657C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80226580: addiu       $a3, $a0, 0x88
    ctx->r7 = ADD32(ctx->r4, 0X88);
    // 0x80226584: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80226588: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x8022658C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226594: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80226598: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022659C: sb          $s2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r18;
    // 0x802265A0: beq         $v1, $v0, L_802265E4
    if (ctx->r3 == ctx->r2) {
        // 0x802265A4: sw          $zero, 0xC($a0)
        MEM_W(0XC, ctx->r4) = 0;
            goto L_802265E4;
    }
    // 0x802265A4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802265A8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802265AC: beql        $v0, $zero, L_802265C4
    if (ctx->r2 == 0) {
        // 0x802265B0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802265C4;
    }
    goto skip_0;
    // 0x802265B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x802265B4: beq         $v1, $zero, L_802265D4
    if (ctx->r3 == 0) {
        // 0x802265B8: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_802265D4;
    }
    // 0x802265B8: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802265BC: j           L_80226628
    // 0x802265C0: nop

        goto L_80226628;
    // 0x802265C0: nop

L_802265C4:
    // 0x802265C4: beq         $v1, $v0, L_80226604
    if (ctx->r3 == ctx->r2) {
        // 0x802265C8: lui         $v1, 0x2E40
        ctx->r3 = S32(0X2E40 << 16);
            goto L_80226604;
    }
    // 0x802265C8: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x802265CC: j           L_80226628
    // 0x802265D0: nop

        goto L_80226628;
    // 0x802265D0: nop

L_802265D4:
    // 0x802265D4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802265D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802265DC: j           L_802265F4
    // 0x802265E0: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
        goto L_802265F4;
    // 0x802265E0: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
L_802265E4:
    // 0x802265E4: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x802265E8: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x802265EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802265F0: sb          $a1, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r5;
L_802265F4:
    // 0x802265F4: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x802265F8: sb          $a1, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r5;
    // 0x802265FC: j           L_80226638
    // 0x80226600: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_80226638;
    // 0x80226600: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_80226604:
    // 0x80226604: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x80226608: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022660C: sb          $v0, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r2;
    // 0x80226610: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226614: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x80226618: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022661C: sb          $v0, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r2;
    // 0x80226620: j           L_80226638
    // 0x80226624: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_80226638;
    // 0x80226624: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_80226628:
    // 0x80226628: jal         0x8004F418
    // 0x8022662C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022662C: nop

    after_1:
    // 0x80226630: j           L_802266C4
    // 0x80226634: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802266C4;
    // 0x80226634: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226638:
    // 0x80226638: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022663C: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
    // 0x80226640: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x80226644: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x80226648: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022664C: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x80226650: beq         $v1, $zero, L_802266C0
    if (ctx->r3 == 0) {
        // 0x80226654: sb          $v0, 0x2($a3)
        MEM_B(0X2, ctx->r7) = ctx->r2;
            goto L_802266C0;
    }
    // 0x80226654: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x80226658: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
L_8022665C:
    // 0x8022665C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80226660: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x80226664: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x80226668: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022666C: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80226670: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80226674: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80226678: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_8022667C:
    // 0x8022667C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80226680: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226684: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80226688: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022668C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80226690: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80226694: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80226698: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022669C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x802266A0: bne         $v0, $zero, L_8022667C
    if (ctx->r2 != 0) {
        // 0x802266A4: andi        $v0, $a1, 0xFF
        ctx->r2 = ctx->r5 & 0XFF;
            goto L_8022667C;
    }
    // 0x802266A4: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x802266A8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802266AC: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x802266B0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x802266B4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802266B8: bne         $v0, $zero, L_8022665C
    if (ctx->r2 != 0) {
        // 0x802266BC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022665C;
    }
    // 0x802266BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802266C0:
    // 0x802266C0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_802266C4:
    // 0x802266C4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802266C8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802266CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802266D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802266D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266D8: jr          $ra
    // 0x802266DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802266DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227390_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227394: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227398: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022739C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802273A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802273A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273A8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x802273AC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802273B0: beq         $v0, $zero, L_8022744C
    if (ctx->r2 == 0) {
        // 0x802273B4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8022744C;
    }
    // 0x802273B4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x802273B8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x802273BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273C0: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x802273C4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802273C8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802273CC: jal         0x8003B878
    // 0x802273D0: lbu         $s0, -0x2480($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X2480);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x802273D0: lbu         $s0, -0x2480($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X2480);
    after_0:
    // 0x802273D4: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x802273D8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x802273DC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802273E0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802273E4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802273E8: subu        $v1, $s2, $v1
    ctx->r3 = SUB32(ctx->r18, ctx->r3);
    // 0x802273EC: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x802273F0: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x802273F4: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x802273F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802273FC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80227400: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80227404: lh          $a1, 0xE($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XE);
    // 0x80227408: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022740C: or          $v1, $s0, $v1
    ctx->r3 = ctx->r16 | ctx->r3;
    // 0x80227410: addiu       $a0, $s0, 0x1F
    ctx->r4 = ADD32(ctx->r16, 0X1F);
    // 0x80227414: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80227418: lui         $v1, 0x2E
    ctx->r3 = S32(0X2E << 16);
    // 0x8022741C: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80227420: ori         $s0, $s0, 0x1F00
    ctx->r16 = ctx->r16 | 0X1F00;
    // 0x80227424: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x80227428: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022742C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x80227430: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x80227434: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227438: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022743C: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x80227440: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80227444: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80227448: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
L_8022744C:
    // 0x8022744C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227450: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227454: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227458: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022745C: jr          $ra
    // 0x80227460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80227464: nop

    // 0x80227468: nop

    // 0x8022746C: nop

;}
RECOMP_FUNC void func_80227224_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227228: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022722C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227234: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227238: jal         0x8003B878
    // 0x8022723C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022723C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80227240: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x80227244: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80227248: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022724C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227250: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80227254: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227258: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022725C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x80227260: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x80227264: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x80227268: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    // 0x8022726C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227270: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80227274: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80227278: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022727C: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x80227280: ori         $v1, $v1, 0x5F
    ctx->r3 = ctx->r3 | 0X5F;
    // 0x80227284: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80227288: addiu       $v1, $zero, 0x1F40
    ctx->r3 = ADD32(0, 0X1F40);
    // 0x8022728C: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80227290: addiu       $v1, $zero, 0x1F5F
    ctx->r3 = ADD32(0, 0X1F5F);
    // 0x80227294: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x80227298: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022729C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802272A0: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x802272A4: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x802272A8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802272AC: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x802272B0: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x802272B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802272B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802272BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802272C0: jr          $ra
    // 0x802272C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802272C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227EC4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227ECC: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x80227ED0: lb          $a1, 0xC($a0)
    ctx->r5 = MEM_B(ctx->r4, 0XC);
    // 0x80227ED4: lbu         $v1, 0xC($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XC);
    // 0x80227ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227EDC: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x80227EE0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227EE4: jal         0x8004F418
    // 0x80227EE8: sb          $v1, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r3;
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227EE8: sb          $v1, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r3;
    after_0:
    // 0x80227EEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227EF0: jr          $ra
    // 0x80227EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802375D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802375D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802375DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802375E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802375E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802375E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802375EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802375F0: lw          $v0, -0xE78($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE78);
    // 0x802375F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802375F8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802375FC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80237600: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80237604: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80237608: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023760C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80237610: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80237614: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80237618: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023761C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80237620: jal         0x80237A74
    // 0x80237624: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80237A74_ovl25(rdram, ctx);
        goto after_0;
    // 0x80237624: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237628: beq         $v0, $zero, L_8023763C
    if (ctx->r2 == 0) {
        // 0x8023762C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023763C;
    }
    // 0x8023762C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237630: jal         0x8004F62C
    // 0x80237634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80237634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023763C:
    // 0x8023763C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237640: jal         0x802376BC
    // 0x80237644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802376BC_ovl25(rdram, ctx);
        goto after_2;
    // 0x80237644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023764C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237650: jr          $ra
    // 0x80237654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237E7C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80237E80: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80237E84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237E88: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80237E8C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80237E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237E94: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80237E98: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80237E9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237EA0: jal         0x8003BA58
    // 0x80237EA4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80237EA4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80237EA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80237EAC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80237EB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237EB4: jal         0x8003BB80
    // 0x80237EB8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80237EB8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237EBC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80237EC0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80237EC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237EC8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80237ECC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237ED0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80237ED4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237ED8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80237EDC: lbu         $v1, -0xD17($at)
    ctx->r3 = MEM_BU(ctx->r1, -0XD17);
    // 0x80237EE0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237EE4: bne         $v0, $v1, L_80237F04
    if (ctx->r2 != ctx->r3) {
        // 0x80237EE8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237F04;
    }
    // 0x80237EE8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237EEC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80237EF0: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80237EF4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80237EF8: bne         $v1, $v0, L_80237F04
    if (ctx->r3 != ctx->r2) {
        // 0x80237EFC: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_80237F04;
    }
    // 0x80237EFC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80237F00: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80237F04:
    // 0x80237F04: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80237F08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80237F0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237F10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237F14: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237F18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237F1C: lbu         $v1, -0xD18($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XD18);
    // 0x80237F20: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80237F24: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80237F28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80237F2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237F30: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80237F34: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80237F38: addiu       $v0, $v0, 0x2E
    ctx->r2 = ADD32(ctx->r2, 0X2E);
    // 0x80237F3C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80237F40: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80237F44: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80237F48: jal         0x8003BC68
    // 0x80237F4C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80237F4C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80237F50: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80237F54: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80237F58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80237F5C: jr          $ra
    // 0x80237F60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80237F60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80238558_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023855C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238560: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238564: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238568: jal         0x80238DD4
    // 0x8023856C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80238DD4_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023856C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238570: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80238574: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80238578: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023857C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80238580: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238584: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238588: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023858C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238590: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x80238594: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80238598: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023859C: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802385A0: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x802385A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385A8: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x802385AC: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x802385B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385B4: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x802385B8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802385BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385C0: sh          $zero, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = 0;
    // 0x802385C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385C8: sw          $zero, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = 0;
    // 0x802385CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385D0: sh          $zero, 0x4A08($at)
    MEM_H(0X4A08, ctx->r1) = 0;
    // 0x802385D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385D8: sh          $zero, 0x4A04($at)
    MEM_H(0X4A04, ctx->r1) = 0;
    // 0x802385DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802385E0: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x802385E4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802385E8: jal         0x8009A3B4
    // 0x802385EC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802385EC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x802385F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802385F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802385F8: jal         0x8009A3B4
    // 0x802385FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802385FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80238600: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80238604: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80238608: jal         0x8009A3B4
    // 0x8023860C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023860C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80238610: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80238614: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80238618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023861C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238620: sb          $v0, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = ctx->r2;
    // 0x80238624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238628: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8023862C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238630: sw          $v1, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r3;
    // 0x80238634: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238638: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023863C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80238640: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80238644: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238648: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023864C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238650: jr          $ra
    // 0x80238654: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238654: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C014_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C014: jr          $ra
    // 0x8023C018: nop

    TRACE_RETURN()
    return;
    // 0x8023C018: nop

;}
RECOMP_FUNC void func_80227EF8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227EFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F00: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227F04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F08: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80227F0C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x80227F10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F14: jal         0x800540D0
    // 0x80227F18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80227F18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80227F1C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227F20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227F28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F2C: lw          $v0, -0x236C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X236C);
    // 0x80227F30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F34: jalr        $v0
    // 0x80227F38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227F38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227F3C: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F44: bne         $v1, $v0, L_80227F58
    if (ctx->r3 != ctx->r2) {
        // 0x80227F48: nop
    
            goto L_80227F58;
    }
    // 0x80227F48: nop

    // 0x80227F4C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80227F50: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x80227F54: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80227F58:
    // 0x80227F58: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80227F5C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227F60: beql        $v0, $zero, L_80227F8C
    if (ctx->r2 == 0) {
        // 0x80227F64: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80227F8C;
    }
    goto skip_0;
    // 0x80227F64: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80227F68: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80227F6C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80227F70: bne         $v0, $zero, L_80227F80
    if (ctx->r2 != 0) {
        // 0x80227F74: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227F80;
    }
    // 0x80227F74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F78: jal         0x80228F20
    // 0x80227F7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80228F20_ovl25(rdram, ctx);
        goto after_2;
    // 0x80227F7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_80227F80:
    // 0x80227F80: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80227F84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F88: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80227F8C:
    // 0x80227F8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F98: jr          $ra
    // 0x80227F9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238BF8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238BFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238C00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238C04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238C08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238C0C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80238C10: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80238C14: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80238C18: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80238C1C: beq         $v0, $zero, L_80238DC0
    if (ctx->r2 == 0) {
        // 0x80238C20: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80238DC0;
    }
    // 0x80238C20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80238C24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238C28: addu        $at, $at, $v0
    gpr jr_addend_80238C30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238C2C: lw          $v0, 0x10B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X10B0);
    // 0x80238C30: jr          $v0
    // 0x80238C34: nop

    switch (jr_addend_80238C30 >> 2) {
        case 0: goto L_80238C38; break;
        case 1: goto L_80238C68; break;
        case 2: goto L_80238C98; break;
        case 3: goto L_80238CE8; break;
        case 4: goto L_80238D08; break;
        case 5: goto L_80238D50; break;
        default: switch_error(__func__, 0x80238C30, 0x802410B0);
    }
    // 0x80238C34: nop

L_80238C38:
    // 0x80238C38: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80238C3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238C40: jal         0x8002A2F8
    // 0x80238C44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80238C44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238C48: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x80238C4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238C50: jal         0x8002A2F8
    // 0x80238C54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80238C54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80238C58: jal         0x80036E48
    // 0x80238C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80238C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80238C60: j           L_80238D40
    // 0x80238C64: nop

        goto L_80238D40;
    // 0x80238C64: nop

L_80238C68:
    // 0x80238C68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238C6C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80238C70: bne         $v0, $zero, L_80238DC0
    if (ctx->r2 != 0) {
        // 0x80238C74: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80238DC0;
    }
    // 0x80238C74: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80238C78: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238C7C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80238C80: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80238C84: jal         0x800616FC
    // 0x80238C88: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80238C88: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_3:
    // 0x80238C8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238C90: j           L_80238D44
    // 0x80238C94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80238D44;
    // 0x80238C94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238C98:
    // 0x80238C98: jal         0x80239600
    // 0x80238C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239600_ovl25(rdram, ctx);
        goto after_4;
    // 0x80238C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80238CA0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238CA4: lw          $v0, 0x3238($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3238);
    // 0x80238CA8: lb          $v1, 0xC($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XC);
    // 0x80238CAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238CB0: bne         $v1, $v0, L_80238DC0
    if (ctx->r3 != ctx->r2) {
        // 0x80238CB4: nop
    
            goto L_80238DC0;
    }
    // 0x80238CB4: nop

    // 0x80238CB8: jal         0x802399C4
    // 0x80238CBC: nop

    func_802399C4_ovl25(rdram, ctx);
        goto after_5;
    // 0x80238CBC: nop

    after_5:
    // 0x80238CC0: beq         $v0, $zero, L_80238CD8
    if (ctx->r2 == 0) {
        // 0x80238CC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238CD8;
    }
    // 0x80238CC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238CC8: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238CCC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80238CD0: j           L_80238D40
    // 0x80238CD4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
        goto L_80238D40;
    // 0x80238CD4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
L_80238CD8:
    // 0x80238CD8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238CDC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238CE0: j           L_80238DC0
    // 0x80238CE4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80238DC0;
    // 0x80238CE4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80238CE8:
    // 0x80238CE8: jal         0x80036E48
    // 0x80238CEC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80238CEC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x80238CF0: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x80238CF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238CF8: jal         0x8002A2F8
    // 0x80238CFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x80238CFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80238D00: j           L_80238D40
    // 0x80238D04: nop

        goto L_80238D40;
    // 0x80238D04: nop

L_80238D08:
    // 0x80238D08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238D0C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80238D10: bne         $v0, $zero, L_80238DC0
    if (ctx->r2 != 0) {
        // 0x80238D14: nop
    
            goto L_80238DC0;
    }
    // 0x80238D14: nop

    // 0x80238D18: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80238D1C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80238D20: bne         $v0, $zero, L_80238DC0
    if (ctx->r2 != 0) {
        // 0x80238D24: nop
    
            goto L_80238DC0;
    }
    // 0x80238D24: nop

    // 0x80238D28: jal         0x8006FF84
    // 0x80238D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_8;
    // 0x80238D2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x80238D30: beq         $v0, $zero, L_80238DC0
    if (ctx->r2 == 0) {
        // 0x80238D34: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238DC0;
    }
    // 0x80238D34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238D38: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238D3C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80238D40:
    // 0x80238D40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_80238D44:
    // 0x80238D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238D48: j           L_80238DC0
    // 0x80238D4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238DC0;
    // 0x80238D4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238D50:
    // 0x80238D50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238D54: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238D58: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80238D5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238D60: beq         $v0, $zero, L_80238D80
    if (ctx->r2 == 0) {
        // 0x80238D64: nop
    
            goto L_80238D80;
    }
    // 0x80238D64: nop

    // 0x80238D68: jal         0x80061798
    // 0x80238D6C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_9;
    // 0x80238D6C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x80238D70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238D74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238D78: jal         0x80036B00
    // 0x80238D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_10;
    // 0x80238D7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_80238D80:
    // 0x80238D80: jal         0x8004A268
    // 0x80238D84: nop

    func_8004A268_25668(rdram, ctx);
        goto after_11;
    // 0x80238D84: nop

    after_11:
    // 0x80238D88: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80238D8C: jal         0x8004A0DC
    // 0x80238D90: lw          $a0, 0x3238($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3238);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_12;
    // 0x80238D90: lw          $a0, 0x3238($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3238);
    after_12:
    // 0x80238D94: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80238D98: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    // 0x80238D9C: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80238DA0: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80238DA4: jal         0x8006036C
    // 0x80238DA8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80238DA8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_13:
    // 0x80238DAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238DB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238DB4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238DB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238DBC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238DC0:
    // 0x80238DC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238DC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238DC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238DCC: jr          $ra
    // 0x80238DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225734_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022573C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225740: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225744: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80225748: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022574C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225754: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x80225758: jal         0x8004D5FC
    // 0x8022575C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022575C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225760: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80225764: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x80225768: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022576C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225770: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225774: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225778: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022577C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225784: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225788: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022578C:
    // 0x8022578C: sll         $v1, $a3, 24
    ctx->r3 = S32(ctx->r7 << 24);
    // 0x80225790: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80225794: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80225798: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x8022579C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x802257A0: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    // 0x802257A4: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x802257A8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802257AC: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x802257B0: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x802257B4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802257B8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802257BC: slti        $a1, $a1, 0x3
    ctx->r5 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x802257C0: sh          $t0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r8;
    // 0x802257C4: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x802257C8: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x802257CC: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x802257D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802257D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802257D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802257DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802257E0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802257E4: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x802257E8: sh          $v0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r2;
    // 0x802257EC: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    // 0x802257F0: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x802257F4: addiu       $a2, $a2, -0xC8
    ctx->r6 = ADD32(ctx->r6, -0XC8);
    // 0x802257F8: bne         $a1, $zero, L_8022578C
    if (ctx->r5 != 0) {
        // 0x802257FC: sh          $a2, 0x26($a0)
        MEM_H(0X26, ctx->r4) = ctx->r6;
            goto L_8022578C;
    }
    // 0x802257FC: sh          $a2, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r6;
    // 0x80225800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225804: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80225808: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022580C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225810: addiu       $a2, $s1, 0xC
    ctx->r6 = ADD32(ctx->r17, 0XC);
    // 0x80225814: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x80225818: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x8022581C: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80225820: jal         0x8022653C
    // 0x80225824: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_8022653C_ovl25(rdram, ctx);
        goto after_1;
    // 0x80225824: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_1:
    // 0x80225828: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022582C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225830: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225834: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225838: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022583C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225840: jr          $ra
    // 0x80225844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232828_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232828: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023282C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232830: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80232834: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232838: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023283C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232848: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8023284C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232850: bne         $v1, $v0, L_80232860
    if (ctx->r3 != ctx->r2) {
        // 0x80232854: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80232860;
    }
    // 0x80232854: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80232858: j           L_80232864
    // 0x8023285C: addiu       $s2, $a2, 0x3
    ctx->r18 = ADD32(ctx->r6, 0X3);
        goto L_80232864;
    // 0x8023285C: addiu       $s2, $a2, 0x3
    ctx->r18 = ADD32(ctx->r6, 0X3);
L_80232860:
    // 0x80232860: addiu       $s2, $a2, 0x6
    ctx->r18 = ADD32(ctx->r6, 0X6);
L_80232864:
    // 0x80232864: addu        $v0, $s1, $s2
    ctx->r2 = ADD32(ctx->r17, ctx->r18);
    // 0x80232868: lbu         $v1, 0x130($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X130);
    // 0x8023286C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232870: bne         $v1, $v0, L_80232998
    if (ctx->r3 != ctx->r2) {
        // 0x80232874: nop
    
            goto L_80232998;
    }
    // 0x80232874: nop

    // 0x80232878: jal         0x8004EFE4
    // 0x8023287C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023287C: nop

    after_0:
    // 0x80232880: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80232884: beq         $s0, $zero, L_80232998
    if (ctx->r16 == 0) {
        // 0x80232888: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80232998;
    }
    // 0x80232888: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023288C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232890: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
    // 0x80232894: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80232898: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8023289C: lbu         $v0, 0x17($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X17);
    // 0x802328A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802328A4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802328A8: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x802328AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802328B0: bnel        $v1, $v0, L_802328BC
    if (ctx->r3 != ctx->r2) {
        // 0x802328B4: sb          $a0, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r4;
            goto L_802328BC;
    }
    goto skip_0;
    // 0x802328B4: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    skip_0:
    // 0x802328B8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_802328BC:
    // 0x802328BC: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802328C0: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x802328C4: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x802328C8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802328CC: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x802328D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802328D4: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802328D8: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802328DC: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x802328E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802328E4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x802328E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802328EC: sb          $s4, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r20;
    // 0x802328F0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x802328F4: mfhi        $a3
    ctx->r7 = hi;
    // 0x802328F8: subu        $v1, $a3, $v1
    ctx->r3 = SUB32(ctx->r7, ctx->r3);
    // 0x802328FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232900: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232904: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80232908: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    // 0x8023290C: lbu         $v0, 0x1E($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1E);
    // 0x80232910: sll         $a1, $s2, 3
    ctx->r5 = S32(ctx->r18 << 3);
    // 0x80232914: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80232918: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8023291C: jal         0x8009A3B4
    // 0x80232920: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232920: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232924: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80232928: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023292C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80232930: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232934: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232938: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023293C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80232940: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80232944: jal         0x8004F144
    // 0x80232948: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80232948: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    after_2:
    // 0x8023294C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232950: beq         $v1, $zero, L_80232980
    if (ctx->r3 == 0) {
        // 0x80232954: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80232980;
    }
    // 0x80232954: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80232958: sb          $s4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r20;
    // 0x8023295C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80232960: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x80232964: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80232968: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023296C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80232970: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80232974: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80232978: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023297C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80232980:
    // 0x80232980: addiu       $a0, $zero, 0x1A2
    ctx->r4 = ADD32(0, 0X1A2);
    // 0x80232984: jal         0x8002A33C
    // 0x80232988: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80232988: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8023298C: lw          $v0, 0x144($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X144);
    // 0x80232990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232994: sw          $v0, 0x144($s1)
    MEM_W(0X144, ctx->r17) = ctx->r2;
L_80232998:
    // 0x80232998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023299C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802329A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802329A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802329A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802329AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802329B0: jr          $ra
    // 0x802329B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802329B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236B90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B90: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80236B94: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80236B98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236B9C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80236BA0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80236BA4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80236BA8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x80236BAC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80236BB0: lui         $a3, 0x2E40
    ctx->r7 = S32(0X2E40 << 16);
    // 0x80236BB4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80236BB8: lb          $a1, 0xF($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XF);
    // 0x80236BBC: ori         $a3, $a3, 0x4040
    ctx->r7 = ctx->r7 | 0X4040;
    // 0x80236BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236BC4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236BCC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236BD0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80236BD4: lui         $a2, 0x3D08
    ctx->r6 = S32(0X3D08 << 16);
    // 0x80236BD8: ori         $a2, $a2, 0x29
    ctx->r6 = ctx->r6 | 0X29;
    // 0x80236BDC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236BE0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236BE4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80236BE8: sw          $a3, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r7;
    // 0x80236BEC: sw          $a2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r6;
    // 0x80236BF0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80236BF4: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80236BF8: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x80236BFC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236C00: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80236C04: lbu         $v1, -0x1080($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1080);
    // 0x80236C08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236C0C: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x80236C10: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236C14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236C18: lbu         $v1, -0x107F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X107F);
    // 0x80236C1C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80236C20: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80236C24: jal         0x80053ED8
    // 0x80236C28: sb          $v1, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r3;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80236C28: sb          $v1, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r3;
    after_0:
    // 0x80236C2C: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x80236C30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236C34: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80236C38: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80236C3C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80236C40: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x80236C44: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x80236C48: jal         0x8009A3B4
    // 0x80236C4C: addiu       $a1, $a1, 0x1E8
    ctx->r5 = ADD32(ctx->r5, 0X1E8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236C4C: addiu       $a1, $a1, 0x1E8
    ctx->r5 = ADD32(ctx->r5, 0X1E8);
    after_1:
    // 0x80236C50: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80236C54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236C58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236C5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236C60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236C64: lhu         $v0, -0x104C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X104C);
    // 0x80236C68: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80236C6C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80236C70: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80236C74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236C78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236C7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236C80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236C84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236C88: lhu         $v0, -0x104A($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X104A);
    // 0x80236C8C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80236C90: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80236C94: jal         0x800308E8
    // 0x80236C98: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_2;
    // 0x80236C98: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x80236C9C: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80236CA0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80236CA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236CA8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80236CAC: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x80236CB0: jal         0x8009A3B4
    // 0x80236CB4: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80236CB4: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_3:
    // 0x80236CB8: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80236CBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80236CC0: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80236CC4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80236CC8: lh          $a3, 0x1C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X1C);
    // 0x80236CCC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80236CD0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80236CD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236CD8: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80236CDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80236CE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80236CE4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80236CE8: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    // 0x80236CEC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80236CF0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80236CF4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80236CF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80236CFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236D00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236D04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236D08: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80236D0C: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80236D10: sh          $a0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r4;
    // 0x80236D14: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80236D18: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80236D1C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80236D20: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80236D24: jr          $ra
    // 0x80236D28: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80236D28: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80238988_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238988: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023898C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238994: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238998: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023899C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802389A0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802389A4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802389A8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802389AC: beq         $v0, $zero, L_80238BE4
    if (ctx->r2 == 0) {
        // 0x802389B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80238BE4;
    }
    // 0x802389B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802389B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802389B8: addu        $at, $at, $v0
    gpr jr_addend_802389C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802389BC: lw          $v0, 0x1090($at)
    ctx->r2 = ADD32(ctx->r1, 0X1090);
    // 0x802389C0: jr          $v0
    // 0x802389C4: nop

    switch (jr_addend_802389C0 >> 2) {
        case 0: goto L_802389C8; break;
        case 1: goto L_80238A0C; break;
        case 2: goto L_80238A3C; break;
        case 3: goto L_80238A7C; break;
        case 4: goto L_80238AD4; break;
        case 5: goto L_80238B04; break;
        case 6: goto L_80238B74; break;
        default: switch_error(__func__, 0x802389C0, 0x80241090);
    }
    // 0x802389C4: nop

L_802389C8:
    // 0x802389C8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x802389CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802389D0: jal         0x8002A2F8
    // 0x802389D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x802389D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802389D8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x802389DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802389E0: jal         0x8002A2F8
    // 0x802389E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x802389E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802389E8: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    // 0x802389EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802389F0: jal         0x8002A2F8
    // 0x802389F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x802389F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802389F8: jal         0x80036E48
    // 0x802389FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802389FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80238A00: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238A04: j           L_80238B68
    // 0x80238A08: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_80238B68;
    // 0x80238A08: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_80238A0C:
    // 0x80238A0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238A10: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80238A14: bne         $v0, $zero, L_80238BE4
    if (ctx->r2 != 0) {
        // 0x80238A18: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80238BE4;
    }
    // 0x80238A18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80238A1C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238A20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80238A24: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80238A28: jal         0x800616FC
    // 0x80238A2C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80238A2C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_4:
    // 0x80238A30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238A34: j           L_80238B68
    // 0x80238A38: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80238B68;
    // 0x80238A38: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238A3C:
    // 0x80238A3C: jal         0x80239600
    // 0x80238A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239600_ovl25(rdram, ctx);
        goto after_5;
    // 0x80238A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80238A44: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238A48: lw          $v0, 0x3238($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3238);
    // 0x80238A4C: lb          $v1, 0xC($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XC);
    // 0x80238A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238A54: bne         $v1, $v0, L_80238BE4
    if (ctx->r3 != ctx->r2) {
        // 0x80238A58: nop
    
            goto L_80238BE4;
    }
    // 0x80238A58: nop

    // 0x80238A5C: jal         0x802399C4
    // 0x80238A60: nop

    func_802399C4_ovl25(rdram, ctx);
        goto after_6;
    // 0x80238A60: nop

    after_6:
    // 0x80238A64: bne         $v0, $zero, L_80238B64
    if (ctx->r2 != 0) {
        // 0x80238A68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238B64;
    }
    // 0x80238A68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238A6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238A70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238A74: j           L_80238BE4
    // 0x80238A78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80238BE4;
    // 0x80238A78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80238A7C:
    // 0x80238A7C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80238A80: bne         $v1, $zero, L_80238AA4
    if (ctx->r3 != 0) {
        // 0x80238A84: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80238AA4;
    }
    // 0x80238A84: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80238A88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238A8C: jal         0x800616FC
    // 0x80238A90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80238A90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80238A94: jal         0x80036B58
    // 0x80238A98: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_8;
    // 0x80238A98: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
    // 0x80238A9C: j           L_80238AC4
    // 0x80238AA0: nop

        goto L_80238AC4;
    // 0x80238AA0: nop

L_80238AA4:
    // 0x80238AA4: bne         $v1, $v0, L_80238AC4
    if (ctx->r3 != ctx->r2) {
        // 0x80238AA8: nop
    
            goto L_80238AC4;
    }
    // 0x80238AA8: nop

    // 0x80238AAC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238AB0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80238AB4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80238AB8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238ABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238AC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238AC4:
    // 0x80238AC4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80238AC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238ACC: j           L_80238BE4
    // 0x80238AD0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_80238BE4;
    // 0x80238AD0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80238AD4:
    // 0x80238AD4: jal         0x80036E48
    // 0x80238AD8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80238AD8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
    // 0x80238ADC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x80238AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238AE4: jal         0x8002A2F8
    // 0x80238AE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80238AE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80238AEC: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x80238AF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238AF4: jal         0x8002A2F8
    // 0x80238AF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x80238AF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x80238AFC: j           L_80238B64
    // 0x80238B00: nop

        goto L_80238B64;
    // 0x80238B00: nop

L_80238B04:
    // 0x80238B04: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238B08: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80238B0C: bne         $v0, $zero, L_80238BE4
    if (ctx->r2 != 0) {
        // 0x80238B10: nop
    
            goto L_80238BE4;
    }
    // 0x80238B10: nop

    // 0x80238B14: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80238B18: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80238B1C: bne         $v0, $zero, L_80238BE4
    if (ctx->r2 != 0) {
        // 0x80238B20: nop
    
            goto L_80238BE4;
    }
    // 0x80238B20: nop

    // 0x80238B24: jal         0x8006FF84
    // 0x80238B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_12;
    // 0x80238B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x80238B2C: beq         $v0, $zero, L_80238BE4
    if (ctx->r2 == 0) {
        // 0x80238B30: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80238BE4;
    }
    // 0x80238B30: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80238B34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238B38: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238B3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238B40: beq         $v0, $zero, L_80238B5C
    if (ctx->r2 == 0) {
        // 0x80238B44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238B5C;
    }
    // 0x80238B44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238B48: jal         0x80061798
    // 0x80238B4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_13;
    // 0x80238B4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x80238B50: jal         0x8004B5E8
    // 0x80238B54: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_14;
    // 0x80238B54: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_14:
    // 0x80238B58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80238B5C:
    // 0x80238B5C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238B60: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80238B64:
    // 0x80238B64: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_80238B68:
    // 0x80238B68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238B6C: j           L_80238BE4
    // 0x80238B70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238BE4;
    // 0x80238B70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238B74:
    // 0x80238B74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238B78: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238B7C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80238B80: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238B84: beq         $v0, $zero, L_80238BA4
    if (ctx->r2 == 0) {
        // 0x80238B88: nop
    
            goto L_80238BA4;
    }
    // 0x80238B88: nop

    // 0x80238B8C: jal         0x80061798
    // 0x80238B90: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_15;
    // 0x80238B90: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_15:
    // 0x80238B94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238B9C: jal         0x80036B00
    // 0x80238BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_16;
    // 0x80238BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_16:
L_80238BA4:
    // 0x80238BA4: jal         0x8004A268
    // 0x80238BA8: nop

    func_8004A268_25668(rdram, ctx);
        goto after_17;
    // 0x80238BA8: nop

    after_17:
    // 0x80238BAC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80238BB0: jal         0x8004A0DC
    // 0x80238BB4: lw          $a0, 0x3238($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3238);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_18;
    // 0x80238BB4: lw          $a0, 0x3238($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3238);
    after_18:
    // 0x80238BB8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80238BBC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x80238BC0: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80238BC4: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80238BC8: jal         0x8006036C
    // 0x80238BCC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x80238BCC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_19:
    // 0x80238BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238BD4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238BD8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80238BDC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238BE0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238BE4:
    // 0x80238BE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238BE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238BEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238BF0: jr          $ra
    // 0x80238BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234434_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234434: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023443C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234444: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x80234448: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023444C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80234450: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80234454: lbu         $a2, 0xB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB);
    // 0x80234458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023445C: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x80234460: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80234464: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x80234468: bne         $a2, $zero, L_802344B4
    if (ctx->r6 != 0) {
        // 0x8023446C: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_802344B4;
    }
    // 0x8023446C: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80234470: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80234474: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80234478: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023447C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234480: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80234484: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234488: jal         0x802348D4
    // 0x8023448C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_802348D4_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023448C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x80234490: addiu       $a0, $s0, 0xA4
    ctx->r4 = ADD32(ctx->r16, 0XA4);
    // 0x80234494: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234498: jal         0x8009A3B4
    // 0x8023449C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023449C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802344A0: addiu       $a0, $zero, 0xF1
    ctx->r4 = ADD32(0, 0XF1);
    // 0x802344A4: jal         0x8002A33C
    // 0x802344A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802344A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802344AC: j           L_802344BC
    // 0x802344B0: nop

        goto L_802344BC;
    // 0x802344B0: nop

L_802344B4:
    // 0x802344B4: jal         0x80234A84
    // 0x802344B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234A84_ovl25(rdram, ctx);
        goto after_3;
    // 0x802344B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802344BC:
    // 0x802344BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802344C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802344C4: jr          $ra
    // 0x802344C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802344C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A42C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A42C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A430: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A434: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A43C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A440: bne         $v0, $zero, L_8023A478
    if (ctx->r2 != 0) {
        // 0x8023A444: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8023A478;
    }
    // 0x8023A444: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8023A448: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A44C: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8023A450: jal         0x8023AB14
    // 0x8023A454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8023A458: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A45C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A460: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x8023A464: jal         0x8004F418
    // 0x8023A468: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8023A468: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
    // 0x8023A46C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A470: jal         0x8005FA7C
    // 0x8023A474: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023A474: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    after_2:
L_8023A478:
    // 0x8023A478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A47C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A480: jr          $ra
    // 0x8023A484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802360B0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802360B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802360B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802360B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802360BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802360C0: jal         0x80071110
    // 0x802360C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x802360C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802360C8: bne         $v0, $zero, L_802360DC
    if (ctx->r2 != 0) {
        // 0x802360CC: nop
    
            goto L_802360DC;
    }
    // 0x802360CC: nop

    // 0x802360D0: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x802360D4: beq         $v0, $zero, L_80236118
    if (ctx->r2 == 0) {
        // 0x802360D8: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80236118;
    }
    // 0x802360D8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_802360DC:
    // 0x802360DC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802360E0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802360E4: beq         $v0, $zero, L_802360FC
    if (ctx->r2 == 0) {
        // 0x802360E8: nop
    
            goto L_802360FC;
    }
    // 0x802360E8: nop

    // 0x802360EC: jal         0x8004F4F8
    // 0x802360F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x802360F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802360F4: j           L_80236108
    // 0x802360F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236108;
    // 0x802360F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802360FC:
    // 0x802360FC: jal         0x8004F568
    // 0x80236100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x80236100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236108:
    // 0x80236108: jal         0x80236324
    // 0x8023610C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80236324_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023610C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80236110: j           L_802361E0
    // 0x80236114: nop

        goto L_802361E0;
    // 0x80236114: nop

L_80236118:
    // 0x80236118: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023611C: jal         0x8009A3B4
    // 0x80236120: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80236120: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80236124: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236128: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023612C: jal         0x8009A3B4
    // 0x80236130: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80236130: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80236134: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80236138: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8023613C: beq         $v1, $zero, L_802361A8
    if (ctx->r3 == 0) {
        // 0x80236140: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_802361A8;
    }
    // 0x80236140: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80236144: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80236148: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023614C: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x80236150: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80236154: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236158: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023615C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80236160: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80236164: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80236168: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023616C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80236170: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80236174: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80236178: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023617C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236180: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80236184: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236188: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8023618C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80236190: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x80236194: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236198: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x8023619C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802361A0: j           L_802361D8
    // 0x802361A4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
        goto L_802361D8;
    // 0x802361A4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
L_802361A8:
    // 0x802361A8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802361AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802361B0: beq         $v0, $zero, L_802361C8
    if (ctx->r2 == 0) {
        // 0x802361B4: nop
    
            goto L_802361C8;
    }
    // 0x802361B4: nop

    // 0x802361B8: jal         0x8004F4F8
    // 0x802361BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x802361BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802361C0: j           L_802361E0
    // 0x802361C4: nop

        goto L_802361E0;
    // 0x802361C4: nop

L_802361C8:
    // 0x802361C8: jal         0x8004F568
    // 0x802361CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_7;
    // 0x802361CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802361D0: j           L_802361E0
    // 0x802361D4: nop

        goto L_802361E0;
    // 0x802361D4: nop

L_802361D8:
    // 0x802361D8: jal         0x802361F0
    // 0x802361DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802361F0_ovl25(rdram, ctx);
        goto after_8;
    // 0x802361DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802361E0:
    // 0x802361E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802361E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802361E8: jr          $ra
    // 0x802361EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802361EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D2C8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D2C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D2CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D2D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D2D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023D2D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D2DC: lbu         $s1, 0x5($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X5);
    // 0x8023D2E0: beq         $s1, $zero, L_8023D2F8
    if (ctx->r17 == 0) {
        // 0x8023D2E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D2F8;
    }
    // 0x8023D2E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D2E8: beq         $s1, $v0, L_8023D344
    if (ctx->r17 == ctx->r2) {
        // 0x8023D2EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023D344;
    }
    // 0x8023D2EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023D2F0: j           L_8023D3BC
    // 0x8023D2F4: nop

        goto L_8023D3BC;
    // 0x8023D2F4: nop

L_8023D2F8:
    // 0x8023D2F8: jal         0x8005FB90
    // 0x8023D2FC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x8023D2FC: nop

    after_0:
    // 0x8023D300: jal         0x80036B7C
    // 0x8023D304: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x8023D304: nop

    after_1:
    // 0x8023D308: beq         $v0, $zero, L_8023D3BC
    if (ctx->r2 == 0) {
        // 0x8023D30C: nop
    
            goto L_8023D3BC;
    }
    // 0x8023D30C: nop

    // 0x8023D310: jal         0x80060170
    // 0x8023D314: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x8023D314: nop

    after_2:
    // 0x8023D318: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023D31C: addiu       $v0, $v0, 0x954
    ctx->r2 = ADD32(ctx->r2, 0X954);
    // 0x8023D320: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023D324: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023D328: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8023D32C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023D330: addiu       $v1, $v1, 0xBB4
    ctx->r3 = ADD32(ctx->r3, 0XBB4);
    // 0x8023D334: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x8023D338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D33C: j           L_8023D3BC
    // 0x8023D340: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8023D3BC;
    // 0x8023D340: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8023D344:
    // 0x8023D344: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023D348: beq         $v1, $v0, L_8023D3A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023D34C: nop
    
            goto L_8023D3A4;
    }
    // 0x8023D34C: nop

    // 0x8023D350: jal         0x8006072C
    // 0x8023D354: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_3;
    // 0x8023D354: nop

    after_3:
    // 0x8023D358: beq         $v0, $zero, L_8023D38C
    if (ctx->r2 == 0) {
        // 0x8023D35C: nop
    
            goto L_8023D38C;
    }
    // 0x8023D35C: nop

    // 0x8023D360: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023D364: lw          $v0, 0x3290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3290);
    // 0x8023D368: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023D36C: bne         $v0, $zero, L_8023D38C
    if (ctx->r2 != 0) {
        // 0x8023D370: nop
    
            goto L_8023D38C;
    }
    // 0x8023D370: nop

    // 0x8023D374: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D378: sw          $s1, 0x3290($at)
    MEM_W(0X3290, ctx->r1) = ctx->r17;
    // 0x8023D37C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023D380: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023D384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D388: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023D38C:
    // 0x8023D38C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023D390: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023D394: jalr        $v0
    // 0x8023D398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023D398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023D39C: j           L_8023D3B4
    // 0x8023D3A0: nop

        goto L_8023D3B4;
    // 0x8023D3A0: nop

L_8023D3A4:
    // 0x8023D3A4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023D3A8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023D3AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D3B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023D3B4:
    // 0x8023D3B4: jal         0x8005FB90
    // 0x8023D3B8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x8023D3B8: nop

    after_5:
L_8023D3BC:
    // 0x8023D3BC: jal         0x80060018
    // 0x8023D3C0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x8023D3C0: nop

    after_6:
    // 0x8023D3C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023D3C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D3CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D3D0: jr          $ra
    // 0x8023D3D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D3D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D3D8: nop

    // 0x8023D3DC: nop

;}
RECOMP_FUNC void func_8023B4F8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B4FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B508: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023B50C: beql        $v0, $zero, L_8023B514
    if (ctx->r2 == 0) {
        // 0x8023B510: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_8023B514;
    }
    goto skip_0;
    // 0x8023B510: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_0:
L_8023B514:
    // 0x8023B514: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8023B518: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023B51C: beq         $v0, $zero, L_8023B664
    if (ctx->r2 == 0) {
        // 0x8023B520: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023B664;
    }
    // 0x8023B520: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023B524: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B528: addu        $at, $at, $v0
    gpr jr_addend_8023B530 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B52C: lw          $v0, 0x1138($at)
    ctx->r2 = ADD32(ctx->r1, 0X1138);
    // 0x8023B530: jr          $v0
    // 0x8023B534: nop

    switch (jr_addend_8023B530 >> 2) {
        case 0: goto L_8023B538; break;
        case 1: goto L_8023B5D4; break;
        case 2: goto L_8023B5FC; break;
        case 3: goto L_8023B614; break;
        case 4: goto L_8023B630; break;
        default: switch_error(__func__, 0x8023B530, 0x80241138);
    }
    // 0x8023B534: nop

L_8023B538:
    // 0x8023B538: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B53C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023B540: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B544: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B548: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B54C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8023B550: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B554: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B558: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B55C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8023B560: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023B564: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8023B568: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B56C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B570: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B574: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B578: jal         0x8004F488
    // 0x8023B57C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023B57C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x8023B580: jal         0x8004F418
    // 0x8023B584: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8023B584: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x8023B588: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B58C: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023B590: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023B594: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8023B598: jal         0x8023B794
    // 0x8023B59C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    func_8023B794_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023B59C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    after_2:
    // 0x8023B5A0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x8023B5A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023B5A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B5AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B5B0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023B5B4: jal         0x8002A2F8
    // 0x8023B5B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8023B5B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023B5BC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    // 0x8023B5C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B5C4: jal         0x8002A2F8
    // 0x8023B5C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8023B5C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023B5CC: j           L_8023B620
    // 0x8023B5D0: nop

        goto L_8023B620;
    // 0x8023B5D0: nop

L_8023B5D4:
    // 0x8023B5D4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B5D8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023B5DC: bne         $v1, $v0, L_8023B664
    if (ctx->r3 != ctx->r2) {
        // 0x8023B5E0: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_8023B664;
    }
    // 0x8023B5E0: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8023B5E4: jal         0x80036340
    // 0x8023B5E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036340_11740(rdram, ctx);
        goto after_5;
    // 0x8023B5E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8023B5EC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8023B5F0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023B5F4: j           L_8023B624
    // 0x8023B5F8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8023B624;
    // 0x8023B5F8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8023B5FC:
    // 0x8023B5FC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023B600: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8023B604: beq         $v1, $v0, L_8023B620
    if (ctx->r3 == ctx->r2) {
        // 0x8023B608: nop
    
            goto L_8023B620;
    }
    // 0x8023B608: nop

    // 0x8023B60C: j           L_8023B664
    // 0x8023B610: nop

        goto L_8023B664;
    // 0x8023B610: nop

L_8023B614:
    // 0x8023B614: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023B618: jal         0x80036B1C
    // 0x8023B61C: ori         $a0, $a0, 0x4A01
    ctx->r4 = ctx->r4 | 0X4A01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_6;
    // 0x8023B61C: ori         $a0, $a0, 0x4A01
    ctx->r4 = ctx->r4 | 0X4A01;
    after_6:
L_8023B620:
    // 0x8023B620: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_8023B624:
    // 0x8023B624: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B628: j           L_8023B664
    // 0x8023B62C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8023B664;
    // 0x8023B62C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8023B630:
    // 0x8023B630: jal         0x80036B7C
    // 0x8023B634: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_7;
    // 0x8023B634: nop

    after_7:
    // 0x8023B638: beq         $v0, $zero, L_8023B664
    if (ctx->r2 == 0) {
        // 0x8023B63C: addiu       $a0, $zero, 0x182
        ctx->r4 = ADD32(0, 0X182);
            goto L_8023B664;
    }
    // 0x8023B63C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x8023B640: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B644: jal         0x8002A2F8
    // 0x8023B648: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x8023B648: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8023B64C: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x8023B650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B654: jal         0x8002A2F8
    // 0x8023B658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x8023B658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8023B65C: jal         0x800600F8
    // 0x8023B660: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_10;
    // 0x8023B660: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    after_10:
L_8023B664:
    // 0x8023B664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B66C: jr          $ra
    // 0x8023B670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D014_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023D01C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D020: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023D024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D028: beq         $v1, $v0, L_8023D068
    if (ctx->r3 == ctx->r2) {
        // 0x8023D02C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023D068;
    }
    // 0x8023D02C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023D030: beq         $v0, $zero, L_8023D0B0
    if (ctx->r2 == 0) {
        // 0x8023D034: nop
    
            goto L_8023D0B0;
    }
    // 0x8023D034: nop

    // 0x8023D038: bne         $v1, $zero, L_8023D0B0
    if (ctx->r3 != 0) {
        // 0x8023D03C: nop
    
            goto L_8023D0B0;
    }
    // 0x8023D03C: nop

    // 0x8023D040: jal         0x8004F488
    // 0x8023D044: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023D044: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    after_0:
    // 0x8023D048: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D04C: jal         0x8005FA7C
    // 0x8023D050: addiu       $a0, $a0, 0x884
    ctx->r4 = ADD32(ctx->r4, 0X884);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023D050: addiu       $a0, $a0, 0x884
    ctx->r4 = ADD32(ctx->r4, 0X884);
    after_1:
    // 0x8023D054: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8023D058: jal         0x8004CB2C
    // 0x8023D05C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x8023D05C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x8023D060: j           L_8023D0B0
    // 0x8023D064: nop

        goto L_8023D0B0;
    // 0x8023D064: nop

L_8023D068:
    // 0x8023D068: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023D06C: addiu       $s0, $s0, 0xB9C
    ctx->r16 = ADD32(ctx->r16, 0XB9C);
    // 0x8023D070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D074: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023D078: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023D07C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023D080: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x8023D084: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023D088: jal         0x80229A38
    // 0x8023D08C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023D08C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8023D090: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x8023D094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023D098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023D09C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023D0A0: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
    // 0x8023D0A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023D0A8: jal         0x80229A38
    // 0x8023D0AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023D0AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
L_8023D0B0:
    // 0x8023D0B0: jal         0x8023C690
    // 0x8023D0B4: nop

    func_8023C690_ovl25(rdram, ctx);
        goto after_5;
    // 0x8023D0B4: nop

    after_5:
    // 0x8023D0B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D0BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D0C0: jr          $ra
    // 0x8023D0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D0C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CD18_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CD1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CD20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD24: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CD28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022CD2C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CD30: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x8022CD34: beq         $v0, $zero, L_8022D2A0
    if (ctx->r2 == 0) {
        // 0x8022CD38: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_8022D2A0;
    }
    // 0x8022CD38: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8022CD3C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CD40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CD44: addu        $at, $at, $v0
    gpr jr_addend_8022CD4C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CD48: lw          $v0, 0xE98($at)
    ctx->r2 = ADD32(ctx->r1, 0XE98);
    // 0x8022CD4C: jr          $v0
    // 0x8022CD50: nop

    switch (jr_addend_8022CD4C >> 2) {
        case 0: goto L_8022CD54; break;
        case 1: goto L_8022CD74; break;
        case 2: goto L_8022CEA0; break;
        case 3: goto L_8022CEE4; break;
        case 4: goto L_8022CF10; break;
        case 5: goto L_8022CF3C; break;
        case 6: goto L_8022CFFC; break;
        case 7: goto L_8022D038; break;
        case 8: goto L_8022D128; break;
        case 9: goto L_8022D154; break;
        case 10: goto L_8022D1DC; break;
        case 11: goto L_8022D1FC; break;
        case 12: goto L_8022D270; break;
        default: switch_error(__func__, 0x8022CD4C, 0x80240E98);
    }
    // 0x8022CD50: nop

L_8022CD54:
    // 0x8022CD54: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022CD58: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022CD5C: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CD60: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022D2A0;
    }
    // 0x8022CD60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CD64: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022CD68: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022CD6C: j           L_8022D260
    // 0x8022CD70: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8022D260;
    // 0x8022CD70: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022CD74:
    // 0x8022CD74: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022CD78: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022CD7C: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x8022CD80: bne         $v0, $zero, L_8022D2A0
    if (ctx->r2 != 0) {
        // 0x8022CD84: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022D2A0;
    }
    // 0x8022CD84: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022CD88: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022CD8C: beq         $a1, $v0, L_8022CE38
    if (ctx->r5 == ctx->r2) {
        // 0x8022CD90: slti        $v0, $a1, 0x79
        ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
            goto L_8022CE38;
    }
    // 0x8022CD90: slti        $v0, $a1, 0x79
    ctx->r2 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x8022CD94: beq         $v0, $zero, L_8022CDD0
    if (ctx->r2 == 0) {
        // 0x8022CD98: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8022CDD0;
    }
    // 0x8022CD98: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022CD9C: beq         $a1, $v0, L_8022CE1C
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDA0: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_8022CE1C;
    }
    // 0x8022CDA0: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x8022CDA4: beq         $v0, $zero, L_8022CDBC
    if (ctx->r2 == 0) {
        // 0x8022CDA8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022CDBC;
    }
    // 0x8022CDA8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022CDAC: beq         $a1, $v0, L_8022CE10
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CE10;
    }
    // 0x8022CDB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDB4: j           L_8022D2A0
    // 0x8022CDB8: nop

        goto L_8022D2A0;
    // 0x8022CDB8: nop

L_8022CDBC:
    // 0x8022CDBC: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x8022CDC0: beq         $a1, $v0, L_8022CE2C
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CE2C;
    }
    // 0x8022CDC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDC8: j           L_8022D2A0
    // 0x8022CDCC: nop

        goto L_8022D2A0;
    // 0x8022CDCC: nop

L_8022CDD0:
    // 0x8022CDD0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022CDD4: beq         $a1, $v0, L_8022CE64
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDD8: slti        $v0, $a1, 0x97
        ctx->r2 = SIGNED(ctx->r5) < 0X97 ? 1 : 0;
            goto L_8022CE64;
    }
    // 0x8022CDD8: slti        $v0, $a1, 0x97
    ctx->r2 = SIGNED(ctx->r5) < 0X97 ? 1 : 0;
    // 0x8022CDDC: beq         $v0, $zero, L_8022CDF4
    if (ctx->r2 == 0) {
        // 0x8022CDE0: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_8022CDF4;
    }
    // 0x8022CDE0: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022CDE4: beq         $a1, $v0, L_8022CE58
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CE58;
    }
    // 0x8022CDE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDEC: j           L_8022D2A0
    // 0x8022CDF0: nop

        goto L_8022D2A0;
    // 0x8022CDF0: nop

L_8022CDF4:
    // 0x8022CDF4: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022CDF8: beq         $a1, $v0, L_8022CE74
    if (ctx->r5 == ctx->r2) {
        // 0x8022CDFC: addiu       $v0, $zero, 0xDC
        ctx->r2 = ADD32(0, 0XDC);
            goto L_8022CE74;
    }
    // 0x8022CDFC: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x8022CE00: beq         $a1, $v0, L_8022CE84
    if (ctx->r5 == ctx->r2) {
        // 0x8022CE04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CE84;
    }
    // 0x8022CE04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE08: j           L_8022D2A0
    // 0x8022CE0C: nop

        goto L_8022D2A0;
    // 0x8022CE0C: nop

L_8022CE10:
    // 0x8022CE10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE14: j           L_8022D298
    // 0x8022CE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022D298;
    // 0x8022CE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022CE1C:
    // 0x8022CE1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE24: j           L_8022D298
    // 0x8022CE28: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_8022D298;
    // 0x8022CE28: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_8022CE2C:
    // 0x8022CE2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE30: j           L_8022D298
    // 0x8022CE34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022D298;
    // 0x8022CE34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022CE38:
    // 0x8022CE38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE40: jal         0x8022D2B4
    // 0x8022CE44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022CE44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8022CE48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE50: j           L_8022D298
    // 0x8022CE54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_8022D298;
    // 0x8022CE54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_8022CE58:
    // 0x8022CE58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE5C: j           L_8022D298
    // 0x8022CE60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022D298;
    // 0x8022CE60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022CE64:
    // 0x8022CE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE6C: j           L_8022D298
    // 0x8022CE70: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_8022D298;
    // 0x8022CE70: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_8022CE74:
    // 0x8022CE74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE7C: j           L_8022D298
    // 0x8022CE80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022D298;
    // 0x8022CE80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022CE84:
    // 0x8022CE84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE88: jal         0x8022D2B4
    // 0x8022CE8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022CE8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8022CE90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CE98: j           L_8022D258
    // 0x8022CE9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022D258;
    // 0x8022CE9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022CEA0:
    // 0x8022CEA0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022CEA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CEA8: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CEAC: nop
    
            goto L_8022D2A0;
    }
    // 0x8022CEAC: nop

    // 0x8022CEB0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022CEB4: bne         $v0, $v1, L_8022D2A0
    if (ctx->r2 != ctx->r3) {
        // 0x8022CEB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022CEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CEBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CEC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8022CEC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022CEC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CECC: jal         0x8022D2B4
    // 0x8022CED0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022CED0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_2:
    // 0x8022CED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CED8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CEDC: j           L_8022D258
    // 0x8022CEE0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_8022D258;
    // 0x8022CEE0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_8022CEE4:
    // 0x8022CEE4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022CEE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022CEEC: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CEF0: nop
    
            goto L_8022D2A0;
    }
    // 0x8022CEF0: nop

    // 0x8022CEF4: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8022CEF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CEFC: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8022CF00: bne         $v0, $zero, L_8022D018
    if (ctx->r2 != 0) {
        // 0x8022CF04: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D018;
    }
    // 0x8022CF04: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CF08: j           L_8022D260
    // 0x8022CF0C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8022D260;
    // 0x8022CF0C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8022CF10:
    // 0x8022CF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CF18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CF1C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022CF20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CF24: jal         0x8022D2B4
    // 0x8022CF28: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_3;
    // 0x8022CF28: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_3:
    // 0x8022CF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CF34: j           L_8022D258
    // 0x8022CF38: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_8022D258;
    // 0x8022CF38: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_8022CF3C:
    // 0x8022CF3C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022CF40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CF44: bne         $v1, $v0, L_8022CFC0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CF48: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022CFC0;
    }
    // 0x8022CF48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CF4C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022CF50: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022CF54: beq         $a1, $v0, L_8022CFA4
    if (ctx->r5 == ctx->r2) {
        // 0x8022CF58: slti        $v0, $a1, 0x1A
        ctx->r2 = SIGNED(ctx->r5) < 0X1A ? 1 : 0;
            goto L_8022CFA4;
    }
    // 0x8022CF58: slti        $v0, $a1, 0x1A
    ctx->r2 = SIGNED(ctx->r5) < 0X1A ? 1 : 0;
    // 0x8022CF5C: beq         $v0, $zero, L_8022CF74
    if (ctx->r2 == 0) {
        // 0x8022CF60: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022CF74;
    }
    // 0x8022CF60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022CF64: beq         $a1, $v0, L_8022CF88
    if (ctx->r5 == ctx->r2) {
        // 0x8022CF68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF88;
    }
    // 0x8022CF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF6C: j           L_8022D2A0
    // 0x8022CF70: nop

        goto L_8022D2A0;
    // 0x8022CF70: nop

L_8022CF74:
    // 0x8022CF74: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022CF78: beq         $a1, $v0, L_8022CFB4
    if (ctx->r5 == ctx->r2) {
        // 0x8022CF7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CFB4;
    }
    // 0x8022CF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF80: j           L_8022D2A0
    // 0x8022CF84: nop

        goto L_8022D2A0;
    // 0x8022CF84: nop

L_8022CF88:
    // 0x8022CF88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CF8C: jal         0x8022D2B4
    // 0x8022CF90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022CF90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022CF94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CF9C: j           L_8022D298
    // 0x8022CFA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8022D298;
    // 0x8022CFA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8022CFA4:
    // 0x8022CFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CFAC: j           L_8022D298
    // 0x8022CFB0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_8022D298;
    // 0x8022CFB0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_8022CFB4:
    // 0x8022CFB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CFB8: j           L_8022D298
    // 0x8022CFBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8022D298;
    // 0x8022CFBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8022CFC0:
    // 0x8022CFC0: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CFC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2A0;
    }
    // 0x8022CFC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFC8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8022CFCC: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022CFD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022CFD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CFD8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8022CFDC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CFE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CFE4: jal         0x8022D2B4
    // 0x8022CFE8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022CFE8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_5:
    // 0x8022CFEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CFF4: j           L_8022D258
    // 0x8022CFF8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_8022D258;
    // 0x8022CFF8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_8022CFFC:
    // 0x8022CFFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D000: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D004: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8022D008: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D00C: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8022D010: beq         $v0, $zero, L_8022D020
    if (ctx->r2 == 0) {
        // 0x8022D014: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D020;
    }
    // 0x8022D014: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8022D018:
    // 0x8022D018: j           L_8022D2A0
    // 0x8022D01C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022D2A0;
    // 0x8022D01C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D020:
    // 0x8022D020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D024: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D028: jal         0x8022D2B4
    // 0x8022D02C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022D02C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x8022D030: j           L_8022D260
    // 0x8022D034: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8022D260;
    // 0x8022D034: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8022D038:
    // 0x8022D038: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022D03C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D040: bne         $v1, $v0, L_8022D0EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D044: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022D0EC;
    }
    // 0x8022D044: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D048: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022D04C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8022D050: beq         $a1, $v0, L_8022D0B0
    if (ctx->r5 == ctx->r2) {
        // 0x8022D054: slti        $v0, $a1, 0x56
        ctx->r2 = SIGNED(ctx->r5) < 0X56 ? 1 : 0;
            goto L_8022D0B0;
    }
    // 0x8022D054: slti        $v0, $a1, 0x56
    ctx->r2 = SIGNED(ctx->r5) < 0X56 ? 1 : 0;
    // 0x8022D058: beq         $v0, $zero, L_8022D078
    if (ctx->r2 == 0) {
        // 0x8022D05C: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_8022D078;
    }
    // 0x8022D05C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022D060: beq         $a1, $v0, L_8022D094
    if (ctx->r5 == ctx->r2) {
        // 0x8022D064: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_8022D094;
    }
    // 0x8022D064: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022D068: beq         $a1, $v0, L_8022D0A4
    if (ctx->r5 == ctx->r2) {
        // 0x8022D06C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D0A4;
    }
    // 0x8022D06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D070: j           L_8022D2A0
    // 0x8022D074: nop

        goto L_8022D2A0;
    // 0x8022D074: nop

L_8022D078:
    // 0x8022D078: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x8022D07C: beq         $a1, $v0, L_8022D0D0
    if (ctx->r5 == ctx->r2) {
        // 0x8022D080: addiu       $v0, $zero, 0xC3
        ctx->r2 = ADD32(0, 0XC3);
            goto L_8022D0D0;
    }
    // 0x8022D080: addiu       $v0, $zero, 0xC3
    ctx->r2 = ADD32(0, 0XC3);
    // 0x8022D084: beq         $a1, $v0, L_8022D0E0
    if (ctx->r5 == ctx->r2) {
        // 0x8022D088: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D0E0;
    }
    // 0x8022D088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D08C: j           L_8022D2A0
    // 0x8022D090: nop

        goto L_8022D2A0;
    // 0x8022D090: nop

L_8022D094:
    // 0x8022D094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D098: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D09C: j           L_8022D298
    // 0x8022D0A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022D298;
    // 0x8022D0A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022D0A4:
    // 0x8022D0A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0A8: j           L_8022D298
    // 0x8022D0AC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_8022D298;
    // 0x8022D0AC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_8022D0B0:
    // 0x8022D0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0B8: jal         0x8022D2B4
    // 0x8022D0BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022D0BC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x8022D0C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0C8: j           L_8022D298
    // 0x8022D0CC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_8022D298;
    // 0x8022D0CC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8022D0D0:
    // 0x8022D0D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0D8: j           L_8022D298
    // 0x8022D0DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_8022D298;
    // 0x8022D0DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_8022D0E0:
    // 0x8022D0E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0E4: j           L_8022D298
    // 0x8022D0E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022D298;
    // 0x8022D0E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022D0EC:
    // 0x8022D0EC: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D0F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2A0;
    }
    // 0x8022D0F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D0F4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8022D0F8: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D0FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022D0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D100: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D104: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8022D108: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D10C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D110: jal         0x8022D2B4
    // 0x8022D114: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022D114: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_8:
    // 0x8022D118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D11C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D120: j           L_8022D258
    // 0x8022D124: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8022D258;
    // 0x8022D124: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D128:
    // 0x8022D128: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022D12C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022D130: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D134: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022D134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D138: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D13C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8022D140: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D144: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D148: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022D14C: j           L_8022D244
    // 0x8022D150: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8022D244;
    // 0x8022D150: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022D154:
    // 0x8022D154: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D158: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D15C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022D160: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022D164: beq         $a1, $v0, L_8022D1CC
    if (ctx->r5 == ctx->r2) {
        // 0x8022D168: slti        $v0, $a1, 0x65
        ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
            goto L_8022D1CC;
    }
    // 0x8022D168: slti        $v0, $a1, 0x65
    ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
    // 0x8022D16C: beq         $v0, $zero, L_8022D18C
    if (ctx->r2 == 0) {
        // 0x8022D170: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8022D18C;
    }
    // 0x8022D170: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022D174: beq         $a1, $v0, L_8022D1A0
    if (ctx->r5 == ctx->r2) {
        // 0x8022D178: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022D1A0;
    }
    // 0x8022D178: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022D17C: beq         $a1, $v0, L_8022D1C0
    if (ctx->r5 == ctx->r2) {
        // 0x8022D180: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D1C0;
    }
    // 0x8022D180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D184: j           L_8022D2A0
    // 0x8022D188: nop

        goto L_8022D2A0;
    // 0x8022D188: nop

L_8022D18C:
    // 0x8022D18C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022D190: beq         $a1, $v0, L_8022D23C
    if (ctx->r5 == ctx->r2) {
        // 0x8022D194: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D23C;
    }
    // 0x8022D194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D198: j           L_8022D2A0
    // 0x8022D19C: nop

        goto L_8022D2A0;
    // 0x8022D19C: nop

L_8022D1A0:
    // 0x8022D1A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D1A8: jal         0x8022D2B4
    // 0x8022D1AC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022D1AC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_9:
    // 0x8022D1B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D1B8: j           L_8022D298
    // 0x8022D1BC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8022D298;
    // 0x8022D1BC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D1C0:
    // 0x8022D1C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D1C4: j           L_8022D298
    // 0x8022D1C8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_8022D298;
    // 0x8022D1C8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_8022D1CC:
    // 0x8022D1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D1D4: j           L_8022D298
    // 0x8022D1D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8022D298;
    // 0x8022D1D8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D1DC:
    // 0x8022D1DC: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022D1E0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D1E4: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D1E8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022D2A0;
    }
    // 0x8022D1E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D1EC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D1F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D1F4: j           L_8022D260
    // 0x8022D1F8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_8022D260;
    // 0x8022D1F8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022D1FC:
    // 0x8022D1FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D200: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D204: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8022D208: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x8022D20C: bne         $a1, $v0, L_8022D234
    if (ctx->r5 != ctx->r2) {
        // 0x8022D210: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_8022D234;
    }
    // 0x8022D210: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022D214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D218: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D21C: jal         0x8022D2B4
    // 0x8022D220: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_10;
    // 0x8022D220: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_10:
    // 0x8022D224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D228: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D22C: j           L_8022D298
    // 0x8022D230: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_8022D298;
    // 0x8022D230: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D234:
    // 0x8022D234: bne         $a1, $v0, L_8022D2A0
    if (ctx->r5 != ctx->r2) {
        // 0x8022D238: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022D238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D23C:
    // 0x8022D23C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D240: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8022D244:
    // 0x8022D244: jal         0x8022D2B4
    // 0x8022D248: nop

    func_8022D2B4_ovl25(rdram, ctx);
        goto after_11;
    // 0x8022D248: nop

    after_11:
    // 0x8022D24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D250: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D254: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_8022D258:
    // 0x8022D258: jal         0x8022D2DC
    // 0x8022D25C: nop

    func_8022D2DC_ovl25(rdram, ctx);
        goto after_12;
    // 0x8022D25C: nop

    after_12:
L_8022D260:
    // 0x8022D260: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D268: j           L_8022D2A0
    // 0x8022D26C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D2A0;
    // 0x8022D26C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D270:
    // 0x8022D270: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8022D274: addiu       $v0, $zero, 0xF3
    ctx->r2 = ADD32(0, 0XF3);
    // 0x8022D278: bne         $v1, $v0, L_8022D2A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D27C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D2A0;
    }
    // 0x8022D27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D280: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D284: jal         0x8022D2B4
    // 0x8022D288: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022D2B4_ovl25(rdram, ctx);
        goto after_13;
    // 0x8022D288: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_13:
    // 0x8022D28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D290: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022D298:
    // 0x8022D298: jal         0x8022D2DC
    // 0x8022D29C: nop

    func_8022D2DC_ovl25(rdram, ctx);
        goto after_14;
    // 0x8022D29C: nop

    after_14:
L_8022D2A0:
    // 0x8022D2A0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D2A4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D2A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D2AC: jr          $ra
    // 0x8022D2B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D2B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227114_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227118: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022711C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227124: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227128: jal         0x800A3450
    // 0x8022712C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022712C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80227130: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x80227134: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80227138: bne         $v1, $zero, L_802271C0
    if (ctx->r3 != 0) {
        // 0x8022713C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802271C0;
    }
    // 0x8022713C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227140: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80227144: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x80227148: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022714C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80227150: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227154: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227158: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022715C: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80227160: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80227164: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80227168: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022716C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227170: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227174: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x80227178: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022717C: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80227180: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80227184: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227188: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022718C: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x80227190: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x80227194: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x80227198: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022719C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802271A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802271A4: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x802271A8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802271AC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802271B0: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x802271B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802271B8: j           L_80227210
    // 0x802271BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80227210;
    // 0x802271BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_802271C0:
    // 0x802271C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802271C4: bne         $v1, $v0, L_80227210
    if (ctx->r3 != ctx->r2) {
        // 0x802271C8: nop
    
            goto L_80227210;
    }
    // 0x802271C8: nop

    // 0x802271CC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802271D0: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x802271D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802271D8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802271DC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802271E0: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x802271E4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802271E8: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x802271EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271F0: bne         $a0, $zero, L_80227210
    if (ctx->r4 != 0) {
        // 0x802271F4: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_80227210;
    }
    // 0x802271F4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x802271F8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x802271FC: slti        $v0, $v0, 0x12D
    ctx->r2 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x80227200: bnel        $v0, $zero, L_80227210
    if (ctx->r2 != 0) {
        // 0x80227204: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_80227210;
    }
    goto skip_0;
    // 0x80227204: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x80227208: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022720C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80227210:
    // 0x80227210: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227214: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227218: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022721C: jr          $ra
    // 0x80227220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A42C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A42C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A430: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A434: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022A438: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A43C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022A440: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A444: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A448: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A44C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022A450:
    // 0x8022A450: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A454: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x8022A458: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022A45C: beq         $v0, $zero, L_8022A48C
    if (ctx->r2 == 0) {
        // 0x8022A460: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022A48C;
    }
    // 0x8022A460: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A464: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A468: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A46C:
    // 0x8022A46C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022A470: jal         0x8022A59C
    // 0x8022A474: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022A59C_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022A474: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022A478: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022A47C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022A480: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022A484: bne         $v0, $zero, L_8022A46C
    if (ctx->r2 != 0) {
        // 0x8022A488: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022A46C;
    }
    // 0x8022A488: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A48C:
    // 0x8022A48C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A490: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A494: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A498: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022A49C: beq         $v0, $zero, L_8022A4A8
    if (ctx->r2 == 0) {
        // 0x8022A4A0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022A4A8;
    }
    // 0x8022A4A0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A4A4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022A4A8:
    // 0x8022A4A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022A4AC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A4B0: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x8022A4B4: bne         $v0, $zero, L_8022A450
    if (ctx->r2 != 0) {
        // 0x8022A4B8: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022A450;
    }
    // 0x8022A4B8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A4BC: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8022A4C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A4C4: sh          $v0, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r2;
    // 0x8022A4C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A4CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A4D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A4D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4DC: jr          $ra
    // 0x8022A4E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A4E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DD64_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DD68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DD6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DD74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DD78: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DD7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DD80: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DD84: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DD88: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DD8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DD90: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DD94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DD98: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DD9C: jal         0x8004D5D4
    // 0x8022DDA0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022DDA0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022DDA4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DDA8: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8022DDAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DDB0: beq         $v1, $v0, L_8022DE08
    if (ctx->r3 == ctx->r2) {
        // 0x8022DDB4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022DE08;
    }
    // 0x8022DDB4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022DDB8: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8022DDBC: beq         $v0, $zero, L_8022DDD4
    if (ctx->r2 == 0) {
        // 0x8022DDC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DDD4;
    }
    // 0x8022DDC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DDC4: beq         $v1, $v0, L_8022DDF0
    if (ctx->r3 == ctx->r2) {
        // 0x8022DDC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DDF0;
    }
    // 0x8022DDC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DDCC: j           L_8022DE78
    // 0x8022DDD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_8022DE78;
    // 0x8022DDD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8022DDD4:
    // 0x8022DDD4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DDD8: beq         $v1, $v0, L_8022DE2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DDDC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022DE2C;
    }
    // 0x8022DDDC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022DDE0: beq         $v1, $v0, L_8022DE50
    if (ctx->r3 == ctx->r2) {
        // 0x8022DDE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DE50;
    }
    // 0x8022DDE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DDE8: j           L_8022DE78
    // 0x8022DDEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_8022DE78;
    // 0x8022DDEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8022DDF0:
    // 0x8022DDF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DDF4: jal         0x80050294
    // 0x8022DDF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022DDF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022DDFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DE00: j           L_8022DE70
    // 0x8022DE04: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DE70;
    // 0x8022DE04: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DE08:
    // 0x8022DE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022DE10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DE14: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x8022DE18: jal         0x80050294
    // 0x8022DE1C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022DE1C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022DE20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DE24: j           L_8022DE70
    // 0x8022DE28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DE70;
    // 0x8022DE28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DE2C:
    // 0x8022DE2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022DE34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DE38: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8022DE3C: jal         0x80050294
    // 0x8022DE40: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022DE40: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022DE44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DE48: j           L_8022DE70
    // 0x8022DE4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DE70;
    // 0x8022DE4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DE50:
    // 0x8022DE50: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022DE54: jal         0x80050294
    // 0x8022DE58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022DE58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022DE5C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DE60: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022DE64: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022DE68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022DE70:
    // 0x8022DE70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_8022DE78:
    // 0x8022DE78: jal         0x8022E378
    // 0x8022DE7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022E378_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022DE7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022DE80: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DE84: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DE88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE8C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022DE90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DE94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE9C: jr          $ra
    // 0x8022DEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227C24_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C30: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80227C34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227C3C: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x80227C40: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x80227C44: sh          $zero, 0x10($v1)
    MEM_H(0X10, ctx->r3) = 0;
    // 0x80227C48: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80227C4C: sh          $v0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r2;
    // 0x80227C50: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80227C54: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227C58: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227C5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C60: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227C64: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80227C68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227C6C: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80227C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C74: addiu       $a0, $v1, 0x30
    ctx->r4 = ADD32(ctx->r3, 0X30);
    // 0x80227C78: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x80227C7C: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    // 0x80227C80: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x80227C84: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x80227C88: sh          $zero, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = 0;
    // 0x80227C8C: sh          $zero, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = 0;
    // 0x80227C90: sh          $zero, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = 0;
    // 0x80227C94: sh          $zero, 0x24($v1)
    MEM_H(0X24, ctx->r3) = 0;
    // 0x80227C98: sh          $zero, 0x22($v1)
    MEM_H(0X22, ctx->r3) = 0;
    // 0x80227C9C: sh          $zero, 0x20($v1)
    MEM_H(0X20, ctx->r3) = 0;
    // 0x80227CA0: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x80227CA4: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x80227CA8: jal         0x800540BC
    // 0x80227CAC: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_0;
    // 0x80227CAC: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    after_0:
    // 0x80227CB0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227CBC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227CC0: jal         0x8004D5D4
    // 0x80227CC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80227CC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227CC8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227CCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227CD0: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80227CD4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80227CD8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227CDC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227CE0: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227CE4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227CE8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227CEC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227CF0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227CF4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227CF8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227CFC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227D00: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227D04: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80227D08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227D0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227D10: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80227D14: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x80227D18: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227D1C: addiu       $v0, $v0, -0x235C
    ctx->r2 = ADD32(ctx->r2, -0X235C);
    // 0x80227D20: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80227D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227D2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227D30: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227D34: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80227D38: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227D3C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80227D40: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80227D44: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80227D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D50: jr          $ra
    // 0x80227D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E078_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E078: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E07C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022E080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E084: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E088: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E08C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E090: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E094: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022E098: beq         $v1, $v0, L_8022E0FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E09C: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8022E0FC;
    }
    // 0x8022E09C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E0A0: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x8022E0A4: beq         $v0, $zero, L_8022E0C4
    if (ctx->r2 == 0) {
        // 0x8022E0A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E0C4;
    }
    // 0x8022E0A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0AC: beq         $v1, $v0, L_8022E0FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0B0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E0FC;
    }
    // 0x8022E0B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E0B4: beq         $v1, $v0, L_8022E114
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E114;
    }
    // 0x8022E0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0BC: j           L_8022E178
    // 0x8022E0C0: nop

        goto L_8022E178;
    // 0x8022E0C0: nop

L_8022E0C4:
    // 0x8022E0C4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E0C8: beq         $v1, $v0, L_8022E134
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0CC: slti        $v0, $v1, 0x79
        ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
            goto L_8022E134;
    }
    // 0x8022E0CC: slti        $v0, $v1, 0x79
    ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x8022E0D0: beq         $v0, $zero, L_8022E0E8
    if (ctx->r2 == 0) {
        // 0x8022E0D4: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022E0E8;
    }
    // 0x8022E0D4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022E0D8: beq         $v1, $v0, L_8022E120
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E120;
    }
    // 0x8022E0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0E0: j           L_8022E178
    // 0x8022E0E4: nop

        goto L_8022E178;
    // 0x8022E0E4: nop

L_8022E0E8:
    // 0x8022E0E8: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022E0EC: beq         $v1, $v0, L_8022E160
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E160;
    }
    // 0x8022E0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0F4: j           L_8022E178
    // 0x8022E0F8: nop

        goto L_8022E178;
    // 0x8022E0F8: nop

L_8022E0FC:
    // 0x8022E0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E100: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E104: jal         0x8022E378
    // 0x8022E108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8022E378_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022E108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022E10C: j           L_8022E178
    // 0x8022E110: nop

        goto L_8022E178;
    // 0x8022E110: nop

L_8022E114:
    // 0x8022E114: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E118: j           L_8022E150
    // 0x8022E11C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_8022E150;
    // 0x8022E11C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_8022E120:
    // 0x8022E120: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022E124: jal         0x80050294
    // 0x8022E128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022E128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022E12C: j           L_8022E178
    // 0x8022E130: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8022E178;
    // 0x8022E130: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022E134:
    // 0x8022E134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E138: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022E13C: jal         0x80050294
    // 0x8022E140: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022E140: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022E144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E148: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022E150:
    // 0x8022E150: jal         0x8022E378
    // 0x8022E154: nop

    func_8022E378_ovl25(rdram, ctx);
        goto after_3;
    // 0x8022E154: nop

    after_3:
    // 0x8022E158: j           L_8022E178
    // 0x8022E15C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8022E178;
    // 0x8022E15C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022E160:
    // 0x8022E160: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E164: jal         0x8022E378
    // 0x8022E168: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8022E378_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022E168: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_4:
    // 0x8022E16C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E174: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022E178:
    // 0x8022E178: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E17C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E184: jr          $ra
    // 0x8022E188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D2DC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D2E0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022D2E4: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022D2E8: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022D2EC: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022D2F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D2F4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022D2F8: lw          $v0, -0x19EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19EC);
    // 0x8022D2FC: jr          $ra
    // 0x8022D300: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D300: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80236DA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DA0: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80236DA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236DA8: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80236DAC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236DB0: bne         $v0, $zero, L_80236E20
    if (ctx->r2 != 0) {
        // 0x80236DB4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80236E20;
    }
    // 0x80236DB4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80236DB8: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80236DBC: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x80236DC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236DC4: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80236DC8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236DCC: sra         $v0, $v0, 23
    ctx->r2 = S32(SIGNED(ctx->r2) >> 23);
    // 0x80236DD0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236DD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236DD8: lbu         $v1, -0x1080($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1080);
    // 0x80236DDC: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x80236DE0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236DE4: sb          $v1, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r3;
    // 0x80236DE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236DEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236DF0: lbu         $v0, -0x107F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X107F);
    // 0x80236DF4: lb          $v1, 0xF($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XF);
    // 0x80236DF8: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80236DFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236E00: bne         $v1, $v0, L_80236E18
    if (ctx->r3 != ctx->r2) {
        // 0x80236E04: lui         $v0, 0x3D48
        ctx->r2 = S32(0X3D48 << 16);
            goto L_80236E18;
    }
    // 0x80236E04: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80236E08: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80236E0C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80236E10: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80236E14: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
L_80236E18:
    // 0x80236E18: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80236E1C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_80236E20:
    // 0x80236E20: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x80236E24: lb          $v1, 0xF($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XF);
    // 0x80236E28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236E2C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80236E30: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80236E34: bne         $v1, $v0, L_80236E40
    if (ctx->r3 != ctx->r2) {
        // 0x80236E38: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236E40;
    }
    // 0x80236E38: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236E3C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80236E40:
    // 0x80236E40: jr          $ra
    // 0x80236E44: nop

    TRACE_RETURN()
    return;
    // 0x80236E44: nop

;}
RECOMP_FUNC void func_8022E18C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E18C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E190: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E194: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E19C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E1A0: bne         $v0, $zero, L_8022E1BC
    if (ctx->r2 != 0) {
        // 0x8022E1A4: addiu       $a1, $s0, 0x4E0
        ctx->r5 = ADD32(ctx->r16, 0X4E0);
            goto L_8022E1BC;
    }
    // 0x8022E1A4: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E1A8: jal         0x8022E378
    // 0x8022E1AC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8022E378_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022E1AC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x8022E1B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E1B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E1B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E1BC:
    // 0x8022E1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E1C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E1C4: jr          $ra
    // 0x8022E1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232E24_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232E28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232E30: jal         0x8005044C
    // 0x80232E34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80232E34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232E38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232E3C: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x80232E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232E44: bne         $v1, $v0, L_80232E58
    if (ctx->r3 != ctx->r2) {
        // 0x80232E48: nop
    
            goto L_80232E58;
    }
    // 0x80232E48: nop

    // 0x80232E4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232E58:
    // 0x80232E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232E5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E60: jr          $ra
    // 0x80232E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023424C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023424C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234250: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234258: jal         0x8004F144
    // 0x8023425C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023425C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80234260: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80234264: beql        $a1, $zero, L_80234298
    if (ctx->r5 == 0) {
        // 0x80234268: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80234298;
    }
    goto skip_0;
    // 0x80234268: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8023426C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80234270: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234274: beq         $v0, $zero, L_8023428C
    if (ctx->r2 == 0) {
        // 0x80234278: nop
    
            goto L_8023428C;
    }
    // 0x80234278: nop

    // 0x8023427C: jal         0x802342B0
    // 0x80234280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802342B0_ovl25(rdram, ctx);
        goto after_1;
    // 0x80234280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234284: j           L_80234298
    // 0x80234288: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80234298;
    // 0x80234288: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8023428C:
    // 0x8023428C: jal         0x802342F0
    // 0x80234290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802342F0_ovl25(rdram, ctx);
        goto after_2;
    // 0x80234290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234294: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80234298:
    // 0x80234298: jal         0x8004F4F8
    // 0x8023429C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8023429C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802342A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802342A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802342A8: jr          $ra
    // 0x802342AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802342AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
