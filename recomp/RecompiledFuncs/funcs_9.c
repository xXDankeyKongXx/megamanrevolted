#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8005A404_35804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005A404: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005A408: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A40C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005A410: addiu       $s0, $s0, -0x3E36
    ctx->r16 = ADD32(ctx->r16, -0X3E36);
    // 0x8005A414: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8005A418: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005A41C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8005A420: bne         $v0, $zero, L_8005A61C
    if (ctx->r2 != 0) {
        // 0x8005A424: nop
    
            goto L_8005A61C;
    }
    // 0x8005A424: nop

    // 0x8005A428: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005A42C: lhu         $v1, -0x783E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783E);
    // 0x8005A430: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8005A434: beq         $v0, $zero, L_8005A444
    if (ctx->r2 == 0) {
        // 0x8005A438: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8005A444;
    }
    // 0x8005A438: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8005A43C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A440: sh          $v0, -0x3DAE($at)
    MEM_H(-0X3DAE, ctx->r1) = ctx->r2;
L_8005A444:
    // 0x8005A444: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8005A448: beq         $v0, $zero, L_8005A458
    if (ctx->r2 == 0) {
        // 0x8005A44C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005A458;
    }
    // 0x8005A44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A450: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A454: sh          $v0, -0x3DAE($at)
    MEM_H(-0X3DAE, ctx->r1) = ctx->r2;
L_8005A458:
    // 0x8005A458: lh          $v1, 0x88($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X88);
    // 0x8005A45C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A460: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A464: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005A468: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A46C: sw          $v0, -0x3DE0($at)
    MEM_W(-0X3DE0, ctx->r1) = ctx->r2;
    // 0x8005A470: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x8005A474: bne         $v0, $zero, L_8005A484
    if (ctx->r2 != 0) {
        // 0x8005A478: nop
    
            goto L_8005A484;
    }
    // 0x8005A478: nop

    // 0x8005A47C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A480: sw          $zero, -0x3DE0($at)
    MEM_W(-0X3DE0, ctx->r1) = 0;
L_8005A484:
    // 0x8005A484: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A488: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A48C: bgez        $v0, L_8005A4A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005A490: nop
    
            goto L_8005A4A8;
    }
    // 0x8005A490: nop

    // 0x8005A494: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8005A498: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A49C: sw          $v0, -0x3DE0($at)
    MEM_W(-0X3DE0, ctx->r1) = ctx->r2;
    // 0x8005A4A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A4A4: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
L_8005A4A8:
    // 0x8005A4A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005A4AC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005A4B0: lbu         $a0, -0x14B0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X14B0);
    // 0x8005A4B4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8005A4B8: addiu       $s1, $s1, -0x14B0
    ctx->r17 = ADD32(ctx->r17, -0X14B0);
    // 0x8005A4BC: jal         0x8006033C
    // 0x8005A4C0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005A4C0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    after_0:
    // 0x8005A4C4: bne         $v0, $zero, L_8005A4DC
    if (ctx->r2 != 0) {
        // 0x8005A4C8: nop
    
            goto L_8005A4DC;
    }
    // 0x8005A4C8: nop

    // 0x8005A4CC: lh          $v0, 0x88($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X88);
    // 0x8005A4D0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8005A4D4: j           L_8005A61C
    // 0x8005A4D8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_8005A61C;
    // 0x8005A4D8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8005A4DC:
    // 0x8005A4DC: lh          $v0, 0x88($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X88);
    // 0x8005A4E0: beq         $v0, $zero, L_8005A534
    if (ctx->r2 == 0) {
        // 0x8005A4E4: sll         $v0, $v0, 4
        ctx->r2 = S32(ctx->r2 << 4);
            goto L_8005A534;
    }
    // 0x8005A4E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8005A4E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A4EC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8005A4F0: jal         0x80061798
    // 0x8005A4F4: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    func_80061798_3CB98(rdram, ctx);
        goto after_1;
    // 0x8005A4F4: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    after_1:
    // 0x8005A4F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A4FC: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A500: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A504: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A508: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8005A50C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8005A510: lbu         $a2, -0x14D4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X14D4);
    // 0x8005A514: jal         0x80061510
    // 0x8005A518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x8005A518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8005A51C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A520: sh          $zero, -0x3DB4($at)
    MEM_H(-0X3DB4, ctx->r1) = 0;
    // 0x8005A524: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A528: sh          $zero, -0x3DB6($at)
    MEM_H(-0X3DB6, ctx->r1) = 0;
    // 0x8005A52C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A530: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
L_8005A534:
    // 0x8005A534: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005A538: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005A53C: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8005A540: beq         $v0, $zero, L_8005A558
    if (ctx->r2 == 0) {
        // 0x8005A544: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005A558;
    }
    // 0x8005A544: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005A548: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A54C: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
    // 0x8005A550: jal         0x80061798
    // 0x8005A554: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x8005A554: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_8005A558:
    // 0x8005A558: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005A55C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005A560: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x8005A564: beq         $v0, $zero, L_8005A61C
    if (ctx->r2 == 0) {
        // 0x8005A568: nop
    
            goto L_8005A61C;
    }
    // 0x8005A568: nop

    // 0x8005A56C: jal         0x80061798
    // 0x8005A570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_4;
    // 0x8005A570: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8005A574: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A578: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A57C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A580: jal         0x80061510
    // 0x8005A584: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x8005A584: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    after_5:
    // 0x8005A588: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    // 0x8005A58C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005A590: jal         0x8002A2F8
    // 0x8005A594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8005A594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8005A598: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A59C: lw          $v1, -0x3DE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3DE0);
    // 0x8005A5A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005A5A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A5A8: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
    // 0x8005A5AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A5B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A5B4: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
    // 0x8005A5B8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8005A5BC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005A5C0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8005A5C4: addiu       $s0, $s0, 0x4B22
    ctx->r16 = ADD32(ctx->r16, 0X4B22);
    // 0x8005A5C8: jal         0x80071020
    // 0x8005A5CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_80071020_4C420(rdram, ctx);
        goto after_7;
    // 0x8005A5CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_7:
    // 0x8005A5D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005A5D4: lb          $v0, 0x4DFE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4DFE);
    // 0x8005A5D8: blez        $v0, L_8005A61C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005A5DC: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8005A61C;
    }
    // 0x8005A5DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8005A5E0: jal         0x8004CB2C
    // 0x8005A5E4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_8;
    // 0x8005A5E4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_8:
    // 0x8005A5E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005A5EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005A5F0: sb          $v0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r2;
    // 0x8005A5F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005A5F8: blez        $v0, L_8005A60C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005A5FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005A60C;
    }
    // 0x8005A5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A600: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005A604: j           L_8005A614
    // 0x8005A608: sb          $v0, 0x4DFF($at)
    MEM_B(0X4DFF, ctx->r1) = ctx->r2;
        goto L_8005A614;
    // 0x8005A608: sb          $v0, 0x4DFF($at)
    MEM_B(0X4DFF, ctx->r1) = ctx->r2;
L_8005A60C:
    // 0x8005A60C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005A610: sb          $zero, 0x4DFF($at)
    MEM_B(0X4DFF, ctx->r1) = 0;
L_8005A614:
    // 0x8005A614: jal         0x80073D20
    // 0x8005A618: nop

    func_80073D20_4F120(rdram, ctx);
        goto after_9;
    // 0x8005A618: nop

    after_9:
L_8005A61C:
    // 0x8005A61C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8005A620: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A628: jr          $ra
    // 0x8005A62C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005A62C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008F46C_6A86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008F46C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008F470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008F478: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008F47C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008F480: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008F484: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8008F488: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F490: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F494: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008F498: addiu       $s2, $zero, 0x20
    ctx->r18 = ADD32(0, 0X20);
    // 0x8008F49C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8008F4A0: jal         0x80098CC0
    // 0x8008F4A4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8008F4A4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_0:
    // 0x8008F4A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F4AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F4B0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8008F4B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F4B8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8008F4BC: jal         0x80098CC0
    // 0x8008F4C0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8008F4C0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_1:
    // 0x8008F4C4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8008F4C8: jalr        $s1
    // 0x8008F4CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x8008F4CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x8008F4D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F4D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F4D8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8008F4DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F4E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008F4E4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x8008F4E8: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x8008F4EC: sw          $s1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r17;
    // 0x8008F4F0: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x8008F4F4: jal         0x80098CC0
    // 0x8008F4F8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8008F4F8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_3:
    // 0x8008F4FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F500: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F504: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008F508: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8008F50C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8008F510: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F514: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8008F518: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8008F51C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8008F520: sw          $s1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r17;
    // 0x8008F524: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8008F528: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x8008F52C: jal         0x80098CC0
    // 0x8008F530: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8008F530: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8008F534: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x8008F538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008F53C: sw          $s1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r17;
    // 0x8008F540: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x8008F544: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    // 0x8008F548: sh          $v0, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r2;
    // 0x8008F54C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8008F550: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    // 0x8008F554: sh          $v0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r2;
    // 0x8008F558: sh          $zero, 0x60($s0)
    MEM_H(0X60, ctx->r16) = 0;
    // 0x8008F55C: sh          $zero, 0x62($s0)
    MEM_H(0X62, ctx->r16) = 0;
    // 0x8008F560: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8008F564: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8008F568: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8008F56C: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8008F570: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8008F574: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8008F578: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8008F57C: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x8008F580: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x8008F584: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008F588: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008F58C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008F590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F598: jr          $ra
    // 0x8008F59C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008F59C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80035448_10848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035448: jr          $ra
    // 0x8003544C: nop

    TRACE_RETURN()
    return;
    // 0x8003544C: nop

;}
RECOMP_FUNC void func_800501C0_2B5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800501C0: srl         $v1, $a2, 4
    ctx->r3 = S32(U32(ctx->r6) >> 4);
    // 0x800501C4: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x800501C8: beq         $v0, $zero, L_80050264
    if (ctx->r2 == 0) {
        // 0x800501CC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80050264;
    }
    // 0x800501CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800501D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800501D4: addu        $at, $at, $v0
    gpr jr_addend_800501DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800501D8: lw          $v0, 0x23B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X23B8);
    // 0x800501DC: jr          $v0
    // 0x800501E0: nop

    switch (jr_addend_800501DC >> 2) {
        case 0: goto L_800501E4; break;
        case 1: goto L_800501E4; break;
        case 2: goto L_800501E4; break;
        case 3: goto L_800501E4; break;
        case 4: goto L_800501FC; break;
        case 5: goto L_800501FC; break;
        case 6: goto L_80050230; break;
        case 7: goto L_80050230; break;
        case 8: goto L_80050264; break;
        default: switch_error(__func__, 0x800501DC, 0x800D23B8);
    }
    // 0x800501E0: nop

L_800501E4:
    // 0x800501E4: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x800501E8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800501EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800501F0: lw          $v1, -0x6F00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F00);
    // 0x800501F4: j           L_80050278
    // 0x800501F8: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
        goto L_80050278;
    // 0x800501F8: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_800501FC:
    // 0x800501FC: lb          $v0, 0x170($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X170);
    // 0x80050200: beq         $v0, $zero, L_8005021C
    if (ctx->r2 == 0) {
        // 0x80050204: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_8005021C;
    }
    // 0x80050204: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80050208: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005020C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050210: lw          $v1, -0x4480($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4480);
    // 0x80050214: j           L_80050278
    // 0x80050218: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
        goto L_80050278;
    // 0x80050218: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_8005021C:
    // 0x8005021C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050224: lw          $v1, -0x4900($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4900);
    // 0x80050228: j           L_80050278
    // 0x8005022C: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
        goto L_80050278;
    // 0x8005022C: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_80050230:
    // 0x80050230: lb          $v0, 0x171($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X171);
    // 0x80050234: beq         $v0, $zero, L_80050250
    if (ctx->r2 == 0) {
        // 0x80050238: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_80050250;
    }
    // 0x80050238: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x8005023C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050240: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050244: lw          $v1, -0x3C00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C00);
    // 0x80050248: j           L_80050278
    // 0x8005024C: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
        goto L_80050278;
    // 0x8005024C: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_80050250:
    // 0x80050250: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050254: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050258: lw          $v1, -0x4080($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4080);
    // 0x8005025C: j           L_80050278
    // 0x80050260: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
        goto L_80050278;
    // 0x80050260: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_80050264:
    // 0x80050264: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80050268: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005026C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050270: lw          $v1, -0x5400($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5400);
    // 0x80050274: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
L_80050278:
    // 0x80050278: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8005027C: sw          $v1, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r3;
    // 0x80050280: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80050284: sb          $a2, 0x104($a0)
    MEM_B(0X104, ctx->r4) = ctx->r6;
    // 0x80050288: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005028C: jr          $ra
    // 0x80050290: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80050290: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004B5E8_269E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B5EC: bgez        $a0, L_8004B664
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8004B5F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8004B664;
    }
    // 0x8004B5F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004B5F4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8004B5F8: addiu       $a0, $a0, 0x53E0
    ctx->r4 = ADD32(ctx->r4, 0X53E0);
    // 0x8004B5FC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8004B600:
    // 0x8004B600: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x8004B604: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8004B608: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004B60C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8004B610: bne         $v0, $zero, L_8004B600
    if (ctx->r2 != 0) {
        // 0x8004B614: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_8004B600;
    }
    // 0x8004B614: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8004B618: beq         $v1, $zero, L_8004B62C
    if (ctx->r3 == 0) {
        // 0x8004B61C: nop
    
            goto L_8004B62C;
    }
    // 0x8004B61C: nop

    // 0x8004B620: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x8004B624: jal         0x8004CB2C
    // 0x8004B628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8004B628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
L_8004B62C:
    // 0x8004B62C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8004B630: addiu       $a0, $a0, 0x53E0
    ctx->r4 = ADD32(ctx->r4, 0X53E0);
    // 0x8004B634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004B638: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
L_8004B63C:
    // 0x8004B63C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004B640: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8004B644: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8004B648: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8004B64C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8004B650: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8004B654: bne         $v0, $zero, L_8004B63C
    if (ctx->r2 != 0) {
        // 0x8004B658: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_8004B63C;
    }
    // 0x8004B658: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8004B65C: j           L_8004B694
    // 0x8004B660: nop

        goto L_8004B694;
    // 0x8004B660: nop

L_8004B664:
    // 0x8004B664: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8004B668: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004B66C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B670: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8004B674: addiu       $v1, $v1, 0x53E0
    ctx->r3 = ADD32(ctx->r3, 0X53E0);
    // 0x8004B678: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B67C: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x8004B680: beq         $v0, $zero, L_8004B694
    if (ctx->r2 == 0) {
        // 0x8004B684: sb          $zero, 0x0($a0)
        MEM_B(0X0, ctx->r4) = 0;
            goto L_8004B694;
    }
    // 0x8004B684: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8004B688: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x8004B68C: jal         0x8004CB2C
    // 0x8004B690: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8004B690: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_8004B694:
    // 0x8004B694: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004B698: jr          $ra
    // 0x8004B69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004B69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80076F80_52380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076F80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80076F84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80076F88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80076F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80076F90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80076F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80076F98: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80076F9C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80076FA0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80076FA4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80076FA8: addiu       $s2, $s2, 0x47B8
    ctx->r18 = ADD32(ctx->r18, 0X47B8);
    // 0x80076FAC: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x80076FB0: beq         $v0, $zero, L_8007726C
    if (ctx->r2 == 0) {
        // 0x80076FB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8007726C;
    }
    // 0x80076FB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80076FB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80076FBC: addu        $at, $at, $v0
    gpr jr_addend_80076FC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80076FC0: lw          $v0, 0x2BD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BD0);
    // 0x80076FC4: jr          $v0
    // 0x80076FC8: nop

    switch (jr_addend_80076FC4 >> 2) {
        case 0: goto L_80076FCC; break;
        case 1: goto L_800771D8; break;
        case 2: goto L_8007706C; break;
        case 3: goto L_80077214; break;
        case 4: goto L_80077224; break;
        case 5: goto L_80077094; break;
        case 6: goto L_800770C8; break;
        case 7: goto L_800770E4; break;
        case 8: goto L_80077100; break;
        case 9: goto L_800771D8; break;
        case 10: goto L_800771F4; break;
        case 11: goto L_80077214; break;
        case 12: goto L_80077224; break;
        case 13: goto L_8007723C; break;
        default: switch_error(__func__, 0x80076FC4, 0x800D2BD0);
    }
    // 0x80076FC8: nop

L_80076FCC:
    // 0x80076FCC: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    // 0x80076FD0: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    // 0x80076FD4: jal         0x8005F6B4
    // 0x80076FD8: lh          $a2, 0x4($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X4);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80076FD8: lh          $a2, 0x4($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X4);
    after_0:
    // 0x80076FDC: lh          $a0, 0x10($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X10);
    // 0x80076FE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80076FE4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80076FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80076FEC: jal         0x800324B4
    // 0x80076FF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80076FF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x80076FF4: lh          $a0, 0x10($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X10);
    // 0x80076FF8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80076FFC: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80077000: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80077004: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80077008: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007700C: sh          $v1, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r3;
    // 0x80077010: jal         0x80032498
    // 0x80077014: sh          $a1, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80077014: sh          $a1, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r5;
    after_2:
    // 0x80077018: lhu         $v1, 0x4($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4);
    // 0x8007701C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80077020: lh          $a0, 0x43A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43A);
    // 0x80077024: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80077028: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007702C: sh          $v1, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r3;
    // 0x80077030: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x80077034: lh          $a1, 0x43C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43C);
    // 0x80077038: lhu         $a2, 0x10($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X10);
    // 0x8007703C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80077040: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80077044: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x80077048: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8007704C: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80077050: sw          $a0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r4;
    // 0x80077054: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80077058: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8007705C: sw          $v1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r3;
    // 0x80077060: sh          $a2, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r6;
    // 0x80077064: j           L_8007722C
    // 0x80077068: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
        goto L_8007722C;
    // 0x80077068: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
L_8007706C:
    // 0x8007706C: jal         0x8006033C
    // 0x80077070: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80077070: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x80077074: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x80077078: nop
    
            goto L_8007726C;
    }
    // 0x80077078: nop

    // 0x8007707C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80077080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077084: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80077088: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8007708C: j           L_80077230
    // 0x80077090: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80077230;
    // 0x80077090: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80077094:
    // 0x80077094: jal         0x8006033C
    // 0x80077098: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80077098: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_4:
    // 0x8007709C: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x800770A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007726C;
    }
    // 0x800770A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800770A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800770A8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x800770AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x800770B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800770B4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x800770B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800770BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800770C0: j           L_8007722C
    // 0x800770C4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
        goto L_8007722C;
    // 0x800770C4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_800770C8:
    // 0x800770C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800770CC: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x800770D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800770D4: beq         $v1, $v0, L_8007722C
    if (ctx->r3 == ctx->r2) {
        // 0x800770D8: nop
    
            goto L_8007722C;
    }
    // 0x800770D8: nop

    // 0x800770DC: j           L_8007726C
    // 0x800770E0: nop

        goto L_8007726C;
    // 0x800770E0: nop

L_800770E4:
    // 0x800770E4: jal         0x8006033C
    // 0x800770E8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x800770E8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_5:
    // 0x800770EC: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x800770F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007726C;
    }
    // 0x800770F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800770F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800770F8: j           L_8007722C
    // 0x800770FC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
        goto L_8007722C;
    // 0x800770FC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
L_80077100:
    // 0x80077100: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80077104: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x80077108: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x8007710C: nop
    
            goto L_8007726C;
    }
    // 0x8007710C: nop

    // 0x80077110: lh          $a0, 0x8($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X8);
    // 0x80077114: lhu         $v0, 0x12($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X12);
    // 0x80077118: lh          $a1, 0xA($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XA);
    // 0x8007711C: lh          $a2, 0xC($s2)
    ctx->r6 = MEM_H(ctx->r18, 0XC);
    // 0x80077120: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80077124: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x80077128: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007712C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077130: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077134: lw          $v0, -0x3484($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3484);
    // 0x80077138: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8007713C: jal         0x8005F6B4
    // 0x80077140: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_6;
    // 0x80077140: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    after_6:
    // 0x80077144: lh          $a0, 0x12($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X12);
    // 0x80077148: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007714C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80077150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077154: jal         0x800324B4
    // 0x80077158: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x80077158: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_7:
    // 0x8007715C: lh          $a0, 0x12($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X12);
    // 0x80077160: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80077164: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80077168: lhu         $a1, 0xA($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0XA);
    // 0x8007716C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80077170: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077174: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80077178: sh          $v1, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r3;
    // 0x8007717C: jal         0x80032498
    // 0x80077180: sh          $a1, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x80077180: sh          $a1, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r5;
    after_8:
    // 0x80077184: lhu         $v1, 0xC($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XC);
    // 0x80077188: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8007718C: lh          $a0, 0x43A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X43A);
    // 0x80077190: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80077194: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077198: sh          $v1, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r3;
    // 0x8007719C: lh          $v1, 0x438($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X438);
    // 0x800771A0: lh          $a1, 0x43C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43C);
    // 0x800771A4: lhu         $a2, 0x12($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X12);
    // 0x800771A8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800771AC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800771B0: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x800771B4: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x800771B8: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x800771BC: sw          $a0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r4;
    // 0x800771C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800771C4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800771C8: sw          $v1, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r3;
    // 0x800771CC: sh          $a2, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r6;
    // 0x800771D0: j           L_8007722C
    // 0x800771D4: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
        goto L_8007722C;
    // 0x800771D4: sw          $a1, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r5;
L_800771D8:
    // 0x800771D8: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x800771DC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    // 0x800771E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800771E4: jal         0x8006036C
    // 0x800771E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x800771E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    after_9:
    // 0x800771EC: j           L_8007726C
    // 0x800771F0: nop

        goto L_8007726C;
    // 0x800771F0: nop

L_800771F4:
    // 0x800771F4: jal         0x8006033C
    // 0x800771F8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x800771F8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_10:
    // 0x800771FC: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x80077200: nop
    
            goto L_8007726C;
    }
    // 0x80077200: nop

    // 0x80077204: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80077208: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007720C: j           L_8007722C
    // 0x80077210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8007722C;
    // 0x80077210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80077214:
    // 0x80077214: jal         0x800772E8
    // 0x80077218: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800772E8_526E8(rdram, ctx);
        goto after_11;
    // 0x80077218: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8007721C: j           L_8007726C
    // 0x80077220: nop

        goto L_8007726C;
    // 0x80077220: nop

L_80077224:
    // 0x80077224: jal         0x80060590
    // 0x80077228: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_12;
    // 0x80077228: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_12:
L_8007722C:
    // 0x8007722C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
L_80077230:
    // 0x80077230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077234: j           L_8007726C
    // 0x80077238: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8007726C;
    // 0x80077238: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8007723C:
    // 0x8007723C: jal         0x8006033C
    // 0x80077240: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x80077240: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_13:
    // 0x80077244: bne         $v0, $zero, L_8007726C
    if (ctx->r2 != 0) {
        // 0x80077248: nop
    
            goto L_8007726C;
    }
    // 0x80077248: nop

    // 0x8007724C: jal         0x80060590
    // 0x80077250: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x80077250: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_14:
    // 0x80077254: jal         0x8006036C
    // 0x80077258: addiu       $a0, $zero, 0x7B3
    ctx->r4 = ADD32(0, 0X7B3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x80077258: addiu       $a0, $zero, 0x7B3
    ctx->r4 = ADD32(0, 0X7B3);
    after_15:
    // 0x8007725C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80077260: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80077264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077268: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8007726C:
    // 0x8007726C: jal         0x8005FB90
    // 0x80077270: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_16;
    // 0x80077270: nop

    after_16:
    // 0x80077274: jal         0x80060018
    // 0x80077278: nop

    func_80060018_3B418(rdram, ctx);
        goto after_17;
    // 0x80077278: nop

    after_17:
    // 0x8007727C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80077280: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80077284: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80077288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007728C: jr          $ra
    // 0x80077290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80077290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007ABC4_55FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007ABC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007ABC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007ABCC: jal         0x8007AC24
    // 0x8007ABD0: nop

    func_8007AC24_56024(rdram, ctx);
        goto after_0;
    // 0x8007ABD0: nop

    after_0:
    // 0x8007ABD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007ABD8: jr          $ra
    // 0x8007ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80040EEC_1C2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040EF0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80040EF4: beq         $a1, $zero, L_80040F14
    if (ctx->r5 == 0) {
        // 0x80040EF8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80040F14;
    }
    // 0x80040EF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80040EFC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040F00: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80040F04: jal         0x8009A3B4
    // 0x80040F08: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80040F08: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x80040F0C: j           L_80040F24
    // 0x80040F10: nop

        goto L_80040F24;
    // 0x80040F10: nop

L_80040F14:
    // 0x80040F14: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040F18: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80040F1C: jal         0x8009A2B0
    // 0x80040F20: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x80040F20: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
L_80040F24:
    // 0x80040F24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80040F28: jr          $ra
    // 0x80040F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80040F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80032510_D910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032514: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80032518: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8003251C: bne         $a0, $v0, L_8003252C
    if (ctx->r4 != ctx->r2) {
        // 0x80032520: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8003252C;
    }
    // 0x80032520: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80032524: j           L_80032548
    // 0x80032528: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_80032548;
    // 0x80032528: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_8003252C:
    // 0x8003252C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80032530: beql        $a0, $v0, L_80032548
    if (ctx->r4 == ctx->r2) {
        // 0x80032534: addiu       $v0, $zero, -0x1000
        ctx->r2 = ADD32(0, -0X1000);
            goto L_80032548;
    }
    goto skip_0;
    // 0x80032534: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    skip_0:
    // 0x80032538: jal         0x80099F30
    // 0x8003253C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    sins(rdram, ctx);
        goto after_0;
    // 0x8003253C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_0:
    // 0x80032540: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80032544: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80032548:
    // 0x80032548: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003254C: jr          $ra
    // 0x80032550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _Litob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A24A0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800A24A4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800A24A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800A24AC: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800A24B0: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x800A24B4: addiu       $s6, $s6, 0x1170
    ctx->r22 = ADD32(ctx->r22, 0X1170);
    // 0x800A24B8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x800A24BC: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x800A24C0: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800A24C4: addiu       $v0, $zero, 0x58
    ctx->r2 = ADD32(0, 0X58);
    // 0x800A24C8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800A24CC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800A24D0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800A24D4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800A24D8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800A24DC: bne         $a1, $v0, L_800A24EC
    if (ctx->r5 != ctx->r2) {
        // 0x800A24E0: sw          $s0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r16;
            goto L_800A24EC;
    }
    // 0x800A24E0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800A24E4: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x800A24E8: addiu       $s6, $s6, 0x1184
    ctx->r22 = ADD32(ctx->r22, 0X1184);
L_800A24EC:
    // 0x800A24EC: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x800A24F0: beq         $a1, $v0, L_800A2518
    if (ctx->r5 == ctx->r2) {
        // 0x800A24F4: xori        $v1, $a1, 0x78
        ctx->r3 = ctx->r5 ^ 0X78;
            goto L_800A2518;
    }
    // 0x800A24F4: xori        $v1, $a1, 0x78
    ctx->r3 = ctx->r5 ^ 0X78;
    // 0x800A24F8: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x800A24FC: xori        $v0, $a1, 0x58
    ctx->r2 = ctx->r5 ^ 0X58;
    // 0x800A2500: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A2504: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800A2508: beq         $v1, $zero, L_800A251C
    if (ctx->r3 == 0) {
        // 0x800A250C: addiu       $s3, $zero, 0x10
        ctx->r19 = ADD32(0, 0X10);
            goto L_800A251C;
    }
    // 0x800A250C: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x800A2510: j           L_800A251C
    // 0x800A2514: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
        goto L_800A251C;
    // 0x800A2514: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_800A2518:
    // 0x800A2518: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_800A251C:
    // 0x800A251C: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x800A2520: lw          $s5, 0x4($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X4);
    // 0x800A2524: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x800A2528: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A252C: xori        $v1, $v0, 0x64
    ctx->r3 = ctx->r2 ^ 0X64;
    // 0x800A2530: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2534: xori        $v0, $v0, 0x69
    ctx->r2 = ctx->r2 ^ 0X69;
    // 0x800A2538: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A253C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A2540: beq         $v1, $zero, L_800A2564
    if (ctx->r3 == 0) {
        // 0x800A2544: addiu       $s2, $zero, 0x18
        ctx->r18 = ADD32(0, 0X18);
            goto L_800A2564;
    }
    // 0x800A2544: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x800A2548: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800A254C: bgez        $v0, L_800A2564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A2550: nop
    
            goto L_800A2564;
    }
    // 0x800A2550: nop

    // 0x800A2554: negu        $s5, $s5
    ctx->r21 = SUB32(0, ctx->r21);
    // 0x800A2558: negu        $s4, $s4
    ctx->r20 = SUB32(0, ctx->r20);
    // 0x800A255C: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
    // 0x800A2560: subu        $s4, $s4, $v0
    ctx->r20 = SUB32(ctx->r20, ctx->r2);
L_800A2564:
    // 0x800A2564: bnel        $s4, $zero, L_800A2584
    if (ctx->r20 != 0) {
        // 0x800A2568: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800A2584;
    }
    goto skip_0;
    // 0x800A2568: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_0:
    // 0x800A256C: bnel        $s5, $zero, L_800A2584
    if (ctx->r21 != 0) {
        // 0x800A2570: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800A2584;
    }
    goto skip_1;
    // 0x800A2570: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_1:
    // 0x800A2574: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2578: beq         $v0, $zero, L_800A25B0
    if (ctx->r2 == 0) {
        // 0x800A257C: addu        $a3, $s3, $zero
        ctx->r7 = ADD32(ctx->r19, 0);
            goto L_800A25B0;
    }
    // 0x800A257C: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x800A2580: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_800A2584:
    // 0x800A2584: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x800A2588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800A258C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800A2590: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x800A2594: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x800A2598: jal         0x800A3A00
    // 0x800A259C: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    __umoddi3_recomp(rdram, ctx);
        goto after_0;
    // 0x800A259C: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    after_0:
    // 0x800A25A0: addu        $v0, $s6, $v1
    ctx->r2 = ADD32(ctx->r22, ctx->r3);
    // 0x800A25A4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800A25A8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800A25AC: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
L_800A25B0:
    // 0x800A25B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800A25B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800A25B8: jal         0x800A39E0
    // 0x800A25BC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    __udivdi3_recomp(rdram, ctx);
        goto after_1;
    // 0x800A25BC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_1:
    // 0x800A25C0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800A25C4: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x800A25C8: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x800A25CC: addu        $s0, $s2, $v0
    ctx->r16 = ADD32(ctx->r18, ctx->r2);
L_800A25D0:
    // 0x800A25D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800A25D4: bgtz        $v0, L_800A25F0
    if (SIGNED(ctx->r2) > 0) {
        // 0x800A25D8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_800A25F0;
    }
    // 0x800A25D8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x800A25DC: bne         $v0, $zero, L_800A25F8
    if (ctx->r2 != 0) {
        // 0x800A25E0: slt         $v0, $zero, $s2
        ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_800A25F8;
    }
    // 0x800A25E0: slt         $v0, $zero, $s2
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800A25E4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x800A25E8: beq         $v0, $zero, L_800A25F8
    if (ctx->r2 == 0) {
        // 0x800A25EC: slt         $v0, $zero, $s2
        ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_800A25F8;
    }
    // 0x800A25EC: slt         $v0, $zero, $s2
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
L_800A25F0:
    // 0x800A25F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800A25F4: slt         $v0, $zero, $s2
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
L_800A25F8:
    // 0x800A25F8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A25FC: beq         $v0, $zero, L_800A2650
    if (ctx->r2 == 0) {
        // 0x800A2600: addu        $v1, $s3, $zero
        ctx->r3 = ADD32(ctx->r19, 0);
            goto L_800A2650;
    }
    // 0x800A2600: addu        $v1, $s3, $zero
    ctx->r3 = ADD32(ctx->r19, 0);
    // 0x800A2604: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x800A2608: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x800A260C: sra         $v0, $s3, 31
    ctx->r2 = S32(SIGNED(ctx->r19) >> 31);
    // 0x800A2610: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800A2614: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x800A2618: jal         0x800A3244
    // 0x800A261C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    lldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x800A261C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x800A2620: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800A2624: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800A2628: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800A262C: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x800A2630: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800A2634: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x800A2638: addu        $v0, $s6, $v1
    ctx->r2 = ADD32(ctx->r22, ctx->r3);
    // 0x800A263C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800A2640: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A2644: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800A2648: j           L_800A25D0
    // 0x800A264C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_800A25D0;
    // 0x800A264C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_800A2650:
    // 0x800A2650: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x800A2654: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800A2658: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x800A265C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800A2660: subu        $a2, $a2, $s2
    ctx->r6 = SUB32(ctx->r6, ctx->r18);
    // 0x800A2664: jal         0x8009A3B4
    // 0x800A2668: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800A2668: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    after_3:
    // 0x800A266C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2670: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2674: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800A2678: beq         $v0, $zero, L_800A2684
    if (ctx->r2 == 0) {
        // 0x800A267C: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_800A2684;
    }
    // 0x800A267C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x800A2680: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_800A2684:
    // 0x800A2684: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2688: bgez        $v0, L_800A26C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A268C: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_800A26C8;
    }
    // 0x800A268C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x800A2690: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2694: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x800A2698: bne         $v0, $v1, L_800A26C8
    if (ctx->r2 != ctx->r3) {
        // 0x800A269C: nop
    
            goto L_800A26C8;
    }
    // 0x800A269C: nop

    // 0x800A26A0: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x800A26A4: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x800A26A8: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x800A26AC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A26B0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800A26B4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800A26B8: subu        $s2, $v0, $a0
    ctx->r18 = SUB32(ctx->r2, ctx->r4);
    // 0x800A26BC: blez        $s2, L_800A26C8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x800A26C0: addu        $v0, $a1, $s2
        ctx->r2 = ADD32(ctx->r5, ctx->r18);
            goto L_800A26C8;
    }
    // 0x800A26C0: addu        $v0, $a1, $s2
    ctx->r2 = ADD32(ctx->r5, ctx->r18);
    // 0x800A26C4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_800A26C8:
    // 0x800A26C8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800A26CC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800A26D0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800A26D4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800A26D8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800A26DC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800A26E0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800A26E4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800A26E8: jr          $ra
    // 0x800A26EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x800A26EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8008498C_5FD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008498C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80084990: lhu         $v1, -0x1AB4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1AB4);
    // 0x80084994: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80084998: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8008499C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x800849A0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800849A4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800849A8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800849AC: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x800849B0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800849B4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800849B8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800849BC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800849C0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800849C4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800849C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800849CC: sltu        $v0, $s1, $v1
    ctx->r2 = ctx->r17 < ctx->r3 ? 1 : 0;
    // 0x800849D0: beq         $v0, $zero, L_80084CB4
    if (ctx->r2 == 0) {
        // 0x800849D4: sw          $a1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r5;
            goto L_80084CB4;
    }
    // 0x800849D4: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x800849D8: sltu        $v0, $s4, $v1
    ctx->r2 = ctx->r20 < ctx->r3 ? 1 : 0;
    // 0x800849DC: beq         $v0, $zero, L_80084CB4
    if (ctx->r2 == 0) {
        // 0x800849E0: nop
    
            goto L_80084CB4;
    }
    // 0x800849E0: nop

    // 0x800849E4: lui         $fp, 0x8021
    ctx->r30 = S32(0X8021 << 16);
    // 0x800849E8: addiu       $fp, $fp, -0x7C50
    ctx->r30 = ADD32(ctx->r30, -0X7C50);
    // 0x800849EC: beq         $fp, $zero, L_80084CB4
    if (ctx->r30 == 0) {
        // 0x800849F0: nop
    
            goto L_80084CB4;
    }
    // 0x800849F0: nop

    // 0x800849F4: jal         0x800281C8
    // 0x800849F8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800849F8: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_0:
    // 0x800849FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80084A00: beq         $s2, $zero, L_80084CB4
    if (ctx->r18 == 0) {
        // 0x80084A04: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_80084CB4;
    }
    // 0x80084A04: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80084A08: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80084A0C: lhu         $s3, 0x49A8($s3)
    ctx->r19 = MEM_HU(ctx->r19, 0X49A8);
    // 0x80084A10: sll         $v0, $s3, 3
    ctx->r2 = S32(ctx->r19 << 3);
    // 0x80084A14: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80084A18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80084A1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80084A20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80084A24: lhu         $v0, -0x1A44($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1A44);
    // 0x80084A28: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80084A2C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80084A30: beq         $v0, $t0, L_80084CB4
    if (ctx->r2 == ctx->r8) {
        // 0x80084A34: addiu       $s7, $zero, 0xFF
        ctx->r23 = ADD32(0, 0XFF);
            goto L_80084CB4;
    }
    // 0x80084A34: addiu       $s7, $zero, 0xFF
    ctx->r23 = ADD32(0, 0XFF);
    // 0x80084A38: addiu       $t0, $zero, 0x4210
    ctx->r8 = ADD32(0, 0X4210);
    // 0x80084A3C: sb          $s7, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r23;
    // 0x80084A40: sb          $zero, 0xF($s2)
    MEM_B(0XF, ctx->r18) = 0;
    // 0x80084A44: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
    // 0x80084A48: sb          $s1, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r17;
    // 0x80084A4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80084A50: lw          $v0, 0x442C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X442C);
    // 0x80084A54: andi        $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 & 0XFFFF;
    // 0x80084A58: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80084A5C: lw          $a1, -0x72A8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72A8);
    // 0x80084A60: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80084A64: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80084A68: addiu       $s0, $s0, -0xC50
    ctx->r16 = ADD32(ctx->r16, -0XC50);
    // 0x80084A6C: sh          $t0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r8;
    // 0x80084A70: addu        $a0, $v0, $s1
    ctx->r4 = ADD32(ctx->r2, ctx->r17);
    // 0x80084A74: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80084A78: addiu       $s5, $zero, -0x8
    ctx->r21 = ADD32(0, -0X8);
    // 0x80084A7C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80084A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80084A84: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80084A88: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80084A8C: and         $a3, $v0, $s5
    ctx->r7 = ctx->r2 & ctx->r21;
    // 0x80084A90: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084A94: sw          $a3, -0x2640($at)
    MEM_W(-0X2640, ctx->r1) = ctx->r7;
    // 0x80084A98: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x80084A9C: jal         0x80028D30
    // 0x80084AA0: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_1;
    // 0x80084AA0: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    after_1:
    // 0x80084AA4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80084AA8: lw          $v1, -0x26E8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26E8);
    // 0x80084AAC: addu        $s0, $v0, $s0
    ctx->r16 = ADD32(ctx->r2, ctx->r16);
    // 0x80084AB0: addu        $a0, $v1, $s1
    ctx->r4 = ADD32(ctx->r3, ctx->r17);
    // 0x80084AB4: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80084AB8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80084ABC: lw          $a1, -0x72A8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72A8);
    // 0x80084AC0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80084AC4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80084AC8: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80084ACC: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80084AD0: and         $a3, $s0, $s5
    ctx->r7 = ctx->r16 & ctx->r21;
    // 0x80084AD4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084AD8: sw          $a3, -0x2370($at)
    MEM_W(-0X2370, ctx->r1) = ctx->r7;
    // 0x80084ADC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80084AE0: jal         0x80028D30
    // 0x80084AE4: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x80084AE4: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    after_2:
    // 0x80084AE8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80084AEC: lw          $v0, -0x2640($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2640);
    // 0x80084AF0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80084AF4: lw          $v1, -0x2370($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2370);
    // 0x80084AF8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80084AFC: addiu       $a1, $s2, 0x18
    ctx->r5 = ADD32(ctx->r18, 0X18);
    // 0x80084B00: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80084B04: jal         0x8002C5A4
    // 0x80084B08: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_3;
    // 0x80084B08: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    after_3:
    // 0x80084B0C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x80084B10: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80084B14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80084B18: lw          $v1, -0x1AB0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1AB0);
    // 0x80084B1C: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80084B20: sll         $v0, $s6, 24
    ctx->r2 = S32(ctx->r22 << 24);
    // 0x80084B24: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80084B28: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80084B2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084B30: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x80084B34: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80084B38: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80084B3C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80084B40: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80084B44: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80084B48: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80084B4C: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x80084B50: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x80084B54: sb          $s7, 0x67($a3)
    MEM_B(0X67, ctx->r7) = ctx->r23;
    // 0x80084B58: sb          $s7, 0x66($a3)
    MEM_B(0X66, ctx->r7) = ctx->r23;
    // 0x80084B5C: jal         0x800283A8
    // 0x80084B60: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_4;
    // 0x80084B60: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    after_4:
    // 0x80084B64: jal         0x800281C8
    // 0x80084B68: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_800281C8_35C8(rdram, ctx);
        goto after_5;
    // 0x80084B68: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_5:
    // 0x80084B6C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80084B70: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x80084B74: addiu       $s6, $s6, -0x1AB0
    ctx->r22 = ADD32(ctx->r22, -0X1AB0);
    // 0x80084B78: beq         $s2, $zero, L_80084CB4
    if (ctx->r18 == 0) {
        // 0x80084B7C: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_80084CB4;
    }
    // 0x80084B7C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80084B80: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80084B84: lhu         $s3, 0x49AA($s3)
    ctx->r19 = MEM_HU(ctx->r19, 0X49AA);
    // 0x80084B88: sll         $v0, $s3, 3
    ctx->r2 = S32(ctx->r19 << 3);
    // 0x80084B8C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80084B90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80084B94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80084B98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80084B9C: lhu         $v0, -0x1A42($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1A42);
    // 0x80084BA0: beq         $v0, $t0, L_80084CB4
    if (ctx->r2 == ctx->r8) {
        // 0x80084BA4: sh          $v0, 0x0($s2)
        MEM_H(0X0, ctx->r18) = ctx->r2;
            goto L_80084CB4;
    }
    // 0x80084BA4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80084BA8: addiu       $t0, $zero, 0x4210
    ctx->r8 = ADD32(0, 0X4210);
    // 0x80084BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80084BB0: sb          $s7, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r23;
    // 0x80084BB4: sb          $zero, 0xF($s2)
    MEM_B(0XF, ctx->r18) = 0;
    // 0x80084BB8: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80084BBC: sb          $s4, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r20;
    // 0x80084BC0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80084BC4: lw          $v0, -0x738C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X738C);
    // 0x80084BC8: andi        $s1, $s4, 0xFFFF
    ctx->r17 = ctx->r20 & 0XFFFF;
    // 0x80084BCC: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80084BD0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80084BD4: addiu       $s0, $s0, 0x7FC0
    ctx->r16 = ADD32(ctx->r16, 0X7FC0);
    // 0x80084BD8: sh          $t0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r8;
    // 0x80084BDC: addu        $a0, $v0, $s1
    ctx->r4 = ADD32(ctx->r2, ctx->r17);
    // 0x80084BE0: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80084BE4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80084BE8: lw          $a1, -0x72A8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72A8);
    // 0x80084BEC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80084BF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80084BF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80084BF8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80084BFC: and         $a3, $v0, $s5
    ctx->r7 = ctx->r2 & ctx->r21;
    // 0x80084C00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80084C04: sw          $a3, 0xB24($at)
    MEM_W(0XB24, ctx->r1) = ctx->r7;
    // 0x80084C08: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x80084C0C: jal         0x80028D30
    // 0x80084C10: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_6;
    // 0x80084C10: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    after_6:
    // 0x80084C14: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80084C18: lw          $v1, -0xB94($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XB94);
    // 0x80084C1C: addu        $s0, $v0, $s0
    ctx->r16 = ADD32(ctx->r2, ctx->r16);
    // 0x80084C20: addu        $a0, $v1, $s1
    ctx->r4 = ADD32(ctx->r3, ctx->r17);
    // 0x80084C24: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80084C28: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80084C2C: lw          $a1, -0x72A8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72A8);
    // 0x80084C30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80084C34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80084C38: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80084C3C: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80084C40: and         $a3, $s0, $s5
    ctx->r7 = ctx->r16 & ctx->r21;
    // 0x80084C44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084C48: sw          $a3, -0x235C($at)
    MEM_W(-0X235C, ctx->r1) = ctx->r7;
    // 0x80084C4C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80084C50: jal         0x80028D30
    // 0x80084C54: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_7;
    // 0x80084C54: addu        $a2, $fp, $zero
    ctx->r6 = ADD32(ctx->r30, 0);
    after_7:
    // 0x80084C58: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80084C5C: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x80084C60: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80084C64: lw          $v1, -0x235C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X235C);
    // 0x80084C68: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80084C6C: addiu       $a1, $s2, 0x18
    ctx->r5 = ADD32(ctx->r18, 0X18);
    // 0x80084C70: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80084C74: jal         0x8002C5A4
    // 0x80084C78: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_8;
    // 0x80084C78: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    after_8:
    // 0x80084C7C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x80084C80: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80084C84: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80084C88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084C8C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80084C90: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80084C94: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80084C98: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80084C9C: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x80084CA0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x80084CA4: sb          $s7, 0x67($a3)
    MEM_B(0X67, ctx->r7) = ctx->r23;
    // 0x80084CA8: sb          $s7, 0x66($a3)
    MEM_B(0X66, ctx->r7) = ctx->r23;
    // 0x80084CAC: jal         0x800283A8
    // 0x80084CB0: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_9;
    // 0x80084CB0: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    after_9:
L_80084CB4:
    // 0x80084CB4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80084CB8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80084CBC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80084CC0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80084CC4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80084CC8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80084CCC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80084CD0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80084CD4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80084CD8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80084CDC: jr          $ra
    // 0x80084CE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80084CE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80084CE4: nop

    // 0x80084CE8: nop

    // 0x80084CEC: nop

;}
RECOMP_FUNC void func_80033358_E758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033358: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8003335C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80033360: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80033364: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80033368: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8003336C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033370: addiu       $a0, $a0, 0x4390
    ctx->r4 = ADD32(ctx->r4, 0X4390);
    // 0x80033374: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80033378: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8003337C: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x80033380: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80033384: jal         0x8009A3B4
    // 0x80033388: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80033388: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003338C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80033390: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80033394: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80033398: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003339C: mflo        $a0
    ctx->r4 = lo;
    // 0x800333A0: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x800333A4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x800333A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800333AC: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800333B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800333B4: addu        $s0, $a0, $v0
    ctx->r16 = ADD32(ctx->r4, ctx->r2);
    // 0x800333B8: nop

    // 0x800333BC: jal         0x80032424
    // 0x800333C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032424_D824(rdram, ctx);
        goto after_1;
    // 0x800333C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800333C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800333C8: beq         $s1, $zero, L_80033404
    if (ctx->r17 == 0) {
        // 0x800333CC: nop
    
            goto L_80033404;
    }
    // 0x800333CC: nop

    // 0x800333D0: div         $zero, $s0, $s1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r17)));
    // 0x800333D4: bne         $s1, $zero, L_800333E0
    if (ctx->r17 != 0) {
        // 0x800333D8: nop
    
            goto L_800333E0;
    }
    // 0x800333D8: nop

    // 0x800333DC: break       7
    do_break(2147693532);
L_800333E0:
    // 0x800333E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800333E4: bne         $s1, $at, L_800333F8
    if (ctx->r17 != ctx->r1) {
        // 0x800333E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800333F8;
    }
    // 0x800333E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800333EC: bne         $s0, $at, L_800333F8
    if (ctx->r16 != ctx->r1) {
        // 0x800333F0: nop
    
            goto L_800333F8;
    }
    // 0x800333F0: nop

    // 0x800333F4: break       6
    do_break(2147693556);
L_800333F8:
    // 0x800333F8: mflo        $v0
    ctx->r2 = lo;
    // 0x800333FC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80033400: sra         $s1, $v0, 1
    ctx->r17 = S32(SIGNED(ctx->r2) >> 1);
L_80033404:
    // 0x80033404: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80033408: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8003340C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80033410: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80033414: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x80033418: jal         0x80032664
    // 0x8003341C: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x8003341C: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_2:
    // 0x80033420: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x80033424: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80033428: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8003342C: addiu       $s0, $v0, 0x800
    ctx->r16 = ADD32(ctx->r2, 0X800);
    // 0x80033430: jal         0x80032664
    // 0x80033434: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    func_80032664_DA64(rdram, ctx);
        goto after_3;
    // 0x80033434: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    after_3:
    // 0x80033438: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8003343C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80033440: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80033444: jal         0x80032FC0
    // 0x80033448: negu        $a3, $v0
    ctx->r7 = SUB32(0, ctx->r2);
    func_80032FC0_E3C0(rdram, ctx);
        goto after_4;
    // 0x80033448: negu        $a3, $v0
    ctx->r7 = SUB32(0, ctx->r2);
    after_4:
    // 0x8003344C: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x80033450: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80033454: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80033458: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8003345C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80033460: jr          $ra
    // 0x80033464: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80033464: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8007298C_4DD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007298C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80072990: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80072994: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80072998: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8007299C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800729A0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800729A4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800729A8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800729AC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800729B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800729B4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800729B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800729BC: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x800729C0: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x800729C4: bne         $v1, $zero, L_800729D4
    if (ctx->r3 != 0) {
        // 0x800729C8: addu        $fp, $a2, $zero
        ctx->r30 = ADD32(ctx->r6, 0);
            goto L_800729D4;
    }
    // 0x800729C8: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x800729CC: j           L_800729FC
    // 0x800729D0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
        goto L_800729FC;
    // 0x800729D0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_800729D4:
    // 0x800729D4: srl         $v0, $s5, 1
    ctx->r2 = S32(U32(ctx->r21) >> 1);
    // 0x800729D8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800729DC: bne         $v0, $zero, L_800729EC
    if (ctx->r2 != 0) {
        // 0x800729E0: sltu        $v0, $v1, $s5
        ctx->r2 = ctx->r3 < ctx->r21 ? 1 : 0;
            goto L_800729EC;
    }
    // 0x800729E0: sltu        $v0, $v1, $s5
    ctx->r2 = ctx->r3 < ctx->r21 ? 1 : 0;
    // 0x800729E4: j           L_800729FC
    // 0x800729E8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_800729FC;
    // 0x800729E8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800729EC:
    // 0x800729EC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x800729F0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800729F4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800729F8: ori         $s1, $v0, 0x2
    ctx->r17 = ctx->r2 | 0X2;
L_800729FC:
    // 0x800729FC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80072A00: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80072A04: addiu       $s7, $sp, 0x10
    ctx->r23 = ADD32(ctx->r29, 0X10);
    // 0x80072A08: lui         $s6, 0x4
    ctx->r22 = S32(0X4 << 16);
    // 0x80072A0C: ori         $s6, $s6, 0x400
    ctx->r22 = ctx->r22 | 0X400;
    // 0x80072A10: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80072A14: addiu       $s2, $s2, 0x5094
    ctx->r18 = ADD32(ctx->r18, 0X5094);
L_80072A18:
    // 0x80072A18: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80072A1C: beq         $v0, $zero, L_80072AE8
    if (ctx->r2 == 0) {
        // 0x80072A20: lui         $t3, 0xFFFF
        ctx->r11 = S32(0XFFFF << 16);
            goto L_80072AE8;
    }
    // 0x80072A20: lui         $t3, 0xFFFF
    ctx->r11 = S32(0XFFFF << 16);
    // 0x80072A24: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80072A28: and         $v0, $v1, $t3
    ctx->r2 = ctx->r3 & ctx->r11;
    // 0x80072A2C: bnel        $v0, $fp, L_80072ADC
    if (ctx->r2 != ctx->r30) {
        // 0x80072A30: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80072ADC;
    }
    goto skip_0;
    // 0x80072A30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80072A34: srl         $v0, $v1, 6
    ctx->r2 = S32(U32(ctx->r3) >> 6);
    // 0x80072A38: andi        $v0, $v0, 0x3FC
    ctx->r2 = ctx->r2 & 0X3FC;
    // 0x80072A3C: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x80072A40: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80072A44: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80072A48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80072A4C: bnel        $v0, $s6, L_80072ADC
    if (ctx->r2 != ctx->r22) {
        // 0x80072A50: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80072ADC;
    }
    goto skip_1;
    // 0x80072A50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80072A54: beql        $s3, $zero, L_80072ADC
    if (ctx->r19 == 0) {
        // 0x80072A58: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80072ADC;
    }
    goto skip_2;
    // 0x80072A58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80072A5C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80072A60: jal         0x800721F0
    // 0x80072A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800721F0_4D5F0(rdram, ctx);
        goto after_0;
    // 0x80072A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80072A68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80072A6C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80072A70: beq         $v1, $t3, L_80072AA0
    if (ctx->r3 == ctx->r11) {
        // 0x80072A74: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80072AA0;
    }
    // 0x80072A74: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80072A78: bne         $v0, $zero, L_80072A90
    if (ctx->r2 != 0) {
        // 0x80072A7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80072A90;
    }
    // 0x80072A7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80072A80: beq         $v1, $v0, L_80072AB4
    if (ctx->r3 == ctx->r2) {
        // 0x80072A84: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80072AB4;
    }
    // 0x80072A84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80072A88: beq         $v1, $v0, L_80072B9C
    if (ctx->r3 == ctx->r2) {
        // 0x80072A8C: nop
    
            goto L_80072B9C;
    }
    // 0x80072A8C: nop

L_80072A90:
    // 0x80072A90: bnel        $s1, $zero, L_80072AD8
    if (ctx->r17 != 0) {
        // 0x80072A94: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80072AD8;
    }
    goto skip_3;
    // 0x80072A94: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_3:
    // 0x80072A98: j           L_80072ADC
    // 0x80072A9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80072ADC;
    // 0x80072A9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80072AA0:
    // 0x80072AA0: sltiu       $v0, $s1, 0x2
    ctx->r2 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x80072AA4: beql        $v0, $zero, L_80072AD8
    if (ctx->r2 == 0) {
        // 0x80072AA8: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_80072AD8;
    }
    goto skip_4;
    // 0x80072AA8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    skip_4:
    // 0x80072AAC: j           L_80072ADC
    // 0x80072AB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80072ADC;
    // 0x80072AB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80072AB4:
    // 0x80072AB4: sltiu       $v0, $s1, 0x3
    ctx->r2 = ctx->r17 < 0X3 ? 1 : 0;
    // 0x80072AB8: bnel        $v0, $zero, L_80072ADC
    if (ctx->r2 != 0) {
        // 0x80072ABC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80072ADC;
    }
    goto skip_5;
    // 0x80072ABC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x80072AC0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80072AC4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x80072AC8: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    // 0x80072ACC: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x80072AD0: jal         0x8006036C
    // 0x80072AD4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80072AD4: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    after_1:
L_80072AD8:
    // 0x80072AD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80072ADC:
    // 0x80072ADC: sltiu       $v0, $s0, 0x6B0
    ctx->r2 = ctx->r16 < 0X6B0 ? 1 : 0;
    // 0x80072AE0: bne         $v0, $zero, L_80072A18
    if (ctx->r2 != 0) {
        // 0x80072AE4: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80072A18;
    }
    // 0x80072AE4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80072AE8:
    // 0x80072AE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80072AEC: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80072AF0: addiu       $t2, $t2, -0x3590
    ctx->r10 = ADD32(ctx->r10, -0X3590);
    // 0x80072AF4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80072AF8: addiu       $t0, $sp, 0x10
    ctx->r8 = ADD32(ctx->r29, 0X10);
    // 0x80072AFC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80072B00: addiu       $v1, $v1, 0x35F8
    ctx->r3 = ADD32(ctx->r3, 0X35F8);
    // 0x80072B04: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x80072B08: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80072B0C: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
L_80072B10:
    // 0x80072B10: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80072B14: lbu         $a3, 0x0($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X0);
    // 0x80072B18: bltz        $v1, L_80072B68
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072B1C: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80072B68;
    }
    // 0x80072B1C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80072B20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80072B24: lb          $v0, 0x3586($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3586);
    // 0x80072B28: bltz        $v0, L_80072B68
    if (SIGNED(ctx->r2) < 0) {
        // 0x80072B2C: nop
    
            goto L_80072B68;
    }
    // 0x80072B2C: nop

    // 0x80072B30: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80072B34: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80072B38: sra         $a1, $v1, 4
    ctx->r5 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80072B3C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80072B40: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80072B44: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80072B48: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80072B4C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80072B50: sllv        $v0, $t1, $v1
    ctx->r2 = S32(ctx->r9 << (ctx->r3 & 31));
    // 0x80072B54: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80072B58: sllv        $v1, $a3, $v1
    ctx->r3 = S32(ctx->r7 << (ctx->r3 & 31));
    // 0x80072B5C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80072B60: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80072B64: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
L_80072B68:
    // 0x80072B68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80072B6C: sltiu       $v0, $s0, 0x7
    ctx->r2 = ctx->r16 < 0X7 ? 1 : 0;
    // 0x80072B70: bne         $v0, $zero, L_80072B10
    if (ctx->r2 != 0) {
        // 0x80072B74: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80072B10;
    }
    // 0x80072B74: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80072B78: sltiu       $v0, $s1, 0x3
    ctx->r2 = ctx->r17 < 0X3 ? 1 : 0;
    // 0x80072B7C: beq         $v0, $zero, L_80072B94
    if (ctx->r2 == 0) {
        // 0x80072B80: nop
    
            goto L_80072B94;
    }
    // 0x80072B80: nop

    // 0x80072B84: jal         0x8006036C
    // 0x80072B88: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80072B88: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    after_2:
    // 0x80072B8C: j           L_80072B9C
    // 0x80072B90: nop

        goto L_80072B9C;
    // 0x80072B90: nop

L_80072B94:
    // 0x80072B94: jal         0x80060590
    // 0x80072B98: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80072B98: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    after_3:
L_80072B9C:
    // 0x80072B9C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80072BA0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80072BA4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80072BA8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80072BAC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80072BB0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80072BB4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80072BB8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80072BBC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80072BC0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80072BC4: jr          $ra
    // 0x80072BC8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80072BC8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80093BB0_6EFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093BB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093BB8: addiu       $a0, $zero, 0x304
    ctx->r4 = ADD32(0, 0X304);
    // 0x80093BBC: jal         0x80093C88
    // 0x80093BC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80093C88_6F088(rdram, ctx);
        goto after_0;
    // 0x80093BC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80093BC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093BC8: jr          $ra
    // 0x80093BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800893E4_647E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800893E4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800893E8: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x800893EC: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x800893F0: lw          $s6, -0x6F9C($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X6F9C);
    // 0x800893F4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x800893F8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x800893FC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80089400: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80089404: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80089408: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8008940C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80089410: blez        $s6, L_80089698
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80089414: sw          $s0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r16;
            goto L_80089698;
    }
    // 0x80089414: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80089418: addiu       $s5, $sp, 0x10
    ctx->r21 = ADD32(ctx->r29, 0X10);
    // 0x8008941C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_80089420:
    // 0x80089420: jal         0x800281C8
    // 0x80089424: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80089424: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x80089428: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8008942C: beql        $s1, $zero, L_8008968C
    if (ctx->r17 == 0) {
        // 0x80089430: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8008968C;
    }
    goto skip_0;
    // 0x80089430: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80089434: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80089438: jal         0x8009A2B0
    // 0x8008943C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8008943C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_1:
    // 0x80089440: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80089444: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x80089448: addiu       $s3, $s3, 0x4760
    ctx->r19 = ADD32(ctx->r19, 0X4760);
    // 0x8008944C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80089450: jal         0x8009A3B4
    // 0x80089454: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80089454: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80089458: addiu       $s0, $s1, 0x40
    ctx->r16 = ADD32(ctx->r17, 0X40);
    // 0x8008945C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80089460: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80089464: addiu       $a1, $a1, -0x1140
    ctx->r5 = ADD32(ctx->r5, -0X1140);
    // 0x80089468: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8008946C: jal         0x8009A3B4
    // 0x80089470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80089470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80089474: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80089478: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008947C: lhu         $v0, -0x1138($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1138);
    // 0x80089480: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80089484: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80089488: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008948C: lhu         $v0, -0x1136($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1136);
    // 0x80089490: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80089494: jal         0x80031E5C
    // 0x80089498: sh          $v0, 0x4A($s1)
    MEM_H(0X4A, ctx->r17) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_4;
    // 0x80089498: sh          $v0, 0x4A($s1)
    MEM_H(0X4A, ctx->r17) = ctx->r2;
    after_4:
    // 0x8008949C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800894A0: addiu       $a0, $a0, 0x46A0
    ctx->r4 = ADD32(ctx->r4, 0X46A0);
    // 0x800894A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800894A8: addiu       $a1, $a1, 0x6B58
    ctx->r5 = ADD32(ctx->r5, 0X6B58);
    // 0x800894AC: jal         0x8009A3B4
    // 0x800894B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x800894B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x800894B4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800894B8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x800894BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800894C0: jal         0x8009A3B4
    // 0x800894C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x800894C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x800894C8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800894CC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x800894D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x800894D4: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x800894D8: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x800894DC: jal         0x80032068
    // 0x800894E0: addiu       $a2, $a2, -0x7794
    ctx->r6 = ADD32(ctx->r6, -0X7794);
    func_80032068_D468(rdram, ctx);
        goto after_7;
    // 0x800894E0: addiu       $a2, $a2, -0x7794
    ctx->r6 = ADD32(ctx->r6, -0X7794);
    after_7:
    // 0x800894E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800894E8: lw          $v1, -0x3F50($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3F50);
    // 0x800894EC: bltzl       $v1, L_800894F4
    if (SIGNED(ctx->r3) < 0) {
        // 0x800894F0: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_800894F4;
    }
    goto skip_1;
    // 0x800894F0: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_1:
L_800894F4:
    // 0x800894F4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800894F8: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x800894FC: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80089500: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80089504: bne         $v0, $zero, L_80089688
    if (ctx->r2 != 0) {
        // 0x80089508: sw          $v1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r3;
            goto L_80089688;
    }
    // 0x80089508: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x8008950C: lh          $v0, 0x40($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X40);
    // 0x80089510: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80089514: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x80089518: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x8008951C: sllv        $t2, $v0, $a2
    ctx->r10 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80089520: mult        $a1, $t2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089524: mflo        $a1
    ctx->r5 = lo;
    // 0x80089528: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8008952C: lh          $v0, 0x42($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X42);
    // 0x80089530: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80089534: lh          $a0, 0x4762($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4762);
    // 0x80089538: sllv        $t1, $v0, $a2
    ctx->r9 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x8008953C: mult        $a0, $t1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089540: mflo        $a0
    ctx->r4 = lo;
    // 0x80089544: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80089548: lh          $v1, 0x44($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X44);
    // 0x8008954C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80089550: lh          $v0, 0x4764($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4764);
    // 0x80089554: sllv        $t0, $v1, $a2
    ctx->r8 = S32(ctx->r3 << (ctx->r6 & 31));
    // 0x80089558: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008955C: mflo        $v0
    ctx->r2 = lo;
    // 0x80089560: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80089564: addu        $a2, $a1, $v0
    ctx->r6 = ADD32(ctx->r5, ctx->r2);
    // 0x80089568: bgez        $a2, L_80089574
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8008956C: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_80089574;
    }
    // 0x8008956C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80089570: addiu       $a2, $a2, 0xFFF
    ctx->r6 = ADD32(ctx->r6, 0XFFF);
L_80089574:
    // 0x80089574: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80089578: lh          $a0, 0x4766($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4766);
    // 0x8008957C: mult        $a0, $t2
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089580: mflo        $a0
    ctx->r4 = lo;
    // 0x80089584: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x80089588: lh          $v1, 0x4768($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4768);
    // 0x8008958C: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80089590: mflo        $v1
    ctx->r3 = lo;
    // 0x80089594: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80089598: lh          $v0, 0x476A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X476A);
    // 0x8008959C: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800895A0: mflo        $v0
    ctx->r2 = lo;
    // 0x800895A4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800895A8: lw          $a1, 0x4774($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4774);
    // 0x800895AC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800895B0: addu        $a3, $a0, $v0
    ctx->r7 = ADD32(ctx->r4, ctx->r2);
    // 0x800895B4: sra         $v0, $a2, 12
    ctx->r2 = S32(SIGNED(ctx->r6) >> 12);
    // 0x800895B8: bgez        $a3, L_800895C4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800895BC: addu        $a2, $v0, $a1
        ctx->r6 = ADD32(ctx->r2, ctx->r5);
            goto L_800895C4;
    }
    // 0x800895BC: addu        $a2, $v0, $a1
    ctx->r6 = ADD32(ctx->r2, ctx->r5);
    // 0x800895C0: addiu       $a3, $a3, 0xFFF
    ctx->r7 = ADD32(ctx->r7, 0XFFF);
L_800895C4:
    // 0x800895C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800895C8: lh          $a0, 0x476C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X476C);
    // 0x800895CC: mult        $a0, $t2
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800895D0: mflo        $a0
    ctx->r4 = lo;
    // 0x800895D4: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x800895D8: lh          $v1, 0x476E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X476E);
    // 0x800895DC: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800895E0: mflo        $v1
    ctx->r3 = lo;
    // 0x800895E4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x800895E8: lh          $v0, 0x4770($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4770);
    // 0x800895EC: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800895F0: mflo        $v0
    ctx->r2 = lo;
    // 0x800895F4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800895F8: lw          $a1, 0x4778($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4778);
    // 0x800895FC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80089600: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
    // 0x80089604: sra         $v0, $a3, 12
    ctx->r2 = S32(SIGNED(ctx->r7) >> 12);
    // 0x80089608: bgez        $t0, L_80089614
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8008960C: addu        $v1, $v0, $a1
        ctx->r3 = ADD32(ctx->r2, ctx->r5);
            goto L_80089614;
    }
    // 0x8008960C: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x80089610: addiu       $t0, $t0, 0xFFF
    ctx->r8 = ADD32(ctx->r8, 0XFFF);
L_80089614:
    // 0x80089614: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80089618: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008961C: lb          $v0, -0x1134($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1134);
    // 0x80089620: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80089624: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80089628: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8008962C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80089630: lb          $v0, -0x1133($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1133);
    // 0x80089634: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80089638: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8008963C: lw          $v1, 0x477C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X477C);
    // 0x80089640: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80089644: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80089648: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8008964C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80089650: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x80089654: lb          $a2, -0x1132($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1132);
    // 0x80089658: sra         $v0, $t0, 12
    ctx->r2 = S32(SIGNED(ctx->r8) >> 12);
    // 0x8008965C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80089660: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80089664: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80089668: jal         0x8002C5A4
    // 0x8008966C: sw          $s4, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r20;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_8;
    // 0x8008966C: sw          $s4, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r20;
    after_8:
    // 0x80089670: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80089674: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80089678: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8008967C: addiu       $a2, $a2, -0x6928
    ctx->r6 = ADD32(ctx->r6, -0X6928);
    // 0x80089680: jal         0x800283A8
    // 0x80089684: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_9;
    // 0x80089684: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_9:
L_80089688:
    // 0x80089688: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8008968C:
    // 0x8008968C: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80089690: bne         $v0, $zero, L_80089420
    if (ctx->r2 != 0) {
        // 0x80089694: addiu       $s2, $s2, 0x10
        ctx->r18 = ADD32(ctx->r18, 0X10);
            goto L_80089420;
    }
    // 0x80089694: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
L_80089698:
    // 0x80089698: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008969C: lw          $v0, -0x6F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F9C);
    // 0x800896A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800896A4: sw          $zero, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = 0;
    // 0x800896A8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800896AC: sw          $v0, -0x14EC($at)
    MEM_W(-0X14EC, ctx->r1) = ctx->r2;
    // 0x800896B0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800896B4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x800896B8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x800896BC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x800896C0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x800896C4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x800896C8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x800896CC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800896D0: jr          $ra
    // 0x800896D4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x800896D4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80062088_3D488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062088: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8006208C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80062090: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80062094: and         $v0, $a0, $a2
    ctx->r2 = ctx->r4 & ctx->r6;
    // 0x80062098: bne         $v0, $zero, L_800620C0
    if (ctx->r2 != 0) {
        // 0x8006209C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_800620C0;
    }
    // 0x8006209C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800620A0: lw          $v1, 0x6C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X6C);
    // 0x800620A4: or          $v0, $a0, $a2
    ctx->r2 = ctx->r4 | ctx->r6;
    // 0x800620A8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800620AC: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x800620B0: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x800620B4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800620B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800620BC: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
L_800620C0:
    // 0x800620C0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800620C4: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x800620C8: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x800620CC: or          $a2, $v0, $v1
    ctx->r6 = ctx->r2 | ctx->r3;
    // 0x800620D0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800620D4: bgtz        $a0, L_80062138
    if (SIGNED(ctx->r4) > 0) {
        // 0x800620D8: sw          $a2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r6;
            goto L_80062138;
    }
    // 0x800620D8: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x800620DC: lbu         $v1, 0x3E($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3E);
    // 0x800620E0: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
    // 0x800620E4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x800620E8: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x800620EC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800620F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800620F4: sb          $zero, 0x71($a1)
    MEM_B(0X71, ctx->r5) = 0;
    // 0x800620F8: sb          $zero, 0x72($a1)
    MEM_B(0X72, ctx->r5) = 0;
    // 0x800620FC: sb          $zero, 0x73($a1)
    MEM_B(0X73, ctx->r5) = 0;
    // 0x80062100: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80062104: sb          $v1, 0x3C($a1)
    MEM_B(0X3C, ctx->r5) = ctx->r3;
    // 0x80062108: lw          $v1, 0x6C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X6C);
    // 0x8006210C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80062110: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80062114: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80062118: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8006211C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80062120: sw          $v1, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r3;
    // 0x80062124: sw          $v1, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->r3;
    // 0x80062128: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006212C: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
    // 0x80062130: j           L_80062144
    // 0x80062134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80062144;
    // 0x80062134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80062138:
    // 0x80062138: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006213C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80062140: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80062144:
    // 0x80062144: jr          $ra
    // 0x80062148: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80062148: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800787EC_53BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800787EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800787F0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800787F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800787F8: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x800787FC: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x80078800: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80078804: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80078808: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007880C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80078810: lbu         $v0, -0x32D8($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X32D8);
    // 0x80078814: addiu       $v1, $v1, -0x5
    ctx->r3 = ADD32(ctx->r3, -0X5);
    // 0x80078818: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8007881C: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x80078820: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x80078824: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078828: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8007882C: lbu         $v1, -0x32D7($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X32D7);
    // 0x80078830: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    // 0x80078834: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078838: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8007883C: sb          $v1, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r3;
    // 0x80078840: jal         0x8002A33C
    // 0x80078844: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80078844: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_0:
    // 0x80078848: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007884C: jr          $ra
    // 0x80078850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80078850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80062DC8_3E1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062DC8: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
    // 0x80062DCC: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80062DD0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80062DD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80062DD8: jr          $ra
    // 0x80062DDC: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80062DDC: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80061838_3CC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061838: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006183C: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80061840: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80061844: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80061848: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006184C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80061850: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80061854: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80061858: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006185C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80061860: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80061864: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80061868: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006186C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80061870: bne         $v0, $zero, L_80061E14
    if (ctx->r2 != 0) {
        // 0x80061874: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_80061E14;
    }
    // 0x80061874: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80061878: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006187C: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x80061880: bne         $v0, $zero, L_80061E14
    if (ctx->r2 != 0) {
        // 0x80061884: lui         $v0, 0x3043
        ctx->r2 = S32(0X3043 << 16);
            goto L_80061E14;
    }
    // 0x80061884: lui         $v0, 0x3043
    ctx->r2 = S32(0X3043 << 16);
    // 0x80061888: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x8006188C: addiu       $s1, $s1, -0x7790
    ctx->r17 = ADD32(ctx->r17, -0X7790);
    // 0x80061890: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80061894: lw          $t1, -0x5858($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5858);
    // 0x80061898: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8006189C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800618A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800618A4: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x800618A8: addiu       $v0, $s1, 0x3D4
    ctx->r2 = ADD32(ctx->r17, 0X3D4);
    // 0x800618AC: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x800618B0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800618B4: sw          $zero, -0x72F0($at)
    MEM_W(-0X72F0, ctx->r1) = 0;
    // 0x800618B8: beq         $v0, $zero, L_80061DA4
    if (ctx->r2 == 0) {
        // 0x800618BC: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_80061DA4;
    }
    // 0x800618BC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800618C0: lui         $s6, 0x800
    ctx->r22 = S32(0X800 << 16);
    // 0x800618C4: lui         $s5, 0x4
    ctx->r21 = S32(0X4 << 16);
    // 0x800618C8: addiu       $fp, $zero, 0x7E
    ctx->r30 = ADD32(0, 0X7E);
    // 0x800618CC: addiu       $s7, $zero, 0x7F
    ctx->r23 = ADD32(0, 0X7F);
    // 0x800618D0: addiu       $s0, $s1, 0x71
    ctx->r16 = ADD32(ctx->r17, 0X71);
L_800618D4:
    // 0x800618D4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800618D8: bgez        $v0, L_80061D10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800618DC: lui         $a0, 0x8000
        ctx->r4 = S32(0X8000 << 16);
            goto L_80061D10;
    }
    // 0x800618DC: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x800618E0: lui         $v1, 0x1A1F
    ctx->r3 = S32(0X1A1F << 16);
    // 0x800618E4: ori         $v1, $v1, 0x58D1
    ctx->r3 = ctx->r3 | 0X58D1;
    // 0x800618E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800618EC: addiu       $v0, $v0, -0x7790
    ctx->r2 = ADD32(ctx->r2, -0X7790);
    // 0x800618F0: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x800618F4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800618F8: mflo        $v0
    ctx->r2 = lo;
    // 0x800618FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80061900: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80061904: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80061908: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8006190C: srav        $v0, $s6, $v0
    ctx->r2 = S32(SIGNED(ctx->r22) >> (ctx->r2 & 31));
    // 0x80061910: or          $a0, $v1, $v0
    ctx->r4 = ctx->r3 | ctx->r2;
    // 0x80061914: and         $v0, $a0, $s5
    ctx->r2 = ctx->r4 & ctx->r21;
    // 0x80061918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006191C: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
    // 0x80061920: bnel        $v0, $zero, L_8006195C
    if (ctx->r2 != 0) {
        // 0x80061924: sh          $zero, 0x47($s0)
        MEM_H(0X47, ctx->r16) = 0;
            goto L_8006195C;
    }
    goto skip_0;
    // 0x80061924: sh          $zero, 0x47($s0)
    MEM_H(0X47, ctx->r16) = 0;
    skip_0:
    // 0x80061928: lh          $v1, -0x6B($s0)
    ctx->r3 = MEM_H(ctx->r16, -0X6B);
    // 0x8006192C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80061930: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80061934: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80061938: bnel        $v0, $zero, L_8006195C
    if (ctx->r2 != 0) {
        // 0x8006193C: sh          $zero, 0x47($s0)
        MEM_H(0X47, ctx->r16) = 0;
            goto L_8006195C;
    }
    goto skip_1;
    // 0x8006193C: sh          $zero, 0x47($s0)
    MEM_H(0X47, ctx->r16) = 0;
    skip_1:
    // 0x80061940: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80061944: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x80061948: sh          $v0, 0x47($s0)
    MEM_H(0X47, ctx->r16) = ctx->r2;
    // 0x8006194C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80061950: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80061954: j           L_80061960
    // 0x80061958: sh          $v0, 0x49($s0)
    MEM_H(0X49, ctx->r16) = ctx->r2;
        goto L_80061960;
    // 0x80061958: sh          $v0, 0x49($s0)
    MEM_H(0X49, ctx->r16) = ctx->r2;
L_8006195C:
    // 0x8006195C: sh          $zero, 0x49($s0)
    MEM_H(0X49, ctx->r16) = 0;
L_80061960:
    // 0x80061960: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80061964: and         $v0, $v1, $s6
    ctx->r2 = ctx->r3 & ctx->r22;
    // 0x80061968: bne         $v0, $zero, L_800619B8
    if (ctx->r2 != 0) {
        // 0x8006196C: nop
    
            goto L_800619B8;
    }
    // 0x8006196C: nop

    // 0x80061970: lhu         $v0, 0x47($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X47);
    // 0x80061974: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80061978: beq         $v0, $zero, L_800619B8
    if (ctx->r2 == 0) {
        // 0x8006197C: and         $v0, $v1, $s5
        ctx->r2 = ctx->r3 & ctx->r21;
            goto L_800619B8;
    }
    // 0x8006197C: and         $v0, $v1, $s5
    ctx->r2 = ctx->r3 & ctx->r21;
    // 0x80061980: beq         $v0, $zero, L_800619B8
    if (ctx->r2 == 0) {
        // 0x80061984: nop
    
            goto L_800619B8;
    }
    // 0x80061984: nop

    // 0x80061988: jal         0x80036B7C
    // 0x8006198C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_0;
    // 0x8006198C: nop

    after_0:
    // 0x80061990: beq         $v0, $zero, L_800619B8
    if (ctx->r2 == 0) {
        // 0x80061994: lui         $v1, 0xFFFB
        ctx->r3 = S32(0XFFFB << 16);
            goto L_800619B8;
    }
    // 0x80061994: lui         $v1, 0xFFFB
    ctx->r3 = S32(0XFFFB << 16);
    // 0x80061998: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8006199C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800619A0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800619A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800619A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800619AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800619B0: jal         0x80036B00
    // 0x800619B4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x800619B4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_1:
L_800619B8:
    // 0x800619B8: lw          $v0, -0x5($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5);
    // 0x800619BC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800619C0: sltiu       $v0, $v1, 0x84
    ctx->r2 = ctx->r3 < 0X84 ? 1 : 0;
    // 0x800619C4: beq         $v0, $zero, L_80061A80
    if (ctx->r2 == 0) {
        // 0x800619C8: addiu       $v0, $v1, -0x84
        ctx->r2 = ADD32(ctx->r3, -0X84);
            goto L_80061A80;
    }
    // 0x800619C8: addiu       $v0, $v1, -0x84
    ctx->r2 = ADD32(ctx->r3, -0X84);
    // 0x800619CC: lhu         $v0, -0x6D($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X6D);
    // 0x800619D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800619D4: sh          $v0, -0x6D($s0)
    MEM_H(-0X6D, ctx->r16) = ctx->r2;
    // 0x800619D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800619DC: bgtz        $v0, L_80061A64
    if (SIGNED(ctx->r2) > 0) {
        // 0x800619E0: nop
    
            goto L_80061A64;
    }
    // 0x800619E0: nop

    // 0x800619E4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800619E8: and         $v0, $v1, $s6
    ctx->r2 = ctx->r3 & ctx->r22;
    // 0x800619EC: bne         $v0, $zero, L_80061A18
    if (ctx->r2 != 0) {
        // 0x800619F0: nop
    
            goto L_80061A18;
    }
    // 0x800619F0: nop

    // 0x800619F4: lhu         $v0, 0x47($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X47);
    // 0x800619F8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x800619FC: beq         $v0, $zero, L_80061A18
    if (ctx->r2 == 0) {
        // 0x80061A00: and         $v0, $v1, $s5
        ctx->r2 = ctx->r3 & ctx->r21;
            goto L_80061A18;
    }
    // 0x80061A00: and         $v0, $v1, $s5
    ctx->r2 = ctx->r3 & ctx->r21;
    // 0x80061A04: bne         $v0, $zero, L_80061A18
    if (ctx->r2 != 0) {
        // 0x80061A08: nop
    
            goto L_80061A18;
    }
    // 0x80061A08: nop

    // 0x80061A0C: lbu         $v0, -0x32($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X32);
    // 0x80061A10: j           L_80061A1C
    // 0x80061A14: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_80061A1C;
    // 0x80061A14: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_80061A18:
    // 0x80061A18: lbu         $v0, -0x32($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X32);
L_80061A1C:
    // 0x80061A1C: sh          $v0, -0x6D($s0)
    MEM_H(-0X6D, ctx->r16) = ctx->r2;
    // 0x80061A20: lw          $v0, -0x5($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5);
    // 0x80061A24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061A28: sw          $v0, -0x5($s0)
    MEM_W(-0X5, ctx->r16) = ctx->r2;
    // 0x80061A2C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80061A30: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x80061A34: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80061A38: bne         $v0, $zero, L_80061A64
    if (ctx->r2 != 0) {
        // 0x80061A3C: and         $v0, $v1, $s5
        ctx->r2 = ctx->r3 & ctx->r21;
            goto L_80061A64;
    }
    // 0x80061A3C: and         $v0, $v1, $s5
    ctx->r2 = ctx->r3 & ctx->r21;
    // 0x80061A40: bne         $v0, $zero, L_80061A54
    if (ctx->r2 != 0) {
        // 0x80061A44: addiu       $a0, $zero, 0x84
        ctx->r4 = ADD32(0, 0X84);
            goto L_80061A54;
    }
    // 0x80061A44: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    // 0x80061A48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80061A4C: jal         0x8002A2F8
    // 0x80061A50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80061A50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
L_80061A54:
    // 0x80061A54: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061A58: lui         $t1, 0x4000
    ctx->r9 = S32(0X4000 << 16);
    // 0x80061A5C: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x80061A60: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80061A64:
    // 0x80061A64: lh          $v0, -0x6D($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X6D);
    // 0x80061A68: bne         $v0, $zero, L_80061AA4
    if (ctx->r2 != 0) {
        // 0x80061A6C: lui         $t1, 0x4000
        ctx->r9 = S32(0X4000 << 16);
            goto L_80061AA4;
    }
    // 0x80061A6C: lui         $t1, 0x4000
    ctx->r9 = S32(0X4000 << 16);
    // 0x80061A70: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061A74: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x80061A78: j           L_800619B8
    // 0x80061A7C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_800619B8;
    // 0x80061A7C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80061A80:
    // 0x80061A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061A84: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80061A88: addiu       $t1, $t1, 0x7BC
    ctx->r9 = ADD32(ctx->r9, 0X7BC);
    // 0x80061A8C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80061A90: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80061A94: jalr        $v0
    // 0x80061A98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80061A98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80061A9C: bne         $v0, $zero, L_800619B8
    if (ctx->r2 != 0) {
        // 0x80061AA0: nop
    
            goto L_800619B8;
    }
    // 0x80061AA0: nop

L_80061AA4:
    // 0x80061AA4: lbu         $v0, -0x32($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X32);
    // 0x80061AA8: bne         $v0, $zero, L_80061AC0
    if (ctx->r2 != 0) {
        // 0x80061AAC: lui         $v1, 0x1000
        ctx->r3 = S32(0X1000 << 16);
            goto L_80061AC0;
    }
    // 0x80061AAC: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80061AB0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061AB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061AB8: beq         $v0, $zero, L_800619B8
    if (ctx->r2 == 0) {
        // 0x80061ABC: nop
    
            goto L_800619B8;
    }
    // 0x80061ABC: nop

L_80061AC0:
    // 0x80061AC0: lw          $v0, -0x29($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X29);
    // 0x80061AC4: lhu         $a2, -0x69($s0)
    ctx->r6 = MEM_HU(ctx->r16, -0X69);
    // 0x80061AC8: lhu         $v1, -0x67($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X67);
    // 0x80061ACC: lhu         $a0, -0x39($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X39);
    // 0x80061AD0: lbu         $a3, -0x35($s0)
    ctx->r7 = MEM_BU(ctx->r16, -0X35);
    // 0x80061AD4: lw          $a1, -0x5($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X5);
    // 0x80061AD8: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80061ADC: sh          $zero, 0x4D($s0)
    MEM_H(0X4D, ctx->r16) = 0;
    // 0x80061AE0: sw          $v0, -0x5D($s0)
    MEM_W(-0X5D, ctx->r16) = ctx->r2;
    // 0x80061AE4: lw          $t0, -0x5D($s0)
    ctx->r8 = MEM_W(ctx->r16, -0X5D);
    // 0x80061AE8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80061AEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80061AF0: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80061AF4: sh          $a2, -0x61($s0)
    MEM_H(-0X61, ctx->r16) = ctx->r6;
    // 0x80061AF8: sh          $v1, -0x5F($s0)
    MEM_H(-0X5F, ctx->r16) = ctx->r3;
    // 0x80061AFC: beq         $t0, $a1, L_80061CD8
    if (ctx->r8 == ctx->r5) {
        // 0x80061B00: sb          $a3, -0x33($s0)
        MEM_B(-0X33, ctx->r16) = ctx->r7;
            goto L_80061CD8;
    }
    // 0x80061B00: sb          $a3, -0x33($s0)
    MEM_B(-0X33, ctx->r16) = ctx->r7;
    // 0x80061B04: lui         $s4, 0x8618
    ctx->r20 = S32(0X8618 << 16);
    // 0x80061B08: ori         $s4, $s4, 0x6187
    ctx->r20 = ctx->r20 | 0X6187;
    // 0x80061B0C: addiu       $s3, $zero, 0x84
    ctx->r19 = ADD32(0, 0X84);
    // 0x80061B10: addiu       $s2, $zero, 0x87
    ctx->r18 = ADD32(0, 0X87);
L_80061B14:
    // 0x80061B14: lw          $v0, -0x5D($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5D);
    // 0x80061B18: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80061B1C: sltiu       $v0, $v1, 0x84
    ctx->r2 = ctx->r3 < 0X84 ? 1 : 0;
    // 0x80061B20: beq         $v0, $zero, L_80061CB4
    if (ctx->r2 == 0) {
        // 0x80061B24: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80061CB4;
    }
    // 0x80061B24: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80061B28: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061B2C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80061B30: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061B34: bne         $v0, $zero, L_80061CA4
    if (ctx->r2 != 0) {
        // 0x80061B38: nop
    
            goto L_80061CA4;
    }
    // 0x80061B38: nop

    // 0x80061B3C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80061B40: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x80061B44: addiu       $v0, $a1, 0x14
    ctx->r2 = ADD32(ctx->r5, 0X14);
    // 0x80061B48: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80061B4C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80061B50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80061B54: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80061B58: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80061B5C: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x80061B60: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80061B64: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80061B68: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80061B6C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80061B70: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80061B74: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80061B78: lhu         $v0, -0x61($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X61);
    // 0x80061B7C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80061B80: lhu         $v1, -0x5F($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X5F);
    // 0x80061B84: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80061B88: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80061B8C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x80061B90: sh          $v1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r3;
    // 0x80061B94: lw          $v1, -0x5D($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X5D);
    // 0x80061B98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80061B9C: beql        $v0, $fp, L_80061BA4
    if (ctx->r2 == ctx->r30) {
        // 0x80061BA0: sb          $s3, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r19;
            goto L_80061BA4;
    }
    goto skip_2;
    // 0x80061BA0: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    skip_2:
L_80061BA4:
    // 0x80061BA4: lw          $v1, -0x5D($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X5D);
    // 0x80061BA8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80061BAC: beql        $v0, $s7, L_80061BB4
    if (ctx->r2 == ctx->r23) {
        // 0x80061BB0: sb          $s2, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r18;
            goto L_80061BB4;
    }
    goto skip_3;
    // 0x80061BB0: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    skip_3:
L_80061BB4:
    // 0x80061BB4: lbu         $v0, -0x33($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X33);
    // 0x80061BB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80061BBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061BC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061BC4: lhu         $v0, 0xB90($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XB90);
    // 0x80061BC8: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x80061BCC: lw          $v0, -0x5D($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5D);
    // 0x80061BD0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80061BD4: multu       $a0, $s4
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061BD8: mfhi        $v1
    ctx->r3 = hi;
    // 0x80061BDC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80061BE0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80061BE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80061BE8: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80061BEC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80061BF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80061BF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061BF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80061BFC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80061C00: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80061C04: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80061C08: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80061C0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061C10: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80061C14: lw          $v0, -0x5D($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5D);
    // 0x80061C18: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80061C1C: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061C20: mfhi        $v1
    ctx->r3 = hi;
    // 0x80061C24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80061C28: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80061C2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80061C30: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80061C34: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80061C38: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80061C3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80061C40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061C44: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80061C48: lw          $v1, -0x5D($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X5D);
    // 0x80061C4C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80061C50: beql        $v0, $s3, L_80061C58
    if (ctx->r2 == ctx->r19) {
        // 0x80061C54: sb          $fp, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r30;
            goto L_80061C58;
    }
    goto skip_4;
    // 0x80061C54: sb          $fp, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r30;
    skip_4:
L_80061C58:
    // 0x80061C58: lw          $v1, -0x5D($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X5D);
    // 0x80061C5C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80061C60: beql        $v0, $s2, L_80061C68
    if (ctx->r2 == ctx->r18) {
        // 0x80061C64: sb          $s7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r23;
            goto L_80061C68;
    }
    goto skip_5;
    // 0x80061C64: sb          $s7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r23;
    skip_5:
L_80061C68:
    // 0x80061C68: lb          $a0, -0x34($s0)
    ctx->r4 = MEM_B(ctx->r16, -0X34);
    // 0x80061C6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80061C70: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80061C74: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80061C78: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80061C7C: jal         0x8002FD30
    // 0x80061C80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_4;
    // 0x80061C80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80061C84: lw          $v0, -0x5D($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5D);
    // 0x80061C88: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80061C8C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80061C90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80061C94: lbu         $v1, 0xB0C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB0C);
    // 0x80061C98: lhu         $v0, -0x61($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X61);
    // 0x80061C9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80061CA0: sh          $v0, -0x61($s0)
    MEM_H(-0X61, ctx->r16) = ctx->r2;
L_80061CA4:
    // 0x80061CA4: lw          $v0, -0x5D($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5D);
    // 0x80061CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061CAC: j           L_80061CC8
    // 0x80061CB0: sw          $v0, -0x5D($s0)
    MEM_W(-0X5D, ctx->r16) = ctx->r2;
        goto L_80061CC8;
    // 0x80061CB0: sw          $v0, -0x5D($s0)
    MEM_W(-0X5D, ctx->r16) = ctx->r2;
L_80061CB4:
    // 0x80061CB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061CB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061CBC: lw          $v0, 0x754($at)
    ctx->r2 = MEM_W(ctx->r1, 0X754);
    // 0x80061CC0: jalr        $v0
    // 0x80061CC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80061CC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_80061CC8:
    // 0x80061CC8: lw          $v1, -0x5D($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X5D);
    // 0x80061CCC: lw          $v0, -0x5($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X5);
    // 0x80061CD0: bne         $v1, $v0, L_80061B14
    if (ctx->r3 != ctx->r2) {
        // 0x80061CD4: nop
    
            goto L_80061B14;
    }
    // 0x80061CD4: nop

L_80061CD8:
    // 0x80061CD8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061CDC: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x80061CE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061CE4: beq         $v0, $zero, L_80061D34
    if (ctx->r2 == 0) {
        // 0x80061CE8: nop
    
            goto L_80061D34;
    }
    // 0x80061CE8: nop

    // 0x80061CEC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80061CF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061CF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061CF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061CFC: lw          $v0, 0x774($at)
    ctx->r2 = MEM_W(ctx->r1, 0X774);
    // 0x80061D00: jalr        $v0
    // 0x80061D04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80061D04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80061D08: j           L_80061D34
    // 0x80061D0C: nop

        goto L_80061D34;
    // 0x80061D0C: nop

L_80061D10:
    // 0x80061D10: lh          $v0, -0x6B($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X6B);
    // 0x80061D14: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80061D18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80061D1C: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80061D20: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x80061D24: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x80061D28: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x80061D2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80061D30: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
L_80061D34:
    // 0x80061D34: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80061D38: addiu       $a1, $a1, -0x7480
    ctx->r5 = ADD32(ctx->r5, -0X7480);
    // 0x80061D3C: beq         $s1, $a1, L_80061D7C
    if (ctx->r17 == ctx->r5) {
        // 0x80061D40: lui         $v1, 0x1A1F
        ctx->r3 = S32(0X1A1F << 16);
            goto L_80061D7C;
    }
    // 0x80061D40: lui         $v1, 0x1A1F
    ctx->r3 = S32(0X1A1F << 16);
    // 0x80061D44: ori         $v1, $v1, 0x58D1
    ctx->r3 = ctx->r3 | 0X58D1;
    // 0x80061D48: addiu       $v0, $a1, -0x310
    ctx->r2 = ADD32(ctx->r5, -0X310);
    // 0x80061D4C: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x80061D50: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061D54: mflo        $v0
    ctx->r2 = lo;
    // 0x80061D58: lb          $a0, 0x0($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X0);
    // 0x80061D5C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80061D60: lw          $v1, -0x72F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72F0);
    // 0x80061D64: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80061D68: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80061D6C: sllv        $a0, $a0, $v0
    ctx->r4 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x80061D70: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80061D74: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80061D78: sw          $v1, -0x72F0($at)
    MEM_W(-0X72F0, ctx->r1) = ctx->r3;
L_80061D7C:
    // 0x80061D7C: lui         $v1, 0xAF7F
    ctx->r3 = S32(0XAF7F << 16);
    // 0x80061D80: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80061D84: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80061D88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80061D8C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80061D90: addiu       $s1, $s1, 0xC4
    ctx->r17 = ADD32(ctx->r17, 0XC4);
    // 0x80061D94: addiu       $v0, $a1, 0xC4
    ctx->r2 = ADD32(ctx->r5, 0XC4);
    // 0x80061D98: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x80061D9C: bne         $v0, $zero, L_800618D4
    if (ctx->r2 != 0) {
        // 0x80061DA0: addiu       $s0, $s0, 0xC4
        ctx->r16 = ADD32(ctx->r16, 0XC4);
            goto L_800618D4;
    }
    // 0x80061DA0: addiu       $s0, $s0, 0xC4
    ctx->r16 = ADD32(ctx->r16, 0XC4);
L_80061DA4:
    // 0x80061DA4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80061DA8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80061DAC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80061DB0: beq         $t1, $s0, L_80061E14
    if (ctx->r9 == ctx->r16) {
        // 0x80061DB4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80061E14;
    }
    // 0x80061DB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061DB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80061DBC: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x80061DC0: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x80061DC4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80061DC8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80061DCC: jal         0x80030284
    // 0x80061DD0: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_7;
    // 0x80061DD0: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_7:
    // 0x80061DD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80061DD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80061DDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80061DE0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80061DE4: jal         0x8003055C
    // 0x80061DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_8;
    // 0x80061DE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80061DEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80061DF0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80061DF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80061DF8: jal         0x8002FD30
    // 0x80061DFC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_9;
    // 0x80061DFC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_9:
    // 0x80061E00: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80061E04: lw          $v0, -0xC78($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC78);
    // 0x80061E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061E0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80061E10: sw          $v0, -0xC78($at)
    MEM_W(-0XC78, ctx->r1) = ctx->r2;
L_80061E14:
    // 0x80061E14: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80061E18: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80061E1C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80061E20: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80061E24: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80061E28: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80061E2C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80061E30: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80061E34: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80061E38: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80061E3C: jr          $ra
    // 0x80061E40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80061E40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8004E99C_29D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E99C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004E9A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004E9A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004E9A8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8004E9AC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8004E9B0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004E9B4: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8004E9B8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8004E9BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E9C0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E9C4: mflo        $a2
    ctx->r6 = lo;
    // 0x8004E9C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004E9CC: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x8004E9D0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8004E9D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E9D8: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E9DC: mflo        $a3
    ctx->r7 = lo;
    // 0x8004E9E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8004E9E4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004E9E8: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8004E9EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E9F0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E9F4: mflo        $a0
    ctx->r4 = lo;
    // 0x8004E9F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004E9FC: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004EA00: jal         0x80032424
    // 0x8004EA04: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004EA04: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    after_0:
    // 0x8004EA08: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8004EA0C: beq         $a3, $zero, L_8004EB3C
    if (ctx->r7 == 0) {
        // 0x8004EA10: sll         $a1, $s1, 16
        ctx->r5 = S32(ctx->r17 << 16);
            goto L_8004EB3C;
    }
    // 0x8004EA10: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8004EA14: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8004EA18: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8004EA1C: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004EA20: mflo        $a0
    ctx->r4 = lo;
    // 0x8004EA24: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8004EA28: nop

    // 0x8004EA2C: div         $zero, $a0, $a3
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r7)));
    // 0x8004EA30: bne         $a3, $zero, L_8004EA3C
    if (ctx->r7 != 0) {
        // 0x8004EA34: nop
    
            goto L_8004EA3C;
    }
    // 0x8004EA34: nop

    // 0x8004EA38: break       7
    do_break(2147805752);
L_8004EA3C:
    // 0x8004EA3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EA40: bne         $a3, $at, L_8004EA54
    if (ctx->r7 != ctx->r1) {
        // 0x8004EA44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EA54;
    }
    // 0x8004EA44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EA48: bne         $a0, $at, L_8004EA54
    if (ctx->r4 != ctx->r1) {
        // 0x8004EA4C: nop
    
            goto L_8004EA54;
    }
    // 0x8004EA4C: nop

    // 0x8004EA50: break       6
    do_break(2147805776);
L_8004EA54:
    // 0x8004EA54: mflo        $a0
    ctx->r4 = lo;
    // 0x8004EA58: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8004EA5C: nop

    // 0x8004EA60: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004EA64: mflo        $v1
    ctx->r3 = lo;
    // 0x8004EA68: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8004EA6C: nop

    // 0x8004EA70: div         $zero, $v1, $a3
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r7)));
    // 0x8004EA74: bne         $a3, $zero, L_8004EA80
    if (ctx->r7 != 0) {
        // 0x8004EA78: nop
    
            goto L_8004EA80;
    }
    // 0x8004EA78: nop

    // 0x8004EA7C: break       7
    do_break(2147805820);
L_8004EA80:
    // 0x8004EA80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EA84: bne         $a3, $at, L_8004EA98
    if (ctx->r7 != ctx->r1) {
        // 0x8004EA88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EA98;
    }
    // 0x8004EA88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EA8C: bne         $v1, $at, L_8004EA98
    if (ctx->r3 != ctx->r1) {
        // 0x8004EA90: nop
    
            goto L_8004EA98;
    }
    // 0x8004EA90: nop

    // 0x8004EA94: break       6
    do_break(2147805844);
L_8004EA98:
    // 0x8004EA98: mflo        $v1
    ctx->r3 = lo;
    // 0x8004EA9C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8004EAA0: nop

    // 0x8004EAA4: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004EAA8: mflo        $v0
    ctx->r2 = lo;
    // 0x8004EAAC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004EAB0: nop

    // 0x8004EAB4: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x8004EAB8: bne         $a3, $zero, L_8004EAC4
    if (ctx->r7 != 0) {
        // 0x8004EABC: nop
    
            goto L_8004EAC4;
    }
    // 0x8004EABC: nop

    // 0x8004EAC0: break       7
    do_break(2147805888);
L_8004EAC4:
    // 0x8004EAC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EAC8: bne         $a3, $at, L_8004EADC
    if (ctx->r7 != ctx->r1) {
        // 0x8004EACC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EADC;
    }
    // 0x8004EACC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EAD0: bne         $v0, $at, L_8004EADC
    if (ctx->r2 != ctx->r1) {
        // 0x8004EAD4: nop
    
            goto L_8004EADC;
    }
    // 0x8004EAD4: nop

    // 0x8004EAD8: break       6
    do_break(2147805912);
L_8004EADC:
    // 0x8004EADC: mflo        $v0
    ctx->r2 = lo;
    // 0x8004EAE0: nop

    // 0x8004EAE4: nop

    // 0x8004EAE8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8004EAEC: bne         $a1, $zero, L_8004EAF8
    if (ctx->r5 != 0) {
        // 0x8004EAF0: nop
    
            goto L_8004EAF8;
    }
    // 0x8004EAF0: nop

    // 0x8004EAF4: break       7
    do_break(2147805940);
L_8004EAF8:
    // 0x8004EAF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EAFC: bne         $a1, $at, L_8004EB10
    if (ctx->r5 != ctx->r1) {
        // 0x8004EB00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EB10;
    }
    // 0x8004EB00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EB04: bne         $a3, $at, L_8004EB10
    if (ctx->r7 != ctx->r1) {
        // 0x8004EB08: nop
    
            goto L_8004EB10;
    }
    // 0x8004EB08: nop

    // 0x8004EB0C: break       6
    do_break(2147805964);
L_8004EB10:
    // 0x8004EB10: mflo        $a1
    ctx->r5 = lo;
    // 0x8004EB14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004EB18: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8004EB1C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8004EB20: sh          $a0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r4;
    // 0x8004EB24: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8004EB28: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8004EB2C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8004EB30: sh          $a1, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r5;
    // 0x8004EB34: j           L_8004EB4C
    // 0x8004EB38: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_8004EB4C;
    // 0x8004EB38: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8004EB3C:
    // 0x8004EB3C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8004EB40: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8004EB44: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8004EB48: sh          $zero, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = 0;
L_8004EB4C:
    // 0x8004EB4C: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8004EB50: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8004EB54: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8004EB58: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8004EB5C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004EB60: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004EB64: jr          $ra
    // 0x8004EB68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8004EB68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800319B4_CDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800319B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800319B8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x800319BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800319C0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x800319C4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800319C8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x800319CC: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x800319D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800319D4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800319D8: jal         0x8009A3B4
    // 0x800319DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800319DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x800319E0: jal         0x80032510
    // 0x800319E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032510_D910(rdram, ctx);
        goto after_1;
    // 0x800319E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800319E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800319EC: jal         0x800324D0
    // 0x800319F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_2;
    // 0x800319F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x800319F4: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x800319F8: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x800319FC: addu        $t2, $s2, $zero
    ctx->r10 = ADD32(ctx->r18, 0);
    // 0x80031A00: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80031A04: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80031A08: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031A0C: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80031A10: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80031A14: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80031A18: sh          $zero, 0x16($sp)
    MEM_H(0X16, ctx->r29) = 0;
    // 0x80031A1C: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x80031A20: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x80031A24: sh          $s0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r16;
    // 0x80031A28: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80031A2C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
L_80031A30:
    // 0x80031A30: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80031A34: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x80031A38: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80031A3C:
    // 0x80031A3C: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80031A40: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80031A44: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031A48: mflo        $v1
    ctx->r3 = lo;
    // 0x80031A4C: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x80031A50: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x80031A54: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031A58: mflo        $a1
    ctx->r5 = lo;
    // 0x80031A5C: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80031A60: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x80031A64: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031A68: mflo        $a0
    ctx->r4 = lo;
    // 0x80031A6C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80031A70: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80031A74: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80031A78: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80031A7C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80031A80: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80031A84: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80031A88: bne         $v0, $zero, L_80031A3C
    if (ctx->r2 != 0) {
        // 0x80031A8C: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80031A3C;
    }
    // 0x80031A8C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80031A90: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x80031A94: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80031A98: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80031A9C: bne         $v0, $zero, L_80031A30
    if (ctx->r2 != 0) {
        // 0x80031AA0: addiu       $t2, $t2, 0x6
        ctx->r10 = ADD32(ctx->r10, 0X6);
            goto L_80031A30;
    }
    // 0x80031AA0: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x80031AA4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80031AA8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80031AAC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80031AB0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80031AB4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80031AB8: jr          $ra
    // 0x80031ABC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80031ABC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80037284_12684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037284: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80037288: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003728C: sh          $zero, -0xC66($at)
    MEM_H(-0XC66, ctx->r1) = 0;
    // 0x80037290: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037294: jr          $ra
    // 0x80037298: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80037298: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80065540_40940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80065548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006554C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80065550: lw          $a0, -0x2378($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2378);
    // 0x80065554: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80065558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006555C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065560: jal         0x80070E98
    // 0x80065564: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E98_4C298(rdram, ctx);
        goto after_0;
    // 0x80065564: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_0:
    // 0x80065568: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x8006556C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065570: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80065574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80065578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006557C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80065580: jr          $ra
    // 0x80065584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80065584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031E5C_D25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031E60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80031E64: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80031E68: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80031E6C: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    // 0x80031E70: jal         0x8009A3B4
    // 0x80031E74: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80031E74: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80031E78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80031E7C: jr          $ra
    // 0x80031E80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80031E80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008A110_65510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008A118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008A11C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008A120: addiu       $a0, $a0, -0x14A8
    ctx->r4 = ADD32(ctx->r4, -0X14A8);
    // 0x8008A124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A128: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A12C: sb          $v0, -0x14B0($at)
    MEM_B(-0X14B0, ctx->r1) = ctx->r2;
    // 0x8008A130: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8008A134: addiu       $v0, $v0, 0x5418
    ctx->r2 = ADD32(ctx->r2, 0X5418);
    // 0x8008A138: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A13C: sw          $v0, -0x22D0($at)
    MEM_W(-0X22D0, ctx->r1) = ctx->r2;
    // 0x8008A140: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008A144: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8008A148: addiu       $v1, $v1, 0x3A40
    ctx->r3 = ADD32(ctx->r3, 0X3A40);
    // 0x8008A14C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A150: sw          $v0, -0x2310($at)
    MEM_W(-0X2310, ctx->r1) = ctx->r2;
    // 0x8008A154: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8008A158: addiu       $v0, $v0, 0x3B10
    ctx->r2 = ADD32(ctx->r2, 0X3B10);
    // 0x8008A15C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008A160: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A164: sw          $v0, -0x2304($at)
    MEM_W(-0X2304, ctx->r1) = ctx->r2;
    // 0x8008A168: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8008A16C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A170: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A174: sw          $zero, -0x22CC($at)
    MEM_W(-0X22CC, ctx->r1) = 0;
    // 0x8008A178: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A17C: sw          $v1, -0x2308($at)
    MEM_W(-0X2308, ctx->r1) = ctx->r3;
    // 0x8008A180: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A184: sw          $v0, -0x22F4($at)
    MEM_W(-0X22F4, ctx->r1) = ctx->r2;
    // 0x8008A188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A18C: sw          $zero, -0x22F0($at)
    MEM_W(-0X22F0, ctx->r1) = 0;
    // 0x8008A190: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A194: sw          $zero, -0x22EC($at)
    MEM_W(-0X22EC, ctx->r1) = 0;
    // 0x8008A198: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A19C: sw          $zero, -0x22E8($at)
    MEM_W(-0X22E8, ctx->r1) = 0;
    // 0x8008A1A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A1A4: sw          $zero, -0x22E4($at)
    MEM_W(-0X22E4, ctx->r1) = 0;
    // 0x8008A1A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A1AC: sw          $zero, -0x22D8($at)
    MEM_W(-0X22D8, ctx->r1) = 0;
    // 0x8008A1B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A1B4: jal         0x8008B31C
    // 0x8008A1B8: sw          $zero, -0x22D4($at)
    MEM_W(-0X22D4, ctx->r1) = 0;
    func_8008B31C_6671C(rdram, ctx);
        goto after_0;
    // 0x8008A1B8: sw          $zero, -0x22D4($at)
    MEM_W(-0X22D4, ctx->r1) = 0;
    after_0:
    // 0x8008A1BC: jal         0x8008A51C
    // 0x8008A1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008A51C_6591C(rdram, ctx);
        goto after_1;
    // 0x8008A1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8008A1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A1C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008A1CC: jr          $ra
    // 0x8008A1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008A1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004477C_1FB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004477C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80044780: beq         $a1, $v0, L_800447F0
    if (ctx->r5 == ctx->r2) {
        // 0x80044784: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_800447F0;
    }
    // 0x80044784: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80044788: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8004478C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80044790: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x80044794: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044798: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x8004479C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x800447A0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800447A4: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x800447A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800447AC: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800447B0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x800447B4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800447B8: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x800447BC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800447C0: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x800447C4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800447C8: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800447CC: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800447D0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800447D4: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x800447D8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800447DC: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x800447E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800447E4: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800447E8: j           L_80044854
    // 0x800447EC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_80044854;
    // 0x800447EC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_800447F0:
    // 0x800447F0: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x800447F4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x800447F8: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x800447FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80044800: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80044804: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80044808: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004480C: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x80044810: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044814: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044818: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8004481C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80044820: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80044824: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044828: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x8004482C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044830: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044834: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80044838: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004483C: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80044840: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044844: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x80044848: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004484C: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044850: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_80044854:
    // 0x80044854: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80044858: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004485C: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
    // 0x80044860: lui         $t4, 0x801E
    ctx->r12 = S32(0X801E << 16);
    // 0x80044864: lh          $t4, -0x7154($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X7154);
    // 0x80044868: subu        $t1, $t5, $t3
    ctx->r9 = SUB32(ctx->r13, ctx->r11);
    // 0x8004486C: subu        $v0, $t4, $a3
    ctx->r2 = SUB32(ctx->r12, ctx->r7);
    // 0x80044870: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044874: mflo        $v0
    ctx->r2 = lo;
    // 0x80044878: subu        $a1, $t2, $a3
    ctx->r5 = SUB32(ctx->r10, ctx->r7);
    // 0x8004487C: nop

    // 0x80044880: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80044884: bne         $a1, $zero, L_80044890
    if (ctx->r5 != 0) {
        // 0x80044888: nop
    
            goto L_80044890;
    }
    // 0x80044888: nop

    // 0x8004488C: break       7
    do_break(2147764364);
L_80044890:
    // 0x80044890: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044894: bne         $a1, $at, L_800448A8
    if (ctx->r5 != ctx->r1) {
        // 0x80044898: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800448A8;
    }
    // 0x80044898: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004489C: bne         $v0, $at, L_800448A8
    if (ctx->r2 != ctx->r1) {
        // 0x800448A0: nop
    
            goto L_800448A8;
    }
    // 0x800448A0: nop

    // 0x800448A4: break       6
    do_break(2147764388);
L_800448A8:
    // 0x800448A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800448AC: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x800448B0: addiu       $t0, $v0, -0x4
    ctx->r8 = ADD32(ctx->r2, -0X4);
    // 0x800448B4: slt         $v0, $t0, $t3
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800448B8: bnel        $v0, $zero, L_800448C0
    if (ctx->r2 != 0) {
        // 0x800448BC: addu        $t0, $t3, $zero
        ctx->r8 = ADD32(ctx->r11, 0);
            goto L_800448C0;
    }
    goto skip_0;
    // 0x800448BC: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    skip_0:
L_800448C0:
    // 0x800448C0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800448C4: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x800448C8: subu        $v0, $a0, $t3
    ctx->r2 = SUB32(ctx->r4, ctx->r11);
    // 0x800448CC: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800448D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800448D4: nop

    // 0x800448D8: nop

    // 0x800448DC: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x800448E0: bne         $t1, $zero, L_800448EC
    if (ctx->r9 != 0) {
        // 0x800448E4: nop
    
            goto L_800448EC;
    }
    // 0x800448E4: nop

    // 0x800448E8: break       7
    do_break(2147764456);
L_800448EC:
    // 0x800448EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800448F0: bne         $t1, $at, L_80044904
    if (ctx->r9 != ctx->r1) {
        // 0x800448F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044904;
    }
    // 0x800448F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800448F8: bne         $v0, $at, L_80044904
    if (ctx->r2 != ctx->r1) {
        // 0x800448FC: nop
    
            goto L_80044904;
    }
    // 0x800448FC: nop

    // 0x80044900: break       6
    do_break(2147764480);
L_80044904:
    // 0x80044904: mflo        $v0
    ctx->r2 = lo;
    // 0x80044908: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8004490C: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    // 0x80044910: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044914: bnel        $v0, $zero, L_8004491C
    if (ctx->r2 != 0) {
        // 0x80044918: addu        $a2, $t2, $zero
        ctx->r6 = ADD32(ctx->r10, 0);
            goto L_8004491C;
    }
    goto skip_1;
    // 0x80044918: addu        $a2, $t2, $zero
    ctx->r6 = ADD32(ctx->r10, 0);
    skip_1:
L_8004491C:
    // 0x8004491C: slt         $v0, $t0, $a0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044920: beq         $v0, $zero, L_80044A14
    if (ctx->r2 == 0) {
        // 0x80044924: slt         $v0, $a0, $t5
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_80044A14;
    }
    // 0x80044924: slt         $v0, $a0, $t5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80044928: beq         $v0, $zero, L_80044A14
    if (ctx->r2 == 0) {
        // 0x8004492C: slt         $v0, $a3, $t4
        ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r12) ? 1 : 0;
            goto L_80044A14;
    }
    // 0x8004492C: slt         $v0, $a3, $t4
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80044930: beq         $v0, $zero, L_80044A14
    if (ctx->r2 == 0) {
        // 0x80044934: slt         $v0, $t4, $a2
        ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80044A14;
    }
    // 0x80044934: slt         $v0, $t4, $a2
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044938: beq         $v0, $zero, L_80044A18
    if (ctx->r2 == 0) {
        // 0x8004493C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80044A18;
    }
    // 0x8004493C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80044940: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80044944: lh          $t2, 0x47E0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X47E0);
    // 0x80044948: subu        $v1, $t2, $a3
    ctx->r3 = SUB32(ctx->r10, ctx->r7);
    // 0x8004494C: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044950: mflo        $v1
    ctx->r3 = lo;
    // 0x80044954: nop

    // 0x80044958: nop

    // 0x8004495C: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80044960: bne         $a1, $zero, L_8004496C
    if (ctx->r5 != 0) {
        // 0x80044964: nop
    
            goto L_8004496C;
    }
    // 0x80044964: nop

    // 0x80044968: break       7
    do_break(2147764584);
L_8004496C:
    // 0x8004496C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044970: bne         $a1, $at, L_80044984
    if (ctx->r5 != ctx->r1) {
        // 0x80044974: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044984;
    }
    // 0x80044974: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044978: bne         $v1, $at, L_80044984
    if (ctx->r3 != ctx->r1) {
        // 0x8004497C: nop
    
            goto L_80044984;
    }
    // 0x8004497C: nop

    // 0x80044980: break       6
    do_break(2147764608);
L_80044984:
    // 0x80044984: mflo        $v1
    ctx->r3 = lo;
    // 0x80044988: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004498C: lh          $a0, 0x47DC($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X47DC);
    // 0x80044990: subu        $v0, $a0, $t3
    ctx->r2 = SUB32(ctx->r4, ctx->r11);
    // 0x80044994: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044998: mflo        $v0
    ctx->r2 = lo;
    // 0x8004499C: nop

    // 0x800449A0: nop

    // 0x800449A4: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x800449A8: bne         $t1, $zero, L_800449B4
    if (ctx->r9 != 0) {
        // 0x800449AC: nop
    
            goto L_800449B4;
    }
    // 0x800449AC: nop

    // 0x800449B0: break       7
    do_break(2147764656);
L_800449B4:
    // 0x800449B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800449B8: bne         $t1, $at, L_800449CC
    if (ctx->r9 != ctx->r1) {
        // 0x800449BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800449CC;
    }
    // 0x800449BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800449C0: bne         $v0, $at, L_800449CC
    if (ctx->r2 != ctx->r1) {
        // 0x800449C4: nop
    
            goto L_800449CC;
    }
    // 0x800449C4: nop

    // 0x800449C8: break       6
    do_break(2147764680);
L_800449CC:
    // 0x800449CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800449D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800449D4: sh          $t0, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r8;
    // 0x800449D8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800449DC: sh          $t5, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r13;
    // 0x800449E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800449E4: sh          $a3, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r7;
    // 0x800449E8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800449EC: sh          $a2, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r6;
    // 0x800449F0: addu        $t0, $t3, $v1
    ctx->r8 = ADD32(ctx->r11, ctx->r3);
    // 0x800449F4: slt         $a0, $t0, $a0
    ctx->r4 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800449F8: bne         $a0, $zero, L_80044A0C
    if (ctx->r4 != 0) {
        // 0x800449FC: addu        $a2, $a3, $v0
        ctx->r6 = ADD32(ctx->r7, ctx->r2);
            goto L_80044A0C;
    }
    // 0x800449FC: addu        $a2, $a3, $v0
    ctx->r6 = ADD32(ctx->r7, ctx->r2);
    // 0x80044A00: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044A04: beq         $v0, $zero, L_80044A18
    if (ctx->r2 == 0) {
        // 0x80044A08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80044A18;
    }
    // 0x80044A08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80044A0C:
    // 0x80044A0C: j           L_80044A18
    // 0x80044A10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044A18;
    // 0x80044A10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044A14:
    // 0x80044A14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80044A18:
    // 0x80044A18: jr          $ra
    // 0x80044A1C: nop

    TRACE_RETURN()
    return;
    // 0x80044A1C: nop

;}
RECOMP_FUNC void func_8002FD88_B188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FD88: jr          $ra
    // 0x8002FD8C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8002FD8C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8003AA3C_15E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AA3C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8003AA40: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8003AA44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003AA48: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8003AA4C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8003AA50: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8003AA54: lh          $a0, 0x8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X8);
    // 0x8003AA58: jal         0x80038CF8
    // 0x8003AA5C: lh          $a1, 0xC($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XC);
    func_80038CF8_140F8(rdram, ctx);
        goto after_0;
    // 0x8003AA5C: lh          $a1, 0xC($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XC);
    after_0:
    // 0x8003AA60: bne         $v0, $zero, L_8003AB4C
    if (ctx->r2 != 0) {
        // 0x8003AA64: nop
    
            goto L_8003AB4C;
    }
    // 0x8003AA64: nop

    // 0x8003AA68: jal         0x8002C654
    // 0x8003AA6C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8003AA6C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x8003AA70: andi        $v0, $s0, 0x20
    ctx->r2 = ctx->r16 & 0X20;
    // 0x8003AA74: beq         $v0, $zero, L_8003AA88
    if (ctx->r2 == 0) {
        // 0x8003AA78: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_8003AA88;
    }
    // 0x8003AA78: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8003AA7C: lhu         $a0, 0x12($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X12);
    // 0x8003AA80: jal         0x80031BB4
    // 0x8003AA84: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x8003AA84: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
L_8003AA88:
    // 0x8003AA88: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003AA8C: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8003AA90: beq         $v1, $zero, L_8003AAA4
    if (ctx->r3 == 0) {
        // 0x8003AA94: nop
    
            goto L_8003AAA4;
    }
    // 0x8003AA94: nop

    // 0x8003AA98: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x8003AA9C: j           L_8003AAA8
    // 0x8003AAA0: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
        goto L_8003AAA8;
    // 0x8003AAA0: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
L_8003AAA4:
    // 0x8003AAA4: lhu         $v1, 0x10($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X10);
L_8003AAA8:
    // 0x8003AAA8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8003AAAC: beq         $v1, $v0, L_8003AACC
    if (ctx->r3 == ctx->r2) {
        // 0x8003AAB0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8003AACC;
    }
    // 0x8003AAB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8003AAB4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8003AAB8: sll         $v0, $v1, 7
    ctx->r2 = S32(ctx->r3 << 7);
    // 0x8003AABC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8003AAC0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8003AAC4: jal         0x80031DA8
    // 0x8003AAC8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8003AAC8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
L_8003AACC:
    // 0x8003AACC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003AAD0: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8003AAD4: beq         $v1, $zero, L_8003AB00
    if (ctx->r3 == 0) {
        // 0x8003AAD8: nop
    
            goto L_8003AB00;
    }
    // 0x8003AAD8: nop

    // 0x8003AADC: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x8003AAE0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003AAE4: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8003AAE8: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8003AAEC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003AAF0: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8003AAF4: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x8003AAF8: j           L_8003AB14
    // 0x8003AAFC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
        goto L_8003AB14;
    // 0x8003AAFC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
L_8003AB00:
    // 0x8003AB00: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8003AB04: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8003AB08: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8003AB0C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8003AB10: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
L_8003AB14:
    // 0x8003AB14: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8003AB18: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8003AB1C: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8003AB20: jal         0x80031E5C
    // 0x8003AB24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_4;
    // 0x8003AB24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8003AB28: jal         0x80031E94
    // 0x8003AB2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_5;
    // 0x8003AB2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8003AB30: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8003AB34: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8003AB38: jal         0x80032068
    // 0x8003AB3C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_80032068_D468(rdram, ctx);
        goto after_6;
    // 0x8003AB3C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x8003AB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003AB44: jal         0x80084CF0
    // 0x8003AB48: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80084CF0_600F0(rdram, ctx);
        goto after_7;
    // 0x8003AB48: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_7:
L_8003AB4C:
    // 0x8003AB4C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8003AB50: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8003AB54: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8003AB58: jr          $ra
    // 0x8003AB5C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8003AB5C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80072D7C_4E17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072D7C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80072D80: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80072D84: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x80072D88: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_80072D8C:
    // 0x80072D8C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072D90: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80072D94: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80072D98: beq         $v0, $zero, L_80072DF0
    if (ctx->r2 == 0) {
        // 0x80072D9C: nop
    
            goto L_80072DF0;
    }
    // 0x80072D9C: nop

    // 0x80072DA0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80072DA4: and         $v0, $v0, $t1
    ctx->r2 = ctx->r2 & ctx->r9;
    // 0x80072DA8: xor         $v1, $v0, $a1
    ctx->r3 = ctx->r2 ^ ctx->r5;
    // 0x80072DAC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80072DB0: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80072DB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80072DB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80072DBC: beq         $v1, $zero, L_80072DE4
    if (ctx->r3 == 0) {
        // 0x80072DC0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_80072DE4;
    }
    // 0x80072DC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80072DC4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072DC8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80072DCC: lh          $v0, 0x5086($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5086);
    // 0x80072DD0: bne         $v0, $zero, L_80072DE4
    if (ctx->r2 != 0) {
        // 0x80072DD4: nop
    
            goto L_80072DE4;
    }
    // 0x80072DD4: nop

    // 0x80072DD8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80072DDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80072DE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80072DE4:
    // 0x80072DE4: sltiu       $v0, $t0, 0x6B0
    ctx->r2 = ctx->r8 < 0X6B0 ? 1 : 0;
    // 0x80072DE8: bne         $v0, $zero, L_80072D8C
    if (ctx->r2 != 0) {
        // 0x80072DEC: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_80072D8C;
    }
    // 0x80072DEC: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
L_80072DF0:
    // 0x80072DF0: jr          $ra
    // 0x80072DF4: nop

    TRACE_RETURN()
    return;
    // 0x80072DF4: nop

    // 0x80072DF8: nop

    // 0x80072DFC: nop

;}
RECOMP_FUNC void func_800540EC_2F4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800540EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800540F0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800540F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800540F8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800540FC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80054100: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80054104: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80054108: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8005410C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054110: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80054114: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80054118: lbu         $v0, -0x1AF6($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1AF6);
    // 0x8005411C: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80054120: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80054124: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80054128: bne         $v1, $zero, L_80054138
    if (ctx->r3 != 0) {
        // 0x8005412C: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_80054138;
    }
    // 0x8005412C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
L_80054130:
    // 0x80054130: j           L_8005455C
    // 0x80054134: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_8005455C;
    // 0x80054134: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_80054138:
    // 0x80054138: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005413C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054140: beq         $v1, $v0, L_8005421C
    if (ctx->r3 == ctx->r2) {
        // 0x80054144: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005421C;
    }
    // 0x80054144: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80054148: bne         $v0, $zero, L_8005415C
    if (ctx->r2 != 0) {
        // 0x8005414C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8005415C;
    }
    // 0x8005414C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80054150: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80054154: beq         $v1, $v0, L_800544B8
    if (ctx->r3 == ctx->r2) {
        // 0x80054158: nop
    
            goto L_800544B8;
    }
    // 0x80054158: nop

L_8005415C:
    // 0x8005415C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80054160: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80054164: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80054168: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8005416C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80054170: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80054174: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x80054178: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8005417C: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x80054180: jal         0x8004E150
    // 0x80054184: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_0;
    // 0x80054184: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80054188: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8005418C: bne         $v0, $zero, L_80054560
    if (ctx->r2 != 0) {
        // 0x80054190: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054560;
    }
    // 0x80054190: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054198: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8005419C: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x800541A0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x800541A4: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x800541A8: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x800541AC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800541B0: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x800541B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800541B8: sh          $v1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r3;
    // 0x800541BC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x800541C0: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x800541C4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x800541C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800541CC: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x800541D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800541D4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x800541D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800541DC: lhu         $v0, 0x49C6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C6);
    // 0x800541E0: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x800541E4: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x800541E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800541EC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x800541F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800541F4: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x800541F8: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x800541FC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80054200: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80054204: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80054208: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005420C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054210: lbu         $v0, -0x1AF8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1AF8);
    // 0x80054214: j           L_8005455C
    // 0x80054218: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8005455C;
    // 0x80054218: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8005421C:
    // 0x8005421C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80054220: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80054224: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80054228: jal         0x8009A3B4
    // 0x8005422C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8005422C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80054230: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80054234: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80054238: ori         $a0, $zero, 0xD0FC
    ctx->r4 = 0 | 0XD0FC;
    // 0x8005423C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054240: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80054244: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054248: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8005424C: bnel        $v0, $zero, L_8005455C
    if (ctx->r2 != 0) {
        // 0x80054250: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_0;
    // 0x80054250: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_0:
    // 0x80054254: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x80054258: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8005425C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054260: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80054264: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054268: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8005426C: bnel        $v0, $zero, L_8005455C
    if (ctx->r2 != 0) {
        // 0x80054270: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_1;
    // 0x80054270: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_1:
    // 0x80054274: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x80054278: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8005427C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054280: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80054284: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054288: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8005428C: bnel        $v0, $zero, L_8005455C
    if (ctx->r2 != 0) {
        // 0x80054290: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_2;
    // 0x80054290: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_2:
    // 0x80054294: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80054298: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x8005429C: jal         0x80032308
    // 0x800542A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80032308_D708(rdram, ctx);
        goto after_2;
    // 0x800542A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x800542A4: lui         $v0, 0xFF0
    ctx->r2 = S32(0XFF0 << 16);
    // 0x800542A8: ori         $v0, $v0, 0x69DA
    ctx->r2 = ctx->r2 | 0X69DA;
    // 0x800542AC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800542B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800542B4: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x800542B8: addiu       $a3, $zero, 0x165
    ctx->r7 = ADD32(0, 0X165);
    // 0x800542BC: jal         0x80051B48
    // 0x800542C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_3;
    // 0x800542C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x800542C4: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x800542C8: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x800542CC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x800542D0: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x800542D4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x800542D8: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x800542DC: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x800542E0: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    // 0x800542E4: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x800542E8: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x800542EC: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x800542F0: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x800542F4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800542F8: addiu       $s1, $s1, -0x1B04
    ctx->r17 = ADD32(ctx->r17, -0X1B04);
    // 0x800542FC: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x80054300: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x80054304: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80054308: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005430C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80054310: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80054314: sra         $v1, $v1, 10
    ctx->r3 = S32(SIGNED(ctx->r3) >> 10);
    // 0x80054318: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8005431C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80054320: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054324: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80054328: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x8005432C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80054330: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80054334: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80054338: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005433C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80054340: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80054344: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80054348: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8005434C: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80054350: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    // 0x80054354: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x80054358: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x8005435C: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x80054360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80054364: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80054368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005436C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80054370: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x80054374: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x80054378: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8005437C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80054380: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054384: jal         0x8003F780
    // 0x80054388: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_4;
    // 0x80054388: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_4:
    // 0x8005438C: bnel        $v0, $zero, L_8005455C
    if (ctx->r2 != 0) {
        // 0x80054390: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_3;
    // 0x80054390: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_3:
    // 0x80054394: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80054398: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8005439C: lhu         $v1, 0x18($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X18);
    // 0x800543A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800543A4: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x800543A8: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x800543AC: lhu         $t0, 0x1A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1A);
    // 0x800543B0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800543B4: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x800543B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800543BC: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x800543C0: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x800543C4: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x800543C8: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x800543CC: sra         $t0, $t0, 17
    ctx->r8 = S32(SIGNED(ctx->r8) >> 17);
    // 0x800543D0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800543D4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800543D8: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x800543DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800543E0: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x800543E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800543E8: jal         0x8003F780
    // 0x800543EC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_5;
    // 0x800543EC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_5:
    // 0x800543F0: bnel        $v0, $zero, L_8005455C
    if (ctx->r2 != 0) {
        // 0x800543F4: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_4;
    // 0x800543F4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_4:
    // 0x800543F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x800543FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80054400: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80054404: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80054408: beql        $v0, $zero, L_8005455C
    if (ctx->r2 == 0) {
        // 0x8005440C: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_8005455C;
    }
    goto skip_5;
    // 0x8005440C: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_5:
    // 0x80054410: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80054414: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80054418: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8005441C: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054420: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054424: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054428: beq         $v0, $zero, L_80054560
    if (ctx->r2 == 0) {
        // 0x8005442C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054560;
    }
    // 0x8005442C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054430: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80054434: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80054438: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8005443C: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054440: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054444: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054448: beq         $v0, $zero, L_80054560
    if (ctx->r2 == 0) {
        // 0x8005444C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054560;
    }
    // 0x8005444C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054450: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80054454: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80054458: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8005445C: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054460: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054464: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054468: beq         $v0, $zero, L_8005455C
    if (ctx->r2 == 0) {
        // 0x8005446C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005455C;
    }
    // 0x8005446C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80054470: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80054474: lhu         $v1, -0x2332($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2332);
    // 0x80054478: bne         $v1, $v0, L_8005448C
    if (ctx->r3 != ctx->r2) {
        // 0x8005447C: addiu       $a0, $zero, 0x9C
        ctx->r4 = ADD32(0, 0X9C);
            goto L_8005448C;
    }
    // 0x8005447C: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    // 0x80054480: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80054484: jal         0x8002A2F8
    // 0x80054488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80054488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
L_8005448C:
    // 0x8005448C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80054490: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80054494: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x80054498: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005449C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800544A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800544A4: lbu         $v0, -0x1AF7($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1AF7);
    // 0x800544A8: jal         0x8004B5A4
    // 0x800544AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8004B5A4_269A4(rdram, ctx);
        goto after_7;
    // 0x800544AC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_7:
    // 0x800544B0: j           L_80054560
    // 0x800544B4: slti        $v0, $v0, 0x1
    ctx->r2 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
        goto L_80054560;
    // 0x800544B4: slti        $v0, $v0, 0x1
    ctx->r2 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
L_800544B8:
    // 0x800544B8: jal         0x8004B5A4
    // 0x800544BC: nop

    func_8004B5A4_269A4(rdram, ctx);
        goto after_8;
    // 0x800544BC: nop

    after_8:
    // 0x800544C0: blez        $v0, L_800544D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800544C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800544D4;
    }
    // 0x800544C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800544C8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x800544CC: j           L_80054560
    // 0x800544D0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_80054560;
    // 0x800544D0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_800544D4:
    // 0x800544D4: jal         0x80049EBC
    // 0x800544D8: nop

    func_80049EBC_252BC(rdram, ctx);
        goto after_9;
    // 0x800544D8: nop

    after_9:
    // 0x800544DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800544E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800544E4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x800544E8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x800544EC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x800544F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x800544F4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x800544F8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x800544FC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80054500: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80054504: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80054508: jal         0x8004E150
    // 0x8005450C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_10;
    // 0x8005450C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x80054510: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80054514: beq         $v0, $zero, L_8005453C
    if (ctx->r2 == 0) {
        // 0x80054518: nop
    
            goto L_8005453C;
    }
    // 0x80054518: nop

    // 0x8005451C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80054520: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80054524: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80054528: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8005452C: beq         $v0, $zero, L_80054130
    if (ctx->r2 == 0) {
        // 0x80054530: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80054130;
    }
    // 0x80054530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054534: j           L_80054560
    // 0x80054538: nop

        goto L_80054560;
    // 0x80054538: nop

L_8005453C:
    // 0x8005453C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80054540: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054544: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80054548: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005454C: lbu         $v1, -0x1AF7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1AF7);
    // 0x80054550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054554: j           L_80054560
    // 0x80054558: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80054560;
    // 0x80054558: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8005455C:
    // 0x8005455C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80054560:
    // 0x80054560: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80054564: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80054568: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8005456C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80054570: jr          $ra
    // 0x80054574: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80054574: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8009284C_6DC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009284C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80092850: jr          $ra
    // 0x80092854: lbu         $v0, 0x572C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X572C);
    TRACE_RETURN()
    return;
    // 0x80092854: lbu         $v0, 0x572C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X572C);
    // 0x80092858: nop

    // 0x8009285C: nop

;}
RECOMP_FUNC void func_80060018_3B418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060018: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006001C: lw          $v0, -0x3A3C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A3C);
    // 0x80060020: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80060024: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80060028: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8006002C: lw          $a0, -0x3A34($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A34);
    // 0x80060030: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80060034: lw          $a1, -0x3A40($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A40);
    // 0x80060038: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8006003C: lw          $a2, -0x39AC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39AC);
    // 0x80060040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80060044: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060048: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8006004C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80060050: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060054: sw          $v0, -0x3A3C($at)
    MEM_W(-0X3A3C, ctx->r1) = ctx->r2;
    // 0x80060058: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006005C: sw          $v1, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = ctx->r3;
    // 0x80060060: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060064: sw          $a0, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r4;
    // 0x80060068: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006006C: sw          $a1, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = ctx->r5;
    // 0x80060070: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x80060074: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80060078: beq         $v1, $v0, L_800600F0
    if (ctx->r3 == ctx->r2) {
        // 0x8006007C: nop
    
            goto L_800600F0;
    }
    // 0x8006007C: nop

    // 0x80060080: bne         $v1, $a1, L_800600F0
    if (ctx->r3 != ctx->r5) {
        // 0x80060084: addiu       $v0, $a2, 0x8
        ctx->r2 = ADD32(ctx->r6, 0X8);
            goto L_800600F0;
    }
    // 0x80060084: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80060088: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006008C: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80060090: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060094: sw          $v0, -0x39AC($at)
    MEM_W(-0X39AC, ctx->r1) = ctx->r2;
    // 0x80060098: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x8006009C: beq         $v1, $v0, L_800600B4
    if (ctx->r3 == ctx->r2) {
        // 0x800600A0: nop
    
            goto L_800600B4;
    }
    // 0x800600A0: nop

    // 0x800600A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600A8: sw          $zero, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = 0;
    // 0x800600AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600B0: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
L_800600B4:
    // 0x800600B4: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x800600B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800600BC: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x800600C0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600C4: sb          $v0, -0x3A48($at)
    MEM_B(-0X3A48, ctx->r1) = ctx->r2;
    // 0x800600C8: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x800600CC: beq         $v1, $v0, L_800600DC
    if (ctx->r3 == ctx->r2) {
        // 0x800600D0: nop
    
            goto L_800600DC;
    }
    // 0x800600D0: nop

    // 0x800600D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600D8: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
L_800600DC:
    // 0x800600DC: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x800600E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600E4: sw          $zero, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = 0;
    // 0x800600E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800600EC: sb          $v0, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = ctx->r2;
L_800600F0:
    // 0x800600F0: jr          $ra
    // 0x800600F4: nop

    TRACE_RETURN()
    return;
    // 0x800600F4: nop

;}
RECOMP_FUNC void _ldexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800977F8: beq         $a2, $zero, L_80097814
    if (ctx->r6 == 0) {
        // 0x800977FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80097814;
    }
    // 0x800977FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097800: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80097804: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80097808: nop

    // 0x8009780C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80097810: mul.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f0.d);
L_80097814:
    // 0x80097814: jr          $ra
    // 0x80097818: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    TRACE_RETURN()
    return;
    // 0x80097818: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_80031D38_D138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031D3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031D40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031D44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031D48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80031D4C: jal         0x80032510
    // 0x80031D50: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031D50: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031D58: jal         0x800324D0
    // 0x80031D5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031D5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80031D64: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80031D68: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031D6C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x80031D70: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031D74: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x80031D78: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80031D7C: sh          $s0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r16;
    // 0x80031D80: sh          $a0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r4;
    // 0x80031D84: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80031D88: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x80031D8C: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80031D90: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
    // 0x80031D94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80031D98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80031D9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80031DA0: jr          $ra
    // 0x80031DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80031DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void _doModFunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098A6C: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80098A70: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x80098A74: nop

    // 0x80098A78: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80098A7C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80098A80: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80098A84: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80098A88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098A8C: ldc1        $f0, 0x3158($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3158);
    // 0x80098A90: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80098A94: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x80098A98: nop

    // 0x80098A9C: nop

    // 0x80098AA0: bc1f        L_80098AB8
    if (!c1cs) {
        // 0x80098AA4: swc1        $f2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
            goto L_80098AB8;
    }
    // 0x80098AA4: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x80098AA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098AAC: ldc1        $f0, 0x3160($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3160);
    // 0x80098AB0: sub.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f4.d - ctx->f0.d;
    // 0x80098AB4: cvt.s.d     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.fl = CVT_S_D(ctx->f0.d);
L_80098AB8:
    // 0x80098AB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80098ABC: nop

    // 0x80098AC0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80098AC4: mov.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.fl = ctx->f2.fl;
    // 0x80098AC8: nop

    // 0x80098ACC: bc1f        L_80098AD8
    if (!c1cs) {
        // 0x80098AD0: swc1        $f2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
            goto L_80098AD8;
    }
    // 0x80098AD0: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x80098AD4: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
L_80098AD8:
    // 0x80098AD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098ADC: ldc1        $f0, 0x3168($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3168);
    // 0x80098AE0: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x80098AE4: sub.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d - ctx->f0.d;
    // 0x80098AE8: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80098AEC: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x80098AF0: jr          $ra
    // 0x80098AF4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    TRACE_RETURN()
    return;
    // 0x80098AF4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
;}
RECOMP_FUNC void func_800711A8_4C5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800711A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800711AC: blez        $a0, L_800711DC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800711B0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_800711DC;
    }
    // 0x800711B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800711B4: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x800711B8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x800711BC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800711C0: bne         $v0, $zero, L_800711DC
    if (ctx->r2 != 0) {
        // 0x800711C4: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_800711DC;
    }
    // 0x800711C4: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x800711C8: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x800711CC: beq         $v0, $zero, L_800711DC
    if (ctx->r2 == 0) {
        // 0x800711D0: nop
    
            goto L_800711DC;
    }
    // 0x800711D0: nop

    // 0x800711D4: jal         0x800711E8
    // 0x800711D8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    func_800711E8_4C5E8(rdram, ctx);
        goto after_0;
    // 0x800711D8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    after_0:
L_800711DC:
    // 0x800711DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800711E0: jr          $ra
    // 0x800711E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800711E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _filterBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800989D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800989D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800989D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800989DC: lui         $v1, 0xB00
    ctx->r3 = S32(0XB00 << 16);
    // 0x800989E0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x800989E4: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x800989E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800989EC: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x800989F0: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x800989F4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x800989F8: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x800989FC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80098A00: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80098A04: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x80098A08: or          $a1, $a1, $a2
    ctx->r5 = ctx->r5 | ctx->r6;
    // 0x80098A0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80098A10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80098A14: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80098A18: jal         0x80099BB0
    // 0x80098A1C: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80098A1C: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x80098A20: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80098A24: lbu         $v0, 0x2F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2F);
    // 0x80098A28: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x80098A2C: lui         $a0, 0xE00
    ctx->r4 = S32(0XE00 << 16);
    // 0x80098A30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80098A34: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80098A38: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80098A3C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80098A40: jal         0x80099BB0
    // 0x80098A44: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80098A44: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    after_1:
    // 0x80098A48: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80098A4C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80098A50: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80098A54: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x80098A58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80098A5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80098A60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80098A64: jr          $ra
    // 0x80098A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80098A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B300_66700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B300: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B304: jr          $ra
    // 0x8008B308: lw          $v0, 0x4FB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FB8);
    TRACE_RETURN()
    return;
    // 0x8008B308: lw          $v0, 0x4FB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FB8);
;}
RECOMP_FUNC void func_80055368_30768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055368: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005536C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80055370: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80055374: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80055378: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005537C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80055380: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80055384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80055388: lb          $a0, 0x2($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X2);
    // 0x8005538C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80055390: beq         $a0, $s0, L_800554B0
    if (ctx->r4 == ctx->r16) {
        // 0x80055394: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_800554B0;
    }
    // 0x80055394: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80055398: beql        $v0, $zero, L_800553B0
    if (ctx->r2 == 0) {
        // 0x8005539C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800553B0;
    }
    goto skip_0;
    // 0x8005539C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x800553A0: beq         $a0, $zero, L_800553C0
    if (ctx->r4 == 0) {
        // 0x800553A4: nop
    
            goto L_800553C0;
    }
    // 0x800553A4: nop

    // 0x800553A8: j           L_80055610
    // 0x800553AC: nop

        goto L_80055610;
    // 0x800553AC: nop

L_800553B0:
    // 0x800553B0: beq         $a0, $v0, L_800555F4
    if (ctx->r4 == ctx->r2) {
        // 0x800553B4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_800555F4;
    }
    // 0x800553B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800553B8: j           L_80055610
    // 0x800553BC: nop

        goto L_80055610;
    // 0x800553BC: nop

L_800553C0:
    // 0x800553C0: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x800553C4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800553C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800553CC: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x800553D0: jal         0x8006033C
    // 0x800553D4: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x800553D4: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    after_0:
    // 0x800553D8: beq         $v0, $zero, L_80055490
    if (ctx->r2 == 0) {
        // 0x800553DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80055490;
    }
    // 0x800553DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800553E0: lbu         $v1, 0x4($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X4);
    // 0x800553E4: beq         $v1, $v0, L_80055438
    if (ctx->r3 == ctx->r2) {
        // 0x800553E8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80055438;
    }
    // 0x800553E8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x800553EC: beql        $v0, $zero, L_80055404
    if (ctx->r2 == 0) {
        // 0x800553F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80055404;
    }
    goto skip_1;
    // 0x800553F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_1:
    // 0x800553F4: beq         $v1, $s0, L_8005541C
    if (ctx->r3 == ctx->r16) {
        // 0x800553F8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8005541C;
    }
    // 0x800553F8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800553FC: j           L_800555CC
    // 0x80055400: nop

        goto L_800555CC;
    // 0x80055400: nop

L_80055404:
    // 0x80055404: beq         $v1, $v0, L_80055458
    if (ctx->r3 == ctx->r2) {
        // 0x80055408: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80055458;
    }
    // 0x80055408: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005540C: beq         $v1, $v0, L_80055474
    if (ctx->r3 == ctx->r2) {
        // 0x80055410: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80055474;
    }
    // 0x80055410: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80055414: j           L_800555CC
    // 0x80055418: nop

        goto L_800555CC;
    // 0x80055418: nop

L_8005541C:
    // 0x8005541C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80055420: lb          $v0, 0x4B1A($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B1A);
    // 0x80055424: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80055428: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8005542C: andi        $v0, $v0, 0x33
    ctx->r2 = ctx->r2 & 0X33;
    // 0x80055430: j           L_800555CC
    // 0x80055434: ori         $s2, $v0, 0x32
    ctx->r18 = ctx->r2 | 0X32;
        goto L_800555CC;
    // 0x80055434: ori         $s2, $v0, 0x32
    ctx->r18 = ctx->r2 | 0X32;
L_80055438:
    // 0x80055438: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005543C: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x80055440: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80055444: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80055448: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8005544C: andi        $v0, $v0, 0x39
    ctx->r2 = ctx->r2 & 0X39;
    // 0x80055450: j           L_800555CC
    // 0x80055454: ori         $s2, $v0, 0x38
    ctx->r18 = ctx->r2 | 0X38;
        goto L_800555CC;
    // 0x80055454: ori         $s2, $v0, 0x38
    ctx->r18 = ctx->r2 | 0X38;
L_80055458:
    // 0x80055458: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005545C: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x80055460: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80055464: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80055468: andi        $v0, $v0, 0x35
    ctx->r2 = ctx->r2 & 0X35;
    // 0x8005546C: j           L_800555CC
    // 0x80055470: ori         $s2, $v0, 0x34
    ctx->r18 = ctx->r2 | 0X34;
        goto L_800555CC;
    // 0x80055470: ori         $s2, $v0, 0x34
    ctx->r18 = ctx->r2 | 0X34;
L_80055474:
    // 0x80055474: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80055478: lb          $v0, 0x4B1C($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B1C);
    // 0x8005547C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80055480: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80055484: andi        $v0, $v0, 0x49
    ctx->r2 = ctx->r2 & 0X49;
    // 0x80055488: j           L_800555CC
    // 0x8005548C: ori         $s2, $v0, 0x48
    ctx->r18 = ctx->r2 | 0X48;
        goto L_800555CC;
    // 0x8005548C: ori         $s2, $v0, 0x48
    ctx->r18 = ctx->r2 | 0X48;
L_80055490:
    // 0x80055490: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80055494: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80055498: jal         0x8002A2F8
    // 0x8005549C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x8005549C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x800554A0: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x800554A4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800554A8: j           L_80055610
    // 0x800554AC: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_80055610;
    // 0x800554AC: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_800554B0:
    // 0x800554B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800554B4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800554B8: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x800554BC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800554C0: beq         $v0, $zero, L_80055610
    if (ctx->r2 == 0) {
        // 0x800554C4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80055610;
    }
    // 0x800554C4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800554C8: bne         $v0, $zero, L_800555E4
    if (ctx->r2 != 0) {
        // 0x800554CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800555E4;
    }
    // 0x800554CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800554D0: lbu         $v1, 0x4($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X4);
    // 0x800554D4: beq         $v1, $v0, L_8005552C
    if (ctx->r3 == ctx->r2) {
        // 0x800554D8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8005552C;
    }
    // 0x800554D8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x800554DC: beql        $v0, $zero, L_800554F4
    if (ctx->r2 == 0) {
        // 0x800554E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800554F4;
    }
    goto skip_2;
    // 0x800554E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x800554E4: beq         $v1, $a0, L_8005550C
    if (ctx->r3 == ctx->r4) {
        // 0x800554E8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8005550C;
    }
    // 0x800554E8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800554EC: j           L_800555CC
    // 0x800554F0: nop

        goto L_800555CC;
    // 0x800554F0: nop

L_800554F4:
    // 0x800554F4: beq         $v1, $v0, L_80055558
    if (ctx->r3 == ctx->r2) {
        // 0x800554F8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80055558;
    }
    // 0x800554F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800554FC: beq         $v1, $v0, L_80055580
    if (ctx->r3 == ctx->r2) {
        // 0x80055500: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80055580;
    }
    // 0x80055500: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80055504: j           L_800555CC
    // 0x80055508: nop

        goto L_800555CC;
    // 0x80055508: nop

L_8005550C:
    // 0x8005550C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055510: addiu       $a0, $a0, 0x4B1A
    ctx->r4 = ADD32(ctx->r4, 0X4B1A);
    // 0x80055514: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x80055518: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x8005551C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80055520: andi        $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 & 0X3D;
    // 0x80055524: j           L_80055574
    // 0x80055528: ori         $s2, $v0, 0x3C
    ctx->r18 = ctx->r2 | 0X3C;
        goto L_80055574;
    // 0x80055528: ori         $s2, $v0, 0x3C
    ctx->r18 = ctx->r2 | 0X3C;
L_8005552C:
    // 0x8005552C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055530: addiu       $a0, $a0, 0x4B1B
    ctx->r4 = ADD32(ctx->r4, 0X4B1B);
    // 0x80055534: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80055538: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8005553C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80055540: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80055544: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80055548: ori         $s2, $v0, 0x3E
    ctx->r18 = ctx->r2 | 0X3E;
    // 0x8005554C: xori        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 ^ 0X2;
    // 0x80055550: j           L_800555CC
    // 0x80055554: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_800555CC;
    // 0x80055554: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_80055558:
    // 0x80055558: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005555C: addiu       $a0, $a0, 0x4B1B
    ctx->r4 = ADD32(ctx->r4, 0X4B1B);
    // 0x80055560: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80055564: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80055568: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8005556C: andi        $v0, $v0, 0x37
    ctx->r2 = ctx->r2 & 0X37;
    // 0x80055570: ori         $s2, $v0, 0x36
    ctx->r18 = ctx->r2 | 0X36;
L_80055574:
    // 0x80055574: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80055578: j           L_800555CC
    // 0x8005557C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
        goto L_800555CC;
    // 0x8005557C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_80055580:
    // 0x80055580: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80055584: addiu       $s4, $s4, 0x4B1C
    ctx->r20 = ADD32(ctx->r20, 0X4B1C);
    // 0x80055588: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x8005558C: beq         $v0, $zero, L_8005559C
    if (ctx->r2 == 0) {
        // 0x80055590: addiu       $s2, $zero, 0x4B
        ctx->r18 = ADD32(0, 0X4B);
            goto L_8005559C;
    }
    // 0x80055590: addiu       $s2, $zero, 0x4B
    ctx->r18 = ADD32(0, 0X4B);
    // 0x80055594: j           L_800555CC
    // 0x80055598: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
        goto L_800555CC;
    // 0x80055598: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
L_8005559C:
    // 0x8005559C: addiu       $s2, $zero, 0x4A
    ctx->r18 = ADD32(0, 0X4A);
    // 0x800555A0: jal         0x8006033C
    // 0x800555A4: addiu       $a0, $zero, 0x53A
    ctx->r4 = ADD32(0, 0X53A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x800555A4: addiu       $a0, $zero, 0x53A
    ctx->r4 = ADD32(0, 0X53A);
    after_2:
    // 0x800555A8: addiu       $a0, $zero, 0x53B
    ctx->r4 = ADD32(0, 0X53B);
    // 0x800555AC: jal         0x8006033C
    // 0x800555B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x800555B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x800555B4: addiu       $a0, $zero, 0x53C
    ctx->r4 = ADD32(0, 0X53C);
    // 0x800555B8: jal         0x8006033C
    // 0x800555BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x800555BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x800555C0: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x800555C4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x800555C8: sb          $s0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r16;
L_800555CC:
    // 0x800555CC: beq         $s2, $zero, L_800555E4
    if (ctx->r18 == 0) {
        // 0x800555D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800555E4;
    }
    // 0x800555D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800555D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800555D8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800555DC: jal         0x80061510
    // 0x800555E0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x800555E0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_5:
L_800555E4:
    // 0x800555E4: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x800555E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800555EC: j           L_80055610
    // 0x800555F0: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_80055610;
    // 0x800555F0: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_800555F4:
    // 0x800555F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800555F8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800555FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80055600: bne         $v0, $zero, L_80055610
    if (ctx->r2 != 0) {
        // 0x80055604: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80055610;
    }
    // 0x80055604: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80055608: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x8005560C: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
L_80055610:
    // 0x80055610: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80055614: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80055618: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005561C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80055620: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80055624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055628: jr          $ra
    // 0x8005562C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8005562C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800653C8_407C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800653C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800653CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800653D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800653D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800653D8: lhu         $v1, 0xC0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC0);
    // 0x800653DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800653E0: lbu         $a0, 0x6B39($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X6B39);
    // 0x800653E4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800653E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800653EC: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
    // 0x800653F0: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x800653F4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x800653F8: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    // 0x800653FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065400: jal         0x8006036C
    // 0x80065404: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80065404: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    after_0:
    // 0x80065408: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006540C: lbu         $v0, 0x6B39($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6B39);
    // 0x80065410: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80065414: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065418: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006541C: lw          $v0, 0x28C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28C4);
    // 0x80065420: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80065424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80065428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006542C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80065430: jr          $ra
    // 0x80065434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80065434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005C584_37984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C584: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C588: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x8005C58C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C590: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8005C594: beq         $v0, $zero, L_8005C7F4
    if (ctx->r2 == 0) {
        // 0x8005C598: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8005C7F4;
    }
    // 0x8005C598: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005C59C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005C5A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5A4: addu        $at, $at, $v0
    gpr jr_addend_8005C5AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005C5A8: lw          $v0, 0x26B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X26B8);
    // 0x8005C5AC: jr          $v0
    // 0x8005C5B0: nop

    switch (jr_addend_8005C5AC >> 2) {
        case 0: goto L_8005C5B4; break;
        case 1: goto L_8005C7A4; break;
        case 2: goto L_8005C66C; break;
        case 3: goto L_8005C698; break;
        case 4: goto L_8005C6EC; break;
        case 5: goto L_8005C7F4; break;
        case 6: goto L_8005C7F4; break;
        case 7: goto L_8005C7F4; break;
        case 8: goto L_8005C7F4; break;
        case 9: goto L_8005C6FC; break;
        case 10: goto L_8005C7A4; break;
        case 11: goto L_8005C7E8; break;
        default: switch_error(__func__, 0x8005C5AC, 0x800D26B8);
    }
    // 0x8005C5B0: nop

L_8005C5B4:
    // 0x8005C5B4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005C5B8: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x8005C5BC: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x8005C5C0: jal         0x8009A3B4
    // 0x8005C5C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005C5C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8005C5C8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C5CC: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x8005C5D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C5D4: lw          $v1, -0x3E20($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E20);
    // 0x8005C5D8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005C5DC: lw          $a0, -0x3E1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E1C);
    // 0x8005C5E0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8005C5E4: lw          $a1, -0x4850($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4850);
    // 0x8005C5E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C5EC: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x8005C5F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C5F4: sw          $v1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r3;
    // 0x8005C5F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C5FC: sw          $a0, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r4;
    // 0x8005C600: lh          $a0, 0x14($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X14);
    // 0x8005C604: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C608: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x8005C60C: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x8005C610: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C614: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x8005C618: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C61C: sw          $a0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r4;
    // 0x8005C620: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8005C624: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8005C628: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005C62C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C630: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x8005C634: addiu       $v0, $zero, -0x150
    ctx->r2 = ADD32(0, -0X150);
    // 0x8005C638: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C63C: sw          $v0, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = ctx->r2;
    // 0x8005C640: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8005C644: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C648: sw          $v0, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r2;
    // 0x8005C64C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005C650: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C654: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x8005C658: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C65C: sb          $v1, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r3;
    // 0x8005C660: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C664: j           L_8005C7F4
    // 0x8005C668: sw          $a0, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r4;
        goto L_8005C7F4;
    // 0x8005C668: sw          $a0, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r4;
L_8005C66C:
    // 0x8005C66C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005C670: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005C674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005C678: jal         0x80061510
    // 0x8005C67C: addiu       $a2, $zero, 0x8F
    ctx->r6 = ADD32(0, 0X8F);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x8005C67C: addiu       $a2, $zero, 0x8F
    ctx->r6 = ADD32(0, 0X8F);
    after_1:
    // 0x8005C680: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C684: addiu       $v1, $v1, -0x3E3F
    ctx->r3 = ADD32(ctx->r3, -0X3E3F);
    // 0x8005C688: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005C68C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005C690: j           L_8005C7F4
    // 0x8005C694: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_8005C7F4;
    // 0x8005C694: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8005C698:
    // 0x8005C698: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005C69C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005C6A0: bltz        $v0, L_8005C7F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005C6A4: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_8005C7F4;
    }
    // 0x8005C6A4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8005C6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C6AC: beq         $v1, $v0, L_8005C6C4
    if (ctx->r3 == ctx->r2) {
        // 0x8005C6B0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005C6C4;
    }
    // 0x8005C6B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005C6B4: beq         $v1, $v0, L_8005C6D4
    if (ctx->r3 == ctx->r2) {
        // 0x8005C6B8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8005C6D4;
    }
    // 0x8005C6B8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8005C6BC: j           L_8005C6E0
    // 0x8005C6C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8005C6E0;
    // 0x8005C6C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8005C6C4:
    // 0x8005C6C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005C6C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C6CC: j           L_8005C7F4
    // 0x8005C6D0: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
        goto L_8005C7F4;
    // 0x8005C6D0: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_8005C6D4:
    // 0x8005C6D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C6D8: j           L_8005C7F4
    // 0x8005C6DC: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
        goto L_8005C7F4;
    // 0x8005C6DC: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_8005C6E0:
    // 0x8005C6E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C6E4: j           L_8005C7F4
    // 0x8005C6E8: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
        goto L_8005C7F4;
    // 0x8005C6E8: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_8005C6EC:
    // 0x8005C6EC: jal         0x8005C820
    // 0x8005C6F0: nop

    func_8005C820_37C20(rdram, ctx);
        goto after_2;
    // 0x8005C6F0: nop

    after_2:
    // 0x8005C6F4: j           L_8005C7F4
    // 0x8005C6F8: nop

        goto L_8005C7F4;
    // 0x8005C6F8: nop

L_8005C6FC:
    // 0x8005C6FC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005C700: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x8005C704: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x8005C708: jal         0x8009A3B4
    // 0x8005C70C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8005C70C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8005C710: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005C714: lw          $a0, -0x3E24($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E24);
    // 0x8005C718: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005C71C: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x8005C720: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005C724: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x8005C728: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C72C: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x8005C730: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005C734: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C738: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x8005C73C: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x8005C740: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C744: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x8005C748: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8005C74C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C750: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x8005C754: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8005C758: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C75C: sw          $v0, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r2;
    // 0x8005C760: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005C764: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C768: sw          $zero, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = 0;
    // 0x8005C76C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C770: sw          $zero, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = 0;
    // 0x8005C774: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C778: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x8005C77C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005C780: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C784: sw          $a0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r4;
    // 0x8005C788: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C78C: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x8005C790: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C794: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x8005C798: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C79C: j           L_8005C7F4
    // 0x8005C7A0: sb          $v1, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r3;
        goto L_8005C7F4;
    // 0x8005C7A0: sb          $v1, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r3;
L_8005C7A4:
    // 0x8005C7A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C7A8: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x8005C7AC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005C7B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005C7B4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8005C7B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005C7BC: bne         $v0, $zero, L_8005C7D8
    if (ctx->r2 != 0) {
        // 0x8005C7C0: nop
    
            goto L_8005C7D8;
    }
    // 0x8005C7C0: nop

    // 0x8005C7C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C7C8: lbu         $v0, -0x3E3F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3F);
    // 0x8005C7CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005C7D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C7D4: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_8005C7D8:
    // 0x8005C7D8: jal         0x800597A8
    // 0x8005C7DC: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_4;
    // 0x8005C7DC: nop

    after_4:
    // 0x8005C7E0: j           L_8005C7F4
    // 0x8005C7E4: nop

        goto L_8005C7F4;
    // 0x8005C7E4: nop

L_8005C7E8:
    // 0x8005C7E8: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8005C7EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C7F0: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005C7F4:
    // 0x8005C7F4: jal         0x800598DC
    // 0x8005C7F8: nop

    func_800598DC_34CDC(rdram, ctx);
        goto after_5;
    // 0x8005C7F8: nop

    after_5:
    // 0x8005C7FC: jal         0x800599D4
    // 0x8005C800: nop

    func_800599D4_34DD4(rdram, ctx);
        goto after_6;
    // 0x8005C800: nop

    after_6:
    // 0x8005C804: jal         0x80059710
    // 0x8005C808: nop

    func_80059710_34B10(rdram, ctx);
        goto after_7;
    // 0x8005C808: nop

    after_7:
    // 0x8005C80C: jal         0x8005974C
    // 0x8005C810: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_8;
    // 0x8005C810: nop

    after_8:
    // 0x8005C814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005C818: jr          $ra
    // 0x8005C81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005C81C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800929D0_6DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800929D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800929D4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800929D8: addiu       $a0, $a0, -0x26D0
    ctx->r4 = ADD32(ctx->r4, -0X26D0);
    // 0x800929DC: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x800929E0: addiu       $a1, $a1, -0xC10
    ctx->r5 = ADD32(ctx->r5, -0XC10);
    // 0x800929E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800929E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800929EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800929F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800929F4: jal         0x8009A470
    // 0x800929F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800929F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800929FC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80092A00: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x80092A04: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80092A08:
    // 0x80092A08: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80092A0C: addiu       $a0, $a0, -0x26D0
    ctx->r4 = ADD32(ctx->r4, -0X26D0);
    // 0x80092A10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80092A14: jal         0x8009A5E0
    // 0x80092A18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80092A18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80092A1C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80092A20: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x80092A24: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80092A28: beq         $v0, $s2, L_80092A40
    if (ctx->r2 == ctx->r18) {
        // 0x80092A2C: nop
    
            goto L_80092A40;
    }
    // 0x80092A2C: nop

    // 0x80092A30: beq         $v0, $s1, L_80092A80
    if (ctx->r2 == ctx->r17) {
        // 0x80092A34: nop
    
            goto L_80092A80;
    }
    // 0x80092A34: nop

    // 0x80092A38: j           L_80092A08
    // 0x80092A3C: nop

        goto L_80092A08;
    // 0x80092A3C: nop

L_80092A40:
    // 0x80092A40: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092A44: lw          $v0, -0xEA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEA4);
    // 0x80092A48: beq         $v0, $zero, L_80092A58
    if (ctx->r2 == 0) {
        // 0x80092A4C: nop
    
            goto L_80092A58;
    }
    // 0x80092A4C: nop

    // 0x80092A50: jalr        $v0
    // 0x80092A54: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80092A54: nop

    after_2:
L_80092A58:
    // 0x80092A58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80092A5C: lw          $v0, -0x3E88($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E88);
    // 0x80092A60: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80092A64: beq         $v0, $zero, L_80092A98
    if (ctx->r2 == 0) {
        // 0x80092A68: nop
    
            goto L_80092A98;
    }
    // 0x80092A68: nop

    // 0x80092A6C: jal         0x8009CBE0
    // 0x80092A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osViBlack_recomp(rdram, ctx);
        goto after_3;
    // 0x80092A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80092A74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80092A78: j           L_80092A98
    // 0x80092A7C: sw          $s0, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r16;
        goto L_80092A98;
    // 0x80092A7C: sw          $s0, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r16;
L_80092A80:
    // 0x80092A80: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092A84: lw          $v0, -0xEA0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEA0);
    // 0x80092A88: beq         $v0, $zero, L_80092A98
    if (ctx->r2 == 0) {
        // 0x80092A8C: nop
    
            goto L_80092A98;
    }
    // 0x80092A8C: nop

    // 0x80092A90: jalr        $v0
    // 0x80092A94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80092A94: nop

    after_4:
L_80092A98:
    // 0x80092A98: jal         0x80094460
    // 0x80092A9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_5;
    // 0x80092A9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80092AA0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80092AA4: lw          $v1, -0x450($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X450);
    // 0x80092AA8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092AAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80092AB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80092AB4: sw          $v1, -0x450($at)
    MEM_W(-0X450, ctx->r1) = ctx->r3;
    // 0x80092AB8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80092ABC: jal         0x80094460
    // 0x80092AC0: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x80092AC0: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
    after_6:
    // 0x80092AC4: j           L_80092A08
    // 0x80092AC8: nop

        goto L_80092A08;
    // 0x80092AC8: nop

    // 0x80092ACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80092AD0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80092AD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80092AD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092ADC: jr          $ra
    // 0x80092AE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80092AE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80051210_2C610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051210: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80051214: lw          $a1, 0x988($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X988);
    // 0x80051218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005121C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80051220: jal         0x8009A3B4
    // 0x80051224: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80051224: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80051228: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005122C: lw          $v0, 0x988($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X988);
    // 0x80051230: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80051234: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80051238: sw          $v0, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r2;
    // 0x8005123C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80051240: jr          $ra
    // 0x80051244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80051244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034508_F908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034508: jr          $ra
    // 0x8003450C: nop

    TRACE_RETURN()
    return;
    // 0x8003450C: nop

;}
RECOMP_FUNC void func_8006982C_44C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006982C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069830: jr          $ra
    // 0x80069834: sw          $a0, -0x2378($at)
    MEM_W(-0X2378, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80069834: sw          $a0, -0x2378($at)
    MEM_W(-0X2378, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800492F8_246F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800492F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800492FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80049300: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80049304: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80049308: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004930C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80049310: lw          $v0, -0x2F0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F0C);
    // 0x80049314: jalr        $v0
    // 0x80049318: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80049318: nop

    after_0:
    // 0x8004931C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80049320: jr          $ra
    // 0x80049324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80049324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80032D70_E170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032D74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032D78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80032D7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80032D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032D84: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80032D88: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80032D8C: addiu       $a2, $a2, -0x3C80
    ctx->r6 = ADD32(ctx->r6, -0X3C80);
    // 0x80032D90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80032D94: addiu       $a1, $a1, -0x7288
    ctx->r5 = ADD32(ctx->r5, -0X7288);
    // 0x80032D98: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80032D9C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80032DA0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80032DA4:
    // 0x80032DA4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80032DA8: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x80032DAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80032DB0: beq         $v0, $zero, L_80032DC8
    if (ctx->r2 == 0) {
        // 0x80032DB4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80032DC8;
    }
    // 0x80032DB4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032DB8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80032DBC: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80032DC0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80032DC4: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_80032DC8:
    // 0x80032DC8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80032DCC: bne         $v0, $zero, L_80032DA4
    if (ctx->r2 != 0) {
        // 0x80032DD0: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_80032DA4;
    }
    // 0x80032DD0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80032DD4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80032DD8: addiu       $a0, $a0, -0x3C80
    ctx->r4 = ADD32(ctx->r4, -0X3C80);
    // 0x80032DDC: jal         0x80032C58
    // 0x80032DE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032C58_E058(rdram, ctx);
        goto after_0;
    // 0x80032DE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80032DE4: lhu         $a0, 0x2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2);
    // 0x80032DE8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80032DEC: andi        $v1, $a0, 0xC00
    ctx->r3 = ctx->r4 & 0XC00;
    // 0x80032DF0: bnel        $v1, $v0, L_80032E08
    if (ctx->r3 != ctx->r2) {
        // 0x80032DF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80032E08;
    }
    goto skip_0;
    // 0x80032DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80032DF8: andi        $v0, $a0, 0xF3FF
    ctx->r2 = ctx->r4 & 0XF3FF;
    // 0x80032DFC: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x80032E00: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80032E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80032E08:
    // 0x80032E08: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80032E0C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80032E10: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    // 0x80032E14: lhu         $a2, 0x4($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4);
    // 0x80032E18: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80032E1C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80032E20: nor         $a1, $zero, $a1
    ctx->r5 = ~(0 | ctx->r5);
    // 0x80032E24: and         $a2, $a2, $a1
    ctx->r6 = ctx->r6 & ctx->r5;
    // 0x80032E28: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80032E2C: jal         0x80032EA8
    // 0x80032E30: sh          $a2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r6;
    func_80032EA8_E2A8(rdram, ctx);
        goto after_1;
    // 0x80032E30: sh          $a2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r6;
    after_1:
    // 0x80032E34: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80032E38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80032E3C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80032E40: bne         $v0, $v1, L_80032E4C
    if (ctx->r2 != ctx->r3) {
        // 0x80032E44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80032E4C;
    }
    // 0x80032E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80032E48: sb          $v0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r2;
L_80032E4C:
    // 0x80032E4C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80032E50: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80032E54: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80032E58: beql        $v0, $v1, L_80032E60
    if (ctx->r2 == ctx->r3) {
        // 0x80032E5C: sb          $zero, 0x12($s0)
        MEM_B(0X12, ctx->r16) = 0;
            goto L_80032E60;
    }
    goto skip_1;
    // 0x80032E5C: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    skip_1:
L_80032E60:
    // 0x80032E60: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80032E64: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x80032E68: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80032E6C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80032E70: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80032E74: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80032E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032E80: jr          $ra
    // 0x80032E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void strlen_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A390: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A394: beq         $v0, $zero, L_8009A3AC
    if (ctx->r2 == 0) {
        // 0x8009A398: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8009A3AC;
    }
    // 0x8009A398: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8009A39C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8009A3A0:
    // 0x8009A3A0: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8009A3A4: bnel        $v0, $zero, L_8009A3A0
    if (ctx->r2 != 0) {
        // 0x8009A3A8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8009A3A0;
    }
    goto skip_0;
    // 0x8009A3A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_8009A3AC:
    // 0x8009A3AC: jr          $ra
    // 0x8009A3B0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    TRACE_RETURN()
    return;
    // 0x8009A3B0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void func_80081380_5C780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081380: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80081384: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80081388: sh          $v0, -0x72FA($at)
    MEM_H(-0X72FA, ctx->r1) = ctx->r2;
    // 0x8008138C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80081390: jr          $ra
    // 0x80081394: sh          $v0, -0x72FC($at)
    MEM_H(-0X72FC, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80081394: sh          $v0, -0x72FC($at)
    MEM_H(-0X72FC, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80030264_B664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030264: jr          $ra
    // 0x80030268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80030268: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
