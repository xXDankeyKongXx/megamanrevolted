#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225420_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022542C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225430: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225434: bne         $v0, $zero, L_80225454
    if (ctx->r2 != 0) {
        // 0x80225438: nop
    
            goto L_80225454;
    }
    // 0x80225438: nop

    // 0x8022543C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225440: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225444: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225448: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8022544C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225450: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80225454:
    // 0x80225454: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225458: addiu       $v0, $v1, -0x3
    ctx->r2 = ADD32(ctx->r3, -0X3);
    // 0x8022545C: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80225460: beq         $v0, $zero, L_802254E4
    if (ctx->r2 == 0) {
        // 0x80225464: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_802254E4;
    }
    // 0x80225464: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80225468: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022546C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225470: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225474: lb          $a0, -0x1D90($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D90);
    // 0x80225478: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022547C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225480: jal         0x8003B85C
    // 0x80225484: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80225484: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80225488: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022548C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225490: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225494: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225498: jal         0x8003B840
    // 0x8022549C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022549C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802254A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802254A4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802254A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802254AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802254B0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802254B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802254B8: lb          $a0, -0x1D8F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D8F);
    // 0x802254BC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802254C0: jal         0x8003B85C
    // 0x802254C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802254C4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802254C8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802254CC: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802254D0: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x802254D4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802254D8: jal         0x8003B840
    // 0x802254DC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802254DC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x802254E0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_802254E4:
    // 0x802254E4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802254E8: bne         $v1, $v0, L_80225558
    if (ctx->r3 != ctx->r2) {
        // 0x802254EC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80225558;
    }
    // 0x802254EC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802254F0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802254F4: lb          $a0, -0x1D86($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D86);
    // 0x802254F8: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802254FC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225500: jal         0x8003B85C
    // 0x80225504: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_4;
    // 0x80225504: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_4:
    // 0x80225508: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022550C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225510: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225514: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225518: jal         0x8003B840
    // 0x8022551C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_5;
    // 0x8022551C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80225520: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225524: lb          $a0, -0x1D85($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D85);
    // 0x80225528: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022552C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225530: jal         0x8003B85C
    // 0x80225534: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_6;
    // 0x80225534: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_6:
    // 0x80225538: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022553C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80225540: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225544: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225548: jal         0x8003B840
    // 0x8022554C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_7;
    // 0x8022554C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_7:
    // 0x80225550: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225554: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80225558:
    // 0x80225558: bne         $v1, $v0, L_80225568
    if (ctx->r3 != ctx->r2) {
        // 0x8022555C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225568;
    }
    // 0x8022555C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225560: jal         0x800616FC
    // 0x80225564: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80225564: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_8:
L_80225568:
    // 0x80225568: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022556C: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80225570: sltiu       $v0, $v0, 0x5C
    ctx->r2 = ctx->r2 < 0X5C ? 1 : 0;
    // 0x80225574: beq         $v0, $zero, L_80225600
    if (ctx->r2 == 0) {
        // 0x80225578: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225600;
    }
    // 0x80225578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022557C: lbu         $a2, 0xA($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA);
    // 0x80225580: sll         $a1, $a2, 1
    ctx->r5 = S32(ctx->r6 << 1);
    // 0x80225584: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225588: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022558C: lh          $a0, -0x1D84($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D84);
    // 0x80225590: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225594: bne         $a0, $v0, L_802255A4
    if (ctx->r4 != ctx->r2) {
        // 0x80225598: addiu       $v1, $v1, -0x1D84
        ctx->r3 = ADD32(ctx->r3, -0X1D84);
            goto L_802255A4;
    }
    // 0x80225598: addiu       $v1, $v1, -0x1D84
    ctx->r3 = ADD32(ctx->r3, -0X1D84);
    // 0x8022559C: j           L_802255B8
    // 0x802255A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802255B8;
    // 0x802255A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802255A4:
    // 0x802255A4: bne         $a0, $zero, L_802255B8
    if (ctx->r4 != 0) {
        // 0x802255A8: addu        $v0, $v1, $a1
        ctx->r2 = ADD32(ctx->r3, ctx->r5);
            goto L_802255B8;
    }
    // 0x802255A8: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x802255AC: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x802255B0: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x802255B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802255B8:
    // 0x802255B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802255BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802255C0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802255C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802255C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802255CC: lh          $a0, -0x1D84($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D84);
    // 0x802255D0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802255D4: jal         0x8003B85C
    // 0x802255D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_9;
    // 0x802255D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_9:
    // 0x802255DC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802255E0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802255E4: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x802255E8: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802255EC: jal         0x8003B840
    // 0x802255F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_10;
    // 0x802255F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_10:
    // 0x802255F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802255F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225600:
    // 0x80225600: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225604: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x80225608: bne         $v1, $v0, L_8022563C
    if (ctx->r3 != ctx->r2) {
        // 0x8022560C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022563C;
    }
    // 0x8022560C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225610: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225614: lb          $a0, -0x1D85($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D85);
    // 0x80225618: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022561C: jal         0x8003B85C
    // 0x80225620: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_11;
    // 0x80225620: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_11:
    // 0x80225624: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225628: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8022562C: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225630: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225634: jal         0x8003B840
    // 0x80225638: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_12;
    // 0x80225638: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_12:
L_8022563C:
    // 0x8022563C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225644: jr          $ra
    // 0x80225648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245F1C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245F20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80245F24: jal         0x8004F4F8
    // 0x80245F28: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80245F28: nop

    after_0:
    // 0x80245F2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245F30: jr          $ra
    // 0x80245F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244878_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024487C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244884: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80244888: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8024488C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80244890: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x80244894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244898: beq         $v1, $v0, L_802448E8
    if (ctx->r3 == ctx->r2) {
        // 0x8024489C: addiu       $a1, $s0, 0xC0
        ctx->r5 = ADD32(ctx->r16, 0XC0);
            goto L_802448E8;
    }
    // 0x8024489C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x802448A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802448A4: beql        $v0, $zero, L_802448BC
    if (ctx->r2 == 0) {
        // 0x802448A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802448BC;
    }
    goto skip_0;
    // 0x802448A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802448AC: beq         $v1, $zero, L_802448CC
    if (ctx->r3 == 0) {
        // 0x802448B0: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_802448CC;
    }
    // 0x802448B0: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802448B4: j           L_802449DC
    // 0x802448B8: nop

        goto L_802449DC;
    // 0x802448B8: nop

L_802448BC:
    // 0x802448BC: beq         $v1, $v0, L_8024493C
    if (ctx->r3 == ctx->r2) {
        // 0x802448C0: nop
    
            goto L_8024493C;
    }
    // 0x802448C0: nop

    // 0x802448C4: j           L_802449DC
    // 0x802448C8: nop

        goto L_802449DC;
    // 0x802448C8: nop

L_802448CC:
    // 0x802448CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802448D0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802448D4: sh          $v1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r3;
    // 0x802448D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802448DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802448E0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802448E4: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
L_802448E8:
    // 0x802448E8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802448EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802448F0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802448F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802448F8: bgez        $v0, L_80244920
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802448FC: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80244920;
    }
    // 0x802448FC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80244900: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80244904: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80244908: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8024490C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244910: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80244914: sh          $a0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r4;
    // 0x80244918: j           L_8024493C
    // 0x8024491C: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
        goto L_8024493C;
    // 0x8024491C: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
L_80244920:
    // 0x80244920: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80244924: lh          $v1, 0x46($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X46);
    // 0x80244928: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8024492C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80244930: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80244934: j           L_802449DC
    // 0x80244938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
        goto L_802449DC;
    // 0x80244938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_8024493C:
    // 0x8024493C: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80244940: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80244944: beql        $v1, $v0, L_8024494C
    if (ctx->r3 == ctx->r2) {
        // 0x80244948: sh          $zero, 0x4($a1)
        MEM_H(0X4, ctx->r5) = 0;
            goto L_8024494C;
    }
    goto skip_1;
    // 0x80244948: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    skip_1:
L_8024494C:
    // 0x8024494C: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x80244950: beq         $v0, $zero, L_80244964
    if (ctx->r2 == 0) {
        // 0x80244954: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80244964;
    }
    // 0x80244954: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80244958: addiu       $v0, $v1, -0x10
    ctx->r2 = ADD32(ctx->r3, -0X10);
    // 0x8024495C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244960: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_80244964:
    // 0x80244964: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80244968: lh          $v1, 0x58($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X58);
    // 0x8024496C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80244970: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244974: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80244978: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8024497C: beq         $v1, $v0, L_80244990
    if (ctx->r3 == ctx->r2) {
        // 0x80244980: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80244990;
    }
    // 0x80244980: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80244984: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80244988: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024498C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_80244990:
    // 0x80244990: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x80244994: lh          $a0, 0x46($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X46);
    // 0x80244998: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024499C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802449A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802449A4: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x802449A8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802449AC: mflo        $a0
    ctx->r4 = lo;
    // 0x802449B0: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802449B4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802449B8: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x802449BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802449C0: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x802449C4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802449C8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802449CC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802449D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802449D4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802449D8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_802449DC:
    // 0x802449DC: lh          $a3, 0x14($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X14);
    // 0x802449E0: lh          $a2, 0x14($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X14);
    // 0x802449E4: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802449E8: lh          $a0, 0x16($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X16);
    // 0x802449EC: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x802449F0: lh          $v1, 0x18($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X18);
    // 0x802449F4: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x802449F8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802449FC: bltzl       $v0, L_80244A04
    if (SIGNED(ctx->r2) < 0) {
        // 0x80244A00: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80244A04;
    }
    goto skip_2;
    // 0x80244A00: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80244A04:
    // 0x80244A04: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80244A08: beq         $v0, $zero, L_80244A54
    if (ctx->r2 == 0) {
        // 0x80244A0C: subu        $v1, $a1, $v1
        ctx->r3 = SUB32(ctx->r5, ctx->r3);
            goto L_80244A54;
    }
    // 0x80244A0C: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80244A10: nop

    // 0x80244A14: mult        $a3, $a3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244A18: mflo        $v0
    ctx->r2 = lo;
    // 0x80244A1C: nop

    // 0x80244A20: nop

    // 0x80244A24: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244A28: mflo        $v1
    ctx->r3 = lo;
    // 0x80244A2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80244A30: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80244A34: beq         $v0, $zero, L_80244A54
    if (ctx->r2 == 0) {
        // 0x80244A38: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_80244A54;
    }
    // 0x80244A38: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80244A3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244A40: jal         0x8002A2F8
    // 0x80244A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80244A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80244A48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80244A4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80244A50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80244A54:
    // 0x80244A54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80244A58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244A5C: jr          $ra
    // 0x80244A60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80244A60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236250_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236254: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023625C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236260: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236264: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80236268: beq         $v0, $zero, L_802363C0
    if (ctx->r2 == 0) {
        // 0x8023626C: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_802363C0;
    }
    // 0x8023626C: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x80236270: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236274: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236278: addu        $at, $at, $v0
    gpr jr_addend_80236280 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023627C: lw          $v0, 0x2F30($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F30);
    // 0x80236280: jr          $v0
    // 0x80236284: nop

    switch (jr_addend_80236280 >> 2) {
        case 0: goto L_80236288; break;
        case 1: goto L_80236298; break;
        case 2: goto L_802362F4; break;
        case 3: goto L_80236330; break;
        case 4: goto L_8023638C; break;
        default: switch_error(__func__, 0x80236280, 0x80252F30);
    }
    // 0x80236284: nop

L_80236288:
    // 0x80236288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023628C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236290: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236294: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
L_80236298:
    // 0x80236298: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023629C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802362A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802362A4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802362A8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802362AC: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x802362B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802362B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802362B8: jal         0x8004F820
    // 0x802362BC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802362BC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802362C0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802362C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802362C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802362CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802362D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802362D4: bltz        $v0, L_802363C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802362D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802363C0;
    }
    // 0x802362D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802362DC: bne         $v0, $zero, L_802363C0
    if (ctx->r2 != 0) {
        // 0x802362E0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802363C0;
    }
    // 0x802362E0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802362E4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802362E8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802362EC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802362F0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802362F4:
    // 0x802362F4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802362F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802362FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236300: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236304: lw          $v0, 0x5644($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5644);
    // 0x80236308: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8023630C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80236310: beq         $v0, $zero, L_8023631C
    if (ctx->r2 == 0) {
        // 0x80236314: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023631C;
    }
    // 0x80236314: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236318: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023631C:
    // 0x8023631C: lh          $v0, 0xCA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XCA);
    // 0x80236320: beq         $v0, $zero, L_802363C0
    if (ctx->r2 == 0) {
        // 0x80236324: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802363C0;
    }
    // 0x80236324: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236328: j           L_80236384
    // 0x8023632C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
        goto L_80236384;
    // 0x8023632C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_80236330:
    // 0x80236330: lh          $v0, 0xCA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XCA);
    // 0x80236334: bne         $v0, $zero, L_80236380
    if (ctx->r2 != 0) {
        // 0x80236338: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80236380;
    }
    // 0x80236338: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023633C: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80236340: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236344: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236348: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023634C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236350: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80236354: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x80236358: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023635C: lw          $v1, 0x5638($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5638);
    // 0x80236360: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236364: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80236368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023636C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80236370: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236374: lw          $v0, 0x5638($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5638);
    // 0x80236378: j           L_802363C0
    // 0x8023637C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
        goto L_802363C0;
    // 0x8023637C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_80236380:
    // 0x80236380: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_80236384:
    // 0x80236384: j           L_802363C0
    // 0x80236388: sh          $v0, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r2;
        goto L_802363C0;
    // 0x80236388: sh          $v0, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r2;
L_8023638C:
    // 0x8023638C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80236390: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236394: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80236398: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023639C: bgez        $v0, L_802363C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802363A0: nop
    
            goto L_802363C0;
    }
    // 0x802363A0: nop

    // 0x802363A4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802363A8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802363AC: andi        $v0, $v0, 0xED
    ctx->r2 = ctx->r2 & 0XED;
    // 0x802363B0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802363B4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802363B8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802363BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_802363C0:
    // 0x802363C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802363C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802363C8: jr          $ra
    // 0x802363CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802363CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024BD9C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BD9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BDA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BDA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BDA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024BDAC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024BDB0: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8024BDB4: sra         $a0, $a1, 24
    ctx->r4 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8024BDB8: bne         $a0, $zero, L_8024BDD0
    if (ctx->r4 != 0) {
        // 0x8024BDBC: lui         $v0, 0x9249
        ctx->r2 = S32(0X9249 << 16);
            goto L_8024BDD0;
    }
    // 0x8024BDBC: lui         $v0, 0x9249
    ctx->r2 = S32(0X9249 << 16);
    // 0x8024BDC0: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8024BDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BDC8: j           L_8024BE20
    // 0x8024BDCC: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
        goto L_8024BE20;
    // 0x8024BDCC: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
L_8024BDD0:
    // 0x8024BDD0: ori         $v0, $v0, 0x2493
    ctx->r2 = ctx->r2 | 0X2493;
    // 0x8024BDD4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024BDD8: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x8024BDDC: mfhi        $a2
    ctx->r6 = hi;
    // 0x8024BDE0: addu        $v1, $a2, $a0
    ctx->r3 = ADD32(ctx->r6, ctx->r4);
    // 0x8024BDE4: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8024BDE8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024BDEC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8024BDF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024BDF4: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8024BDF8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024BDFC: bne         $v0, $zero, L_8024BE14
    if (ctx->r2 != 0) {
        // 0x8024BE00: nop
    
            goto L_8024BE14;
    }
    // 0x8024BE00: nop

    // 0x8024BE04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024BE08: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8024BE0C: jal         0x8002A33C
    // 0x8024BE10: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8024BE10: addiu       $a0, $zero, 0x169
    ctx->r4 = ADD32(0, 0X169);
    after_0:
L_8024BE14:
    // 0x8024BE14: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024BE18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024BE1C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8024BE20:
    // 0x8024BE20: jal         0x8024B590
    // 0x8024BE24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B590_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024BE24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024BE28: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8024BE2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024BE30: beq         $v1, $v0, L_8024BE68
    if (ctx->r3 == ctx->r2) {
        // 0x8024BE34: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024BE68;
    }
    // 0x8024BE34: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024BE38: beql        $v0, $zero, L_8024BE50
    if (ctx->r2 == 0) {
        // 0x8024BE3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024BE50;
    }
    goto skip_0;
    // 0x8024BE3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024BE40: beq         $v1, $zero, L_8024BF58
    if (ctx->r3 == 0) {
        // 0x8024BE44: nop
    
            goto L_8024BF58;
    }
    // 0x8024BE44: nop

    // 0x8024BE48: j           L_8024BFB8
    // 0x8024BE4C: nop

        goto L_8024BFB8;
    // 0x8024BE4C: nop

L_8024BE50:
    // 0x8024BE50: beq         $v1, $v0, L_8024BE74
    if (ctx->r3 == ctx->r2) {
        // 0x8024BE54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024BE74;
    }
    // 0x8024BE54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BE58: beq         $v1, $v0, L_8024BF48
    if (ctx->r3 == ctx->r2) {
        // 0x8024BE5C: nop
    
            goto L_8024BF48;
    }
    // 0x8024BE5C: nop

    // 0x8024BE60: j           L_8024BFB8
    // 0x8024BE64: nop

        goto L_8024BFB8;
    // 0x8024BE64: nop

L_8024BE68:
    // 0x8024BE68: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BE6C: j           L_8024BFB0
    // 0x8024BE70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8024BFB0;
    // 0x8024BE70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8024BE74:
    // 0x8024BE74: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024BE78: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8024BE7C: jal         0x8002A33C
    // 0x8024BE80: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8024BE80: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    after_2:
    // 0x8024BE84: jal         0x8024B7B8
    // 0x8024BE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B7B8_ovl10(rdram, ctx);
        goto after_3;
    // 0x8024BE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024BE8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BE90: sb          $v0, 0x35D0($at)
    MEM_B(0X35D0, ctx->r1) = ctx->r2;
    // 0x8024BE94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BE9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8024BEA0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024BEA4: lbu         $v0, 0x35D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35D0);
    // 0x8024BEA8: beq         $v0, $zero, L_8024BEFC
    if (ctx->r2 == 0) {
        // 0x8024BEAC: nop
    
            goto L_8024BEFC;
    }
    // 0x8024BEAC: nop

    // 0x8024BEB0: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024BEB4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8024BEB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BEBC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024BEC0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8024BEC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BEC8: lw          $v1, -0x3B88($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3B88);
    // 0x8024BECC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BED0: bne         $v1, $v0, L_8024BEF4
    if (ctx->r3 != ctx->r2) {
        // 0x8024BED4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024BEF4;
    }
    // 0x8024BED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024BED8: jal         0x8006033C
    // 0x8024BEDC: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8024BEDC: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    after_4:
    // 0x8024BEE0: bne         $v0, $zero, L_8024BEF4
    if (ctx->r2 != 0) {
        // 0x8024BEE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024BEF4;
    }
    // 0x8024BEE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024BEE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BEEC: j           L_8024BFB8
    // 0x8024BEF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024BFB8;
    // 0x8024BEF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024BEF4:
    // 0x8024BEF4: j           L_8024BFB8
    // 0x8024BEF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024BFB8;
    // 0x8024BEF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024BEFC:
    // 0x8024BEFC: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024BF00: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8024BF04: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BF08: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024BF0C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8024BF10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BF14: lw          $v1, -0x3B88($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3B88);
    // 0x8024BF18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BF1C: bne         $v1, $v0, L_8024BF40
    if (ctx->r3 != ctx->r2) {
        // 0x8024BF20: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8024BF40;
    }
    // 0x8024BF20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024BF24: jal         0x8006033C
    // 0x8024BF28: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8024BF28: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    after_5:
    // 0x8024BF2C: bne         $v0, $zero, L_8024BF40
    if (ctx->r2 != 0) {
        // 0x8024BF30: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8024BF40;
    }
    // 0x8024BF30: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024BF34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024BF38: j           L_8024BFB8
    // 0x8024BF3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024BFB8;
    // 0x8024BF3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024BF40:
    // 0x8024BF40: j           L_8024BFB8
    // 0x8024BF44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024BFB8;
    // 0x8024BF44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024BF48:
    // 0x8024BF48: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024BF4C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8024BF50: jal         0x8002A33C
    // 0x8024BF54: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8024BF54: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_6:
L_8024BF58:
    // 0x8024BF58: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024BF5C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8024BF60: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024BF64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024BF68: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BF6C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024BF70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024BF74: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024BF78: lw          $v1, -0x3B88($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3B88);
    // 0x8024BF7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BF80: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024BF84: addiu       $a0, $a0, 0x26B0
    ctx->r4 = ADD32(ctx->r4, 0X26B0);
    // 0x8024BF88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BF8C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024BF90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BF94: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8024BF98: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8024BF9C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8024BFA0: bne         $v0, $zero, L_8024BFB8
    if (ctx->r2 != 0) {
        // 0x8024BFA4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8024BFB8;
    }
    // 0x8024BFA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8024BFA8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BFAC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8024BFB0:
    // 0x8024BFB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BFB4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024BFB8:
    // 0x8024BFB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BFBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024BFC0: bne         $v1, $v0, L_8024BFE0
    if (ctx->r3 != ctx->r2) {
        // 0x8024BFC4: nop
    
            goto L_8024BFE0;
    }
    // 0x8024BFC4: nop

    // 0x8024BFC8: jal         0x80061798
    // 0x8024BFCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80061798_3CB98(rdram, ctx);
        goto after_7;
    // 0x8024BFCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x8024BFD0: jal         0x80061798
    // 0x8024BFD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80061798_3CB98(rdram, ctx);
        goto after_8;
    // 0x8024BFD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x8024BFD8: jal         0x80036B58
    // 0x8024BFDC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80036B58_11F58(rdram, ctx);
        goto after_9;
    // 0x8024BFDC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_9:
L_8024BFE0:
    // 0x8024BFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BFE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BFE8: jr          $ra
    // 0x8024BFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024BFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE40_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BE48: jal         0x8006033C
    // 0x8022BE4C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BE4C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x8022BE50: beq         $v0, $zero, L_8022BE7C
    if (ctx->r2 == 0) {
        // 0x8022BE54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022BE7C;
    }
    // 0x8022BE54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022BE58: jal         0x8004F2C4
    // 0x8022BE5C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_1;
    // 0x8022BE5C: nop

    after_1:
    // 0x8022BE60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BE64: beq         $v1, $zero, L_8022BE78
    if (ctx->r3 == 0) {
        // 0x8022BE68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BE78;
    }
    // 0x8022BE68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE6C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022BE70: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022BE74: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_8022BE78:
    // 0x8022BE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BE7C:
    // 0x8022BE7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE80: jr          $ra
    // 0x8022BE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A138_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A138: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A140: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8023A144: beq         $v1, $v0, L_8023A184
    if (ctx->r3 == ctx->r2) {
        // 0x8023A148: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023A184;
    }
    // 0x8023A148: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A14C: beql        $v0, $zero, L_8023A164
    if (ctx->r2 == 0) {
        // 0x8023A150: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A164;
    }
    goto skip_0;
    // 0x8023A150: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A154: beq         $v1, $zero, L_8023A174
    if (ctx->r3 == 0) {
        // 0x8023A158: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023A174;
    }
    // 0x8023A158: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023A15C: j           L_8023A1DC
    // 0x8023A160: nop

        goto L_8023A1DC;
    // 0x8023A160: nop

L_8023A164:
    // 0x8023A164: beq         $v1, $v0, L_8023A1B4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A168: nop
    
            goto L_8023A1B4;
    }
    // 0x8023A168: nop

    // 0x8023A16C: j           L_8023A1DC
    // 0x8023A170: nop

        goto L_8023A1DC;
    // 0x8023A170: nop

L_8023A174:
    // 0x8023A174: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023A178: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8023A17C: j           L_8023A1DC
    // 0x8023A180: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8023A1DC;
    // 0x8023A180: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8023A184:
    // 0x8023A184: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023A188: bgez        $v0, L_8023A1DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A18C: nop
    
            goto L_8023A1DC;
    }
    // 0x8023A18C: nop

    // 0x8023A190: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A194: lhu         $v1, 0x36A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X36A);
    // 0x8023A198: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8023A19C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A1A0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8023A1A4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023A1A8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023A1AC: j           L_8023A1DC
    // 0x8023A1B0: sh          $v1, 0x36C($a0)
    MEM_H(0X36C, ctx->r4) = ctx->r3;
        goto L_8023A1DC;
    // 0x8023A1B0: sh          $v1, 0x36C($a0)
    MEM_H(0X36C, ctx->r4) = ctx->r3;
L_8023A1B4:
    // 0x8023A1B4: lhu         $v0, 0x36C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X36C);
    // 0x8023A1B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A1BC: sh          $v0, 0x36C($a0)
    MEM_H(0X36C, ctx->r4) = ctx->r2;
    // 0x8023A1C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A1C4: bgez        $v0, L_8023A1DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A1C8: addiu       $v1, $zero, 0x11
        ctx->r3 = ADD32(0, 0X11);
            goto L_8023A1DC;
    }
    // 0x8023A1C8: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x8023A1CC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A1D0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023A1D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A1D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023A1DC:
    // 0x8023A1DC: jr          $ra
    // 0x8023A1E0: nop

    TRACE_RETURN()
    return;
    // 0x8023A1E0: nop

;}
RECOMP_FUNC void func_80244EA8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244EA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80244EAC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80244EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244EBC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80244EC0: bne         $v1, $v0, L_80244F8C
    if (ctx->r3 != ctx->r2) {
        // 0x80244EC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80244F8C;
    }
    // 0x80244EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244EC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80244ECC: bne         $v0, $zero, L_80244F4C
    if (ctx->r2 != 0) {
        // 0x80244ED0: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_80244F4C;
    }
    // 0x80244ED0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80244ED4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244ED8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80244EDC: bne         $v0, $s0, L_80244FD8
    if (ctx->r2 != ctx->r16) {
        // 0x80244EE0: nop
    
            goto L_80244FD8;
    }
    // 0x80244EE0: nop

    // 0x80244EE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244EE8: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80244EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80244EF0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80244EF4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80244EF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244EFC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80244F00: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80244F04: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x80244F08: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244F0C: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80244F10: beq         $v0, $zero, L_80244FD8
    if (ctx->r2 == 0) {
        // 0x80244F14: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80244FD8;
    }
    // 0x80244F14: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80244F18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244F1C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80244F20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80244F24: bne         $v0, $zero, L_80244FD8
    if (ctx->r2 != 0) {
        // 0x80244F28: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80244FD8;
    }
    // 0x80244F28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244F2C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80244F30: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80244F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80244F38: jal         0x800610AC
    // 0x80244F3C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x80244F3C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x80244F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244F44: j           L_80244FD8
    // 0x80244F48: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80244FD8;
    // 0x80244F48: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80244F4C:
    // 0x80244F4C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80244F50: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80244F54: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80244F58: bne         $v0, $zero, L_80244FD8
    if (ctx->r2 != 0) {
        // 0x80244F5C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80244FD8;
    }
    // 0x80244F5C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80244F60: bne         $v1, $zero, L_80244F7C
    if (ctx->r3 != 0) {
        // 0x80244F64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80244F7C;
    }
    // 0x80244F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244F6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80244F70: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x80244F74: j           L_80244FD8
    // 0x80244F78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80244FD8;
    // 0x80244F78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80244F7C:
    // 0x80244F7C: beql        $v1, $v0, L_80244FD8
    if (ctx->r3 == ctx->r2) {
        // 0x80244F80: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80244FD8;
    }
    goto skip_0;
    // 0x80244F80: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80244F84: j           L_80244FD8
    // 0x80244F88: nop

        goto L_80244FD8;
    // 0x80244F88: nop

L_80244F8C:
    // 0x80244F8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244F90: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80244F94: bne         $v0, $s0, L_80244FD8
    if (ctx->r2 != ctx->r16) {
        // 0x80244F98: nop
    
            goto L_80244FD8;
    }
    // 0x80244F98: nop

    // 0x80244F9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244FA0: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80244FA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80244FA8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80244FAC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80244FB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244FB4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80244FB8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80244FBC: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x80244FC0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244FC4: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80244FC8: beq         $v0, $zero, L_80244FD8
    if (ctx->r2 == 0) {
        // 0x80244FCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80244FD8;
    }
    // 0x80244FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244FD0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80244FD4: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_80244FD8:
    // 0x80244FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244FDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244FE0: jr          $ra
    // 0x80244FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C5A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C5AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C5B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C5B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022C5B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C5BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C5C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C5C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C5C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5CC: beq         $v1, $v0, L_8022C6BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5D0: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C6BC;
    }
    // 0x8022C5D0: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C5D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C5D8: beql        $v0, $zero, L_8022C5F0
    if (ctx->r2 == 0) {
        // 0x8022C5DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C5F0;
    }
    goto skip_0;
    // 0x8022C5DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C5E0: beq         $v1, $zero, L_8022C608
    if (ctx->r3 == 0) {
        // 0x8022C5E4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022C608;
    }
    // 0x8022C5E4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022C5E8: j           L_8022C810
    // 0x8022C5EC: nop

        goto L_8022C810;
    // 0x8022C5EC: nop

L_8022C5F0:
    // 0x8022C5F0: beq         $v1, $v0, L_8022C6EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C6EC;
    }
    // 0x8022C5F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C5F8: beq         $v1, $v0, L_8022C7E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5FC: nop
    
            goto L_8022C7E4;
    }
    // 0x8022C5FC: nop

    // 0x8022C600: j           L_8022C810
    // 0x8022C604: nop

        goto L_8022C810;
    // 0x8022C604: nop

L_8022C608:
    // 0x8022C608: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C60C: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8022C610: addiu       $s3, $zero, 0x83
    ctx->r19 = ADD32(0, 0X83);
    // 0x8022C614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C618: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C61C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C620: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022C624: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022C628: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022C62C: sh          $zero, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = 0;
    // 0x8022C630: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022C634: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022C638: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x8022C63C: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8022C640: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_8022C644:
    // 0x8022C644: jal         0x8004F144
    // 0x8022C648: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022C648: nop

    after_0:
    // 0x8022C64C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C650: beq         $a0, $zero, L_8022C698
    if (ctx->r4 == 0) {
        // 0x8022C654: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022C698;
    }
    // 0x8022C654: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022C658: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8022C65C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022C660: sb          $s4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r20;
    // 0x8022C664: sb          $s3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r19;
    // 0x8022C668: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x8022C66C: sh          $v1, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r3;
    // 0x8022C670: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x8022C674: sh          $v1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r3;
    // 0x8022C678: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x8022C67C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022C680: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022C684: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C688: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C68C: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8022C690: bne         $v0, $zero, L_8022C644
    if (ctx->r2 != 0) {
        // 0x8022C694: sh          $v1, 0x20($a0)
        MEM_H(0X20, ctx->r4) = ctx->r3;
            goto L_8022C644;
    }
    // 0x8022C694: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
L_8022C698:
    // 0x8022C698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C69C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022C6A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C6A4: sb          $v0, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r2;
    // 0x8022C6A8: sb          $v0, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r2;
    // 0x8022C6AC: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022C6B0: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022C6B4: jal         0x8007A1B8
    // 0x8022C6B8: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    func_8007A1B8_555B8(rdram, ctx);
        goto after_1;
    // 0x8022C6B8: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    after_1:
L_8022C6BC:
    // 0x8022C6BC: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022C6C0: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022C6C4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022C6C8: bgtz        $v0, L_8022C6DC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C6CC: sh          $v1, 0x4($s2)
        MEM_H(0X4, ctx->r18) = ctx->r3;
            goto L_8022C6DC;
    }
    // 0x8022C6CC: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x8022C6D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C6D4: j           L_8022C6EC
    // 0x8022C6D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C6EC;
    // 0x8022C6D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C6DC:
    // 0x8022C6DC: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022C6E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C6E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C6E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022C6EC:
    // 0x8022C6EC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C6F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C6F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C6F8: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022C6FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C700: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022C704: sh          $v1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r3;
    // 0x8022C708: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C70C: bgtz        $v0, L_8022C728
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C710: nop
    
            goto L_8022C728;
    }
    // 0x8022C710: nop

    // 0x8022C714: bne         $v1, $zero, L_8022C728
    if (ctx->r3 != 0) {
        // 0x8022C718: nop
    
            goto L_8022C728;
    }
    // 0x8022C718: nop

    // 0x8022C71C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C720: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022C724: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022C728:
    // 0x8022C728: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022C72C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C730: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C734: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C738: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022C73C: jal         0x8004DA90
    // 0x8022C740: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C740: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022C744: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C74C: addiu       $v0, $v0, -0x34
    ctx->r2 = ADD32(ctx->r2, -0X34);
    // 0x8022C750: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C758: jal         0x80040F30
    // 0x8022C75C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C75C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C760: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022C764: beq         $v0, $zero, L_8022C7CC
    if (ctx->r2 == 0) {
        // 0x8022C768: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022C7CC;
    }
    // 0x8022C768: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022C76C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C770: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C774: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022C778: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C77C: bne         $v0, $v1, L_8022C798
    if (ctx->r2 != ctx->r3) {
        // 0x8022C780: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C798;
    }
    // 0x8022C780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C784: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022C788: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022C78C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C790: j           L_8022C7CC
    // 0x8022C794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C7CC;
    // 0x8022C794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C798:
    // 0x8022C798: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C79C: lhu         $a0, 0x4C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022C7A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C7A4: lhu         $v0, 0x4E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022C7A8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C7AC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C7B0: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022C7B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7B8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022C7BC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022C7C0: sh          $a0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r4;
    // 0x8022C7C4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022C7C8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022C7CC:
    // 0x8022C7CC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C7D0: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8022C7D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C7D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7DC: j           L_8022C810
    // 0x8022C7E0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022C810;
    // 0x8022C7E0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022C7E4:
    // 0x8022C7E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C7E8: lhu         $v1, 0x34C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022C7EC: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8022C7F0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C7F4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022C7F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C7FC: bgez        $v1, L_8022C810
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022C800: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022C810;
    }
    // 0x8022C800: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C804: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C808: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C80C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022C810:
    // 0x8022C810: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C814: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022C818: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C81C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C820: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C828: jr          $ra
    // 0x8022C82C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C82C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802431E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802431E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802431E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802431EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802431F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802431F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802431F8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802431FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80243200: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80243204: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x80243208: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x8024320C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80243210: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243214: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80243218: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8024321C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80243220: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80243224: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243228: jal         0x80032498
    // 0x8024322C: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8024322C: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    after_0:
    // 0x80243230: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x80243234: jal         0x800324B4
    // 0x80243238: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80243238: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    after_1:
    // 0x8024323C: lh          $v1, 0xE6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE6);
    // 0x80243240: lh          $a0, 0xE8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE8);
    // 0x80243244: addiu       $s3, $s0, 0xD0
    ctx->r19 = ADD32(ctx->r16, 0XD0);
    // 0x80243248: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x8024324C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243250: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80243254: lbu         $v1, 0xDC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDC);
    // 0x80243258: sll         $a1, $v0, 13
    ctx->r5 = S32(ctx->r2 << 13);
    // 0x8024325C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80243260: bne         $v1, $zero, L_80243290
    if (ctx->r3 != 0) {
        // 0x80243264: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_80243290;
    }
    // 0x80243264: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80243268: nop

    // 0x8024326C: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243270: mflo        $a0
    ctx->r4 = lo;
    // 0x80243274: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80243278: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8024327C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80243280: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80243284: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80243288: j           L_80243310
    // 0x8024328C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_80243310;
    // 0x8024328C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_80243290:
    // 0x80243290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243294: bne         $v1, $v0, L_802432C0
    if (ctx->r3 != ctx->r2) {
        // 0x80243298: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802432C0;
    }
    // 0x80243298: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024329C: nop

    // 0x802432A0: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802432A4: mflo        $a0
    ctx->r4 = lo;
    // 0x802432A8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802432AC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802432B0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802432B4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802432B8: j           L_8024330C
    // 0x802432BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_8024330C;
    // 0x802432BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_802432C0:
    // 0x802432C0: bne         $v1, $v0, L_802432EC
    if (ctx->r3 != ctx->r2) {
        // 0x802432C4: nop
    
            goto L_802432EC;
    }
    // 0x802432C4: nop

    // 0x802432C8: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802432CC: mflo        $a0
    ctx->r4 = lo;
    // 0x802432D0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802432D4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802432D8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802432DC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802432E0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802432E4: j           L_80243310
    // 0x802432E8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_80243310;
    // 0x802432E8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_802432EC:
    // 0x802432EC: nop

    // 0x802432F0: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802432F4: mflo        $a0
    ctx->r4 = lo;
    // 0x802432F8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802432FC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80243300: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80243304: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80243308: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_8024330C:
    // 0x8024330C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_80243310:
    // 0x80243310: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80243314: jal         0x8004DD04
    // 0x80243318: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80243318: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8024331C: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x80243320: sll         $v1, $s4, 24
    ctx->r3 = S32(ctx->r20 << 24);
    // 0x80243324: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80243328: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024332C: mflo        $v1
    ctx->r3 = lo;
    // 0x80243330: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x80243334: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80243338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024333C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80243340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80243344: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80243348: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024334C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80243350: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80243354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80243358: jr          $ra
    // 0x8024335C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024335C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237A28_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237A28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237A2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237A30: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80237A34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237A38: beq         $v1, $v0, L_80237A88
    if (ctx->r3 == ctx->r2) {
        // 0x80237A3C: addiu       $a1, $a0, 0x308
        ctx->r5 = ADD32(ctx->r4, 0X308);
            goto L_80237A88;
    }
    // 0x80237A3C: addiu       $a1, $a0, 0x308
    ctx->r5 = ADD32(ctx->r4, 0X308);
    // 0x80237A40: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237A44: beql        $v0, $zero, L_80237A5C
    if (ctx->r2 == 0) {
        // 0x80237A48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237A5C;
    }
    goto skip_0;
    // 0x80237A48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237A4C: beq         $v1, $zero, L_80237A6C
    if (ctx->r3 == 0) {
        // 0x80237A50: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80237A6C;
    }
    // 0x80237A50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237A54: j           L_80237B1C
    // 0x80237A58: nop

        goto L_80237B1C;
    // 0x80237A58: nop

L_80237A5C:
    // 0x80237A5C: beq         $v1, $v0, L_80237AF8
    if (ctx->r3 == ctx->r2) {
        // 0x80237A60: nop
    
            goto L_80237AF8;
    }
    // 0x80237A60: nop

    // 0x80237A64: j           L_80237B1C
    // 0x80237A68: nop

        goto L_80237B1C;
    // 0x80237A68: nop

L_80237A6C:
    // 0x80237A6C: lhu         $v0, 0x308($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X308);
    // 0x80237A70: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80237A74: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80237A78: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80237A7C: sh          $zero, 0x310($a0)
    MEM_H(0X310, ctx->r4) = 0;
    // 0x80237A80: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80237A84: sh          $v0, 0x308($a0)
    MEM_H(0X308, ctx->r4) = ctx->r2;
L_80237A88:
    // 0x80237A88: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80237A8C: lh          $v1, 0x44($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X44);
    // 0x80237A90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237A94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237A98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237A9C: lhu         $v0, 0x1630($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1630);
    // 0x80237AA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237AA4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237AA8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80237AAC: beq         $v0, $zero, L_80237ADC
    if (ctx->r2 == 0) {
        // 0x80237AB0: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80237ADC;
    }
    // 0x80237AB0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80237AB4: lhu         $a1, 0x4C($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X4C);
    // 0x80237AB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237ABC: subu        $a1, $a2, $a1
    ctx->r5 = SUB32(ctx->r6, ctx->r5);
    // 0x80237AC0: sh          $a1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r5;
    // 0x80237AC4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80237AC8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80237ACC: jal         0x8004DA90
    // 0x80237AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80237AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237AD4: j           L_80237B1C
    // 0x80237AD8: nop

        goto L_80237B1C;
    // 0x80237AD8: nop

L_80237ADC:
    // 0x80237ADC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237AE0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237AE4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80237AE8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80237AEC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237AF0: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80237AF4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80237AF8:
    // 0x80237AF8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237AFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237B00: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237B04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237B08: bgez        $v0, L_80237B1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237B0C: nop
    
            goto L_80237B1C;
    }
    // 0x80237B0C: nop

    // 0x80237B10: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80237B14: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237B18: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80237B1C:
    // 0x80237B1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237B20: jr          $ra
    // 0x80237B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234534_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234538: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023453C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234540: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234544: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234548: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023454C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80234550: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80234554: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80234558: beq         $v0, $zero, L_80234714
    if (ctx->r2 == 0) {
        // 0x8023455C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80234714;
    }
    // 0x8023455C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234560: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234564: addu        $at, $at, $v0
    gpr jr_addend_8023456C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234568: lw          $v0, 0x2EC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2EC0);
    // 0x8023456C: jr          $v0
    // 0x80234570: nop

    switch (jr_addend_8023456C >> 2) {
        case 0: goto L_80234574; break;
        case 1: goto L_80234634; break;
        case 2: goto L_80234650; break;
        case 3: goto L_802346B8; break;
        case 4: goto L_802346E4; break;
        default: switch_error(__func__, 0x8023456C, 0x80252EC0);
    }
    // 0x80234570: nop

L_80234574:
    // 0x80234574: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80234578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023457C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234580: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234584: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80234588: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023458C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80234590: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80234594: jal         0x8004D5D4
    // 0x80234598: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80234598: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8023459C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802345A0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802345A4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802345A8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802345AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802345B0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802345B4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802345B8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802345BC: addiu       $v0, $v0, 0x11F0
    ctx->r2 = ADD32(ctx->r2, 0X11F0);
    // 0x802345C0: jal         0x8003E934
    // 0x802345C4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802345C4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x802345C8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802345CC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802345D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802345D4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802345D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802345DC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802345E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802345E4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802345E8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802345EC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802345F0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802345F4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802345F8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802345FC: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80234600: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80234604: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80234608: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8023460C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80234610: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234614: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234618: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8023461C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80234620: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234624: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80234628: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023462C: j           L_80234714
    // 0x80234630: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80234714;
    // 0x80234630: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80234634:
    // 0x80234634: jal         0x802348C0
    // 0x80234638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802348C0_ovl10(rdram, ctx);
        goto after_2;
    // 0x80234638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023463C: beq         $v0, $zero, L_80234718
    if (ctx->r2 == 0) {
        // 0x80234640: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234718;
    }
    // 0x80234640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234644: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234648: j           L_80234710
    // 0x8023464C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234710;
    // 0x8023464C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234650:
    // 0x80234650: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234654: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80234658: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023465C: jal         0x8004F820
    // 0x80234660: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80234660: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80234664: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234668: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023466C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234670: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234674: bne         $v0, $zero, L_80234714
    if (ctx->r2 != 0) {
        // 0x80234678: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234714;
    }
    // 0x80234678: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023467C: jal         0x8003516C
    // 0x80234680: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x80234680: nop

    after_4:
    // 0x80234684: bne         $v0, $zero, L_80234718
    if (ctx->r2 != 0) {
        // 0x80234688: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234718;
    }
    // 0x80234688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023468C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234690: jal         0x800616FC
    // 0x80234694: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80234694: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x80234698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023469C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802346A0: jal         0x80050294
    // 0x802346A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x802346A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x802346A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802346AC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802346B0: j           L_80234710
    // 0x802346B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234710;
    // 0x802346B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802346B8:
    // 0x802346B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802346BC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802346C0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802346C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802346C8: bne         $v0, $zero, L_80234718
    if (ctx->r2 != 0) {
        // 0x802346CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234718;
    }
    // 0x802346CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346D0: jal         0x80034E3C
    // 0x802346D4: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x802346D4: nop

    after_7:
    // 0x802346D8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802346DC: j           L_80234710
    // 0x802346E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234710;
    // 0x802346E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802346E4:
    // 0x802346E4: jal         0x8003516C
    // 0x802346E8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x802346E8: nop

    after_8:
    // 0x802346EC: bne         $v0, $zero, L_80234718
    if (ctx->r2 != 0) {
        // 0x802346F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234718;
    }
    // 0x802346F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346F4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x802346F8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802346FC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80234700: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80234704: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80234708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023470C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80234710:
    // 0x80234710: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234714:
    // 0x80234714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80234718:
    // 0x80234718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023471C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234720: jal         0x80047284
    // 0x80234724: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80234724: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80234728: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023472C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234734: jr          $ra
    // 0x80234738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802439D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802439D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802439D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802439D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802439DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802439E0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802439E4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802439E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802439EC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802439F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802439F4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802439F8: jal         0x800324B4
    // 0x802439FC: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802439FC: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x80243A00: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80243A04: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243A08: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243A0C: mflo        $v0
    ctx->r2 = lo;
    // 0x80243A10: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x80243A14: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80243A18: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80243A1C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80243A20: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80243A24: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80243A28: jal         0x80032498
    // 0x80243A2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80243A2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x80243A30: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80243A34: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80243A38: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x80243A3C: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80243A40: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80243A44: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243A48: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243A4C: mflo        $v0
    ctx->r2 = lo;
    // 0x80243A50: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80243A54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80243A58: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80243A5C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80243A60: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80243A64: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80243A68: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x80243A6C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80243A70: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80243A74: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80243A78: jal         0x8004DD04
    // 0x80243A7C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80243A7C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x80243A80: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80243A84: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80243A88: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80243A8C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80243A90: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80243A94: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80243A98: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x80243A9C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80243AA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80243AA4: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x80243AA8: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x80243AAC: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80243AB0: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80243AB4: jal         0x8004DD04
    // 0x80243AB8: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80243AB8: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x80243ABC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80243AC0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80243AC4: beq         $v0, $zero, L_80243B00
    if (ctx->r2 == 0) {
        // 0x80243AC8: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_80243B00;
    }
    // 0x80243AC8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80243ACC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243AD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243AD4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243AD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243ADC: lhu         $v1, 0x2048($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2048);
    // 0x80243AE0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243AE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243AE8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80243AEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243AF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243AF4: lhu         $v0, 0x204A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X204A);
    // 0x80243AF8: j           L_80243B30
    // 0x80243AFC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80243B30;
    // 0x80243AFC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80243B00:
    // 0x80243B00: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243B04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243B08: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243B0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243B10: lhu         $v1, 0x2030($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2030);
    // 0x80243B14: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243B18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243B1C: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80243B20: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243B24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243B28: lhu         $v0, 0x2032($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2032);
    // 0x80243B2C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80243B30:
    // 0x80243B30: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80243B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243B38: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80243B3C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80243B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243B44: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80243B48: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80243B4C: jal         0x80244248
    // 0x80243B50: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80244248_ovl10(rdram, ctx);
        goto after_4;
    // 0x80243B50: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x80243B54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243B58: beq         $v0, $zero, L_80243B68
    if (ctx->r2 == 0) {
        // 0x80243B5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80243B68;
    }
    // 0x80243B5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80243B60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80243B64: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80243B68:
    // 0x80243B68: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x80243B6C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80243B70: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80243B74: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80243B78: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80243B7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80243B80: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80243B84: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x80243B88: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x80243B8C: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x80243B90: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80243B94: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80243B98: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80243B9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80243BA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80243BA4: jr          $ra
    // 0x80243BA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80243BA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802325B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802325B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802325BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802325C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802325C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802325C8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802325CC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802325D0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x802325D4: jal         0x8004FA7C
    // 0x802325D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802325D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802325DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802325E0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802325E4: beq         $v0, $zero, L_80232678
    if (ctx->r2 == 0) {
        // 0x802325E8: nop
    
            goto L_80232678;
    }
    // 0x802325E8: nop

    // 0x802325EC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802325F0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802325F4: bne         $v0, $zero, L_80232678
    if (ctx->r2 != 0) {
        // 0x802325F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232678;
    }
    // 0x802325F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802325FC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80232600: beq         $v1, $v0, L_80232618
    if (ctx->r3 == ctx->r2) {
        // 0x80232604: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232618;
    }
    // 0x80232604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232608: beq         $v1, $v0, L_80232648
    if (ctx->r3 == ctx->r2) {
        // 0x8023260C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232648;
    }
    // 0x8023260C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232610: j           L_8023266C
    // 0x80232614: nop

        goto L_8023266C;
    // 0x80232614: nop

L_80232618:
    // 0x80232618: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023261C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80232620: bne         $v0, $zero, L_8023266C
    if (ctx->r2 != 0) {
        // 0x80232624: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023266C;
    }
    // 0x80232624: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232628: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8023262C: bne         $v0, $zero, L_8023266C
    if (ctx->r2 != 0) {
        // 0x80232630: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023266C;
    }
    // 0x80232630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232634: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232638: bne         $v1, $v0, L_8023266C
    if (ctx->r3 != ctx->r2) {
        // 0x8023263C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023266C;
    }
    // 0x8023263C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232640: j           L_8023266C
    // 0x80232644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023266C;
    // 0x80232644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232648:
    // 0x80232648: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023264C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80232650: beq         $v0, $zero, L_80232668
    if (ctx->r2 == 0) {
        // 0x80232654: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80232668;
    }
    // 0x80232654: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80232658: bne         $v0, $zero, L_8023266C
    if (ctx->r2 != 0) {
        // 0x8023265C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023266C;
    }
    // 0x8023265C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232660: j           L_8023266C
    // 0x80232664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023266C;
    // 0x80232664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232668:
    // 0x80232668: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023266C:
    // 0x8023266C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232670: beq         $v0, $zero, L_8023269C
    if (ctx->r2 == 0) {
        // 0x80232674: nop
    
            goto L_8023269C;
    }
    // 0x80232674: nop

L_80232678:
    // 0x80232678: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023267C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232680: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232684: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232688: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023268C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232690: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80232694: j           L_802326AC
    // 0x80232698: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802326AC;
    // 0x80232698: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023269C:
    // 0x8023269C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802326A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802326A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802326A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802326AC:
    // 0x802326AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802326B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802326B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802326B8: jr          $ra
    // 0x802326BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802326BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246CF8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246CF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246CFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246D04: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80246D08: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80246D0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80246D10: jal         0x8003516C
    // 0x80246D14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80246D14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80246D18: bne         $v0, $zero, L_80246D48
    if (ctx->r2 != 0) {
        // 0x80246D1C: nop
    
            goto L_80246D48;
    }
    // 0x80246D1C: nop

    // 0x80246D20: jal         0x80070050
    // 0x80246D24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80246D24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80246D28: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80246D2C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80246D30: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80246D34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80246D38: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80246D3C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80246D40: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80246D44: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80246D48:
    // 0x80246D48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80246D4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246D50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246D54: jr          $ra
    // 0x80246D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B338_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024B33C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8024B340: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8024B344: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024B348: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024B34C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024B350: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024B354: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8024B358: jal         0x80031DA8
    // 0x8024B35C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_0;
    // 0x8024B35C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8024B360: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024B364: jr          $ra
    // 0x8024B368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024B368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024B36C: nop

;}
RECOMP_FUNC void func_80227080_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227084: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227088: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022708C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227090: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227094: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227098: lw          $v0, -0x12E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X12E0);
    // 0x8022709C: jalr        $v0
    // 0x802270A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802270A0: nop

    after_0:
    // 0x802270A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802270A8: jr          $ra
    // 0x802270AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802270AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242DD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242DD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242DE0: jal         0x80243360
    // 0x80242DE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80243360_ovl10(rdram, ctx);
        goto after_0;
    // 0x80242DE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80242DE8: jal         0x80243028
    // 0x80242DEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80243028_ovl10(rdram, ctx);
        goto after_1;
    // 0x80242DEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80242DF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242DF4: bne         $v0, $zero, L_80242E14
    if (ctx->r2 != 0) {
        // 0x80242DF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80242E14;
    }
    // 0x80242DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242DFC: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80242E00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242E04: jal         0x8004DA90
    // 0x80242E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80242E08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80242E0C: j           L_80242E3C
    // 0x80242E10: nop

        goto L_80242E3C;
    // 0x80242E10: nop

L_80242E14:
    // 0x80242E14: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80242E18: lhu         $v1, 0xE2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE2);
    // 0x80242E1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80242E20: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80242E24: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80242E28: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80242E2C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80242E30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242E34: jal         0x802431E4
    // 0x80242E38: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    func_802431E4_ovl10(rdram, ctx);
        goto after_3;
    // 0x80242E38: sh          $v1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r3;
    after_3:
L_80242E3C:
    // 0x80242E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242E44: jr          $ra
    // 0x80242E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802275D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802275EC: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x802275F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802275F4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802275F8: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x802275FC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80227600: beq         $v0, $zero, L_80227818
    if (ctx->r2 == 0) {
        // 0x80227604: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227818;
    }
    // 0x80227604: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227608: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022760C: addu        $at, $at, $v0
    gpr jr_addend_80227614 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227610: lw          $v0, 0x2B20($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B20);
    // 0x80227614: jr          $v0
    // 0x80227618: nop

    switch (jr_addend_80227614 >> 2) {
        case 0: goto L_8022761C; break;
        case 1: goto L_80227634; break;
        case 2: goto L_802276AC; break;
        case 3: goto L_802276CC; break;
        case 4: goto L_80227744; break;
        case 5: goto L_802277C0; break;
        case 6: goto L_802277DC; break;
        default: switch_error(__func__, 0x80227614, 0x80252B20);
    }
    // 0x80227618: nop

L_8022761C:
    // 0x8022761C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80227620: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227624: beq         $v1, $v0, L_802277CC
    if (ctx->r3 == ctx->r2) {
        // 0x80227628: nop
    
            goto L_802277CC;
    }
    // 0x80227628: nop

    // 0x8022762C: j           L_80227818
    // 0x80227630: nop

        goto L_80227818;
    // 0x80227630: nop

L_80227634:
    // 0x80227634: lhu         $v0, 0x56($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X56);
    // 0x80227638: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022763C: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80227640: beq         $v0, $zero, L_8022769C
    if (ctx->r2 == 0) {
        // 0x80227644: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022769C;
    }
    // 0x80227644: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227648: sh          $v0, 0x43A($a3)
    MEM_H(0X43A, ctx->r7) = ctx->r2;
    // 0x8022764C: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x80227650: sh          $v0, 0x43C($a3)
    MEM_H(0X43C, ctx->r7) = ctx->r2;
    // 0x80227654: lbu         $v0, 0xBD($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XBD);
    // 0x80227658: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022765C: sh          $a2, 0x438($a3)
    MEM_H(0X438, ctx->r7) = ctx->r6;
    // 0x80227660: lh          $v1, 0x438($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X438);
    // 0x80227664: lh          $a0, 0x43A($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X43A);
    // 0x80227668: lh          $a1, 0x43C($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X43C);
    // 0x8022766C: sh          $zero, 0x440($a3)
    MEM_H(0X440, ctx->r7) = 0;
    // 0x80227670: sh          $a2, 0x442($a3)
    MEM_H(0X442, ctx->r7) = ctx->r6;
    // 0x80227674: sh          $zero, 0x444($a3)
    MEM_H(0X444, ctx->r7) = 0;
    // 0x80227678: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022767C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227680: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227684: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227688: sb          $v0, 0xBD($a3)
    MEM_B(0XBD, ctx->r7) = ctx->r2;
    // 0x8022768C: sw          $v1, 0x428($a3)
    MEM_W(0X428, ctx->r7) = ctx->r3;
    // 0x80227690: sw          $a0, 0x42C($a3)
    MEM_W(0X42C, ctx->r7) = ctx->r4;
    // 0x80227694: j           L_802277CC
    // 0x80227698: sw          $a1, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r5;
        goto L_802277CC;
    // 0x80227698: sw          $a1, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r5;
L_8022769C:
    // 0x8022769C: lhu         $v0, 0x128($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X128);
    // 0x802276A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276A4: j           L_80227818
    // 0x802276A8: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80227818;
    // 0x802276A8: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_802276AC:
    // 0x802276AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276B0: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x802276B4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802276B8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x802276BC: beq         $v1, $v0, L_802277CC
    if (ctx->r3 == ctx->r2) {
        // 0x802276C0: nop
    
            goto L_802277CC;
    }
    // 0x802276C0: nop

    // 0x802276C4: j           L_80227818
    // 0x802276C8: nop

        goto L_80227818;
    // 0x802276C8: nop

L_802276CC:
    // 0x802276CC: lh          $v0, 0x14($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X14);
    // 0x802276D0: slti        $v0, $v0, -0x1C0
    ctx->r2 = SIGNED(ctx->r2) < -0X1C0 ? 1 : 0;
    // 0x802276D4: beq         $v0, $zero, L_80227734
    if (ctx->r2 == 0) {
        // 0x802276D8: addiu       $v0, $zero, -0x1C0
        ctx->r2 = ADD32(0, -0X1C0);
            goto L_80227734;
    }
    // 0x802276D8: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x802276DC: lbu         $v1, 0xBD($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XBD);
    // 0x802276E0: sh          $v0, 0x438($a3)
    MEM_H(0X438, ctx->r7) = ctx->r2;
    // 0x802276E4: lh          $a0, 0x438($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X438);
    // 0x802276E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802276EC: sh          $v0, 0x43A($a3)
    MEM_H(0X43A, ctx->r7) = ctx->r2;
    // 0x802276F0: lh          $a1, 0x43A($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X43A);
    // 0x802276F4: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x802276F8: sh          $v0, 0x43C($a3)
    MEM_H(0X43C, ctx->r7) = ctx->r2;
    // 0x802276FC: lh          $a2, 0x43C($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X43C);
    // 0x80227700: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227704: sh          $zero, 0x440($a3)
    MEM_H(0X440, ctx->r7) = 0;
    // 0x80227708: sh          $v0, 0x442($a3)
    MEM_H(0X442, ctx->r7) = ctx->r2;
    // 0x8022770C: sh          $zero, 0x444($a3)
    MEM_H(0X444, ctx->r7) = 0;
    // 0x80227710: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227714: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227718: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022771C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227720: sb          $v1, 0xBD($a3)
    MEM_B(0XBD, ctx->r7) = ctx->r3;
    // 0x80227724: sw          $a0, 0x428($a3)
    MEM_W(0X428, ctx->r7) = ctx->r4;
    // 0x80227728: sw          $a1, 0x42C($a3)
    MEM_W(0X42C, ctx->r7) = ctx->r5;
    // 0x8022772C: j           L_802277CC
    // 0x80227730: sw          $a2, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r6;
        goto L_802277CC;
    // 0x80227730: sw          $a2, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r6;
L_80227734:
    // 0x80227734: lhu         $v0, 0x124($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X124);
    // 0x80227738: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022773C: j           L_80227818
    // 0x80227740: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80227818;
    // 0x80227740: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_80227744:
    // 0x80227744: lhu         $v0, 0x56($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X56);
    // 0x80227748: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022774C: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80227750: bne         $v0, $zero, L_802277B0
    if (ctx->r2 != 0) {
        // 0x80227754: addiu       $v0, $zero, -0x1C0
        ctx->r2 = ADD32(0, -0X1C0);
            goto L_802277B0;
    }
    // 0x80227754: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x80227758: lbu         $v1, 0xBD($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XBD);
    // 0x8022775C: sh          $v0, 0x438($a3)
    MEM_H(0X438, ctx->r7) = ctx->r2;
    // 0x80227760: lh          $a0, 0x438($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X438);
    // 0x80227764: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227768: sh          $v0, 0x43A($a3)
    MEM_H(0X43A, ctx->r7) = ctx->r2;
    // 0x8022776C: lh          $a1, 0x43A($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X43A);
    // 0x80227770: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x80227774: sh          $v0, 0x43C($a3)
    MEM_H(0X43C, ctx->r7) = ctx->r2;
    // 0x80227778: lh          $a2, 0x43C($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X43C);
    // 0x8022777C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227780: sh          $zero, 0x440($a3)
    MEM_H(0X440, ctx->r7) = 0;
    // 0x80227784: sh          $v0, 0x442($a3)
    MEM_H(0X442, ctx->r7) = ctx->r2;
    // 0x80227788: sh          $zero, 0x444($a3)
    MEM_H(0X444, ctx->r7) = 0;
    // 0x8022778C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227790: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227794: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227798: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022779C: sb          $v1, 0xBD($a3)
    MEM_B(0XBD, ctx->r7) = ctx->r3;
    // 0x802277A0: sw          $a0, 0x428($a3)
    MEM_W(0X428, ctx->r7) = ctx->r4;
    // 0x802277A4: sw          $a1, 0x42C($a3)
    MEM_W(0X42C, ctx->r7) = ctx->r5;
    // 0x802277A8: j           L_802277CC
    // 0x802277AC: sw          $a2, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r6;
        goto L_802277CC;
    // 0x802277AC: sw          $a2, 0x430($a3)
    MEM_W(0X430, ctx->r7) = ctx->r6;
L_802277B0:
    // 0x802277B0: lhu         $v0, 0x12A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12A);
    // 0x802277B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277B8: j           L_80227818
    // 0x802277BC: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80227818;
    // 0x802277BC: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_802277C0:
    // 0x802277C0: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x802277C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277C8: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
L_802277CC:
    // 0x802277CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277D4: j           L_80227818
    // 0x802277D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227818;
    // 0x802277D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802277DC:
    // 0x802277DC: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x802277E0: bne         $v0, $zero, L_80227818
    if (ctx->r2 != 0) {
        // 0x802277E4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227818;
    }
    // 0x802277E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802277E8: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802277EC: bne         $v1, $v0, L_80227818
    if (ctx->r3 != ctx->r2) {
        // 0x802277F0: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80227818;
    }
    // 0x802277F0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802277F4: lbu         $v0, 0xBD($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XBD);
    // 0x802277F8: ori         $a0, $a0, 0x2A00
    ctx->r4 = ctx->r4 | 0X2A00;
    // 0x802277FC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80227800: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80227804: jal         0x80036B1C
    // 0x80227808: sb          $v0, 0xBD($a3)
    MEM_B(0XBD, ctx->r7) = ctx->r2;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_0;
    // 0x80227808: sb          $v0, 0xBD($a3)
    MEM_B(0XBD, ctx->r7) = ctx->r2;
    after_0:
    // 0x8022780C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227814: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227818:
    // 0x80227818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022781C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227820: jr          $ra
    // 0x80227824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024069C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024069C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802406A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802406A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802406A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802406AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802406B0: lbu         $v0, 0xA4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA4);
    // 0x802406B4: xori        $v1, $v0, 0x4
    ctx->r3 = ctx->r2 ^ 0X4;
    // 0x802406B8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802406BC: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x802406C0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802406C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802406C8: beq         $v1, $zero, L_802406D8
    if (ctx->r3 == 0) {
        // 0x802406CC: addiu       $a0, $zero, 0x112
        ctx->r4 = ADD32(0, 0X112);
            goto L_802406D8;
    }
    // 0x802406CC: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    // 0x802406D0: jal         0x8002A33C
    // 0x802406D4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802406D4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
L_802406D8:
    // 0x802406D8: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802406DC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802406E0: beq         $v0, $zero, L_802408F0
    if (ctx->r2 == 0) {
        // 0x802406E4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802408F0;
    }
    // 0x802406E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802406E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802406EC: addu        $at, $at, $v0
    gpr jr_addend_802406F4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802406F0: lw          $v0, 0x3070($at)
    ctx->r2 = ADD32(ctx->r1, 0X3070);
    // 0x802406F4: jr          $v0
    // 0x802406F8: nop

    switch (jr_addend_802406F4 >> 2) {
        case 0: goto L_802406FC; break;
        case 1: goto L_802407A8; break;
        case 2: goto L_802407EC; break;
        case 3: goto L_80240828; break;
        case 4: goto L_802408F0; break;
        default: switch_error(__func__, 0x802406F4, 0x80253070);
    }
    // 0x802406F8: nop

L_802406FC:
    // 0x802406FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240700: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80240704: jal         0x80050294
    // 0x80240708: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80240708: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x8024070C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240710: addiu       $a1, $zero, 0x166
    ctx->r5 = ADD32(0, 0X166);
    // 0x80240714: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80240718: jal         0x8004DA90
    // 0x8024071C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8024071C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80240720: jal         0x8004F144
    // 0x80240724: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80240724: nop

    after_3:
    // 0x80240728: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024072C: beq         $s0, $zero, L_8024078C
    if (ctx->r16 == 0) {
        // 0x80240730: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024078C;
    }
    // 0x80240730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240734: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80240738: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8024073C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80240740: jal         0x800A3450
    // 0x80240744: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80240744: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_4:
    // 0x80240748: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8024074C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240750: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240754: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x80240758: jal         0x800A3450
    // 0x8024075C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8024075C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_5:
    // 0x80240760: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80240764: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80240768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024076C: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x80240770: jal         0x800A3450
    // 0x80240774: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80240774: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_6:
    // 0x80240778: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8024077C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240780: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240784: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x80240788: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_8024078C:
    // 0x8024078C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80240790: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x80240794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240798: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024079C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802407A0: j           L_802408F0
    // 0x802407A4: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
        goto L_802408F0;
    // 0x802407A4: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
L_802407A8:
    // 0x802407A8: jal         0x8005044C
    // 0x802407AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x802407AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x802407B0: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x802407B4: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802407B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802407BC: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802407C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802407C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802407C8: bne         $v0, $v1, L_802407DC
    if (ctx->r2 != ctx->r3) {
        // 0x802407CC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802407DC;
    }
    // 0x802407CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802407D0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x802407D4: j           L_80240854
    // 0x802407D8: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
        goto L_80240854;
    // 0x802407D8: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
L_802407DC:
    // 0x802407DC: addiu       $a1, $zero, 0x166
    ctx->r5 = ADD32(0, 0X166);
    // 0x802407E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802407E4: j           L_8024087C
    // 0x802407E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_8024087C;
    // 0x802407E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802407EC:
    // 0x802407EC: jal         0x8005044C
    // 0x802407F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802407F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x802407F4: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x802407F8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x802407FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240800: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80240804: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240808: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024080C: bne         $v0, $v1, L_80240860
    if (ctx->r2 != ctx->r3) {
        // 0x80240810: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80240860;
    }
    // 0x80240810: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240814: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80240818: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x8024081C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80240820: j           L_802408F0
    // 0x80240824: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_802408F0;
    // 0x80240824: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80240828:
    // 0x80240828: jal         0x8005044C
    // 0x8024082C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8024082C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x80240830: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80240834: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80240838: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024083C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80240840: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240844: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80240848: bne         $v0, $v1, L_80240860
    if (ctx->r2 != ctx->r3) {
        // 0x8024084C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80240860;
    }
    // 0x8024084C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240850: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
L_80240854:
    // 0x80240854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240858: j           L_802408F0
    // 0x8024085C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_802408F0;
    // 0x8024085C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80240860:
    // 0x80240860: addiu       $a1, $zero, 0x166
    ctx->r5 = ADD32(0, 0X166);
    // 0x80240864: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80240868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024086C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80240870: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80240874: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80240878: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8024087C:
    // 0x8024087C: jal         0x8004DA90
    // 0x80240880: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_10;
    // 0x80240880: nop

    after_10:
    // 0x80240884: jal         0x8004F144
    // 0x80240888: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x80240888: nop

    after_11:
    // 0x8024088C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80240890: beq         $s0, $zero, L_802408F0
    if (ctx->r16 == 0) {
        // 0x80240894: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802408F0;
    }
    // 0x80240894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240898: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024089C: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802408A0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802408A4: jal         0x800A3450
    // 0x802408A8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x802408A8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_12:
    // 0x802408AC: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802408B0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802408B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802408B8: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x802408BC: jal         0x800A3450
    // 0x802408C0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x802408C0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_13:
    // 0x802408C4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802408C8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802408CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802408D0: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x802408D4: jal         0x800A3450
    // 0x802408D8: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x802408D8: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_14:
    // 0x802408DC: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802408E0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802408E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802408E8: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x802408EC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_802408F0:
    // 0x802408F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802408F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802408F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802408FC: jr          $ra
    // 0x80240900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024C9C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C9C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C9C8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8024C9CC: bne         $v0, $zero, L_8024C9EC
    if (ctx->r2 != 0) {
        // 0x8024C9D0: nop
    
            goto L_8024C9EC;
    }
    // 0x8024C9D0: nop

    // 0x8024C9D4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024C9D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C9DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C9E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C9E4: j           L_8024CA00
    // 0x8024C9E8: lw          $v0, 0x2780($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2780);
        goto L_8024CA00;
    // 0x8024C9E8: lw          $v0, 0x2780($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2780);
L_8024C9EC:
    // 0x8024C9EC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024C9F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C9F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C9F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C9FC: lw          $v0, 0x2790($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2790);
L_8024CA00:
    // 0x8024CA00: jalr        $v0
    // 0x8024CA04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024CA04: nop

    after_0:
    // 0x8024CA08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024CA0C: jr          $ra
    // 0x8024CA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024CA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247B84_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247B88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247B8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247B90: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80247B94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247B98: jal         0x8003E6BC
    // 0x80247B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x80247B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80247BA0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80247BA4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x80247BA8: jal         0x8003E6BC
    // 0x80247BAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x80247BAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80247BB0: bne         $s0, $v0, L_80247BD8
    if (ctx->r16 != ctx->r2) {
        // 0x80247BB4: nop
    
            goto L_80247BD8;
    }
    // 0x80247BB4: nop

    // 0x80247BB8: jal         0x8006033C
    // 0x80247BBC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80247BBC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x80247BC0: bne         $v0, $zero, L_80247BD8
    if (ctx->r2 != 0) {
        // 0x80247BC4: nop
    
            goto L_80247BD8;
    }
    // 0x80247BC4: nop

    // 0x80247BC8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80247BCC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80247BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247BD4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80247BD8:
    // 0x80247BD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247BDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247BE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247BE4: jr          $ra
    // 0x80247BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245624_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245624: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80245628: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024562C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245630: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80245634: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80245638: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x8024563C: beq         $v1, $zero, L_802456B8
    if (ctx->r3 == 0) {
        // 0x80245640: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_802456B8;
    }
    // 0x80245640: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80245644: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80245648: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8024564C: beq         $v0, $zero, L_80245678
    if (ctx->r2 == 0) {
        // 0x80245650: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80245678;
    }
    // 0x80245650: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80245654: lh          $a2, 0xF4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XF4);
    // 0x80245658: lh          $a3, 0xF8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XF8);
    // 0x8024565C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80245660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245664: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80245668: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024566C: jal         0x8005F7D4
    // 0x80245670: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x80245670: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
    // 0x80245674: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_80245678:
    // 0x80245678: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x8024567C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80245680: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80245684: beq         $v0, $zero, L_80245690
    if (ctx->r2 == 0) {
        // 0x80245688: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80245690;
    }
    // 0x80245688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024568C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80245690:
    // 0x80245690: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x80245694: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80245698: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8024569C: beq         $v0, $zero, L_802456B8
    if (ctx->r2 == 0) {
        // 0x802456A0: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_802456B8;
    }
    // 0x802456A0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802456A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802456A8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802456AC: beq         $v0, $zero, L_802456B8
    if (ctx->r2 == 0) {
        // 0x802456B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802456B8;
    }
    // 0x802456B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802456B4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802456B8:
    // 0x802456B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802456BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802456C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802456C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802456C8: lw          $v0, 0x2104($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2104);
    // 0x802456CC: jalr        $v0
    // 0x802456D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802456D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802456D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802456D8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802456DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802456E0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802456E4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802456E8: addiu       $v0, $s1, 0x1C
    ctx->r2 = ADD32(ctx->r17, 0X1C);
    // 0x802456EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802456F0: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802456F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802456F8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802456FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80245700: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80245704: jal         0x80051E18
    // 0x80245708: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x80245708: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8024570C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80245710: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80245714: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80245718: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024571C: jr          $ra
    // 0x80245720: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80245720: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80243028_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024302C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80243030: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243038: lbu         $v0, 0xDF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDF);
    // 0x8024303C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80243040: andi        $v0, $v0, 0xE0
    ctx->r2 = ctx->r2 & 0XE0;
    // 0x80243044: bne         $v0, $v1, L_80243068
    if (ctx->r2 != ctx->r3) {
        // 0x80243048: addiu       $a1, $s0, 0xD0
        ctx->r5 = ADD32(ctx->r16, 0XD0);
            goto L_80243068;
    }
    // 0x80243048: addiu       $a1, $s0, 0xD0
    ctx->r5 = ADD32(ctx->r16, 0XD0);
    // 0x8024304C: jal         0x80243718
    // 0x80243050: nop

    func_80243718_ovl10(rdram, ctx);
        goto after_0;
    // 0x80243050: nop

    after_0:
    // 0x80243054: lbu         $v1, 0xDF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDF);
    // 0x80243058: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024305C: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x80243060: j           L_802431D4
    // 0x80243064: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
        goto L_802431D4;
    // 0x80243064: sb          $v1, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = ctx->r3;
L_80243068:
    // 0x80243068: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8024306C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80243070: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80243074: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80243078: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8024307C: sra         $a0, $a0, 26
    ctx->r4 = S32(SIGNED(ctx->r4) >> 26);
    // 0x80243080: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80243084: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x80243088: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8024308C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243090: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80243094: sb          $a0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r4;
    // 0x80243098: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8024309C: bne         $a0, $zero, L_802430AC
    if (ctx->r4 != 0) {
        // 0x802430A0: addiu       $a2, $v0, 0x40
        ctx->r6 = ADD32(ctx->r2, 0X40);
            goto L_802430AC;
    }
    // 0x802430A0: addiu       $a2, $v0, 0x40
    ctx->r6 = ADD32(ctx->r2, 0X40);
    // 0x802430A4: j           L_802430B8
    // 0x802430A8: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
        goto L_802430B8;
    // 0x802430A8: addiu       $a2, $v0, 0x41
    ctx->r6 = ADD32(ctx->r2, 0X41);
L_802430AC:
    // 0x802430AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802430B0: beql        $a0, $v0, L_802430B8
    if (ctx->r4 == ctx->r2) {
        // 0x802430B4: addiu       $a3, $v1, 0x41
        ctx->r7 = ADD32(ctx->r3, 0X41);
            goto L_802430B8;
    }
    goto skip_0;
    // 0x802430B4: addiu       $a3, $v1, 0x41
    ctx->r7 = ADD32(ctx->r3, 0X41);
    skip_0:
L_802430B8:
    // 0x802430B8: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x802430BC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802430C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802430C4: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x802430C8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802430CC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x802430D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802430D4: bne         $v0, $v1, L_802431D4
    if (ctx->r2 != ctx->r3) {
        // 0x802430D8: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_802431D4;
    }
    // 0x802430D8: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x802430DC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x802430E0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802430E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802430E8: bne         $v0, $v1, L_802431D4
    if (ctx->r2 != ctx->r3) {
        // 0x802430EC: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_802431D4;
    }
    // 0x802430EC: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x802430F0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802430F4: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802430F8: lbu         $v1, 0xC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XC);
    // 0x802430FC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80243100: srl         $t0, $v0, 4
    ctx->r8 = S32(U32(ctx->r2) >> 4);
    // 0x80243104: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80243108: andi        $a0, $a0, 0x1FF
    ctx->r4 = ctx->r4 & 0X1FF;
    // 0x8024310C: sltiu       $v1, $v1, 0x2
    ctx->r3 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x80243110: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80243114: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80243118: beq         $v1, $zero, L_8024312C
    if (ctx->r3 == 0) {
        // 0x8024311C: sh          $a0, 0x12($a1)
        MEM_H(0X12, ctx->r5) = ctx->r4;
            goto L_8024312C;
    }
    // 0x8024311C: sh          $a0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r4;
    // 0x80243120: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80243124: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80243128: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_8024312C:
    // 0x8024312C: lbu         $a0, 0xC($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XC);
    // 0x80243130: addiu       $v0, $a3, -0x40
    ctx->r2 = ADD32(ctx->r7, -0X40);
    // 0x80243134: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80243138: addiu       $v0, $a2, -0x40
    ctx->r2 = ADD32(ctx->r6, -0X40);
    // 0x8024313C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80243140: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80243144: beq         $v0, $zero, L_80243170
    if (ctx->r2 == 0) {
        // 0x80243148: srl         $v0, $a0, 1
        ctx->r2 = S32(U32(ctx->r4) >> 1);
            goto L_80243170;
    }
    // 0x80243148: srl         $v0, $a0, 1
    ctx->r2 = S32(U32(ctx->r4) >> 1);
    // 0x8024314C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243150: addiu       $v1, $a2, -0x41
    ctx->r3 = ADD32(ctx->r6, -0X41);
    // 0x80243154: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80243158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024315C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243160: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80243164: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243168: j           L_80243190
    // 0x8024316C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
        goto L_80243190;
    // 0x8024316C: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
L_80243170:
    // 0x80243170: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x80243174: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243178: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8024317C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243180: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80243184: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80243188: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024318C: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
L_80243190:
    // 0x80243190: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x80243194: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x80243198: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8024319C: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x802431A0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x802431A4: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x802431A8: beq         $v0, $zero, L_802431BC
    if (ctx->r2 == 0) {
        // 0x802431AC: sh          $v1, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r3;
            goto L_802431BC;
    }
    // 0x802431AC: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x802431B0: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x802431B4: j           L_802431C4
    // 0x802431B8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
        goto L_802431C4;
    // 0x802431B8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
L_802431BC:
    // 0x802431BC: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x802431C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802431C4:
    // 0x802431C4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802431C8: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802431CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802431D0: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_802431D4:
    // 0x802431D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802431D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802431DC: jr          $ra
    // 0x802431E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802431E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246100_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246100: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80246104: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80246108: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024610C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80246110: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80246114: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80246118: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024611C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80246120: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80246124: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80246128: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024612C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246130: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80246134: lhu         $v1, 0x21A0($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X21A0);
    // 0x80246138: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024613C: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80246140: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80246144: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246148: lhu         $v1, 0x21A2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X21A2);
    // 0x8024614C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80246150: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80246154: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80246158: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024615C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246160: lhu         $v0, 0x21A4($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X21A4);
    // 0x80246164: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80246168: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8024616C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80246170: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80246174: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80246178: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024617C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80246180: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80246184: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80246188: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8024618C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80246190: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80246194: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80246198: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x8024619C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802461A0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802461A4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802461A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802461AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802461B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802461B4: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x802461B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802461BC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802461C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802461C4: jal         0x8003ECF0
    // 0x802461C8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_0;
    // 0x802461C8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_0:
    // 0x802461CC: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x802461D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802461D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802461D8: jal         0x8009A3B4
    // 0x802461DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802461DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_1:
    // 0x802461E0: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x802461E4: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x802461E8: jal         0x80031428
    // 0x802461EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x802461EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802461F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802461F4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802461F8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802461FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80246200: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80246204: jal         0x80031DA8
    // 0x80246208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80246208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8024620C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80246210: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80246214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246218: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8024621C: jal         0x8004D5D4
    // 0x80246220: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x80246220: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_4:
    // 0x80246224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246228: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024622C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80246230: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80246234: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80246238: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024623C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80246240: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80246244: jr          $ra
    // 0x80246248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80246248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F8DC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F8E0: lbu         $a0, 0xA($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XA);
    // 0x8022F8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F8E8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022F8EC: beq         $v1, $v0, L_8022F938
    if (ctx->r3 == ctx->r2) {
        // 0x8022F8F0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F938;
    }
    // 0x8022F8F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F8F4: beql        $v0, $zero, L_8022F90C
    if (ctx->r2 == 0) {
        // 0x8022F8F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F90C;
    }
    goto skip_0;
    // 0x8022F8F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F8FC: beq         $v1, $zero, L_8022F91C
    if (ctx->r3 == 0) {
        // 0x8022F900: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022F91C;
    }
    // 0x8022F900: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F904: j           L_8022F9A4
    // 0x8022F908: nop

        goto L_8022F9A4;
    // 0x8022F908: nop

L_8022F90C:
    // 0x8022F90C: beq         $v1, $v0, L_8022F96C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F910: nop
    
            goto L_8022F96C;
    }
    // 0x8022F910: nop

    // 0x8022F914: j           L_8022F9A4
    // 0x8022F918: nop

        goto L_8022F9A4;
    // 0x8022F918: nop

L_8022F91C:
    // 0x8022F91C: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x8022F920: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022F924: sb          $v0, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r2;
    // 0x8022F928: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F92C: sb          $zero, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = 0;
    // 0x8022F930: j           L_8022F9A4
    // 0x8022F934: sh          $v0, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r2;
        goto L_8022F9A4;
    // 0x8022F934: sh          $v0, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r2;
L_8022F938:
    // 0x8022F938: lhu         $v0, 0x36C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X36C);
    // 0x8022F93C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F940: sh          $v0, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r2;
    // 0x8022F944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F948: bgez        $v0, L_8022F9A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F94C: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_8022F9A4;
    }
    // 0x8022F94C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022F950: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x8022F954: sb          $v1, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r3;
    // 0x8022F958: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022F95C: sh          $v1, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r3;
    // 0x8022F960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F964: j           L_8022F9A4
    // 0x8022F968: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
        goto L_8022F9A4;
    // 0x8022F968: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_8022F96C:
    // 0x8022F96C: lhu         $v0, 0x36C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X36C);
    // 0x8022F970: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F974: sh          $v0, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r2;
    // 0x8022F978: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F97C: bgez        $v0, L_8022F9A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F980: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022F9A4;
    }
    // 0x8022F980: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022F984: lhu         $v0, 0x36A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X36A);
    // 0x8022F988: lbu         $a0, 0xA($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XA);
    // 0x8022F98C: sb          $v1, 0x110($a1)
    MEM_B(0X110, ctx->r5) = ctx->r3;
    // 0x8022F990: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022F994: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022F998: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022F99C: sh          $v0, 0x36C($a1)
    MEM_H(0X36C, ctx->r5) = ctx->r2;
    // 0x8022F9A0: sb          $a0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r4;
L_8022F9A4:
    // 0x8022F9A4: jr          $ra
    // 0x8022F9A8: nop

    TRACE_RETURN()
    return;
    // 0x8022F9A8: nop

;}
RECOMP_FUNC void func_8022D03C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D03C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D044: beq         $v1, $v0, L_8022D090
    if (ctx->r3 == ctx->r2) {
        // 0x8022D048: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022D090;
    }
    // 0x8022D048: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022D04C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D050: beql        $v0, $zero, L_8022D068
    if (ctx->r2 == 0) {
        // 0x8022D054: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D068;
    }
    goto skip_0;
    // 0x8022D054: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D058: beq         $v1, $zero, L_8022D078
    if (ctx->r3 == 0) {
        // 0x8022D05C: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022D078;
    }
    // 0x8022D05C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022D060: j           L_8022D10C
    // 0x8022D064: nop

        goto L_8022D10C;
    // 0x8022D064: nop

L_8022D068:
    // 0x8022D068: beq         $v1, $v0, L_8022D0E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D06C: nop
    
            goto L_8022D0E8;
    }
    // 0x8022D06C: nop

    // 0x8022D070: j           L_8022D10C
    // 0x8022D074: nop

        goto L_8022D10C;
    // 0x8022D074: nop

L_8022D078:
    // 0x8022D078: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022D07C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022D080: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D088: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022D08C: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022D090:
    // 0x8022D090: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D094: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D098: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D09C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0A0: bgez        $v0, L_8022D10C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D0A4: nop
    
            goto L_8022D10C;
    }
    // 0x8022D0A4: nop

    // 0x8022D0A8: lw          $v0, 0x38($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X38);
    // 0x8022D0AC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022D0B0: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x8022D0B4: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022D0B8: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022D0BC: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x8022D0C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D0C4: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022D0C8: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x8022D0CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D0D0: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022D0D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D0D8: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8022D0DC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D0E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D0E4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D0E8:
    // 0x8022D0E8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D0EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D0F0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022D0F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0F8: bgez        $v0, L_8022D10C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D0FC: nop
    
            goto L_8022D10C;
    }
    // 0x8022D0FC: nop

    // 0x8022D100: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D104: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D108: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022D10C:
    // 0x8022D10C: jr          $ra
    // 0x8022D110: nop

    TRACE_RETURN()
    return;
    // 0x8022D110: nop

;}
RECOMP_FUNC void func_8023BFF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BFF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023BFF4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023BFF8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023BFFC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023C000: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023C004: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x8023C008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C00C: bne         $v1, $v0, L_8023C020
    if (ctx->r3 != ctx->r2) {
        // 0x8023C010: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8023C020;
    }
    // 0x8023C010: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023C014: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C018: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x8023C01C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C020:
    // 0x8023C020: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C024: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8023C028: beq         $v0, $zero, L_8023C08C
    if (ctx->r2 == 0) {
        // 0x8023C02C: andi        $v0, $v1, 0x100
        ctx->r2 = ctx->r3 & 0X100;
            goto L_8023C08C;
    }
    // 0x8023C02C: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x8023C030: beq         $v0, $zero, L_8023C060
    if (ctx->r2 == 0) {
        // 0x8023C034: nop
    
            goto L_8023C060;
    }
    // 0x8023C034: nop

    // 0x8023C038: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8023C03C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023C040: bne         $v0, $zero, L_8023C050
    if (ctx->r2 != 0) {
        // 0x8023C044: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023C050;
    }
    // 0x8023C044: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C048: jal         0x8023C11C
    // 0x8023C04C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8023C11C_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023C04C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_8023C050:
    // 0x8023C050: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8023C054: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C058: j           L_8023C0B0
    // 0x8023C05C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
        goto L_8023C0B0;
    // 0x8023C05C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
L_8023C060:
    // 0x8023C060: lh          $v0, 0x54($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X54);
    // 0x8023C064: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C068: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x8023C06C: bne         $v0, $zero, L_8023C0AC
    if (ctx->r2 != 0) {
        // 0x8023C070: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8023C0AC;
    }
    // 0x8023C070: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8023C074: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023C078: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x8023C07C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C080: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x8023C084: j           L_8023C0B0
    // 0x8023C088: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_8023C0B0;
    // 0x8023C088: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C08C:
    // 0x8023C08C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C090: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8023C094: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8023C098: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023C09C: lh          $v0, 0x54($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X54);
    // 0x8023C0A0: blez        $v0, L_8023C0B0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C0A4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023C0B0;
    }
    // 0x8023C0A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C0A8: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
L_8023C0AC:
    // 0x8023C0AC: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
L_8023C0B0:
    // 0x8023C0B0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8023C0B4: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8023C0B8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023C0BC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023C0C0: bne         $v0, $zero, L_8023C0F0
    if (ctx->r2 != 0) {
        // 0x8023C0C4: lui         $v0, 0x24
        ctx->r2 = S32(0X24 << 16);
            goto L_8023C0F0;
    }
    // 0x8023C0C4: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x8023C0C8: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C0CC: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8023C0D0: bne         $v0, $zero, L_8023C0E8
    if (ctx->r2 != 0) {
        // 0x8023C0D4: ori         $v0, $v1, 0x800
        ctx->r2 = ctx->r3 | 0X800;
            goto L_8023C0E8;
    }
    // 0x8023C0D4: ori         $v0, $v1, 0x800
    ctx->r2 = ctx->r3 | 0X800;
    // 0x8023C0D8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023C0DC: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x8023C0E0: jal         0x8002A33C
    // 0x8023C0E4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023C0E4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
L_8023C0E8:
    // 0x8023C0E8: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8023C0EC: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
L_8023C0F0:
    // 0x8023C0F0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023C0F4: beq         $v0, $zero, L_8023C108
    if (ctx->r2 == 0) {
        // 0x8023C0F8: nop
    
            goto L_8023C108;
    }
    // 0x8023C0F8: nop

    // 0x8023C0FC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C100: andi        $v0, $v0, 0xF7FF
    ctx->r2 = ctx->r2 & 0XF7FF;
    // 0x8023C104: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C108:
    // 0x8023C108: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023C10C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023C110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023C114: jr          $ra
    // 0x8023C118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023C118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80246CB0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246CB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246CB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246CC0: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x80246CC4: lb          $v0, 0x0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X0);
    // 0x80246CC8: bne         $v0, $zero, L_80246CE8
    if (ctx->r2 != 0) {
        // 0x80246CCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80246CE8;
    }
    // 0x80246CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246CD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246CD4: jal         0x80034844
    // 0x80246CD8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_0;
    // 0x80246CD8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_0:
    // 0x80246CDC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80246CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246CE4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80246CE8:
    // 0x80246CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246CEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246CF0: jr          $ra
    // 0x80246CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B8F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B8FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B900: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B908: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B90C: bne         $v0, $zero, L_8022B924
    if (ctx->r2 != 0) {
        // 0x8022B910: nop
    
            goto L_8022B924;
    }
    // 0x8022B910: nop

    // 0x8022B914: jal         0x80229F50
    // 0x8022B918: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B918: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x8022B91C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B920: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B924:
    // 0x8022B924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B928: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B92C: jr          $ra
    // 0x8022B930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233200_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233204: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80233208: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8023320C: beq         $a0, $v0, L_80233274
    if (ctx->r4 == ctx->r2) {
        // 0x80233210: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80233274;
    }
    // 0x80233210: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233214: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x80233218: beql        $v0, $zero, L_80233238
    if (ctx->r2 == 0) {
        // 0x8023321C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80233238;
    }
    goto skip_0;
    // 0x8023321C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x80233220: beq         $a0, $zero, L_8023326C
    if (ctx->r4 == 0) {
        // 0x80233224: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8023326C;
    }
    // 0x80233224: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80233228: beq         $a0, $v0, L_8023328C
    if (ctx->r4 == ctx->r2) {
        // 0x8023322C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023328C;
    }
    // 0x8023322C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233230: j           L_8023328C
    // 0x80233234: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023328C;
    // 0x80233234: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233238:
    // 0x80233238: beq         $a0, $v0, L_8023326C
    if (ctx->r4 == ctx->r2) {
        // 0x8023323C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8023326C;
    }
    // 0x8023323C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80233240: beq         $v0, $zero, L_80233258
    if (ctx->r2 == 0) {
        // 0x80233244: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80233258;
    }
    // 0x80233244: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80233248: beq         $a0, $v0, L_8023328C
    if (ctx->r4 == ctx->r2) {
        // 0x8023324C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023328C;
    }
    // 0x8023324C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80233250: j           L_8023328C
    // 0x80233254: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023328C;
    // 0x80233254: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233258:
    // 0x80233258: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8023325C: beq         $a0, $v0, L_8023327C
    if (ctx->r4 == ctx->r2) {
        // 0x80233260: nop
    
            goto L_8023327C;
    }
    // 0x80233260: nop

    // 0x80233264: j           L_8023328C
    // 0x80233268: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8023328C;
    // 0x80233268: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023326C:
    // 0x8023326C: j           L_8023328C
    // 0x80233270: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023328C;
    // 0x80233270: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80233274:
    // 0x80233274: j           L_8023328C
    // 0x80233278: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8023328C;
    // 0x80233278: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023327C:
    // 0x8023327C: jal         0x800A3450
    // 0x80233280: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80233280: nop

    after_0:
    // 0x80233284: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233288: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8023328C:
    // 0x8023328C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233290: jr          $ra
    // 0x80233294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C60: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225C64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C68: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225C6C: bne         $v0, $zero, L_80225C98
    if (ctx->r2 != 0) {
        // 0x80225C70: nop
    
            goto L_80225C98;
    }
    // 0x80225C70: nop

    // 0x80225C74: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225C78: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x80225C7C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225C80: lw          $a0, 0x3320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3320);
    // 0x80225C84: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80225C88: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80225C8C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225C90: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225C94: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80225C98:
    // 0x80225C98: lw          $a1, 0x24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X24);
    // 0x80225C9C: lb          $v1, 0xA6($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA6);
    // 0x80225CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CA4: bne         $v1, $v0, L_80225CB4
    if (ctx->r3 != ctx->r2) {
        // 0x80225CA8: addiu       $a0, $zero, 0x111
        ctx->r4 = ADD32(0, 0X111);
            goto L_80225CB4;
    }
    // 0x80225CA8: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    // 0x80225CAC: jal         0x8002A33C
    // 0x80225CB0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80225CB0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80225CB4:
    // 0x80225CB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225CB8: jr          $ra
    // 0x80225CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802390AC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802390AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802390B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802390B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802390B8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802390BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802390C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802390C4: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x802390C8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802390CC: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x802390D0: beq         $a0, $zero, L_802391B0
    if (ctx->r4 == 0) {
        // 0x802390D4: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_802391B0;
    }
    // 0x802390D4: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x802390D8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802390DC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802390E0: beql        $v0, $zero, L_802391A8
    if (ctx->r2 == 0) {
        // 0x802390E4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802391A8;
    }
    goto skip_0;
    // 0x802390E4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x802390E8: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x802390EC: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x802390F0: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x802390F4: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x802390F8: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x802390FC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80239100: bgtz        $v0, L_80239180
    if (SIGNED(ctx->r2) > 0) {
        // 0x80239104: sw          $v0, 0x35C($s0)
        MEM_W(0X35C, ctx->r16) = ctx->r2;
            goto L_80239180;
    }
    // 0x80239104: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
    // 0x80239108: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8023910C: lb          $v0, 0xE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XE);
    // 0x80239110: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80239114: bnel        $v0, $zero, L_80239184
    if (ctx->r2 != 0) {
        // 0x80239118: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80239184;
    }
    goto skip_1;
    // 0x80239118: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x8023911C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80239120: jal         0x8002A33C
    // 0x80239124: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80239124: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80239128: jal         0x8006036C
    // 0x8023912C: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8023912C: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_1:
    // 0x80239130: jal         0x8006033C
    // 0x80239134: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80239134: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_2:
    // 0x80239138: bne         $v0, $zero, L_80239190
    if (ctx->r2 != 0) {
        // 0x8023913C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80239190;
    }
    // 0x8023913C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80239140: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239144: jal         0x800616FC
    // 0x80239148: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80239148: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x8023914C: jal         0x8006036C
    // 0x80239150: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80239150: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_4:
    // 0x80239154: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80239158: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x8023915C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80239160: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239164: sw          $zero, 0x566C($at)
    MEM_W(0X566C, ctx->r1) = 0;
    // 0x80239168: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023916C: sw          $v0, 0x5640($at)
    MEM_W(0X5640, ctx->r1) = ctx->r2;
    // 0x80239170: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239174: sw          $v1, 0x563C($at)
    MEM_W(0X563C, ctx->r1) = ctx->r3;
    // 0x80239178: j           L_80239190
    // 0x8023917C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80239190;
    // 0x8023917C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80239180:
    // 0x80239180: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80239184:
    // 0x80239184: jal         0x8002A33C
    // 0x80239188: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80239188: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8023918C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80239190:
    // 0x80239190: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239194: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80239198: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8023919C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802391A0: j           L_802391B0
    // 0x802391A4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
        goto L_802391B0;
    // 0x802391A4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_802391A8:
    // 0x802391A8: jal         0x8002A33C
    // 0x802391AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802391AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_802391B0:
    // 0x802391B0: jal         0x8006033C
    // 0x802391B4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x802391B4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_7:
    // 0x802391B8: beq         $v0, $zero, L_80239214
    if (ctx->r2 == 0) {
        // 0x802391BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239214;
    }
    // 0x802391BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802391C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802391C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802391C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802391CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802391D0: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802391D4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802391D8: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802391DC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802391E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802391E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802391E8: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x802391EC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802391F0: lbu         $a2, 0x1660($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1660);
    // 0x802391F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802391F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802391FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239200: lw          $v0, 0x1664($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1664);
    // 0x80239204: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239208: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x8023920C: jal         0x8004A00C
    // 0x80239210: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_8;
    // 0x80239210: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
L_80239214:
    // 0x80239214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239218: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023921C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239224: jr          $ra
    // 0x80239228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80239228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802438D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802438D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802438D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802438D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802438DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802438E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802438E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802438E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802438EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802438F0: lw          $v0, 0x2060($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2060);
    // 0x802438F4: jalr        $v0
    // 0x802438F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802438F8: nop

    after_0:
    // 0x802438FC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80243900: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243904: bne         $v0, $zero, L_80243918
    if (ctx->r2 != 0) {
        // 0x80243908: nop
    
            goto L_80243918;
    }
    // 0x80243908: nop

    // 0x8024390C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80243910: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80243914: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80243918:
    // 0x80243918: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024391C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80243920: beql        $v1, $v0, L_80243928
    if (ctx->r3 == ctx->r2) {
        // 0x80243924: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80243928;
    }
    goto skip_0;
    // 0x80243924: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80243928:
    // 0x80243928: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8024392C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80243930: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80243934: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80243938: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8024393C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80243940: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80243944: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243948: bne         $v0, $zero, L_802439B0
    if (ctx->r2 != 0) {
        // 0x8024394C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802439B0;
    }
    // 0x8024394C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243950: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80243954: beq         $v0, $zero, L_80243970
    if (ctx->r2 == 0) {
        // 0x80243958: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80243970;
    }
    // 0x80243958: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8024395C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80243960: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80243964: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80243968: j           L_80243980
    // 0x8024396C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_80243980;
    // 0x8024396C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80243970:
    // 0x80243970: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80243974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80243978: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8024397C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_80243980:
    // 0x80243980: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80243984: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80243988: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8024398C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80243990: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80243994: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80243998: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024399C: jal         0x80051E18
    // 0x802439A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802439A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802439A4: jal         0x800472C0
    // 0x802439A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x802439A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802439AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802439B0:
    // 0x802439B0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802439B4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802439B8: jal         0x8003B564
    // 0x802439BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x802439BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802439C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802439C4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802439C8: jr          $ra
    // 0x802439CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802439CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802398F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802398F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802398F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802398F8: jal         0x8004F418
    // 0x802398FC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802398FC: nop

    after_0:
    // 0x80239900: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239904: jr          $ra
    // 0x80239908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249880_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249880: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80249884: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80249888: bne         $v0, $a0, L_8024989C
    if (ctx->r2 != ctx->r4) {
        // 0x8024988C: nop
    
            goto L_8024989C;
    }
    // 0x8024988C: nop

    // 0x80249890: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80249894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249898: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8024989C:
    // 0x8024989C: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x802498A0: bgez        $v0, L_802498AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802498A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802498AC;
    }
    // 0x802498A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802498A8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_802498AC:
    // 0x802498AC: jr          $ra
    // 0x802498B0: nop

    TRACE_RETURN()
    return;
    // 0x802498B0: nop

;}
RECOMP_FUNC void func_8023F51C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F51C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F520: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F524: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023F528: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023F52C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F538: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8023F53C: addiu       $s1, $s2, 0x440
    ctx->r17 = ADD32(ctx->r18, 0X440);
    // 0x8023F540: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023F544: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023F548: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8023F54C: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8023F550: beq         $v0, $zero, L_8023F7F8
    if (ctx->r2 == 0) {
        // 0x8023F554: sh          $zero, 0x444($s2)
        MEM_H(0X444, ctx->r18) = 0;
            goto L_8023F7F8;
    }
    // 0x8023F554: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x8023F558: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023F55C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F560: addu        $at, $at, $v0
    gpr jr_addend_8023F568 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F564: lw          $v0, 0x2FF8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2FF8);
    // 0x8023F568: jr          $v0
    // 0x8023F56C: nop

    switch (jr_addend_8023F568 >> 2) {
        case 0: goto L_8023F570; break;
        case 1: goto L_8023F7F8; break;
        case 2: goto L_8023F69C; break;
        case 3: goto L_8023F7F8; break;
        case 4: goto L_8023F678; break;
        case 5: goto L_8023F6B4; break;
        case 6: goto L_8023F6C8; break;
        case 7: goto L_8023F6DC; break;
        case 8: goto L_8023F6F0; break;
        case 9: goto L_8023F750; break;
        default: switch_error(__func__, 0x8023F568, 0x80252FF8);
    }
    // 0x8023F56C: nop

L_8023F570:
    // 0x8023F570: lbu         $v1, 0xEE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XEE);
    // 0x8023F574: lbu         $v0, 0xED($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XED);
    // 0x8023F578: beq         $v0, $v1, L_8023F7F8
    if (ctx->r2 == ctx->r3) {
        // 0x8023F57C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023F7F8;
    }
    // 0x8023F57C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8023F580: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023F584: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023F588: sll         $v1, $v0, 10
    ctx->r3 = S32(ctx->r2 << 10);
    // 0x8023F58C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F590: bne         $a0, $v0, L_8023F59C
    if (ctx->r4 != ctx->r2) {
        // 0x8023F594: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_8023F59C;
    }
    // 0x8023F594: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8023F598: addiu       $s0, $v1, 0x800
    ctx->r16 = ADD32(ctx->r3, 0X800);
L_8023F59C:
    // 0x8023F59C: andi        $v0, $s0, 0xFFF
    ctx->r2 = ctx->r16 & 0XFFF;
    // 0x8023F5A0: lh          $a0, 0x56($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X56);
    // 0x8023F5A4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023F5A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023F5AC: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x8023F5B0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x8023F5B4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8023F5B8: bltz        $v0, L_8023F5D0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023F5BC: slt         $v0, $a1, $v0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8023F5D0;
    }
    // 0x8023F5BC: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F5C0: bnel        $v0, $zero, L_8023F5E4
    if (ctx->r2 != 0) {
        // 0x8023F5C4: addiu       $s0, $s0, 0x1000
        ctx->r16 = ADD32(ctx->r16, 0X1000);
            goto L_8023F5E4;
    }
    goto skip_0;
    // 0x8023F5C4: addiu       $s0, $s0, 0x1000
    ctx->r16 = ADD32(ctx->r16, 0X1000);
    skip_0:
    // 0x8023F5C8: j           L_8023F5E8
    // 0x8023F5CC: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
        goto L_8023F5E8;
    // 0x8023F5CC: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
L_8023F5D0:
    // 0x8023F5D0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8023F5D4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F5D8: beq         $v0, $zero, L_8023F5E8
    if (ctx->r2 == 0) {
        // 0x8023F5DC: addiu       $a0, $s1, 0xB8
        ctx->r4 = ADD32(ctx->r17, 0XB8);
            goto L_8023F5E8;
    }
    // 0x8023F5DC: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
    // 0x8023F5E0: addiu       $s0, $s0, 0x1000
    ctx->r16 = ADD32(ctx->r16, 0X1000);
L_8023F5E4:
    // 0x8023F5E4: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
L_8023F5E8:
    // 0x8023F5E8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023F5EC: jal         0x8009A3B4
    // 0x8023F5F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023F5F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023F5F4: addiu       $a0, $s1, 0xC0
    ctx->r4 = ADD32(ctx->r17, 0XC0);
    // 0x8023F5F8: lbu         $a1, 0xED($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XED);
    // 0x8023F5FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F600: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F604: addiu       $v0, $v0, 0x188C
    ctx->r2 = ADD32(ctx->r2, 0X188C);
    // 0x8023F608: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023F60C: jal         0x8009A3B4
    // 0x8023F610: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023F610: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x8023F614: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023F618: lbu         $v1, 0xED($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XED);
    // 0x8023F61C: sh          $s0, 0xC6($s1)
    MEM_H(0XC6, ctx->r17) = ctx->r16;
    // 0x8023F620: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x8023F624: sh          $v0, 0xBE($s1)
    MEM_H(0XBE, ctx->r17) = ctx->r2;
    // 0x8023F628: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x8023F62C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F630: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023F634: lh          $v0, 0x188C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X188C);
    // 0x8023F638: bne         $v1, $v0, L_8023F660
    if (ctx->r3 != ctx->r2) {
        // 0x8023F63C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023F660;
    }
    // 0x8023F63C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023F640: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x8023F644: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F648: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023F64C: lh          $v0, 0x1890($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1890);
    // 0x8023F650: bne         $v1, $v0, L_8023F660
    if (ctx->r3 != ctx->r2) {
        // 0x8023F654: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023F660;
    }
    // 0x8023F654: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023F658: j           L_8023F7F4
    // 0x8023F65C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8023F7F4;
    // 0x8023F65C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023F660:
    // 0x8023F660: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F664: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023F668: sb          $zero, 0xE8($s1)
    MEM_B(0XE8, ctx->r17) = 0;
    // 0x8023F66C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023F670: j           L_8023F7F8
    // 0x8023F674: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F674: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023F678:
    // 0x8023F678: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023F67C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8023F680: beq         $v0, $zero, L_8023F6C8
    if (ctx->r2 == 0) {
        // 0x8023F684: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F6C8;
    }
    // 0x8023F684: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F688: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F68C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023F690: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8023F694: j           L_8023F7F8
    // 0x8023F698: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F698: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023F69C:
    // 0x8023F69C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023F6A0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023F6A4: jal         0x8023F9A8
    // 0x8023F6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023F9A8_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023F6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8023F6AC: j           L_8023F7F8
    // 0x8023F6B0: nop

        goto L_8023F7F8;
    // 0x8023F6B0: nop

L_8023F6B4:
    // 0x8023F6B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F6B8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F6BC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023F6C0: j           L_8023F7F8
    // 0x8023F6C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F6C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023F6C8:
    // 0x8023F6C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F6CC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F6D0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023F6D4: j           L_8023F7F8
    // 0x8023F6D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F6D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023F6DC:
    // 0x8023F6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F6E0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F6E4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8023F6E8: j           L_8023F7F8
    // 0x8023F6EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F6EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023F6F0:
    // 0x8023F6F0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023F6F4: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023F6F8: beq         $v0, $zero, L_8023F734
    if (ctx->r2 == 0) {
        // 0x8023F6FC: addiu       $a0, $s1, 0xB8
        ctx->r4 = ADD32(ctx->r17, 0XB8);
            goto L_8023F734;
    }
    // 0x8023F6FC: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
    // 0x8023F700: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x8023F704: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F708: lh          $v0, 0x1894($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1894);
    // 0x8023F70C: bne         $v1, $v0, L_8023F738
    if (ctx->r3 != ctx->r2) {
        // 0x8023F710: addiu       $a1, $s2, 0x14
        ctx->r5 = ADD32(ctx->r18, 0X14);
            goto L_8023F738;
    }
    // 0x8023F710: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023F714: lh          $v1, 0x18($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X18);
    // 0x8023F718: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F71C: lh          $v0, 0x1898($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1898);
    // 0x8023F720: bne         $v1, $v0, L_8023F738
    if (ctx->r3 != ctx->r2) {
        // 0x8023F724: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F738;
    }
    // 0x8023F724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F728: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F72C: j           L_8023F798
    // 0x8023F730: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8023F798;
    // 0x8023F730: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8023F734:
    // 0x8023F734: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
L_8023F738:
    // 0x8023F738: jal         0x8009A3B4
    // 0x8023F73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023F73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023F740: addiu       $s0, $s1, 0xC0
    ctx->r16 = ADD32(ctx->r17, 0XC0);
    // 0x8023F744: lbu         $a1, 0xEE($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEE);
    // 0x8023F748: j           L_8023F7BC
    // 0x8023F74C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023F7BC;
    // 0x8023F74C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023F750:
    // 0x8023F750: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023F754: andi        $v0, $v1, 0xFFBF
    ctx->r2 = ctx->r3 & 0XFFBF;
    // 0x8023F758: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023F75C: lh          $v0, 0x6E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X6E);
    // 0x8023F760: bgtz        $v0, L_8023F77C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023F764: andi        $v0, $v1, 0xFF3F
        ctx->r2 = ctx->r3 & 0XFF3F;
            goto L_8023F77C;
    }
    // 0x8023F764: andi        $v0, $v1, 0xFF3F
    ctx->r2 = ctx->r3 & 0XFF3F;
    // 0x8023F768: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023F76C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023F770: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F774: j           L_8023F7F8
    // 0x8023F778: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8023F7F8;
    // 0x8023F778: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8023F77C:
    // 0x8023F77C: lbu         $v1, 0xED($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XED);
    // 0x8023F780: lbu         $v0, 0xEE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XEE);
    // 0x8023F784: bne         $v1, $v0, L_8023F7A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023F788: addiu       $a0, $s1, 0xB8
        ctx->r4 = ADD32(ctx->r17, 0XB8);
            goto L_8023F7A4;
    }
    // 0x8023F788: addiu       $a0, $s1, 0xB8
    ctx->r4 = ADD32(ctx->r17, 0XB8);
    // 0x8023F78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F790: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023F794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023F798:
    // 0x8023F798: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023F79C: j           L_8023F7F8
    // 0x8023F7A0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023F7F8;
    // 0x8023F7A0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023F7A4:
    // 0x8023F7A4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023F7A8: jal         0x8009A3B4
    // 0x8023F7AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023F7AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8023F7B0: addiu       $s0, $s1, 0xC0
    ctx->r16 = ADD32(ctx->r17, 0XC0);
    // 0x8023F7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F7B8: lbu         $a1, 0xED($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XED);
L_8023F7BC:
    // 0x8023F7BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F7C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F7C4: addiu       $v0, $v0, 0x188C
    ctx->r2 = ADD32(ctx->r2, 0X188C);
    // 0x8023F7C8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023F7CC: jal         0x8009A3B4
    // 0x8023F7D0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023F7D0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_5:
    // 0x8023F7D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F7D8: jal         0x8004EC38
    // 0x8023F7DC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x8023F7DC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_6:
    // 0x8023F7E0: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8023F7E4: sh          $v0, 0xC6($s1)
    MEM_H(0XC6, ctx->r17) = ctx->r2;
    // 0x8023F7E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023F7EC: sb          $zero, 0xE8($s1)
    MEM_B(0XE8, ctx->r17) = 0;
    // 0x8023F7F0: sh          $v1, 0xBE($s1)
    MEM_H(0XBE, ctx->r17) = ctx->r3;
L_8023F7F4:
    // 0x8023F7F4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8023F7F8:
    // 0x8023F7F8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023F7FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F800: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F804: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F80C: jr          $ra
    // 0x8023F810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A3B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A3BC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A3C0: addiu       $a0, $a0, 0x33A0
    ctx->r4 = ADD32(ctx->r4, 0X33A0);
    // 0x8022A3C4: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
L_8022A3C8:
    // 0x8022A3C8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8022A3CC: sb          $a1, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r5;
    // 0x8022A3D0: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x8022A3D4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022A3D8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8022A3DC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022A3E0: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x8022A3E4: bne         $v0, $zero, L_8022A3C8
    if (ctx->r2 != 0) {
        // 0x8022A3E8: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_8022A3C8;
    }
    // 0x8022A3E8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8022A3EC: jr          $ra
    // 0x8022A3F0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8022A3F0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8022A3F4: nop

    // 0x8022A3F8: nop

    // 0x8022A3FC: nop

;}
RECOMP_FUNC void func_8022F380_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F388: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F38C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F390: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F398: jal         0x8009A3B4
    // 0x8022F39C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F39C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F3A0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F3A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F3A8: jal         0x8009A3B4
    // 0x8022F3AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F3AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F3B0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F3B4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F3B8: jal         0x8009A3B4
    // 0x8022F3BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F3BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F3C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F3C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F3C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F3CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F3D0: lw          $v0, 0x950($at)
    ctx->r2 = MEM_W(ctx->r1, 0X950);
    // 0x8022F3D4: jalr        $v0
    // 0x8022F3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022F3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022F3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3E4: jr          $ra
    // 0x8022F3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024624C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024624C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80246250: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80246254: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80246258: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8024625C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80246260: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80246264: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80246268: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8024626C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246270: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246278: lw          $v0, 0x2244($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2244);
    // 0x8024627C: jalr        $v0
    // 0x80246280: addiu       $s0, $s2, 0x88
    ctx->r16 = ADD32(ctx->r18, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80246280: addiu       $s0, $s2, 0x88
    ctx->r16 = ADD32(ctx->r18, 0X88);
    after_0:
    // 0x80246284: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80246288: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8024628C: beq         $v0, $zero, L_802462B8
    if (ctx->r2 == 0) {
        // 0x80246290: addiu       $s3, $s3, 0x49B0
        ctx->r19 = ADD32(ctx->r19, 0X49B0);
            goto L_802462B8;
    }
    // 0x80246290: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80246294: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80246298: bne         $v0, $zero, L_802462B8
    if (ctx->r2 != 0) {
        // 0x8024629C: nop
    
            goto L_802462B8;
    }
    // 0x8024629C: nop

    // 0x802462A0: jal         0x802468EC
    // 0x802462A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802468EC_ovl10(rdram, ctx);
        goto after_1;
    // 0x802462A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x802462A8: jal         0x8024691C
    // 0x802462AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8024691C_ovl10(rdram, ctx);
        goto after_2;
    // 0x802462AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x802462B0: j           L_80246484
    // 0x802462B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_80246484;
    // 0x802462B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_802462B8:
    // 0x802462B8: lw          $v1, 0xC0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC0);
    // 0x802462BC: lui         $v0, 0x2800
    ctx->r2 = S32(0X2800 << 16);
    // 0x802462C0: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x802462C4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802462C8: bne         $a0, $v0, L_802463B4
    if (ctx->r4 != ctx->r2) {
        // 0x802462CC: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_802463B4;
    }
    // 0x802462CC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802462D0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802462D4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802462D8: beq         $v0, $zero, L_802463B4
    if (ctx->r2 == 0) {
        // 0x802462DC: nop
    
            goto L_802463B4;
    }
    // 0x802462DC: nop

    // 0x802462E0: lw          $v0, 0xD0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD0);
    // 0x802462E4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802462E8: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x802462EC: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x802462F0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802462F4: bne         $v1, $zero, L_802463B4
    if (ctx->r3 != 0) {
        // 0x802462F8: sw          $v0, 0xD0($s2)
        MEM_W(0XD0, ctx->r18) = ctx->r2;
            goto L_802463B4;
    }
    // 0x802462F8: sw          $v0, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r2;
    // 0x802462FC: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80246300: bne         $v0, $zero, L_8024636C
    if (ctx->r2 != 0) {
        // 0x80246304: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_8024636C;
    }
    // 0x80246304: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80246308: lb          $v1, 0xF($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XF);
    // 0x8024630C: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80246310: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x80246314: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80246318: lbu         $a0, 0xC($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XC);
    // 0x8024631C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80246320: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x80246324: lbu         $s1, 0x2224($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X2224);
    // 0x80246328: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8024632C: sra         $v1, $a1, 31
    ctx->r3 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80246330: sb          $a0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r4;
    // 0x80246334: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80246338: mfhi        $t0
    ctx->r8 = hi;
    // 0x8024633C: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x80246340: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80246344: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80246348: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024634C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80246350: bne         $a0, $zero, L_802463A4
    if (ctx->r4 != 0) {
        // 0x80246354: sb          $a1, 0xF($s2)
        MEM_B(0XF, ctx->r18) = ctx->r5;
            goto L_802463A4;
    }
    // 0x80246354: sb          $a1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r5;
    // 0x80246358: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8024635C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246360: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x80246364: j           L_802463A4
    // 0x80246368: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_802463A4;
    // 0x80246368: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8024636C:
    // 0x8024636C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80246370: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80246374: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80246378: lbu         $s1, 0x222C($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X222C);
    // 0x8024637C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80246380: bgez        $v1, L_8024638C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80246384: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8024638C;
    }
    // 0x80246384: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80246388: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
L_8024638C:
    // 0x8024638C: sra         $v0, $a0, 2
    ctx->r2 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80246390: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246394: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80246398: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8024639C: jal         0x80060D38
    // 0x802463A0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80060D38_3C138(rdram, ctx);
        goto after_3;
    // 0x802463A0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_3:
L_802463A4:
    // 0x802463A4: beq         $s1, $zero, L_802463B4
    if (ctx->r17 == 0) {
        // 0x802463A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802463B4;
    }
    // 0x802463A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802463AC: jal         0x800616FC
    // 0x802463B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x802463B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_802463B4:
    // 0x802463B4: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x802463B8: bne         $v0, $zero, L_80246440
    if (ctx->r2 != 0) {
        // 0x802463BC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80246440;
    }
    // 0x802463BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802463C0: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x802463C4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802463C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802463CC: beq         $v0, $zero, L_80246484
    if (ctx->r2 == 0) {
        // 0x802463D0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80246484;
    }
    // 0x802463D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802463D4: lh          $v0, 0x16($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X16);
    // 0x802463D8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x802463DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802463E0: bltzl       $v0, L_802463E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802463E4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802463E8;
    }
    goto skip_0;
    // 0x802463E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_802463E8:
    // 0x802463E8: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802463EC: beq         $v0, $zero, L_80246484
    if (ctx->r2 == 0) {
        // 0x802463F0: nop
    
            goto L_80246484;
    }
    // 0x802463F0: nop

    // 0x802463F4: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802463F8: bne         $v0, $zero, L_80246428
    if (ctx->r2 != 0) {
        // 0x802463FC: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80246428;
    }
    // 0x802463FC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80246400: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80246404: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80246408: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    // 0x8024640C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80246410: bne         $v0, $zero, L_80246428
    if (ctx->r2 != 0) {
        // 0x80246414: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80246428;
    }
    // 0x80246414: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80246418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024641C: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x80246420: j           L_8024642C
    // 0x80246424: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8024642C;
    // 0x80246424: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80246428:
    // 0x80246428: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_8024642C:
    // 0x8024642C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    // 0x80246430: jal         0x8002A33C
    // 0x80246434: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80246434: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_5:
    // 0x80246438: j           L_80246484
    // 0x8024643C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_80246484;
    // 0x8024643C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80246440:
    // 0x80246440: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80246444: bne         $v0, $zero, L_80246474
    if (ctx->r2 != 0) {
        // 0x80246448: andi        $v0, $v1, 0x7
        ctx->r2 = ctx->r3 & 0X7;
            goto L_80246474;
    }
    // 0x80246448: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x8024644C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80246450: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80246454: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246458: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024645C: lhu         $v0, 0x2214($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2214);
    // 0x80246460: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80246464: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80246468: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024646C: jal         0x80246FC8
    // 0x80246470: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_80246FC8_ovl10(rdram, ctx);
        goto after_6;
    // 0x80246470: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_6:
L_80246474:
    // 0x80246474: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80246478: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024647C: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
    // 0x80246480: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80246484:
    // 0x80246484: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x80246488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024648C: jal         0x8004DA90
    // 0x80246490: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x80246490: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80246494: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80246498: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8024649C: jal         0x8009A3B4
    // 0x802464A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802464A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802464A4: lhu         $s3, 0x56($s2)
    ctx->r19 = MEM_HU(ctx->r18, 0X56);
    // 0x802464A8: addiu       $a0, $s2, 0x54
    ctx->r4 = ADD32(ctx->r18, 0X54);
    // 0x802464AC: lw          $v0, 0xD0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD0);
    // 0x802464B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802464B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802464B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802464BC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802464C0: jal         0x80031600
    // 0x802464C4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_9;
    // 0x802464C4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    after_9:
    // 0x802464C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802464CC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802464D0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802464D4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802464D8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802464DC: jal         0x80031DA8
    // 0x802464E0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_10;
    // 0x802464E0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_10:
    // 0x802464E4: lh          $a0, 0x64($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X64);
    // 0x802464E8: lw          $v1, 0xD0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD0);
    // 0x802464EC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x802464F0: beq         $v0, $zero, L_80246500
    if (ctx->r2 == 0) {
        // 0x802464F4: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80246500;
    }
    // 0x802464F4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802464F8: j           L_80246504
    // 0x802464FC: sw          $v0, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r2;
        goto L_80246504;
    // 0x802464FC: sw          $v0, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r2;
L_80246500:
    // 0x80246500: sw          $zero, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = 0;
L_80246504:
    // 0x80246504: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80246508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024650C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80246510: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80246514: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    // 0x80246518: jal         0x80047284
    // 0x8024651C: sh          $s3, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r19;
    func_80047284_22684(rdram, ctx);
        goto after_11;
    // 0x8024651C: sh          $s3, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r19;
    after_11:
    // 0x80246520: lhu         $s3, 0x56($s2)
    ctx->r19 = MEM_HU(ctx->r18, 0X56);
    // 0x80246524: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80246528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024652C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80246530: jal         0x8009A3B4
    // 0x80246534: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80246534: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80246538: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8024653C: sll         $s0, $s3, 16
    ctx->r16 = S32(ctx->r19 << 16);
    // 0x80246540: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80246544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246548: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8024654C: jal         0x800324B4
    // 0x80246550: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_13;
    // 0x80246550: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    after_13:
    // 0x80246554: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80246558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024655C: jal         0x80032498
    // 0x80246560: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_14;
    // 0x80246560: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    after_14:
    // 0x80246564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80246568: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x8024656C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80246570: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80246574: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80246578: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x8024657C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80246580: addiu       $v0, $s2, 0xC0
    ctx->r2 = ADD32(ctx->r18, 0XC0);
    // 0x80246584: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80246588: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x8024658C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80246590: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80246594: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80246598: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024659C: jal         0x80051E18
    // 0x802465A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_15;
    // 0x802465A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_15:
    // 0x802465A4: sw          $zero, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = 0;
    // 0x802465A8: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802465AC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802465B0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802465B4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802465B8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802465BC: jr          $ra
    // 0x802465C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802465C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8023C5F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C5F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C5F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C5F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C5FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C600: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023C604: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C608: jal         0x8006033C
    // 0x8023C60C: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023C60C: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_0:
    // 0x8023C610: bne         $v0, $zero, L_8023C654
    if (ctx->r2 != 0) {
        // 0x8023C614: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_8023C654;
    }
    // 0x8023C614: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x8023C618: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023C61C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023C620: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023C624: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023C628: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023C62C: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x8023C630: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023C634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C638: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8023C63C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8023C640: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023C644: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023C648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C64C: j           L_8023C668
    // 0x8023C650: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8023C668;
    // 0x8023C650: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023C654:
    // 0x8023C654: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023C658: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C65C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x8023C660: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023C664: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C668:
    // 0x8023C668: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8023C66C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C670: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023C674: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C678: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C67C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C680: jr          $ra
    // 0x8023C684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C968_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C968: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023C96C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8023C970: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C974: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8023C978: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8023C97C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023C980: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023C984: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023C988: beq         $v0, $zero, L_8023CE7C
    if (ctx->r2 == 0) {
        // 0x8023C98C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8023CE7C;
    }
    // 0x8023C98C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023C990: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023C994: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C998: addu        $at, $at, $v0
    gpr jr_addend_8023C9A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C99C: lw          $v0, 0x2FA8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2FA8);
    // 0x8023C9A0: jr          $v0
    // 0x8023C9A4: nop

    switch (jr_addend_8023C9A0 >> 2) {
        case 0: goto L_8023C9A8; break;
        case 1: goto L_8023CA88; break;
        case 2: goto L_8023CB48; break;
        case 3: goto L_8023CC50; break;
        case 4: goto L_8023CCF8; break;
        case 5: goto L_8023CE70; break;
        default: switch_error(__func__, 0x8023C9A0, 0x80252FA8);
    }
    // 0x8023C9A4: nop

L_8023C9A8:
    // 0x8023C9A8: jal         0x8004F144
    // 0x8023C9AC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023C9AC: nop

    after_0:
    // 0x8023C9B0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023C9B4: beq         $s0, $zero, L_8023C9E0
    if (ctx->r16 == 0) {
        // 0x8023C9B8: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8023C9E0;
    }
    // 0x8023C9B8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023C9BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023C9C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023C9C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023C9C8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023C9CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023C9D0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023C9D4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023C9D8: jal         0x8009A3B4
    // 0x8023C9DC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023C9DC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
L_8023C9E0:
    // 0x8023C9E0: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8023C9E4: jal         0x8002A33C
    // 0x8023C9E8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023C9E8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8023C9EC: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8023C9F0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C9F4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023C9F8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8023C9FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023CA00: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8023CA04: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023CA08: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8023CA0C: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
    // 0x8023CA10: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8023CA14: addiu       $a2, $zero, 0x3C00
    ctx->r6 = ADD32(0, 0X3C00);
    // 0x8023CA18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CA1C: jal         0x8004DC2C
    // 0x8023CA20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x8023CA20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8023CA24: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023CA28: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8023CA2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CA30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023CA34: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023CA38: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023CA3C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CA40: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8023CA44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CA48: jal         0x8004DD04
    // 0x8023CA4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x8023CA4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x8023CA50: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8023CA54: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x8023CA58: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8023CA5C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023CA60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023CA64: bltzl       $v0, L_8023CA6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023CA68: addiu       $v0, $v0, 0x3FF
        ctx->r2 = ADD32(ctx->r2, 0X3FF);
            goto L_8023CA6C;
    }
    goto skip_0;
    // 0x8023CA68: addiu       $v0, $v0, 0x3FF
    ctx->r2 = ADD32(ctx->r2, 0X3FF);
    skip_0:
L_8023CA6C:
    // 0x8023CA6C: jal         0x8023BE28
    // 0x8023CA70: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    func_8023BE28_ovl10(rdram, ctx);
        goto after_5;
    // 0x8023CA70: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    after_5:
    // 0x8023CA74: beq         $v0, $zero, L_8023CA80
    if (ctx->r2 == 0) {
        // 0x8023CA78: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8023CA80;
    }
    // 0x8023CA78: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023CA7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8023CA80:
    // 0x8023CA80: j           L_8023CE7C
    // 0x8023CA84: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_8023CE7C;
    // 0x8023CA84: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_8023CA88:
    // 0x8023CA88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CA8C: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8023CA90: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8023CA94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CA98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CA9C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023CAA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023CAA4: jal         0x8004DA90
    // 0x8023CAA8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023CAA8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_6:
    // 0x8023CAAC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CAB0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8023CAB4: addiu       $a2, $zero, 0x3C00
    ctx->r6 = ADD32(0, 0X3C00);
    // 0x8023CAB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CABC: jal         0x8004DC2C
    // 0x8023CAC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_7;
    // 0x8023CAC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x8023CAC4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023CAC8: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8023CACC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CAD0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023CAD4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023CAD8: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023CADC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CAE0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8023CAE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CAE8: jal         0x8004DD04
    // 0x8023CAEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8023CAEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_8:
    // 0x8023CAF0: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8023CAF4: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x8023CAF8: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8023CAFC: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023CB00: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023CB04: bltzl       $v0, L_8023CB0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023CB08: addiu       $v0, $v0, 0x3FF
        ctx->r2 = ADD32(ctx->r2, 0X3FF);
            goto L_8023CB0C;
    }
    goto skip_1;
    // 0x8023CB08: addiu       $v0, $v0, 0x3FF
    ctx->r2 = ADD32(ctx->r2, 0X3FF);
    skip_1:
L_8023CB0C:
    // 0x8023CB0C: jal         0x8023BE28
    // 0x8023CB10: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    func_8023BE28_ovl10(rdram, ctx);
        goto after_9;
    // 0x8023CB10: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    after_9:
    // 0x8023CB14: bne         $v0, $zero, L_8023CB34
    if (ctx->r2 != 0) {
        // 0x8023CB18: nop
    
            goto L_8023CB34;
    }
    // 0x8023CB18: nop

    // 0x8023CB1C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023CB20: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8023CB24: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x8023CB28: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8023CB2C: j           L_8023CE54
    // 0x8023CB30: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8023CE54;
    // 0x8023CB30: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8023CB34:
    // 0x8023CB34: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8023CB38: blez        $v0, L_8023CC34
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023CB3C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023CC34;
    }
    // 0x8023CB3C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023CB40: j           L_8023CC48
    // 0x8023CB44: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
        goto L_8023CC48;
    // 0x8023CB44: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8023CB48:
    // 0x8023CB48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CB4C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023CB50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CB54: jal         0x8004DA90
    // 0x8023CB58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_10;
    // 0x8023CB58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8023CB5C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CB60: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8023CB64: addiu       $a2, $zero, 0x3C00
    ctx->r6 = ADD32(0, 0X3C00);
    // 0x8023CB68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CB6C: jal         0x8004DC2C
    // 0x8023CB70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_11;
    // 0x8023CB70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8023CB74: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023CB78: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8023CB7C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CB80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CB84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023CB88: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023CB8C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023CB90: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8023CB94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023CB98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CB9C: jal         0x8004DD04
    // 0x8023CBA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x8023CBA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_12:
    // 0x8023CBA4: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8023CBA8: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x8023CBAC: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8023CBB0: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8023CBB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023CBB8: bltzl       $v0, L_8023CBC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023CBBC: addiu       $v0, $v0, 0x3FF
        ctx->r2 = ADD32(ctx->r2, 0X3FF);
            goto L_8023CBC0;
    }
    goto skip_2;
    // 0x8023CBBC: addiu       $v0, $v0, 0x3FF
    ctx->r2 = ADD32(ctx->r2, 0X3FF);
    skip_2:
L_8023CBC0:
    // 0x8023CBC0: jal         0x8023BE28
    // 0x8023CBC4: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    func_8023BE28_ovl10(rdram, ctx);
        goto after_13;
    // 0x8023CBC4: srl         $a2, $v0, 10
    ctx->r6 = S32(U32(ctx->r2) >> 10);
    after_13:
    // 0x8023CBC8: bne         $v0, $zero, L_8023CC08
    if (ctx->r2 != 0) {
        // 0x8023CBCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023CC08;
    }
    // 0x8023CBCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CBD4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023CBD8: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    // 0x8023CBDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CBE0: jal         0x8003E964
    // 0x8023CBE4: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003E964_19D64(rdram, ctx);
        goto after_14;
    // 0x8023CBE4: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_14:
    // 0x8023CBE8: slti        $v0, $v0, -0x27F
    ctx->r2 = SIGNED(ctx->r2) < -0X27F ? 1 : 0;
    // 0x8023CBEC: bne         $v0, $zero, L_8023CC28
    if (ctx->r2 != 0) {
        // 0x8023CBF0: nop
    
            goto L_8023CC28;
    }
    // 0x8023CBF0: nop

    // 0x8023CBF4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023CBF8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023CBFC: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x8023CC00: j           L_8023CE54
    // 0x8023CC04: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8023CE54;
    // 0x8023CC04: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8023CC08:
    // 0x8023CC08: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8023CC0C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8023CC10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CC18: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023CC1C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023CC20: jal         0x8004DA90
    // 0x8023CC24: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_15;
    // 0x8023CC24: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_15:
L_8023CC28:
    // 0x8023CC28: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x8023CC2C: bgtz        $v0, L_8023CC44
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023CC30: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023CC44;
    }
    // 0x8023CC30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8023CC34:
    // 0x8023CC34: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023CC38: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x8023CC3C: j           L_8023CE7C
    // 0x8023CC40: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023CE7C;
    // 0x8023CC40: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023CC44:
    // 0x8023CC44: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8023CC48:
    // 0x8023CC48: j           L_8023CE7C
    // 0x8023CC4C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8023CE7C;
    // 0x8023CC4C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8023CC50:
    // 0x8023CC50: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8023CC54: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023CC58: bne         $v1, $v0, L_8023CC70
    if (ctx->r3 != ctx->r2) {
        // 0x8023CC5C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8023CC70;
    }
    // 0x8023CC5C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023CC60: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023CC64: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8023CC68: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8023CC6C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_8023CC70:
    // 0x8023CC70: bne         $v1, $v0, L_8023CC80
    if (ctx->r3 != ctx->r2) {
        // 0x8023CC74: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8023CC80;
    }
    // 0x8023CC74: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8023CC78: j           L_8023CC88
    // 0x8023CC7C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8023CC88;
    // 0x8023CC7C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8023CC80:
    // 0x8023CC80: bne         $v1, $v0, L_8023CC8C
    if (ctx->r3 != ctx->r2) {
        // 0x8023CC84: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023CC8C;
    }
    // 0x8023CC84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023CC88:
    // 0x8023CC88: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
L_8023CC8C:
    // 0x8023CC8C: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8023CC90: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8023CC94: beq         $v0, $zero, L_8023CCAC
    if (ctx->r2 == 0) {
        // 0x8023CC98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023CCAC;
    }
    // 0x8023CC98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CC9C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023CCA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CCA4: jal         0x8004DA90
    // 0x8023CCA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_16;
    // 0x8023CCA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_16:
L_8023CCAC:
    // 0x8023CCAC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023CCB0: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8023CCB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CCB8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023CCBC: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023CCC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CCC4: slti        $v1, $v1, -0xBF
    ctx->r3 = SIGNED(ctx->r3) < -0XBF ? 1 : 0;
    // 0x8023CCC8: beq         $v1, $zero, L_8023CCF0
    if (ctx->r3 == 0) {
        // 0x8023CCCC: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8023CCF0;
    }
    // 0x8023CCCC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023CCD0: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x8023CCD4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023CCD8: bnel        $v0, $zero, L_8023CE54
    if (ctx->r2 != 0) {
        // 0x8023CCDC: sh          $zero, 0x4($s2)
        MEM_H(0X4, ctx->r18) = 0;
            goto L_8023CE54;
    }
    goto skip_3;
    // 0x8023CCDC: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    skip_3:
    // 0x8023CCE0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8023CCE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CCE8: bne         $v1, $v0, L_8023CE7C
    if (ctx->r3 != ctx->r2) {
        // 0x8023CCEC: nop
    
            goto L_8023CE7C;
    }
    // 0x8023CCEC: nop

L_8023CCF0:
    // 0x8023CCF0: j           L_8023CE54
    // 0x8023CCF4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
        goto L_8023CE54;
    // 0x8023CCF4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
L_8023CCF8:
    // 0x8023CCF8: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023CCFC: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8023CD00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CD04: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023CD08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023CD0C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8023CD10: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8023CD14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023CD18: bne         $v1, $v0, L_8023CDC4
    if (ctx->r3 != ctx->r2) {
        // 0x8023CD1C: nop
    
            goto L_8023CDC4;
    }
    // 0x8023CD1C: nop

    // 0x8023CD20: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023CD24: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023CD28: jal         0x8004EEAC
    // 0x8023CD2C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_17;
    // 0x8023CD2C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_17:
    // 0x8023CD30: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023CD34: beq         $s0, $zero, L_8023CDB8
    if (ctx->r16 == 0) {
        // 0x8023CD38: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023CDB8;
    }
    // 0x8023CD38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023CD3C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023CD40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023CD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CD48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023CD4C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023CD50: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8023CD54: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023CD58: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8023CD5C: jal         0x8009A3B4
    // 0x8023CD60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8023CD60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_18:
    // 0x8023CD64: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8023CD68: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8023CD6C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8023CD70: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023CD74: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8023CD78: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x8023CD7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023CD80: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8023CD84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023CD88: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023CD8C: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8023CD90: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023CD94: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023CD98: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    // 0x8023CD9C: jal         0x8009A3B4
    // 0x8023CDA0: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023CDA0: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_19:
    // 0x8023CDA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CDA8: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8023CDAC: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8023CDB0: jal         0x8004DA90
    // 0x8023CDB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_20;
    // 0x8023CDB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_20:
L_8023CDB8:
    // 0x8023CDB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023CDBC: jal         0x8007A1B8
    // 0x8023CDC0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_21;
    // 0x8023CDC0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_21:
L_8023CDC4:
    // 0x8023CDC4: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8023CDC8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023CDCC: bne         $v0, $zero, L_8023CE44
    if (ctx->r2 != 0) {
        // 0x8023CDD0: nop
    
            goto L_8023CE44;
    }
    // 0x8023CDD0: nop

    // 0x8023CDD4: jal         0x8004F144
    // 0x8023CDD8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_22;
    // 0x8023CDD8: nop

    after_22:
    // 0x8023CDDC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023CDE0: beq         $s0, $zero, L_8023CE38
    if (ctx->r16 == 0) {
        // 0x8023CDE4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023CE38;
    }
    // 0x8023CDE4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023CDE8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023CDEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023CDF0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023CDF4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023CDF8: jal         0x800A3450
    // 0x8023CDFC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_23;
    // 0x8023CDFC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_23:
    // 0x8023CE00: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8023CE04: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023CE08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CE0C: jal         0x800A3450
    // 0x8023CE10: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_24;
    // 0x8023CE10: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_24:
    // 0x8023CE14: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8023CE18: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023CE1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CE20: jal         0x800A3450
    // 0x8023CE24: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_25;
    // 0x8023CE24: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    after_25:
    // 0x8023CE28: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8023CE2C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023CE30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CE34: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_8023CE38:
    // 0x8023CE38: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8023CE3C: jal         0x8002A33C
    // 0x8023CE40: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_26;
    // 0x8023CE40: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_26:
L_8023CE44:
    // 0x8023CE44: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8023CE48: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023CE4C: bne         $v1, $v0, L_8023CE64
    if (ctx->r3 != ctx->r2) {
        // 0x8023CE50: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023CE64;
    }
    // 0x8023CE50: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_8023CE54:
    // 0x8023CE54: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023CE58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CE5C: j           L_8023CE7C
    // 0x8023CE60: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023CE7C;
    // 0x8023CE60: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023CE64:
    // 0x8023CE64: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023CE68: j           L_8023CE7C
    // 0x8023CE6C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8023CE7C;
    // 0x8023CE6C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8023CE70:
    // 0x8023CE70: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023CE74: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023CE78: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8023CE7C:
    // 0x8023CE7C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023CE80: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8023CE84: beq         $v0, $zero, L_8023CEF0
    if (ctx->r2 == 0) {
        // 0x8023CE88: nop
    
            goto L_8023CEF0;
    }
    // 0x8023CE88: nop

    // 0x8023CE8C: jal         0x8004F144
    // 0x8023CE90: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_27;
    // 0x8023CE90: nop

    after_27:
    // 0x8023CE94: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023CE98: beq         $s0, $zero, L_8023CEF0
    if (ctx->r16 == 0) {
        // 0x8023CE9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023CEF0;
    }
    // 0x8023CE9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CEA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023CEA4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023CEA8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023CEAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023CEB0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023CEB4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023CEB8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023CEBC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023CEC0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8023CEC4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023CEC8: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023CECC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023CED0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8023CED4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023CED8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8023CEDC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8023CEE0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8023CEE4: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8023CEE8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023CEEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023CEF0:
    // 0x8023CEF0: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8023CEF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CEF8: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
    // 0x8023CEFC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8023CF00: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8023CF04: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023CF08: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023CF0C: jr          $ra
    // 0x8023CF10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023CF10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8024CE6C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CE6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024CE70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024CE74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024CE78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024CE7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CE80: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8024CE84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CE88: bne         $v1, $v0, L_8024CF70
    if (ctx->r3 != ctx->r2) {
        // 0x8024CE8C: nop
    
            goto L_8024CF70;
    }
    // 0x8024CE8C: nop

    // 0x8024CE90: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CE94: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024CE98: bne         $v0, $zero, L_8024CF58
    if (ctx->r2 != 0) {
        // 0x8024CE9C: nop
    
            goto L_8024CF58;
    }
    // 0x8024CE9C: nop

    // 0x8024CEA0: jal         0x8004F144
    // 0x8024CEA4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024CEA4: nop

    after_0:
    // 0x8024CEA8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024CEAC: beq         $s0, $zero, L_8024CF58
    if (ctx->r16 == 0) {
        // 0x8024CEB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024CF58;
    }
    // 0x8024CEB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024CEB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024CEB8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024CEBC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024CEC0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024CEC4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8024CEC8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CED0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024CED4: jal         0x800A3450
    // 0x8024CED8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CED8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024CEDC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8024CEE0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8024CEE4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CEE8: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8024CEEC: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8024CEF0: jal         0x800A3450
    // 0x8024CEF4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CEF4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x8024CEF8: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024CEFC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8024CF00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CF04: jal         0x800A3450
    // 0x8024CF08: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024CF08: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x8024CF0C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x8024CF10: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8024CF14: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x8024CF18: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8024CF1C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CF20: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8024CF24: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024CF28: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x8024CF2C: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x8024CF30: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8024CF34: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024CF38: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x8024CF3C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8024CF40: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8024CF44: jal         0x800A3450
    // 0x8024CF48: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8024CF48: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x8024CF4C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8024CF50: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x8024CF54: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024CF58:
    // 0x8024CF58: jal         0x800A3450
    // 0x8024CF5C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8024CF5C: nop

    after_5:
    // 0x8024CF60: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CF64: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024CF68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CF6C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8024CF70:
    // 0x8024CF70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024CF74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024CF78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CF7C: jr          $ra
    // 0x8024CF80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024CF80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232B20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B20: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80232B24: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80232B28: bne         $v0, $zero, L_80232B60
    if (ctx->r2 != 0) {
        // 0x80232B2C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80232B60;
    }
    // 0x80232B2C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80232B30: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80232B34: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80232B38: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80232B3C: beq         $v1, $zero, L_80232B4C
    if (ctx->r3 == 0) {
        // 0x80232B40: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_80232B4C;
    }
    // 0x80232B40: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80232B44: j           L_80232B50
    // 0x80232B48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80232B50;
    // 0x80232B48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80232B4C:
    // 0x80232B4C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80232B50:
    // 0x80232B50: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80232B54: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80232B58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232B5C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80232B60:
    // 0x80232B60: jr          $ra
    // 0x80232B64: nop

    TRACE_RETURN()
    return;
    // 0x80232B64: nop

;}
RECOMP_FUNC void func_802267F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267F0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802267F4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802267F8: bne         $v0, $zero, L_80226808
    if (ctx->r2 != 0) {
        // 0x802267FC: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80226808;
    }
    // 0x802267FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226800: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80226804: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
L_80226808:
    // 0x80226808: jr          $ra
    // 0x8022680C: nop

    TRACE_RETURN()
    return;
    // 0x8022680C: nop

;}
RECOMP_FUNC void func_80235D48_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235D4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235D50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235D58: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80235D5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80235D60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80235D64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235D68: lbu         $s2, 0xA($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0XA);
    // 0x80235D6C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80235D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D74: beq         $s2, $v0, L_80235DD4
    if (ctx->r18 == ctx->r2) {
        // 0x80235D78: sw          $a1, 0x37C($s0)
        MEM_W(0X37C, ctx->r16) = ctx->r5;
            goto L_80235DD4;
    }
    // 0x80235D78: sw          $a1, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r5;
    // 0x80235D7C: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80235D80: beql        $v0, $zero, L_80235D98
    if (ctx->r2 == 0) {
        // 0x80235D84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235D98;
    }
    goto skip_0;
    // 0x80235D84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235D88: beq         $s2, $zero, L_80235DB0
    if (ctx->r18 == 0) {
        // 0x80235D8C: addiu       $a0, $s0, 0x34C
        ctx->r4 = ADD32(ctx->r16, 0X34C);
            goto L_80235DB0;
    }
    // 0x80235D8C: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80235D90: j           L_80236084
    // 0x80235D94: nop

        goto L_80236084;
    // 0x80235D94: nop

L_80235D98:
    // 0x80235D98: beq         $s2, $v0, L_80235E1C
    if (ctx->r18 == ctx->r2) {
        // 0x80235D9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235E1C;
    }
    // 0x80235D9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235DA0: beq         $s2, $v0, L_80235F18
    if (ctx->r18 == ctx->r2) {
        // 0x80235DA4: addiu       $a1, $a1, 0x3E8
        ctx->r5 = ADD32(ctx->r5, 0X3E8);
            goto L_80235F18;
    }
    // 0x80235DA4: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    // 0x80235DA8: j           L_80236084
    // 0x80235DAC: nop

        goto L_80236084;
    // 0x80235DAC: nop

L_80235DB0:
    // 0x80235DB0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80235DB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80235DB8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80235DBC: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80235DC0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80235DC4: jal         0x800540B4
    // 0x80235DC8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x80235DC8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235DCC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80235DD0: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
L_80235DD4:
    // 0x80235DD4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235DD8: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x80235DDC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80235DE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80235DE4: jal         0x8004F820
    // 0x80235DE8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80235DE8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80235DEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235DF0: bgezl       $v0, L_80235E08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235DF4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235E08;
    }
    goto skip_1;
    // 0x80235DF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_1:
    // 0x80235DF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235DFC: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80235E00: j           L_80235E10
    // 0x80235E04: addiu       $v0, $s1, 0x40
    ctx->r2 = ADD32(ctx->r17, 0X40);
        goto L_80235E10;
    // 0x80235E04: addiu       $v0, $s1, 0x40
    ctx->r2 = ADD32(ctx->r17, 0X40);
L_80235E08:
    // 0x80235E08: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80235E0C: addiu       $v0, $s1, 0x42
    ctx->r2 = ADD32(ctx->r17, 0X42);
L_80235E10:
    // 0x80235E10: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80235E14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235E18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80235E1C:
    // 0x80235E1C: lh          $a0, 0x3A($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X3A);
    // 0x80235E20: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80235E24: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80235E28: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x80235E2C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235E30: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235E34: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80235E38: jal         0x8004F820
    // 0x80235E3C: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80235E3C: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_2:
    // 0x80235E40: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80235E44: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80235E48: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80235E4C: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80235E50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235E54: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80235E58: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x80235E5C: lh          $a0, 0x3A($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X3A);
    // 0x80235E60: lw          $a1, 0x54($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X54);
    // 0x80235E64: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x80235E68: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235E6C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235E70: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80235E74: jal         0x8004F978
    // 0x80235E78: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F978_2AD78(rdram, ctx);
        goto after_3;
    // 0x80235E78: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_3:
    // 0x80235E7C: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x80235E80: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80235E84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80235E88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80235E8C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235E90: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80235E94: lh          $v0, 0x38($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X38);
    // 0x80235E98: bne         $v0, $zero, L_80236084
    if (ctx->r2 != 0) {
        // 0x80235E9C: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80236084;
    }
    // 0x80235E9C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80235EA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235EA4: bltzl       $v0, L_80235EC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235EA8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235EC0;
    }
    goto skip_2;
    // 0x80235EA8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x80235EAC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80235EB0: bne         $v0, $zero, L_80235ECC
    if (ctx->r2 != 0) {
        // 0x80235EB4: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80235ECC;
    }
    // 0x80235EB4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80235EB8: j           L_80236084
    // 0x80235EBC: nop

        goto L_80236084;
    // 0x80235EBC: nop

L_80235EC0:
    // 0x80235EC0: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80235EC4: beq         $v0, $zero, L_80236084
    if (ctx->r2 == 0) {
        // 0x80235EC8: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80236084;
    }
    // 0x80235EC8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80235ECC:
    // 0x80235ECC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235ED0: bltzl       $v0, L_80235EEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235ED4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235EEC;
    }
    goto skip_3;
    // 0x80235ED4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
    // 0x80235ED8: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80235EDC: beq         $v0, $zero, L_80236084
    if (ctx->r2 == 0) {
        // 0x80235EE0: nop
    
            goto L_80236084;
    }
    // 0x80235EE0: nop

    // 0x80235EE4: j           L_80235EF8
    // 0x80235EE8: nop

        goto L_80235EF8;
    // 0x80235EE8: nop

L_80235EEC:
    // 0x80235EEC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80235EF0: beq         $v0, $zero, L_80236084
    if (ctx->r2 == 0) {
        // 0x80235EF4: nop
    
            goto L_80236084;
    }
    // 0x80235EF4: nop

L_80235EF8:
    // 0x80235EF8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235EFC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235F00: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80235F04: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235F08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F0C: lbu         $v0, 0x1268($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1268);
    // 0x80235F10: j           L_80236084
    // 0x80235F14: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80236084;
    // 0x80235F14: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80235F18:
    // 0x80235F18: lw          $v0, 0x364($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X364);
    // 0x80235F1C: lh          $a0, 0x362($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X362);
    // 0x80235F20: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80235F24: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x80235F28: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235F2C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235F30: jal         0x8004F978
    // 0x80235F34: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_8004F978_2AD78(rdram, ctx);
        goto after_4;
    // 0x80235F34: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_4:
    // 0x80235F38: lw          $a0, 0x364($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X364);
    // 0x80235F3C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80235F40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235F44: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235F48: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80235F4C: lh          $v0, 0x360($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X360);
    // 0x80235F50: bne         $v0, $zero, L_8023604C
    if (ctx->r2 != 0) {
        // 0x80235F54: nop
    
            goto L_8023604C;
    }
    // 0x80235F54: nop

    // 0x80235F58: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235F5C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80235F60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235F68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F6C: lw          $v0, 0x1258($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1258);
    // 0x80235F70: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80235F74: beq         $v1, $zero, L_8023604C
    if (ctx->r3 == 0) {
        // 0x80235F78: nop
    
            goto L_8023604C;
    }
    // 0x80235F78: nop

    // 0x80235F7C: jal         0x8004EFE4
    // 0x80235F80: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_5;
    // 0x80235F80: nop

    after_5:
    // 0x80235F84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235F88: beq         $v1, $zero, L_8023604C
    if (ctx->r3 == 0) {
        // 0x80235F8C: sw          $v1, 0x378($s0)
        MEM_W(0X378, ctx->r16) = ctx->r3;
            goto L_8023604C;
    }
    // 0x80235F8C: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
    // 0x80235F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235F94: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235F98: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
    // 0x80235F9C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80235FA0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80235FA4: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x80235FA8: bne         $v0, $s2, L_80235FBC
    if (ctx->r2 != ctx->r18) {
        // 0x80235FAC: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80235FBC;
    }
    // 0x80235FAC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80235FB0: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
    // 0x80235FB4: j           L_80235FC0
    // 0x80235FB8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80235FC0;
    // 0x80235FB8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80235FBC:
    // 0x80235FBC: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
L_80235FC0:
    // 0x80235FC0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80235FC4: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80235FC8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80235FCC: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80235FD0: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x80235FD4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80235FD8: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x80235FDC: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80235FE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235FE4: sh          $v0, 0x66($v1)
    MEM_H(0X66, ctx->r3) = ctx->r2;
    // 0x80235FE8: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x80235FEC: lh          $a1, 0x3A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X3A);
    // 0x80235FF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235FF4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235FF8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80235FFC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80236000: jal         0x8009A3B4
    // 0x80236004: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80236004: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_6:
    // 0x80236008: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x8023600C: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80236010: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236014: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80236018: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x8023601C: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80236020: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236024: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80236028: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x8023602C: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80236030: addiu       $a0, $zero, 0xE3
    ctx->r4 = ADD32(0, 0XE3);
    // 0x80236034: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236038: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023603C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80236040: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236044: jal         0x8002A33C
    // 0x80236048: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80236048: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    after_7:
L_8023604C:
    // 0x8023604C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80236050: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236054: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80236058: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023605C: bgez        $v0, L_80236084
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236084;
    }
    // 0x80236060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236064: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236068: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023606C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80236070: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80236074: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80236078: bne         $v0, $zero, L_80236084
    if (ctx->r2 != 0) {
        // 0x8023607C: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80236084;
    }
    // 0x8023607C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80236080: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80236084:
    // 0x80236084: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80236088: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8023608C: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x80236090: nop
    
            goto L_80236220;
    }
    // 0x80236090: nop

    // 0x80236094: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236098: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023609C: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x802360A0: nop
    
            goto L_80236220;
    }
    // 0x802360A0: nop

    // 0x802360A4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x802360A8: bne         $v0, $zero, L_8023622C
    if (ctx->r2 != 0) {
        // 0x802360AC: nop
    
            goto L_8023622C;
    }
    // 0x802360AC: nop

    // 0x802360B0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802360B4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802360B8: beq         $v0, $zero, L_80236220
    if (ctx->r2 == 0) {
        // 0x802360BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80236220;
    }
    // 0x802360BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802360C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802360C4: addu        $at, $at, $v0
    gpr jr_addend_802360CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802360C8: lw          $v0, 0x2F18($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F18);
    // 0x802360CC: jr          $v0
    // 0x802360D0: nop

    switch (jr_addend_802360CC >> 2) {
        case 0: goto L_802360D4; break;
        case 1: goto L_8023615C; break;
        case 2: goto L_80236180; break;
        case 3: goto L_802361B4; break;
        case 4: goto L_802361E0; break;
        default: switch_error(__func__, 0x802360CC, 0x80252F18);
    }
    // 0x802360D0: nop

L_802360D4:
    // 0x802360D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802360D8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802360DC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802360E0: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x802360E4: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80236220;
    }
    // 0x802360E4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802360E8: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802360EC: lw          $a3, 0x54($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X54);
    // 0x802360F0: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x802360F4: lh          $a1, 0x56($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X56);
    // 0x802360F8: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x802360FC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80236100: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80236104: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236108: jal         0x8004FAEC
    // 0x8023610C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8023610C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x80236110: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x80236114: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80236220;
    }
    // 0x80236114: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80236118: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023611C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80236120: ori         $v0, $v0, 0x88
    ctx->r2 = ctx->r2 | 0X88;
    // 0x80236124: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236128: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x8023612C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80236130: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236134: jal         0x8009A3B4
    // 0x80236138: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80236138: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    after_9:
    // 0x8023613C: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80236140: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80236144: addiu       $v0, $v0, -0xD0
    ctx->r2 = ADD32(ctx->r2, -0XD0);
    // 0x80236148: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023614C: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80236150: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80236154: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236158: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
L_8023615C:
    // 0x8023615C: addiu       $a0, $zero, 0xDF
    ctx->r4 = ADD32(0, 0XDF);
    // 0x80236160: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236164: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236168: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023616C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236170: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236178: jal         0x8002A33C
    // 0x8023617C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023617C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_10:
L_80236180:
    // 0x80236180: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236184: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236188: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023618C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236190: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x80236194: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236220;
    }
    // 0x80236194: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236198: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023619C: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802361A0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802361A4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802361A8: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802361AC: j           L_80236220
    // 0x802361B0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
        goto L_80236220;
    // 0x802361B0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_802361B4:
    // 0x802361B4: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802361B8: lb          $v1, 0xD($v0)
    ctx->r3 = MEM_B(ctx->r2, 0XD);
    // 0x802361BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802361C0: bne         $v1, $v0, L_80236220
    if (ctx->r3 != ctx->r2) {
        // 0x802361C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236220;
    }
    // 0x802361C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802361C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802361CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802361D0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802361D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802361D8: j           L_80236220
    // 0x802361DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80236220;
    // 0x802361DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802361E0:
    // 0x802361E0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802361E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802361E8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802361EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802361F0: bne         $v0, $zero, L_80236220
    if (ctx->r2 != 0) {
        // 0x802361F4: nop
    
            goto L_80236220;
    }
    // 0x802361F4: nop

    // 0x802361F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802361FC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80236200: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80236204: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80236208: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023620C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80236210: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80236214: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236218: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8023621C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80236220:
    // 0x80236220: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80236224: beq         $v0, $zero, L_80236238
    if (ctx->r2 == 0) {
        // 0x80236228: nop
    
            goto L_80236238;
    }
    // 0x80236228: nop

L_8023622C:
    // 0x8023622C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80236230: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236234: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_80236238:
    // 0x80236238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023623C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236240: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236248: jr          $ra
    // 0x8023624C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023624C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023AEB0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AEB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AEB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AEC0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023AEC4: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8023AEC8: sltiu       $v0, $v0, 0xAA
    ctx->r2 = ctx->r2 < 0XAA ? 1 : 0;
    // 0x8023AECC: bne         $v0, $zero, L_8023B070
    if (ctx->r2 != 0) {
        // 0x8023AED0: sb          $v1, 0xF($s0)
        MEM_B(0XF, ctx->r16) = ctx->r3;
            goto L_8023B070;
    }
    // 0x8023AED0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023AED4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023AED8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023AEDC: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x8023AEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AEE4: beq         $v1, $v0, L_8023AFBC
    if (ctx->r3 == ctx->r2) {
        // 0x8023AEE8: sb          $a0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r4;
            goto L_8023AFBC;
    }
    // 0x8023AEE8: sb          $a0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r4;
    // 0x8023AEEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AEF0: beql        $v0, $zero, L_8023AF08
    if (ctx->r2 == 0) {
        // 0x8023AEF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AF08;
    }
    goto skip_0;
    // 0x8023AEF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AEF8: beq         $v1, $zero, L_8023AF20
    if (ctx->r3 == 0) {
        // 0x8023AEFC: nop
    
            goto L_8023AF20;
    }
    // 0x8023AEFC: nop

    // 0x8023AF00: j           L_8023B070
    // 0x8023AF04: nop

        goto L_8023B070;
    // 0x8023AF04: nop

L_8023AF08:
    // 0x8023AF08: beq         $v1, $v0, L_8023AFE0
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AFE0;
    }
    // 0x8023AF0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AF10: beq         $v1, $v0, L_8023B028
    if (ctx->r3 == ctx->r2) {
        // 0x8023AF14: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_8023B028;
    }
    // 0x8023AF14: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x8023AF18: j           L_8023B070
    // 0x8023AF1C: nop

        goto L_8023B070;
    // 0x8023AF1C: nop

L_8023AF20:
    // 0x8023AF20: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023AF24: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023AF28: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023AF2C: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8023AF30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023AF34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AF38: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023AF3C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023AF40: bne         $a1, $v0, L_8023AF7C
    if (ctx->r5 != ctx->r2) {
        // 0x8023AF44: sh          $v1, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r3;
            goto L_8023AF7C;
    }
    // 0x8023AF44: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8023AF48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023AF4C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023AF50: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023AF54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AF58: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023AF5C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023AF60: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023AF64: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023AF68: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023AF6C: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023AF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AF74: jal         0x80050294
    // 0x8023AF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023AF78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_8023AF7C:
    // 0x8023AF7C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023AF80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AF84: bne         $v1, $v0, L_8023AFA0
    if (ctx->r3 != ctx->r2) {
        // 0x8023AF88: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023AFA0;
    }
    // 0x8023AF88: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023AF8C: addiu       $v0, $zero, -0x24
    ctx->r2 = ADD32(0, -0X24);
    // 0x8023AF90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023AF94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023AF98: j           L_8023B070
    // 0x8023AF9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
        goto L_8023B070;
    // 0x8023AF9C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8023AFA0:
    // 0x8023AFA0: bne         $v1, $v0, L_8023B070
    if (ctx->r3 != ctx->r2) {
        // 0x8023AFA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B070;
    }
    // 0x8023AFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AFA8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023AFAC: jal         0x8003E934
    // 0x8023AFB0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023AFB0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_1:
    // 0x8023AFB4: j           L_8023B070
    // 0x8023AFB8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
        goto L_8023B070;
    // 0x8023AFB8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8023AFBC:
    // 0x8023AFBC: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x8023AFC0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023AFC4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8023AFC8: bne         $v0, $v1, L_8023B070
    if (ctx->r2 != ctx->r3) {
        // 0x8023AFCC: addiu       $v0, $zero, 0x83
        ctx->r2 = ADD32(0, 0X83);
            goto L_8023B070;
    }
    // 0x8023AFCC: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023AFD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AFD4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023AFD8: j           L_8023AFF4
    // 0x8023AFDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_8023AFF4;
    // 0x8023AFDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8023AFE0:
    // 0x8023AFE0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x8023AFE4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023AFE8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8023AFEC: bne         $v0, $v1, L_8023B070
    if (ctx->r2 != ctx->r3) {
        // 0x8023AFF0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023B070;
    }
    // 0x8023AFF0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8023AFF4:
    // 0x8023AFF4: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8023AFF8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023AFFC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8023B000: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023B004: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023B008: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023B00C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023B010: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023B014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B018: jal         0x80050294
    // 0x8023B01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023B01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023B020: j           L_8023B070
    // 0x8023B024: nop

        goto L_8023B070;
    // 0x8023B024: nop

L_8023B028:
    // 0x8023B028: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023B02C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023B030: bne         $v0, $v1, L_8023B070
    if (ctx->r2 != ctx->r3) {
        // 0x8023B034: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023B070;
    }
    // 0x8023B034: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023B038: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023B03C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023B040: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023B044: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023B048: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023B04C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023B050: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023B054: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023B058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B05C: jal         0x80050294
    // 0x8023B060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023B060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8023B064: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B06C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B070:
    // 0x8023B070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B074: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B078: jr          $ra
    // 0x8023B07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239414_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239418: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023941C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239420: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x80239424: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x80239428: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8023942C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239430: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80239434: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80239438: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8023943C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80239440: bne         $v1, $zero, L_80239454
    if (ctx->r3 != 0) {
        // 0x80239444: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_80239454;
    }
    // 0x80239444: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80239448: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023944C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80239450: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80239454:
    // 0x80239454: jal         0x80239558
    // 0x80239458: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80239558_ovl10(rdram, ctx);
        goto after_0;
    // 0x80239458: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023945C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239460: jr          $ra
    // 0x80239464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247E4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80247E50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80247E54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80247E58: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80247E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247E60: beq         $v1, $v0, L_80247ECC
    if (ctx->r3 == ctx->r2) {
        // 0x80247E64: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80247ECC;
    }
    // 0x80247E64: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80247E68: beql        $v0, $zero, L_80247E80
    if (ctx->r2 == 0) {
        // 0x80247E6C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80247E80;
    }
    goto skip_0;
    // 0x80247E6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80247E70: beq         $v1, $zero, L_80247E90
    if (ctx->r3 == 0) {
        // 0x80247E74: addiu       $s0, $a0, 0x18
        ctx->r16 = ADD32(ctx->r4, 0X18);
            goto L_80247E90;
    }
    // 0x80247E74: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
    // 0x80247E78: j           L_80247F2C
    // 0x80247E7C: nop

        goto L_80247F2C;
    // 0x80247E7C: nop

L_80247E80:
    // 0x80247E80: beq         $v1, $v0, L_80247EEC
    if (ctx->r3 == ctx->r2) {
        // 0x80247E84: addiu       $s0, $a0, 0x18
        ctx->r16 = ADD32(ctx->r4, 0X18);
            goto L_80247EEC;
    }
    // 0x80247E84: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
    // 0x80247E88: j           L_80247F2C
    // 0x80247E8C: nop

        goto L_80247F2C;
    // 0x80247E8C: nop

L_80247E90:
    // 0x80247E90: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80247E94: beq         $v0, $zero, L_80247EC0
    if (ctx->r2 == 0) {
        // 0x80247E98: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80247EC0;
    }
    // 0x80247E98: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80247E9C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80247EA0: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80247EA4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80247EA8: lhu         $v0, 0x3560($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3560);
    // 0x80247EAC: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80247EB0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247EB4: sh          $v0, 0x3560($at)
    MEM_H(0X3560, ctx->r1) = ctx->r2;
    // 0x80247EB8: j           L_80247F2C
    // 0x80247EBC: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
        goto L_80247F2C;
    // 0x80247EBC: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
L_80247EC0:
    // 0x80247EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247EC4: j           L_80247F28
    // 0x80247EC8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80247F28;
    // 0x80247EC8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80247ECC:
    // 0x80247ECC: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x80247ED0: beq         $v0, $zero, L_80247F28
    if (ctx->r2 == 0) {
        // 0x80247ED4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80247F28;
    }
    // 0x80247ED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80247ED8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80247EDC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80247EE0: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80247EE4: j           L_80247F28
    // 0x80247EE8: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
        goto L_80247F28;
    // 0x80247EE8: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_80247EEC:
    // 0x80247EEC: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80247EF0: beq         $v0, $zero, L_80247F1C
    if (ctx->r2 == 0) {
        // 0x80247EF4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80247F1C;
    }
    // 0x80247EF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80247EF8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80247EFC: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80247F00: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80247F04: lhu         $v0, 0x3560($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3560);
    // 0x80247F08: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80247F0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247F10: sh          $v0, 0x3560($at)
    MEM_H(0X3560, ctx->r1) = ctx->r2;
    // 0x80247F14: j           L_80247F2C
    // 0x80247F18: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
        goto L_80247F2C;
    // 0x80247F18: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
L_80247F1C:
    // 0x80247F1C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80247F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247F24: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80247F28:
    // 0x80247F28: addiu       $s0, $a0, 0x18
    ctx->r16 = ADD32(ctx->r4, 0X18);
L_80247F2C:
    // 0x80247F2C: jal         0x8002C654
    // 0x80247F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80247F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80247F34: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80247F38: lh          $a0, 0x3560($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X3560);
    // 0x80247F3C: jal         0x800317C0
    // 0x80247F40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_1;
    // 0x80247F40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80247F44: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80247F48: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    // 0x80247F4C: jal         0x80031DA8
    // 0x80247F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80247F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80247F54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80247F58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80247F5C: jr          $ra
    // 0x80247F60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80247F60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226314_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226318: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022631C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80226320: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226324: beq         $v1, $v0, L_8022633C
    if (ctx->r3 == ctx->r2) {
        // 0x80226328: nop
    
            goto L_8022633C;
    }
    // 0x80226328: nop

    // 0x8022632C: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x80226330: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226334: jalr        $v0
    // 0x80226338: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226338: nop

    after_0:
L_8022633C:
    // 0x8022633C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226340: jr          $ra
    // 0x80226344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
