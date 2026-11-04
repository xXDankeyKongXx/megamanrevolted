#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802277F8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227800: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227808: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022780C: bgez        $v0, L_80227840
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227810: nop
    
            goto L_80227840;
    }
    // 0x80227810: nop

    // 0x80227814: jal         0x80227F28
    // 0x80227818: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_0;
    // 0x80227818: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022781C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227820: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80227824: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80227828: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022782C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80227830: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80227834: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227838: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022783C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80227840:
    // 0x80227840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227844: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227848: jr          $ra
    // 0x8022784C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022784C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226510_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022651C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226520: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80226524: addiu       $s1, $s1, -0x67FC
    ctx->r17 = ADD32(ctx->r17, -0X67FC);
    // 0x80226528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022652C: jal         0x800A3450
    // 0x80226530: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226530: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80226534: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226538: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022653C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226540: lbu         $v1, -0x680C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X680C);
    // 0x80226544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226548: beq         $v1, $v0, L_802265E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022654C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802265E8;
    }
    // 0x8022654C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226550: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226554: beql        $v0, $zero, L_8022656C
    if (ctx->r2 == 0) {
        // 0x80226558: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022656C;
    }
    goto skip_0;
    // 0x80226558: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022655C: beq         $v1, $zero, L_8022657C
    if (ctx->r3 == 0) {
        // 0x80226560: nop
    
            goto L_8022657C;
    }
    // 0x80226560: nop

    // 0x80226564: j           L_80226634
    // 0x80226568: nop

        goto L_80226634;
    // 0x80226568: nop

L_8022656C:
    // 0x8022656C: beq         $v1, $v0, L_80226608
    if (ctx->r3 == ctx->r2) {
        // 0x80226570: nop
    
            goto L_80226608;
    }
    // 0x80226570: nop

    // 0x80226574: j           L_80226634
    // 0x80226578: nop

        goto L_80226634;
    // 0x80226578: nop

L_8022657C:
    // 0x8022657C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80226580: bne         $v0, $zero, L_80226594
    if (ctx->r2 != 0) {
        // 0x80226584: nop
    
            goto L_80226594;
    }
    // 0x80226584: nop

    // 0x80226588: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022658C: j           L_8022659C
    // 0x80226590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022659C;
    // 0x80226590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226594:
    // 0x80226594: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226598: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022659C:
    // 0x8022659C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802265A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802265A4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802265A8: beq         $v0, $zero, L_802265C4
    if (ctx->r2 == 0) {
        // 0x802265AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802265C4;
    }
    // 0x802265AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265B0: jal         0x80227F78
    // 0x802265B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80227F78_ovl27(rdram, ctx);
        goto after_1;
    // 0x802265B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802265B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802265BC: j           L_802265D8
    // 0x802265C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802265D8;
    // 0x802265C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802265C4:
    // 0x802265C4: jal         0x80227F78
    // 0x802265C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227F78_ovl27(rdram, ctx);
        goto after_2;
    // 0x802265C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802265CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802265D0: jal         0x80227F38
    // 0x802265D4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80227F38_ovl27(rdram, ctx);
        goto after_3;
    // 0x802265D4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_802265D8:
    // 0x802265D8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802265DC: addiu       $s1, $s1, -0x67FC
    ctx->r17 = ADD32(ctx->r17, -0X67FC);
    // 0x802265E0: j           L_80226634
    // 0x802265E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226634;
    // 0x802265E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802265E8:
    // 0x802265E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802265EC: jal         0x80227F28
    // 0x802265F0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80227F28_ovl27(rdram, ctx);
        goto after_4;
    // 0x802265F0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x802265F4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802265F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802265FC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80226600: j           L_80226634
    // 0x80226604: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226634;
    // 0x80226604: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226608:
    // 0x80226608: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022660C: jal         0x80227F38
    // 0x80226610: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80227F38_ovl27(rdram, ctx);
        goto after_5;
    // 0x80226610: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80226614: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226618: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022661C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226620: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226624: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226628: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022662C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80226630: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226634:
    // 0x80226634: jal         0x800A3450
    // 0x80226638: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80226638: nop

    after_6:
    // 0x8022663C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226640: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226644: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226648: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022664C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226650: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226654: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226658: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022665C: jr          $ra
    // 0x80226660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DD68_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DD6C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DD70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD74: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DD78: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022DD7C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DD80: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022DD84: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022DD88: bne         $v0, $zero, L_8022DDA4
    if (ctx->r2 != 0) {
        // 0x8022DD8C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_8022DDA4;
    }
    // 0x8022DD8C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8022DD90: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x8022DD94: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022DD98: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022DD9C: j           L_8022DE48
    // 0x8022DDA0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_8022DE48;
    // 0x8022DDA0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_8022DDA4:
    // 0x8022DDA4: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x8022DDA8: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8022DDAC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022DDB0: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x8022DDB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022DDB8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DDBC: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8022DDC0: mfhi        $t2
    ctx->r10 = hi;
    // 0x8022DDC4: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x8022DDC8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022DDCC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DDD0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022DDD4: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8022DDD8: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8022DDDC: bne         $v0, $zero, L_8022DE08
    if (ctx->r2 != 0) {
        // 0x8022DDE0: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022DE08;
    }
    // 0x8022DDE0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022DDE4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022DDE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DDEC: lbu         $v1, -0x6050($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6050);
    // 0x8022DDF0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022DDF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DDF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DDFC: lbu         $v0, -0x604F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X604F);
    // 0x8022DE00: j           L_8022DE28
    // 0x8022DE04: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022DE28;
    // 0x8022DE04: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022DE08:
    // 0x8022DE08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022DE0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DE10: lbu         $v1, -0x6044($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6044);
    // 0x8022DE14: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022DE18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE20: lbu         $v0, -0x6043($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6043);
    // 0x8022DE24: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022DE28:
    // 0x8022DE28: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022DE2C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022DE30: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022DE34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DE38: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022DE3C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022DE40: jal         0x8003B6B8
    // 0x8022DE44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x8022DE44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8022DE48:
    // 0x8022DE48: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022DE4C: beql        $v0, $zero, L_8022DEF4
    if (ctx->r2 == 0) {
        // 0x8022DE50: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022DEF4;
    }
    goto skip_0;
    // 0x8022DE50: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022DE54: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022DE58: bgezl       $v0, L_8022DEF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DE5C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022DEF4;
    }
    goto skip_1;
    // 0x8022DE5C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x8022DE60: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022DE64: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022DE68: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022DE6C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x8022DE70: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x8022DE74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DE78: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DE7C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022DE80: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x8022DE84: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022DE88: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022DE8C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8022DE90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022DE94: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022DE98: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022DE9C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022DEA0: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8022DEA4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022DEA8: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8022DEAC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022DEB0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DEB4: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x8022DEB8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8022DEBC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022DEC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DEC4: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022DEC8: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022DECC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022DED0: jal         0x8004DD04
    // 0x8022DED4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022DED4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x8022DED8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DEDC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DEE0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022DEE4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x8022DEE8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8022DEEC: j           L_8022DEFC
    // 0x8022DEF0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8022DEFC;
    // 0x8022DEF0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_8022DEF4:
    // 0x8022DEF4: jal         0x8004F4F8
    // 0x8022DEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022DEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022DEFC:
    // 0x8022DEFC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x8022DF00: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022DF04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DF08: beq         $v0, $zero, L_8022DF24
    if (ctx->r2 == 0) {
        // 0x8022DF0C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DF24;
    }
    // 0x8022DF0C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DF10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DF14: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022DF18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DF1C: j           L_8022DF9C
    // 0x8022DF20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022DF9C;
    // 0x8022DF20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022DF24:
    // 0x8022DF24: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022DF28: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022DF2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DF30: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022DF34: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DF38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022DF3C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022DF40: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022DF44: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DF48: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022DF4C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022DF50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022DF54: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DF58: jal         0x80051E18
    // 0x8022DF5C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022DF5C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022DF60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF64: jal         0x8003F754
    // 0x8022DF68: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x8022DF68: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8022DF6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DF70: beq         $a0, $zero, L_8022DF84
    if (ctx->r4 == 0) {
        // 0x8022DF74: nop
    
            goto L_8022DF84;
    }
    // 0x8022DF74: nop

    // 0x8022DF78: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DF7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DF80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022DF84:
    // 0x8022DF84: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DF88: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022DF8C: bne         $v0, $zero, L_8022DF9C
    if (ctx->r2 != 0) {
        // 0x8022DF90: nop
    
            goto L_8022DF9C;
    }
    // 0x8022DF90: nop

    // 0x8022DF94: jal         0x800711A8
    // 0x8022DF98: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x8022DF98: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8022DF9C:
    // 0x8022DF9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DFA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DFA4: jr          $ra
    // 0x8022DFA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DFA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228CE0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CE0: lhu         $v0, 0x344($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X344);
    // 0x80228CE4: beq         $v0, $zero, L_80228CF4
    if (ctx->r2 == 0) {
        // 0x80228CE8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228CF4;
    }
    // 0x80228CE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228CEC: j           L_80228D24
    // 0x80228CF0: sh          $v0, 0x344($a0)
    MEM_H(0X344, ctx->r4) = ctx->r2;
        goto L_80228D24;
    // 0x80228CF0: sh          $v0, 0x344($a0)
    MEM_H(0X344, ctx->r4) = ctx->r2;
L_80228CF4:
    // 0x80228CF4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228CF8: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x80228CFC: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x80228D00: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228D04: bne         $v0, $zero, L_80228D24
    if (ctx->r2 != 0) {
        // 0x80228D08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228D24;
    }
    // 0x80228D08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D0C: lbu         $v1, 0x34D($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X34D);
    // 0x80228D10: sh          $zero, 0x344($a0)
    MEM_H(0X344, ctx->r4) = 0;
    // 0x80228D14: sb          $v0, 0x34B($a0)
    MEM_B(0X34B, ctx->r4) = ctx->r2;
    // 0x80228D18: sb          $zero, 0x34F($a0)
    MEM_B(0X34F, ctx->r4) = 0;
    // 0x80228D1C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228D20: sb          $v1, 0x34D($a0)
    MEM_B(0X34D, ctx->r4) = ctx->r3;
L_80228D24:
    // 0x80228D24: jr          $ra
    // 0x80228D28: nop

    TRACE_RETURN()
    return;
    // 0x80228D28: nop

;}
RECOMP_FUNC void func_80227F78_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F78: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80227F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F80: beq         $a1, $v0, L_80227FAC
    if (ctx->r5 == ctx->r2) {
        // 0x80227F84: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80227FAC;
    }
    // 0x80227F84: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227F88: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x80227F8C: bne         $a0, $v0, L_80227F9C
    if (ctx->r4 != ctx->r2) {
        // 0x80227F90: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80227F9C;
    }
    // 0x80227F90: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80227F94: j           L_80227FBC
    // 0x80227F98: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80227FBC;
    // 0x80227F98: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80227F9C:
    // 0x80227F9C: bne         $a0, $v1, L_80227FBC
    if (ctx->r4 != ctx->r3) {
        // 0x80227FA0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80227FBC;
    }
    // 0x80227FA0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80227FA4: j           L_80227FBC
    // 0x80227FA8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_80227FBC;
    // 0x80227FA8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_80227FAC:
    // 0x80227FAC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80227FB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227FB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227FB8: lbu         $v0, -0x69C0($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X69C0);
L_80227FBC:
    // 0x80227FBC: jr          $ra
    // 0x80227FC0: nop

    TRACE_RETURN()
    return;
    // 0x80227FC0: nop

;}
RECOMP_FUNC void func_8022E080_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E084: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E088: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E08C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E090: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E094: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E098: lw          $v0, -0x6008($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6008);
    // 0x8022E09C: jalr        $v0
    // 0x8022E0A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E0A0: nop

    after_0:
    // 0x8022E0A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0A8: jr          $ra
    // 0x8022E0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230F2C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230F30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230F34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230F38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230F3C: jal         0x8004F144
    // 0x80230F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230F44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230F48: beq         $s0, $zero, L_80230F88
    if (ctx->r16 == 0) {
        // 0x80230F4C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80230F88;
    }
    // 0x80230F4C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230F50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230F54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230F58: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230F5C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230F60: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80230F64: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230F68: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230F6C: jal         0x8009A3B4
    // 0x80230F70: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230F70: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230F74: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230F78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230F7C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80230F80: jal         0x8004F684
    // 0x80230F84: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80230F84: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_80230F88:
    // 0x80230F88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230F8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230F94: jr          $ra
    // 0x80230F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D0D0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D0D0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8022D0D4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8022D0D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D0DC: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x8022D0E0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022D0E4: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x8022D0E8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8022D0EC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8022D0F0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8022D0F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D0F8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D0FC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8022D100: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8022D104: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8022D108: addiu       $s2, $s2, -0x61A0
    ctx->r18 = ADD32(ctx->r18, -0X61A0);
    // 0x8022D10C: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022D110: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x8022D114: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8022D118: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x8022D11C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022D120: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D124: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D128: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D12C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D130: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D138: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022D13C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022D140: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8022D144: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022D148: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022D14C: jal         0x800308E8
    // 0x8022D150: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x8022D150: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022D154: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D158: jal         0x800321EC
    // 0x8022D15C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800321EC_D5EC(rdram, ctx);
        goto after_1;
    // 0x8022D15C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8022D160: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x8022D164: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8022D168: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D16C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8022D170: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022D174: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D178: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022D17C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8022D180: jal         0x8009A3B4
    // 0x8022D184: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D184: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022D188: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D18C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D190: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D194: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D198: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D19C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D1A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1A8: lhu         $v0, -0x61AE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X61AE);
    // 0x8022D1AC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022D1B0: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8022D1B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D1B8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D1BC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D1C0: mflo        $v1
    ctx->r3 = lo;
    // 0x8022D1C4: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8022D1C8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022D1CC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8022D1D0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D1D4: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D1D8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D1DC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D1E0: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8022D1E4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D1E8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D1EC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D1F0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D1F4: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8022D1F8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D1FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D204: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D208: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D20C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022D210: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D214: lh          $a0, -0x61AC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X61AC);
    // 0x8022D218: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8022D21C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D220: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D224: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D228: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x8022D22C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8022D230: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D234: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D238: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D23C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022D240: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8022D244: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D248: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D24C: addiu       $s2, $s2, -0xF
    ctx->r18 = ADD32(ctx->r18, -0XF);
    // 0x8022D250: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D258: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D25C: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x8022D260: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D264: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D26C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D270: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D274: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D278: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D27C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D280: lbu         $v0, -0x61B0($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X61B0);
    // 0x8022D284: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x8022D288: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022D28C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8022D290: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022D294: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8022D298: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x8022D29C: jal         0x8004D5D4
    // 0x8022D2A0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022D2A0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022D2A4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D2A8: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8022D2AC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D2B0: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D2B4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022D2B8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022D2BC: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8022D2C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D2C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022D2C8: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022D2CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D2D4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022D2D8: sh          $t0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r8;
    // 0x8022D2DC: sh          $t1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r9;
    // 0x8022D2E0: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
    // 0x8022D2E4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022D2E8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022D2EC: jal         0x8009A3B4
    // 0x8022D2F0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D2F0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x8022D2F4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D2F8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D2FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D300: jal         0x8009A3B4
    // 0x8022D304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D304: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D308: addiu       $s2, $s0, 0xD8
    ctx->r18 = ADD32(ctx->r16, 0XD8);
    // 0x8022D30C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D310: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D314: jal         0x8009A3B4
    // 0x8022D318: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D318: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022D31C: addiu       $s3, $s0, 0xE0
    ctx->r19 = ADD32(ctx->r16, 0XE0);
    // 0x8022D320: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022D324: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D328: jal         0x8009A3B4
    // 0x8022D32C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D32C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022D330: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x8022D334: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D338: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D33C: jal         0x8009A3B4
    // 0x8022D340: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D340: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022D344: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x8022D348: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D34C: jal         0x8009A3B4
    // 0x8022D350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022D350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022D354: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D358: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D35C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022D360: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022D364: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8022D368: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D36C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D370: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022D374: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D378: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D37C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D380: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D384: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D388: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D38C: lbu         $v0, -0x6190($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6190);
    // 0x8022D390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D394: jal         0x8022D89C
    // 0x8022D398: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8022D89C_ovl27(rdram, ctx);
        goto after_10;
    // 0x8022D398: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_10:
    // 0x8022D39C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D3A0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D3A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D3A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D3AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D3B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D3B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D3B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3BC: lbu         $v0, -0x6194($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6194);
    // 0x8022D3C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D3C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D3C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3CC: lw          $v0, -0x607C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X607C);
    // 0x8022D3D0: jalr        $v0
    // 0x8022D3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8022D3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022D3D8: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x8022D3DC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8022D3E0: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8022D3E4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D3E8: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8022D3EC: jr          $ra
    // 0x8022D3F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x8022D3F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_802337C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802337C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802337C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802337C8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802337CC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802337D0: beq         $v1, $v0, L_80233818
    if (ctx->r3 == ctx->r2) {
        // 0x802337D4: slti        $v0, $v1, 0x19
        ctx->r2 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
            goto L_80233818;
    }
    // 0x802337D4: slti        $v0, $v1, 0x19
    ctx->r2 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x802337D8: beql        $v0, $zero, L_802337F0
    if (ctx->r2 == 0) {
        // 0x802337DC: addiu       $v0, $zero, 0x4A
        ctx->r2 = ADD32(0, 0X4A);
            goto L_802337F0;
    }
    goto skip_0;
    // 0x802337DC: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
    skip_0:
    // 0x802337E0: beq         $v1, $zero, L_80233808
    if (ctx->r3 == 0) {
        // 0x802337E4: addiu       $v0, $zero, 0x87
        ctx->r2 = ADD32(0, 0X87);
            goto L_80233808;
    }
    // 0x802337E4: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x802337E8: j           L_8023382C
    // 0x802337EC: nop

        goto L_8023382C;
    // 0x802337EC: nop

L_802337F0:
    // 0x802337F0: beq         $v1, $v0, L_80233820
    if (ctx->r3 == ctx->r2) {
        // 0x802337F4: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80233820;
    }
    // 0x802337F4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802337F8: beq         $v1, $v0, L_80233824
    if (ctx->r3 == ctx->r2) {
        // 0x802337FC: addiu       $a0, $zero, 0x15
        ctx->r4 = ADD32(0, 0X15);
            goto L_80233824;
    }
    // 0x802337FC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80233800: j           L_8023382C
    // 0x80233804: nop

        goto L_8023382C;
    // 0x80233804: nop

L_80233808:
    // 0x80233808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023380C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233810: j           L_80233824
    // 0x80233814: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
        goto L_80233824;
    // 0x80233814: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_80233818:
    // 0x80233818: j           L_80233824
    // 0x8023381C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
        goto L_80233824;
    // 0x8023381C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
L_80233820:
    // 0x80233820: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
L_80233824:
    // 0x80233824: jal         0x802340E8
    // 0x80233828: nop

    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233828: nop

    after_0:
L_8023382C:
    // 0x8023382C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233830: jal         0x80234148
    // 0x80233834: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233834: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x80233838: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023383C: jr          $ra
    // 0x80233840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802298C8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298C8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802298CC: bne         $v0, $zero, L_802298E4
    if (ctx->r2 != 0) {
        // 0x802298D0: nop
    
            goto L_802298E4;
    }
    // 0x802298D0: nop

    // 0x802298D4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802298D8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802298DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802298E0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802298E4:
    // 0x802298E4: jr          $ra
    // 0x802298E8: nop

    TRACE_RETURN()
    return;
    // 0x802298E8: nop

;}
RECOMP_FUNC void func_802370D8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802370D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802370DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802370E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802370E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802370E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802370EC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802370F0: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x802370F4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802370F8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802370FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237100: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80237104: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80237108: beq         $v1, $v0, L_80237124
    if (ctx->r3 == ctx->r2) {
        // 0x8023710C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80237124;
    }
    // 0x8023710C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80237110: bne         $v1, $v0, L_80237120
    if (ctx->r3 != ctx->r2) {
        // 0x80237114: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237120;
    }
    // 0x80237114: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237118: j           L_80237124
    // 0x8023711C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80237124;
    // 0x8023711C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80237120:
    // 0x80237120: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80237124:
    // 0x80237124: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80237128: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8023712C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237130: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237134: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80237138: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8023713C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80237140: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237144: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80237148: beq         $a0, $v1, L_80237170
    if (ctx->r4 == ctx->r3) {
        // 0x8023714C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80237170;
    }
    // 0x8023714C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80237150: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80237154: jal         0x8003B85C
    // 0x80237158: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80237158: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8023715C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80237160: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80237164: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80237168: jal         0x8003B840
    // 0x8023716C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8023716C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80237170:
    // 0x80237170: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80237174: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80237178: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023717C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80237180: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80237184: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237188: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8023718C: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80237190: beq         $v1, $v0, L_802371AC
    if (ctx->r3 == ctx->r2) {
        // 0x80237194: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802371AC;
    }
    // 0x80237194: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80237198: bne         $v1, $v0, L_802371A8
    if (ctx->r3 != ctx->r2) {
        // 0x8023719C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802371A8;
    }
    // 0x8023719C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802371A0: j           L_802371AC
    // 0x802371A4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802371AC;
    // 0x802371A4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802371A8:
    // 0x802371A8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_802371AC:
    // 0x802371AC: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x802371B0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802371B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802371B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802371BC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802371C0: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x802371C4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802371C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802371CC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802371D0: beq         $a0, $v1, L_802371F8
    if (ctx->r4 == ctx->r3) {
        // 0x802371D4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802371F8;
    }
    // 0x802371D4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802371D8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802371DC: jal         0x8003B85C
    // 0x802371E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802371E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802371E4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802371E8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802371EC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802371F0: jal         0x8003B840
    // 0x802371F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802371F4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802371F8:
    // 0x802371F8: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802371FC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80237200: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80237204: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237208: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023720C: jr          $ra
    // 0x80237210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80237214: nop

    // 0x80237218: nop

    // 0x8023721C: nop

;}
RECOMP_FUNC void func_80236C20_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236C30: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236C34: beq         $v1, $zero, L_80236C4C
    if (ctx->r3 == 0) {
        // 0x80236C38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236C4C;
    }
    // 0x80236C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236C3C: beq         $v1, $v0, L_80236C68
    if (ctx->r3 == ctx->r2) {
        // 0x80236C40: nop
    
            goto L_80236C68;
    }
    // 0x80236C40: nop

    // 0x80236C44: j           L_80236C7C
    // 0x80236C48: nop

        goto L_80236C7C;
    // 0x80236C48: nop

L_80236C4C:
    // 0x80236C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C50: addiu       $v0, $zero, -0x514
    ctx->r2 = ADD32(0, -0X514);
    // 0x80236C54: jal         0x8005044C
    // 0x80236C58: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80236C58: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236C5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236C60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236C64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236C68:
    // 0x80236C68: jal         0x8005044C
    // 0x80236C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236C70: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80236C74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236C78: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80236C7C:
    // 0x80236C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236C80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236C84: jr          $ra
    // 0x80236C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C888_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C888: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C88C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C894: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C898: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8022C89C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C8A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C8A4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C8A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C8AC: jal         0x8009A3B4
    // 0x8022C8B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C8B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C8B4: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8022C8B8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022C8BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C8C0: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022C8C4: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x8022C8C8: lhu         $v1, 0x368($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X368);
    // 0x8022C8CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C8D0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C8D4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C8D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C8DC: bne         $v1, $v0, L_8022C8E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022C8E0: addiu       $a3, $zero, 0x20
        ctx->r7 = ADD32(0, 0X20);
            goto L_8022C8E8;
    }
    // 0x8022C8E0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022C8E4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
L_8022C8E8:
    // 0x8022C8E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C8EC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C8F0: jal         0x8004F820
    // 0x8022C8F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C8F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022C8F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C8FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C900: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C904: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C908: jal         0x8003E934
    // 0x8022C90C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C90C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022C910: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C91C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C920: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C924: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C928: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x8022C92C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C930: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C934: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C938: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022C93C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C940: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C944: jal         0x8004DA90
    // 0x8022C948: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022C948: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_3:
    // 0x8022C94C: jal         0x8022CEBC
    // 0x8022C950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CEBC_ovl27(rdram, ctx);
        goto after_4;
    // 0x8022C950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C954: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022C958: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8022C95C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022C960: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C964: mflo        $v1
    ctx->r3 = lo;
    // 0x8022C968: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C96C: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8022C970: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022C974: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C978: mflo        $a0
    ctx->r4 = lo;
    // 0x8022C97C: lh          $v0, 0x364($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X364);
    // 0x8022C980: nop

    // 0x8022C984: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C988: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C98C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C990: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C994: beq         $v1, $zero, L_8022C9A4
    if (ctx->r3 == 0) {
        // 0x8022C998: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C9A4;
    }
    // 0x8022C998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C99C: j           L_8022CA90
    // 0x8022C9A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CA90;
    // 0x8022C9A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C9A4:
    // 0x8022C9A4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C9A8: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022C9AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C9B0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C9B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C9B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C9BC: lh          $v0, -0x63E8($at)
    ctx->r2 = MEM_H(ctx->r1, -0X63E8);
    // 0x8022C9C0: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022C9C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C9C8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C9CC: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022C9D0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022C9D4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C9D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C9DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C9E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C9E4: lh          $v0, -0x63E6($at)
    ctx->r2 = MEM_H(ctx->r1, -0X63E6);
    // 0x8022C9E8: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022C9EC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C9F0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C9F4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C9F8: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C9FC: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8022CA00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA04: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CA08: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CA0C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022CA10: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8022CA14: or          $a0, $t0, $a0
    ctx->r4 = ctx->r8 | ctx->r4;
    // 0x8022CA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA1C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022CA20: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022CA24: lhu         $t0, 0x34E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34E);
    // 0x8022CA28: and         $a2, $a2, $v1
    ctx->r6 = ctx->r6 & ctx->r3;
    // 0x8022CA2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA30: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022CA34: and         $a3, $a3, $v1
    ctx->r7 = ctx->r7 & ctx->r3;
    // 0x8022CA38: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022CA3C: lhu         $v1, 0x34A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34A);
    // 0x8022CA40: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    // 0x8022CA44: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CA48: jal         0x8022CE54
    // 0x8022CA4C: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_5;
    // 0x8022CA4C: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    after_5:
    // 0x8022CA50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CA54: bne         $v0, $zero, L_8022CA90
    if (ctx->r2 != 0) {
        // 0x8022CA58: nop
    
            goto L_8022CA90;
    }
    // 0x8022CA58: nop

    // 0x8022CA5C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CA60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CA64: addiu       $v0, $v0, -0x6448
    ctx->r2 = ADD32(ctx->r2, -0X6448);
    // 0x8022CA68: sw          $v0, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r2;
    // 0x8022CA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CA70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CA74: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CA78: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CA7C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CA80: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CA84: addiu       $v1, $v1, -0x6418
    ctx->r3 = ADD32(ctx->r3, -0X6418);
    // 0x8022CA88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CA8C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
L_8022CA90:
    // 0x8022CA90: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022CA94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022CA98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CA9C: jr          $ra
    // 0x8022CAA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CAA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C4D4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C4D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C4DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C4E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C4E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C4E8: lbu         $a2, 0xA($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C4EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C4F0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022C4F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C4F8: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022C4FC: beq         $v1, $v0, L_8022C588
    if (ctx->r3 == ctx->r2) {
        // 0x8022C500: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C588;
    }
    // 0x8022C500: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C504: beql        $v0, $zero, L_8022C51C
    if (ctx->r2 == 0) {
        // 0x8022C508: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C51C;
    }
    goto skip_0;
    // 0x8022C508: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C50C: beq         $v1, $zero, L_8022C534
    if (ctx->r3 == 0) {
        // 0x8022C510: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022C534;
    }
    // 0x8022C510: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C514: j           L_8022C6DC
    // 0x8022C518: nop

        goto L_8022C6DC;
    // 0x8022C518: nop

L_8022C51C:
    // 0x8022C51C: beq         $v1, $v0, L_8022C5C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C520: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C5C4;
    }
    // 0x8022C520: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C524: beq         $v1, $v0, L_8022C688
    if (ctx->r3 == ctx->r2) {
        // 0x8022C528: nop
    
            goto L_8022C688;
    }
    // 0x8022C528: nop

    // 0x8022C52C: j           L_8022C6DC
    // 0x8022C530: nop

        goto L_8022C6DC;
    // 0x8022C530: nop

L_8022C534:
    // 0x8022C534: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C538: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022C53C: jal         0x8004F820
    // 0x8022C540: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C540: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022C544: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C548: lbu         $a1, 0x35D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X35D);
    // 0x8022C54C: addiu       $v1, $zero, -0x21C
    ctx->r3 = ADD32(0, -0X21C);
    // 0x8022C550: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x8022C554: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x8022C558: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x8022C55C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022C560: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x8022C564: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022C568: beq         $a1, $zero, L_8022C578
    if (ctx->r5 == 0) {
        // 0x8022C56C: sh          $a0, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r4;
            goto L_8022C578;
    }
    // 0x8022C56C: sh          $a0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r4;
    // 0x8022C570: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x8022C574: sb          $v0, 0x35D($s1)
    MEM_B(0X35D, ctx->r17) = ctx->r2;
L_8022C578:
    // 0x8022C578: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C57C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C580: j           L_8022C6DC
    // 0x8022C584: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022C6DC;
    // 0x8022C584: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022C588:
    // 0x8022C588: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022C58C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022C590: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022C594: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C598: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C59C: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022C5A0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022C5A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C5A8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C5AC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C5B0: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x8022C5B4: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022C5B8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022C5BC: j           L_8022C6DC
    // 0x8022C5C0: sw          $a1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r5;
        goto L_8022C6DC;
    // 0x8022C5C0: sw          $a1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r5;
L_8022C5C4:
    // 0x8022C5C4: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022C5C8: jal         0x8003E934
    // 0x8022C5CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022C5CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022C5D0: slt         $s0, $s0, $v0
    ctx->r16 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C5D4: bne         $s0, $zero, L_8022C630
    if (ctx->r16 != 0) {
        // 0x8022C5D8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C630;
    }
    // 0x8022C5D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C5DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C5E0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022C5E4: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022C5E8: jal         0x8003E934
    // 0x8022C5EC: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C5EC: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    after_2:
    // 0x8022C5F0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C5F4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022C5F8: sh          $v0, 0x35E($s1)
    MEM_H(0X35E, ctx->r17) = ctx->r2;
    // 0x8022C5FC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022C600: lbu         $a1, 0xA($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C604: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022C608: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022C60C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022C610: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C614: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C618: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C61C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022C620: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022C624: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022C628: sb          $a1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r5;
    // 0x8022C62C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022C630:
    // 0x8022C630: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022C634: addiu       $a1, $zero, -0xA0
    ctx->r5 = ADD32(0, -0XA0);
    // 0x8022C638: jal         0x8004DA90
    // 0x8022C63C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022C63C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022C640: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022C644: bltz        $v0, L_8022C650
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C648: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022C650;
    }
    // 0x8022C648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C64C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022C650:
    // 0x8022C650: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022C654: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022C658: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022C65C: lhu         $a1, 0x46($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X46);
    // 0x8022C660: lhu         $a2, 0x48($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X48);
    // 0x8022C664: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C668: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C66C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C670: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8022C674: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022C678: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022C67C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022C680: j           L_8022C6DC
    // 0x8022C684: sh          $a1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r5;
        goto L_8022C6DC;
    // 0x8022C684: sh          $a1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r5;
L_8022C688:
    // 0x8022C688: jal         0x8003E934
    // 0x8022C68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022C68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022C690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C694: addiu       $a1, $zero, -0x20
    ctx->r5 = ADD32(0, -0X20);
    // 0x8022C698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C69C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C6A0: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022C6A4: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022C6A8: lh          $t0, 0x18($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X18);
    // 0x8022C6AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C6B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C6B8: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022C6BC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022C6C0: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022C6C4: jal         0x8004DA90
    // 0x8022C6C8: sw          $t0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022C6C8: sw          $t0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r8;
    after_5:
    // 0x8022C6CC: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022C6D0: bgez        $v0, L_8022C6DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C6D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C6DC;
    }
    // 0x8022C6D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C6D8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022C6DC:
    // 0x8022C6DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C6E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C6E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C6E8: jr          $ra
    // 0x8022C6EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C6EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023377C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023377C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233780: bne         $v0, $zero, L_80233798
    if (ctx->r2 != 0) {
        // 0x80233784: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_80233798;
    }
    // 0x80233784: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80233788: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023378C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233790: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80233794: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233798:
    // 0x80233798: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023379C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x802337A0: bne         $v1, $v0, L_802337B8
    if (ctx->r3 != ctx->r2) {
        // 0x802337A4: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_802337B8;
    }
    // 0x802337A4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x802337A8: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802337AC: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802337B0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802337B4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802337B8:
    // 0x802337B8: jr          $ra
    // 0x802337BC: nop

    TRACE_RETURN()
    return;
    // 0x802337BC: nop

;}
RECOMP_FUNC void func_802301C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802301C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802301C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802301CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802301D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802301D8: lw          $v0, -0x5E90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E90);
    // 0x802301DC: jalr        $v0
    // 0x802301E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802301E0: nop

    after_0:
    // 0x802301E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802301E8: jr          $ra
    // 0x802301EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802301EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230878_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023087C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230884: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230888: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023088C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230890: jal         0x8002C654
    // 0x80230894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80230894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80230898: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023089C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802308A0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802308A4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802308A8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802308AC: lhu         $a0, -0x5E60($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5E60);
    // 0x802308B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802308B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802308B8: jal         0x80031BB4
    // 0x802308BC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x802308BC: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x802308C0: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x802308C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802308C8: jal         0x800319B4
    // 0x802308CC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x802308CC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x802308D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802308D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802308D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308DC: jr          $ra
    // 0x802308E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802308E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225CE0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225CE8: jal         0x8004F418
    // 0x80225CEC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225CEC: nop

    after_0:
    // 0x80225CF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225CF4: jr          $ra
    // 0x80225CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227FC4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227FC8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227FCC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227FD0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227FD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227FD8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x80227FDC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80227FE0: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80227FE4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80227FE8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227FEC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227FF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80227FF4: jal         0x8004DC2C
    // 0x80227FF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80227FF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x80227FFC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80228000: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80228004: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228008: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022800C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80228010: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80228014: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80228018: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022801C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228020: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80228024: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80228028: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022802C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228030: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80228034: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80228038: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022803C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80228040: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80228044: beq         $a0, $zero, L_80228054
    if (ctx->r4 == 0) {
        // 0x80228048: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228054;
    }
    // 0x80228048: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022804C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80228050: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80228054:
    // 0x80228054: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80228058: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022805C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228060: jr          $ra
    // 0x80228064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80228068: nop

    // 0x8022806C: nop

;}
RECOMP_FUNC void func_80232754_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232754: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80232758: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023275C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232760: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232764: lbu         $v1, -0x5D9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5D9C);
    // 0x80232768: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023276C: lbu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A48);
    // 0x80232770: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232774: bne         $v0, $zero, L_8023278C
    if (ctx->r2 != 0) {
        // 0x80232778: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8023278C;
    }
    // 0x80232778: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023277C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80232780: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x80232784: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80232788: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_8023278C:
    // 0x8023278C: jr          $ra
    // 0x80232790: nop

    TRACE_RETURN()
    return;
    // 0x80232790: nop

;}
RECOMP_FUNC void func_80237E44_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237E48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237E4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237E54: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237E5C: beq         $v1, $v0, L_80237EAC
    if (ctx->r3 == ctx->r2) {
        // 0x80237E60: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80237EAC;
    }
    // 0x80237E60: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237E64: beql        $v0, $zero, L_80237E7C
    if (ctx->r2 == 0) {
        // 0x80237E68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237E7C;
    }
    goto skip_0;
    // 0x80237E68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237E6C: beq         $v1, $zero, L_80237E8C
    if (ctx->r3 == 0) {
        // 0x80237E70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237E8C;
    }
    // 0x80237E70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237E74: j           L_80237ECC
    // 0x80237E78: nop

        goto L_80237ECC;
    // 0x80237E78: nop

L_80237E7C:
    // 0x80237E7C: beq         $v1, $v0, L_80237EC4
    if (ctx->r3 == ctx->r2) {
        // 0x80237E80: nop
    
            goto L_80237EC4;
    }
    // 0x80237E80: nop

    // 0x80237E84: j           L_80237ECC
    // 0x80237E88: nop

        goto L_80237ECC;
    // 0x80237E88: nop

L_80237E8C:
    // 0x80237E8C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80237E90: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80237E94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237E98: jal         0x80050294
    // 0x80237E9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237E9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237EA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237EA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237EA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237EAC:
    // 0x80237EAC: jal         0x80051770
    // 0x80237EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80237EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237EB4: jal         0x80051248
    // 0x80237EB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80237EB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237EBC: j           L_80237ECC
    // 0x80237EC0: nop

        goto L_80237ECC;
    // 0x80237EC0: nop

L_80237EC4:
    // 0x80237EC4: jal         0x8005044C
    // 0x80237EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80237EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80237ECC:
    // 0x80237ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237ED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237ED4: jr          $ra
    // 0x80237ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802334C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802334C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802334C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802334CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802334D0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802334D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802334D8: beq         $v1, $v0, L_8023354C
    if (ctx->r3 == ctx->r2) {
        // 0x802334DC: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_8023354C;
    }
    // 0x802334DC: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x802334E0: beq         $v0, $zero, L_802334F8
    if (ctx->r2 == 0) {
        // 0x802334E4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802334F8;
    }
    // 0x802334E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802334E8: beq         $v1, $v0, L_8023350C
    if (ctx->r3 == ctx->r2) {
        // 0x802334EC: addiu       $v0, $zero, -0x7
        ctx->r2 = ADD32(0, -0X7);
            goto L_8023350C;
    }
    // 0x802334EC: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
    // 0x802334F0: j           L_80233558
    // 0x802334F4: nop

        goto L_80233558;
    // 0x802334F4: nop

L_802334F8:
    // 0x802334F8: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
    // 0x802334FC: beq         $v1, $v0, L_80233550
    if (ctx->r3 == ctx->r2) {
        // 0x80233500: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_80233550;
    }
    // 0x80233500: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x80233504: j           L_80233558
    // 0x80233508: nop

        goto L_80233558;
    // 0x80233508: nop

L_8023350C:
    // 0x8023350C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233510: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80233514: lui         $v0, 0xFFF9
    ctx->r2 = S32(0XFFF9 << 16);
    // 0x80233518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023351C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80233520: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80233524: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233528: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023352C: jal         0x802340E8
    // 0x80233530: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233530: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x80233534: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80233538: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023353C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233540: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80233544: j           L_80233558
    // 0x80233548: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
        goto L_80233558;
    // 0x80233548: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8023354C:
    // 0x8023354C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80233550:
    // 0x80233550: jal         0x802340E8
    // 0x80233554: nop

    func_802340E8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233554: nop

    after_1:
L_80233558:
    // 0x80233558: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023355C: jal         0x80234148
    // 0x80233560: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233560: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x80233564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023356C: jr          $ra
    // 0x80233570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232978_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023297C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232980: jal         0x8004F5C4
    // 0x80232984: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80232984: nop

    after_0:
    // 0x80232988: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023298C: jr          $ra
    // 0x80232990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C10_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227C18: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227C1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227C24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227C28: lw          $v0, -0x6718($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6718);
    // 0x80227C2C: jalr        $v0
    // 0x80227C30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227C30: nop

    after_0:
    // 0x80227C34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227C38: jr          $ra
    // 0x80227C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294E4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294E4: lbu         $v0, 0xA6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA6);
    // 0x802294E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802294EC: beq         $v0, $zero, L_80229508
    if (ctx->r2 == 0) {
        // 0x802294F0: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229508;
    }
    // 0x802294F0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802294F4: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x802294F8: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x802294FC: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    // 0x80229500: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229504: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
L_80229508:
    // 0x80229508: jr          $ra
    // 0x8022950C: nop

    TRACE_RETURN()
    return;
    // 0x8022950C: nop

;}
RECOMP_FUNC void func_80227528_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022752C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227534: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227538: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022753C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227540: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227544: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227548: jal         0x8004FA7C
    // 0x8022754C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022754C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80227550: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227554: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227558: beq         $v0, $zero, L_802275EC
    if (ctx->r2 == 0) {
        // 0x8022755C: nop
    
            goto L_802275EC;
    }
    // 0x8022755C: nop

    // 0x80227560: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227564: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227568: bne         $v0, $zero, L_802275EC
    if (ctx->r2 != 0) {
        // 0x8022756C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802275EC;
    }
    // 0x8022756C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227570: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227574: beq         $v1, $v0, L_8022758C
    if (ctx->r3 == ctx->r2) {
        // 0x80227578: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022758C;
    }
    // 0x80227578: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022757C: beq         $v1, $v0, L_802275BC
    if (ctx->r3 == ctx->r2) {
        // 0x80227580: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802275BC;
    }
    // 0x80227580: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227584: j           L_802275E0
    // 0x80227588: nop

        goto L_802275E0;
    // 0x80227588: nop

L_8022758C:
    // 0x8022758C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227590: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227594: bne         $v0, $zero, L_802275E0
    if (ctx->r2 != 0) {
        // 0x80227598: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802275E0;
    }
    // 0x80227598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022759C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802275A0: bne         $v0, $zero, L_802275E0
    if (ctx->r2 != 0) {
        // 0x802275A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802275E0;
    }
    // 0x802275A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802275A8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802275AC: bne         $v1, $v0, L_802275E0
    if (ctx->r3 != ctx->r2) {
        // 0x802275B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802275E0;
    }
    // 0x802275B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802275B4: j           L_802275E0
    // 0x802275B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802275E0;
    // 0x802275B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802275BC:
    // 0x802275BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802275C0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802275C4: beq         $v0, $zero, L_802275DC
    if (ctx->r2 == 0) {
        // 0x802275C8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802275DC;
    }
    // 0x802275C8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802275CC: bne         $v0, $zero, L_802275E0
    if (ctx->r2 != 0) {
        // 0x802275D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802275E0;
    }
    // 0x802275D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802275D4: j           L_802275E0
    // 0x802275D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802275E0;
    // 0x802275D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802275DC:
    // 0x802275DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802275E0:
    // 0x802275E0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802275E4: beq         $v0, $zero, L_80227610
    if (ctx->r2 == 0) {
        // 0x802275E8: nop
    
            goto L_80227610;
    }
    // 0x802275E8: nop

L_802275EC:
    // 0x802275EC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802275F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802275F4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802275F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802275FC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227600: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227604: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227608: j           L_80227620
    // 0x8022760C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227620;
    // 0x8022760C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227610:
    // 0x80227610: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227614: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227618: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022761C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227620:
    // 0x80227620: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022762C: jr          $ra
    // 0x80227630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225668_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022566C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225670: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225678: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022567C: bne         $v0, $zero, L_802256A8
    if (ctx->r2 != 0) {
        // 0x80225680: nop
    
            goto L_802256A8;
    }
    // 0x80225680: nop

    // 0x80225684: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225688: jal         0x800607C4
    // 0x8022568C: addiu       $a0, $a0, -0x6F48
    ctx->r4 = ADD32(ctx->r4, -0X6F48);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022568C: addiu       $a0, $a0, -0x6F48
    ctx->r4 = ADD32(ctx->r4, -0X6F48);
    after_0:
    // 0x80225690: jal         0x80060AAC
    // 0x80225694: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_1;
    // 0x80225694: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80225698: jal         0x80060AAC
    // 0x8022569C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x8022569C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_2:
    // 0x802256A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256A4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256A8:
    // 0x802256A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256B0: jr          $ra
    // 0x802256B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802340E8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802340E8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802340EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802340F0: sb          $zero, -0x377E($at)
    MEM_B(-0X377E, ctx->r1) = 0;
    // 0x802340F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802340F8: sb          $zero, -0x377F($at)
    MEM_B(-0X377F, ctx->r1) = 0;
    // 0x802340FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234100: sb          $zero, -0x3780($at)
    MEM_B(-0X3780, ctx->r1) = 0;
    // 0x80234104: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234108: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023410C: lw          $v0, -0x512C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X512C);
    // 0x80234110: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234114: sb          $zero, -0x377B($at)
    MEM_B(-0X377B, ctx->r1) = 0;
    // 0x80234118: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023411C: sb          $zero, -0x377C($at)
    MEM_B(-0X377C, ctx->r1) = 0;
    // 0x80234120: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234124: sb          $zero, -0x377D($at)
    MEM_B(-0X377D, ctx->r1) = 0;
    // 0x80234128: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023412C: sw          $v0, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r2;
    // 0x80234130: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234134: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234138: lw          $v0, -0x50C4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X50C4);
    // 0x8023413C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234140: jr          $ra
    // 0x80234144: sw          $v0, -0x3774($at)
    MEM_W(-0X3774, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80234144: sw          $v0, -0x3774($at)
    MEM_W(-0X3774, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022D81C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D81C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D82C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022D830: beq         $v1, $zero, L_8022D854
    if (ctx->r3 == 0) {
        // 0x8022D834: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D854;
    }
    // 0x8022D834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D838: bne         $v1, $v0, L_8022D848
    if (ctx->r3 != ctx->r2) {
        // 0x8022D83C: addiu       $a0, $zero, 0x142
        ctx->r4 = ADD32(0, 0X142);
            goto L_8022D848;
    }
    // 0x8022D83C: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x8022D840: jal         0x8002A33C
    // 0x8022D844: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D844: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022D848:
    // 0x8022D848: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D84C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D850: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022D854:
    // 0x8022D854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D85C: jr          $ra
    // 0x8022D860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F220_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F224: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F228: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F22C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022F230: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F234: jal         0x8003E6BC
    // 0x8022F238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022F238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F23C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F240: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022F244: jal         0x8003E6BC
    // 0x8022F248: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022F248: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022F24C: bne         $s0, $v0, L_8022F274
    if (ctx->r16 != ctx->r2) {
        // 0x8022F250: nop
    
            goto L_8022F274;
    }
    // 0x8022F250: nop

    // 0x8022F254: jal         0x8006033C
    // 0x8022F258: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022F258: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022F25C: beq         $v0, $zero, L_8022F274
    if (ctx->r2 == 0) {
        // 0x8022F260: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022F274;
    }
    // 0x8022F260: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022F264: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F268: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8022F26C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F270: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F274:
    // 0x8022F274: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F278: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F27C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F280: jr          $ra
    // 0x8022F284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B85C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B85C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B860: bne         $v0, $zero, L_8022B884
    if (ctx->r2 != 0) {
        // 0x8022B864: addiu       $v1, $zero, -0x6A4
        ctx->r3 = ADD32(0, -0X6A4);
            goto L_8022B884;
    }
    // 0x8022B864: addiu       $v1, $zero, -0x6A4
    ctx->r3 = ADD32(0, -0X6A4);
    // 0x8022B868: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B86C: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
    // 0x8022B870: addiu       $v1, $zero, -0x9F6
    ctx->r3 = ADD32(0, -0X9F6);
    // 0x8022B874: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x8022B878: sh          $v1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r3;
    // 0x8022B87C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B880: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022B884:
    // 0x8022B884: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B888: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022B88C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022B890: beql        $v1, $v0, L_8022B898
    if (ctx->r3 == ctx->r2) {
        // 0x8022B894: sb          $zero, 0xD($a0)
        MEM_B(0XD, ctx->r4) = 0;
            goto L_8022B898;
    }
    goto skip_0;
    // 0x8022B894: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    skip_0:
L_8022B898:
    // 0x8022B898: jr          $ra
    // 0x8022B89C: nop

    TRACE_RETURN()
    return;
    // 0x8022B89C: nop

;}
RECOMP_FUNC void func_802303EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802303F0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802303F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802303F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802303FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230400: bne         $v0, $s0, L_80230418
    if (ctx->r2 != ctx->r16) {
        // 0x80230404: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80230418;
    }
    // 0x80230404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023040C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230410: j           L_8023047C
    // 0x80230414: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8023047C;
    // 0x80230414: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230418:
    // 0x80230418: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x8023041C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80230420: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230424: beq         $v0, $zero, L_80230464
    if (ctx->r2 == 0) {
        // 0x80230428: nop
    
            goto L_80230464;
    }
    // 0x80230428: nop

    // 0x8023042C: jal         0x80230A94
    // 0x80230430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A94_ovl27(rdram, ctx);
        goto after_0;
    // 0x80230430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230434: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230438: beq         $v0, $zero, L_80230448
    if (ctx->r2 == 0) {
        // 0x8023043C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230448;
    }
    // 0x8023043C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230440: j           L_8023047C
    // 0x80230444: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023047C;
    // 0x80230444: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230448:
    // 0x80230448: jal         0x802307C4
    // 0x8023044C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802307C4_ovl27(rdram, ctx);
        goto after_1;
    // 0x8023044C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230450: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x80230454: jal         0x8002A33C
    // 0x80230458: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80230458: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x8023045C: j           L_8023047C
    // 0x80230460: nop

        goto L_8023047C;
    // 0x80230460: nop

L_80230464:
    // 0x80230464: bgez        $v1, L_8023047C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80230468: nop
    
            goto L_8023047C;
    }
    // 0x80230468: nop

    // 0x8023046C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230470: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230478: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023047C:
    // 0x8023047C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230484: jr          $ra
    // 0x80230488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228FC4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228FC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228FC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228FCC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228FD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228FD4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80228FD8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80228FDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228FE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228FE4: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80228FE8: bne         $v1, $zero, L_80229098
    if (ctx->r3 != 0) {
        // 0x80228FEC: addiu       $s4, $s2, 0x2C8
        ctx->r20 = ADD32(ctx->r18, 0X2C8);
            goto L_80229098;
    }
    // 0x80228FEC: addiu       $s4, $s2, 0x2C8
    ctx->r20 = ADD32(ctx->r18, 0X2C8);
    // 0x80228FF0: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x80228FF4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80228FF8: beq         $v0, $zero, L_80229020
    if (ctx->r2 == 0) {
        // 0x80228FFC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80229020;
    }
    // 0x80228FFC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80229000: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80229004: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229008: sh          $v0, 0x33C($s2)
    MEM_H(0X33C, ctx->r18) = ctx->r2;
    // 0x8022900C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229010: sh          $v0, 0x33E($s2)
    MEM_H(0X33E, ctx->r18) = ctx->r2;
    // 0x80229014: sh          $zero, 0x334($s2)
    MEM_H(0X334, ctx->r18) = 0;
    // 0x80229018: j           L_80229184
    // 0x8022901C: sb          $zero, 0x348($s2)
    MEM_B(0X348, ctx->r18) = 0;
        goto L_80229184;
    // 0x8022901C: sb          $zero, 0x348($s2)
    MEM_B(0X348, ctx->r18) = 0;
L_80229020:
    // 0x80229020: lbu         $a0, 0xC($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XC);
    // 0x80229024: jal         0x80053ED8
    // 0x80229028: addiu       $s1, $s2, 0x324
    ctx->r17 = ADD32(ctx->r18, 0X324);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80229028: addiu       $s1, $s2, 0x324
    ctx->r17 = ADD32(ctx->r18, 0X324);
    after_0:
    // 0x8022902C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80229030: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229034: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80229038: jal         0x8009A3B4
    // 0x8022903C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022903C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229040: addiu       $s0, $s2, 0x314
    ctx->r16 = ADD32(ctx->r18, 0X314);
    // 0x80229044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229048: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022904C: jal         0x8009A3B4
    // 0x80229050: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229050: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80229054: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229058: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022905C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229060: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x80229064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229068: jal         0x8004DBA0
    // 0x8022906C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022906C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80229070: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80229074: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229078: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022907C: jal         0x8004F820
    // 0x80229080: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229080: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x80229084: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80229088: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022908C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229090: j           L_80229184
    // 0x80229094: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
        goto L_80229184;
    // 0x80229094: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
L_80229098:
    // 0x80229098: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x8022909C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802290A0: beq         $v0, $zero, L_80229184
    if (ctx->r2 == 0) {
        // 0x802290A4: nop
    
            goto L_80229184;
    }
    // 0x802290A4: nop

    // 0x802290A8: lhu         $v0, 0x334($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X334);
    // 0x802290AC: lbu         $v1, 0x348($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X348);
    // 0x802290B0: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x802290B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802290B8: beq         $v1, $v0, L_802290FC
    if (ctx->r3 == ctx->r2) {
        // 0x802290BC: sh          $a0, 0x334($s2)
        MEM_H(0X334, ctx->r18) = ctx->r4;
            goto L_802290FC;
    }
    // 0x802290BC: sh          $a0, 0x334($s2)
    MEM_H(0X334, ctx->r18) = ctx->r4;
    // 0x802290C0: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x802290C4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802290C8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802290CC: lh          $v1, -0x667C($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X667C);
    // 0x802290D0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802290D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802290D8: bne         $v0, $v1, L_802290FC
    if (ctx->r2 != ctx->r3) {
        // 0x802290DC: nop
    
            goto L_802290FC;
    }
    // 0x802290DC: nop

    // 0x802290E0: lbu         $v0, 0x348($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X348);
    // 0x802290E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802290E8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802290EC: lhu         $v1, -0x6688($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6688);
    // 0x802290F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802290F4: sh          $v1, 0x33C($s2)
    MEM_H(0X33C, ctx->r18) = ctx->r3;
    // 0x802290F8: sb          $v0, 0x348($s2)
    MEM_B(0X348, ctx->r18) = ctx->r2;
L_802290FC:
    // 0x802290FC: lbu         $a0, 0xC($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XC);
    // 0x80229100: jal         0x80053ED8
    // 0x80229104: addiu       $s1, $s4, 0x5C
    ctx->r17 = ADD32(ctx->r20, 0X5C);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x80229104: addiu       $s1, $s4, 0x5C
    ctx->r17 = ADD32(ctx->r20, 0X5C);
    after_5:
    // 0x80229108: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022910C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229110: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80229114: jal         0x8009A3B4
    // 0x80229118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80229118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022911C: addiu       $s0, $s4, 0x4C
    ctx->r16 = ADD32(ctx->r20, 0X4C);
    // 0x80229120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229124: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80229128: jal         0x8009A3B4
    // 0x8022912C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022912C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80229130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229134: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x80229138: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022913C: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x80229140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80229144: jal         0x8004DBA0
    // 0x80229148: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_8;
    // 0x80229148: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_8:
    // 0x8022914C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229150: lh          $a3, 0x74($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X74);
    // 0x80229154: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80229158: jal         0x8004F820
    // 0x8022915C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8022915C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x80229160: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80229164: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229168: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022916C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x80229170: lh          $v0, 0x56($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X56);
    // 0x80229174: bne         $v0, $v1, L_80229184
    if (ctx->r2 != ctx->r3) {
        // 0x80229178: nop
    
            goto L_80229184;
    }
    // 0x80229178: nop

    // 0x8022917C: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80229180: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_80229184:
    // 0x80229184: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229188: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022918C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229190: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229194: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022919C: jr          $ra
    // 0x802291A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802291A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D9F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D9F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D9F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D9FC: jal         0x8004F144
    // 0x8022DA00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022DA00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DA04: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DA08: beq         $v1, $zero, L_8022DA3C
    if (ctx->r3 == 0) {
        // 0x8022DA0C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022DA3C;
    }
    // 0x8022DA0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DA10: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022DA14: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DA18: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022DA1C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022DA20: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022DA24: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022DA28: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x8022DA2C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022DA30: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x8022DA34: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022DA38: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_8022DA3C:
    // 0x8022DA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA44: jr          $ra
    // 0x8022DA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232834_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232834: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232838: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023283C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80232840: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232844: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232848: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023284C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232850: lb          $v1, 0xF($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XF);
    // 0x80232854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232858: bne         $v1, $v0, L_8023295C
    if (ctx->r3 != ctx->r2) {
        // 0x8023285C: nop
    
            goto L_8023295C;
    }
    // 0x8023285C: nop

    // 0x80232860: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x80232864: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80232868: bne         $v0, $zero, L_80232950
    if (ctx->r2 != 0) {
        // 0x8023286C: nop
    
            goto L_80232950;
    }
    // 0x8023286C: nop

    // 0x80232870: jal         0x8004F144
    // 0x80232874: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80232874: nop

    after_0:
    // 0x80232878: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023287C: beq         $s2, $zero, L_80232950
    if (ctx->r18 == 0) {
        // 0x80232880: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232950;
    }
    // 0x80232880: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232884: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80232888: lbu         $s0, 0xC($s3)
    ctx->r16 = MEM_BU(ctx->r19, 0XC);
    // 0x8023288C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80232890: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80232894: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80232898: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8023289C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x802328A0: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x802328A4: addiu       $s1, $zero, 0x40
    ctx->r17 = ADD32(0, 0X40);
    // 0x802328A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802328AC: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
    // 0x802328B0: sb          $s1, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r17;
    // 0x802328B4: sb          $a0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r4;
    // 0x802328B8: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x802328BC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802328C0: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x802328C4: jal         0x800A3450
    // 0x802328C8: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802328C8: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    after_1:
    // 0x802328CC: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    // 0x802328D0: sra         $s0, $s0, 20
    ctx->r16 = S32(SIGNED(ctx->r16) >> 20);
    // 0x802328D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802328D8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802328DC: lhu         $v1, -0x5C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5C50);
    // 0x802328E0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802328E4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802328E8: jal         0x800A3450
    // 0x802328EC: sh          $v1, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802328EC: sh          $v1, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r3;
    after_2:
    // 0x802328F0: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x802328F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802328F8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802328FC: lhu         $v1, -0x5C4C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5C4C);
    // 0x80232900: ori         $a0, $a0, 0xE
    ctx->r4 = ctx->r4 | 0XE;
    // 0x80232904: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80232908: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023290C: sh          $v1, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r3;
    // 0x80232910: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232914: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80232918: lhu         $v1, -0x5C4E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5C4E);
    // 0x8023291C: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80232920: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232924: sw          $a0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r4;
    // 0x80232928: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023292C: sb          $s1, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r17;
    // 0x80232930: sb          $zero, 0x23($s2)
    MEM_B(0X23, ctx->r18) = 0;
    // 0x80232934: sh          $v1, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r3;
    // 0x80232938: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023293C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80232940: lbu         $v0, -0x5C48($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5C48);
    // 0x80232944: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232948: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023294C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
L_80232950:
    // 0x80232950: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x80232954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232958: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8023295C:
    // 0x8023295C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232960: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232964: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232968: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023296C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232970: jr          $ra
    // 0x80232974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232794_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232798: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023279C: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x802327A0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802327A4: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802327A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802327AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802327B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802327B4: lbu         $v0, -0x5D9B($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X5D9B);
    // 0x802327B8: bne         $v1, $v0, L_802327C8
    if (ctx->r3 != ctx->r2) {
        // 0x802327BC: nop
    
            goto L_802327C8;
    }
    // 0x802327BC: nop

    // 0x802327C0: jal         0x8004F5C4
    // 0x802327C4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802327C4: nop

    after_0:
L_802327C8:
    // 0x802327C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802327CC: jr          $ra
    // 0x802327D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802327D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802327D4: nop

    // 0x802327D8: nop

    // 0x802327DC: nop

;}
RECOMP_FUNC void func_802257E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257F4: bne         $v0, $zero, L_80225828
    if (ctx->r2 != 0) {
        // 0x802257F8: nop
    
            goto L_80225828;
    }
    // 0x802257F8: nop

    // 0x802257FC: jal         0x8006033C
    // 0x80225800: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225800: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_0:
    // 0x80225804: bne         $v0, $zero, L_80225828
    if (ctx->r2 != 0) {
        // 0x80225808: nop
    
            goto L_80225828;
    }
    // 0x80225808: nop

    // 0x8022580C: jal         0x8006036C
    // 0x80225810: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225810: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_1:
    // 0x80225814: jal         0x80060690
    // 0x80225818: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x80225818: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_2:
    // 0x8022581C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225820: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225824: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225828:
    // 0x80225828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022582C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225830: jr          $ra
    // 0x80225834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D7C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7C0: jr          $ra
    // 0x8022D7C4: nop

    TRACE_RETURN()
    return;
    // 0x8022D7C4: nop

;}
RECOMP_FUNC void func_80230A94_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230A98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230AA0: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80230AA4: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x80230AA8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80230AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230AB0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80230AB4: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x80230AB8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80230ABC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80230AC0: beql        $v0, $v1, L_80230B08
    if (ctx->r2 == ctx->r3) {
        // 0x80230AC4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230B08;
    }
    goto skip_0;
    // 0x80230AC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80230AC8: beq         $a1, $zero, L_80230AE0
    if (ctx->r5 == 0) {
        // 0x80230ACC: nop
    
            goto L_80230AE0;
    }
    // 0x80230ACC: nop

    // 0x80230AD0: jal         0x8006033C
    // 0x80230AD4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230AD4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80230AD8: beq         $v0, $zero, L_80230B08
    if (ctx->r2 == 0) {
        // 0x80230ADC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230B08;
    }
    // 0x80230ADC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230AE0:
    // 0x80230AE0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230AE4: jal         0x8006033C
    // 0x80230AE8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80230AE8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x80230AEC: bne         $v0, $zero, L_80230B08
    if (ctx->r2 != 0) {
        // 0x80230AF0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230B08;
    }
    // 0x80230AF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80230AF4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230AF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230AFC: bne         $v1, $v0, L_80230B08
    if (ctx->r3 != ctx->r2) {
        // 0x80230B00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230B08;
    }
    // 0x80230B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230B04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230B08:
    // 0x80230B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B10: jr          $ra
    // 0x80230B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231D18_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231D1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231D20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231D28: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80231D2C: blez        $v0, L_80231DB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231D30: nop
    
            goto L_80231DB4;
    }
    // 0x80231D30: nop

    // 0x80231D34: jal         0x800A3450
    // 0x80231D38: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231D38: nop

    after_0:
    // 0x80231D3C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231D40: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231D44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231D48: jal         0x800A3450
    // 0x80231D4C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231D4C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231D50: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80231D54: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231D58: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231D5C: jal         0x800A3450
    // 0x80231D60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231D60: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80231D64: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x80231D68: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80231D6C: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x80231D70: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x80231D74: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231D78: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231D7C: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80231D80: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x80231D84: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80231D88: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80231D8C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80231D90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231D94: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80231D98: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80231D9C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80231DA0: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x80231DA4: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x80231DA8: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x80231DAC: j           L_80231DBC
    // 0x80231DB0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_80231DBC;
    // 0x80231DB0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_80231DB4:
    // 0x80231DB4: jal         0x8004F5C4
    // 0x80231DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80231DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80231DBC:
    // 0x80231DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231DC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DC4: jr          $ra
    // 0x80231DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231DCC: nop

;}
RECOMP_FUNC void func_80233D10_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233D10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233D14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233D18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233D1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233D20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233D24: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80233D28: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80233D2C: beq         $v0, $zero, L_80233EC0
    if (ctx->r2 == 0) {
        // 0x80233D30: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80233EC0;
    }
    // 0x80233D30: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80233D34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233D38: addu        $at, $at, $v0
    gpr jr_addend_80233D40 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233D3C: lw          $v0, -0x38C0($at)
    ctx->r2 = ADD32(ctx->r1, -0X38C0);
    // 0x80233D40: jr          $v0
    // 0x80233D44: nop

    switch (jr_addend_80233D40 >> 2) {
        case 0: goto L_80233D48; break;
        case 1: goto L_80233D8C; break;
        case 2: goto L_80233DB4; break;
        case 3: goto L_80233E68; break;
        case 4: goto L_80233E98; break;
        default: switch_error(__func__, 0x80233D40, 0x8023C740);
    }
    // 0x80233D44: nop

L_80233D48:
    // 0x80233D48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233D4C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80233D50: bne         $v0, $zero, L_80233EC0
    if (ctx->r2 != 0) {
        // 0x80233D54: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80233EC0;
    }
    // 0x80233D54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80233D58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80233D5C: jal         0x80036B00
    // 0x80233D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80233D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80233D64: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x80233D68: jal         0x8004CB2C
    // 0x80233D6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80233D6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80233D70: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80233D74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80233D78: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233D7C: jal         0x80036340
    // 0x80233D80: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_80036340_11740(rdram, ctx);
        goto after_2;
    // 0x80233D80: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_2:
    // 0x80233D84: j           L_80233E58
    // 0x80233D88: nop

        goto L_80233E58;
    // 0x80233D88: nop

L_80233D8C:
    // 0x80233D8C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80233D90: jal         0x80036B1C
    // 0x80233D94: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x80233D94: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
    after_3:
    // 0x80233D98: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80233D9C: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80233DA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233DA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233DA8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80233DAC: j           L_80233EC0
    // 0x80233DB0: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
        goto L_80233EC0;
    // 0x80233DB0: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
L_80233DB4:
    // 0x80233DB4: jal         0x80036B7C
    // 0x80233DB8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80233DB8: nop

    after_4:
    // 0x80233DBC: beq         $v0, $zero, L_80233EC0
    if (ctx->r2 == 0) {
        // 0x80233DC0: nop
    
            goto L_80233EC0;
    }
    // 0x80233DC0: nop

    // 0x80233DC4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80233DC8: addiu       $s0, $s0, -0x5BBC
    ctx->r16 = ADD32(ctx->r16, -0X5BBC);
    // 0x80233DCC: jal         0x8005FA7C
    // 0x80233DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80233DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80233DD4: jal         0x8005FA7C
    // 0x80233DD8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80233DD8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x80233DDC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80233DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233DE4: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80233DE8: addiu       $v0, $zero, -0xBB8
    ctx->r2 = ADD32(0, -0XBB8);
    // 0x80233DEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233DF0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233DF4: addiu       $v0, $zero, -0xA00
    ctx->r2 = ADD32(0, -0XA00);
    // 0x80233DF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233DFC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80233E00: lui         $v0, 0xF448
    ctx->r2 = S32(0XF448 << 16);
    // 0x80233E04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233E08: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80233E0C: lui         $v0, 0xF600
    ctx->r2 = S32(0XF600 << 16);
    // 0x80233E10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233E14: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80233E18: jal         0x800712C4
    // 0x80233E1C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_7;
    // 0x80233E1C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_7:
    // 0x80233E20: jal         0x800712C4
    // 0x80233E24: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_8;
    // 0x80233E24: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_8:
    // 0x80233E28: jal         0x800712C4
    // 0x80233E2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_9;
    // 0x80233E2C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_9:
    // 0x80233E30: jal         0x800712C4
    // 0x80233E34: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_10;
    // 0x80233E34: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_10:
    // 0x80233E38: jal         0x800712C4
    // 0x80233E3C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_11;
    // 0x80233E3C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_11:
    // 0x80233E40: jal         0x800712C4
    // 0x80233E44: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_12;
    // 0x80233E44: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_12:
    // 0x80233E48: jal         0x802342A4
    // 0x80233E4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802342A4_ovl27(rdram, ctx);
        goto after_13;
    // 0x80233E4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_13:
    // 0x80233E50: jal         0x80036E48
    // 0x80233E54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80036E48_12248(rdram, ctx);
        goto after_14;
    // 0x80233E54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_14:
L_80233E58:
    // 0x80233E58: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80233E5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233E60: j           L_80233EC0
    // 0x80233E64: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80233EC0;
    // 0x80233E64: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80233E68:
    // 0x80233E68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233E6C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80233E70: bne         $v0, $zero, L_80233EC0
    if (ctx->r2 != 0) {
        // 0x80233E74: nop
    
            goto L_80233EC0;
    }
    // 0x80233E74: nop

    // 0x80233E78: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80233E7C: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80233E80: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80233E84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233E88: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233E8C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80233E90: j           L_80233EC0
    // 0x80233E94: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
        goto L_80233EC0;
    // 0x80233E94: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
L_80233E98:
    // 0x80233E98: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80233E9C: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80233EA0: bne         $v1, $v0, L_80233EC0
    if (ctx->r3 != ctx->r2) {
        // 0x80233EA4: nop
    
            goto L_80233EC0;
    }
    // 0x80233EA4: nop

    // 0x80233EA8: jal         0x800600F8
    // 0x80233EAC: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_15;
    // 0x80233EAC: nop

    after_15:
    // 0x80233EB0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x80233EB4: jal         0x8004CB2C
    // 0x80233EB8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_16;
    // 0x80233EB8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_16:
    // 0x80233EBC: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
L_80233EC0:
    // 0x80233EC0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233EC4: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233EC8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233ECC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233ED0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233ED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233ED8: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233EE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233EE4: jal         0x8006072C
    // 0x80233EE8: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    func_8006072C_3BB2C(rdram, ctx);
        goto after_17;
    // 0x80233EE8: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    after_17:
    // 0x80233EEC: beq         $v0, $zero, L_80233F00
    if (ctx->r2 == 0) {
        // 0x80233EF0: nop
    
            goto L_80233F00;
    }
    // 0x80233EF0: nop

    // 0x80233EF4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80233EF8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233EFC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80233F00:
    // 0x80233F00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233F04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233F0C: jr          $ra
    // 0x80233F10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233F10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EED4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EEDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEE0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022EEE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EEEC: jal         0x8009A3B4
    // 0x8022EEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EEF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EEFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EF00: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022EF04: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022EF08: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022EF0C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022EF10: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022EF14: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022EF18: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022EF1C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022EF20: jal         0x8004D5D4
    // 0x8022EF24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022EF24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EF28: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022EF2C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EF30: addiu       $v0, $v0, -0x5F18
    ctx->r2 = ADD32(ctx->r2, -0X5F18);
    // 0x8022EF34: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022EF38: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022EF3C: addiu       $v0, $v0, -0x5F0C
    ctx->r2 = ADD32(ctx->r2, -0X5F0C);
    // 0x8022EF40: beq         $v1, $zero, L_8022EF50
    if (ctx->r3 == 0) {
        // 0x8022EF44: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_8022EF50;
    }
    // 0x8022EF44: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022EF48: j           L_8022EF54
    // 0x8022EF4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022EF54;
    // 0x8022EF4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022EF50:
    // 0x8022EF50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EF54:
    // 0x8022EF54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022EF58: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022EF5C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022EF60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EF64: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022EF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF70: jr          $ra
    // 0x8022EF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C830_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C834: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C838: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C83C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C840: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C844: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C848: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C84C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C850: jal         0x8004F820
    // 0x8022C854: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C854: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022C858: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C85C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C860: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C864: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C868: bne         $v0, $zero, L_8022C878
    if (ctx->r2 != 0) {
        // 0x8022C86C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C878;
    }
    // 0x8022C86C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C874: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C878:
    // 0x8022C878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C87C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C880: jr          $ra
    // 0x8022C884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802359F4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802359F4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802359F8: bne         $v0, $zero, L_80235A14
    if (ctx->r2 != 0) {
        // 0x802359FC: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_80235A14;
    }
    // 0x802359FC: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80235A00: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80235A04: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80235A08: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80235A0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235A10: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_80235A14:
    // 0x80235A14: jr          $ra
    // 0x80235A18: nop

    TRACE_RETURN()
    return;
    // 0x80235A18: nop

;}
RECOMP_FUNC void func_80226ACC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226AD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226AD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226AD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226ADC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226AE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226AE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226AE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226AEC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226AF0: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80226AF4: bne         $v1, $v0, L_80226B10
    if (ctx->r3 != ctx->r2) {
        // 0x80226AF8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226B10;
    }
    // 0x80226AF8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226AFC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80226B00: addiu       $s1, $s1, -0x67A0
    ctx->r17 = ADD32(ctx->r17, -0X67A0);
    // 0x80226B04: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80226B08: j           L_80226B20
    // 0x80226B0C: addiu       $s3, $s3, -0x6780
    ctx->r19 = ADD32(ctx->r19, -0X6780);
        goto L_80226B20;
    // 0x80226B0C: addiu       $s3, $s3, -0x6780
    ctx->r19 = ADD32(ctx->r19, -0X6780);
L_80226B10:
    // 0x80226B10: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80226B14: addiu       $s1, $s1, -0x67B0
    ctx->r17 = ADD32(ctx->r17, -0X67B0);
    // 0x80226B18: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80226B1C: addiu       $s3, $s3, -0x6790
    ctx->r19 = ADD32(ctx->r19, -0X6790);
L_80226B20:
    // 0x80226B20: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80226B24: jal         0x800A3450
    // 0x80226B28: addiu       $s4, $s4, -0x6770
    ctx->r20 = ADD32(ctx->r20, -0X6770);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226B28: addiu       $s4, $s4, -0x6770
    ctx->r20 = ADD32(ctx->r20, -0X6770);
    after_0:
    // 0x80226B2C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226B30: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226B34: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80226B38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B3C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80226B40: beq         $v1, $v0, L_80226BCC
    if (ctx->r3 == ctx->r2) {
        // 0x80226B44: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226BCC;
    }
    // 0x80226B44: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226B48: beql        $v0, $zero, L_80226B60
    if (ctx->r2 == 0) {
        // 0x80226B4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226B60;
    }
    goto skip_0;
    // 0x80226B4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226B50: beq         $v1, $zero, L_80226B70
    if (ctx->r3 == 0) {
        // 0x80226B54: nop
    
            goto L_80226B70;
    }
    // 0x80226B54: nop

    // 0x80226B58: j           L_80226C5C
    // 0x80226B5C: nop

        goto L_80226C5C;
    // 0x80226B5C: nop

L_80226B60:
    // 0x80226B60: beq         $v1, $v0, L_80226BE0
    if (ctx->r3 == ctx->r2) {
        // 0x80226B64: nop
    
            goto L_80226BE0;
    }
    // 0x80226B64: nop

    // 0x80226B68: j           L_80226C5C
    // 0x80226B6C: nop

        goto L_80226C5C;
    // 0x80226B6C: nop

L_80226B70:
    // 0x80226B70: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226B74: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80226B78: bne         $v0, $zero, L_80226B9C
    if (ctx->r2 != 0) {
        // 0x80226B7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226B9C;
    }
    // 0x80226B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226B80: jal         0x800A3450
    // 0x80226B84: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80226B84: nop

    after_1:
    // 0x80226B88: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226B8C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226B90: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226B94: beq         $v0, $zero, L_80226BA8
    if (ctx->r2 == 0) {
        // 0x80226B98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226BA8;
    }
    // 0x80226B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226B9C:
    // 0x80226B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226BA0: j           L_80226BBC
    // 0x80226BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80226BBC;
    // 0x80226BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226BA8:
    // 0x80226BA8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226BAC: jal         0x80227F38
    // 0x80226BB0: nop

    func_80227F38_ovl27(rdram, ctx);
        goto after_2;
    // 0x80226BB0: nop

    after_2:
    // 0x80226BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80226BBC:
    // 0x80226BBC: jal         0x80227F78
    // 0x80226BC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80227F78_ovl27(rdram, ctx);
        goto after_3;
    // 0x80226BC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80226BC4: j           L_80226C80
    // 0x80226BC8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80226C80;
    // 0x80226BC8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80226BCC:
    // 0x80226BCC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226BD0: jal         0x80227F28
    // 0x80226BD4: nop

    func_80227F28_ovl27(rdram, ctx);
        goto after_4;
    // 0x80226BD4: nop

    after_4:
    // 0x80226BD8: j           L_80226C80
    // 0x80226BDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226C80;
    // 0x80226BDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226BE0:
    // 0x80226BE0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80226BE4: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80226BE8: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x80226BEC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80226BF0: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80226BF4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226BF8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226BFC: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80226C00: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80226C04: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80226C08: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226C0C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226C10: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80226C14: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80226C18: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80226C1C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80226C20: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80226C24: beq         $v1, $zero, L_80226C54
    if (ctx->r3 == 0) {
        // 0x80226C28: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80226C54;
    }
    // 0x80226C28: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80226C2C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80226C30: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80226C34: beq         $v0, $zero, L_80226C54
    if (ctx->r2 == 0) {
        // 0x80226C38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226C54;
    }
    // 0x80226C38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C3C: jal         0x80227F78
    // 0x80226C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227F78_ovl27(rdram, ctx);
        goto after_5;
    // 0x80226C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80226C44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226C48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226C4C: j           L_80226C80
    // 0x80226C50: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226C80;
    // 0x80226C50: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226C54:
    // 0x80226C54: j           L_80226C80
    // 0x80226C58: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80226C80;
    // 0x80226C58: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_80226C5C:
    // 0x80226C5C: jal         0x800A3450
    // 0x80226C60: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80226C60: nop

    after_6:
    // 0x80226C64: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226C68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226C6C: jal         0x80227F38
    // 0x80226C70: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80227F38_ovl27(rdram, ctx);
        goto after_7;
    // 0x80226C70: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80226C74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C7C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80226C80:
    // 0x80226C80: jal         0x800A3450
    // 0x80226C84: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80226C84: nop

    after_8:
    // 0x80226C88: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226C8C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80226C90: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226C94: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80226C98: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80226C9C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226CA0: beq         $v1, $v0, L_80226CB8
    if (ctx->r3 == ctx->r2) {
        // 0x80226CA4: nop
    
            goto L_80226CB8;
    }
    // 0x80226CA4: nop

    // 0x80226CA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226CAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226CB0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226CB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226CB8:
    // 0x80226CB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226CBC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226CC0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226CC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CD0: jr          $ra
    // 0x80226CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802255E8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255FC: bne         $v0, $zero, L_80225618
    if (ctx->r2 != 0) {
        // 0x80225600: nop
    
            goto L_80225618;
    }
    // 0x80225600: nop

    // 0x80225604: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225608: jal         0x800607C4
    // 0x8022560C: addiu       $a0, $a0, -0x6F50
    ctx->r4 = ADD32(ctx->r4, -0X6F50);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022560C: addiu       $a0, $a0, -0x6F50
    ctx->r4 = ADD32(ctx->r4, -0X6F50);
    after_0:
    // 0x80225610: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
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
RECOMP_FUNC void func_8022B4E8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B4EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B4F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B4F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B4FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B500: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B504: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B508: bne         $v1, $v0, L_8022B638
    if (ctx->r3 != ctx->r2) {
        // 0x8022B50C: addiu       $s2, $s0, 0x2E8
        ctx->r18 = ADD32(ctx->r16, 0X2E8);
            goto L_8022B638;
    }
    // 0x8022B50C: addiu       $s2, $s0, 0x2E8
    ctx->r18 = ADD32(ctx->r16, 0X2E8);
    // 0x8022B510: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022B514: bne         $v0, $zero, L_8022B52C
    if (ctx->r2 != 0) {
        // 0x8022B518: addiu       $a0, $zero, 0x1B5
        ctx->r4 = ADD32(0, 0X1B5);
            goto L_8022B52C;
    }
    // 0x8022B518: addiu       $a0, $zero, 0x1B5
    ctx->r4 = ADD32(0, 0X1B5);
    // 0x8022B51C: jal         0x8002A33C
    // 0x8022B520: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B520: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B528: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022B52C:
    // 0x8022B52C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022B530: beq         $v0, $zero, L_8022B600
    if (ctx->r2 == 0) {
        // 0x8022B534: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B600;
    }
    // 0x8022B534: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B538: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8022B53C: bne         $v0, $zero, L_8022B5F0
    if (ctx->r2 != 0) {
        // 0x8022B540: addiu       $a0, $s0, 0x30C
        ctx->r4 = ADD32(ctx->r16, 0X30C);
            goto L_8022B5F0;
    }
    // 0x8022B540: addiu       $a0, $s0, 0x30C
    ctx->r4 = ADD32(ctx->r16, 0X30C);
    // 0x8022B544: lbu         $v1, 0x361($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X361);
    // 0x8022B548: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B54C: addiu       $v0, $v0, -0x6536
    ctx->r2 = ADD32(ctx->r2, -0X6536);
    // 0x8022B550: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022B554: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8022B558: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022B55C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8022B560: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022B564: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B568: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B56C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B570: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022B574: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022B578: lbu         $s1, -0x6538($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X6538);
    // 0x8022B57C: jal         0x8009A3B4
    // 0x8022B580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B584: jal         0x8004F144
    // 0x8022B588: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022B588: nop

    after_2:
    // 0x8022B58C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022B590: beq         $a1, $zero, L_8022B5F0
    if (ctx->r5 == 0) {
        // 0x8022B594: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022B5F0;
    }
    // 0x8022B594: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B598: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022B59C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B5A0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022B5A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B5A8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022B5AC: lbu         $v0, 0x361($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X361);
    // 0x8022B5B0: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x8022B5B4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022B5B8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022B5BC: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022B5C0: lhu         $v0, 0x180($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X180);
    // 0x8022B5C4: lhu         $v1, 0x30C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30C);
    // 0x8022B5C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B5CC: sh          $v0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r2;
    // 0x8022B5D0: lhu         $v0, 0x182($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X182);
    // 0x8022B5D4: lhu         $v1, 0x30E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30E);
    // 0x8022B5D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B5DC: sh          $v0, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r2;
    // 0x8022B5E0: lhu         $v0, 0x184($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X184);
    // 0x8022B5E4: lhu         $v1, 0x310($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X310);
    // 0x8022B5E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B5EC: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
L_8022B5F0:
    // 0x8022B5F0: lhu         $v0, 0x76($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X76);
    // 0x8022B5F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B5F8: j           L_8022B638
    // 0x8022B5FC: sh          $v0, 0x76($s2)
    MEM_H(0X76, ctx->r18) = ctx->r2;
        goto L_8022B638;
    // 0x8022B5FC: sh          $v0, 0x76($s2)
    MEM_H(0X76, ctx->r18) = ctx->r2;
L_8022B600:
    // 0x8022B600: jal         0x8006FF58
    // 0x8022B604: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_3;
    // 0x8022B604: nop

    after_3:
    // 0x8022B608: beq         $v0, $zero, L_8022B634
    if (ctx->r2 == 0) {
        // 0x8022B60C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022B634;
    }
    // 0x8022B60C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022B610: jal         0x8006036C
    // 0x8022B614: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022B614: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_4:
    // 0x8022B618: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x8022B61C: jal         0x8002A33C
    // 0x8022B620: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B620: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022B624: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B628: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B62C: j           L_8022B638
    // 0x8022B630: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B638;
    // 0x8022B630: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B634:
    // 0x8022B634: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
L_8022B638:
    // 0x8022B638: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B63C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B640: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B644: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B648: jr          $ra
    // 0x8022B64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B64C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E194_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E198: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E19C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E1A4: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x8022E1A8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E1AC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E1B0: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E1B4: lbu         $a2, 0xB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB);
    // 0x8022E1B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E1BC: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x8022E1C0: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x8022E1C4: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8022E1C8: bne         $a2, $zero, L_8022E214
    if (ctx->r6 != 0) {
        // 0x8022E1CC: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_8022E214;
    }
    // 0x8022E1CC: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x8022E1D0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E1D4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E1D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E1DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E1E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022E1E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E1E8: jal         0x8022E634
    // 0x8022E1EC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_8022E634_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022E1EC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022E1F0: addiu       $a0, $s0, 0xA4
    ctx->r4 = ADD32(ctx->r16, 0XA4);
    // 0x8022E1F4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022E1F8: jal         0x8009A3B4
    // 0x8022E1FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E1FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E200: addiu       $a0, $zero, 0xF1
    ctx->r4 = ADD32(0, 0XF1);
    // 0x8022E204: jal         0x8002A33C
    // 0x8022E208: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022E208: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022E20C: j           L_8022E21C
    // 0x8022E210: nop

        goto L_8022E21C;
    // 0x8022E210: nop

L_8022E214:
    // 0x8022E214: jal         0x8022E7E4
    // 0x8022E218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E7E4_ovl27(rdram, ctx);
        goto after_3;
    // 0x8022E218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022E21C:
    // 0x8022E21C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E224: jr          $ra
    // 0x8022E228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802307C4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802307C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802307C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802307CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802307D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802307D4: jal         0x8004F2C4
    // 0x802307D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x802307D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802307DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802307E0: beq         $s0, $zero, L_80230864
    if (ctx->r16 == 0) {
        // 0x802307E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230864;
    }
    // 0x802307E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802307E8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802307EC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802307F0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802307F4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802307F8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802307FC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230800: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230804: jal         0x8009A3B4
    // 0x80230808: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230808: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023080C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230814: addiu       $a1, $a0, 0x3
    ctx->r5 = ADD32(ctx->r4, 0X3);
    // 0x80230818: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023081C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80230820: sw          $s1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r17;
    // 0x80230824: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80230828: jal         0x8004D5D4
    // 0x8023082C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8023082C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    after_2:
    // 0x80230830: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230834: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80230838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023083C: jal         0x8004D5D4
    // 0x80230840: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80230840: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x80230844: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230848: jal         0x8002C654
    // 0x8023084C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x8023084C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230850: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230854: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230858: jal         0x800319B4
    // 0x8023085C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8023085C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_5:
    // 0x80230860: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80230864:
    // 0x80230864: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023086C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230870: jr          $ra
    // 0x80230874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802320F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320F0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802320F4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802320F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802320FC: beq         $v1, $a0, L_80232184
    if (ctx->r3 == ctx->r4) {
        // 0x80232100: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80232184;
    }
    // 0x80232100: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80232104: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232108: beq         $v0, $zero, L_802321BC
    if (ctx->r2 == 0) {
        // 0x8023210C: nop
    
            goto L_802321BC;
    }
    // 0x8023210C: nop

    // 0x80232110: bne         $v1, $zero, L_802321BC
    if (ctx->r3 != 0) {
        // 0x80232114: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802321BC;
    }
    // 0x80232114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232118: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8023211C: beq         $v1, $a0, L_80232160
    if (ctx->r3 == ctx->r4) {
        // 0x80232120: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_80232160;
    }
    // 0x80232120: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80232124: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232128: beql        $v0, $zero, L_80232140
    if (ctx->r2 == 0) {
        // 0x8023212C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232140;
    }
    goto skip_0;
    // 0x8023212C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232130: beq         $v1, $zero, L_80232150
    if (ctx->r3 == 0) {
        // 0x80232134: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80232150;
    }
    // 0x80232134: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232138: j           L_80232184
    // 0x8023213C: nop

        goto L_80232184;
    // 0x8023213C: nop

L_80232140:
    // 0x80232140: beq         $v1, $v0, L_80232174
    if (ctx->r3 == ctx->r2) {
        // 0x80232144: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80232174;
    }
    // 0x80232144: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232148: j           L_80232184
    // 0x8023214C: nop

        goto L_80232184;
    // 0x8023214C: nop

L_80232150:
    // 0x80232150: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80232154: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80232158: j           L_80232180
    // 0x8023215C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80232180;
    // 0x8023215C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80232160:
    // 0x80232160: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232164: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232168: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023216C: j           L_80232180
    // 0x80232170: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80232180;
    // 0x80232170: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80232174:
    // 0x80232174: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232178: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023217C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_80232180:
    // 0x80232180: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_80232184:
    // 0x80232184: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80232188: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023218C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80232190: bne         $v0, $zero, L_802321A8
    if (ctx->r2 != 0) {
        // 0x80232194: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_802321A8;
    }
    // 0x80232194: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80232198: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023219C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802321A0: j           L_802321BC
    // 0x802321A4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_802321BC;
    // 0x802321A4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_802321A8:
    // 0x802321A8: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x802321AC: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802321B0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x802321B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802321B8: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_802321BC:
    // 0x802321BC: jr          $ra
    // 0x802321C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802321C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
