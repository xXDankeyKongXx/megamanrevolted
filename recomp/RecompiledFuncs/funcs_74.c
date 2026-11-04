#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022D2F0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2F0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022D2F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D2F8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022D2FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D300: bne         $v0, $zero, L_8022D30C
    if (ctx->r2 != 0) {
        // 0x8022D304: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D30C;
    }
    // 0x8022D304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D308: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D30C:
    // 0x8022D30C: jr          $ra
    // 0x8022D310: nop

    TRACE_RETURN()
    return;
    // 0x8022D310: nop

;}
RECOMP_FUNC void func_80225D8C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D8C: jr          $ra
    // 0x80225D90: nop

    TRACE_RETURN()
    return;
    // 0x80225D90: nop

;}
RECOMP_FUNC void func_802251B4_ovl7(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251C4: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251E4
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E4;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, 0x70DC
    ctx->r5 = ADD32(ctx->r5, 0X70DC);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, 0x70DC
    ctx->r5 = ADD32(ctx->r5, 0X70DC);
L_802251E4:
    // 0x802251E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251EC:
    // 0x802251EC: jal         0x80037D80
    // 0x802251F0: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F0: nop

    after_0:
    // 0x802251F4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251F8: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225200: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225204: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225208: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022520C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225210: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225214: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225218: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8022521C: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225220: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225224: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x80225228: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8022522C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225230: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225234: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022523C: sb          $a1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r5;
    // 0x80225240: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225244: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225248: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022524C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80225250: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225254: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225258: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022525C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225260: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225264: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225268: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022526C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225274: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225278: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022527C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225280: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80225284: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225288: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022528C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225290: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225294: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225298: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x8022529C: bne         $v1, $zero, L_80225344
    if (ctx->r3 != 0) {
        // 0x802252A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225344;
    }
    // 0x802252A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252A4: beq         $t1, $v0, L_802252E4
    if (ctx->r9 == ctx->r2) {
        // 0x802252A8: slti        $v0, $t1, 0x2
        ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
            goto L_802252E4;
    }
    // 0x802252A8: slti        $v0, $t1, 0x2
    ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x802252AC: beql        $v0, $zero, L_802252C4
    if (ctx->r2 == 0) {
        // 0x802252B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802252C4;
    }
    goto skip_0;
    // 0x802252B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802252B4: beq         $t1, $zero, L_802252CC
    if (ctx->r9 == 0) {
        // 0x802252B8: nop
    
            goto L_802252CC;
    }
    // 0x802252B8: nop

    // 0x802252BC: j           L_8022539C
    // 0x802252C0: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
        goto L_8022539C;
    // 0x802252C0: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
L_802252C4:
    // 0x802252C4: bnel        $t1, $v0, L_8022539C
    if (ctx->r9 != ctx->r2) {
        // 0x802252C8: sb          $zero, 0x44E($s0)
        MEM_B(0X44E, ctx->r16) = 0;
            goto L_8022539C;
    }
    goto skip_1;
    // 0x802252C8: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
    skip_1:
L_802252CC:
    // 0x802252CC: jal         0x8006033C
    // 0x802252D0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802252D0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_1:
    // 0x802252D4: beql        $v0, $zero, L_8022539C
    if (ctx->r2 == 0) {
        // 0x802252D8: sb          $zero, 0x44E($s0)
        MEM_B(0X44E, ctx->r16) = 0;
            goto L_8022539C;
    }
    goto skip_2;
    // 0x802252D8: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
    skip_2:
    // 0x802252DC: j           L_80225398
    // 0x802252E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225398;
    // 0x802252E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802252E4:
    // 0x802252E4: jal         0x8006033C
    // 0x802252E8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802252E8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_2:
    // 0x802252EC: beq         $v0, $zero, L_8022531C
    if (ctx->r2 == 0) {
        // 0x802252F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022531C;
    }
    // 0x802252F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252F8: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x802252FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225300: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225304: sb          $v0, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r2;
    // 0x80225308: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022530C: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x80225310: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225314: j           L_8022539C
    // 0x80225318: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
        goto L_8022539C;
    // 0x80225318: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_8022531C:
    // 0x8022531C: jal         0x8006033C
    // 0x80225320: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225320: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x80225324: bne         $v0, $zero, L_8022539C
    if (ctx->r2 != 0) {
        // 0x80225328: nop
    
            goto L_8022539C;
    }
    // 0x80225328: nop

    // 0x8022532C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225330: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225334: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x80225338: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022533C: j           L_8022539C
    // 0x80225340: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8022539C;
    // 0x80225340: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80225344:
    // 0x80225344: beq         $t1, $v0, L_80225374
    if (ctx->r9 == ctx->r2) {
        // 0x80225348: slti        $v0, $t1, 0x2
        ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
            goto L_80225374;
    }
    // 0x80225348: slti        $v0, $t1, 0x2
    ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x8022534C: beql        $v0, $zero, L_80225364
    if (ctx->r2 == 0) {
        // 0x80225350: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225364;
    }
    goto skip_3;
    // 0x80225350: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_3:
    // 0x80225354: beq         $t1, $zero, L_80225398
    if (ctx->r9 == 0) {
        // 0x80225358: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225398;
    }
    // 0x80225358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022535C: j           L_8022539C
    // 0x80225360: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
        goto L_8022539C;
    // 0x80225360: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
L_80225364:
    // 0x80225364: beq         $t1, $v0, L_80225398
    if (ctx->r9 == ctx->r2) {
        // 0x80225368: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225398;
    }
    // 0x80225368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022536C: j           L_8022539C
    // 0x80225370: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
        goto L_8022539C;
    // 0x80225370: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
L_80225374:
    // 0x80225374: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225378: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022537C: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x80225380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225384: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225388: sb          $v0, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r2;
    // 0x8022538C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225390: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x80225394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225398:
    // 0x80225398: sb          $v0, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = ctx->r2;
L_8022539C:
    // 0x8022539C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802253A0: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802253A4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253A8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802253AC: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802253B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253B8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253BC: lw          $a0, 0x6B3C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6B3C);
    // 0x802253C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253C8: lw          $v0, 0x6DA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6DA0);
    // 0x802253CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253D0: jal         0x8004C790
    // 0x802253D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_4;
    // 0x802253D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_4:
    // 0x802253D8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253E0: addiu       $a0, $a0, 0x6E30
    ctx->r4 = ADD32(ctx->r4, 0X6E30);
    // 0x802253E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802253E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253F0: lw          $v1, 0x7030($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7030);
    // 0x802253F4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802253F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802253FC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225400: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225404: addiu       $v0, $v0, 0x6DC4
    ctx->r2 = ADD32(ctx->r2, 0X6DC4);
    // 0x80225408: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022540C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225410: jal         0x80054FB8
    // 0x80225414: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_5;
    // 0x80225414: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_5:
    // 0x80225418: jal         0x8004A614
    // 0x8022541C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_6;
    // 0x8022541C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x80225420: jal         0x80225470
    // 0x80225424: nop

    func_80225470_ovl7(rdram, ctx);
        goto after_7;
    // 0x80225424: nop

    after_7:
    // 0x80225428: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022542C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225430: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225434: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225438: lw          $v1, 0x705C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X705C);
    // 0x8022543C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225444: lw          $v0, 0x7060($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7060);
    // 0x80225448: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8022544C: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x80225450: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80225454: sw          $v0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r2;
    // 0x80225458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022545C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225460: jr          $ra
    // 0x80225464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225468: nop

    // 0x8022546C: nop

;}
RECOMP_FUNC void func_80225B6C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B7C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B80: bne         $v0, $zero, L_80225B98
    if (ctx->r2 != 0) {
        // 0x80225B84: nop
    
            goto L_80225B98;
    }
    // 0x80225B84: nop

    // 0x80225B88: jal         0x802283FC
    // 0x80225B8C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225B8C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x80225B90: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B94: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225B98:
    // 0x80225B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BA0: jr          $ra
    // 0x80225BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234890_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023489C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802348A0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802348A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802348A8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802348AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802348B0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802348B4: beq         $v1, $v0, L_802348F4
    if (ctx->r3 == ctx->r2) {
        // 0x802348B8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802348F4;
    }
    // 0x802348B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802348BC: beql        $v0, $zero, L_802348D4
    if (ctx->r2 == 0) {
        // 0x802348C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802348D4;
    }
    goto skip_0;
    // 0x802348C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802348C4: beq         $v1, $zero, L_802348E4
    if (ctx->r3 == 0) {
        // 0x802348C8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802348E4;
    }
    // 0x802348C8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802348CC: j           L_80234930
    // 0x802348D0: nop

        goto L_80234930;
    // 0x802348D0: nop

L_802348D4:
    // 0x802348D4: beq         $v1, $v0, L_8023491C
    if (ctx->r3 == ctx->r2) {
        // 0x802348D8: nop
    
            goto L_8023491C;
    }
    // 0x802348D8: nop

    // 0x802348DC: j           L_80234930
    // 0x802348E0: nop

        goto L_80234930;
    // 0x802348E0: nop

L_802348E4:
    // 0x802348E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802348E8: sh          $zero, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = 0;
    // 0x802348EC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802348F0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_802348F4:
    // 0x802348F4: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x802348F8: bne         $v0, $s0, L_80234930
    if (ctx->r2 != ctx->r16) {
        // 0x802348FC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234930;
    }
    // 0x802348FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234900: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80234904: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234908: jal         0x800610AC
    // 0x8023490C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8023490C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80234910: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80234914: j           L_8023492C
    // 0x80234918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023492C;
    // 0x80234918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023491C:
    // 0x8023491C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80234920: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80234924: bne         $v0, $zero, L_80234930
    if (ctx->r2 != 0) {
        // 0x80234928: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_80234930;
    }
    // 0x80234928: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
L_8023492C:
    // 0x8023492C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80234930:
    // 0x80234930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234938: jr          $ra
    // 0x8023493C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023493C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802289CC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802289D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802289D4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802289D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802289DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802289E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802289E4: lw          $v0, -0x7750($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7750);
    // 0x802289E8: jalr        $v0
    // 0x802289EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802289EC: nop

    after_0:
    // 0x802289F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802289F4: jr          $ra
    // 0x802289F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A8E8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A8E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A8EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A8F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A8F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A8F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A8FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A900: beq         $v1, $zero, L_8022A91C
    if (ctx->r3 == 0) {
        // 0x8022A904: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A91C;
    }
    // 0x8022A904: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A90C: beq         $v1, $v0, L_8022A92C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A910: nop
    
            goto L_8022A92C;
    }
    // 0x8022A910: nop

    // 0x8022A914: j           L_8022A9A8
    // 0x8022A918: nop

        goto L_8022A9A8;
    // 0x8022A918: nop

L_8022A91C:
    // 0x8022A91C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A920: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A924: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A928: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022A92C:
    // 0x8022A92C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A930: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022A934: beq         $v0, $zero, L_8022A95C
    if (ctx->r2 == 0) {
        // 0x8022A938: nop
    
            goto L_8022A95C;
    }
    // 0x8022A938: nop

    // 0x8022A93C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022A940: bne         $v0, $zero, L_8022A95C
    if (ctx->r2 != 0) {
        // 0x8022A944: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_8022A95C;
    }
    // 0x8022A944: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A948: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A94C: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A950: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A954: j           L_8022A970
    // 0x8022A958: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
        goto L_8022A970;
    // 0x8022A958: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
L_8022A95C:
    // 0x8022A95C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A960: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A964: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A968: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A96C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
L_8022A970:
    // 0x8022A970: jal         0x8004F820
    // 0x8022A974: nop

    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A974: nop

    after_0:
    // 0x8022A978: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A97C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A980: bne         $v0, $zero, L_8022A998
    if (ctx->r2 != 0) {
        // 0x8022A984: nop
    
            goto L_8022A998;
    }
    // 0x8022A984: nop

    // 0x8022A988: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A98C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A990: j           L_8022A9A8
    // 0x8022A994: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022A9A8;
    // 0x8022A994: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A998:
    // 0x8022A998: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A99C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A9A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A9A4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A9A8:
    // 0x8022A9A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A9AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A9B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A9B4: jr          $ra
    // 0x8022A9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B590_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B590: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B594: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022B598: beq         $v0, $zero, L_8022B674
    if (ctx->r2 == 0) {
        // 0x8022B59C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022B674;
    }
    // 0x8022B59C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022B5A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B5A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B5A8: addu        $at, $at, $v0
    gpr jr_addend_8022B5B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B5AC: lw          $v0, -0x61F8($at)
    ctx->r2 = ADD32(ctx->r1, -0X61F8);
    // 0x8022B5B0: jr          $v0
    // 0x8022B5B4: nop

    switch (jr_addend_8022B5B0 >> 2) {
        case 0: goto L_8022B674; break;
        case 1: goto L_8022B5B8; break;
        case 2: goto L_8022B5EC; break;
        case 3: goto L_8022B674; break;
        case 4: goto L_8022B624; break;
        case 5: goto L_8022B63C; break;
        default: switch_error(__func__, 0x8022B5B0, 0x80239E08);
    }
    // 0x8022B5B4: nop

L_8022B5B8:
    // 0x8022B5B8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022B5BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B5C0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B5C4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B5C8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B5CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B5D0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B5D4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022B5D8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B5DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B5E0: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x8022B5E4: sb          $v0, 0x10B($a0)
    MEM_B(0X10B, ctx->r4) = ctx->r2;
    // 0x8022B5E8: sb          $v0, 0x10F($a0)
    MEM_B(0X10F, ctx->r4) = ctx->r2;
L_8022B5EC:
    // 0x8022B5EC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B5F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B5F4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B5F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B5FC: bgez        $v0, L_8022B618
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B600: nop
    
            goto L_8022B618;
    }
    // 0x8022B600: nop

    // 0x8022B604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B608: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B60C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B610: j           L_8022B674
    // 0x8022B614: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8022B674;
    // 0x8022B614: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022B618:
    // 0x8022B618: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022B61C: j           L_8022B670
    // 0x8022B620: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022B670;
    // 0x8022B620: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022B624:
    // 0x8022B624: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B628: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B62C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B630: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B634: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B638: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022B63C:
    // 0x8022B63C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B640: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B644: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B648: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B64C: bgez        $v0, L_8022B668
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B650: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022B668;
    }
    // 0x8022B650: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022B654: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022B658: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022B65C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B660: j           L_8022B674
    // 0x8022B664: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_8022B674;
    // 0x8022B664: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_8022B668:
    // 0x8022B668: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022B66C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8022B670:
    // 0x8022B670: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_8022B674:
    // 0x8022B674: jr          $ra
    // 0x8022B678: nop

    TRACE_RETURN()
    return;
    // 0x8022B678: nop

;}
RECOMP_FUNC void func_80225150_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x6598
    ctx->r2 = ADD32(ctx->r2, 0X6598);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x672C
    ctx->r2 = ADD32(ctx->r2, 0X672C);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x6730
    ctx->r2 = ADD32(ctx->r2, 0X6730);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x67B0
    ctx->r2 = ADD32(ctx->r2, 0X67B0);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x67D4
    ctx->r2 = ADD32(ctx->r2, 0X67D4);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x6828
    ctx->r2 = ADD32(ctx->r2, 0X6828);
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
RECOMP_FUNC void func_8022F248_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F24C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F250: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022F258: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F25C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F260: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F264: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022F268: beq         $v0, $zero, L_8022F408
    if (ctx->r2 == 0) {
        // 0x8022F26C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022F408;
    }
    // 0x8022F26C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F270: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F274: addu        $at, $at, $v0
    gpr jr_addend_8022F27C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F278: lw          $v0, -0x6130($at)
    ctx->r2 = ADD32(ctx->r1, -0X6130);
    // 0x8022F27C: jr          $v0
    // 0x8022F280: nop

    switch (jr_addend_8022F27C >> 2) {
        case 0: goto L_8022F284; break;
        case 1: goto L_8022F2C4; break;
        case 2: goto L_8022F3A0; break;
        case 3: goto L_8022F2FC; break;
        case 4: goto L_8022F340; break;
        case 5: goto L_8022F3A0; break;
        case 6: goto L_8022F368; break;
        case 7: goto L_8022F3A0; break;
        case 8: goto L_8022F3D0; break;
        default: switch_error(__func__, 0x8022F27C, 0x80239ED0);
    }
    // 0x8022F280: nop

L_8022F284:
    // 0x8022F284: jal         0x8022F42C
    // 0x8022F288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F42C_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022F288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022F28C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F290: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F298: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F29C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022F2A0: lw          $a1, -0x3A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A2C);
    // 0x8022F2A4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F2A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F2AC: jal         0x8004F820
    // 0x8022F2B0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022F2B0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x8022F2B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F2B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F2BC: j           L_8022F408
    // 0x8022F2C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022F408;
    // 0x8022F2C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022F2C4:
    // 0x8022F2C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F2C8: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022F2CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F2D0: bne         $v1, $v0, L_8022F40C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F2D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F40C;
    }
    // 0x8022F2D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F2D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022F2DC: jal         0x80050294
    // 0x8022F2E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F2E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022F2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F2E8: jal         0x800616FC
    // 0x8022F2EC: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022F2EC: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    after_3:
    // 0x8022F2F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F2F4: j           L_8022F3C4
    // 0x8022F2F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022F3C4;
    // 0x8022F2F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022F2FC:
    // 0x8022F2FC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F300: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022F304: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F308: bne         $v1, $v0, L_8022F40C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F30C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F40C;
    }
    // 0x8022F30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F310: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F314: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F318: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022F31C: jal         0x8004F820
    // 0x8022F320: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022F320: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022F324: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F328: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F32C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022F330: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F334: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F338: j           L_8022F408
    // 0x8022F33C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_8022F408;
    // 0x8022F33C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022F340:
    // 0x8022F340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F344: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022F348: jal         0x80050294
    // 0x8022F34C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F34C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022F350: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F354: jal         0x800616FC
    // 0x8022F358: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022F358: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_6:
    // 0x8022F35C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F360: j           L_8022F3C4
    // 0x8022F364: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022F3C4;
    // 0x8022F364: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022F368:
    // 0x8022F368: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022F36C: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022F370: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022F374: bne         $v1, $v0, L_8022F40C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F378: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F40C;
    }
    // 0x8022F378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F37C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022F380: jal         0x80050294
    // 0x8022F384: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022F384: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022F388: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F38C: jal         0x800616FC
    // 0x8022F390: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x8022F390: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    after_8:
    // 0x8022F394: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F398: j           L_8022F3C4
    // 0x8022F39C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022F3C4;
    // 0x8022F39C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022F3A0:
    // 0x8022F3A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F3A4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F3A8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F3AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F3B0: bne         $v0, $zero, L_8022F40C
    if (ctx->r2 != 0) {
        // 0x8022F3B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F40C;
    }
    // 0x8022F3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3B8: jal         0x800600F8
    // 0x8022F3BC: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_9;
    // 0x8022F3BC: nop

    after_9:
    // 0x8022F3C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8022F3C4:
    // 0x8022F3C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F3C8: j           L_8022F408
    // 0x8022F3CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022F408;
    // 0x8022F3CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F3D0:
    // 0x8022F3D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022F3D4: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8022F3D8: bne         $v0, $zero, L_8022F40C
    if (ctx->r2 != 0) {
        // 0x8022F3DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F40C;
    }
    // 0x8022F3DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3E0: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
    // 0x8022F3E4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022F3E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F3EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F3F0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022F3F4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022F3F8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022F3FC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022F400: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022F404: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022F408:
    // 0x8022F408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F40C:
    // 0x8022F40C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F410: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F414: jal         0x80047284
    // 0x8022F418: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022F418: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8022F41C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022F420: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F424: jr          $ra
    // 0x8022F428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230590_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023059C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802305A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802305A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802305A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802305AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802305B0: jal         0x8009A3B4
    // 0x802305B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802305B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x802305B8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802305BC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802305C0: jal         0x8009A3B4
    // 0x802305C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802305C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802305C8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802305CC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802305D0: jal         0x8009A3B4
    // 0x802305D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802305D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802305D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802305DC: jal         0x800A3450
    // 0x802305E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802305E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x802305E4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802305E8: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x802305EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802305F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802305F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802305F8: lw          $v0, -0x6CD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6CD4);
    // 0x802305FC: jalr        $v0
    // 0x80230600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230604: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230608: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023060C: beq         $v0, $zero, L_80230628
    if (ctx->r2 == 0) {
        // 0x80230610: nop
    
            goto L_80230628;
    }
    // 0x80230610: nop

    // 0x80230614: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230618: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023061C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80230620: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80230624: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80230628:
    // 0x80230628: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023062C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230630: beq         $v0, $a1, L_80230648
    if (ctx->r2 == ctx->r5) {
        // 0x80230634: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230648;
    }
    // 0x80230634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230638: jal         0x80050294
    // 0x8023063C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023063C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230640: j           L_80230650
    // 0x80230644: nop

        goto L_80230650;
    // 0x80230644: nop

L_80230648:
    // 0x80230648: jal         0x8005044C
    // 0x8023064C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023064C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80230650:
    // 0x80230650: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230654: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230658: beq         $v0, $zero, L_80230670
    if (ctx->r2 == 0) {
        // 0x8023065C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230670;
    }
    // 0x8023065C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230660: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80230664: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230668: jal         0x8003B564
    // 0x8023066C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8023066C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80230670:
    // 0x80230670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230674: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80230678: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023067C: jal         0x80047284
    // 0x80230680: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80230680: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80230684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230688: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023068C: jr          $ra
    // 0x80230690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235A80_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235A84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235A88: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80235A8C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80235A90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235A94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235A98: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80235A9C: lw          $v1, -0x65A0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X65A0);
    // 0x80235AA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AA8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80235AAC: jalr        $v0
    // 0x80235AB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235AB0: nop

    after_0:
    // 0x80235AB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235AB8: jr          $ra
    // 0x80235ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023635C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023635C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236364: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023636C: jal         0x8006033C
    // 0x80236370: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236370: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_0:
    // 0x80236374: beq         $v0, $zero, L_80236384
    if (ctx->r2 == 0) {
        // 0x80236378: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236384;
    }
    // 0x80236378: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023637C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236380: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80236384:
    // 0x80236384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023638C: jr          $ra
    // 0x80236390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6E4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C6E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C6EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C6F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C6F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C6F8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C6FC: bgez        $v0, L_8022C720
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C700: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C720;
    }
    // 0x8022C700: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C704: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C708: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022C70C: beq         $a0, $v0, L_8022C720
    if (ctx->r4 == ctx->r2) {
        // 0x8022C710: nop
    
            goto L_8022C720;
    }
    // 0x8022C710: nop

    // 0x8022C714: jal         0x8022E3A8
    // 0x8022C718: nop

    func_8022E3A8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C718: nop

    after_0:
    // 0x8022C71C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C720:
    // 0x8022C720: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022C724: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C728: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022C72C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C730: bne         $v0, $zero, L_8022C79C
    if (ctx->r2 != 0) {
        // 0x8022C734: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022C79C;
    }
    // 0x8022C734: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022C738: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C73C: bne         $a0, $v0, L_8022C754
    if (ctx->r4 != ctx->r2) {
        // 0x8022C740: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022C754;
    }
    // 0x8022C740: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022C744: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C748: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C74C: j           L_8022C76C
    // 0x8022C750: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C76C;
    // 0x8022C750: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C754:
    // 0x8022C754: jal         0x8022E3B8
    // 0x8022C758: nop

    func_8022E3B8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022C758: nop

    after_1:
    // 0x8022C75C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C760: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C764: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C768: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C76C:
    // 0x8022C76C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022C770: beq         $v0, $zero, L_8022C784
    if (ctx->r2 == 0) {
        // 0x8022C774: nop
    
            goto L_8022C784;
    }
    // 0x8022C774: nop

    // 0x8022C778: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022C77C: j           L_8022C794
    // 0x8022C780: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_8022C794;
    // 0x8022C780: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022C784:
    // 0x8022C784: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022C788: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022C78C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C790: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022C794:
    // 0x8022C794: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022C798: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022C79C:
    // 0x8022C79C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C7A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C7A8: jr          $ra
    // 0x8022C7AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C7AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F48_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F58: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F5C: bne         $v0, $zero, L_80225F74
    if (ctx->r2 != 0) {
        // 0x80225F60: nop
    
            goto L_80225F74;
    }
    // 0x80225F60: nop

    // 0x80225F64: jal         0x802283FC
    // 0x80225F68: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225F68: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x80225F6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F70: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F74:
    // 0x80225F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F7C: jr          $ra
    // 0x80225F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226254_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226258: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022625C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226264: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226268: bne         $v0, $zero, L_80226280
    if (ctx->r2 != 0) {
        // 0x8022626C: nop
    
            goto L_80226280;
    }
    // 0x8022626C: nop

    // 0x80226270: jal         0x802283FC
    // 0x80226274: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226274: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_0:
    // 0x80226278: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022627C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226280:
    // 0x80226280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226288: jr          $ra
    // 0x8022628C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022628C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C990_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C99C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C9A0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C9A4: addiu       $s1, $s1, -0x6E6C
    ctx->r17 = ADD32(ctx->r17, -0X6E6C);
    // 0x8022C9A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C9AC: jal         0x800A3450
    // 0x8022C9B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C9B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022C9B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C9B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C9BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9C0: lbu         $v1, -0x6E7C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6E7C);
    // 0x8022C9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9C8: beq         $v1, $v0, L_8022CA68
    if (ctx->r3 == ctx->r2) {
        // 0x8022C9CC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022CA68;
    }
    // 0x8022C9CC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C9D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C9D4: beql        $v0, $zero, L_8022C9EC
    if (ctx->r2 == 0) {
        // 0x8022C9D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C9EC;
    }
    goto skip_0;
    // 0x8022C9D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C9DC: beq         $v1, $zero, L_8022C9FC
    if (ctx->r3 == 0) {
        // 0x8022C9E0: nop
    
            goto L_8022C9FC;
    }
    // 0x8022C9E0: nop

    // 0x8022C9E4: j           L_8022CAB4
    // 0x8022C9E8: nop

        goto L_8022CAB4;
    // 0x8022C9E8: nop

L_8022C9EC:
    // 0x8022C9EC: beq         $v1, $v0, L_8022CA88
    if (ctx->r3 == ctx->r2) {
        // 0x8022C9F0: nop
    
            goto L_8022CA88;
    }
    // 0x8022C9F0: nop

    // 0x8022C9F4: j           L_8022CAB4
    // 0x8022C9F8: nop

        goto L_8022CAB4;
    // 0x8022C9F8: nop

L_8022C9FC:
    // 0x8022C9FC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022CA00: bne         $v0, $zero, L_8022CA14
    if (ctx->r2 != 0) {
        // 0x8022CA04: nop
    
            goto L_8022CA14;
    }
    // 0x8022CA04: nop

    // 0x8022CA08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CA0C: j           L_8022CA1C
    // 0x8022CA10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022CA1C;
    // 0x8022CA10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022CA14:
    // 0x8022CA14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CA18: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022CA1C:
    // 0x8022CA1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CA20: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022CA24: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022CA28: beq         $v0, $zero, L_8022CA44
    if (ctx->r2 == 0) {
        // 0x8022CA2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CA44;
    }
    // 0x8022CA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA30: jal         0x8022E3F8
    // 0x8022CA34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022E3F8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022CA34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8022CA38: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CA3C: j           L_8022CA58
    // 0x8022CA40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022CA58;
    // 0x8022CA40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CA44:
    // 0x8022CA44: jal         0x8022E3F8
    // 0x8022CA48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022E3F8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022CA48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022CA4C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CA50: jal         0x8022E3B8
    // 0x8022CA54: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022E3B8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022CA54: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_8022CA58:
    // 0x8022CA58: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022CA5C: addiu       $s1, $s1, -0x6E6C
    ctx->r17 = ADD32(ctx->r17, -0X6E6C);
    // 0x8022CA60: j           L_8022CAB4
    // 0x8022CA64: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022CAB4;
    // 0x8022CA64: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CA68:
    // 0x8022CA68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CA6C: jal         0x8022E3A8
    // 0x8022CA70: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_4;
    // 0x8022CA70: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8022CA74: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CA78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CA7C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022CA80: j           L_8022CAB4
    // 0x8022CA84: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022CAB4;
    // 0x8022CA84: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022CA88:
    // 0x8022CA88: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CA8C: jal         0x8022E3B8
    // 0x8022CA90: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022E3B8_ovl7(rdram, ctx);
        goto after_5;
    // 0x8022CA90: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x8022CA94: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CA98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CA9C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CAA0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022CAA4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CAA8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022CAAC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x8022CAB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CAB4:
    // 0x8022CAB4: jal         0x800A3450
    // 0x8022CAB8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022CAB8: nop

    after_6:
    // 0x8022CABC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022CAC0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022CAC4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CAC8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022CACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CAD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CAD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CADC: jr          $ra
    // 0x8022CAE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CAE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226164_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022616C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226174: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226178: bne         $v0, $zero, L_80226190
    if (ctx->r2 != 0) {
        // 0x8022617C: nop
    
            goto L_80226190;
    }
    // 0x8022617C: nop

    // 0x80226180: jal         0x802283FC
    // 0x80226184: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226184: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_0:
    // 0x80226188: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022618C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226190:
    // 0x80226190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226194: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226198: jr          $ra
    // 0x8022619C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022619C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234270_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234274: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234278: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023427C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234280: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234284: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234288: lw          $v0, -0x6A50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A50);
    // 0x8023428C: jalr        $v0
    // 0x80234290: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234290: nop

    after_0:
    // 0x80234294: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234298: jr          $ra
    // 0x8023429C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023429C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230440_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230448: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023044C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230450: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230458: lw          $v0, -0x6CE0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6CE0);
    // 0x8023045C: jalr        $v0
    // 0x80230460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230460: nop

    after_0:
    // 0x80230464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230468: jr          $ra
    // 0x8023046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B67C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B67C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B680: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B684: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B688: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B68C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B690: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B698: beq         $v1, $v0, L_8022B758
    if (ctx->r3 == ctx->r2) {
        // 0x8022B69C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B758;
    }
    // 0x8022B69C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B6A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B6A4: beql        $v0, $zero, L_8022B6BC
    if (ctx->r2 == 0) {
        // 0x8022B6A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B6BC;
    }
    goto skip_0;
    // 0x8022B6A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B6AC: beq         $v1, $zero, L_8022B6D4
    if (ctx->r3 == 0) {
        // 0x8022B6B0: nop
    
            goto L_8022B6D4;
    }
    // 0x8022B6B0: nop

    // 0x8022B6B4: j           L_8022B8BC
    // 0x8022B6B8: nop

        goto L_8022B8BC;
    // 0x8022B6B8: nop

L_8022B6BC:
    // 0x8022B6BC: beq         $v1, $v0, L_8022B844
    if (ctx->r3 == ctx->r2) {
        // 0x8022B6C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B844;
    }
    // 0x8022B6C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B6C4: beq         $v1, $v0, L_8022B870
    if (ctx->r3 == ctx->r2) {
        // 0x8022B6C8: nop
    
            goto L_8022B870;
    }
    // 0x8022B6C8: nop

    // 0x8022B6CC: j           L_8022B8BC
    // 0x8022B6D0: nop

        goto L_8022B8BC;
    // 0x8022B6D0: nop

L_8022B6D4:
    // 0x8022B6D4: jal         0x8004EFE4
    // 0x8022B6D8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022B6D8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_0:
    // 0x8022B6DC: bne         $v0, $zero, L_8022B6FC
    if (ctx->r2 != 0) {
        // 0x8022B6E0: sw          $v0, 0x380($s0)
        MEM_W(0X380, ctx->r16) = ctx->r2;
            goto L_8022B6FC;
    }
    // 0x8022B6E0: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x8022B6E4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022B6E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B6F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B6F4: j           L_8022B8BC
    // 0x8022B6F8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022B8BC;
    // 0x8022B6F8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022B6FC:
    // 0x8022B6FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022B700: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x8022B704: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022B708: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B70C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8022B710: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022B714: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B718: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B71C: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022B720: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B724: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022B728: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B72C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022B730: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B734: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022B738: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022B73C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B740: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022B744: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022B748: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022B74C: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    // 0x8022B750: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B754: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8022B758:
    // 0x8022B758: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B75C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B760: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B764: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B768: bltz        $v0, L_8022B804
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B76C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B804;
    }
    // 0x8022B76C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B770: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B774: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B778: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B77C: jal         0x8004F820
    // 0x8022B780: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B780: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x8022B784: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B788: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022B78C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B790: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B794: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022B798: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x8022B79C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022B7A0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B7A4: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022B7A8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7AC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022B7B0: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8022B7B4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022B7B8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7BC: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022B7C0: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8022B7C4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7C8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022B7CC: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022B7D0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7D4: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022B7D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7DC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B7E0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7E4: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022B7E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7EC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022B7F0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B7F4: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022B7F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7FC: j           L_8022B8BC
    // 0x8022B800: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
        goto L_8022B8BC;
    // 0x8022B800: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8022B804:
    // 0x8022B804: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022B808: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022B80C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B810: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B814: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022B818: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B81C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022B820: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022B824: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B828: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B82C: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022B830: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B834: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022B838: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B83C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B840: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B844:
    // 0x8022B844: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B848: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B84C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B850: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B854: bgez        $v0, L_8022B8BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B858: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B8BC;
    }
    // 0x8022B858: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B85C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B860: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B864: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B868: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B86C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022B870:
    // 0x8022B870: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B874: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B878: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B87C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B880: bgez        $v0, L_8022B8A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B884: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_8022B8A8;
    }
    // 0x8022B884: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8022B888: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B88C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022B890: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B894: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B898: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022B89C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B8A0: j           L_8022B8BC
    // 0x8022B8A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8022B8BC;
    // 0x8022B8A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022B8A8:
    // 0x8022B8A8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022B8AC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022B8B0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B8B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B8BC:
    // 0x8022B8BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B8C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8C8: jr          $ra
    // 0x8022B8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CC54_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CC60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CC64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CC68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC6C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022CC70: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022CC74: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022CC78: jal         0x8004FA7C
    // 0x8022CC7C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022CC7C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022CC80: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022CC84: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022CC88: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022CC8C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022CC90: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022CC94: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022CC98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CC9C: bnel        $v0, $zero, L_8022CCBC
    if (ctx->r2 != 0) {
        // 0x8022CCA0: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022CCBC;
    }
    goto skip_0;
    // 0x8022CCA0: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022CCA4: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022CCA8: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022CCAC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CCB0: beq         $v0, $zero, L_8022CCC0
    if (ctx->r2 == 0) {
        // 0x8022CCB4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022CCC0;
    }
    // 0x8022CCB4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022CCB8: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022CCBC:
    // 0x8022CCBC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022CCC0:
    // 0x8022CCC0: bne         $v0, $zero, L_8022CCF0
    if (ctx->r2 != 0) {
        // 0x8022CCC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CCF0;
    }
    // 0x8022CCC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CCC8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022CCCC: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022CCD0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022CCD4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CCD8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022CCDC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CCE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CCE4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022CCE8: j           L_8022CD48
    // 0x8022CCEC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022CD48;
    // 0x8022CCEC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022CCF0:
    // 0x8022CCF0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022CCF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CCF8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022CCFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD00: beq         $v0, $zero, L_8022CD44
    if (ctx->r2 == 0) {
        // 0x8022CD04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CD44;
    }
    // 0x8022CD04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD08: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022CD0C: jal         0x8022E444
    // 0x8022CD10: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022CD10: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022CD14: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CD18: beq         $v0, $zero, L_8022CD50
    if (ctx->r2 == 0) {
        // 0x8022CD1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CD50;
    }
    // 0x8022CD1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD20: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022CD24: jal         0x8022E3A8
    // 0x8022CD28: nop

    func_8022E3A8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022CD28: nop

    after_2:
    // 0x8022CD2C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022CD30: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022CD34: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022CD38: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CD3C: j           L_8022CD70
    // 0x8022CD40: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022CD70;
    // 0x8022CD40: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022CD44:
    // 0x8022CD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CD48:
    // 0x8022CD48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022CD4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022CD50:
    // 0x8022CD50: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022CD54: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022CD58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CD5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CD60: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022CD64: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CD68: jal         0x8004DA90
    // 0x8022CD6C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022CD6C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022CD70:
    // 0x8022CD70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD80: jr          $ra
    // 0x8022CD84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225ED0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225ED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225ED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225EE0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225EE4: bne         $v0, $zero, L_80225EFC
    if (ctx->r2 != 0) {
        // 0x80225EE8: nop
    
            goto L_80225EFC;
    }
    // 0x80225EE8: nop

    // 0x80225EEC: jal         0x802283FC
    // 0x80225EF0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225EF0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x80225EF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EF8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225EFC:
    // 0x80225EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F04: jr          $ra
    // 0x80225F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230260_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230268: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023026C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230270: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230274: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230278: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023027C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230280: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230284: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80230288: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023028C: jal         0x8004D5D4
    // 0x80230290: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230290: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80230294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230298: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023029C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802302A0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802302A4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802302A8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802302AC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802302B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802302B4: addiu       $v0, $v0, -0x6D00
    ctx->r2 = ADD32(ctx->r2, -0X6D00);
    // 0x802302B8: jal         0x8003E934
    // 0x802302BC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802302BC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x802302C0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802302C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802302C8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802302CC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802302D0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802302D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802302D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802302DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802302E0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802302E4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802302E8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802302EC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802302F0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x802302F4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x802302F8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x802302FC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80230300: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80230304: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80230308: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023030C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80230310: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80230314: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230318: jal         0x800A3450
    // 0x8023031C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023031C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80230320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80230328: jal         0x80050294
    // 0x8023032C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023032C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x80230330: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80230334: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x80230338: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8023033C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230340: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230344: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x80230348: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8023034C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230354: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x80230358: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8023035C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80230360: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230364: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80230368: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8023036C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230370: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80230374: jal         0x8002A33C
    // 0x80230378: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80230378: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8023037C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230380: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230384: jr          $ra
    // 0x80230388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C618_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C61C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C620: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C624: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C628: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C62C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022C630: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C634: jal         0x8004FA7C
    // 0x8022C638: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C638: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022C63C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022C640: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022C644: bne         $v0, $zero, L_8022C668
    if (ctx->r2 != 0) {
        // 0x8022C648: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022C668;
    }
    // 0x8022C648: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022C64C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C650: jal         0x8022E3A8
    // 0x8022C654: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022C654: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C658: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C65C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C660: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C664: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C668:
    // 0x8022C668: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C66C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022C670: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C674: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C678: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C67C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C684: jr          $ra
    // 0x8022C688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802329DC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802329E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802329E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802329EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802329F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802329F4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802329F8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802329FC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80232A00: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x80232A04: beq         $v0, $zero, L_80232B80
    if (ctx->r2 == 0) {
        // 0x80232A08: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232B80;
    }
    // 0x80232A08: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80232A0C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232A10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232A14: addu        $at, $at, $v0
    gpr jr_addend_80232A1C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232A18: lw          $v0, -0x6010($at)
    ctx->r2 = ADD32(ctx->r1, -0X6010);
    // 0x80232A1C: jr          $v0
    // 0x80232A20: nop

    switch (jr_addend_80232A1C >> 2) {
        case 0: goto L_80232A24; break;
        case 1: goto L_80232A50; break;
        case 2: goto L_80232A90; break;
        case 3: goto L_80232B34; break;
        case 4: goto L_80232AD4; break;
        case 5: goto L_80232B80; break;
        case 6: goto L_80232B80; break;
        case 7: goto L_80232B80; break;
        case 8: goto L_80232B80; break;
        case 9: goto L_80232B80; break;
        case 10: goto L_80232B80; break;
        case 11: goto L_80232B80; break;
        case 12: goto L_80232B80; break;
        case 13: goto L_80232B80; break;
        case 14: goto L_80232B80; break;
        case 15: goto L_80232B80; break;
        case 16: goto L_80232B80; break;
        case 17: goto L_80232B80; break;
        case 18: goto L_80232B80; break;
        case 19: goto L_80232B80; break;
        case 20: goto L_80232B18; break;
        case 21: goto L_80232B34; break;
        case 22: goto L_80232B4C; break;
        default: switch_error(__func__, 0x80232A1C, 0x80239FF0);
    }
    // 0x80232A20: nop

L_80232A24:
    // 0x80232A24: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232A28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232A2C: beq         $v1, $v0, L_80232A50
    if (ctx->r3 == ctx->r2) {
        // 0x80232A30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232A50;
    }
    // 0x80232A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232A38: jal         0x80050294
    // 0x80232A3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232A3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232A40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232A44: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232A4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232A50:
    // 0x80232A50: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232A54: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80232A58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232A5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80232A60: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80232A64: bne         $v0, $zero, L_80232B80
    if (ctx->r2 != 0) {
        // 0x80232A68: nop
    
            goto L_80232B80;
    }
    // 0x80232A68: nop

    // 0x80232A6C: jal         0x8003516C
    // 0x80232A70: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80232A70: nop

    after_1:
    // 0x80232A74: bne         $v0, $zero, L_80232B80
    if (ctx->r2 != 0) {
        // 0x80232A78: nop
    
            goto L_80232B80;
    }
    // 0x80232A78: nop

    // 0x80232A7C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x80232A80: jal         0x800616FC
    // 0x80232A84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80232A84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x80232A88: j           L_80232B3C
    // 0x80232A8C: nop

        goto L_80232B3C;
    // 0x80232A8C: nop

L_80232A90:
    // 0x80232A90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80232A94: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80232A98: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80232A9C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80232AA0: bne         $v0, $zero, L_80232B80
    if (ctx->r2 != 0) {
        // 0x80232AA4: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80232B80;
    }
    // 0x80232AA4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80232AA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232AAC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80232AB0: bne         $v1, $v0, L_80232B3C
    if (ctx->r3 != ctx->r2) {
        // 0x80232AB4: nop
    
            goto L_80232B3C;
    }
    // 0x80232AB4: nop

    // 0x80232AB8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80232ABC: bne         $v0, $zero, L_80232B3C
    if (ctx->r2 != 0) {
        // 0x80232AC0: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_80232B3C;
    }
    // 0x80232AC0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80232AC4: bne         $v0, $zero, L_80232B3C
    if (ctx->r2 != 0) {
        // 0x80232AC8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80232B3C;
    }
    // 0x80232AC8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80232ACC: j           L_80232B80
    // 0x80232AD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232B80;
    // 0x80232AD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232AD4:
    // 0x80232AD4: jal         0x8003516C
    // 0x80232AD8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80232AD8: nop

    after_3:
    // 0x80232ADC: bne         $v0, $zero, L_80232B80
    if (ctx->r2 != 0) {
        // 0x80232AE0: nop
    
            goto L_80232B80;
    }
    // 0x80232AE0: nop

    // 0x80232AE4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80232AE8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80232AEC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80232AF0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232AF4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80232AF8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80232AFC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232B00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232B04: beq         $v1, $v0, L_80232B80
    if (ctx->r3 == ctx->r2) {
        // 0x80232B08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232B80;
    }
    // 0x80232B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B0C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232B10: j           L_80232B80
    // 0x80232B14: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232B80;
    // 0x80232B14: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232B18:
    // 0x80232B18: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232B1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232B20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232B24: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80232B28: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80232B2C: j           L_80232B80
    // 0x80232B30: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80232B80;
    // 0x80232B30: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80232B34:
    // 0x80232B34: jal         0x80034E3C
    // 0x80232B38: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x80232B38: nop

    after_4:
L_80232B3C:
    // 0x80232B3C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232B40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232B44: j           L_80232B80
    // 0x80232B48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232B80;
    // 0x80232B48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232B4C:
    // 0x80232B4C: jal         0x8003516C
    // 0x80232B50: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80232B50: nop

    after_5:
    // 0x80232B54: bne         $v0, $zero, L_80232B80
    if (ctx->r2 != 0) {
        // 0x80232B58: addiu       $a0, $zero, 0x238
        ctx->r4 = ADD32(0, 0X238);
            goto L_80232B80;
    }
    // 0x80232B58: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    // 0x80232B5C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80232B60: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80232B64: jal         0x8006036C
    // 0x80232B68: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80232B68: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_6:
    // 0x80232B6C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80232B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232B74: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232B78: jal         0x8004F418
    // 0x80232B7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x80232B7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
L_80232B80:
    // 0x80232B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232B84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232B88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232B8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232B90: jr          $ra
    // 0x80232B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235FF0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235FF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235FF8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80235FFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236000: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236008: lw          $v0, -0x6428($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6428);
    // 0x8023600C: jalr        $v0
    // 0x80236010: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236010: nop

    after_0:
    // 0x80236014: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236018: jr          $ra
    // 0x8023601C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023601C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235BA0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235BA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235BA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235BA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235BAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235BB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235BB4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235BB8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80235BBC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80235BC0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80235BC4: beq         $v0, $zero, L_80235CD4
    if (ctx->r2 == 0) {
        // 0x80235BC8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235CD4;
    }
    // 0x80235BC8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235BCC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235BD0: addu        $at, $at, $v0
    gpr jr_addend_80235BD8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235BD4: lw          $v0, -0x5F98($at)
    ctx->r2 = ADD32(ctx->r1, -0X5F98);
    // 0x80235BD8: jr          $v0
    // 0x80235BDC: nop

    switch (jr_addend_80235BD8 >> 2) {
        case 0: goto L_80235BE0; break;
        case 1: goto L_80235C64; break;
        case 2: goto L_80235C08; break;
        case 3: goto L_80235C18; break;
        case 4: goto L_80235C64; break;
        case 5: goto L_80235C8C; break;
        default: switch_error(__func__, 0x80235BD8, 0x8023A068);
    }
    // 0x80235BDC: nop

L_80235BE0:
    // 0x80235BE0: jal         0x8006FF84
    // 0x80235BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80235BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80235BE8: beq         $v0, $zero, L_80235CD4
    if (ctx->r2 == 0) {
        // 0x80235BEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235CD4;
    }
    // 0x80235BEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235BF0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80235BF4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80235BF8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80235BFC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80235C00: j           L_80235C7C
    // 0x80235C04: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_80235C7C;
    // 0x80235C04: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_80235C08:
    // 0x80235C08: jal         0x80235EC8
    // 0x80235C0C: nop

    func_80235EC8_ovl7(rdram, ctx);
        goto after_1;
    // 0x80235C0C: nop

    after_1:
    // 0x80235C10: j           L_80235C7C
    // 0x80235C14: nop

        goto L_80235C7C;
    // 0x80235C14: nop

L_80235C18:
    // 0x80235C18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235C1C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80235C20: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80235C24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80235C28: bne         $v0, $zero, L_80235CD4
    if (ctx->r2 != 0) {
        // 0x80235C2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235CD4;
    }
    // 0x80235C2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235C30: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235C34: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235C38: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235C3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235C40: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235C44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235C48: lw          $v1, -0x65C4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X65C4);
    // 0x80235C4C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235C50: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80235C54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235C58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235C5C: j           L_80235CD4
    // 0x80235C60: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80235CD4;
    // 0x80235C60: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80235C64:
    // 0x80235C64: jal         0x80235CE8
    // 0x80235C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235CE8_ovl7(rdram, ctx);
        goto after_2;
    // 0x80235C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235C6C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235C70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235C74: bne         $v1, $v0, L_80235CD4
    if (ctx->r3 != ctx->r2) {
        // 0x80235C78: nop
    
            goto L_80235CD4;
    }
    // 0x80235C78: nop

L_80235C7C:
    // 0x80235C7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235C80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235C84: j           L_80235CD4
    // 0x80235C88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235CD4;
    // 0x80235C88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235C8C:
    // 0x80235C8C: jal         0x80070050
    // 0x80235C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x80235C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80235C94: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235C98: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    // 0x80235C9C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235CA0: jal         0x80060590
    // 0x80235CA4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80235CA4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x80235CA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80235CAC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80235CB0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80235CB4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235CB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235CBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235CC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235CC4: lw          $v0, -0x65C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65C4);
    // 0x80235CC8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80235CCC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80235CD0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80235CD4:
    // 0x80235CD4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235CD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235CDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235CE0: jr          $ra
    // 0x80235CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235CE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229F24_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80229F34: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80229F38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229F3C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229F40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229F44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229F48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F4C: beq         $v1, $v0, L_8022A03C
    if (ctx->r3 == ctx->r2) {
        // 0x80229F50: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022A03C;
    }
    // 0x80229F50: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229F54: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229F58: beql        $v0, $zero, L_80229F70
    if (ctx->r2 == 0) {
        // 0x80229F5C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229F70;
    }
    goto skip_0;
    // 0x80229F5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229F60: beq         $v1, $zero, L_80229F88
    if (ctx->r3 == 0) {
        // 0x80229F64: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80229F88;
    }
    // 0x80229F64: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80229F68: j           L_8022A190
    // 0x80229F6C: nop

        goto L_8022A190;
    // 0x80229F6C: nop

L_80229F70:
    // 0x80229F70: beq         $v1, $v0, L_8022A06C
    if (ctx->r3 == ctx->r2) {
        // 0x80229F74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A06C;
    }
    // 0x80229F74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229F78: beq         $v1, $v0, L_8022A164
    if (ctx->r3 == ctx->r2) {
        // 0x80229F7C: nop
    
            goto L_8022A164;
    }
    // 0x80229F7C: nop

    // 0x80229F80: j           L_8022A190
    // 0x80229F84: nop

        goto L_8022A190;
    // 0x80229F84: nop

L_80229F88:
    // 0x80229F88: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80229F8C: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80229F90: addiu       $s3, $zero, 0x83
    ctx->r19 = ADD32(0, 0X83);
    // 0x80229F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229F9C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229FA0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80229FA4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80229FA8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229FAC: sh          $zero, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = 0;
    // 0x80229FB0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80229FB4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80229FB8: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x80229FBC: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80229FC0: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80229FC4:
    // 0x80229FC4: jal         0x8004F144
    // 0x80229FC8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229FC8: nop

    after_0:
    // 0x80229FCC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229FD0: beq         $a0, $zero, L_8022A018
    if (ctx->r4 == 0) {
        // 0x80229FD4: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022A018;
    }
    // 0x80229FD4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229FD8: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x80229FDC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229FE0: sb          $s4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r20;
    // 0x80229FE4: sb          $s3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r19;
    // 0x80229FE8: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x80229FEC: sh          $v1, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r3;
    // 0x80229FF0: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x80229FF4: sh          $v1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r3;
    // 0x80229FF8: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x80229FFC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022A000: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A004: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A008: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A00C: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8022A010: bne         $v0, $zero, L_80229FC4
    if (ctx->r2 != 0) {
        // 0x8022A014: sh          $v1, 0x20($a0)
        MEM_H(0X20, ctx->r4) = ctx->r3;
            goto L_80229FC4;
    }
    // 0x8022A014: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
L_8022A018:
    // 0x8022A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A01C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022A020: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A024: sb          $v0, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r2;
    // 0x8022A028: sb          $v0, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r2;
    // 0x8022A02C: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022A030: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022A034: jal         0x8007A1B8
    // 0x8022A038: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    func_8007A1B8_555B8(rdram, ctx);
        goto after_1;
    // 0x8022A038: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    after_1:
L_8022A03C:
    // 0x8022A03C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022A040: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022A044: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A048: bgtz        $v0, L_8022A05C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A04C: sh          $v1, 0x4($s2)
        MEM_H(0X4, ctx->r18) = ctx->r3;
            goto L_8022A05C;
    }
    // 0x8022A04C: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x8022A050: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A054: j           L_8022A06C
    // 0x8022A058: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022A06C;
    // 0x8022A058: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A05C:
    // 0x8022A05C: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022A060: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A064: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A068: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022A06C:
    // 0x8022A06C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A070: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A074: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A078: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022A07C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A080: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022A084: sh          $v1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r3;
    // 0x8022A088: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022A08C: bgtz        $v0, L_8022A0A8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A090: nop
    
            goto L_8022A0A8;
    }
    // 0x8022A090: nop

    // 0x8022A094: bne         $v1, $zero, L_8022A0A8
    if (ctx->r3 != 0) {
        // 0x8022A098: nop
    
            goto L_8022A0A8;
    }
    // 0x8022A098: nop

    // 0x8022A09C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A0A0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A0A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022A0A8:
    // 0x8022A0A8: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A0B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A0B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A0B8: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022A0BC: jal         0x8004DA90
    // 0x8022A0C0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A0C0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022A0C4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A0CC: addiu       $v0, $v0, -0x34
    ctx->r2 = ADD32(ctx->r2, -0X34);
    // 0x8022A0D0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A0D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A0D8: jal         0x80040F30
    // 0x8022A0DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022A0DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022A0E0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022A0E4: beq         $v0, $zero, L_8022A14C
    if (ctx->r2 == 0) {
        // 0x8022A0E8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A14C;
    }
    // 0x8022A0E8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A0EC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022A0F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A0F4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022A0F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A0FC: bne         $v0, $v1, L_8022A118
    if (ctx->r2 != ctx->r3) {
        // 0x8022A100: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A118;
    }
    // 0x8022A100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A104: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022A108: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A10C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A110: j           L_8022A14C
    // 0x8022A114: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022A14C;
    // 0x8022A114: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A118:
    // 0x8022A118: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A11C: lhu         $a0, 0x4C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022A120: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A124: lhu         $v0, 0x4E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022A128: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A12C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A130: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022A134: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A138: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022A13C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022A140: sh          $a0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r4;
    // 0x8022A144: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022A148: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022A14C:
    // 0x8022A14C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A150: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8022A154: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A15C: j           L_8022A190
    // 0x8022A160: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022A190;
    // 0x8022A160: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022A164:
    // 0x8022A164: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A168: lhu         $v1, 0x34C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022A16C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8022A170: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022A174: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022A178: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A17C: bgez        $v1, L_8022A190
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022A180: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022A190;
    }
    // 0x8022A180: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A184: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A188: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A18C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022A190:
    // 0x8022A190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022A194: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022A198: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A19C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A1A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1A8: jr          $ra
    // 0x8022A1AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A1AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225E8C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E9C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225EA0: bne         $v0, $zero, L_80225EB8
    if (ctx->r2 != 0) {
        // 0x80225EA4: nop
    
            goto L_80225EB8;
    }
    // 0x80225EA4: nop

    // 0x80225EA8: jal         0x802283FC
    // 0x80225EAC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225EAC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x80225EB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EB4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225EB8:
    // 0x80225EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EC0: jr          $ra
    // 0x80225EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C27C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C27C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022C280: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022C284: beq         $v0, $zero, L_8022C2A0
    if (ctx->r2 == 0) {
        // 0x8022C288: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C2A0;
    }
    // 0x8022C288: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C28C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C290: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022C294: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C298: bne         $v0, $zero, L_8022C2CC
    if (ctx->r2 != 0) {
        // 0x8022C29C: nop
    
            goto L_8022C2CC;
    }
    // 0x8022C29C: nop

L_8022C2A0:
    // 0x8022C2A0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022C2A4: bgez        $v0, L_8022C2CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C2A8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022C2CC;
    }
    // 0x8022C2A8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022C2AC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022C2B0: bnel        $v1, $v0, L_8022C2CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022C2B4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022C2CC;
    }
    goto skip_0;
    // 0x8022C2B4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022C2B8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C2BC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022C2C0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022C2C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C2C8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022C2CC:
    // 0x8022C2CC: jr          $ra
    // 0x8022C2D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022C2D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80231DA8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231DB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231DB8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80231DBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231DC0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231DC4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80231DC8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80231DCC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231DD0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231DD4: jal         0x8004D5D4
    // 0x80231DD8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231DD8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80231DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231DE0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231DE4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231DE8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231DEC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231DF0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231DF4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231DF8: jal         0x8003E934
    // 0x80231DFC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80231DFC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80231E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80231E08: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231E0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231E10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80231E14: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231E18: addiu       $v0, $v0, -0x6C3C
    ctx->r2 = ADD32(ctx->r2, -0X6C3C);
    // 0x80231E1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231E20: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80231E24: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80231E28: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80231E2C: jal         0x80050294
    // 0x80231E30: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80231E30: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231E34: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80231E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231E3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231E40: jr          $ra
    // 0x80231E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235428_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235428: jr          $ra
    // 0x8023542C: nop

    TRACE_RETURN()
    return;
    // 0x8023542C: nop

;}
RECOMP_FUNC void func_802306B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306B0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802306B4: bne         $v0, $zero, L_802306C4
    if (ctx->r2 != 0) {
        // 0x802306B8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802306C4;
    }
    // 0x802306B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802306BC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802306C0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_802306C4:
    // 0x802306C4: jr          $ra
    // 0x802306C8: nop

    TRACE_RETURN()
    return;
    // 0x802306C8: nop

;}
RECOMP_FUNC void func_802332C0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802332C4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x802332C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802332CC: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x802332D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802332D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802332D8: addu        $at, $at, $v0
    gpr jr_addend_802332E0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802332DC: lw          $v0, -0x6BD0($at)
    ctx->r2 = ADD32(ctx->r1, -0X6BD0);
    // 0x802332E0: jr          $v0
    // 0x802332E4: nop

    switch (jr_addend_802332E0 >> 2) {
        case 0: goto L_802332E8; break;
        case 1: goto L_80233300; break;
        case 2: goto L_80233384; break;
        default: switch_error(__func__, 0x802332E0, 0x80239430);
    }
    // 0x802332E4: nop

L_802332E8:
    // 0x802332E8: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x802332EC: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x802332F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802332F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802332F8: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x802332FC: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80233300:
    // 0x80233300: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80233304: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80233308: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023330C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80233310: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233314: beq         $v0, $zero, L_80233328
    if (ctx->r2 == 0) {
        // 0x80233318: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233328;
    }
    // 0x80233318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023331C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80233320: bne         $v1, $v0, L_80233338
    if (ctx->r3 != ctx->r2) {
        // 0x80233324: nop
    
            goto L_80233338;
    }
    // 0x80233324: nop

L_80233328:
    // 0x80233328: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8023332C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80233330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233334: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80233338:
    // 0x80233338: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x8023333C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80233340: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80233344: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80233348: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x8023334C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80233350: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80233354: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80233358: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023335C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233360: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233364: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80233368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023336C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80233370: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80233374: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x80233378: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x8023337C: j           L_8023338C
    // 0x80233380: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_8023338C;
    // 0x80233380: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_80233384:
    // 0x80233384: jal         0x8004F5C4
    // 0x80233388: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80233388: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_8023338C:
    // 0x8023338C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233390: jr          $ra
    // 0x80233394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DAB4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DAB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DABC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022DAC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DAC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DAC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DACC: lw          $v0, -0x6DB4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DB4);
    // 0x8022DAD0: jalr        $v0
    // 0x8022DAD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DAD4: nop

    after_0:
    // 0x8022DAD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DADC: jr          $ra
    // 0x8022DAE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DAE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232938_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023293C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232940: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232944: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80232948: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8023294C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232950: jal         0x8004DDE8
    // 0x80232954: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x80232954: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232958: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023295C: beq         $v1, $zero, L_80232978
    if (ctx->r3 == 0) {
        // 0x80232960: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_80232978;
    }
    // 0x80232960: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80232964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232968: beq         $v1, $v0, L_802329A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023296C: nop
    
            goto L_802329A4;
    }
    // 0x8023296C: nop

    // 0x80232970: j           L_802329CC
    // 0x80232974: nop

        goto L_802329CC;
    // 0x80232974: nop

L_80232978:
    // 0x80232978: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8023297C: beq         $v0, $zero, L_802329CC
    if (ctx->r2 == 0) {
        // 0x80232980: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802329CC;
    }
    // 0x80232980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80232988: jal         0x80050294
    // 0x8023298C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023298C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80232990: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232994: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232998: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023299C: j           L_802329CC
    // 0x802329A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802329CC;
    // 0x802329A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802329A4:
    // 0x802329A4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802329A8: bgez        $v0, L_802329CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802329AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802329CC;
    }
    // 0x802329AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802329B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802329B4: jal         0x80050294
    // 0x802329B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802329B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802329BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802329C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802329C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802329C8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802329CC:
    // 0x802329CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802329D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802329D4: jr          $ra
    // 0x802329D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802329D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230CCC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230CD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230CD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230CDC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230CE0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80230CE4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230CE8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80230CEC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80230CF0: jal         0x8004D5D4
    // 0x80230CF4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230CF4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80230CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230CFC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80230D00: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230D04: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230D08: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230D0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230D10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230D14: jal         0x8003E934
    // 0x80230D18: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80230D18: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80230D1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230D24: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230D28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230D2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230D30: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80230D34: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80230D38: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80230D3C: jal         0x80050294
    // 0x80230D40: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230D40: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_2:
    // 0x80230D44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230D4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230D50: jr          $ra
    // 0x80230D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228EF8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228F08: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228F10: jal         0x8006FF84
    // 0x80228F14: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80228F14: nop

    after_0:
    // 0x80228F18: beq         $v0, $zero, L_80229014
    if (ctx->r2 == 0) {
        // 0x80228F1C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80229014;
    }
    // 0x80228F1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228F20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228F24: addiu       $a0, $a0, -0x420
    ctx->r4 = ADD32(ctx->r4, -0X420);
    // 0x80228F28: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x80228F2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80228F30: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
L_80228F34:
    // 0x80228F34: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80228F38: beq         $v0, $zero, L_80228F58
    if (ctx->r2 == 0) {
        // 0x80228F3C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80228F58;
    }
    // 0x80228F3C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228F40: lbu         $v0, -0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X2);
    // 0x80228F44: bne         $v0, $a3, L_80228F58
    if (ctx->r2 != ctx->r7) {
        // 0x80228F48: nop
    
            goto L_80228F58;
    }
    // 0x80228F48: nop

    // 0x80228F4C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80228F50: beql        $v0, $a2, L_80228F6C
    if (ctx->r2 == ctx->r6) {
        // 0x80228F54: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_80228F6C;
    }
    goto skip_0;
    // 0x80228F54: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    skip_0:
L_80228F58:
    // 0x80228F58: addiu       $v1, $v1, 0x3C8
    ctx->r3 = ADD32(ctx->r3, 0X3C8);
    // 0x80228F5C: slti        $v0, $a1, 0x12
    ctx->r2 = SIGNED(ctx->r5) < 0X12 ? 1 : 0;
    // 0x80228F60: bne         $v0, $zero, L_80228F34
    if (ctx->r2 != 0) {
        // 0x80228F64: addiu       $a0, $a0, 0x3C8
        ctx->r4 = ADD32(ctx->r4, 0X3C8);
            goto L_80228F34;
    }
    // 0x80228F64: addiu       $a0, $a0, 0x3C8
    ctx->r4 = ADD32(ctx->r4, 0X3C8);
    // 0x80228F68: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_80228F6C:
    // 0x80228F6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228F70: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80228F74: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228F78: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80228F7C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228F80: lhu         $a0, 0x49C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C6);
    // 0x80228F84: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228F88: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80228F8C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80228F90: lhu         $a2, 0x4A06($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4A06);
    // 0x80228F94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228F98: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80228F9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FA0: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80228FA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228FA8: sb          $zero, -0x5F30($at)
    MEM_B(-0X5F30, ctx->r1) = 0;
    // 0x80228FAC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228FB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FB4: sh          $v1, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r3;
    // 0x80228FB8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228FBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FC0: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x80228FC4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228FC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FCC: sh          $a1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r5;
    // 0x80228FD0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80228FD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FD8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80228FDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FE0: sw          $v1, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r3;
    // 0x80228FE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FE8: sw          $a0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r4;
    // 0x80228FEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FF0: sw          $a1, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r5;
    // 0x80228FF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FF8: sh          $a2, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r6;
    // 0x80228FFC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80229000: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80229004: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80229008: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022900C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229010: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229014:
    // 0x80229014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022901C: jr          $ra
    // 0x80229020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023381C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023381C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233820: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233828: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023382C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80233830: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233834: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233838: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023383C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233840: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233844: lw          $v0, -0x6BB4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6BB4);
    // 0x80233848: jalr        $v0
    // 0x8023384C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023384C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80233850: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80233854: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233858: jal         0x8009A3B4
    // 0x8023385C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023385C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233860: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80233864: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80233868: beq         $v0, $zero, L_802338A8
    if (ctx->r2 == 0) {
        // 0x8023386C: addiu       $s2, $s0, 0xC0
        ctx->r18 = ADD32(ctx->r16, 0XC0);
            goto L_802338A8;
    }
    // 0x8023386C: addiu       $s2, $s0, 0xC0
    ctx->r18 = ADD32(ctx->r16, 0XC0);
    // 0x80233870: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x80233874: ori         $v0, $v0, 0xA
    ctx->r2 = ctx->r2 | 0XA;
    // 0x80233878: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023387C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233880: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80233884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233888: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023388C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233890: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233894: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80233898: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023389C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802338A0: jal         0x80051E18
    // 0x802338A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x802338A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
L_802338A8:
    // 0x802338A8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802338AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802338B0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802338B4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802338B8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802338BC: jr          $ra
    // 0x802338C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802338C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236394_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023639C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802363A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802363A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802363A8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802363AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802363B0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802363B4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802363B8: beq         $v0, $zero, L_80236510
    if (ctx->r2 == 0) {
        // 0x802363BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80236510;
    }
    // 0x802363BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802363C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802363C4: addu        $at, $at, $v0
    gpr jr_addend_802363CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802363C8: lw          $v0, -0x5F80($at)
    ctx->r2 = ADD32(ctx->r1, -0X5F80);
    // 0x802363CC: jr          $v0
    // 0x802363D0: nop

    switch (jr_addend_802363CC >> 2) {
        case 0: goto L_802363D4; break;
        case 1: goto L_802363F4; break;
        case 2: goto L_80236400; break;
        case 3: goto L_80236448; break;
        case 4: goto L_80236468; break;
        case 5: goto L_8023649C; break;
        case 6: goto L_802364D0; break;
        default: switch_error(__func__, 0x802363CC, 0x8023A080);
    }
    // 0x802363D0: nop

L_802363D4:
    // 0x802363D4: jal         0x8006FF84
    // 0x802363D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802363D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x802363DC: beq         $v0, $zero, L_80236510
    if (ctx->r2 == 0) {
        // 0x802363E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236510;
    }
    // 0x802363E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802363E4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802363E8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802363EC: j           L_802364C0
    // 0x802363F0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_802364C0;
    // 0x802363F0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_802363F4:
    // 0x802363F4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802363F8: j           L_802364C0
    // 0x802363FC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802364C0;
    // 0x802363FC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80236400:
    // 0x80236400: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236404: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236408: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023640C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236410: bne         $v0, $zero, L_80236510
    if (ctx->r2 != 0) {
        // 0x80236414: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80236510;
    }
    // 0x80236414: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236418: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023641C: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x80236420: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80236424: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x80236428: jal         0x80061510
    // 0x8023642C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x8023642C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_1:
    // 0x80236430: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x80236434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236438: jal         0x8002A2F8
    // 0x8023643C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023643C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236440: j           L_802364C0
    // 0x80236444: nop

        goto L_802364C0;
    // 0x80236444: nop

L_80236448:
    // 0x80236448: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8023644C: bgez        $v0, L_80236510
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236450: nop
    
            goto L_80236510;
    }
    // 0x80236450: nop

    // 0x80236454: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x80236458: jal         0x80070F38
    // 0x8023645C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_3;
    // 0x8023645C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80236460: j           L_802364C0
    // 0x80236464: nop

        goto L_802364C0;
    // 0x80236464: nop

L_80236468:
    // 0x80236468: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023646C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236470: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236474: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236478: bne         $v0, $zero, L_80236510
    if (ctx->r2 != 0) {
        // 0x8023647C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80236510;
    }
    // 0x8023647C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236480: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80236484: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x80236488: jal         0x80061510
    // 0x8023648C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8023648C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80236490: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80236494: j           L_802364C0
    // 0x80236498: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802364C0;
    // 0x80236498: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8023649C:
    // 0x8023649C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802364A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802364A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802364A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802364AC: bne         $v0, $zero, L_80236510
    if (ctx->r2 != 0) {
        // 0x802364B0: nop
    
            goto L_80236510;
    }
    // 0x802364B0: nop

    // 0x802364B4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802364B8: bgez        $v0, L_80236510
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802364BC: nop
    
            goto L_80236510;
    }
    // 0x802364BC: nop

L_802364C0:
    // 0x802364C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802364C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802364C8: j           L_80236510
    // 0x802364CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236510;
    // 0x802364CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802364D0:
    // 0x802364D0: jal         0x8003516C
    // 0x802364D4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x802364D4: nop

    after_5:
    // 0x802364D8: bne         $v0, $zero, L_80236510
    if (ctx->r2 != 0) {
        // 0x802364DC: nop
    
            goto L_80236510;
    }
    // 0x802364DC: nop

    // 0x802364E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802364E4: jal         0x80070050
    // 0x802364E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x802364E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_6:
    // 0x802364EC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802364F0: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x802364F4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x802364F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802364FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80236500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236504: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236508: jal         0x80060590
    // 0x8023650C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x8023650C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_7:
L_80236510:
    // 0x80236510: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236514: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023651C: jr          $ra
    // 0x80236520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236524: nop

    // 0x80236528: nop

    // 0x8023652C: nop

;}
RECOMP_FUNC void func_80233E6C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E6C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80233E70: beq         $v1, $zero, L_80233E8C
    if (ctx->r3 == 0) {
        // 0x80233E74: addiu       $a1, $a0, 0xC0
        ctx->r5 = ADD32(ctx->r4, 0XC0);
            goto L_80233E8C;
    }
    // 0x80233E74: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x80233E78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E7C: beq         $v1, $v0, L_80233EA8
    if (ctx->r3 == ctx->r2) {
        // 0x80233E80: nop
    
            goto L_80233EA8;
    }
    // 0x80233E80: nop

    // 0x80233E84: j           L_80233ECC
    // 0x80233E88: nop

        goto L_80233ECC;
    // 0x80233E88: nop

L_80233E8C:
    // 0x80233E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E90: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233E94: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80233E98: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x80233E9C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80233EA0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80233EA4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_80233EA8:
    // 0x80233EA8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233EAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233EB0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233EB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233EB8: bgez        $v0, L_80233ECC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233EBC: nop
    
            goto L_80233ECC;
    }
    // 0x80233EBC: nop

    // 0x80233EC0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80233EC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233EC8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80233ECC:
    // 0x80233ECC: jr          $ra
    // 0x80233ED0: nop

    TRACE_RETURN()
    return;
    // 0x80233ED0: nop

;}
RECOMP_FUNC void func_8022E310_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E314: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022E318: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022E31C: beq         $a0, $v0, L_8022E384
    if (ctx->r4 == ctx->r2) {
        // 0x8022E320: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022E384;
    }
    // 0x8022E320: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E324: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022E328: beql        $v0, $zero, L_8022E348
    if (ctx->r2 == 0) {
        // 0x8022E32C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022E348;
    }
    goto skip_0;
    // 0x8022E32C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022E330: beq         $a0, $zero, L_8022E37C
    if (ctx->r4 == 0) {
        // 0x8022E334: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022E37C;
    }
    // 0x8022E334: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022E338: beq         $a0, $v0, L_8022E39C
    if (ctx->r4 == ctx->r2) {
        // 0x8022E33C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E39C;
    }
    // 0x8022E33C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E340: j           L_8022E39C
    // 0x8022E344: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022E39C;
    // 0x8022E344: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E348:
    // 0x8022E348: beq         $a0, $v0, L_8022E37C
    if (ctx->r4 == ctx->r2) {
        // 0x8022E34C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022E37C;
    }
    // 0x8022E34C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022E350: beq         $v0, $zero, L_8022E368
    if (ctx->r2 == 0) {
        // 0x8022E354: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022E368;
    }
    // 0x8022E354: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022E358: beq         $a0, $v0, L_8022E39C
    if (ctx->r4 == ctx->r2) {
        // 0x8022E35C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022E39C;
    }
    // 0x8022E35C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022E360: j           L_8022E39C
    // 0x8022E364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022E39C;
    // 0x8022E364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E368:
    // 0x8022E368: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022E36C: beq         $a0, $v0, L_8022E38C
    if (ctx->r4 == ctx->r2) {
        // 0x8022E370: nop
    
            goto L_8022E38C;
    }
    // 0x8022E370: nop

    // 0x8022E374: j           L_8022E39C
    // 0x8022E378: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022E39C;
    // 0x8022E378: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E37C:
    // 0x8022E37C: j           L_8022E39C
    // 0x8022E380: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022E39C;
    // 0x8022E380: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022E384:
    // 0x8022E384: j           L_8022E39C
    // 0x8022E388: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022E39C;
    // 0x8022E388: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022E38C:
    // 0x8022E38C: jal         0x800A3450
    // 0x8022E390: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E390: nop

    after_0:
    // 0x8022E394: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E398: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022E39C:
    // 0x8022E39C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3A0: jr          $ra
    // 0x8022E3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FFC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226000: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226004: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022600C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226010: bne         $v0, $zero, L_80226028
    if (ctx->r2 != 0) {
        // 0x80226014: nop
    
            goto L_80226028;
    }
    // 0x80226014: nop

    // 0x80226018: jal         0x802283FC
    // 0x8022601C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022601C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x80226020: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226024: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226028:
    // 0x80226028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022602C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226030: jr          $ra
    // 0x80226034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F42C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F42C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F430: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F434: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F43C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F440: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F444: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F448: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022F44C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022F450: jal         0x8004D5D4
    // 0x8022F454: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F454: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F45C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F460: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F464: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F468: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F46C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F470: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F474: jal         0x8003E934
    // 0x8022F478: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022F478: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022F47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F480: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F484: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F488: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F48C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F490: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F494: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022F498: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022F49C: jal         0x80050294
    // 0x8022F4A0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F4A0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    after_2:
    // 0x8022F4A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4B0: jr          $ra
    // 0x8022F4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F4B8: nop

    // 0x8022F4BC: nop

;}
RECOMP_FUNC void func_80229024_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229028: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022902C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229034: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80229038: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022903C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80229040: beq         $v1, $zero, L_80229058
    if (ctx->r3 == 0) {
        // 0x80229044: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229058;
    }
    // 0x80229044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229048: beq         $v1, $v0, L_80229110
    if (ctx->r3 == ctx->r2) {
        // 0x8022904C: nop
    
            goto L_80229110;
    }
    // 0x8022904C: nop

    // 0x80229050: j           L_80229124
    // 0x80229054: nop

        goto L_80229124;
    // 0x80229054: nop

L_80229058:
    // 0x80229058: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022905C: lbu         $v0, -0x5F30($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5F30);
    // 0x80229060: beq         $v0, $zero, L_80229100
    if (ctx->r2 == 0) {
        // 0x80229064: addiu       $v0, $zero, -0xD12
        ctx->r2 = ADD32(0, -0XD12);
            goto L_80229100;
    }
    // 0x80229064: addiu       $v0, $zero, -0xD12
    ctx->r2 = ADD32(0, -0XD12);
    // 0x80229068: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022906C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229070: lbu         $a0, 0x4A6D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A6D);
    // 0x80229074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229078: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022907C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229080: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229084: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80229088: addiu       $v0, $zero, -0x4E89
    ctx->r2 = ADD32(0, -0X4E89);
    // 0x8022908C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229090: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80229094: lui         $v0, 0xF2EE
    ctx->r2 = S32(0XF2EE << 16);
    // 0x80229098: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022909C: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802290A0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802290A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290A8: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802290AC: lui         $v0, 0xB177
    ctx->r2 = S32(0XB177 << 16);
    // 0x802290B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290B4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802290B8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802290BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290C0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802290C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290C8: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802290CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290D0: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802290D4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802290D8: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x802290DC: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802290E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290E4: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    // 0x802290E8: jal         0x8004F418
    // 0x802290EC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802290EC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x802290F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290F8: jal         0x80034844
    // 0x802290FC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_1;
    // 0x802290FC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_1:
L_80229100:
    // 0x80229100: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80229104: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229108: j           L_80229124
    // 0x8022910C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80229124;
    // 0x8022910C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80229110:
    // 0x80229110: jal         0x80070050
    // 0x80229114: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_2;
    // 0x80229114: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_2:
    // 0x80229118: jal         0x8006027C
    // 0x8022911C: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_3;
    // 0x8022911C: nop

    after_3:
    // 0x80229120: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80229124:
    // 0x80229124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229128: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022912C: jr          $ra
    // 0x80229130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80229134: nop

    // 0x80229138: nop

    // 0x8022913C: nop

;}
RECOMP_FUNC void func_80226488_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022648C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226490: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226494: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226498: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022649C: beq         $a0, $zero, L_802264B4
    if (ctx->r4 == 0) {
        // 0x802264A0: sw          $v0, 0x74E4($at)
        MEM_W(0X74E4, ctx->r1) = ctx->r2;
            goto L_802264B4;
    }
    // 0x802264A0: sw          $v0, 0x74E4($at)
    MEM_W(0X74E4, ctx->r1) = ctx->r2;
    // 0x802264A4: beq         $a0, $v0, L_80226594
    if (ctx->r4 == ctx->r2) {
        // 0x802264A8: nop
    
            goto L_80226594;
    }
    // 0x802264A8: nop

    // 0x802264AC: j           L_80226684
    // 0x802264B0: nop

        goto L_80226684;
    // 0x802264B0: nop

L_802264B4:
    // 0x802264B4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802264B8: lbu         $a1, 0x7354($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7354);
    // 0x802264BC: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802264C0: lbu         $a2, 0x7355($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7355);
    // 0x802264C4: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x802264C8: lh          $a3, 0x7356($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7356);
    // 0x802264CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802264D0: lw          $v0, 0x7358($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7358);
    // 0x802264D4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802264D8: addiu       $s0, $s0, 0x734C
    ctx->r16 = ADD32(ctx->r16, 0X734C);
    // 0x802264DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802264E4: jal         0x80233528
    // 0x802264E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_0;
    // 0x802264E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x802264EC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802264F0: lbu         $a1, 0x7364($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7364);
    // 0x802264F4: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802264F8: lbu         $a2, 0x7365($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7365);
    // 0x802264FC: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x80226500: lh          $a3, 0x7366($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7366);
    // 0x80226504: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226508: sw          $v0, -0x5F60($at)
    MEM_W(-0X5F60, ctx->r1) = ctx->r2;
    // 0x8022650C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226510: lw          $v0, 0x7368($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7368);
    // 0x80226514: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80226518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022651C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80226520: jal         0x80233528
    // 0x80226524: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_1;
    // 0x80226524: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80226528: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022652C: lbu         $a1, 0x7374($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7374);
    // 0x80226530: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80226534: lbu         $a2, 0x7375($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7375);
    // 0x80226538: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022653C: lh          $a3, 0x7376($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7376);
    // 0x80226540: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226544: sw          $v0, -0x5F5C($at)
    MEM_W(-0X5F5C, ctx->r1) = ctx->r2;
    // 0x80226548: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022654C: lw          $v0, 0x7378($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7378);
    // 0x80226550: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80226554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226558: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022655C: jal         0x80233528
    // 0x80226560: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_2;
    // 0x80226560: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80226564: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226568: lbu         $a1, 0x7384($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7384);
    // 0x8022656C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80226570: lbu         $a2, 0x7385($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7385);
    // 0x80226574: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x80226578: lh          $a3, 0x7386($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7386);
    // 0x8022657C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226580: sw          $v0, -0x5F58($at)
    MEM_W(-0X5F58, ctx->r1) = ctx->r2;
    // 0x80226584: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226588: lw          $v0, 0x7388($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7388);
    // 0x8022658C: j           L_80226670
    // 0x80226590: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
        goto L_80226670;
    // 0x80226590: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
L_80226594:
    // 0x80226594: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226598: lbu         $a1, 0x7394($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7394);
    // 0x8022659C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802265A0: lbu         $a2, 0x7395($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7395);
    // 0x802265A4: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x802265A8: lh          $a3, 0x7396($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X7396);
    // 0x802265AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265B0: lw          $v0, 0x7398($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7398);
    // 0x802265B4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802265B8: addiu       $s0, $s0, 0x738C
    ctx->r16 = ADD32(ctx->r16, 0X738C);
    // 0x802265BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802265C4: jal         0x80233528
    // 0x802265C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_3;
    // 0x802265C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x802265CC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802265D0: lbu         $a1, 0x73A4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X73A4);
    // 0x802265D4: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802265D8: lbu         $a2, 0x73A5($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X73A5);
    // 0x802265DC: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x802265E0: lh          $a3, 0x73A6($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X73A6);
    // 0x802265E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802265E8: sw          $v0, -0x5F60($at)
    MEM_W(-0X5F60, ctx->r1) = ctx->r2;
    // 0x802265EC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265F0: lw          $v0, 0x73A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73A8);
    // 0x802265F4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x802265F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80226600: jal         0x80233528
    // 0x80226604: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_4;
    // 0x80226604: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80226608: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022660C: lbu         $a1, 0x73B4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X73B4);
    // 0x80226610: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80226614: lbu         $a2, 0x73B5($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X73B5);
    // 0x80226618: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022661C: lh          $a3, 0x73B6($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X73B6);
    // 0x80226620: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226624: sw          $v0, -0x5F5C($at)
    MEM_W(-0X5F5C, ctx->r1) = ctx->r2;
    // 0x80226628: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022662C: lw          $v0, 0x73B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73B8);
    // 0x80226630: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80226634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226638: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022663C: jal         0x80233528
    // 0x80226640: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_5;
    // 0x80226640: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x80226644: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226648: lbu         $a1, 0x73C4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X73C4);
    // 0x8022664C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80226650: lbu         $a2, 0x73C5($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X73C5);
    // 0x80226654: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x80226658: lh          $a3, 0x73C6($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X73C6);
    // 0x8022665C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226660: sw          $v0, -0x5F58($at)
    MEM_W(-0X5F58, ctx->r1) = ctx->r2;
    // 0x80226664: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226668: lw          $v0, 0x73C8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73C8);
    // 0x8022666C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
L_80226670:
    // 0x80226670: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80226674: jal         0x80233528
    // 0x80226678: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80233528_ovl7(rdram, ctx);
        goto after_6;
    // 0x80226678: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022667C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226680: sw          $v0, -0x5F54($at)
    MEM_W(-0X5F54, ctx->r1) = ctx->r2;
L_80226684:
    // 0x80226684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022668C: jr          $ra
    // 0x80226690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D454_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D458: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D45C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022D460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D464: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D468: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D46C: lw          $v0, -0x6DD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DD0);
    // 0x8022D470: jalr        $v0
    // 0x8022D474: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D474: nop

    after_0:
    // 0x8022D478: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D47C: jr          $ra
    // 0x8022D480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292B8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802292C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802292C8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802292CC: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x802292D0: beq         $v0, $zero, L_8022947C
    if (ctx->r2 == 0) {
        // 0x802292D4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022947C;
    }
    // 0x802292D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802292D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802292DC: addu        $at, $at, $v0
    gpr jr_addend_802292E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802292E0: lw          $v0, -0x62E8($at)
    ctx->r2 = ADD32(ctx->r1, -0X62E8);
    // 0x802292E4: jr          $v0
    // 0x802292E8: nop

    switch (jr_addend_802292E4 >> 2) {
        case 0: goto L_802292EC; break;
        case 1: goto L_80229348; break;
        case 2: goto L_8022937C; break;
        case 3: goto L_8022947C; break;
        case 4: goto L_8022947C; break;
        case 5: goto L_8022947C; break;
        case 6: goto L_8022947C; break;
        case 7: goto L_8022947C; break;
        case 8: goto L_8022947C; break;
        case 9: goto L_8022947C; break;
        case 10: goto L_80229408; break;
        case 11: goto L_80229458; break;
        default: switch_error(__func__, 0x802292E4, 0x80239D18);
    }
    // 0x802292E8: nop

L_802292EC:
    // 0x802292EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802292F0: jal         0x8006FF84
    // 0x802292F4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802292F4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x802292F8: beq         $v0, $zero, L_8022947C
    if (ctx->r2 == 0) {
        // 0x802292FC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022947C;
    }
    // 0x802292FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229300: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229304: jal         0x8005F6B4
    // 0x80229308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80229308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022930C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229310: addiu       $v0, $v0, -0x7730
    ctx->r2 = ADD32(ctx->r2, -0X7730);
    // 0x80229314: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80229318: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022931C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229320: addiu       $v0, $v0, -0x7688
    ctx->r2 = ADD32(ctx->r2, -0X7688);
    // 0x80229324: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80229328: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022932C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229330: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80229334: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229338: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022933C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229340: j           L_80229448
    // 0x80229344: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_80229448;
    // 0x80229344: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_80229348:
    // 0x80229348: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022934C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80229350: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229354: bne         $v1, $v0, L_80229368
    if (ctx->r3 != ctx->r2) {
        // 0x80229358: nop
    
            goto L_80229368;
    }
    // 0x80229358: nop

    // 0x8022935C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80229360: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229364: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229368:
    // 0x80229368: jal         0x8006072C
    // 0x8022936C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_2;
    // 0x8022936C: nop

    after_2:
    // 0x80229370: beq         $v0, $zero, L_8022937C
    if (ctx->r2 == 0) {
        // 0x80229374: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022937C;
    }
    // 0x80229374: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229378: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022937C:
    // 0x8022937C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229380: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229384: beq         $v1, $v0, L_8022939C
    if (ctx->r3 == ctx->r2) {
        // 0x80229388: nop
    
            goto L_8022939C;
    }
    // 0x80229388: nop

    // 0x8022938C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80229390: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80229394: jalr        $v0
    // 0x80229398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80229398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022939C:
    // 0x8022939C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802293A0: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x802293A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802293A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802293AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802293B0: lw          $v0, -0x7660($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7660);
    // 0x802293B4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802293B8: jalr        $v0
    // 0x802293BC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802293BC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_4:
    // 0x802293C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802293C4: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x802293C8: jal         0x8004DD04
    // 0x802293CC: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x802293CC: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_5:
    // 0x802293D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802293D4: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x802293D8: jal         0x8004DD04
    // 0x802293DC: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x802293DC: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_6:
    // 0x802293E0: jal         0x8005FB90
    // 0x802293E4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x802293E4: nop

    after_7:
    // 0x802293E8: jal         0x80060018
    // 0x802293EC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x802293EC: nop

    after_8:
    // 0x802293F0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802293F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802293F8: bne         $v1, $v0, L_8022947C
    if (ctx->r3 != ctx->r2) {
        // 0x802293FC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022947C;
    }
    // 0x802293FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80229400: j           L_8022947C
    // 0x80229404: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022947C;
    // 0x80229404: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229408:
    // 0x80229408: jal         0x80061798
    // 0x8022940C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_9;
    // 0x8022940C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x80229410: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229418: jal         0x80036B00
    // 0x8022941C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_10;
    // 0x8022941C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80229420: jal         0x80054578
    // 0x80229424: nop

    func_80054578_2F978(rdram, ctx);
        goto after_11;
    // 0x80229424: nop

    after_11:
    // 0x80229428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022942C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229430: jal         0x80034844
    // 0x80229434: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_12;
    // 0x80229434: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_12:
    // 0x80229438: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022943C: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x80229440: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80229444: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
L_80229448:
    // 0x80229448: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022944C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229450: j           L_8022947C
    // 0x80229454: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022947C;
    // 0x80229454: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229458:
    // 0x80229458: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022945C: jal         0x80070050
    // 0x80229460: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x80229460: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_13:
    // 0x80229464: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    // 0x80229468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022946C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229470: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x80229474: jal         0x8006036C
    // 0x80229478: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x80229478: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_14:
L_8022947C:
    // 0x8022947C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229484: jr          $ra
    // 0x80229488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FC64_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FC68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FC6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FC70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FC74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FC78: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FC7C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022FC80: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022FC84: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022FC88: beq         $v0, $zero, L_8022FE44
    if (ctx->r2 == 0) {
        // 0x8022FC8C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022FE44;
    }
    // 0x8022FC8C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FC90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FC94: addu        $at, $at, $v0
    gpr jr_addend_8022FC9C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FC98: lw          $v0, -0x60E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X60E0);
    // 0x8022FC9C: jr          $v0
    // 0x8022FCA0: nop

    switch (jr_addend_8022FC9C >> 2) {
        case 0: goto L_8022FCA4; break;
        case 1: goto L_8022FD64; break;
        case 2: goto L_8022FD80; break;
        case 3: goto L_8022FDE8; break;
        case 4: goto L_8022FE14; break;
        default: switch_error(__func__, 0x8022FC9C, 0x80239F20);
    }
    // 0x8022FCA0: nop

L_8022FCA4:
    // 0x8022FCA4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FCA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FCAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FCB0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022FCB4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022FCB8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022FCBC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022FCC0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022FCC4: jal         0x8004D5D4
    // 0x8022FCC8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FCC8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022FCCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FCD0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FCD4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FCD8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FCDC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FCE0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FCE4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FCE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FCEC: addiu       $v0, $v0, -0x6D00
    ctx->r2 = ADD32(ctx->r2, -0X6D00);
    // 0x8022FCF0: jal         0x8003E934
    // 0x8022FCF4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022FCF4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FCF8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FCFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FD00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FD04: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022FD08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FD0C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022FD10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FD14: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FD18: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FD1C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022FD20: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022FD24: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022FD28: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022FD2C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022FD30: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022FD34: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022FD38: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022FD3C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022FD40: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022FD44: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022FD48: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022FD4C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022FD50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FD54: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022FD58: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FD5C: j           L_8022FE44
    // 0x8022FD60: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022FE44;
    // 0x8022FD60: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022FD64:
    // 0x8022FD64: jal         0x8022FFF0
    // 0x8022FD68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FFF0_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022FD68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022FD6C: beq         $v0, $zero, L_8022FE48
    if (ctx->r2 == 0) {
        // 0x8022FD70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE48;
    }
    // 0x8022FD70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD74: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD78: j           L_8022FE40
    // 0x8022FD7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022FE40;
    // 0x8022FD7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022FD80:
    // 0x8022FD80: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FD84: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022FD88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FD8C: jal         0x8004F820
    // 0x8022FD90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022FD90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022FD94: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FD98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FD9C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FDA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FDA4: bne         $v0, $zero, L_8022FE44
    if (ctx->r2 != 0) {
        // 0x8022FDA8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022FE44;
    }
    // 0x8022FDA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FDAC: jal         0x8003516C
    // 0x8022FDB0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022FDB0: nop

    after_4:
    // 0x8022FDB4: bne         $v0, $zero, L_8022FE48
    if (ctx->r2 != 0) {
        // 0x8022FDB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE48;
    }
    // 0x8022FDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FDC0: jal         0x800616FC
    // 0x8022FDC4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022FDC4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022FDC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDCC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022FDD0: jal         0x80050294
    // 0x8022FDD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022FDD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022FDD8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FDDC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FDE0: j           L_8022FE40
    // 0x8022FDE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022FE40;
    // 0x8022FDE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022FDE8:
    // 0x8022FDE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FDEC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FDF0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FDF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FDF8: bne         $v0, $zero, L_8022FE48
    if (ctx->r2 != 0) {
        // 0x8022FDFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE48;
    }
    // 0x8022FDFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE00: jal         0x80034E3C
    // 0x8022FE04: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022FE04: nop

    after_7:
    // 0x8022FE08: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FE0C: j           L_8022FE40
    // 0x8022FE10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022FE40;
    // 0x8022FE10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022FE14:
    // 0x8022FE14: jal         0x8003516C
    // 0x8022FE18: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022FE18: nop

    after_8:
    // 0x8022FE1C: bne         $v0, $zero, L_8022FE48
    if (ctx->r2 != 0) {
        // 0x8022FE20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE48;
    }
    // 0x8022FE20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE24: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022FE28: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FE2C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022FE30: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022FE34: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022FE38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE3C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022FE40:
    // 0x8022FE40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FE44:
    // 0x8022FE44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022FE48:
    // 0x8022FE48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FE4C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022FE50: jal         0x80047284
    // 0x8022FE54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022FE54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022FE58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE64: jr          $ra
    // 0x8022FE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
