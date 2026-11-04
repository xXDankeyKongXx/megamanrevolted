#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802265EC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802265F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802265F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802265F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802265FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226600: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80226604: bne         $v0, $zero, L_80226698
    if (ctx->r2 != 0) {
        // 0x80226608: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226698;
    }
    // 0x80226608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022660C: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    // 0x80226610: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80226614: jal         0x8002A33C
    // 0x80226618: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80226618: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022661C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80226620: bne         $v0, $zero, L_8022667C
    if (ctx->r2 != 0) {
        // 0x80226624: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022667C;
    }
    // 0x80226624: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226628: jal         0x8004F144
    // 0x8022662C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022662C: nop

    after_1:
    // 0x80226630: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226634: beq         $v1, $zero, L_8022665C
    if (ctx->r3 == 0) {
        // 0x80226638: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022665C;
    }
    // 0x80226638: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022663C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226644: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226648: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022664C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226650: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226654: jal         0x8009A3B4
    // 0x80226658: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226658: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_8022665C:
    // 0x8022665C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226660: jal         0x8007A1B8
    // 0x80226664: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80226664: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80226668: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022666C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226670: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80226674: j           L_802266C8
    // 0x80226678: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802266C8;
    // 0x80226678: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022667C:
    // 0x8022667C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80226680: jal         0x80050294
    // 0x80226684: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80226684: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226688: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022668C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226690: j           L_802266C8
    // 0x80226694: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802266C8;
    // 0x80226694: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226698:
    // 0x80226698: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022669C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802266A0: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802266A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802266A8: jal         0x8004DA90
    // 0x802266AC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x802266AC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_5:
    // 0x802266B0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802266B4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802266B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802266C0: jal         0x8005044C
    // 0x802266C4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802266C4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    after_6:
L_802266C8:
    // 0x802266C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802266CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802266D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266D4: jr          $ra
    // 0x802266D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802266D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F5D4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F5DC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F5E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F5E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F5E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F5EC: lw          $v0, -0x3FB4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3FB4);
    // 0x8022F5F0: jalr        $v0
    // 0x8022F5F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F5F4: nop

    after_0:
    // 0x8022F5F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5FC: jr          $ra
    // 0x8022F600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E0C4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E0C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E0D4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022E0D8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E0DC: jal         0x8004FA7C
    // 0x8022E0E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E0E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022E0E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E0E8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022E0EC: bne         $v0, $zero, L_8022E118
    if (ctx->r2 != 0) {
        // 0x8022E0F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E118;
    }
    // 0x8022E0F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0F4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022E0F8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022E0FC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022E100: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E108: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E10C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022E110: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022E114: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022E118:
    // 0x8022E118: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E11C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E120: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E124: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E12C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E130: jr          $ra
    // 0x8022E134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A430_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A430: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A434: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022A438: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8022A43C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022A440: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022A444: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022A448: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022A44C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022A450: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A454: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A458: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A45C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A460: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x8022A464: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x8022A468: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8022A46C: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022A470: addiu       $s3, $s3, -0x33C0
    ctx->r19 = ADD32(ctx->r19, -0X33C0);
    // 0x8022A474: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8022A478: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x8022A47C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A480: beq         $v1, $v0, L_8022A78C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A484: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_8022A78C;
    }
    // 0x8022A484: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8022A488: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x8022A48C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_8022A490:
    // 0x8022A490: jal         0x8006033C
    // 0x8022A494: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022A494: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x8022A498: bnel        $v0, $zero, L_8022A774
    if (ctx->r2 != 0) {
        // 0x8022A49C: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_8022A774;
    }
    goto skip_0;
    // 0x8022A49C: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x8022A4A0: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x8022A4A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A4A8: beq         $v1, $v0, L_8022A5A0
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4AC: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_8022A5A0;
    }
    // 0x8022A4AC: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x8022A4B0: beq         $v0, $zero, L_8022A4C8
    if (ctx->r2 == 0) {
        // 0x8022A4B4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022A4C8;
    }
    // 0x8022A4B4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022A4B8: beq         $v1, $v0, L_8022A4E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4BC: nop
    
            goto L_8022A4E4;
    }
    // 0x8022A4BC: nop

    // 0x8022A4C0: j           L_8022A774
    // 0x8022A4C4: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8022A774;
    // 0x8022A4C4: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022A4C8:
    // 0x8022A4C8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022A4CC: beq         $v1, $v0, L_8022A65C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4D0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8022A65C;
    }
    // 0x8022A4D0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022A4D4: beq         $v1, $v0, L_8022A708
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4D8: nop
    
            goto L_8022A708;
    }
    // 0x8022A4D8: nop

    // 0x8022A4DC: j           L_8022A774
    // 0x8022A4E0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8022A774;
    // 0x8022A4E0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022A4E4:
    // 0x8022A4E4: jal         0x8004EEAC
    // 0x8022A4E8: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x8022A4E8: nop

    after_1:
    // 0x8022A4EC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A4F0: beq         $s1, $zero, L_8022A770
    if (ctx->r17 == 0) {
        // 0x8022A4F4: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022A770;
    }
    // 0x8022A4F4: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022A4F8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A4FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A500: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022A504: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022A508: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022A50C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A510: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8022A514: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8022A518: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8022A51C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022A520: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022A524: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022A528: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022A52C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A530: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022A534: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A538: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022A53C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A540: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A544: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022A548: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A54C: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022A550: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022A554: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A558: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A55C: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022A560: jal         0x8009A3B4
    // 0x8022A564: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A564: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022A568: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A56C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A570: jal         0x8009A3B4
    // 0x8022A574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022A578: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022A57C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022A580: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022A584: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A588: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022A58C: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022A590: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A594: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022A598: j           L_8022A764
    // 0x8022A59C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022A764;
    // 0x8022A59C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022A5A0:
    // 0x8022A5A0: jal         0x8004EF48
    // 0x8022A5A4: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x8022A5A4: nop

    after_4:
    // 0x8022A5A8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A5AC: beq         $s1, $zero, L_8022A770
    if (ctx->r17 == 0) {
        // 0x8022A5B0: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022A770;
    }
    // 0x8022A5B0: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022A5B4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A5B8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A5BC: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022A5C0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022A5C4: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022A5C8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A5CC: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8022A5D0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8022A5D4: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8022A5D8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022A5DC: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022A5E0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022A5E4: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022A5E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A5EC: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022A5F0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A5F4: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022A5F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A5FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A600: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022A604: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A608: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022A60C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022A610: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A614: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A618: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022A61C: jal         0x8009A3B4
    // 0x8022A620: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A620: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022A624: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A62C: jal         0x8009A3B4
    // 0x8022A630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022A634: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022A638: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022A63C: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022A640: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A644: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022A648: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022A64C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A650: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022A654: j           L_8022A764
    // 0x8022A658: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022A764;
    // 0x8022A658: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022A65C:
    // 0x8022A65C: jal         0x8004EFE4
    // 0x8022A660: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x8022A660: nop

    after_7:
    // 0x8022A664: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A668: beq         $s1, $zero, L_8022A770
    if (ctx->r17 == 0) {
        // 0x8022A66C: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022A770;
    }
    // 0x8022A66C: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022A670: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A674: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A678: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022A67C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022A680: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022A684: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A688: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022A68C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022A690: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022A694: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A698: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022A69C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A6A0: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022A6A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A6A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6AC: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022A6B0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A6B4: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022A6B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022A6BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A6C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6C4: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022A6C8: jal         0x8009A3B4
    // 0x8022A6CC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022A6CC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x8022A6D0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A6D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A6D8: jal         0x8009A3B4
    // 0x8022A6DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022A6DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022A6E0: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022A6E4: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022A6E8: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022A6EC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A6F0: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022A6F4: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022A6F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A6FC: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022A700: j           L_8022A764
    // 0x8022A704: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022A764;
    // 0x8022A704: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022A708:
    // 0x8022A708: jal         0x8004F2C4
    // 0x8022A70C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x8022A70C: nop

    after_10:
    // 0x8022A710: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A714: beq         $s0, $zero, L_8022A770
    if (ctx->r16 == 0) {
        // 0x8022A718: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022A770;
    }
    // 0x8022A718: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022A71C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022A720: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A724: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022A728: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022A72C: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022A730: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022A734: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022A738: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022A73C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A740: jal         0x8009A3B4
    // 0x8022A744: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022A744: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022A748: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x8022A74C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022A750: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A754: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x8022A758: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022A75C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A760: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_8022A764:
    // 0x8022A764: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x8022A768: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x8022A76C: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_8022A770:
    // 0x8022A770: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022A774:
    // 0x8022A774: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x8022A778: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x8022A77C: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8022A780: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A784: bne         $v1, $v0, L_8022A490
    if (ctx->r3 != ctx->r2) {
        // 0x8022A788: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8022A490;
    }
    // 0x8022A788: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8022A78C:
    // 0x8022A78C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A790: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022A794: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A798: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x8022A79C: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x8022A7A0: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x8022A7A4: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8022A7A8: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x8022A7AC: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x8022A7B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7B4: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x8022A7B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A7BC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022A7C0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022A7C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022A7C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A7CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022A7D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022A7D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A7D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A7DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A7E0: jr          $ra
    // 0x8022A7E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A7E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022A7E8: nop

    // 0x8022A7EC: nop

;}
RECOMP_FUNC void func_80236014_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023601C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236024: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236028: beq         $v1, $zero, L_80236044
    if (ctx->r3 == 0) {
        // 0x8023602C: addiu       $a0, $s0, 0x4E0
        ctx->r4 = ADD32(ctx->r16, 0X4E0);
            goto L_80236044;
    }
    // 0x8023602C: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x80236030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236034: beq         $v1, $v0, L_80236060
    if (ctx->r3 == ctx->r2) {
        // 0x80236038: nop
    
            goto L_80236060;
    }
    // 0x80236038: nop

    // 0x8023603C: j           L_80236188
    // 0x80236040: nop

        goto L_80236188;
    // 0x80236040: nop

L_80236044:
    // 0x80236044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236048: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023604C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236050: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236054: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80236058: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8023605C: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_80236060:
    // 0x80236060: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80236064: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80236068: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023606C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80236070: beq         $v0, $zero, L_8023608C
    if (ctx->r2 == 0) {
        // 0x80236074: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8023608C;
    }
    // 0x80236074: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80236078: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8023607C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80236080: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236084: beq         $v0, $zero, L_802360A4
    if (ctx->r2 == 0) {
        // 0x80236088: nop
    
            goto L_802360A4;
    }
    // 0x80236088: nop

L_8023608C:
    // 0x8023608C: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80236090: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236094: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236098: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023609C: j           L_80236188
    // 0x802360A0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_80236188;
    // 0x802360A0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_802360A4:
    // 0x802360A4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802360A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802360AC: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x802360B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802360B4: bgtzl       $v0, L_802360CC
    if (SIGNED(ctx->r2) > 0) {
        // 0x802360B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802360CC;
    }
    goto skip_0;
    // 0x802360B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802360BC: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802360C0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802360C4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x802360C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802360CC:
    // 0x802360CC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802360D0: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x802360D4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x802360D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802360DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802360E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802360E4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802360E8: jal         0x8004DA90
    // 0x802360EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802360EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802360F0: jal         0x80040F30
    // 0x802360F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802360F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802360F8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802360FC: beq         $v0, $zero, L_80236114
    if (ctx->r2 == 0) {
        // 0x80236100: nop
    
            goto L_80236114;
    }
    // 0x80236100: nop

    // 0x80236104: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80236108: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023610C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80236110: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80236114:
    // 0x80236114: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80236118: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8023611C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80236120: bltz        $v0, L_80236138
    if (SIGNED(ctx->r2) < 0) {
        // 0x80236124: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80236138;
    }
    // 0x80236124: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80236128: beq         $v0, $zero, L_80236148
    if (ctx->r2 == 0) {
        // 0x8023612C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236148;
    }
    // 0x8023612C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236130: j           L_80236174
    // 0x80236134: nop

        goto L_80236174;
    // 0x80236134: nop

L_80236138:
    // 0x80236138: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8023613C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80236140: bne         $v0, $zero, L_80236174
    if (ctx->r2 != 0) {
        // 0x80236144: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236174;
    }
    // 0x80236144: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80236148:
    // 0x80236148: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8023614C: jal         0x8009A3B4
    // 0x80236150: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236150: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80236154: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80236158: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8023615C: jal         0x8009A3B4
    // 0x80236160: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80236160: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80236164: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80236168: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023616C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80236170: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80236174:
    // 0x80236174: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80236178: beq         $v0, $zero, L_80236188
    if (ctx->r2 == 0) {
        // 0x8023617C: addiu       $a0, $zero, 0xD5
        ctx->r4 = ADD32(0, 0XD5);
            goto L_80236188;
    }
    // 0x8023617C: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x80236180: jal         0x8002A33C
    // 0x80236184: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80236184: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80236188:
    // 0x80236188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023618C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236190: jr          $ra
    // 0x80236194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA9C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA9C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FAA0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022FAA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FAA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FAAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FAB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FAB4: bne         $v1, $v0, L_8022FADC
    if (ctx->r3 != ctx->r2) {
        // 0x8022FAB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022FADC;
    }
    // 0x8022FAB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FABC: jal         0x80061724
    // 0x8022FAC0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022FAC0: nop

    after_0:
    // 0x8022FAC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FAC8: jal         0x800616FC
    // 0x8022FACC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022FACC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022FAD0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FAD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FAD8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022FADC:
    // 0x8022FADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FAE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAE4: jr          $ra
    // 0x8022FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234730_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023473C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234740: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80234744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234748: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023474C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80234750: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80234754: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80234758: lw          $a1, 0x378($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X378);
    // 0x8023475C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234760: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234764: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80234768: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8023476C: and         $v1, $a1, $a0
    ctx->r3 = ctx->r5 & ctx->r4;
    // 0x80234770: lbu         $s2, 0xA($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0XA);
    // 0x80234774: beq         $v1, $zero, L_8023485C
    if (ctx->r3 == 0) {
        // 0x80234778: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8023485C;
    }
    // 0x80234778: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023477C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80234780: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80234784: beq         $v0, $zero, L_8023485C
    if (ctx->r2 == 0) {
        // 0x80234788: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023485C;
    }
    // 0x80234788: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023478C: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80234790: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234794: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    // 0x80234798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023479C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802347A0: jal         0x8004FEA0
    // 0x802347A4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x802347A4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802347A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802347AC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802347B0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802347B4: beq         $v0, $zero, L_802347C4
    if (ctx->r2 == 0) {
        // 0x802347B8: sw          $v1, 0x354($s0)
        MEM_W(0X354, ctx->r16) = ctx->r3;
            goto L_802347C4;
    }
    // 0x802347B8: sw          $v1, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r3;
    // 0x802347BC: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x802347C0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
L_802347C4:
    // 0x802347C4: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802347C8: lhu         $a0, 0x356($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X356);
    // 0x802347CC: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802347D0: bne         $v0, $zero, L_802347EC
    if (ctx->r2 != 0) {
        // 0x802347D4: sw          $a0, 0x354($s0)
        MEM_W(0X354, ctx->r16) = ctx->r4;
            goto L_802347EC;
    }
    // 0x802347D4: sw          $a0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r4;
    // 0x802347D8: lw          $v0, 0x378($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X378);
    // 0x802347DC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x802347E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802347E4: beq         $v0, $zero, L_802347F8
    if (ctx->r2 == 0) {
        // 0x802347E8: nop
    
            goto L_802347F8;
    }
    // 0x802347E8: nop

L_802347EC:
    // 0x802347EC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x802347F0: j           L_80234850
    // 0x802347F4: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
        goto L_80234850;
    // 0x802347F4: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
L_802347F8:
    // 0x802347F8: jal         0x800324B4
    // 0x802347FC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802347FC: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80234800: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x80234804: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80234808: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023480C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234810: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234814: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x80234818: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023481C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80234820: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80234824: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80234828: jal         0x80032498
    // 0x8023482C: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8023482C: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    after_2:
    // 0x80234830: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234834: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234838: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023483C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80234840: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234844: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80234848: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8023484C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80234850:
    // 0x80234850: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80234854: jal         0x8002A33C
    // 0x80234858: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80234858: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8023485C:
    // 0x8023485C: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x80234860: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80234864: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234868: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023486C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234870: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234874: jr          $ra
    // 0x80234878: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234878: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023487C: nop

;}
RECOMP_FUNC void func_8022B624_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B62C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022B630: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B634: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B638: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B63C: lw          $v0, -0x4C78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C78);
    // 0x8022B640: jalr        $v0
    // 0x8022B644: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B644: nop

    after_0:
    // 0x8022B648: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B64C: jr          $ra
    // 0x8022B650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237DF0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237DF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237E00: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237E04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237E08: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237E0C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80237E10: jal         0x80071A70
    // 0x80237E14: lw          $a0, -0x39A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39A0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x80237E14: lw          $a0, -0x39A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39A0);
    after_0:
    // 0x80237E18: bne         $v0, $zero, L_80237E30
    if (ctx->r2 != 0) {
        // 0x80237E1C: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80237E30;
    }
    // 0x80237E1C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80237E20: jal         0x8004F62C
    // 0x80237E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80237E24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237E28: j           L_80237E80
    // 0x80237E2C: nop

        goto L_80237E80;
    // 0x80237E2C: nop

L_80237E30:
    // 0x80237E30: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80237E34: bne         $v1, $zero, L_80237E44
    if (ctx->r3 != 0) {
        // 0x80237E38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237E44;
    }
    // 0x80237E38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237E3C: j           L_80237E54
    // 0x80237E40: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80237E54;
    // 0x80237E40: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80237E44:
    // 0x80237E44: bne         $v1, $v0, L_80237E50
    if (ctx->r3 != ctx->r2) {
        // 0x80237E48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237E50;
    }
    // 0x80237E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237E4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80237E50:
    // 0x80237E50: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80237E54:
    // 0x80237E54: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80237E58: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80237E5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237E60: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237E64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237E68: lw          $v1, -0x38E4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X38E4);
    // 0x80237E6C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237E70: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80237E74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237E78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237E7C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80237E80:
    // 0x80237E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237E84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237E88: jr          $ra
    // 0x80237E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F974_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F978: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F97C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F980: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F984: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F988: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F98C: jal         0x8003516C
    // 0x8022F990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022F990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022F994: bne         $v0, $zero, L_8022F9B8
    if (ctx->r2 != 0) {
        // 0x8022F998: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F9B8;
    }
    // 0x8022F998: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F99C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F9A0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022F9A4: jal         0x800610AC
    // 0x8022F9A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022F9A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022F9AC: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F9B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F9B4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022F9B8:
    // 0x8022F9B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F9BC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F9C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F9C4: jal         0x8004F820
    // 0x8022F9C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F9C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022F9CC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F9D0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022F9D4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022F9D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F9DC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F9E0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F9E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F9E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F9EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F9F0: jr          $ra
    // 0x8022F9F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F9F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EE34_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE40: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022EE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EE48: jal         0x8022FF64
    // 0x8022EE4C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF64_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022EE4C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022EE50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022EE54: beq         $v0, $zero, L_8022EE80
    if (ctx->r2 == 0) {
        // 0x8022EE58: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022EE80;
    }
    // 0x8022EE58: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022EE5C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EE60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EE64: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EE68: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022EE6C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022EE70: jal         0x8022FEC8
    // 0x8022EE74: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022EE74: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022EE78: j           L_8022EEC0
    // 0x8022EE7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EEC0;
    // 0x8022EE7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EE80:
    // 0x8022EE80: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022EE84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE88: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022EE8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EE90: bne         $v0, $zero, L_8022EEA0
    if (ctx->r2 != 0) {
        // 0x8022EE94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EEA0;
    }
    // 0x8022EE94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EEA0:
    // 0x8022EEA0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EEA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EEA8: jal         0x8004DA90
    // 0x8022EEAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022EEAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022EEB0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EEB4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022EEB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EEBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EEC0:
    // 0x8022EEC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EEC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EEC8: jr          $ra
    // 0x8022EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E8A8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8A8: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022E8AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E8B0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022E8B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E8B8: bne         $v0, $zero, L_8022E8C4
    if (ctx->r2 != 0) {
        // 0x8022E8BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E8C4;
    }
    // 0x8022E8BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8C0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E8C4:
    // 0x8022E8C4: jr          $ra
    // 0x8022E8C8: nop

    TRACE_RETURN()
    return;
    // 0x8022E8C8: nop

;}
RECOMP_FUNC void func_8022DE38_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE48: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022DE4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DE50: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x8022DE54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022DE58: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022DE5C: jal         0x8022FF18
    // 0x8022DE60: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022FF18_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022DE60: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DE64: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DE68: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DE6C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022DE70: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022DE74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022DE78: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022DE7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE84: jr          $ra
    // 0x8022DE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C94_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C94: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233C98: bgez        $v0, L_80233CB4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233C9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233CB4;
    }
    // 0x80233C9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233CA0: lhu         $v1, 0x348($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X348);
    // 0x80233CA4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80233CA8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80233CAC: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80233CB0: sh          $v1, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r3;
L_80233CB4:
    // 0x80233CB4: jr          $ra
    // 0x80233CB8: nop

    TRACE_RETURN()
    return;
    // 0x80233CB8: nop

;}
RECOMP_FUNC void func_802322EC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802322F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802322F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802322F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802322FC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232300: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232304: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80232308: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8023230C: bne         $v0, $zero, L_80232320
    if (ctx->r2 != 0) {
        // 0x80232310: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_80232320;
    }
    // 0x80232310: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80232314: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232318: jal         0x80231D04
    // 0x8023231C: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_80231D04_ovl21(rdram, ctx);
        goto after_0;
    // 0x8023231C: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_80232320:
    // 0x80232320: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232324: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232328: bne         $v1, $v0, L_802323B8
    if (ctx->r3 != ctx->r2) {
        // 0x8023232C: nop
    
            goto L_802323B8;
    }
    // 0x8023232C: nop

    // 0x80232330: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232334: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80232338: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8023233C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232340: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232344: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232348: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8023234C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80232350: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80232354: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232358: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8023235C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232360: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232364: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232368: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8023236C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80232370: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232374: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232378: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8023237C: bne         $v1, $zero, L_802323B8
    if (ctx->r3 != 0) {
        // 0x80232380: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802323B8;
    }
    // 0x80232380: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232384: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232388: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8023238C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232390: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232394: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232398: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023239C: beq         $v1, $v0, L_802323B8
    if (ctx->r3 == ctx->r2) {
        // 0x802323A0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802323B8;
    }
    // 0x802323A0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802323A4: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802323A8: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x802323AC: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x802323B0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802323B4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802323B8:
    // 0x802323B8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802323BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802323C0: bne         $v1, $v0, L_80232418
    if (ctx->r3 != ctx->r2) {
        // 0x802323C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232418;
    }
    // 0x802323C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802323C8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802323CC: beq         $v1, $v0, L_80232410
    if (ctx->r3 == ctx->r2) {
        // 0x802323D0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80232410;
    }
    // 0x802323D0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802323D4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802323D8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802323DC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802323E0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802323E4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802323E8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802323EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802323F0: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x802323F4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802323F8: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x802323FC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80232400: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x80232404: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80232408: j           L_80232418
    // 0x8023240C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80232418;
    // 0x8023240C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80232410:
    // 0x80232410: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232414: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80232418:
    // 0x80232418: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023241C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232420: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232428: jr          $ra
    // 0x8023242C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023242C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225634_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225638: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022563C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225644: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225648: bne         $v0, $zero, L_80225664
    if (ctx->r2 != 0) {
        // 0x8022564C: nop
    
            goto L_80225664;
    }
    // 0x8022564C: nop

    // 0x80225650: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225654: jal         0x800607C4
    // 0x80225658: addiu       $a0, $a0, -0x5254
    ctx->r4 = ADD32(ctx->r4, -0X5254);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225658: addiu       $a0, $a0, -0x5254
    ctx->r4 = ADD32(ctx->r4, -0X5254);
    after_0:
    // 0x8022565C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225660: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225664:
    // 0x80225664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022566C: jr          $ra
    // 0x80225670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ACA4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACA4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022ACA8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022ACAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ACB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ACB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ACB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ACBC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022ACC0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022ACC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ACC8: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x8022ACCC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022ACD0: bne         $v1, $v0, L_8022ACE8
    if (ctx->r3 != ctx->r2) {
        // 0x8022ACD4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8022ACE8;
    }
    // 0x8022ACD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ACD8: jal         0x8006033C
    // 0x8022ACDC: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022ACDC: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    after_0:
    // 0x8022ACE0: bne         $v0, $zero, L_8022AFB4
    if (ctx->r2 != 0) {
        // 0x8022ACE4: nop
    
            goto L_8022AFB4;
    }
    // 0x8022ACE4: nop

L_8022ACE8:
    // 0x8022ACE8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ACEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACF0: beq         $v1, $v0, L_8022AD08
    if (ctx->r3 == ctx->r2) {
        // 0x8022ACF4: nop
    
            goto L_8022AD08;
    }
    // 0x8022ACF4: nop

    // 0x8022ACF8: jal         0x8006033C
    // 0x8022ACFC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022ACFC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x8022AD00: bne         $v0, $zero, L_8022AD10
    if (ctx->r2 != 0) {
        // 0x8022AD04: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8022AD10;
    }
    // 0x8022AD04: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8022AD08:
    // 0x8022AD08: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022AD0C: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
L_8022AD10:
    // 0x8022AD10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AD14: bne         $v0, $zero, L_8022ADD8
    if (ctx->r2 != 0) {
        // 0x8022AD18: nop
    
            goto L_8022ADD8;
    }
    // 0x8022AD18: nop

    // 0x8022AD1C: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x8022AD20: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022AD24: addiu       $v0, $v1, 0x620
    ctx->r2 = ADD32(ctx->r3, 0X620);
    // 0x8022AD28: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AD2C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022AD30: beq         $v0, $zero, L_8022AFB4
    if (ctx->r2 == 0) {
        // 0x8022AD34: addiu       $v0, $v1, 0x9E0
        ctx->r2 = ADD32(ctx->r3, 0X9E0);
            goto L_8022AFB4;
    }
    // 0x8022AD34: addiu       $v0, $v1, 0x9E0
    ctx->r2 = ADD32(ctx->r3, 0X9E0);
    // 0x8022AD38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AD3C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022AD40: beq         $v0, $zero, L_8022AFB4
    if (ctx->r2 == 0) {
        // 0x8022AD44: nop
    
            goto L_8022AFB4;
    }
    // 0x8022AD44: nop

    // 0x8022AD48: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022AD4C: bne         $v0, $s0, L_8022AFB4
    if (ctx->r2 != ctx->r16) {
        // 0x8022AD50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AFB4;
    }
    // 0x8022AD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AD54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AD58: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022AD5C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AD60: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022AD64: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022AD68: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022AD6C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022AD70: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x8022AD74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022AD78: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x8022AD7C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022AD80: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022AD84: beq         $v0, $zero, L_8022AD9C
    if (ctx->r2 == 0) {
        // 0x8022AD88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022AD9C;
    }
    // 0x8022AD88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AD8C: jal         0x800616FC
    // 0x8022AD90: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022AD90: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x8022AD94: j           L_8022AFB4
    // 0x8022AD98: nop

        goto L_8022AFB4;
    // 0x8022AD98: nop

L_8022AD9C:
    // 0x8022AD9C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022ADA0: bne         $v0, $zero, L_8022ADB8
    if (ctx->r2 != 0) {
        // 0x8022ADA4: nop
    
            goto L_8022ADB8;
    }
    // 0x8022ADA4: nop

    // 0x8022ADA8: jal         0x800616FC
    // 0x8022ADAC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022ADAC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x8022ADB0: j           L_8022AFB4
    // 0x8022ADB4: nop

        goto L_8022AFB4;
    // 0x8022ADB4: nop

L_8022ADB8:
    // 0x8022ADB8: jal         0x8006033C
    // 0x8022ADBC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022ADBC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_4:
    // 0x8022ADC0: bne         $v0, $zero, L_8022AFB4
    if (ctx->r2 != 0) {
        // 0x8022ADC4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022AFB4;
    }
    // 0x8022ADC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ADC8: jal         0x800616FC
    // 0x8022ADCC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022ADCC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x8022ADD0: j           L_8022AFB4
    // 0x8022ADD4: nop

        goto L_8022AFB4;
    // 0x8022ADD4: nop

L_8022ADD8:
    // 0x8022ADD8: bltz        $v1, L_8022AFB4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022ADDC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8022AFB4;
    }
    // 0x8022ADDC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022ADE0: bne         $v0, $zero, L_8022AFA4
    if (ctx->r2 != 0) {
        // 0x8022ADE4: nop
    
            goto L_8022AFA4;
    }
    // 0x8022ADE4: nop

    // 0x8022ADE8: jal         0x8006FF84
    // 0x8022ADEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_6;
    // 0x8022ADEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022ADF0: beq         $v0, $zero, L_8022AFB4
    if (ctx->r2 == 0) {
        // 0x8022ADF4: nop
    
            goto L_8022AFB4;
    }
    // 0x8022ADF4: nop

    // 0x8022ADF8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022ADFC: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022AE00: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8022AE04: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x8022AE08: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022AE0C: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8022AE10: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022AE14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022AE18: bnel        $v1, $zero, L_8022AE38
    if (ctx->r3 != 0) {
        // 0x8022AE1C: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022AE38;
    }
    goto skip_0;
    // 0x8022AE1C: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    skip_0:
    // 0x8022AE20: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022AE24: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022AE28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AE2C: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022AE30: bne         $v0, $v1, L_8022AE64
    if (ctx->r2 != ctx->r3) {
        // 0x8022AE34: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022AE64;
    }
    // 0x8022AE34: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
L_8022AE38:
    // 0x8022AE38: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022AE3C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022AE40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AE44: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022AE48: addiu       $v1, $zero, -0x61
    ctx->r3 = ADD32(0, -0X61);
    // 0x8022AE4C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022AE50: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AE54: jal         0x8002A33C
    // 0x8022AE58: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022AE58: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022AE5C: j           L_8022AFB4
    // 0x8022AE60: nop

        goto L_8022AFB4;
    // 0x8022AE60: nop

L_8022AE64:
    // 0x8022AE64: jal         0x8006033C
    // 0x8022AE68: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022AE68: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_8:
    // 0x8022AE6C: beq         $v0, $zero, L_8022AFA4
    if (ctx->r2 == 0) {
        // 0x8022AE70: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022AFA4;
    }
    // 0x8022AE70: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022AE74: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022AE78: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022AE7C: bne         $v0, $v1, L_8022AF84
    if (ctx->r2 != ctx->r3) {
        // 0x8022AE80: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022AF84;
    }
    // 0x8022AE80: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x8022AE84: jal         0x8006FF84
    // 0x8022AE88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_9;
    // 0x8022AE88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022AE8C: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022AE90: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022AE94: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x8022AE98: lhu         $a3, 0x56($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AE9C: sh          $v1, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r3;
    // 0x8022AEA0: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022AEA4: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x8022AEA8: sh          $a0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r4;
    // 0x8022AEAC: lh          $a0, 0x438($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X438);
    // 0x8022AEB0: lh          $a1, 0x43A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X43A);
    // 0x8022AEB4: lh          $a2, 0x43C($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43C);
    // 0x8022AEB8: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x8022AEBC: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x8022AEC0: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    // 0x8022AEC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AEC8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022AECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AED0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022AED4: sh          $a3, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r7;
    // 0x8022AED8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022AEDC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AEE0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022AEE4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022AEE8: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x8022AEEC: sw          $a0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r4;
    // 0x8022AEF0: sw          $a1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r5;
    // 0x8022AEF4: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    // 0x8022AEF8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022AEFC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022AF00: beq         $v0, $zero, L_8022AF70
    if (ctx->r2 == 0) {
        // 0x8022AF04: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_8022AF70;
    }
    // 0x8022AF04: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022AF08: jal         0x8006033C
    // 0x8022AF0C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x8022AF0C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_10:
    // 0x8022AF10: beq         $v0, $zero, L_8022AF40
    if (ctx->r2 == 0) {
        // 0x8022AF14: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_8022AF40;
    }
    // 0x8022AF14: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022AF18: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022AF1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AF20: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022AF24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AF28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AF2C: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022AF30: jal         0x8002A33C
    // 0x8022AF34: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x8022AF34: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    after_11:
    // 0x8022AF38: j           L_8022AFB4
    // 0x8022AF3C: nop

        goto L_8022AFB4;
    // 0x8022AF3C: nop

L_8022AF40:
    // 0x8022AF40: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    // 0x8022AF44: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022AF48: jal         0x8006036C
    // 0x8022AF4C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8022AF4C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022AF50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AF54: jal         0x800616FC
    // 0x8022AF58: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x8022AF58: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_13:
    // 0x8022AF5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AF60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AF64: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022AF68: j           L_8022AFB4
    // 0x8022AF6C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_8022AFB4;
    // 0x8022AF6C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_8022AF70:
    // 0x8022AF70: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022AF74: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022AF78: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022AF7C: j           L_8022AF94
    // 0x8022AF80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022AF94;
    // 0x8022AF80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022AF84:
    // 0x8022AF84: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022AF88: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
    // 0x8022AF8C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022AF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AF94:
    // 0x8022AF94: jal         0x8002A33C
    // 0x8022AF98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x8022AF98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_14:
    // 0x8022AF9C: j           L_8022AFB4
    // 0x8022AFA0: nop

        goto L_8022AFB4;
    // 0x8022AFA0: nop

L_8022AFA4:
    // 0x8022AFA4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022AFA8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022AFAC: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022AFB0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022AFB4:
    // 0x8022AFB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AFB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AFBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AFC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AFC4: jr          $ra
    // 0x8022AFC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AFC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234990_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023499C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802349A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802349A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802349A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802349AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802349B0: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x802349B4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802349B8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802349BC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802349C0: jal         0x8004D5D4
    // 0x802349C4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802349C4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802349C8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802349CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802349D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802349D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802349D8: lhu         $v1, -0x3DD8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DD8);
    // 0x802349DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802349E0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802349E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802349E8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802349EC: addiu       $v0, $v0, -0x3DE4
    ctx->r2 = ADD32(ctx->r2, -0X3DE4);
    // 0x802349F0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802349F4: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x802349F8: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x802349FC: jal         0x8003E934
    // 0x80234A00: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80234A00: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    after_1:
    // 0x80234A04: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80234A08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234A0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234A10: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234A14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234A18: jal         0x8009A3B4
    // 0x80234A1C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234A1C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_2:
    // 0x80234A20: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80234A24: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80234A28: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80234A2C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234A30: addiu       $v0, $v0, -0x3DF0
    ctx->r2 = ADD32(ctx->r2, -0X3DF0);
    // 0x80234A34: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80234A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A3C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80234A40: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80234A44: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80234A48: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234A4C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234A50: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234A54: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80234A58: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80234A5C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80234A60: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80234A64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234A68: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234A6C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234A70: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x80234A74: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80234A78: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x80234A7C: beq         $a0, $v0, L_80234AB4
    if (ctx->r4 == ctx->r2) {
        // 0x80234A80: sw          $v1, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r3;
            goto L_80234AB4;
    }
    // 0x80234A80: sw          $v1, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r3;
    // 0x80234A84: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80234A88: bnel        $v0, $zero, L_80234A9C
    if (ctx->r2 != 0) {
        // 0x80234A8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234A9C;
    }
    goto skip_0;
    // 0x80234A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80234A90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234A94: beq         $a0, $v0, L_80234AD0
    if (ctx->r4 == ctx->r2) {
        // 0x80234A98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234AD0;
    }
    // 0x80234A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80234A9C:
    // 0x80234A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234AA0: jal         0x80050294
    // 0x80234AA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80234AA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80234AA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234AAC: j           L_80234AF0
    // 0x80234AB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80234AF0;
    // 0x80234AB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234AB4:
    // 0x80234AB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234AB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80234ABC: jal         0x80050294
    // 0x80234AC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80234AC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80234AC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234AC8: j           L_80234AF0
    // 0x80234ACC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80234AF0;
    // 0x80234ACC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234AD0:
    // 0x80234AD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80234AD4: jal         0x80050294
    // 0x80234AD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80234AD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80234ADC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234AE0: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80234AE4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80234AE8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234AEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80234AF0:
    // 0x80234AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234AF8: jr          $ra
    // 0x80234AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F14C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F14C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F150: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F154: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F15C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F160: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F164: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F168: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F16C: jal         0x8004F820
    // 0x8022F170: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F170: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F174: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F178: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F17C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F180: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F184: bgez        $a0, L_8022F1A8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022F188: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F1A8;
    }
    // 0x8022F188: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F18C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F190: jal         0x8022FEC8
    // 0x8022F194: nop

    func_8022FEC8_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022F194: nop

    after_1:
    // 0x8022F198: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F19C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F1A0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022F1A4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F1A8:
    // 0x8022F1A8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F1AC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F1B0: bne         $v0, $zero, L_8022F1D4
    if (ctx->r2 != 0) {
        // 0x8022F1B4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F1D4;
    }
    // 0x8022F1B4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F1B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F1BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F1C0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022F1C4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F1C8: jal         0x8022FEC8
    // 0x8022F1CC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022F1CC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F1D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F1D4:
    // 0x8022F1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F1D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1DC: jr          $ra
    // 0x8022F1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238F00_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238F00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238F04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80238F08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80238F0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238F10: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x80238F14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238F18: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80238F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80238F20:
    // 0x80238F20: jal         0x8004F374
    // 0x80238F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x80238F24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80238F28: beql        $v0, $zero, L_80238F3C
    if (ctx->r2 == 0) {
        // 0x80238F2C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80238F3C;
    }
    goto skip_0;
    // 0x80238F2C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x80238F30: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x80238F34: j           L_80238F44
    // 0x80238F38: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_80238F44;
    // 0x80238F38: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_80238F3C:
    // 0x80238F3C: bgez        $s0, L_80238F20
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80238F40: nop
    
            goto L_80238F20;
    }
    // 0x80238F40: nop

L_80238F44:
    // 0x80238F44: jal         0x8004F62C
    // 0x80238F48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80238F48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80238F4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238F50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80238F54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238F58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238F5C: jr          $ra
    // 0x80238F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80238F64: nop

    // 0x80238F68: nop

    // 0x80238F6C: nop

;}
RECOMP_FUNC void func_80238860_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238864: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238868: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023886C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238870: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238874: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238878: lw          $v0, -0x3730($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3730);
    // 0x8023887C: jalr        $v0
    // 0x80238880: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238880: nop

    after_0:
    // 0x80238884: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238888: jr          $ra
    // 0x8023888C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023888C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228870_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022887C: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x80228880: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228884: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80228888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022888C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228890: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80228894: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80228898: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022889C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x802288A0: addiu       $v0, $zero, 0xE80
    ctx->r2 = ADD32(0, 0XE80);
    // 0x802288A4: jal         0x8002A33C
    // 0x802288A8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802288A8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    after_0:
    // 0x802288AC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802288B0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802288B4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802288B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802288BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802288C0: jal         0x8004DA90
    // 0x802288C4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802288C4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x802288C8: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x802288CC: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x802288D0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802288D4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x802288D8: lw          $a1, -0x14F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X14F0);
    // 0x802288DC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802288E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802288E4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802288E8: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802288EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802288F0: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x802288F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802288F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802288FC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228900: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
    // 0x80228904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228908: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022890C: jr          $ra
    // 0x80228910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229304_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229308: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022930C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229310: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80229314: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229318: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8022931C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229320: bne         $v0, $zero, L_80229338
    if (ctx->r2 != 0) {
        // 0x80229324: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80229338;
    }
    // 0x80229324: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80229328: jal         0x8004F5C4
    // 0x8022932C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022932C: nop

    after_0:
    // 0x80229330: j           L_80229354
    // 0x80229334: nop

        goto L_80229354;
    // 0x80229334: nop

L_80229338:
    // 0x80229338: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022933C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80229340: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80229344: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229348: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022934C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80229350: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80229354:
    // 0x80229354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229358: jr          $ra
    // 0x8022935C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022935C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254AC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254BC: jal         0x8006033C
    // 0x802254C0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254C0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802254C4: beq         $v0, $zero, L_802254DC
    if (ctx->r2 == 0) {
        // 0x802254C8: nop
    
            goto L_802254DC;
    }
    // 0x802254C8: nop

    // 0x802254CC: jal         0x80060690
    // 0x802254D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802254D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802254D4: j           L_8022550C
    // 0x802254D8: nop

        goto L_8022550C;
    // 0x802254D8: nop

L_802254DC:
    // 0x802254DC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254E0: bne         $v0, $zero, L_8022550C
    if (ctx->r2 != 0) {
        // 0x802254E4: nop
    
            goto L_8022550C;
    }
    // 0x802254E4: nop

    // 0x802254E8: jal         0x8006033C
    // 0x802254EC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254EC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_2:
    // 0x802254F0: bne         $v0, $zero, L_8022550C
    if (ctx->r2 != 0) {
        // 0x802254F4: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8022550C;
    }
    // 0x802254F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802254F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802254FC: jal         0x80060DA0
    // 0x80225500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225504: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225508: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022550C:
    // 0x8022550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225514: jr          $ra
    // 0x80225518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C24_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C24: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x80233C28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233C2C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233C30: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80233C34: lhu         $v1, 0x34A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X34A);
    // 0x80233C38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80233C3C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233C40: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80233C44: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
    // 0x80233C48: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80233C4C: sh          $v1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r3;
    // 0x80233C50: jr          $ra
    // 0x80233C54: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80233C54: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80237870_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023787C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237880: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237884: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237888: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023788C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237890: lw          $v0, -0x3AD8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3AD8);
    // 0x80237894: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80237898: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023789C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802378A0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x802378A4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802378A8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802378AC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802378B0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802378B4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802378B8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802378BC: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x802378C0: jal         0x80237D14
    // 0x802378C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80237D14_ovl21(rdram, ctx);
        goto after_0;
    // 0x802378C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x802378C8: beq         $v0, $zero, L_802378DC
    if (ctx->r2 == 0) {
        // 0x802378CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802378DC;
    }
    // 0x802378CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802378D0: jal         0x8004F62C
    // 0x802378D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802378D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802378D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802378DC:
    // 0x802378DC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802378E0: jal         0x8023795C
    // 0x802378E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023795C_ovl21(rdram, ctx);
        goto after_2;
    // 0x802378E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802378E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802378EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802378F0: jr          $ra
    // 0x802378F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802378F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235098_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023509C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802350A0: jr          $ra
    // 0x802350A4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802350A4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80230A00_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230A04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230A10: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230A14: jal         0x8006033C
    // 0x80230A18: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230A18: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x80230A1C: bne         $v0, $zero, L_80230A38
    if (ctx->r2 != 0) {
        // 0x80230A20: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230A38;
    }
    // 0x80230A20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80230A24: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230A28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230A2C: bne         $v1, $v0, L_80230A38
    if (ctx->r3 != ctx->r2) {
        // 0x80230A30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230A38;
    }
    // 0x80230A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230A34: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230A38:
    // 0x80230A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A40: jr          $ra
    // 0x80230A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DD9C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD9C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022DDA0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022DDA4: beq         $v0, $zero, L_8022DDC0
    if (ctx->r2 == 0) {
        // 0x8022DDA8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DDC0;
    }
    // 0x8022DDA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DDAC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DDB0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022DDB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDB8: bne         $v0, $zero, L_8022DDEC
    if (ctx->r2 != 0) {
        // 0x8022DDBC: nop
    
            goto L_8022DDEC;
    }
    // 0x8022DDBC: nop

L_8022DDC0:
    // 0x8022DDC0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022DDC4: bgez        $v0, L_8022DDEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DDC8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022DDEC;
    }
    // 0x8022DDC8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022DDCC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DDD0: bnel        $v1, $v0, L_8022DDEC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DDD4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022DDEC;
    }
    goto skip_0;
    // 0x8022DDD4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022DDD8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DDDC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022DDE0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022DDE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DDE8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022DDEC:
    // 0x8022DDEC: jr          $ra
    // 0x8022DDF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022DDF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022BC48_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BC4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BC50: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022BC54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BC58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BC5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BC60: lw          $v0, -0x4C58($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C58);
    // 0x8022BC64: jalr        $v0
    // 0x8022BC68: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BC68: nop

    after_0:
    // 0x8022BC6C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC70: jr          $ra
    // 0x8022BC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230ACC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230ACC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230AD0: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x80230AD4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80230AD8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80230ADC: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x80230AE0: beq         $a2, $zero, L_80230B2C
    if (ctx->r6 == 0) {
        // 0x80230AE4: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_80230B2C;
    }
    // 0x80230AE4: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80230AE8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230AEC: beq         $v0, $zero, L_80230B2C
    if (ctx->r2 == 0) {
        // 0x80230AF0: nop
    
            goto L_80230B2C;
    }
    // 0x80230AF0: nop

    // 0x80230AF4: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x80230AF8: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x80230AFC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80230B00: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x80230B04: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x80230B08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230B0C: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x80230B10: bgtz        $v1, L_80230B24
    if (SIGNED(ctx->r3) > 0) {
        // 0x80230B14: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_80230B24;
    }
    // 0x80230B14: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x80230B18: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230B1C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80230B20: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80230B24:
    // 0x80230B24: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80230B28: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_80230B2C:
    // 0x80230B2C: jr          $ra
    // 0x80230B30: nop

    TRACE_RETURN()
    return;
    // 0x80230B30: nop

;}
RECOMP_FUNC void func_8023562C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023562C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235634: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235638: beq         $a1, $zero, L_80235684
    if (ctx->r5 == 0) {
        // 0x8023563C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80235684;
    }
    // 0x8023563C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235640: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80235644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235648: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8023564C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80235650: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x80235654: bne         $v0, $zero, L_80235684
    if (ctx->r2 != 0) {
        // 0x80235658: nop
    
            goto L_80235684;
    }
    // 0x80235658: nop

    // 0x8023565C: jal         0x800A3450
    // 0x80235660: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80235660: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    after_0:
    // 0x80235664: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80235668: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8023566C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80235670: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80235674: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x80235678: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023567C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235680: sh          $v1, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r3;
L_80235684:
    // 0x80235684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235688: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023568C: jr          $ra
    // 0x80235690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237DB0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237DB8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80237DBC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80237DC0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80237DC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237DC8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80237DCC: lw          $v1, -0x38C0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X38C0);
    // 0x80237DD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237DD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237DD8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80237DDC: jalr        $v0
    // 0x80237DE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237DE0: nop

    after_0:
    // 0x80237DE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237DE8: jr          $ra
    // 0x80237DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023528C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023528C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235290: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235294: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80235298: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023529C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802352A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802352A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802352A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802352AC: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x802352B0: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x802352B4: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x802352B8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802352BC: beq         $v0, $zero, L_8023545C
    if (ctx->r2 == 0) {
        // 0x802352C0: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_8023545C;
    }
    // 0x802352C0: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x802352C4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802352C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802352CC: addu        $at, $at, $v0
    gpr jr_addend_802352D4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802352D0: lw          $v0, -0x3510($at)
    ctx->r2 = ADD32(ctx->r1, -0X3510);
    // 0x802352D4: jr          $v0
    // 0x802352D8: nop

    switch (jr_addend_802352D4 >> 2) {
        case 0: goto L_802352DC; break;
        case 1: goto L_80235308; break;
        case 2: goto L_8023531C; break;
        case 3: goto L_802353D8; break;
        case 4: goto L_802353FC; break;
        default: switch_error(__func__, 0x802352D4, 0x8023CAF0);
    }
    // 0x802352D8: nop

L_802352DC:
    // 0x802352DC: jal         0x8006FF84
    // 0x802352E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802352E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x802352E4: beq         $v0, $zero, L_8023545C
    if (ctx->r2 == 0) {
        // 0x802352E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023545C;
    }
    // 0x802352E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802352EC: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x802352F0: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x802352F4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x802352F8: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802352FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235300: j           L_8023545C
    // 0x80235304: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8023545C;
    // 0x80235304: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80235308:
    // 0x80235308: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023530C: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x80235310: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80235314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235318: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8023531C:
    // 0x8023531C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235320: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80235324: bne         $v0, $zero, L_8023545C
    if (ctx->r2 != 0) {
        // 0x80235328: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8023545C;
    }
    // 0x80235328: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8023532C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235330: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80235334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235338: jal         0x800610AC
    // 0x8023533C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8023533C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x80235340: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235344: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80235348: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8023534C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235350: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235354: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80235358: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x8023535C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80235360: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80235364: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80235368: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8023536C: jal         0x8009A3B4
    // 0x80235370: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235370: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x80235374: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x80235378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023537C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235380: jal         0x8009A3B4
    // 0x80235384: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80235384: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235388: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x8023538C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235390: jal         0x8009A3B4
    // 0x80235394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80235394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80235398: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8023539C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802353A0: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x802353A4: jal         0x8009A3B4
    // 0x802353A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802353A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802353AC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802353B0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802353B4: jal         0x8009A3B4
    // 0x802353B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802353B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x802353BC: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x802353C0: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x802353C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802353C8: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x802353CC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x802353D0: j           L_8023545C
    // 0x802353D4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_8023545C;
    // 0x802353D4: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_802353D8:
    // 0x802353D8: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x802353DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802353E0: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x802353E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802353E8: bnel        $v0, $zero, L_80235400
    if (ctx->r2 != 0) {
        // 0x802353EC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80235400;
    }
    goto skip_0;
    // 0x802353EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x802353F0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802353F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802353F8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_802353FC:
    // 0x802353FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80235400:
    // 0x80235400: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x80235404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235408: jal         0x8004DA90
    // 0x8023540C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8023540C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80235410: jal         0x80040F30
    // 0x80235414: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x80235414: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x80235418: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023541C: jal         0x802355A4
    // 0x80235420: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802355A4_ovl21(rdram, ctx);
        goto after_9;
    // 0x80235420: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x80235424: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235428: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8023542C: bne         $v0, $zero, L_8023545C
    if (ctx->r2 != 0) {
        // 0x80235430: nop
    
            goto L_8023545C;
    }
    // 0x80235430: nop

    // 0x80235434: jal         0x80070050
    // 0x80235438: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x80235438: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8023543C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80235440: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x80235444: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235448: jal         0x8006036C
    // 0x8023544C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8023544C: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x80235450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235454: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80235458: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8023545C:
    // 0x8023545C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235460: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80235464: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80235468: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023546C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235474: jr          $ra
    // 0x80235478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237E90_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237E94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237E98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237EA0: jal         0x8006033C
    // 0x80237EA4: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237EA4: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_0:
    // 0x80237EA8: beq         $v0, $zero, L_80237EC0
    if (ctx->r2 == 0) {
        // 0x80237EAC: nop
    
            goto L_80237EC0;
    }
    // 0x80237EAC: nop

    // 0x80237EB0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237EB4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80237EB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237EBC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237EC0:
    // 0x80237EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237EC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237EC8: jr          $ra
    // 0x80237ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E04_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231E08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231E14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231E18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231E1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231E24: lw          $v0, -0x3ED4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3ED4);
    // 0x80231E28: jalr        $v0
    // 0x80231E2C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231E2C: nop

    after_0:
    // 0x80231E30: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231E34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231E38: bne         $v1, $v0, L_80231EF4
    if (ctx->r3 != ctx->r2) {
        // 0x80231E3C: nop
    
            goto L_80231EF4;
    }
    // 0x80231E3C: nop

    // 0x80231E40: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x80231E44: bne         $v0, $zero, L_80231ED8
    if (ctx->r2 != 0) {
        // 0x80231E48: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231ED8;
    }
    // 0x80231E48: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231E4C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80231E50: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80231E54: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80231E58: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80231E5C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80231E60: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80231E64: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80231E68: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80231E6C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231E70: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80231E74: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80231E78: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231E7C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80231E80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80231E84: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80231E88: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80231E8C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80231E90: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80231E94: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80231E98: bne         $v1, $zero, L_80231EF4
    if (ctx->r3 != 0) {
        // 0x80231E9C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80231EF4;
    }
    // 0x80231E9C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231EA0: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80231EA4: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80231EA8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231EAC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231EB0: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80231EB4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231EB8: beq         $v1, $v0, L_80231EF4
    if (ctx->r3 == ctx->r2) {
        // 0x80231EBC: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80231EF4;
    }
    // 0x80231EBC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80231EC0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80231EC4: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231EC8: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80231ECC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80231ED0: j           L_80231EF4
    // 0x80231ED4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_80231EF4;
    // 0x80231ED4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80231ED8:
    // 0x80231ED8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231EDC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80231EE0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80231EE4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231EE8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x80231EEC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80231EF0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_80231EF4:
    // 0x80231EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231EF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231EFC: jr          $ra
    // 0x80231F00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80231F00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233050_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233050: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80233054: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80233058: addiu       $a3, $a0, 0x348
    ctx->r7 = ADD32(ctx->r4, 0X348);
    // 0x8023305C: bne         $v0, $zero, L_80233084
    if (ctx->r2 != 0) {
        // 0x80233060: addiu       $a2, $a0, 0x64
        ctx->r6 = ADD32(ctx->r4, 0X64);
            goto L_80233084;
    }
    // 0x80233060: addiu       $a2, $a0, 0x64
    ctx->r6 = ADD32(ctx->r4, 0X64);
    // 0x80233064: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80233068: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8023306C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80233070: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233074: beq         $v1, $v0, L_8023309C
    if (ctx->r3 == ctx->r2) {
        // 0x80233078: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8023309C;
    }
    // 0x80233078: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023307C: j           L_802330B4
    // 0x80233080: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_802330B4;
    // 0x80233080: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_80233084:
    // 0x80233084: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80233088: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8023308C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80233090: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233094: bne         $v1, $v0, L_802330B0
    if (ctx->r3 != ctx->r2) {
        // 0x80233098: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_802330B0;
    }
    // 0x80233098: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8023309C:
    // 0x8023309C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802330A0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802330A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802330A8: j           L_802330B8
    // 0x802330AC: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_802330B8;
    // 0x802330AC: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_802330B0:
    // 0x802330B0: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_802330B4:
    // 0x802330B4: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_802330B8:
    // 0x802330B8: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802330BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802330C0: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802330C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802330C8: sb          $v0, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r2;
    // 0x802330CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802330D0: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x802330D4: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x802330D8: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x802330DC: jr          $ra
    // 0x802330E0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802330E0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802285EC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802285F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802285F4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802285F8: bne         $v0, $zero, L_80228610
    if (ctx->r2 != 0) {
        // 0x802285FC: nop
    
            goto L_80228610;
    }
    // 0x802285FC: nop

    // 0x80228600: jal         0x80228624
    // 0x80228604: nop

    func_80228624_ovl21(rdram, ctx);
        goto after_0;
    // 0x80228604: nop

    after_0:
    // 0x80228608: j           L_80228618
    // 0x8022860C: nop

        goto L_80228618;
    // 0x8022860C: nop

L_80228610:
    // 0x80228610: jal         0x80228658
    // 0x80228614: nop

    func_80228658_ovl21(rdram, ctx);
        goto after_1;
    // 0x80228614: nop

    after_1:
L_80228618:
    // 0x80228618: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022861C: jr          $ra
    // 0x80228620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802340F8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802340F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802340FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234100: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234104: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234108: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023410C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234110: beq         $v0, $zero, L_80234150
    if (ctx->r2 == 0) {
        // 0x80234114: lui         $s1, 0x3800
        ctx->r17 = S32(0X3800 << 16);
            goto L_80234150;
    }
    // 0x80234114: lui         $s1, 0x3800
    ctx->r17 = S32(0X3800 << 16);
    // 0x80234118: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    // 0x8023411C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80234120: beq         $v0, $zero, L_80234130
    if (ctx->r2 == 0) {
        // 0x80234124: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80234130;
    }
    // 0x80234124: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80234128: jal         0x8002A33C
    // 0x8023412C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023412C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80234130:
    // 0x80234130: lw          $v0, 0x378($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X378);
    // 0x80234134: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80234138: beq         $v0, $zero, L_802341B4
    if (ctx->r2 == 0) {
        // 0x8023413C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802341B4;
    }
    // 0x8023413C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80234140: jal         0x8002A33C
    // 0x80234144: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80234144: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80234148: j           L_802341B4
    // 0x8023414C: nop

        goto L_802341B4;
    // 0x8023414C: nop

L_80234150:
    // 0x80234150: jal         0x80234730
    // 0x80234154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234730_ovl21(rdram, ctx);
        goto after_2;
    // 0x80234154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234158: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023415C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80234160: beq         $v0, $zero, L_80234194
    if (ctx->r2 == 0) {
        // 0x80234164: nop
    
            goto L_80234194;
    }
    // 0x80234164: nop

    // 0x80234168: bgez        $v0, L_802341B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023416C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_802341B4;
    }
    // 0x8023416C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80234170: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80234174: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80234178: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8023417C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234180: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80234184: sh          $zero, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = 0;
    // 0x80234188: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8023418C: j           L_802341D0
    // 0x80234190: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802341D0;
    // 0x80234190: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80234194:
    // 0x80234194: jal         0x802345C8
    // 0x80234198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802345C8_ovl21(rdram, ctx);
        goto after_3;
    // 0x80234198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023419C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802341A0: bgez        $v0, L_802341B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802341A4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802341B4;
    }
    // 0x802341A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802341A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802341AC: j           L_802341D0
    // 0x802341B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_802341D0;
    // 0x802341B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802341B4:
    // 0x802341B4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802341B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802341BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802341C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802341C4: lw          $v0, -0x3E20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3E20);
    // 0x802341C8: jalr        $v0
    // 0x802341CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802341CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802341D0:
    // 0x802341D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802341D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802341D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802341DC: jr          $ra
    // 0x802341E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802341E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236630_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236638: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023663C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236640: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236644: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236648: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023664C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236650: beq         $v1, $v0, L_802366BC
    if (ctx->r3 == ctx->r2) {
        // 0x80236654: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_802366BC;
    }
    // 0x80236654: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x80236658: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023665C: beql        $v0, $zero, L_80236674
    if (ctx->r2 == 0) {
        // 0x80236660: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236674;
    }
    goto skip_0;
    // 0x80236660: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236664: beq         $v1, $zero, L_8023668C
    if (ctx->r3 == 0) {
        // 0x80236668: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023668C;
    }
    // 0x80236668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023666C: j           L_80236800
    // 0x80236670: nop

        goto L_80236800;
    // 0x80236670: nop

L_80236674:
    // 0x80236674: beq         $v1, $v0, L_80236718
    if (ctx->r3 == ctx->r2) {
        // 0x80236678: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236718;
    }
    // 0x80236678: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023667C: beq         $v1, $v0, L_802367C8
    if (ctx->r3 == ctx->r2) {
        // 0x80236680: nop
    
            goto L_802367C8;
    }
    // 0x80236680: nop

    // 0x80236684: j           L_80236800
    // 0x80236688: nop

        goto L_80236800;
    // 0x80236688: nop

L_8023668C:
    // 0x8023668C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236690: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236694: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80236698: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023669C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x802366A0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802366A4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x802366A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802366AC: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x802366B0: jal         0x8003EF5C
    // 0x802366B4: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    func_8003EF5C_1A35C(rdram, ctx);
        goto after_0;
    // 0x802366B4: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    after_0:
    // 0x802366B8: sh          $v0, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r2;
L_802366BC:
    // 0x802366BC: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x802366C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802366C4: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802366C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802366CC: bgtz        $v0, L_80236800
    if (SIGNED(ctx->r2) > 0) {
        // 0x802366D0: addiu       $a0, $zero, 0xD1
        ctx->r4 = ADD32(0, 0XD1);
            goto L_80236800;
    }
    // 0x802366D0: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    // 0x802366D4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802366D8: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x802366DC: addiu       $v0, $v0, -0x15E
    ctx->r2 = ADD32(ctx->r2, -0X15E);
    // 0x802366E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802366E4: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x802366E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802366EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802366F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802366F4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802366F8: addiu       $v1, $v1, -0x15E
    ctx->r3 = ADD32(ctx->r3, -0X15E);
    // 0x802366FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236700: sh          $v1, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r3;
    // 0x80236704: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80236708: jal         0x8002A33C
    // 0x8023670C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023670C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_1:
    // 0x80236710: j           L_80236800
    // 0x80236714: nop

        goto L_80236800;
    // 0x80236714: nop

L_80236718:
    // 0x80236718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023671C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80236720: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236724: jal         0x8004DA90
    // 0x80236728: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80236728: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8023672C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236730: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80236734: lh          $s1, 0x16($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X16);
    // 0x80236738: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8023673C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236740: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80236744: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236748: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8023674C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236750: jal         0x80040F30
    // 0x80236754: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80236754: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_3:
    // 0x80236758: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8023675C: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80236760: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x80236764: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236768: bne         $v0, $zero, L_80236780
    if (ctx->r2 != 0) {
        // 0x8023676C: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_80236780;
    }
    // 0x8023676C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80236770: lh          $v0, 0x51E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X51E);
    // 0x80236774: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80236778: bne         $v0, $zero, L_802367BC
    if (ctx->r2 != 0) {
        // 0x8023677C: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_802367BC;
    }
    // 0x8023677C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80236780:
    // 0x80236780: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    // 0x80236784: lhu         $v1, 0x51E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X51E);
    // 0x80236788: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023678C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236790: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236794: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80236798: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023679C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802367A0: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x802367A4: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802367A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802367AC: jal         0x8002A33C
    // 0x802367B0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802367B0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x802367B4: j           L_802367C8
    // 0x802367B8: nop

        goto L_802367C8;
    // 0x802367B8: nop

L_802367BC:
    // 0x802367BC: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x802367C0: j           L_80236800
    // 0x802367C4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80236800;
    // 0x802367C4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802367C8:
    // 0x802367C8: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802367CC: beq         $v0, $zero, L_802367DC
    if (ctx->r2 == 0) {
        // 0x802367D0: addiu       $a0, $zero, 0xD4
        ctx->r4 = ADD32(0, 0XD4);
            goto L_802367DC;
    }
    // 0x802367D0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    // 0x802367D4: jal         0x8002A33C
    // 0x802367D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x802367D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
L_802367DC:
    // 0x802367DC: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x802367E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802367E4: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802367E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802367EC: bgez        $v0, L_80236800
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802367F0: nop
    
            goto L_80236800;
    }
    // 0x802367F0: nop

    // 0x802367F4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802367F8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802367FC: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80236800:
    // 0x80236800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236804: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023680C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236810: jr          $ra
    // 0x80236814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FD38_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FD3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FD48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FD4C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022FD50: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FD54: jal         0x8004FA7C
    // 0x8022FD58: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022FD58: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022FD5C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022FD60: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022FD64: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022FD68: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022FD6C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022FD70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022FD74: beq         $v1, $zero, L_8022FDA8
    if (ctx->r3 == 0) {
        // 0x8022FD78: nop
    
            goto L_8022FDA8;
    }
    // 0x8022FD78: nop

    // 0x8022FD7C: jal         0x8022FEC8
    // 0x8022FD80: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022FD80: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022FD84: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022FD88: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FD8C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022FD90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FD94: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022FD98: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022FD9C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FDA0: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022FDA4: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022FDA8:
    // 0x8022FDA8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FDAC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022FDB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FDB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FDB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FDBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDC4: jr          $ra
    // 0x8022FDC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FDC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802274D8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802274DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802274E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802274E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802274E8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802274EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802274F0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802274F4: jal         0x80040F30
    // 0x802274F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x802274F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802274FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80227500: beq         $s2, $zero, L_80227670
    if (ctx->r18 == 0) {
        // 0x80227504: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80227670;
    }
    // 0x80227504: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80227508: beq         $v0, $zero, L_80227608
    if (ctx->r2 == 0) {
        // 0x8022750C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80227608;
    }
    // 0x8022750C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227510: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80227514: bltzl       $v0, L_80227530
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227518: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227530;
    }
    goto skip_0;
    // 0x80227518: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022751C: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80227520: bnel        $v0, $zero, L_80227540
    if (ctx->r2 != 0) {
        // 0x80227524: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80227540;
    }
    goto skip_1;
    // 0x80227524: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80227528: j           L_8022755C
    // 0x8022752C: nop

        goto L_8022755C;
    // 0x8022752C: nop

L_80227530:
    // 0x80227530: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80227534: beq         $v0, $zero, L_8022755C
    if (ctx->r2 == 0) {
        // 0x80227538: nop
    
            goto L_8022755C;
    }
    // 0x80227538: nop

    // 0x8022753C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80227540:
    // 0x80227540: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80227544: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80227548: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8022754C: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80227550: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80227554: j           L_8022759C
    // 0x80227558: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8022759C;
    // 0x80227558: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_8022755C:
    // 0x8022755C: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80227560: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227564: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227568: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022756C: bltzl       $v0, L_80227574
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227570: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227574;
    }
    goto skip_2;
    // 0x80227570: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80227574:
    // 0x80227574: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80227578: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8022757C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80227580: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80227584: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227588: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022758C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227590: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80227594: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80227598: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8022759C:
    // 0x8022759C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802275A0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802275A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802275A8: bne         $v1, $v0, L_80227628
    if (ctx->r3 != ctx->r2) {
        // 0x802275AC: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80227628;
    }
    // 0x802275AC: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x802275B0: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802275B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802275B8: bne         $v1, $v0, L_80227628
    if (ctx->r3 != ctx->r2) {
        // 0x802275BC: nop
    
            goto L_80227628;
    }
    // 0x802275BC: nop

    // 0x802275C0: jal         0x8004F568
    // 0x802275C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x802275C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802275C8: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x802275CC: jal         0x8002A33C
    // 0x802275D0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802275D0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x802275D4: jal         0x8004F144
    // 0x802275D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802275D8: nop

    after_3:
    // 0x802275DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802275E0: beq         $s0, $zero, L_802275F4
    if (ctx->r16 == 0) {
        // 0x802275E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802275F4;
    }
    // 0x802275E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802275E8: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x802275EC: jal         0x8009A3B4
    // 0x802275F0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802275F0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_802275F4:
    // 0x802275F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802275F8: jal         0x802277CC
    // 0x802275FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802277CC_ovl21(rdram, ctx);
        goto after_5;
    // 0x802275FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227600: j           L_80227668
    // 0x80227604: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80227668;
    // 0x80227604: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80227608:
    // 0x80227608: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022760C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80227610: bne         $v1, $v0, L_80227628
    if (ctx->r3 != ctx->r2) {
        // 0x80227614: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80227628;
    }
    // 0x80227614: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80227618: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022761C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227620: beq         $v1, $v0, L_80227630
    if (ctx->r3 == ctx->r2) {
        // 0x80227624: nop
    
            goto L_80227630;
    }
    // 0x80227624: nop

L_80227628:
    // 0x80227628: jal         0x8002A33C
    // 0x8022762C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022762C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80227630:
    // 0x80227630: jal         0x8004F144
    // 0x80227634: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80227634: nop

    after_7:
    // 0x80227638: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022763C: beq         $s0, $zero, L_80227664
    if (ctx->r16 == 0) {
        // 0x80227640: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227664;
    }
    // 0x80227640: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227644: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80227648: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8022764C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227650: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227654: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80227658: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022765C: jal         0x8009A3B4
    // 0x80227660: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80227660: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80227664:
    // 0x80227664: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80227668:
    // 0x80227668: jal         0x80040834
    // 0x8022766C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x8022766C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_80227670:
    // 0x80227670: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80227674: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227678: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022767C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227680: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227688: jr          $ra
    // 0x8022768C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022768C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023868C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023868C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238690: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238694: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023869C: jal         0x8006033C
    // 0x802386A0: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802386A0: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_0:
    // 0x802386A4: beq         $v0, $zero, L_802386B4
    if (ctx->r2 == 0) {
        // 0x802386A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802386B4;
    }
    // 0x802386A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802386AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802386B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802386B4:
    // 0x802386B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802386B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802386BC: jr          $ra
    // 0x802386C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802386C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264F8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226508: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022650C: beq         $v0, $zero, L_80226548
    if (ctx->r2 == 0) {
        // 0x80226510: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_80226548;
    }
    // 0x80226510: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80226514: jal         0x80050294
    // 0x80226518: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226518: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022651C: jal         0x800A3450
    // 0x80226520: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80226520: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    after_1:
    // 0x80226524: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226528: bne         $v0, $zero, L_80226534
    if (ctx->r2 != 0) {
        // 0x8022652C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80226534;
    }
    // 0x8022652C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226530: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
L_80226534:
    // 0x80226534: sh          $v0, 0x51A($s0)
    MEM_H(0X51A, ctx->r16) = ctx->r2;
    // 0x80226538: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022653C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226540: j           L_80226564
    // 0x80226544: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226564;
    // 0x80226544: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226548:
    // 0x80226548: jal         0x8005044C
    // 0x8022654C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022654C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226550: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226554: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226558: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022655C: jal         0x8004DA90
    // 0x80226560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80226560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226564:
    // 0x80226564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022656C: jr          $ra
    // 0x80226570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C928_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C92C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C930: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8022C934: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022C938: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022C93C: lb          $a2, 0xC($a0)
    ctx->r6 = MEM_B(ctx->r4, 0XC);
    // 0x8022C940: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C944: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C948: sll         $a1, $a2, 2
    ctx->r5 = S32(ctx->r6 << 2);
    // 0x8022C94C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8022C950: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C954: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C958: lw          $v0, -0x4BD8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4BD8);
    // 0x8022C95C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C960: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022C964: lw          $v1, -0x4BAC($at)
    ctx->r3 = MEM_W(ctx->r1, -0X4BAC);
    // 0x8022C968: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8022C96C: jalr        $v1
    // 0x8022C970: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x8022C970: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_0:
    // 0x8022C974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C978: jr          $ra
    // 0x8022C97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FCC4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FCD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCD4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FCD8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022FCDC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FCE0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022FCE4: jal         0x8004F820
    // 0x8022FCE8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FCE8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022FCEC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FCF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCF4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FCF8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FCFC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022FD00: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022FD04: bne         $v0, $zero, L_8022FD28
    if (ctx->r2 != 0) {
        // 0x8022FD08: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022FD28;
    }
    // 0x8022FD08: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022FD0C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FD10: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FD14: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FD18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FD1C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022FD20: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022FD24: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022FD28:
    // 0x8022FD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FD2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD30: jr          $ra
    // 0x8022FD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238D14_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D14: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80238D18: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80238D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238D20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238D24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238D28: bne         $v0, $zero, L_80238D4C
    if (ctx->r2 != 0) {
        // 0x80238D2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80238D4C;
    }
    // 0x80238D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238D30: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x80238D34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238D38: jal         0x8002A2F8
    // 0x80238D3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80238D3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238D40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238D48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238D4C:
    // 0x80238D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238D50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238D54: jr          $ra
    // 0x80238D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802345C8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802345CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802345D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802345D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802345D8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802345DC: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x802345E0: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x802345E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802345E8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802345EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802345F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802345F4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802345F8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802345FC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80234600: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    // 0x80234604: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234608: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023460C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80234610: and         $a1, $a2, $a0
    ctx->r5 = ctx->r6 & ctx->r4;
    // 0x80234614: lbu         $s4, 0x9($v0)
    ctx->r20 = MEM_BU(ctx->r2, 0X9);
    // 0x80234618: beq         $a1, $zero, L_80234708
    if (ctx->r5 == 0) {
        // 0x8023461C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80234708;
    }
    // 0x8023461C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80234620: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80234624: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80234628: beq         $v0, $zero, L_8023470C
    if (ctx->r2 == 0) {
        // 0x8023462C: sll         $v0, $s2, 24
        ctx->r2 = S32(ctx->r18 << 24);
            goto L_8023470C;
    }
    // 0x8023462C: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x80234630: lhu         $v0, 0x35A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35A);
    // 0x80234634: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80234638: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023463C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80234640: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80234644: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80234648: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023464C: sh          $v0, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = ctx->r2;
    // 0x80234650: bgez        $v1, L_8023465C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234654: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_8023465C;
    }
    // 0x80234654: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x80234658: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_8023465C:
    // 0x8023465C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80234660: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234664: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234668: addiu       $a1, $s0, 0x370
    ctx->r5 = ADD32(ctx->r16, 0X370);
    // 0x8023466C: jal         0x8004FEA0
    // 0x80234670: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x80234670: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80234674: lhu         $v1, 0x35A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35A);
    // 0x80234678: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8023467C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80234680: slt         $v1, $s4, $v1
    ctx->r3 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234684: bne         $v1, $zero, L_80234698
    if (ctx->r3 != 0) {
        // 0x80234688: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80234698;
    }
    // 0x80234688: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023468C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80234690: bnel        $v0, $zero, L_802346DC
    if (ctx->r2 != 0) {
        // 0x80234694: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_802346DC;
    }
    goto skip_0;
    // 0x80234694: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_80234698:
    // 0x80234698: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023469C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802346A0: jal         0x8002A33C
    // 0x802346A4: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802346A4: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    after_1:
    // 0x802346A8: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x802346AC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802346B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802346B4: beq         $v0, $zero, L_802346CC
    if (ctx->r2 == 0) {
        // 0x802346B8: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_802346CC;
    }
    // 0x802346B8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x802346BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802346C0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802346C4: j           L_802346E8
    // 0x802346C8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802346E8;
    // 0x802346C8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_802346CC:
    // 0x802346CC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802346D0: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x802346D4: j           L_802346E8
    // 0x802346D8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802346E8;
    // 0x802346D8: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_802346DC:
    // 0x802346DC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802346E0: jal         0x8002A33C
    // 0x802346E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802346E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_802346E8:
    // 0x802346E8: lw          $v1, 0xC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC);
    // 0x802346EC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802346F0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802346F4: beq         $v0, $zero, L_80234700
    if (ctx->r2 == 0) {
        // 0x802346F8: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80234700;
    }
    // 0x802346F8: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x802346FC: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80234700:
    // 0x80234700: lhu         $v0, 0xE($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XE);
    // 0x80234704: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80234708:
    // 0x80234708: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
L_8023470C:
    // 0x8023470C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80234710: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234714: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234718: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023471C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234720: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234724: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234728: jr          $ra
    // 0x8023472C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023472C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80238DA0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238DA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238DA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238DB0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80238DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238DB8: beq         $v1, $v0, L_80238E20
    if (ctx->r3 == ctx->r2) {
        // 0x80238DBC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80238E20;
    }
    // 0x80238DBC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80238DC0: beql        $v0, $zero, L_80238DD8
    if (ctx->r2 == 0) {
        // 0x80238DC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238DD8;
    }
    goto skip_0;
    // 0x80238DC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80238DC8: beq         $v1, $zero, L_80238DE8
    if (ctx->r3 == 0) {
        // 0x80238DCC: nop
    
            goto L_80238DE8;
    }
    // 0x80238DCC: nop

    // 0x80238DD0: j           L_80238EE4
    // 0x80238DD4: nop

        goto L_80238EE4;
    // 0x80238DD4: nop

L_80238DD8:
    // 0x80238DD8: beq         $v1, $v0, L_80238E58
    if (ctx->r3 == ctx->r2) {
        // 0x80238DDC: nop
    
            goto L_80238E58;
    }
    // 0x80238DDC: nop

    // 0x80238DE0: j           L_80238EE4
    // 0x80238DE4: nop

        goto L_80238EE4;
    // 0x80238DE4: nop

L_80238DE8:
    // 0x80238DE8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238DEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238DF0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80238DF4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80238DF8: jal         0x8006033C
    // 0x80238DFC: lw          $a0, -0x36F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36F0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80238DFC: lw          $a0, -0x36F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36F0);
    after_0:
    // 0x80238E00: beq         $v0, $zero, L_80238EE4
    if (ctx->r2 == 0) {
        // 0x80238E04: nop
    
            goto L_80238EE4;
    }
    // 0x80238E04: nop

    // 0x80238E08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238E0C: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x80238E10: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80238E14: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80238E18: j           L_80238E48
    // 0x80238E1C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_80238E48;
    // 0x80238E1C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_80238E20:
    // 0x80238E20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238E24: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238E28: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80238E2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238E30: bne         $v0, $zero, L_80238EE4
    if (ctx->r2 != 0) {
        // 0x80238E34: nop
    
            goto L_80238EE4;
    }
    // 0x80238E34: nop

    // 0x80238E38: jal         0x80036E48
    // 0x80238E3C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x80238E3C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80238E40: jal         0x80036B58
    // 0x80238E44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_2;
    // 0x80238E44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
L_80238E48:
    // 0x80238E48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238E50: j           L_80238EE4
    // 0x80238E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80238EE4;
    // 0x80238E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80238E58:
    // 0x80238E58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238E5C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80238E60: bne         $v0, $zero, L_80238EE4
    if (ctx->r2 != 0) {
        // 0x80238E64: nop
    
            goto L_80238EE4;
    }
    // 0x80238E64: nop

    // 0x80238E68: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80238E6C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80238E70: bne         $v0, $zero, L_80238EE4
    if (ctx->r2 != 0) {
        // 0x80238E74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238EE4;
    }
    // 0x80238E74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238E78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238E7C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80238E80: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80238E84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238E88: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80238E8C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80238E90: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238E94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238E98: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80238E9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EA0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80238EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EA8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80238EAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EB0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80238EB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EB8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80238EBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EC0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80238EC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238EC8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80238ECC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80238ED0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238ED8: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80238EDC: jal         0x8004F62C
    // 0x80238EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_3;
    // 0x80238EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80238EE4:
    // 0x80238EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238EE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238EEC: jr          $ra
    // 0x80238EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80238EF4: nop

    // 0x80238EF8: nop

    // 0x80238EFC: nop

;}
RECOMP_FUNC void func_802267B4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802267C0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802267C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802267C8: jal         0x80050294
    // 0x802267CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802267CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802267D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802267D4: sh          $v0, 0x514($s0)
    MEM_H(0X514, ctx->r16) = ctx->r2;
    // 0x802267D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802267DC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802267E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802267E4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802267E8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802267EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802267F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802267F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267FC: jr          $ra
    // 0x80226800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
