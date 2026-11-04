#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C418_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C418: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C41C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C420: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C424: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022C428: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022C42C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C430: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C434: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C438: beq         $v1, $zero, L_8022C454
    if (ctx->r3 == 0) {
        // 0x8022C43C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022C454;
    }
    // 0x8022C43C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022C440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C444: beq         $v1, $v0, L_8022C49C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C448: nop
    
            goto L_8022C49C;
    }
    // 0x8022C448: nop

    // 0x8022C44C: j           L_8022C5E0
    // 0x8022C450: nop

        goto L_8022C5E0;
    // 0x8022C450: nop

L_8022C454:
    // 0x8022C454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C458: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022C45C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C460: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022C464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C468: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C46C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C470: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C474: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022C478: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x8022C47C: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x8022C480: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x8022C484: jal         0x80050294
    // 0x8022C488: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022C488: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022C48C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C490: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022C494: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C498: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C49C:
    // 0x8022C49C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022C4A0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C4A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C4A8: beq         $v0, $zero, L_8022C4EC
    if (ctx->r2 == 0) {
        // 0x8022C4AC: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_8022C4EC;
    }
    // 0x8022C4AC: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C4B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C4B4: jal         0x8009A3B4
    // 0x8022C4B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C4B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C4BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C4C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C4C4: jal         0x8009A3B4
    // 0x8022C4C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C4C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022C4CC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C4D0: beq         $v0, $zero, L_8022C5E0
    if (ctx->r2 == 0) {
        // 0x8022C4D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C5E0;
    }
    // 0x8022C4D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C4DC: jal         0x80050294
    // 0x8022C4E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022C4E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022C4E4: j           L_8022C5E0
    // 0x8022C4E8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8022C5E0;
    // 0x8022C4E8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022C4EC:
    // 0x8022C4EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4F0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C4F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C4F8: jal         0x8004DA90
    // 0x8022C4FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022C4FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022C500: jal         0x80040F30
    // 0x8022C504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022C504: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C508: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C50C: beq         $s2, $zero, L_8022C51C
    if (ctx->r18 == 0) {
        // 0x8022C510: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8022C51C;
    }
    // 0x8022C510: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8022C514: jal         0x80040834
    // 0x8022C518: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x8022C518: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8022C51C:
    // 0x8022C51C: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022C520: lh          $v0, 0x1C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1C);
    // 0x8022C524: bgez        $a2, L_8022C530
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022C528: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022C530;
    }
    // 0x8022C528: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022C52C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8022C530:
    // 0x8022C530: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C534: bltzl       $v0, L_8022C53C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C538: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022C53C;
    }
    goto skip_0;
    // 0x8022C538: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022C53C:
    // 0x8022C53C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C540: bne         $v0, $zero, L_8022C554
    if (ctx->r2 != 0) {
        // 0x8022C544: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8022C554;
    }
    // 0x8022C544: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8022C548: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x8022C54C: j           L_8022C564
    // 0x8022C550: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022C564;
    // 0x8022C550: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022C554:
    // 0x8022C554: bgez        $a2, L_8022C560
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022C558: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022C560;
    }
    // 0x8022C558: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022C55C: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022C560:
    // 0x8022C560: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022C564:
    // 0x8022C564: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022C568: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C56C: jal         0x8004DE68
    // 0x8022C570: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x8022C570: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_7:
    // 0x8022C574: sltiu       $v0, $v0, 0x1001
    ctx->r2 = ctx->r2 < 0X1001 ? 1 : 0;
    // 0x8022C578: bne         $v0, $zero, L_8022C5A4
    if (ctx->r2 != 0) {
        // 0x8022C57C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C5A4;
    }
    // 0x8022C57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C580: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C584: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C588: jal         0x8009A3B4
    // 0x8022C58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022C590: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C594: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C598: jal         0x8009A3B4
    // 0x8022C59C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022C59C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x8022C5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C5A4:
    // 0x8022C5A4: jal         0x8022C914
    // 0x8022C5A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022C914_ovl29(rdram, ctx);
        goto after_10;
    // 0x8022C5A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8022C5AC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C5B0: bgez        $v0, L_8022C5E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C5B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C5E0;
    }
    // 0x8022C5B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C5B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C5BC: jal         0x80050294
    // 0x8022C5C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022C5C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8022C5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C5CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C5D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022C5D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C5D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C5DC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022C5E0:
    // 0x8022C5E0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C5E4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C5E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C5EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C5F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C5F4: jr          $ra
    // 0x8022C5F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C5F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022DDE4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DDEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DDF0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022DDF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DDF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DDFC: jal         0x8009A3B4
    // 0x8022DE00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DE00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DE04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DE10: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DE14: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DE18: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022DE1C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022DE20: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022DE24: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022DE28: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022DE2C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022DE30: jal         0x8004D5D4
    // 0x8022DE34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022DE34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DE38: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022DE3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DE40: addiu       $v0, $v0, 0x15F8
    ctx->r2 = ADD32(ctx->r2, 0X15F8);
    // 0x8022DE44: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022DE48: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DE4C: addiu       $v0, $v0, 0x1604
    ctx->r2 = ADD32(ctx->r2, 0X1604);
    // 0x8022DE50: beq         $v1, $zero, L_8022DE60
    if (ctx->r3 == 0) {
        // 0x8022DE54: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_8022DE60;
    }
    // 0x8022DE54: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022DE58: j           L_8022DE64
    // 0x8022DE5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022DE64;
    // 0x8022DE5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022DE60:
    // 0x8022DE60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DE64:
    // 0x8022DE64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DE68: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022DE6C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022DE70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DE74: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022DE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE80: jr          $ra
    // 0x8022DE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227190_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022719C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802271A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802271A4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802271A8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802271AC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802271B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802271B4: beq         $v1, $zero, L_802271C4
    if (ctx->r3 == 0) {
        // 0x802271B8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_802271C4;
    }
    // 0x802271B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802271BC: j           L_802271CC
    // 0x802271C0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_802271CC;
    // 0x802271C0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_802271C4:
    // 0x802271C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802271CC:
    // 0x802271CC: jal         0x8004D5D4
    // 0x802271D0: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802271D0: nop

    after_0:
    // 0x802271D4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802271D8: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x802271DC: bne         $a0, $v0, L_802271EC
    if (ctx->r4 != ctx->r2) {
        // 0x802271E0: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_802271EC;
    }
    // 0x802271E0: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x802271E4: j           L_80227260
    // 0x802271E8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80227260;
    // 0x802271E8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_802271EC:
    // 0x802271EC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802271F0: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x802271F4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802271F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802271FC: bne         $v1, $zero, L_80227260
    if (ctx->r3 != 0) {
        // 0x80227200: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80227260;
    }
    // 0x80227200: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80227204: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80227208: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022720C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80227210: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227214: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227218: bne         $v1, $zero, L_80227260
    if (ctx->r3 != 0) {
        // 0x8022721C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80227260;
    }
    // 0x8022721C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80227220: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80227224: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227228: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022722C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227230: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227234: bne         $v1, $zero, L_80227260
    if (ctx->r3 != 0) {
        // 0x80227238: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80227260;
    }
    // 0x80227238: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022723C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80227240: bnel        $a0, $v0, L_80227260
    if (ctx->r4 != ctx->r2) {
        // 0x80227244: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80227260;
    }
    goto skip_0;
    // 0x80227244: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80227248: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022724C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227250: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227254: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227258: j           L_80227268
    // 0x8022725C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80227268;
    // 0x8022725C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80227260:
    // 0x80227260: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227264: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80227268:
    // 0x80227268: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022726C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227270: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227274: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227278: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022727C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80227280: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227284: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80227288: bne         $v0, $zero, L_80227294
    if (ctx->r2 != 0) {
        // 0x8022728C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80227294;
    }
    // 0x8022728C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80227290: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80227294:
    // 0x80227294: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80227298: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022729C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802272A0: jal         0x8009A3B4
    // 0x802272A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802272A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802272A8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802272AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802272B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802272B4: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x802272B8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802272BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802272C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272C4: addiu       $v0, $v0, 0xFF0
    ctx->r2 = ADD32(ctx->r2, 0XFF0);
    // 0x802272C8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802272CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272D0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802272D4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802272D8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802272DC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802272E0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802272E4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802272E8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802272EC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802272F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802272F4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802272F8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802272FC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80227300: jal         0x80050294
    // 0x80227304: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227304: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227308: jal         0x80227324
    // 0x8022730C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227324_ovl29(rdram, ctx);
        goto after_3;
    // 0x8022730C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227310: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227314: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022731C: jr          $ra
    // 0x80227320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229964_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022996C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229970: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229974: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229978: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022997C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80229980: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229984: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80229988: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022998C: jal         0x800324B4
    // 0x80229990: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80229990: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229994: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229998: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022999C: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x802299A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802299A4: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x802299A8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802299AC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802299B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802299B4: jal         0x8004DD04
    // 0x802299B8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802299B8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_1:
    // 0x802299BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802299C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802299C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802299C8: jr          $ra
    // 0x802299CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802299CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022636C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022636C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226370: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80226374: bne         $v1, $v0, L_80226394
    if (ctx->r3 != ctx->r2) {
        // 0x80226378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226394;
    }
    // 0x80226378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022637C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226380: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226384: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226388: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8022638C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226390: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226394:
    // 0x80226394: jr          $ra
    // 0x80226398: nop

    TRACE_RETURN()
    return;
    // 0x80226398: nop

;}
RECOMP_FUNC void func_80227C5C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227C64: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227C68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C6C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227C74: lw          $v0, 0x1118($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1118);
    // 0x80227C78: jalr        $v0
    // 0x80227C7C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227C7C: nop

    after_0:
    // 0x80227C80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227C84: jr          $ra
    // 0x80227C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225654_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225654: jr          $ra
    // 0x80225658: nop

    TRACE_RETURN()
    return;
    // 0x80225658: nop

;}
RECOMP_FUNC void func_80225D68_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225D70: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225D74: bne         $v0, $zero, L_80225DC4
    if (ctx->r2 != 0) {
        // 0x80225D78: nop
    
            goto L_80225DC4;
    }
    // 0x80225D78: nop

    // 0x80225D7C: jal         0x8006033C
    // 0x80225D80: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225D80: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_0:
    // 0x80225D84: beq         $v0, $zero, L_80225DAC
    if (ctx->r2 == 0) {
        // 0x80225D88: nop
    
            goto L_80225DAC;
    }
    // 0x80225D88: nop

    // 0x80225D8C: jal         0x8006033C
    // 0x80225D90: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225D90: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    after_1:
    // 0x80225D94: bne         $v0, $zero, L_80225DAC
    if (ctx->r2 != 0) {
        // 0x80225D98: nop
    
            goto L_80225DAC;
    }
    // 0x80225D98: nop

    // 0x80225D9C: jal         0x80060590
    // 0x80225DA0: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80225DA0: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    after_2:
    // 0x80225DA4: j           L_80225DC4
    // 0x80225DA8: nop

        goto L_80225DC4;
    // 0x80225DA8: nop

L_80225DAC:
    // 0x80225DAC: jal         0x8006033C
    // 0x80225DB0: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225DB0: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_3:
    // 0x80225DB4: beq         $v0, $zero, L_80225DC4
    if (ctx->r2 == 0) {
        // 0x80225DB8: nop
    
            goto L_80225DC4;
    }
    // 0x80225DB8: nop

    // 0x80225DBC: jal         0x80225DFC
    // 0x80225DC0: nop

    func_80225DFC_ovl29(rdram, ctx);
        goto after_4;
    // 0x80225DC0: nop

    after_4:
L_80225DC4:
    // 0x80225DC4: jal         0x8006036C
    // 0x80225DC8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225DC8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80225DCC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225DD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225DD4: jr          $ra
    // 0x80225DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227AE0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227AF0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227AF4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227AF8: jal         0x8004FA7C
    // 0x80227AFC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227AFC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227B00: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227B08: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227B0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B10: bne         $v0, $zero, L_80227B74
    if (ctx->r2 != 0) {
        // 0x80227B14: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227B74;
    }
    // 0x80227B14: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227B18: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x80227B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B20: beq         $v1, $zero, L_80227B64
    if (ctx->r3 == 0) {
        // 0x80227B24: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80227B64;
    }
    // 0x80227B24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227B28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B2C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80227B30: jal         0x8009A3B4
    // 0x80227B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80227B38: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227B3C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227B40: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227B44: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80227B48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227B50: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227B54: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227B58: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227B5C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227B60: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80227B64:
    // 0x80227B64: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80227B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B6C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227B70: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80227B74:
    // 0x80227B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B7C: jr          $ra
    // 0x80227B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D318_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D31C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D320: lbu         $v0, 0x4E3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4E3);
    // 0x8022D324: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D328: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D32C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D330: lw          $v0, 0x14AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X14AC);
    // 0x8022D334: jalr        $v0
    // 0x8022D338: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D338: nop

    after_0:
    // 0x8022D33C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D340: jr          $ra
    // 0x8022D344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1A8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C1AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C1B4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C1B8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022C1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C1C0: jal         0x8004DDE8
    // 0x8022C1C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022C1C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022C1C8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C1CC: beq         $v1, $zero, L_8022C1E8
    if (ctx->r3 == 0) {
        // 0x8022C1D0: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022C1E8;
    }
    // 0x8022C1D0: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022C1D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C1D8: beq         $v1, $v0, L_8022C214
    if (ctx->r3 == ctx->r2) {
        // 0x8022C1DC: nop
    
            goto L_8022C214;
    }
    // 0x8022C1DC: nop

    // 0x8022C1E0: j           L_8022C23C
    // 0x8022C1E4: nop

        goto L_8022C23C;
    // 0x8022C1E4: nop

L_8022C1E8:
    // 0x8022C1E8: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022C1EC: beq         $v0, $zero, L_8022C23C
    if (ctx->r2 == 0) {
        // 0x8022C1F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C23C;
    }
    // 0x8022C1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022C1F8: jal         0x80050294
    // 0x8022C1FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022C1FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022C200: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C204: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022C208: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C20C: j           L_8022C23C
    // 0x8022C210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C23C;
    // 0x8022C210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C214:
    // 0x8022C214: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C218: bgez        $v0, L_8022C23C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C21C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C23C;
    }
    // 0x8022C21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C220: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C224: jal         0x80050294
    // 0x8022C228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022C228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022C22C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C230: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C234: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C238: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022C23C:
    // 0x8022C23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C244: jr          $ra
    // 0x8022C248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D40_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226D44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226D48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D4C: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80226D50: addiu       $t2, $t2, 0x9D0
    ctx->r10 = ADD32(ctx->r10, 0X9D0);
    // 0x80226D54: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226D58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226D5C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80226D60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226D64: addiu       $a1, $a1, 0x47B8
    ctx->r5 = ADD32(ctx->r5, 0X47B8);
    // 0x80226D68: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226D6C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226D70: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226D74: beq         $v0, $zero, L_80226F94
    if (ctx->r2 == 0) {
        // 0x80226D78: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226F94;
    }
    // 0x80226D78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226D7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226D80: addu        $at, $at, $v0
    gpr jr_addend_80226D88 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226D84: lw          $v0, 0x1918($at)
    ctx->r2 = ADD32(ctx->r1, 0X1918);
    // 0x80226D88: jr          $v0
    // 0x80226D8C: nop

    switch (jr_addend_80226D88 >> 2) {
        case 0: goto L_80226D90; break;
        case 1: goto L_80226DB0; break;
        case 2: goto L_80226E04; break;
        case 3: goto L_80226E98; break;
        case 4: goto L_80226EF4; break;
        case 5: goto L_80226F24; break;
        case 6: goto L_80226F48; break;
        case 7: goto L_80226F74; break;
        default: switch_error(__func__, 0x80226D88, 0x80231918);
    }
    // 0x80226D8C: nop

L_80226D90:
    // 0x80226D90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226D94: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226D98: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226D9C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226F94;
    }
    // 0x80226D9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226DA0: jal         0x800616FC
    // 0x80226DA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80226DA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80226DA8: j           L_80226F64
    // 0x80226DAC: nop

        goto L_80226F64;
    // 0x80226DAC: nop

L_80226DB0:
    // 0x80226DB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226DB4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226DB8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226DBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226DC0: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226DC4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226F94;
    }
    // 0x80226DC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226DC8: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80226DCC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80226DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DD4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226DD8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226DDC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80226DE0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80226DE4: sb          $v0, 0x168($s1)
    MEM_B(0X168, ctx->r17) = ctx->r2;
    // 0x80226DE8: sb          $v0, 0x169($s1)
    MEM_B(0X169, ctx->r17) = ctx->r2;
    // 0x80226DEC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226DF0: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x80226DF4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226DF8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80226DFC: j           L_80226F68
    // 0x80226E00: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
        goto L_80226F68;
    // 0x80226E00: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
L_80226E04:
    // 0x80226E04: lui         $a2, 0xFF65
    ctx->r6 = S32(0XFF65 << 16);
    // 0x80226E08: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80226E0C: lui         $a3, 0xFFE7
    ctx->r7 = S32(0XFFE7 << 16);
    // 0x80226E10: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80226E14: lui         $t0, 0x5
    ctx->r8 = S32(0X5 << 16);
    // 0x80226E18: ori         $t0, $t0, 0x2000
    ctx->r8 = ctx->r8 | 0X2000;
    // 0x80226E1C: lui         $t1, 0xFFF7
    ctx->r9 = S32(0XFFF7 << 16);
    // 0x80226E20: lw          $v0, 0x40($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X40);
    // 0x80226E24: lw          $v1, 0x10($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X10);
    // 0x80226E28: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80226E2C: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    // 0x80226E30: ori         $t1, $t1, 0xA000
    ctx->r9 = ctx->r9 | 0XA000;
    // 0x80226E34: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226E38: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80226E3C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80226E40: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x80226E44: sw          $v0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r2;
    // 0x80226E48: sw          $v1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r3;
    // 0x80226E4C: sw          $a0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r4;
    // 0x80226E50: sw          $a1, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r5;
    // 0x80226E54: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226E58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226E5C: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226E60: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_80226F94;
    }
    // 0x80226E60: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80226E64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226E68: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80226E6C: lui         $v0, 0xFF28
    ctx->r2 = S32(0XFF28 << 16);
    // 0x80226E70: sw          $v0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r2;
    // 0x80226E74: lui         $v0, 0xFF92
    ctx->r2 = S32(0XFF92 << 16);
    // 0x80226E78: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x80226E7C: lui         $v0, 0xFF89
    ctx->r2 = S32(0XFF89 << 16);
    // 0x80226E80: sw          $v0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r2;
    // 0x80226E84: lui         $v0, 0xB2C
    ctx->r2 = S32(0XB2C << 16);
    // 0x80226E88: jal         0x800616FC
    // 0x80226E8C: sw          $v0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80226E8C: sw          $v0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r2;
    after_1:
    // 0x80226E90: j           L_80226F64
    // 0x80226E94: nop

        goto L_80226F64;
    // 0x80226E94: nop

L_80226E98:
    // 0x80226E98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226EA0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226EA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226EA8: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226EAC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226F94;
    }
    // 0x80226EAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226EB0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80226EB4: sb          $v0, 0x16($a1)
    MEM_B(0X16, ctx->r5) = ctx->r2;
    // 0x80226EB8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226EBC: sb          $v0, 0x17($a1)
    MEM_B(0X17, ctx->r5) = ctx->r2;
    // 0x80226EC0: addiu       $v0, $zero, 0xC1
    ctx->r2 = ADD32(0, 0XC1);
    // 0x80226EC4: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80226EC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226ECC: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x80226ED0: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x80226ED4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x80226ED8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226EDC: sb          $v1, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r3;
    // 0x80226EE0: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x80226EE4: sb          $zero, 0x15($a1)
    MEM_B(0X15, ctx->r5) = 0;
    // 0x80226EE8: sb          $v0, 0x19($a1)
    MEM_B(0X19, ctx->r5) = ctx->r2;
    // 0x80226EEC: j           L_80226F64
    // 0x80226EF0: sb          $v1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r3;
        goto L_80226F64;
    // 0x80226EF0: sb          $v1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r3;
L_80226EF4:
    // 0x80226EF4: lb          $v1, 0x14($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X14);
    // 0x80226EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226EFC: bne         $v1, $v0, L_80226F94
    if (ctx->r3 != ctx->r2) {
        // 0x80226F00: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80226F94;
    }
    // 0x80226F00: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80226F04: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226F08: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x80226F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F14: jal         0x80034844
    // 0x80226F18: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_2;
    // 0x80226F18: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_2:
    // 0x80226F1C: j           L_80226F64
    // 0x80226F20: nop

        goto L_80226F64;
    // 0x80226F20: nop

L_80226F24:
    // 0x80226F24: lb          $v0, 0x14($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X14);
    // 0x80226F28: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226F2C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226F94;
    }
    // 0x80226F2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226F30: jal         0x800616FC
    // 0x80226F34: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80226F34: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_3:
    // 0x80226F38: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    // 0x80226F3C: sb          $zero, 0x168($s1)
    MEM_B(0X168, ctx->r17) = 0;
    // 0x80226F40: j           L_80226F64
    // 0x80226F44: sb          $zero, 0x169($s1)
    MEM_B(0X169, ctx->r17) = 0;
        goto L_80226F64;
    // 0x80226F44: sb          $zero, 0x169($s1)
    MEM_B(0X169, ctx->r17) = 0;
L_80226F48:
    // 0x80226F48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226F4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226F50: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226F54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226F58: bne         $v0, $zero, L_80226F94
    if (ctx->r2 != 0) {
        // 0x80226F5C: addiu       $v0, $zero, 0x35
        ctx->r2 = ADD32(0, 0X35);
            goto L_80226F94;
    }
    // 0x80226F5C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80226F60: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80226F64:
    // 0x80226F64: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
L_80226F68:
    // 0x80226F68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F6C: j           L_80226F94
    // 0x80226F70: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226F94;
    // 0x80226F70: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226F74:
    // 0x80226F74: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x80226F78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F7C: bne         $v1, $v0, L_80226F94
    if (ctx->r3 != ctx->r2) {
        // 0x80226F80: nop
    
            goto L_80226F94;
    }
    // 0x80226F80: nop

    // 0x80226F84: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226F88: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226F8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F90: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226F94:
    // 0x80226F94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226F98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226F9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226FA0: jr          $ra
    // 0x80226FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802256D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256D0: jr          $ra
    // 0x802256D4: nop

    TRACE_RETURN()
    return;
    // 0x802256D4: nop

;}
RECOMP_FUNC void func_802299D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802299D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802299D8: jal         0x8004F418
    // 0x802299DC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802299DC: nop

    after_0:
    // 0x802299E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802299E4: jr          $ra
    // 0x802299E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802299E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802299EC: nop

;}
RECOMP_FUNC void func_8022AD40_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD4C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AD50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD58: jal         0x8009A3B4
    // 0x8022AD5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AD5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AD60: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AD64: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AD68: jal         0x8009A3B4
    // 0x8022AD6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AD6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AD70: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AD74: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AD78: jal         0x8009A3B4
    // 0x8022AD7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AD7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AD80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AD84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AD88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AD8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AD90: lw          $v0, 0x1300($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1300);
    // 0x8022AD94: jalr        $v0
    // 0x8022AD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022AD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AD9C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022ADA0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022ADA4: beq         $v0, $zero, L_8022ADBC
    if (ctx->r2 == 0) {
        // 0x8022ADA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022ADBC;
    }
    // 0x8022ADA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ADAC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022ADB0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022ADB4: jal         0x8003B564
    // 0x8022ADB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022ADB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022ADBC:
    // 0x8022ADBC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022ADC0: beq         $v0, $zero, L_8022ADD8
    if (ctx->r2 == 0) {
        // 0x8022ADC4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022ADD8;
    }
    // 0x8022ADC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ADC8: jal         0x8005044C
    // 0x8022ADCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022ADCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022ADD0: j           L_8022ADDC
    // 0x8022ADD4: nop

        goto L_8022ADDC;
    // 0x8022ADD4: nop

L_8022ADD8:
    // 0x8022ADD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022ADDC:
    // 0x8022ADDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADE4: jr          $ra
    // 0x8022ADE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ADE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4BC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D4C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D4CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D4D0: lh          $a3, 0x4E6($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4E6);
    // 0x8022D4D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D4D8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D4DC: jal         0x8004F820
    // 0x8022D4E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D4E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022D4E4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D4E8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D4EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D4F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D4F4: bgez        $a0, L_8022D50C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022D4F8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D50C;
    }
    // 0x8022D4F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D4FC: lbu         $v0, 0x4E3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E3);
    // 0x8022D500: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022D504: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D508: sb          $v0, 0x4E3($s0)
    MEM_B(0X4E3, ctx->r16) = ctx->r2;
L_8022D50C:
    // 0x8022D50C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D510: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D514: bne         $v0, $zero, L_8022D530
    if (ctx->r2 != 0) {
        // 0x8022D518: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D530;
    }
    // 0x8022D518: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D51C: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022D520: sb          $v0, 0x4E3($s0)
    MEM_B(0X4E3, ctx->r16) = ctx->r2;
    // 0x8022D524: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022D528: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022D52C: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_8022D530:
    // 0x8022D530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D538: jr          $ra
    // 0x8022D53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227648_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022764C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227650: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227658: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022765C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227660: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80227664: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227668: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022766C: jal         0x80229728
    // 0x80227670: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80229728_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227670: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227674: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227678: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022767C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227680: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227684: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227688: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022768C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227694: jr          $ra
    // 0x80227698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D8D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D8D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D8D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D8E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D8E4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8022D8E8: beq         $v0, $zero, L_8022D9EC
    if (ctx->r2 == 0) {
        // 0x8022D8EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022D9EC;
    }
    // 0x8022D8EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D8F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D8F4: addu        $at, $at, $v0
    gpr jr_addend_8022D8FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D8F8: lw          $v0, 0x1A78($at)
    ctx->r2 = ADD32(ctx->r1, 0X1A78);
    // 0x8022D8FC: jr          $v0
    // 0x8022D900: nop

    switch (jr_addend_8022D8FC >> 2) {
        case 0: goto L_8022D904; break;
        case 1: goto L_8022D9EC; break;
        case 2: goto L_8022D920; break;
        case 3: goto L_8022D960; break;
        case 4: goto L_8022D98C; break;
        case 5: goto L_8022D9B4; break;
        case 6: goto L_8022D9EC; break;
        default: switch_error(__func__, 0x8022D8FC, 0x80231A78);
    }
    // 0x8022D900: nop

L_8022D904:
    // 0x8022D904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D908: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022D90C: jal         0x80050294
    // 0x8022D910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022D914: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D918: j           L_8022D9A4
    // 0x8022D91C: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
        goto L_8022D9A4;
    // 0x8022D91C: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
L_8022D920:
    // 0x8022D920: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8022D924: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8022D928: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8022D92C: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D930: ori         $a1, $a1, 0x9DCC
    ctx->r5 = ctx->r5 | 0X9DCC;
    // 0x8022D934: addiu       $v0, $v0, 0x3AEE
    ctx->r2 = ADD32(ctx->r2, 0X3AEE);
    // 0x8022D938: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022D93C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D940: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022D944: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022D948: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022D94C: bne         $v1, $zero, L_8022D9EC
    if (ctx->r3 != 0) {
        // 0x8022D950: sw          $a0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r4;
            goto L_8022D9EC;
    }
    // 0x8022D950: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022D954: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D958: j           L_8022D9AC
    // 0x8022D95C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D9AC;
    // 0x8022D95C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D960:
    // 0x8022D960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D964: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022D968: jal         0x80050294
    // 0x8022D96C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022D96C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022D970: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D974: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D978: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D97C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022D980: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D984: j           L_8022D9EC
    // 0x8022D988: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022D9EC;
    // 0x8022D988: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D98C:
    // 0x8022D98C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x8022D990: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D994: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022D998: bne         $v1, $v0, L_8022D9EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D99C: addiu       $v1, $zero, 0x16
        ctx->r3 = ADD32(0, 0X16);
            goto L_8022D9EC;
    }
    // 0x8022D99C: addiu       $v1, $zero, 0x16
    ctx->r3 = ADD32(0, 0X16);
    // 0x8022D9A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8022D9A4:
    // 0x8022D9A4: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022D9A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D9AC:
    // 0x8022D9AC: j           L_8022D9EC
    // 0x8022D9B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022D9EC;
    // 0x8022D9B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D9B4:
    // 0x8022D9B4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D9B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D9BC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022D9C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D9C4: bne         $v0, $zero, L_8022D9D8
    if (ctx->r2 != 0) {
        // 0x8022D9C8: nop
    
            goto L_8022D9D8;
    }
    // 0x8022D9C8: nop

    // 0x8022D9CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D9D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D9D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D9D8:
    // 0x8022D9D8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022D9DC: lui         $v1, 0xFFFC
    ctx->r3 = S32(0XFFFC << 16);
    // 0x8022D9E0: ori         $v1, $v1, 0xE000
    ctx->r3 = ctx->r3 | 0XE000;
    // 0x8022D9E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D9E8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_8022D9EC:
    // 0x8022D9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D9F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D9F4: jr          $ra
    // 0x8022D9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F90_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225F94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225F98: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225F9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225FA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225FA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225FA8: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80225FAC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80225FB0: beq         $v0, $zero, L_802261F0
    if (ctx->r2 == 0) {
        // 0x80225FB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802261F0;
    }
    // 0x80225FB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225FB8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225FBC: addu        $at, $at, $v0
    gpr jr_addend_80225FC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225FC0: lw          $v0, 0x18C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X18C0);
    // 0x80225FC4: jr          $v0
    // 0x80225FC8: nop

    switch (jr_addend_80225FC4 >> 2) {
        case 0: goto L_80225FCC; break;
        case 1: goto L_8022606C; break;
        case 2: goto L_8022607C; break;
        case 3: goto L_8022609C; break;
        case 4: goto L_802260F0; break;
        case 5: goto L_80226138; break;
        case 6: goto L_802261EC; break;
        default: switch_error(__func__, 0x80225FC4, 0x802318C0);
    }
    // 0x80225FC8: nop

L_80225FCC:
    // 0x80225FCC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225FD0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225FD4: jal         0x8006FF84
    // 0x80225FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225FDC: beq         $v0, $zero, L_802261F0
    if (ctx->r2 == 0) {
        // 0x80225FE0: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_802261F0;
    }
    // 0x80225FE0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225FE4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225FE8: ori         $a0, $a0, 0x4F00
    ctx->r4 = ctx->r4 | 0X4F00;
    // 0x80225FEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225FF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FF4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225FFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226000: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80226004: lui         $v0, 0xF1C0
    ctx->r2 = S32(0XF1C0 << 16);
    // 0x80226008: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022600C: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80226010: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226014: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226018: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022601C: lui         $v0, 0xFF79
    ctx->r2 = S32(0XFF79 << 16);
    // 0x80226020: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226024: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80226028: addiu       $v0, $zero, -0xE40
    ctx->r2 = ADD32(0, -0XE40);
    // 0x8022602C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226030: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80226034: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022603C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80226040: addiu       $v0, $zero, -0x87
    ctx->r2 = ADD32(0, -0X87);
    // 0x80226044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226048: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022604C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226050: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226054: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80226058: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022605C: jal         0x80036B1C
    // 0x80226060: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80226060: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x80226064: j           L_802261DC
    // 0x80226068: nop

        goto L_802261DC;
    // 0x80226068: nop

L_8022606C:
    // 0x8022606C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226070: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x80226074: j           L_802261E0
    // 0x80226078: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_802261E0;
    // 0x80226078: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_8022607C:
    // 0x8022607C: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80226080: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226084: bne         $v0, $zero, L_802261F0
    if (ctx->r2 != 0) {
        // 0x80226088: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_802261F0;
    }
    // 0x80226088: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x8022608C: jal         0x80036E48
    // 0x80226090: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80226090: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80226094: j           L_802261DC
    // 0x80226098: nop

        goto L_802261DC;
    // 0x80226098: nop

L_8022609C:
    // 0x8022609C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802260A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802260A4: jal         0x8005F6B4
    // 0x802260A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_3;
    // 0x802260A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802260AC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802260B0: addiu       $a0, $a0, 0x878
    ctx->r4 = ADD32(ctx->r4, 0X878);
    // 0x802260B4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802260B8: addiu       $a1, $a1, 0x620
    ctx->r5 = ADD32(ctx->r5, 0X620);
    // 0x802260BC: jal         0x8006019C
    // 0x802260C0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_8006019C_3B59C(rdram, ctx);
        goto after_4;
    // 0x802260C0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_4:
    // 0x802260C4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802260C8: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
L_802260CC:
    // 0x802260CC: jal         0x8005FA7C
    // 0x802260D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x802260D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802260D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802260D8: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x802260DC: bne         $v0, $zero, L_802260CC
    if (ctx->r2 != 0) {
        // 0x802260E0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_802260CC;
    }
    // 0x802260E0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x802260E4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802260E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802260EC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802260F0:
    // 0x802260F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802260F4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802260F8: bne         $v0, $zero, L_80226138
    if (ctx->r2 != 0) {
        // 0x802260FC: nop
    
            goto L_80226138;
    }
    // 0x802260FC: nop

    // 0x80226100: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226104: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226108: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022610C: beq         $v1, $v0, L_80226124
    if (ctx->r3 == ctx->r2) {
        // 0x80226110: nop
    
            goto L_80226124;
    }
    // 0x80226110: nop

    // 0x80226114: jal         0x8006072C
    // 0x80226118: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_6;
    // 0x80226118: nop

    after_6:
    // 0x8022611C: beq         $v0, $zero, L_80226138
    if (ctx->r2 == 0) {
        // 0x80226120: nop
    
            goto L_80226138;
    }
    // 0x80226120: nop

L_80226124:
    // 0x80226124: jal         0x80036E48
    // 0x80226128: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80226128: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x8022612C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226134: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226138:
    // 0x80226138: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022613C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226140: beq         $v1, $v0, L_80226158
    if (ctx->r3 == ctx->r2) {
        // 0x80226144: nop
    
            goto L_80226158;
    }
    // 0x80226144: nop

    // 0x80226148: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x8022614C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226150: jalr        $v0
    // 0x80226154: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80226154: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_80226158:
    // 0x80226158: jal         0x8005FB90
    // 0x8022615C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x8022615C: nop

    after_9:
    // 0x80226160: jal         0x80060018
    // 0x80226164: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x80226164: nop

    after_10:
    // 0x80226168: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022616C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226170: bne         $v1, $v0, L_802261F0
    if (ctx->r3 != ctx->r2) {
        // 0x80226174: nop
    
            goto L_802261F0;
    }
    // 0x80226174: nop

    // 0x80226178: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022617C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226180: bne         $v0, $zero, L_802261F0
    if (ctx->r2 != 0) {
        // 0x80226184: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802261F0;
    }
    // 0x80226184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022618C: jal         0x80036B00
    // 0x80226190: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_11;
    // 0x80226190: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x80226194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226198: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022619C: jal         0x80034844
    // 0x802261A0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_12;
    // 0x802261A0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_12:
    // 0x802261A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802261A8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802261AC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802261B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802261B4: jal         0x80070050
    // 0x802261B8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x802261B8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_13:
    // 0x802261BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802261C0: lhu         $v0, 0x4A60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A60);
    // 0x802261C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261C8: jal         0x8004A3B0
    // 0x802261CC: sh          $v0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r2;
    func_8004A3B0_257B0(rdram, ctx);
        goto after_14;
    // 0x802261CC: sh          $v0, 0x4A1E($at)
    MEM_H(0X4A1E, ctx->r1) = ctx->r2;
    after_14:
    // 0x802261D0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x802261D4: jal         0x8004CB2C
    // 0x802261D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_15;
    // 0x802261D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_15:
L_802261DC:
    // 0x802261DC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_802261E0:
    // 0x802261E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261E4: j           L_802261F0
    // 0x802261E8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_802261F0;
    // 0x802261E8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802261EC:
    // 0x802261EC: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
L_802261F0:
    // 0x802261F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802261F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802261F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802261FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226200: jr          $ra
    // 0x80226204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E580_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E580: jr          $ra
    // 0x8022E584: nop

    TRACE_RETURN()
    return;
    // 0x8022E584: nop

    // 0x8022E588: nop

    // 0x8022E58C: nop

;}
RECOMP_FUNC void func_80226480_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226480: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226484: bne         $v0, $zero, L_80226498
    if (ctx->r2 != 0) {
        // 0x80226488: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226498;
    }
    // 0x80226488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022648C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226490: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226494: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226498:
    // 0x80226498: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022649C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802264A0: bne         $v1, $v0, L_802264BC
    if (ctx->r3 != ctx->r2) {
        // 0x802264A4: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_802264BC;
    }
    // 0x802264A4: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x802264A8: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802264AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264B0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802264B4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802264B8: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
L_802264BC:
    // 0x802264BC: bne         $v1, $v0, L_802264CC
    if (ctx->r3 != ctx->r2) {
        // 0x802264C0: nop
    
            goto L_802264CC;
    }
    // 0x802264C0: nop

    // 0x802264C4: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802264C8: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_802264CC:
    // 0x802264CC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802264D0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802264D4: bne         $v1, $v0, L_802264E8
    if (ctx->r3 != ctx->r2) {
        // 0x802264D8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802264E8;
    }
    // 0x802264D8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802264DC: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802264E0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802264E4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802264E8:
    // 0x802264E8: jr          $ra
    // 0x802264EC: nop

    TRACE_RETURN()
    return;
    // 0x802264EC: nop

;}
RECOMP_FUNC void func_80226C0C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C0C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226C10: bne         $v0, $zero, L_80226C28
    if (ctx->r2 != 0) {
        // 0x80226C14: nop
    
            goto L_80226C28;
    }
    // 0x80226C14: nop

    // 0x80226C18: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226C1C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80226C20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C24: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80226C28:
    // 0x80226C28: jr          $ra
    // 0x80226C2C: nop

    TRACE_RETURN()
    return;
    // 0x80226C2C: nop

;}
RECOMP_FUNC void func_802267D8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802267DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802267E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802267E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802267EC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802267F0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802267F4: beq         $v0, $zero, L_802269C0
    if (ctx->r2 == 0) {
        // 0x802267F8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802269C0;
    }
    // 0x802267F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802267FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226800: addu        $at, $at, $v0
    gpr jr_addend_80226808 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226804: lw          $v0, 0x18F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X18F8);
    // 0x80226808: jr          $v0
    // 0x8022680C: nop

    switch (jr_addend_80226808 >> 2) {
        case 0: goto L_80226810; break;
        case 1: goto L_80226818; break;
        case 2: goto L_80226858; break;
        case 3: goto L_80226874; break;
        case 4: goto L_802268A0; break;
        case 5: goto L_802268B4; break;
        case 6: goto L_802268EC; break;
        default: switch_error(__func__, 0x80226808, 0x802318F8);
    }
    // 0x8022680C: nop

L_80226810:
    // 0x80226810: j           L_80226888
    // 0x80226814: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_80226888;
    // 0x80226814: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_80226818:
    // 0x80226818: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022681C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226820: jal         0x8006FF84
    // 0x80226824: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226824: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80226828: beq         $v0, $zero, L_802269C0
    if (ctx->r2 == 0) {
        // 0x8022682C: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_802269C0;
    }
    // 0x8022682C: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80226830: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226834: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226838: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8022683C: jal         0x8004CB2C
    // 0x80226840: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80226840: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226844: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226848: jal         0x80036B1C
    // 0x8022684C: ori         $a0, $a0, 0x4400
    ctx->r4 = ctx->r4 | 0X4400;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_2;
    // 0x8022684C: ori         $a0, $a0, 0x4400
    ctx->r4 = ctx->r4 | 0X4400;
    after_2:
    // 0x80226850: j           L_80226890
    // 0x80226854: nop

        goto L_80226890;
    // 0x80226854: nop

L_80226858:
    // 0x80226858: jal         0x80036B7C
    // 0x8022685C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_3;
    // 0x8022685C: nop

    after_3:
    // 0x80226860: beq         $v0, $zero, L_802269C0
    if (ctx->r2 == 0) {
        // 0x80226864: addiu       $v1, $zero, 0x14
        ctx->r3 = ADD32(0, 0X14);
            goto L_802269C0;
    }
    // 0x80226864: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80226868: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022686C: j           L_80226894
    // 0x80226870: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_80226894;
    // 0x80226870: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_80226874:
    // 0x80226874: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80226878: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022687C: bne         $v0, $zero, L_802269C0
    if (ctx->r2 != 0) {
        // 0x80226880: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_802269C0;
    }
    // 0x80226880: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80226884: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80226888:
    // 0x80226888: jal         0x80036E48
    // 0x8022688C: nop

    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8022688C: nop

    after_4:
L_80226890:
    // 0x80226890: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_80226894:
    // 0x80226894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226898: j           L_802269C0
    // 0x8022689C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_802269C0;
    // 0x8022689C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802268A0:
    // 0x802268A0: jal         0x80226630
    // 0x802268A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226630_ovl29(rdram, ctx);
        goto after_5;
    // 0x802268A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802268A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802268AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802268B4:
    // 0x802268B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802268B8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802268BC: bne         $v0, $zero, L_802268EC
    if (ctx->r2 != 0) {
        // 0x802268C0: nop
    
            goto L_802268EC;
    }
    // 0x802268C0: nop

    // 0x802268C4: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802268C8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802268CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802268D0: bne         $v1, $v0, L_802268EC
    if (ctx->r3 != ctx->r2) {
        // 0x802268D4: nop
    
            goto L_802268EC;
    }
    // 0x802268D4: nop

    // 0x802268D8: jal         0x80036E48
    // 0x802268DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x802268DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_6:
    // 0x802268E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802268E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268E8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802268EC:
    // 0x802268EC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802268F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802268F4: beq         $v1, $v0, L_8022690C
    if (ctx->r3 == ctx->r2) {
        // 0x802268F8: nop
    
            goto L_8022690C;
    }
    // 0x802268F8: nop

    // 0x802268FC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226900: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226904: jalr        $v0
    // 0x80226908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x80226908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022690C:
    // 0x8022690C: jal         0x8005FB90
    // 0x80226910: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80226910: nop

    after_8:
    // 0x80226914: jal         0x80060018
    // 0x80226918: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x80226918: nop

    after_9:
    // 0x8022691C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226920: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226924: bne         $v1, $v0, L_802269C0
    if (ctx->r3 != ctx->r2) {
        // 0x80226928: nop
    
            goto L_802269C0;
    }
    // 0x80226928: nop

    // 0x8022692C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226930: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226934: bne         $v0, $zero, L_802269C0
    if (ctx->r2 != 0) {
        // 0x80226938: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802269C0;
    }
    // 0x80226938: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022693C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226940: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226944: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226948: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022694C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226950: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226954: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226958: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022695C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226960: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226964: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022696C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226970: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226974: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022697C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226984: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226988: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022698C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226994: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022699C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802269A0: jal         0x80036B00
    // 0x802269A4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_10;
    // 0x802269A4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_10:
    // 0x802269A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802269AC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802269B0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802269B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802269B8: jal         0x80070050
    // 0x802269BC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_11;
    // 0x802269BC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_11:
L_802269C0:
    // 0x802269C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802269C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802269C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269CC: jr          $ra
    // 0x802269D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802269D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225718_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022571C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225720: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225728: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022572C: bne         $v0, $zero, L_80225748
    if (ctx->r2 != 0) {
        // 0x80225730: nop
    
            goto L_80225748;
    }
    // 0x80225730: nop

    // 0x80225734: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225738: jal         0x800607C4
    // 0x8022573C: addiu       $a0, $a0, 0x3E4
    ctx->r4 = ADD32(ctx->r4, 0X3E4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022573C: addiu       $a0, $a0, 0x3E4
    ctx->r4 = ADD32(ctx->r4, 0X3E4);
    after_0:
    // 0x80225740: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225744: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225748:
    // 0x80225748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022574C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225750: jr          $ra
    // 0x80225754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229030_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80229034: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229038: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022903C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229040: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80229044: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229048: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022904C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80229050: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229054: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80229058: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022905C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x80229060: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80229064: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80229068: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022906C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80229070: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80229074: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229078: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022907C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229080: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229084: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80229088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022908C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80229090: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80229094: jal         0x8009A3B4
    // 0x80229098: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229098: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022909C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802290A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802290A4: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x802290A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802290AC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x802290B0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802290B4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x802290B8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x802290BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802290C0: jal         0x8004EC38
    // 0x802290C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x802290C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802290C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802290CC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802290D0: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x802290D4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802290D8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802290DC: jal         0x80034FCC
    // 0x802290E0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x802290E0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x802290E4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x802290E8: jal         0x802296D8
    // 0x802290EC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_802296D8_ovl29(rdram, ctx);
        goto after_3;
    // 0x802290EC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x802290F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802290F4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802290F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802290FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229100: jal         0x8004F820
    // 0x80229104: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229104: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80229108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022910C: bgez        $v0, L_80229138
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229110: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80229138;
    }
    // 0x80229110: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80229114: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80229118: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022911C: jal         0x8004F820
    // 0x80229120: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80229120: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x80229124: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229128: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022912C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229130: j           L_80229150
    // 0x80229134: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80229150;
    // 0x80229134: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80229138:
    // 0x80229138: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022913C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229140: jal         0x8004F820
    // 0x80229144: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x80229144: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x80229148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022914C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80229150:
    // 0x80229150: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80229154: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x80229158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022915C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80229160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229164: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x80229168: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022916C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80229170: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229174: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229178: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022917C: jr          $ra
    // 0x80229180: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80229180: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802299F0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802299F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A00: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229A04: bne         $v0, $zero, L_80229A50
    if (ctx->r2 != 0) {
        // 0x80229A08: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80229A50;
    }
    // 0x80229A08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229A10: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229A14: jal         0x8004D5D4
    // 0x80229A18: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229A18: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A24: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229A28: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229A2C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229A30: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229A34: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229A38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229A3C: jal         0x80050294
    // 0x80229A40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80229A40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229A44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229A4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229A50:
    // 0x80229A50: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229A54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229A58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229A5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229A60: lw          $v0, 0x1250($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1250);
    // 0x80229A64: jalr        $v0
    // 0x80229A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80229A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229A6C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229A70: bne         $v0, $zero, L_80229A88
    if (ctx->r2 != 0) {
        // 0x80229A74: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80229A88;
    }
    // 0x80229A74: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229A78: jal         0x8004DD04
    // 0x80229A7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80229A7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80229A80: jal         0x8005044C
    // 0x80229A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80229A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80229A88:
    // 0x80229A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A90: jr          $ra
    // 0x80229A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E090_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E090: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E094: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E098: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E09C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022E0A0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022E0A4: addiu       $a1, $a1, 0x1A98
    ctx->r5 = ADD32(ctx->r5, 0X1A98);
    // 0x8022E0A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022E0AC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E0B0: jal         0x8009A3B4
    // 0x8022E0B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E0B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E0B8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E0BC: bne         $v0, $zero, L_8022E1E0
    if (ctx->r2 != 0) {
        // 0x8022E0C0: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_8022E1E0;
    }
    // 0x8022E0C0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x8022E0C4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E0C8: lhu         $a1, 0x14($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X14);
    // 0x8022E0CC: lhu         $a2, 0x16($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X16);
    // 0x8022E0D0: lhu         $a3, 0x18($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X18);
    // 0x8022E0D4: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8022E0D8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022E0DC: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022E0E0: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022E0E4: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x8022E0E8: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022E0EC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022E0F0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022E0F4: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x8022E0F8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E0FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E100: sh          $a1, 0xD0($s1)
    MEM_H(0XD0, ctx->r17) = ctx->r5;
    // 0x8022E104: sh          $a2, 0xD2($s1)
    MEM_H(0XD2, ctx->r17) = ctx->r6;
    // 0x8022E108: sh          $a3, 0xD4($s1)
    MEM_H(0XD4, ctx->r17) = ctx->r7;
    // 0x8022E10C: bne         $v1, $zero, L_8022E12C
    if (ctx->r3 != 0) {
        // 0x8022E110: sw          $v0, 0xDC($s1)
        MEM_W(0XDC, ctx->r17) = ctx->r2;
            goto L_8022E12C;
    }
    // 0x8022E110: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x8022E114: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8022E118: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x8022E11C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022E120: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E124: j           L_8022E144
    // 0x8022E128: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
        goto L_8022E144;
    // 0x8022E128: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_8022E12C:
    // 0x8022E12C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8022E130: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
    // 0x8022E134: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022E138: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E13C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022E140: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8022E144:
    // 0x8022E144: sh          $v0, 0xD6($s1)
    MEM_H(0XD6, ctx->r17) = ctx->r2;
    // 0x8022E148: jal         0x800324B4
    // 0x8022E14C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022E14C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_1:
    // 0x8022E150: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022E154: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E158: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E15C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022E160: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x8022E164: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022E168: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E16C: jal         0x80032498
    // 0x8022E170: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022E170: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022E174: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022E178: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E17C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E180: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022E184: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022E188: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022E18C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E190: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022E194: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E198: jal         0x8009A3B4
    // 0x8022E19C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022E19C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022E1A0: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022E1A4: bne         $v0, $zero, L_8022E1BC
    if (ctx->r2 != 0) {
        // 0x8022E1A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E1BC;
    }
    // 0x8022E1A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E1AC: jal         0x8004D5D4
    // 0x8022E1B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x8022E1B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x8022E1B4: j           L_8022E1C4
    // 0x8022E1B8: nop

        goto L_8022E1C4;
    // 0x8022E1B8: nop

L_8022E1BC:
    // 0x8022E1BC: jal         0x8004D5FC
    // 0x8022E1C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_5;
    // 0x8022E1C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
L_8022E1C4:
    // 0x8022E1C4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E1C8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022E1CC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022E1D0: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
    // 0x8022E1D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E1D8: j           L_8022E280
    // 0x8022E1DC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022E280;
    // 0x8022E1DC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022E1E0:
    // 0x8022E1E0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022E1E4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022E1E8: jal         0x8009A3B4
    // 0x8022E1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022E1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022E1F0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022E1F4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022E1F8: jal         0x8009A3B4
    // 0x8022E1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022E1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022E200: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022E204: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022E208: jal         0x8009A3B4
    // 0x8022E20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022E20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022E210: lhu         $v0, 0xD8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD8);
    // 0x8022E214: lhu         $a0, 0xD6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XD6);
    // 0x8022E218: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022E21C: lhu         $a1, 0xD6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XD6);
    // 0x8022E220: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E224: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E228: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x8022E22C: lh          $a0, 0xD8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XD8);
    // 0x8022E230: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022E234: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E238: jal         0x800324B4
    // 0x8022E23C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x8022E23C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_9:
    // 0x8022E240: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x8022E244: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E248: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E24C: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
    // 0x8022E250: lh          $a0, 0xD8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XD8);
    // 0x8022E254: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022E258: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E25C: jal         0x80032498
    // 0x8022E260: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x8022E260: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    after_10:
    // 0x8022E264: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x8022E268: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E26C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022E270: lhu         $v0, 0xD4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD4);
    // 0x8022E274: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022E278: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E27C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
L_8022E280:
    // 0x8022E280: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x8022E284: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022E288: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022E28C: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022E290: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022E294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E298: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E29C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E2A0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022E2A4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022E2A8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022E2AC: jal         0x80031600
    // 0x8022E2B0: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_11;
    // 0x8022E2B0: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    after_11:
    // 0x8022E2B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E2B8: jal         0x80031DA8
    // 0x8022E2BC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_12;
    // 0x8022E2BC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_12:
    // 0x8022E2C0: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022E2C4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022E2C8: jal         0x8009A3B4
    // 0x8022E2CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022E2CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8022E2D0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E2D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E2D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E2DC: jr          $ra
    // 0x8022E2E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E2E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022E2E4: nop

    // 0x8022E2E8: nop

    // 0x8022E2EC: nop

;}
RECOMP_FUNC void func_8022550C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022550C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225510: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225514: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022551C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225520: beq         $v1, $zero, L_80225538
    if (ctx->r3 == 0) {
        // 0x80225524: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225538;
    }
    // 0x80225524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225528: beq         $v1, $v0, L_80225594
    if (ctx->r3 == ctx->r2) {
        // 0x8022552C: nop
    
            goto L_80225594;
    }
    // 0x8022552C: nop

    // 0x80225530: j           L_802255D0
    // 0x80225534: nop

        goto L_802255D0;
    // 0x80225534: nop

L_80225538:
    // 0x80225538: jal         0x8006033C
    // 0x8022553C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022553C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    after_0:
    // 0x80225540: bne         $v0, $zero, L_80225560
    if (ctx->r2 != 0) {
        // 0x80225544: nop
    
            goto L_80225560;
    }
    // 0x80225544: nop

    // 0x80225548: jal         0x8006036C
    // 0x8022554C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8022554C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    after_1:
    // 0x80225550: jal         0x80060690
    // 0x80225554: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x80225554: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_2:
    // 0x80225558: j           L_802255D0
    // 0x8022555C: nop

        goto L_802255D0;
    // 0x8022555C: nop

L_80225560:
    // 0x80225560: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225564: jal         0x800607C4
    // 0x80225568: addiu       $a0, $a0, 0x444
    ctx->r4 = ADD32(ctx->r4, 0X444);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_3;
    // 0x80225568: addiu       $a0, $a0, 0x444
    ctx->r4 = ADD32(ctx->r4, 0X444);
    after_3:
    // 0x8022556C: jal         0x8006033C
    // 0x80225570: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225570: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    after_4:
    // 0x80225574: bne         $v0, $zero, L_802255CC
    if (ctx->r2 != 0) {
        // 0x80225578: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802255CC;
    }
    // 0x80225578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022557C: jal         0x8006036C
    // 0x80225580: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225580: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    after_5:
    // 0x80225584: jal         0x80036E48
    // 0x80225588: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80225588: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x8022558C: j           L_802255CC
    // 0x80225590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802255CC;
    // 0x80225590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225594:
    // 0x80225594: jal         0x8006033C
    // 0x80225598: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80225598: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_7:
    // 0x8022559C: beq         $v0, $zero, L_802255D0
    if (ctx->r2 == 0) {
        // 0x802255A0: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_802255D0;
    }
    // 0x802255A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802255A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802255A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802255AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802255B0: bne         $v0, $zero, L_802255D0
    if (ctx->r2 != 0) {
        // 0x802255B4: nop
    
            goto L_802255D0;
    }
    // 0x802255B4: nop

    // 0x802255B8: jal         0x8006036C
    // 0x802255BC: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x802255BC: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_8:
    // 0x802255C0: jal         0x80060690
    // 0x802255C4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_80060690_3BA90(rdram, ctx);
        goto after_9;
    // 0x802255C4: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_9:
    // 0x802255C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802255CC:
    // 0x802255CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255D0:
    // 0x802255D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255D8: jr          $ra
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287B4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802287B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287C0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802287C4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802287C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802287CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802287D0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802287D4: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802287D8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802287DC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802287E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802287E4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802287E8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802287EC: jal         0x802296D8
    // 0x802287F0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_802296D8_ovl29(rdram, ctx);
        goto after_0;
    // 0x802287F0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802287F4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802287F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802287FC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228800: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228804: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228808: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022880C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228810: jal         0x8004F820
    // 0x80228814: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228814: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228818: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022881C: bgez        $v0, L_8022884C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228820: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022884C;
    }
    // 0x80228820: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228824: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228828: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022882C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228830: jal         0x8004F820
    // 0x80228834: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228834: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80228838: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022883C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228840: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228844: j           L_80228868
    // 0x80228848: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228868;
    // 0x80228848: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022884C:
    // 0x8022884C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228850: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228854: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228858: jal         0x8004F820
    // 0x8022885C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022885C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228860: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228864: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228868:
    // 0x80228868: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022886C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80228870: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228874: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228878: jal         0x800610AC
    // 0x8022887C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022887C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80228880: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228884: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228888: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022888C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228890: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228894: jr          $ra
    // 0x80228898: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228898: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226D2C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D2C: jr          $ra
    // 0x80226D30: nop

    TRACE_RETURN()
    return;
    // 0x80226D30: nop

    // 0x80226D34: nop

    // 0x80226D38: nop

    // 0x80226D3C: nop

;}
RECOMP_FUNC void func_8022D600_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D60C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D610: addiu       $a1, $a1, 0x1B30
    ctx->r5 = ADD32(ctx->r5, 0X1B30);
    // 0x8022D614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D618: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022D61C: beq         $a0, $zero, L_8022D6AC
    if (ctx->r4 == 0) {
        // 0x8022D620: nop
    
            goto L_8022D6AC;
    }
    // 0x8022D620: nop

    // 0x8022D624: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022D628: lw          $v1, 0x1B30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B30);
    // 0x8022D62C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022D630: beq         $v0, $zero, L_8022D6AC
    if (ctx->r2 == 0) {
        // 0x8022D634: nop
    
            goto L_8022D6AC;
    }
    // 0x8022D634: nop

    // 0x8022D638: bgez        $v0, L_8022D648
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D63C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022D648;
    }
    // 0x8022D63C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D640: j           L_8022D670
    // 0x8022D644: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022D670;
    // 0x8022D644: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_8022D648:
    // 0x8022D648: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D64C: lhu         $v0, 0x1B34($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1B34);
    // 0x8022D650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D654: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D658: sh          $v0, 0x1B34($at)
    MEM_H(0X1B34, ctx->r1) = ctx->r2;
    // 0x8022D65C: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022D660: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D664: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D668: bne         $v0, $v1, L_8022D6AC
    if (ctx->r2 != ctx->r3) {
        // 0x8022D66C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022D6AC;
    }
    // 0x8022D66C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022D670:
    // 0x8022D670: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8022D674: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D678: lw          $v0, 0x1B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B30);
    // 0x8022D67C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D680: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D684: sh          $zero, 0x1B34($at)
    MEM_H(0X1B34, ctx->r1) = 0;
    // 0x8022D688: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D68C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D690: jal         0x8003B85C
    // 0x8022D694: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022D694: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022D698: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D69C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D6A0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D6A4: jal         0x8003B840
    // 0x8022D6A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022D6A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022D6AC:
    // 0x8022D6AC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D6B0: addiu       $a1, $a1, 0x1B38
    ctx->r5 = ADD32(ctx->r5, 0X1B38);
    // 0x8022D6B4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022D6B8: beq         $a0, $zero, L_8022D748
    if (ctx->r4 == 0) {
        // 0x8022D6BC: nop
    
            goto L_8022D748;
    }
    // 0x8022D6BC: nop

    // 0x8022D6C0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022D6C4: lw          $v1, 0x1B38($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B38);
    // 0x8022D6C8: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022D6CC: beq         $v0, $zero, L_8022D748
    if (ctx->r2 == 0) {
        // 0x8022D6D0: nop
    
            goto L_8022D748;
    }
    // 0x8022D6D0: nop

    // 0x8022D6D4: bgez        $v0, L_8022D6E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D6D8: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022D6E4;
    }
    // 0x8022D6D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D6DC: j           L_8022D70C
    // 0x8022D6E0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022D70C;
    // 0x8022D6E0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_8022D6E4:
    // 0x8022D6E4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D6E8: lhu         $v0, 0x1B3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1B3C);
    // 0x8022D6EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D6F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D6F4: sh          $v0, 0x1B3C($at)
    MEM_H(0X1B3C, ctx->r1) = ctx->r2;
    // 0x8022D6F8: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022D6FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D700: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D704: bne         $v0, $v1, L_8022D748
    if (ctx->r2 != ctx->r3) {
        // 0x8022D708: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022D748;
    }
    // 0x8022D708: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022D70C:
    // 0x8022D70C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8022D710: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D714: lw          $v0, 0x1B38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B38);
    // 0x8022D718: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D71C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D720: sh          $zero, 0x1B3C($at)
    MEM_H(0X1B3C, ctx->r1) = 0;
    // 0x8022D724: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D728: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D72C: jal         0x8003B85C
    // 0x8022D730: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022D730: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022D734: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D738: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022D73C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022D740: jal         0x8003B840
    // 0x8022D744: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022D744: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022D748:
    // 0x8022D748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D74C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D750: jr          $ra
    // 0x8022D754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802259F8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A08: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225A0C: bne         $v0, $zero, L_80225A28
    if (ctx->r2 != 0) {
        // 0x80225A10: nop
    
            goto L_80225A28;
    }
    // 0x80225A10: nop

    // 0x80225A14: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225A18: jal         0x800607C4
    // 0x80225A1C: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, 0X42C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225A1C: addiu       $a0, $a0, 0x42C
    ctx->r4 = ADD32(ctx->r4, 0X42C);
    after_0:
    // 0x80225A20: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A24: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A28:
    // 0x80225A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A30: jr          $ra
    // 0x80225A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228738_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022873C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228748: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022874C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228750: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228754: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228758: jal         0x802296E8
    // 0x8022875C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_802296E8_ovl29(rdram, ctx);
        goto after_0;
    // 0x8022875C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228760: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228768: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022876C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228770: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228778: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022877C: jr          $ra
    // 0x80228780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D28C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D294: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D29C: jal         0x800A3450
    // 0x8022D2A0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D2A0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x8022D2A4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D2A8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D2AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D2B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D2B4: lbu         $v0, 0x149C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X149C);
    // 0x8022D2B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D2BC: sh          $v0, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = ctx->r2;
    // 0x8022D2C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D2CC: jr          $ra
    // 0x8022D2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EE38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022EE3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EE40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EE44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EE48: lw          $v0, 0x18A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X18A0);
    // 0x8022EE4C: jalr        $v0
    // 0x8022EE50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EE50: nop

    after_0:
    // 0x8022EE54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE58: jr          $ra
    // 0x8022EE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227324_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022732C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227338: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022733C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227340: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227344: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80227348: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022734C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227354: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227358: addiu       $v1, $v1, 0xAA0
    ctx->r3 = ADD32(ctx->r3, 0XAA0);
    // 0x8022735C: jal         0x80229774
    // 0x80227360: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80229774_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227360: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80227364: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227368: beq         $v0, $zero, L_80227478
    if (ctx->r2 == 0) {
        // 0x8022736C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227478;
    }
    // 0x8022736C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227370: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227374: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227378: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022737C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227380: jal         0x8009A3B4
    // 0x80227384: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227384: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227388: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022738C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227390: jal         0x8009A3B4
    // 0x80227394: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227394: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80227398: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022739C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802273A0: jal         0x8009A3B4
    // 0x802273A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802273A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802273A8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802273AC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x802273B0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802273B4: beq         $v0, $zero, L_802273C4
    if (ctx->r2 == 0) {
        // 0x802273B8: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_802273C4;
    }
    // 0x802273B8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x802273BC: jal         0x802295DC
    // 0x802273C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802295DC_ovl29(rdram, ctx);
        goto after_4;
    // 0x802273C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802273C4:
    // 0x802273C4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802273C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802273CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802273D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802273D4: lw          $v0, 0x1008($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1008);
    // 0x802273D8: jalr        $v0
    // 0x802273DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802273DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802273E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802273E4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802273E8: bne         $v0, $zero, L_80227404
    if (ctx->r2 != 0) {
        // 0x802273EC: nop
    
            goto L_80227404;
    }
    // 0x802273EC: nop

    // 0x802273F0: jal         0x8003E934
    // 0x802273F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x802273F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802273F8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802273FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227400: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80227404:
    // 0x80227404: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227408: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022740C: beq         $v0, $a1, L_80227424
    if (ctx->r2 == ctx->r5) {
        // 0x80227410: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227424;
    }
    // 0x80227410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227414: jal         0x80050294
    // 0x80227418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80227418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022741C: j           L_8022742C
    // 0x80227420: nop

        goto L_8022742C;
    // 0x80227420: nop

L_80227424:
    // 0x80227424: jal         0x8005044C
    // 0x80227428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80227428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022742C:
    // 0x8022742C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227430: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227434: beq         $v0, $zero, L_80227450
    if (ctx->r2 == 0) {
        // 0x80227438: nop
    
            goto L_80227450;
    }
    // 0x80227438: nop

    // 0x8022743C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80227440: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80227444: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80227448: jal         0x8003B564
    // 0x8022744C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022744C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80227450:
    // 0x80227450: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227454: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227458: beq         $v0, $zero, L_80227468
    if (ctx->r2 == 0) {
        // 0x8022745C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227468;
    }
    // 0x8022745C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227460: j           L_8022746C
    // 0x80227464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022746C;
    // 0x80227464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80227468:
    // 0x80227468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022746C:
    // 0x8022746C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80227470: jal         0x80047284
    // 0x80227474: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80227474: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80227478:
    // 0x80227478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022747C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227488: jr          $ra
    // 0x8022748C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022748C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802274DC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802274E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802274E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802274E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802274EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274F0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x802274F4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802274F8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802274FC: addiu       $v0, $v0, 0x103C
    ctx->r2 = ADD32(ctx->r2, 0X103C);
    // 0x80227500: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80227504: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80227508: jal         0x802296D8
    // 0x8022750C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_802296D8_ovl29(rdram, ctx);
        goto after_0;
    // 0x8022750C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80227510: jal         0x800A3450
    // 0x80227514: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227514: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80227518: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022751C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227520: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227524: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227528: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022752C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80227530: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80227534: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227538: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022753C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227540: jr          $ra
    // 0x80227544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AF00_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022AF04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022AF08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022AF0C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022AF10: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022AF14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022AF18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022AF1C: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8022AF20: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022AF24: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022AF28: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022AF2C: beq         $v0, $zero, L_8022B0E8
    if (ctx->r2 == 0) {
        // 0x8022AF30: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022B0E8;
    }
    // 0x8022AF30: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AF34: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AF38: addu        $at, $at, $v0
    gpr jr_addend_8022AF40 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AF3C: lw          $v0, 0x1978($at)
    ctx->r2 = ADD32(ctx->r1, 0X1978);
    // 0x8022AF40: jr          $v0
    // 0x8022AF44: nop

    switch (jr_addend_8022AF40 >> 2) {
        case 0: goto L_8022AF48; break;
        case 1: goto L_8022AF68; break;
        case 2: goto L_8022AFCC; break;
        case 3: goto L_8022B06C; break;
        case 4: goto L_8022B09C; break;
        default: switch_error(__func__, 0x8022AF40, 0x80231978);
    }
    // 0x8022AF44: nop

L_8022AF48:
    // 0x8022AF48: jal         0x8006FF84
    // 0x8022AF4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022AF4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_0:
    // 0x8022AF50: beq         $v0, $zero, L_8022B0E8
    if (ctx->r2 == 0) {
        // 0x8022AF54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B0E8;
    }
    // 0x8022AF54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AF58: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8022AF5C: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8022AF60: j           L_8022B08C
    // 0x8022AF64: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
        goto L_8022B08C;
    // 0x8022AF64: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
L_8022AF68:
    // 0x8022AF68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AF6C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AF70: bne         $v0, $zero, L_8022B0E8
    if (ctx->r2 != 0) {
        // 0x8022AF74: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8022B0E8;
    }
    // 0x8022AF74: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022AF78: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
    // 0x8022AF7C: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x8022AF80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022AF84: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x8022AF88: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022AF8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AF90: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x8022AF94: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022AF98: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022AF9C: jal         0x8004EC38
    // 0x8022AFA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022AFA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022AFA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022AFA8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022AFAC: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022AFB0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022AFB4: jal         0x80034FCC
    // 0x8022AFB8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022AFB8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_2:
    // 0x8022AFBC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022AFC0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022AFC4: j           L_8022B08C
    // 0x8022AFC8: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
        goto L_8022B08C;
    // 0x8022AFC8: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
L_8022AFCC:
    // 0x8022AFCC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022AFD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AFD4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022AFD8: lh          $a3, 0x64($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X64);
    // 0x8022AFDC: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8022AFE0: jal         0x8004F820
    // 0x8022AFE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022AFE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFEC: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8022AFF0: lh          $a3, 0x64($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X64);
    // 0x8022AFF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022AFF8: jal         0x8004F820
    // 0x8022AFFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022AFFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022B000: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022B004: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022B008: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B00C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x8022B010: lhu         $v1, 0x442($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X442);
    // 0x8022B014: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8022B018: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022B01C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B020: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B024: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B028: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B02C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022B030: bne         $s0, $zero, L_8022B0E8
    if (ctx->r16 != 0) {
        // 0x8022B034: sh          $v1, 0x442($s3)
        MEM_H(0X442, ctx->r19) = ctx->r3;
            goto L_8022B0E8;
    }
    // 0x8022B034: sh          $v1, 0x442($s3)
    MEM_H(0X442, ctx->r19) = ctx->r3;
    // 0x8022B038: jal         0x8003516C
    // 0x8022B03C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x8022B03C: nop

    after_5:
    // 0x8022B040: bne         $v0, $zero, L_8022B0E8
    if (ctx->r2 != 0) {
        // 0x8022B044: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B0E8;
    }
    // 0x8022B044: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B048: jal         0x800616FC
    // 0x8022B04C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022B04C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_6:
    // 0x8022B050: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B054: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022B058: jal         0x80050294
    // 0x8022B05C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022B05C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022B060: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8022B064: j           L_8022B090
    // 0x8022B068: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
        goto L_8022B090;
    // 0x8022B068: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022B06C:
    // 0x8022B06C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B070: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B074: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B078: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B07C: bne         $v0, $zero, L_8022B0E8
    if (ctx->r2 != 0) {
        // 0x8022B080: nop
    
            goto L_8022B0E8;
    }
    // 0x8022B080: nop

    // 0x8022B084: jal         0x80034E3C
    // 0x8022B088: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_8;
    // 0x8022B088: nop

    after_8:
L_8022B08C:
    // 0x8022B08C: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
L_8022B090:
    // 0x8022B090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B094: j           L_8022B0E8
    // 0x8022B098: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_8022B0E8;
    // 0x8022B098: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_8022B09C:
    // 0x8022B09C: jal         0x8003516C
    // 0x8022B0A0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_9;
    // 0x8022B0A0: nop

    after_9:
    // 0x8022B0A4: bne         $v0, $zero, L_8022B0E8
    if (ctx->r2 != 0) {
        // 0x8022B0A8: nop
    
            goto L_8022B0E8;
    }
    // 0x8022B0A8: nop

    // 0x8022B0AC: jal         0x80070050
    // 0x8022B0B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022B0B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x8022B0B4: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022B0B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B0BC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022B0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B0C4: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x8022B0C8: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x8022B0CC: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022B0D0: sb          $zero, 0x8($s2)
    MEM_B(0X8, ctx->r18) = 0;
    // 0x8022B0D4: sb          $zero, 0xC($s2)
    MEM_B(0XC, ctx->r18) = 0;
    // 0x8022B0D8: sb          $zero, 0xF($s2)
    MEM_B(0XF, ctx->r18) = 0;
    // 0x8022B0DC: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
    // 0x8022B0E0: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x8022B0E4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022B0E8:
    // 0x8022B0E8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022B0EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B0F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022B0F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B0F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B0FC: jr          $ra
    // 0x8022B100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022B100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229000_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229004: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229008: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022900C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229010: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229014: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229018: lw          $v0, 0x1214($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1214);
    // 0x8022901C: jalr        $v0
    // 0x80229020: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229020: nop

    after_0:
    // 0x80229024: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229028: jr          $ra
    // 0x8022902C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022902C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F84_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227F94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F9C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80227FA0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80227FA4: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80227FA8: jal         0x8004FA7C
    // 0x80227FAC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227FAC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80227FB0: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80227FB4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80227FB8: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80227FBC: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80227FC0: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80227FC4: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80227FC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227FCC: bnel        $v0, $zero, L_80227FEC
    if (ctx->r2 != 0) {
        // 0x80227FD0: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_80227FEC;
    }
    goto skip_0;
    // 0x80227FD0: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80227FD4: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80227FD8: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227FDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227FE0: beq         $v0, $zero, L_80227FF0
    if (ctx->r2 == 0) {
        // 0x80227FE4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80227FF0;
    }
    // 0x80227FE4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80227FE8: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_80227FEC:
    // 0x80227FEC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80227FF0:
    // 0x80227FF0: bne         $v0, $zero, L_80228020
    if (ctx->r2 != 0) {
        // 0x80227FF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228020;
    }
    // 0x80227FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227FF8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80227FFC: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80228000: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80228004: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80228008: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022800C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228014: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80228018: j           L_80228078
    // 0x8022801C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80228078;
    // 0x8022801C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80228020:
    // 0x80228020: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228024: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228028: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022802C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228030: beq         $v0, $zero, L_80228074
    if (ctx->r2 == 0) {
        // 0x80228034: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228074;
    }
    // 0x80228034: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228038: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022803C: jal         0x80229774
    // 0x80228040: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229774_ovl29(rdram, ctx);
        goto after_1;
    // 0x80228040: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80228044: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228048: beq         $v0, $zero, L_80228080
    if (ctx->r2 == 0) {
        // 0x8022804C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228080;
    }
    // 0x8022804C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228050: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80228054: jal         0x802296D8
    // 0x80228058: nop

    func_802296D8_ovl29(rdram, ctx);
        goto after_2;
    // 0x80228058: nop

    after_2:
    // 0x8022805C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80228060: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80228064: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228068: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022806C: j           L_802280A0
    // 0x80228070: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802280A0;
    // 0x80228070: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80228074:
    // 0x80228074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228078:
    // 0x80228078: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022807C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80228080:
    // 0x80228080: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80228084: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80228088: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022808C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228090: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228094: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228098: jal         0x8004DA90
    // 0x8022809C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022809C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_802280A0:
    // 0x802280A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802280A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802280A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802280AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802280B0: jr          $ra
    // 0x802280B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802280B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802295DC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802295E0: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x802295E4: bne         $a1, $a0, L_80229638
    if (ctx->r5 != ctx->r4) {
        // 0x802295E8: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_80229638;
    }
    // 0x802295E8: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x802295EC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x802295F0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x802295F4: bne         $v1, $v0, L_80229604
    if (ctx->r3 != ctx->r2) {
        // 0x802295F8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80229604;
    }
    // 0x802295F8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802295FC: j           L_80229620
    // 0x80229600: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80229620;
    // 0x80229600: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229604:
    // 0x80229604: bne         $v1, $v0, L_80229614
    if (ctx->r3 != ctx->r2) {
        // 0x80229608: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80229614;
    }
    // 0x80229608: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022960C: j           L_80229620
    // 0x80229610: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80229620;
    // 0x80229610: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80229614:
    // 0x80229614: bne         $v1, $v0, L_80229620
    if (ctx->r3 != ctx->r2) {
        // 0x80229618: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229620;
    }
    // 0x80229618: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022961C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229620:
    // 0x80229620: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80229624: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80229628: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022962C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80229630: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80229634: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80229638:
    // 0x80229638: jr          $ra
    // 0x8022963C: nop

    TRACE_RETURN()
    return;
    // 0x8022963C: nop

;}
RECOMP_FUNC void func_802298D4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802298D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802298DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802298E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802298E4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802298E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802298EC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802298F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802298F4: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x802298F8: jal         0x8004D5D4
    // 0x802298FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802298FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229900: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80229904: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229908: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022990C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229910: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229914: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229918: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022991C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229920: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80229924: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80229928: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022992C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80229930: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229934: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229938: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022993C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80229940: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229944: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022994C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229950: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229954: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022995C: jr          $ra
    // 0x80229960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A80C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A80C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A810: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A818: jal         0x8003E934
    // 0x8022A81C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022A81C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022A820: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A824: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x8022A828: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022A82C: beq         $v1, $zero, L_8022A83C
    if (ctx->r3 == 0) {
        // 0x8022A830: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022A83C;
    }
    // 0x8022A830: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A834: jal         0x8004F418
    // 0x8022A838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022A838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A83C:
    // 0x8022A83C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A844: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A848: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A84C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8022A850: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022A854: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022A858: jal         0x8004DA90
    // 0x8022A85C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A85C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022A860: jal         0x8003E810
    // 0x8022A864: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x8022A864: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022A868: beq         $v0, $zero, L_8022A880
    if (ctx->r2 == 0) {
        // 0x8022A86C: nop
    
            goto L_8022A880;
    }
    // 0x8022A86C: nop

    // 0x8022A870: jal         0x8004F418
    // 0x8022A874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022A874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022A878: j           L_8022A890
    // 0x8022A87C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A890;
    // 0x8022A87C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A880:
    // 0x8022A880: jal         0x80040F30
    // 0x8022A884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022A884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A888: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A88C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A890:
    // 0x8022A890: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A894: bne         $v0, $zero, L_8022A8A4
    if (ctx->r2 != 0) {
        // 0x8022A898: nop
    
            goto L_8022A8A4;
    }
    // 0x8022A898: nop

    // 0x8022A89C: jal         0x8005044C
    // 0x8022A8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022A8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022A8A4:
    // 0x8022A8A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A8A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A8AC: jr          $ra
    // 0x8022A8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022A8B4: nop

    // 0x8022A8B8: nop

    // 0x8022A8BC: nop

;}
RECOMP_FUNC void func_8022E3F8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E3FC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E400: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E404: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022E408: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E40C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E410: beq         $v0, $zero, L_8022E464
    if (ctx->r2 == 0) {
        // 0x8022E414: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022E464;
    }
    // 0x8022E414: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E418: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022E41C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E420: jal         0x8002C678
    // 0x8022E424: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022E424: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022E428: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E42C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022E430: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022E434: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022E438: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E43C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022E440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E444: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022E448: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022E44C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022E450: nop

    // 0x8022E454: jal         0x800319B4
    // 0x8022E458: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022E458: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022E45C: j           L_8022E470
    // 0x8022E460: nop

        goto L_8022E470;
    // 0x8022E460: nop

L_8022E464:
    // 0x8022E464: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E468: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E46C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022E470:
    // 0x8022E470: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022E474: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E478: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E47C: jr          $ra
    // 0x8022E480: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E480: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802296D8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296D8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802296DC: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x802296E0: jr          $ra
    // 0x802296E4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x802296E4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80227CC0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227CCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227CD0: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227CD4: addiu       $s1, $s1, 0x1144
    ctx->r17 = ADD32(ctx->r17, 0X1144);
    // 0x80227CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227CDC: jal         0x800A3450
    // 0x80227CE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227CE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80227CE4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227CE8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227CEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227CF0: lbu         $v1, 0x1134($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1134);
    // 0x80227CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227CF8: beq         $v1, $v0, L_80227D98
    if (ctx->r3 == ctx->r2) {
        // 0x80227CFC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227D98;
    }
    // 0x80227CFC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227D00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227D04: beql        $v0, $zero, L_80227D1C
    if (ctx->r2 == 0) {
        // 0x80227D08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227D1C;
    }
    goto skip_0;
    // 0x80227D08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227D0C: beq         $v1, $zero, L_80227D2C
    if (ctx->r3 == 0) {
        // 0x80227D10: nop
    
            goto L_80227D2C;
    }
    // 0x80227D10: nop

    // 0x80227D14: j           L_80227DE4
    // 0x80227D18: nop

        goto L_80227DE4;
    // 0x80227D18: nop

L_80227D1C:
    // 0x80227D1C: beq         $v1, $v0, L_80227DB8
    if (ctx->r3 == ctx->r2) {
        // 0x80227D20: nop
    
            goto L_80227DB8;
    }
    // 0x80227D20: nop

    // 0x80227D24: j           L_80227DE4
    // 0x80227D28: nop

        goto L_80227DE4;
    // 0x80227D28: nop

L_80227D2C:
    // 0x80227D2C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80227D30: bne         $v0, $zero, L_80227D44
    if (ctx->r2 != 0) {
        // 0x80227D34: nop
    
            goto L_80227D44;
    }
    // 0x80227D34: nop

    // 0x80227D38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227D3C: j           L_80227D4C
    // 0x80227D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80227D4C;
    // 0x80227D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227D44:
    // 0x80227D44: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227D48: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80227D4C:
    // 0x80227D4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227D50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227D54: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227D58: beq         $v0, $zero, L_80227D74
    if (ctx->r2 == 0) {
        // 0x80227D5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227D74;
    }
    // 0x80227D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227D60: jal         0x80229728
    // 0x80227D64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80229728_ovl29(rdram, ctx);
        goto after_1;
    // 0x80227D64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80227D68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227D6C: j           L_80227D88
    // 0x80227D70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227D88;
    // 0x80227D70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227D74:
    // 0x80227D74: jal         0x80229728
    // 0x80227D78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229728_ovl29(rdram, ctx);
        goto after_2;
    // 0x80227D78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80227D7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227D80: jal         0x802296E8
    // 0x80227D84: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_802296E8_ovl29(rdram, ctx);
        goto after_3;
    // 0x80227D84: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80227D88:
    // 0x80227D88: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227D8C: addiu       $s1, $s1, 0x1144
    ctx->r17 = ADD32(ctx->r17, 0X1144);
    // 0x80227D90: j           L_80227DE4
    // 0x80227D94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227DE4;
    // 0x80227D94: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227D98:
    // 0x80227D98: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227D9C: jal         0x802296D8
    // 0x80227DA0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_802296D8_ovl29(rdram, ctx);
        goto after_4;
    // 0x80227DA0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80227DA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227DA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227DAC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80227DB0: j           L_80227DE4
    // 0x80227DB4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80227DE4;
    // 0x80227DB4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227DB8:
    // 0x80227DB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227DBC: jal         0x802296E8
    // 0x80227DC0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_802296E8_ovl29(rdram, ctx);
        goto after_5;
    // 0x80227DC0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80227DC4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227DC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227DCC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227DD0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227DD4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227DD8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80227DDC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80227DE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227DE4:
    // 0x80227DE4: jal         0x800A3450
    // 0x80227DE8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227DE8: nop

    after_6:
    // 0x80227DEC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227DF0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227DF4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227DF8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80227DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E0C: jr          $ra
    // 0x80227E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D144_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D14C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D150: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D15C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D160: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D164: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D168: jal         0x8009A3B4
    // 0x8022D16C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D16C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D170: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D174: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D178: jal         0x8009A3B4
    // 0x8022D17C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D17C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D180: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D184: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D188: jal         0x8009A3B4
    // 0x8022D18C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D18C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D190: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022D194: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D198: beq         $v0, $zero, L_8022D1A8
    if (ctx->r2 == 0) {
        // 0x8022D19C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022D1A8;
    }
    // 0x8022D19C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022D1A0: jal         0x8022D5C8
    // 0x8022D1A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D5C8_ovl29(rdram, ctx);
        goto after_3;
    // 0x8022D1A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022D1A8:
    // 0x8022D1A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D1AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D1B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1B8: lw          $v0, 0x1488($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1488);
    // 0x8022D1BC: jalr        $v0
    // 0x8022D1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022D1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D1C4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022D1C8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D1CC: beq         $v0, $a1, L_8022D1E4
    if (ctx->r2 == ctx->r5) {
        // 0x8022D1D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D1E4;
    }
    // 0x8022D1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1D4: jal         0x80050294
    // 0x8022D1D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022D1D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022D1DC: j           L_8022D1EC
    // 0x8022D1E0: nop

        goto L_8022D1EC;
    // 0x8022D1E0: nop

L_8022D1E4:
    // 0x8022D1E4: jal         0x8005044C
    // 0x8022D1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022D1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022D1EC:
    // 0x8022D1EC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D1F0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D1F4: beq         $v0, $zero, L_8022D20C
    if (ctx->r2 == 0) {
        // 0x8022D1F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D20C;
    }
    // 0x8022D1F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D1FC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022D200: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022D204: jal         0x8003B564
    // 0x8022D208: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022D208: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022D20C:
    // 0x8022D20C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D210: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022D214: bne         $v0, $zero, L_8022D22C
    if (ctx->r2 != 0) {
        // 0x8022D218: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D22C;
    }
    // 0x8022D218: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D21C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D220: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022D224: jal         0x80047284
    // 0x8022D228: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x8022D228: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_8022D22C:
    // 0x8022D22C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D230: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D234: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D238: jr          $ra
    // 0x8022D23C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D23C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DCE0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022DCE4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022DCE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022DCEC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022DCF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022DCF4: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022DCF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DCFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DD00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022DD04: jal         0x8009A3B4
    // 0x8022DD08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DD08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022DD0C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022DD10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022DD14: jal         0x8009A3B4
    // 0x8022DD18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DD18: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DD1C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022DD20: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x8022DD24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DD28: jal         0x8009A3B4
    // 0x8022DD2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DD2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DD30: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022DD34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DD38: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DD3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DD40: lw          $v0, 0x15E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X15E8);
    // 0x8022DD44: jalr        $v0
    // 0x8022DD48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DD48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022DD4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD50: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022DD54: jal         0x80031600
    // 0x8022DD58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022DD58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022DD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD60: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022DD64: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DD68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022DD6C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DD70: jal         0x80031DA8
    // 0x8022DD74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022DD74: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022DD78: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022DD7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DD80: jal         0x8009A3B4
    // 0x8022DD84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022DD84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022DD88: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022DD8C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DD90: beq         $v0, $zero, L_8022DDAC
    if (ctx->r2 == 0) {
        // 0x8022DD94: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022DDAC;
    }
    // 0x8022DD94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022DD98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DD9C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DDA0: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x8022DDA4: jal         0x80047284
    // 0x8022DDA8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022DDA8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022DDAC:
    // 0x8022DDAC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022DDB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DDB4: beq         $v0, $zero, L_8022DDCC
    if (ctx->r2 == 0) {
        // 0x8022DDB8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022DDCC;
    }
    // 0x8022DDB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022DDBC: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x8022DDC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022DDC4: jal         0x8003B564
    // 0x8022DDC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022DDC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022DDCC:
    // 0x8022DDCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DDD0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022DDD4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022DDD8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022DDDC: jr          $ra
    // 0x8022DDE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DDE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AB78_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AB88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB8C: bne         $v0, $zero, L_8022ABA8
    if (ctx->r2 != 0) {
        // 0x8022AB90: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_8022ABA8;
    }
    // 0x8022AB90: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8022AB94: jal         0x80050294
    // 0x8022AB98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022AB98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022AB9C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ABA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ABA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022ABA8:
    // 0x8022ABA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ABAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABB0: jr          $ra
    // 0x8022ABB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ABB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B618_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B61C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B620: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B628: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B62C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B630: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B634: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B638: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B63C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B640: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B644: jal         0x8004D5D4
    // 0x8022B648: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B648: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B64C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B650: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B654: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B658: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B65C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B660: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B664: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B668: jal         0x8003E934
    // 0x8022B66C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022B66C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022B670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B674: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022B678: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B67C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B680: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B684: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B688: addiu       $v0, $v0, 0x1334
    ctx->r2 = ADD32(ctx->r2, 0X1334);
    // 0x8022B68C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B690: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022B694: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022B698: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022B69C: jal         0x80050294
    // 0x8022B6A0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022B6A0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B6A4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6B0: jr          $ra
    // 0x8022B6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B6B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
