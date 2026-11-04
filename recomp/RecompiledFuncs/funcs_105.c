#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022E880_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E88C: jal         0x8004F144
    // 0x8022E890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022E894: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E898: beq         $v1, $zero, L_8022E8D0
    if (ctx->r3 == 0) {
        // 0x8022E89C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022E8D0;
    }
    // 0x8022E89C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022E8A0: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022E8A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E8A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E8AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022E8B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E8B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E8B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E8BC: jal         0x8009A3B4
    // 0x8022E8C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E8C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022E8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E8C8: jal         0x8007A1B8
    // 0x8022E8CC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022E8CC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022E8D0:
    // 0x8022E8D0: jal         0x80047B3C
    // 0x8022E8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_3;
    // 0x8022E8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E8D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E8DC: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022E8E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E8EC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022E8F0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022E8F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022E8F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022E8FC: jal         0x8009A3B4
    // 0x8022E900: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022E900: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_4:
    // 0x8022E904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E908: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022E90C: lh          $v0, 0x188($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X188);
    // 0x8022E910: lh          $v1, 0x18A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18A);
    // 0x8022E914: lh          $a3, 0x18C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18C);
    // 0x8022E918: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022E91C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E920: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E924: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022E928: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022E92C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E930: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E934: jal         0x8004DA90
    // 0x8022E938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022E938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_5:
    // 0x8022E93C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022E940: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022E944: jal         0x8009A3B4
    // 0x8022E948: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022E948: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022E94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E954: jr          $ra
    // 0x8022E958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A1E0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A1E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A1E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A1EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A1F0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022A1F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A1F8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A1FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A200: bne         $v0, $zero, L_8022A254
    if (ctx->r2 != 0) {
        // 0x8022A204: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022A254;
    }
    // 0x8022A204: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A208: jal         0x8022B7E4
    // 0x8022A20C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022A20C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022A210: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A214: beq         $v0, $zero, L_8022A250
    if (ctx->r2 == 0) {
        // 0x8022A218: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A250;
    }
    // 0x8022A218: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A21C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A220: jal         0x8022B758
    // 0x8022A224: nop

    func_8022B758_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022A224: nop

    after_1:
    // 0x8022A228: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A22C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A230: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022A234: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022A238: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A23C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A240: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022A244: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A248: j           L_8022A254
    // 0x8022A24C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022A254;
    // 0x8022A24C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022A250:
    // 0x8022A250: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A254:
    // 0x8022A254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A258: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A25C: jr          $ra
    // 0x8022A260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234340_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234340: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234344: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80234348: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8023434C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234350: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80234354: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234358: lui         $s3, 0x2E80
    ctx->r19 = S32(0X2E80 << 16);
    // 0x8023435C: ori         $s3, $s3, 0xC080
    ctx->r19 = ctx->r19 | 0XC080;
    // 0x80234360: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234364: lui         $s2, 0x3D48
    ctx->r18 = S32(0X3D48 << 16);
    // 0x80234368: ori         $s2, $s2, 0x2080
    ctx->r18 = ctx->r18 | 0X2080;
    // 0x8023436C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234370: lui         $s1, 0x2E
    ctx->r17 = S32(0X2E << 16);
    // 0x80234374: ori         $s1, $s1, 0x209F
    ctx->r17 = ctx->r17 | 0X209F;
    // 0x80234378: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023437C: addiu       $s7, $zero, 0x3F80
    ctx->r23 = ADD32(0, 0X3F80);
    // 0x80234380: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80234384: addiu       $s6, $zero, 0x3F9F
    ctx->r22 = ADD32(0, 0X3F9F);
    // 0x80234388: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023438C: addiu       $s5, $zero, 0xC0
    ctx->r21 = ADD32(0, 0XC0);
    // 0x80234390: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
L_80234394:
    // 0x80234394: jal         0x8003B878
    // 0x80234398: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80234398: nop

    after_0:
    // 0x8023439C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x802343A0: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x802343A4: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x802343A8: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x802343AC: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x802343B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802343B4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x802343B8: lw          $a0, 0xDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XDC);
    // 0x802343BC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x802343C0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802343C4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802343C8: subu        $v1, $s5, $v1
    ctx->r3 = SUB32(ctx->r21, ctx->r3);
    // 0x802343CC: sw          $s2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r18;
    // 0x802343D0: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x802343D4: sw          $s7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r23;
    // 0x802343D8: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
    // 0x802343DC: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x802343E0: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x802343E4: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x802343E8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802343EC: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x802343F0: bne         $v0, $zero, L_80234394
    if (ctx->r2 != 0) {
        // 0x802343F4: nop
    
            goto L_80234394;
    }
    // 0x802343F4: nop

    // 0x802343F8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802343FC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80234400: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80234404: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80234408: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023440C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234410: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234414: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023441C: jr          $ra
    // 0x80234420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C21C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C21C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C224: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C228: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C22C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022C230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C234: jal         0x8004DDE8
    // 0x8022C238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022C238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022C23C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C240: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022C244: beq         $v0, $zero, L_8022C288
    if (ctx->r2 == 0) {
        // 0x8022C248: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022C288;
    }
    // 0x8022C248: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022C24C: beq         $v0, $zero, L_8022C268
    if (ctx->r2 == 0) {
        // 0x8022C250: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C268;
    }
    // 0x8022C250: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C254: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C258: beq         $v1, $v0, L_8022C2C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C25C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C2C8;
    }
    // 0x8022C25C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C260: j           L_8022C2C8
    // 0x8022C264: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C2C8;
    // 0x8022C264: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C268:
    // 0x8022C268: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C26C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C270: beq         $v1, $v0, L_8022C2C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C274: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C2C8;
    }
    // 0x8022C274: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C278: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C27C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C280: j           L_8022C2A8
    // 0x8022C284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022C2A8;
    // 0x8022C284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022C288:
    // 0x8022C288: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C28C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C290: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022C294: bne         $v0, $zero, L_8022C2C8
    if (ctx->r2 != 0) {
        // 0x8022C298: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C2C8;
    }
    // 0x8022C298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C29C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022C2A8:
    // 0x8022C2A8: jal         0x80050294
    // 0x8022C2AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022C2AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022C2B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2B4: jal         0x8022C2F8
    // 0x8022C2B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022C2F8_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022C2B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022C2BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2C0: jal         0x8022C2D8
    // 0x8022C2C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C2D8_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022C2C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022C2C8:
    // 0x8022C2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C2CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C2D0: jr          $ra
    // 0x8022C2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802325FC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325FC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80232600: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80232604: lb          $v0, -0x209D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X209D);
    // 0x80232608: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023260C: addiu       $a3, $a3, -0x68A8
    ctx->r7 = ADD32(ctx->r7, -0X68A8);
    // 0x80232610: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x80232614: sll         $a2, $v0, 8
    ctx->r6 = S32(ctx->r2 << 8);
    // 0x80232618: ori         $v0, $zero, 0xC000
    ctx->r2 = 0 | 0XC000;
    // 0x8023261C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80232620: addu        $a0, $a1, $v0
    ctx->r4 = ADD32(ctx->r5, ctx->r2);
    // 0x80232624: addiu       $v1, $v1, 0x7050
    ctx->r3 = ADD32(ctx->r3, 0X7050);
    // 0x80232628: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
L_8023262C:
    // 0x8023262C: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80232630: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80232634: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80232638: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023263C: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80232640: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80232644: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x80232648: slti        $v0, $t0, 0x8
    ctx->r2 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8023264C: bne         $v0, $zero, L_8023262C
    if (ctx->r2 != 0) {
        // 0x80232650: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8023262C;
    }
    // 0x80232650: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80232654: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232658: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8023265C: jr          $ra
    // 0x80232660: sb          $v0, -0x209E($at)
    MEM_B(-0X209E, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80232660: sb          $v0, -0x209E($at)
    MEM_B(-0X209E, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022AD48_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AD4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AD58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD5C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022AD60: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022AD64: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022AD68: jal         0x8004FA7C
    // 0x8022AD6C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022AD6C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022AD70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AD74: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022AD78: beq         $v0, $zero, L_8022AE0C
    if (ctx->r2 == 0) {
        // 0x8022AD7C: nop
    
            goto L_8022AE0C;
    }
    // 0x8022AD7C: nop

    // 0x8022AD80: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AD84: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022AD88: bne         $v0, $zero, L_8022AE0C
    if (ctx->r2 != 0) {
        // 0x8022AD8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE0C;
    }
    // 0x8022AD8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AD90: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022AD94: beq         $v1, $v0, L_8022ADAC
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD98: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022ADAC;
    }
    // 0x8022AD98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AD9C: beq         $v1, $v0, L_8022ADDC
    if (ctx->r3 == ctx->r2) {
        // 0x8022ADA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022ADDC;
    }
    // 0x8022ADA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022ADA4: j           L_8022AE00
    // 0x8022ADA8: nop

        goto L_8022AE00;
    // 0x8022ADA8: nop

L_8022ADAC:
    // 0x8022ADAC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ADB0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022ADB4: bne         $v0, $zero, L_8022AE00
    if (ctx->r2 != 0) {
        // 0x8022ADB8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AE00;
    }
    // 0x8022ADB8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022ADBC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022ADC0: bne         $v0, $zero, L_8022AE00
    if (ctx->r2 != 0) {
        // 0x8022ADC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE00;
    }
    // 0x8022ADC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADC8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022ADCC: bne         $v1, $v0, L_8022AE00
    if (ctx->r3 != ctx->r2) {
        // 0x8022ADD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AE00;
    }
    // 0x8022ADD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022ADD4: j           L_8022AE00
    // 0x8022ADD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022AE00;
    // 0x8022ADD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022ADDC:
    // 0x8022ADDC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ADE0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022ADE4: beq         $v0, $zero, L_8022ADFC
    if (ctx->r2 == 0) {
        // 0x8022ADE8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022ADFC;
    }
    // 0x8022ADE8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022ADEC: bne         $v0, $zero, L_8022AE00
    if (ctx->r2 != 0) {
        // 0x8022ADF0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AE00;
    }
    // 0x8022ADF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022ADF4: j           L_8022AE00
    // 0x8022ADF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022AE00;
    // 0x8022ADF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022ADFC:
    // 0x8022ADFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022AE00:
    // 0x8022AE00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AE04: beq         $v0, $zero, L_8022AE30
    if (ctx->r2 == 0) {
        // 0x8022AE08: nop
    
            goto L_8022AE30;
    }
    // 0x8022AE08: nop

L_8022AE0C:
    // 0x8022AE0C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AE10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AE14: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AE18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AE1C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022AE20: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AE24: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022AE28: j           L_8022AE40
    // 0x8022AE2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022AE40;
    // 0x8022AE2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022AE30:
    // 0x8022AE30: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AE34: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022AE38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AE3C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022AE40:
    // 0x8022AE40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AE44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE4C: jr          $ra
    // 0x8022AE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B1F4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B1F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B200: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B204: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B208: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B20C: jal         0x8003516C
    // 0x8022B210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022B210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B214: bne         $v0, $zero, L_8022B238
    if (ctx->r2 != 0) {
        // 0x8022B218: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B238;
    }
    // 0x8022B218: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B21C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B220: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022B224: jal         0x800610AC
    // 0x8022B228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022B228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B22C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B234: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022B238:
    // 0x8022B238: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B23C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B240: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B244: jal         0x8004F820
    // 0x8022B248: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B248: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022B24C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B250: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022B254: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022B258: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B25C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B260: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B264: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B268: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B26C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B270: jr          $ra
    // 0x8022B274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228000_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228004: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228008: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022800C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228010: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228014: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228018: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022801C: beq         $v0, $zero, L_80228204
    if (ctx->r2 == 0) {
        // 0x80228020: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80228204;
    }
    // 0x80228020: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80228024: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228028: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022802C: addu        $at, $at, $v0
    gpr jr_addend_80228034 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228030: lw          $v0, -0x64E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X64E0);
    // 0x80228034: jr          $v0
    // 0x80228038: nop

    switch (jr_addend_80228034 >> 2) {
        case 0: goto L_8022803C; break;
        case 1: goto L_80228054; break;
        case 2: goto L_80228084; break;
        case 3: goto L_802280B0; break;
        case 4: goto L_802280D8; break;
        case 5: goto L_802280EC; break;
        case 6: goto L_8022815C; break;
        case 7: goto L_80228174; break;
        case 8: goto L_802281A8; break;
        case 9: goto L_802281C0; break;
        case 10: goto L_802281FC; break;
        default: switch_error(__func__, 0x80228034, 0x80239B20);
    }
    // 0x80228038: nop

L_8022803C:
    // 0x8022803C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80228040: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228044: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228048: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022804C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228050: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228054:
    // 0x80228054: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80228058: slti        $v0, $v0, 0xF
    ctx->r2 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x8022805C: beq         $v0, $zero, L_8022807C
    if (ctx->r2 == 0) {
        // 0x80228060: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022807C;
    }
    // 0x80228060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228064: addiu       $a1, $zero, -0x30
    ctx->r5 = ADD32(0, -0X30);
    // 0x80228068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022806C: jal         0x8004DA90
    // 0x80228070: addiu       $a3, $zero, -0x30
    ctx->r7 = ADD32(0, -0X30);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228070: addiu       $a3, $zero, -0x30
    ctx->r7 = ADD32(0, -0X30);
    after_0:
    // 0x80228074: j           L_802281DC
    // 0x80228078: nop

        goto L_802281DC;
    // 0x80228078: nop

L_8022807C:
    // 0x8022807C: j           L_802281EC
    // 0x80228080: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_802281EC;
    // 0x80228080: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80228084:
    // 0x80228084: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80228088: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8022808C: beql        $v0, $zero, L_802280A0
    if (ctx->r2 == 0) {
        // 0x80228090: sh          $zero, 0x0($s1)
        MEM_H(0X0, ctx->r17) = 0;
            goto L_802280A0;
    }
    goto skip_0;
    // 0x80228090: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80228094: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228098: j           L_802281D8
    // 0x8022809C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
        goto L_802281D8;
    // 0x8022809C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
L_802280A0:
    // 0x802280A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802280A4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802280A8: j           L_802281F0
    // 0x802280AC: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
        goto L_802281F0;
    // 0x802280AC: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
L_802280B0:
    // 0x802280B0: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x802280B4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802280B8: beq         $v0, $zero, L_802281EC
    if (ctx->r2 == 0) {
        // 0x802280BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802281EC;
    }
    // 0x802280BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280C0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802280C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802280C8: jal         0x8004DA90
    // 0x802280CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802280CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802280D0: j           L_802281DC
    // 0x802280D4: nop

        goto L_802281DC;
    // 0x802280D4: nop

L_802280D8:
    // 0x802280D8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x802280DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802280E0: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x802280E4: j           L_802281F0
    // 0x802280E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_802281F0;
    // 0x802280E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_802280EC:
    // 0x802280EC: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802280F0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802280F4: beql        $v1, $v0, L_802280FC
    if (ctx->r3 == ctx->r2) {
        // 0x802280F8: sh          $zero, 0x2($s1)
        MEM_H(0X2, ctx->r17) = 0;
            goto L_802280FC;
    }
    goto skip_1;
    // 0x802280F8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    skip_1:
L_802280FC:
    // 0x802280FC: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80228100: addiu       $v0, $v1, -0xA
    ctx->r2 = ADD32(ctx->r3, -0XA);
    // 0x80228104: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x80228108: beq         $v0, $zero, L_80228128
    if (ctx->r2 == 0) {
        // 0x8022810C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228128;
    }
    // 0x8022810C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228110: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80228114: addiu       $a2, $zero, -0x30
    ctx->r6 = ADD32(0, -0X30);
    // 0x80228118: jal         0x8004DA90
    // 0x8022811C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022811C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228120: j           L_80228144
    // 0x80228124: nop

        goto L_80228144;
    // 0x80228124: nop

L_80228128:
    // 0x80228128: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022812C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80228130: bne         $v1, $v0, L_80228144
    if (ctx->r3 != ctx->r2) {
        // 0x80228134: addiu       $v0, $zero, -0x34
        ctx->r2 = ADD32(0, -0X34);
            goto L_80228144;
    }
    // 0x80228134: addiu       $v0, $zero, -0x34
    ctx->r2 = ADD32(0, -0X34);
    // 0x80228138: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022813C: lui         $v0, 0xFFCC
    ctx->r2 = S32(0XFFCC << 16);
    // 0x80228140: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228144:
    // 0x80228144: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80228148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022814C: beq         $v1, $v0, L_802281EC
    if (ctx->r3 == ctx->r2) {
        // 0x80228150: nop
    
            goto L_802281EC;
    }
    // 0x80228150: nop

    // 0x80228154: j           L_80228204
    // 0x80228158: nop

        goto L_80228204;
    // 0x80228158: nop

L_8022815C:
    // 0x8022815C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80228160: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228164: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228168: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022816C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228170: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228174:
    // 0x80228174: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80228178: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022817C: beq         $v0, $zero, L_802281EC
    if (ctx->r2 == 0) {
        // 0x80228180: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802281EC;
    }
    // 0x80228180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228184: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x80228188: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022818C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228190: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228194: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80228198: jal         0x8004DA90
    // 0x8022819C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022819C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
    // 0x802281A0: j           L_802281DC
    // 0x802281A4: nop

        goto L_802281DC;
    // 0x802281A4: nop

L_802281A8:
    // 0x802281A8: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x802281AC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802281B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802281B4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802281B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802281C0:
    // 0x802281C0: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x802281C4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802281C8: beq         $v0, $zero, L_802281EC
    if (ctx->r2 == 0) {
        // 0x802281CC: nop
    
            goto L_802281EC;
    }
    // 0x802281CC: nop

    // 0x802281D0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802281D4: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
L_802281D8:
    // 0x802281D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802281DC:
    // 0x802281DC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802281E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281E4: j           L_80228204
    // 0x802281E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80228204;
    // 0x802281E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802281EC:
    // 0x802281EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_802281F0:
    // 0x802281F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281F4: j           L_80228204
    // 0x802281F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228204;
    // 0x802281F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802281FC:
    // 0x802281FC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80228200: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228204:
    // 0x80228204: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228208: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022820C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228210: jr          $ra
    // 0x80228214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C770_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C774: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C778: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C77C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C780: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022C784: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C788: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C78C: jal         0x8004EEAC
    // 0x8022C790: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022C790: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022C794: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022C798: bne         $a1, $zero, L_8022C7A8
    if (ctx->r5 != 0) {
        // 0x8022C79C: andi        $t0, $s1, 0xFF
        ctx->r8 = ctx->r17 & 0XFF;
            goto L_8022C7A8;
    }
    // 0x8022C79C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8022C7A0: j           L_8022C8A4
    // 0x8022C7A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022C8A4;
    // 0x8022C7A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C7A8:
    // 0x8022C7A8: sltiu       $v1, $t0, 0x1
    ctx->r3 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8022C7AC: sltiu       $v0, $t0, 0x7
    ctx->r2 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x8022C7B0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022C7B4: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x8022C7B8: beq         $t1, $zero, L_8022C7D0
    if (ctx->r9 == 0) {
        // 0x8022C7BC: lui         $a0, 0x2E80
        ctx->r4 = S32(0X2E80 << 16);
            goto L_8022C7D0;
    }
    // 0x8022C7BC: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x8022C7C0: jal         0x8004F418
    // 0x8022C7C4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022C7C4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8022C7C8: j           L_8022C8A4
    // 0x8022C7CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022C8A4;
    // 0x8022C7CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C7D0:
    // 0x8022C7D0: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x8022C7D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7D8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022C7DC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C7E0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022C7E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C7E8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022C7EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C7F0: sb          $v0, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r2;
    // 0x8022C7F4: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022C7F8: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8022C7FC: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8022C800: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8022C804: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x8022C808: sb          $v0, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r2;
    // 0x8022C80C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022C810: sb          $v1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r3;
    // 0x8022C814: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x8022C818: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C81C: sb          $s1, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r17;
    // 0x8022C820: sb          $zero, 0x93($a1)
    MEM_B(0X93, ctx->r5) = 0;
    // 0x8022C824: sw          $a0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->r4;
    // 0x8022C828: sw          $zero, 0x94($a1)
    MEM_W(0X94, ctx->r5) = 0;
    // 0x8022C82C: sb          $v0, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r2;
    // 0x8022C830: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8022C834: beq         $v0, $zero, L_8022C8A0
    if (ctx->r2 == 0) {
        // 0x8022C838: addiu       $a3, $a1, 0x88
        ctx->r7 = ADD32(ctx->r5, 0X88);
            goto L_8022C8A0;
    }
    // 0x8022C838: addiu       $a3, $a1, 0x88
    ctx->r7 = ADD32(ctx->r5, 0X88);
    // 0x8022C83C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_8022C840:
    // 0x8022C840: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022C844: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C848: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8022C84C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C850: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022C854: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022C858: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C85C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_8022C860:
    // 0x8022C860: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C864: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C868: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C86C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022C870: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022C874: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022C878: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022C87C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022C880: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022C884: bne         $v0, $zero, L_8022C860
    if (ctx->r2 != 0) {
        // 0x8022C888: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8022C860;
    }
    // 0x8022C888: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022C88C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022C890: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022C894: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x8022C898: bne         $v0, $zero, L_8022C840
    if (ctx->r2 != 0) {
        // 0x8022C89C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022C840;
    }
    // 0x8022C89C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022C8A0:
    // 0x8022C8A0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8022C8A4:
    // 0x8022C8A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C8A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C8AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C8B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C8B4: jr          $ra
    // 0x8022C8B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C8B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C320_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C320: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C324: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022C328: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C32C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C330: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C334: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C338: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022C33C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022C340: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022C344: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C348: bne         $v0, $s1, L_8022C42C
    if (ctx->r2 != ctx->r17) {
        // 0x8022C34C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022C42C;
    }
    // 0x8022C34C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C350: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022C354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C358: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C35C: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022C360: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C364: jal         0x8004F820
    // 0x8022C368: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C368: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022C36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C370: bgez        $v0, L_8022C39C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C374: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C39C;
    }
    // 0x8022C374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C378: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C37C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C380: jal         0x8004F820
    // 0x8022C384: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C384: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022C388: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C38C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C390: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C394: j           L_8022C3B4
    // 0x8022C398: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022C3B4;
    // 0x8022C398: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022C39C:
    // 0x8022C39C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022C3A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022C3A4: jal         0x8004F820
    // 0x8022C3A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022C3A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022C3AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C3B0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022C3B4:
    // 0x8022C3B4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022C3B8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022C3BC: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022C3C0: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022C3C4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022C3C8: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022C3CC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022C3D0: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022C3D4: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8022C3D8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022C3DC: addiu       $s0, $s0, -0x6210
    ctx->r16 = ADD32(ctx->r16, -0X6210);
    // 0x8022C3E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022C3E4: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8022C3E8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022C3EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C3F0: sw          $v0, -0x620C($at)
    MEM_W(-0X620C, ctx->r1) = ctx->r2;
    // 0x8022C3F4: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8022C3F8: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022C3FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C400: sw          $v0, -0x6208($at)
    MEM_W(-0X6208, ctx->r1) = ctx->r2;
    // 0x8022C404: jal         0x8004EC38
    // 0x8022C408: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022C408: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022C40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C410: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022C414: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022C418: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022C41C: jal         0x80034FCC
    // 0x8022C420: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022C420: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022C424: j           L_8022C430
    // 0x8022C428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C430;
    // 0x8022C428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C42C:
    // 0x8022C42C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C430:
    // 0x8022C430: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022C434: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C438: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C43C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C444: jr          $ra
    // 0x8022C448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023350C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023350C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233510: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80233514: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80233518: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8023351C: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80233520: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80233524: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80233528: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023352C: bne         $v0, $zero, L_80233554
    if (ctx->r2 != 0) {
        // 0x80233530: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_80233554;
    }
    // 0x80233530: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80233534: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233538: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023353C: lw          $v1, -0x680C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X680C);
    // 0x80233540: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80233544: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233548: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023354C: j           L_80233570
    // 0x80233550: lw          $v0, -0x67E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X67E0);
        goto L_80233570;
    // 0x80233550: lw          $v0, -0x67E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X67E0);
L_80233554:
    // 0x80233554: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233558: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023355C: lw          $v1, -0x67B4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X67B4);
    // 0x80233560: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80233564: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233568: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023356C: lw          $v0, -0x67A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X67A8);
L_80233570:
    // 0x80233570: jr          $ra
    // 0x80233574: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80233574: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802291D0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802291D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802291D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802291DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802291E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802291E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802291E8: lw          $v0, -0x6C94($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C94);
    // 0x802291EC: jalr        $v0
    // 0x802291F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802291F0: nop

    after_0:
    // 0x802291F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802291F8: jr          $ra
    // 0x802291FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802291FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235200_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235204: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80235208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023520C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235210: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235218: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023521C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235220: lw          $v0, -0x65F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65F0);
    // 0x80235224: jalr        $v0
    // 0x80235228: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235228: nop

    after_0:
    // 0x8023522C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235230: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235234: bne         $v0, $zero, L_80235248
    if (ctx->r2 != 0) {
        // 0x80235238: nop
    
            goto L_80235248;
    }
    // 0x80235238: nop

    // 0x8023523C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80235240: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235244: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80235248:
    // 0x80235248: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8023524C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80235250: beql        $v1, $v0, L_80235258
    if (ctx->r3 == ctx->r2) {
        // 0x80235254: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80235258;
    }
    goto skip_0;
    // 0x80235254: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80235258:
    // 0x80235258: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8023525C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80235260: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80235264: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80235268: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8023526C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80235270: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235274: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235278: bne         $v0, $zero, L_802352E0
    if (ctx->r2 != 0) {
        // 0x8023527C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802352E0;
    }
    // 0x8023527C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235280: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235284: beq         $v0, $zero, L_802352A0
    if (ctx->r2 == 0) {
        // 0x80235288: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_802352A0;
    }
    // 0x80235288: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8023528C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80235290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235294: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235298: j           L_802352B0
    // 0x8023529C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_802352B0;
    // 0x8023529C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_802352A0:
    // 0x802352A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802352A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802352A8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802352AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_802352B0:
    // 0x802352B0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x802352B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802352B8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802352BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802352C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802352C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802352C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802352CC: jal         0x80051E18
    // 0x802352D0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802352D0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802352D4: jal         0x800472C0
    // 0x802352D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x802352D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802352DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802352E0:
    // 0x802352E0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802352E4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802352E8: jal         0x8003B564
    // 0x802352EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x802352EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802352F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802352F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802352F8: jr          $ra
    // 0x802352FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802352FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802253C4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C4: jr          $ra
    // 0x802253C8: nop

    TRACE_RETURN()
    return;
    // 0x802253C8: nop

;}
RECOMP_FUNC void func_8022660C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022660C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226610: bne         $v0, $zero, L_80226624
    if (ctx->r2 != 0) {
        // 0x80226614: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80226624;
    }
    // 0x80226614: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226618: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    // 0x8022661C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226620: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80226624:
    // 0x80226624: jr          $ra
    // 0x80226628: nop

    TRACE_RETURN()
    return;
    // 0x80226628: nop

;}
RECOMP_FUNC void func_8022662C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022662C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226634: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226638: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022663C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226640: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226644: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226648: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022664C: bne         $v1, $zero, L_80226668
    if (ctx->r3 != 0) {
        // 0x80226650: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80226668;
    }
    // 0x80226650: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226654: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80226658: jal         0x8004F418
    // 0x8022665C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022665C: nop

    after_0:
    // 0x80226660: j           L_80226678
    // 0x80226664: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
        goto L_80226678;
    // 0x80226664: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_80226668:
    // 0x80226668: bne         $v1, $v0, L_80226678
    if (ctx->r3 != ctx->r2) {
        // 0x8022666C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226678;
    }
    // 0x8022666C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226670: jal         0x800616FC
    // 0x80226674: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80226674: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_1:
L_80226678:
    // 0x80226678: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022667C: beq         $v1, $zero, L_80226694
    if (ctx->r3 == 0) {
        // 0x80226680: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226694;
    }
    // 0x80226680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226684: beq         $v1, $v0, L_802266B4
    if (ctx->r3 == ctx->r2) {
        // 0x80226688: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802266B4;
    }
    // 0x80226688: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022668C: j           L_802266D0
    // 0x80226690: nop

        goto L_802266D0;
    // 0x80226690: nop

L_80226694:
    // 0x80226694: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226698: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022669C: bne         $v1, $v0, L_802266D0
    if (ctx->r3 != ctx->r2) {
        // 0x802266A0: addiu       $v0, $zero, 0x81
        ctx->r2 = ADD32(0, 0X81);
            goto L_802266D0;
    }
    // 0x802266A0: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x802266A4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x802266A8: sb          $zero, 0x168($s1)
    MEM_B(0X168, ctx->r17) = 0;
    // 0x802266AC: j           L_802266C4
    // 0x802266B0: sb          $zero, 0x169($s1)
    MEM_B(0X169, ctx->r17) = 0;
        goto L_802266C4;
    // 0x802266B0: sb          $zero, 0x169($s1)
    MEM_B(0X169, ctx->r17) = 0;
L_802266B4:
    // 0x802266B4: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x802266B8: bne         $v1, $v0, L_802266D0
    if (ctx->r3 != ctx->r2) {
        // 0x802266BC: nop
    
            goto L_802266D0;
    }
    // 0x802266BC: nop

    // 0x802266C0: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
L_802266C4:
    // 0x802266C4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802266C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266CC: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802266D0:
    // 0x802266D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802266D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802266D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266DC: jr          $ra
    // 0x802266E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802266E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FBF8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FBFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FC00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FC04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FC08: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022FC0C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022FC10: jal         0x8004DA90
    // 0x8022FC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022FC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022FC18: jal         0x8003E810
    // 0x8022FC1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022FC1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022FC20: beq         $v0, $zero, L_8022FC38
    if (ctx->r2 == 0) {
        // 0x8022FC24: nop
    
            goto L_8022FC38;
    }
    // 0x8022FC24: nop

    // 0x8022FC28: jal         0x8004F418
    // 0x8022FC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022FC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022FC30: j           L_8022FCC0
    // 0x8022FC34: nop

        goto L_8022FCC0;
    // 0x8022FC34: nop

L_8022FC38:
    // 0x8022FC38: jal         0x8003E934
    // 0x8022FC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022FC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FC40: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022FC44: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022FC48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FC4C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022FC50: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022FC54: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FC58: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x8022FC5C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022FC60: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FC64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FC68: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022FC6C: lhu         $v1, -0x6970($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X6970);
    // 0x8022FC70: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022FC74: beq         $v0, $zero, L_8022FC94
    if (ctx->r2 == 0) {
        // 0x8022FC78: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_8022FC94;
    }
    // 0x8022FC78: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x8022FC7C: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x8022FC80: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022FC84: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FC88: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022FC8C: j           L_8022FCC0
    // 0x8022FC90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022FCC0;
    // 0x8022FC90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022FC94:
    // 0x8022FC94: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x8022FC98: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FC9C: beq         $v0, $zero, L_8022FCB8
    if (ctx->r2 == 0) {
        // 0x8022FCA0: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_8022FCB8;
    }
    // 0x8022FCA0: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x8022FCA4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022FCA8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FCAC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FCB0: j           L_8022FCC0
    // 0x8022FCB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022FCC0;
    // 0x8022FCB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022FCB8:
    // 0x8022FCB8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8022FCBC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8022FCC0:
    // 0x8022FCC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FCC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FCC8: jr          $ra
    // 0x8022FCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DC94_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DC9C: jal         0x8004F418
    // 0x8022DCA0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022DCA0: nop

    after_0:
    // 0x8022DCA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCA8: jr          $ra
    // 0x8022DCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229200_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229204: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022920C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229210: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229214: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229218: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022921C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229220: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229224: beq         $v1, $zero, L_80229234
    if (ctx->r3 == 0) {
        // 0x80229228: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80229234;
    }
    // 0x80229228: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022922C: j           L_8022923C
    // 0x80229230: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022923C;
    // 0x80229230: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80229234:
    // 0x80229234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229238: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022923C:
    // 0x8022923C: jal         0x8004D5D4
    // 0x80229240: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229240: nop

    after_0:
    // 0x80229244: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229248: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022924C: bne         $a0, $v0, L_8022925C
    if (ctx->r4 != ctx->r2) {
        // 0x80229250: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022925C;
    }
    // 0x80229250: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80229254: j           L_802292D0
    // 0x80229258: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_802292D0;
    // 0x80229258: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022925C:
    // 0x8022925C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80229260: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80229264: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229268: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022926C: bne         $v1, $zero, L_802292D0
    if (ctx->r3 != 0) {
        // 0x80229270: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802292D0;
    }
    // 0x80229270: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80229274: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80229278: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022927C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80229280: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229284: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229288: bne         $v1, $zero, L_802292D0
    if (ctx->r3 != 0) {
        // 0x8022928C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802292D0;
    }
    // 0x8022928C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80229290: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80229294: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80229298: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022929C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802292A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802292A4: bne         $v1, $zero, L_802292D0
    if (ctx->r3 != 0) {
        // 0x802292A8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802292D0;
    }
    // 0x802292A8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802292AC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x802292B0: bnel        $a0, $v0, L_802292D0
    if (ctx->r4 != ctx->r2) {
        // 0x802292B4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_802292D0;
    }
    goto skip_0;
    // 0x802292B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x802292B8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x802292BC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802292C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802292C4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802292C8: j           L_802292D8
    // 0x802292CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_802292D8;
    // 0x802292CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_802292D0:
    // 0x802292D0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802292D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_802292D8:
    // 0x802292D8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802292DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802292E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802292E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802292E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802292EC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802292F0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802292F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802292F8: bne         $v0, $zero, L_80229304
    if (ctx->r2 != 0) {
        // 0x802292FC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80229304;
    }
    // 0x802292FC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80229300: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80229304:
    // 0x80229304: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80229308: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022930C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229310: jal         0x8009A3B4
    // 0x80229314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229318: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022931C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229320: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229324: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80229328: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022932C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229330: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229334: addiu       $v0, $v0, -0x6CA0
    ctx->r2 = ADD32(ctx->r2, -0X6CA0);
    // 0x80229338: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022933C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229340: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229344: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229348: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022934C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229350: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229354: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229358: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022935C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80229360: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229364: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80229368: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022936C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80229370: jal         0x80050294
    // 0x80229374: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229374: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80229378: jal         0x80229394
    // 0x8022937C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229394_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022937C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229380: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229384: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022938C: jr          $ra
    // 0x80229390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227AA0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227AA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227AA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227AAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227AB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AB4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80227AB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227ABC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227AC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227AC4: lw          $v0, -0x7250($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7250);
    // 0x80227AC8: jalr        $v0
    // 0x80227ACC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227ACC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x80227AD0: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x80227AD4: beq         $v0, $zero, L_80227AEC
    if (ctx->r2 == 0) {
        // 0x80227AD8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227AEC;
    }
    // 0x80227AD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227ADC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227AE0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227AE4: jal         0x8003B564
    // 0x80227AE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x80227AE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80227AEC:
    // 0x80227AEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227AF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AF8: jr          $ra
    // 0x80227AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B070_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B074: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B078: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022B07C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B080: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B084: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B088: lw          $v0, -0x6A7C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A7C);
    // 0x8022B08C: jalr        $v0
    // 0x8022B090: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B090: nop

    after_0:
    // 0x8022B094: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B098: jr          $ra
    // 0x8022B09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B748_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B748: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022B74C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022B750: jr          $ra
    // 0x8022B754: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022B754: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8022FE80_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FE88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE90: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FE94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FE98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FE9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FEA0: lw          $v0, -0x6950($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6950);
    // 0x8022FEA4: jalr        $v0
    // 0x8022FEA8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FEA8: nop

    after_0:
    // 0x8022FEAC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022FEB0: addiu       $v0, $s0, 0x490
    ctx->r2 = ADD32(ctx->r16, 0X490);
    // 0x8022FEB4: sw          $zero, 0x454($s0)
    MEM_W(0X454, ctx->r16) = 0;
    // 0x8022FEB8: sw          $zero, 0x490($s0)
    MEM_W(0X490, ctx->r16) = 0;
    // 0x8022FEBC: sw          $zero, 0x4A0($s0)
    MEM_W(0X4A0, ctx->r16) = 0;
L_8022FEC0:
    // 0x8022FEC0: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x8022FEC4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022FEC8: bgez        $v1, L_8022FEC0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022FECC: addiu       $v0, $v0, -0x10
        ctx->r2 = ADD32(ctx->r2, -0X10);
            goto L_8022FEC0;
    }
    // 0x8022FECC: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022FED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FED4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FED8: jr          $ra
    // 0x8022FEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228900_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228904: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228908: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022890C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228910: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228914: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228918: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022891C: jal         0x8004D5D4
    // 0x80228920: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228920: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228924: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80228928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022892C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80228930: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228934: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228938: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022893C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228940: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228944: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228948: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022894C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228950: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228954: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80228958: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022895C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80228960: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80228964: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x80228968: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x8022896C: sw          $zero, 0x33C($s0)
    MEM_W(0X33C, ctx->r16) = 0;
    // 0x80228970: jal         0x800540BC
    // 0x80228974: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80228974: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    after_1:
    // 0x80228978: addiu       $a0, $s0, 0x35C
    ctx->r4 = ADD32(ctx->r16, 0X35C);
    // 0x8022897C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228980: jal         0x8009A3B4
    // 0x80228984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80228988: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8022898C: jal         0x80053ED8
    // 0x80228990: sw          $zero, 0x364($s0)
    MEM_W(0X364, ctx->r16) = 0;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80228990: sw          $zero, 0x364($s0)
    MEM_W(0X364, ctx->r16) = 0;
    after_3:
    // 0x80228994: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228998: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022899C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x802289A0: sw          $v0, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->r2;
    // 0x802289A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802289A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802289AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802289B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802289B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802289B8: lbu         $v1, 0x28($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X28);
    // 0x802289BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289C0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802289C4: addiu       $v0, $v0, -0x7208
    ctx->r2 = ADD32(ctx->r2, -0X7208);
    // 0x802289C8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802289CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802289D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802289D8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802289DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802289E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802289E4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802289E8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802289EC: jal         0x80050294
    // 0x802289F0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802289F0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_4:
    // 0x802289F4: jal         0x80228A0C
    // 0x802289F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228A0C_ovl13(rdram, ctx);
        goto after_5;
    // 0x802289F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802289FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228A00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A04: jr          $ra
    // 0x80228A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C90_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233C94: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80233C98: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80233C9C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80233CA0: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80233CA4: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80233CA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233CAC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80233CB0: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x80233CB4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80233CB8: jr          $ra
    // 0x80233CBC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80233CBC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80231AA4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231AA8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231AAC: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80231AB0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80231AB4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80231AB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231ABC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231AC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231AC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231AC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231ACC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231AD0: lbu         $v1, 0xA($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XA);
    // 0x80231AD4: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x80231AD8: addiu       $s7, $s7, 0x49B0
    ctx->r23 = ADD32(ctx->r23, 0X49B0);
    // 0x80231ADC: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80231AE0: beq         $a0, $zero, L_80231AFC
    if (ctx->r4 == 0) {
        // 0x80231AE4: addiu       $s6, $s5, 0x440
        ctx->r22 = ADD32(ctx->r21, 0X440);
            goto L_80231AFC;
    }
    // 0x80231AE4: addiu       $s6, $s5, 0x440
    ctx->r22 = ADD32(ctx->r21, 0X440);
    // 0x80231AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231AEC: beq         $a0, $v0, L_80231B3C
    if (ctx->r4 == ctx->r2) {
        // 0x80231AF0: addiu       $s1, $s6, 0x68
        ctx->r17 = ADD32(ctx->r22, 0X68);
            goto L_80231B3C;
    }
    // 0x80231AF0: addiu       $s1, $s6, 0x68
    ctx->r17 = ADD32(ctx->r22, 0X68);
    // 0x80231AF4: j           L_80231E2C
    // 0x80231AF8: nop

        goto L_80231E2C;
    // 0x80231AF8: nop

L_80231AFC:
    // 0x80231AFC: lhu         $v0, 0x440($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X440);
    // 0x80231B00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231B04: sb          $v1, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r3;
    // 0x80231B08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231B0C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231B10: beq         $v0, $zero, L_80231B30
    if (ctx->r2 == 0) {
        // 0x80231B14: sb          $v1, 0xAC($s5)
        MEM_B(0XAC, ctx->r21) = ctx->r3;
            goto L_80231B30;
    }
    // 0x80231B14: sb          $v1, 0xAC($s5)
    MEM_B(0XAC, ctx->r21) = ctx->r3;
    // 0x80231B18: lhu         $v0, 0x64($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X64);
    // 0x80231B1C: lhu         $v1, 0x66($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X66);
    // 0x80231B20: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80231B24: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80231B28: sh          $v0, 0x64($s5)
    MEM_H(0X64, ctx->r21) = ctx->r2;
    // 0x80231B2C: sh          $v1, 0x66($s5)
    MEM_H(0X66, ctx->r21) = ctx->r3;
L_80231B30:
    // 0x80231B30: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80231B34: sh          $v0, 0x444($s5)
    MEM_H(0X444, ctx->r21) = ctx->r2;
    // 0x80231B38: addiu       $s1, $s6, 0x68
    ctx->r17 = ADD32(ctx->r22, 0X68);
L_80231B3C:
    // 0x80231B3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231B40: addiu       $s3, $s5, 0x14
    ctx->r19 = ADD32(ctx->r21, 0X14);
    // 0x80231B44: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80231B48: jal         0x8009A3B4
    // 0x80231B4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231B4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80231B50: addiu       $s2, $s6, 0x70
    ctx->r18 = ADD32(ctx->r22, 0X70);
    // 0x80231B54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231B58: addiu       $s4, $s5, 0x1C
    ctx->r20 = ADD32(ctx->r21, 0X1C);
    // 0x80231B5C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80231B60: jal         0x8009A3B4
    // 0x80231B64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231B64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231B6C: lh          $a2, 0x56($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X56);
    // 0x80231B70: lhu         $v0, 0x42($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X42);
    // 0x80231B74: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231B78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80231B7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231B80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231B84: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80231B88: jal         0x8004DBA0
    // 0x80231B8C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80231B8C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80231B90: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231B94: lh          $a2, 0x56($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X56);
    // 0x80231B98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231B9C: jal         0x8004F820
    // 0x80231BA0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80231BA0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x80231BA4: lhu         $v1, 0x56($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X56);
    // 0x80231BA8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80231BAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231BB0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80231BB4: addiu       $s0, $s0, -0x6910
    ctx->r16 = ADD32(ctx->r16, -0X6910);
    // 0x80231BB8: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80231BBC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231BC0: sh          $v1, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r3;
    // 0x80231BC4: lhu         $v0, 0x42($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X42);
    // 0x80231BC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231BD0: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80231BD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231BD8: jal         0x8009A3B4
    // 0x80231BDC: sh          $v0, 0x42($s6)
    MEM_H(0X42, ctx->r22) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80231BDC: sh          $v0, 0x42($s6)
    MEM_H(0X42, ctx->r22) = ctx->r2;
    after_4:
    // 0x80231BE0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231BE4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80231BE8: addiu       $a1, $a1, -0x6908
    ctx->r5 = ADD32(ctx->r5, -0X6908);
    // 0x80231BEC: jal         0x8009A3B4
    // 0x80231BF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80231BF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80231BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231BF8: jal         0x8004EC38
    // 0x80231BFC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x80231BFC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80231C00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231C04: lhu         $s0, 0x64($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X64);
    // 0x80231C08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231C0C: addiu       $a3, $zero, 0x5000
    ctx->r7 = ADD32(0, 0X5000);
    // 0x80231C10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231C14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231C18: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80231C1C: jal         0x8004DBA0
    // 0x80231C20: andi        $a2, $s0, 0xFFF
    ctx->r6 = ctx->r16 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_7;
    // 0x80231C20: andi        $a2, $s0, 0xFFF
    ctx->r6 = ctx->r16 & 0XFFF;
    after_7:
    // 0x80231C24: lhu         $v0, 0xF2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0XF2);
    // 0x80231C28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231C2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231C30: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231C34: sh          $v0, 0xF2($s6)
    MEM_H(0XF2, ctx->r22) = ctx->r2;
    // 0x80231C38: lhu         $v0, 0x66($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X66);
    // 0x80231C3C: lhu         $v1, 0x56($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X56);
    // 0x80231C40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231C44: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80231C48: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x80231C4C: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x80231C50: jal         0x8009A3B4
    // 0x80231C54: sh          $s0, 0x42($s6)
    MEM_H(0X42, ctx->r22) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80231C54: sh          $s0, 0x42($s6)
    MEM_H(0X42, ctx->r22) = ctx->r16;
    after_8:
    // 0x80231C58: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231C5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231C60: jal         0x8009A3B4
    // 0x80231C64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80231C64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x80231C68: lb          $v0, 0x76($s7)
    ctx->r2 = MEM_B(ctx->r23, 0X76);
    // 0x80231C6C: beq         $v0, $zero, L_80231CA8
    if (ctx->r2 == 0) {
        // 0x80231C70: nop
    
            goto L_80231CA8;
    }
    // 0x80231C70: nop

    // 0x80231C74: lw          $v0, 0xC0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0XC0);
    // 0x80231C78: bne         $v0, $s5, L_80231CA8
    if (ctx->r2 != ctx->r21) {
        // 0x80231C7C: nop
    
            goto L_80231CA8;
    }
    // 0x80231C7C: nop

    // 0x80231C80: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80231C84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231C88: sh          $v0, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r2;
    // 0x80231C8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231C90: bgez        $v0, L_80231E2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231C94: nop
    
            goto L_80231E2C;
    }
    // 0x80231C94: nop

    // 0x80231C98: jal         0x802325A0
    // 0x80231C9C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_802325A0_ovl13(rdram, ctx);
        goto after_10;
    // 0x80231C9C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_10:
    // 0x80231CA0: j           L_80231E0C
    // 0x80231CA4: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
        goto L_80231E0C;
    // 0x80231CA4: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
L_80231CA8:
    // 0x80231CA8: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80231CAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231CB0: sh          $v0, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r2;
    // 0x80231CB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231CB8: bgez        $v0, L_80231CD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231CBC: nop
    
            goto L_80231CD0;
    }
    // 0x80231CBC: nop

    // 0x80231CC0: jal         0x802325A0
    // 0x80231CC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_802325A0_ovl13(rdram, ctx);
        goto after_11;
    // 0x80231CC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_11:
    // 0x80231CC8: j           L_80231E0C
    // 0x80231CCC: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
        goto L_80231E0C;
    // 0x80231CCC: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
L_80231CD0:
    // 0x80231CD0: lh          $v0, 0x40($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X40);
    // 0x80231CD4: bne         $v0, $zero, L_80231E2C
    if (ctx->r2 != 0) {
        // 0x80231CD8: nop
    
            goto L_80231E2C;
    }
    // 0x80231CD8: nop

    // 0x80231CDC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80231CE0: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x80231CE4: lh          $v1, 0x16($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X16);
    // 0x80231CE8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80231CEC: bltz        $v0, L_80231D04
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231CF0: slti        $v0, $v0, 0x200
        ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_80231D04;
    }
    // 0x80231CF0: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80231CF4: bne         $v0, $zero, L_80231D14
    if (ctx->r2 != 0) {
        // 0x80231CF8: addiu       $a0, $s5, 0x14
        ctx->r4 = ADD32(ctx->r21, 0X14);
            goto L_80231D14;
    }
    // 0x80231CF8: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x80231CFC: j           L_80231DC4
    // 0x80231D00: nop

        goto L_80231DC4;
    // 0x80231D00: nop

L_80231D04:
    // 0x80231D04: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80231D08: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80231D0C: beq         $v0, $zero, L_80231DC4
    if (ctx->r2 == 0) {
        // 0x80231D10: addiu       $a0, $s5, 0x14
        ctx->r4 = ADD32(ctx->r21, 0X14);
            goto L_80231DC4;
    }
    // 0x80231D10: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
L_80231D14:
    // 0x80231D14: lh          $a2, 0x56($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X56);
    // 0x80231D18: addiu       $a1, $s7, 0x14
    ctx->r5 = ADD32(ctx->r23, 0X14);
    // 0x80231D1C: jal         0x8004F820
    // 0x80231D20: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_12;
    // 0x80231D20: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_12:
    // 0x80231D24: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80231D28: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80231D2C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231D30: bltzl       $v0, L_80231D4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231D34: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80231D4C;
    }
    goto skip_0;
    // 0x80231D34: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80231D38: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80231D3C: bne         $v0, $zero, L_80231D58
    if (ctx->r2 != 0) {
        // 0x80231D40: sll         $v0, $a3, 16
        ctx->r2 = S32(ctx->r7 << 16);
            goto L_80231D58;
    }
    // 0x80231D40: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80231D44: j           L_80231D78
    // 0x80231D48: nop

        goto L_80231D78;
    // 0x80231D48: nop

L_80231D4C:
    // 0x80231D4C: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80231D50: beq         $v0, $zero, L_80231D78
    if (ctx->r2 == 0) {
        // 0x80231D54: sll         $v0, $a3, 16
        ctx->r2 = S32(ctx->r7 << 16);
            goto L_80231D78;
    }
    // 0x80231D54: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
L_80231D58:
    // 0x80231D58: lw          $v1, 0x80($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X80);
    // 0x80231D5C: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x80231D60: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80231D64: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231D68: bne         $v0, $zero, L_80231D78
    if (ctx->r2 != 0) {
        // 0x80231D6C: sll         $v0, $a3, 16
        ctx->r2 = S32(ctx->r7 << 16);
            goto L_80231D78;
    }
    // 0x80231D6C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80231D70: j           L_80231E08
    // 0x80231D74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80231E08;
    // 0x80231D74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231D78:
    // 0x80231D78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231D7C: bltzl       $v0, L_80231D98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231D80: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80231D98;
    }
    goto skip_1;
    // 0x80231D80: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80231D84: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80231D88: beq         $v0, $zero, L_80231E2C
    if (ctx->r2 == 0) {
        // 0x80231D8C: nop
    
            goto L_80231E2C;
    }
    // 0x80231D8C: nop

    // 0x80231D90: j           L_80231DA4
    // 0x80231D94: nop

        goto L_80231DA4;
    // 0x80231D94: nop

L_80231D98:
    // 0x80231D98: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80231D9C: beq         $v0, $zero, L_80231E2C
    if (ctx->r2 == 0) {
        // 0x80231DA0: nop
    
            goto L_80231E2C;
    }
    // 0x80231DA0: nop

L_80231DA4:
    // 0x80231DA4: lw          $v1, 0x80($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X80);
    // 0x80231DA8: lui         $v0, 0x11F
    ctx->r2 = S32(0X11F << 16);
    // 0x80231DAC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80231DB0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231DB4: bne         $v0, $zero, L_80231E2C
    if (ctx->r2 != 0) {
        // 0x80231DB8: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80231E2C;
    }
    // 0x80231DB8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80231DBC: j           L_80231E0C
    // 0x80231DC0: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
        goto L_80231E0C;
    // 0x80231DC0: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
L_80231DC4:
    // 0x80231DC4: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x80231DC8: lh          $a2, 0x56($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X56);
    // 0x80231DCC: addiu       $a1, $s7, 0x14
    ctx->r5 = ADD32(ctx->r23, 0X14);
    // 0x80231DD0: jal         0x8004F820
    // 0x80231DD4: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80231DD4: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    after_13:
    // 0x80231DD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231DDC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231DE0: bltzl       $v0, L_80231DFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80231DE4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80231DFC;
    }
    goto skip_2;
    // 0x80231DE4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x80231DE8: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80231DEC: bne         $v0, $zero, L_80231E08
    if (ctx->r2 != 0) {
        // 0x80231DF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231E08;
    }
    // 0x80231DF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231DF4: j           L_80231E2C
    // 0x80231DF8: nop

        goto L_80231E2C;
    // 0x80231DF8: nop

L_80231DFC:
    // 0x80231DFC: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80231E00: beq         $v0, $zero, L_80231E2C
    if (ctx->r2 == 0) {
        // 0x80231E04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231E2C;
    }
    // 0x80231E04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231E08:
    // 0x80231E08: sb          $v0, 0xD($s5)
    MEM_B(0XD, ctx->r21) = ctx->r2;
L_80231E0C:
    // 0x80231E0C: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x80231E10: lhu         $a0, 0x42($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X42);
    // 0x80231E14: lhu         $v1, 0x0($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X0);
    // 0x80231E18: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80231E1C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231E20: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80231E24: sh          $v0, 0x44($s6)
    MEM_H(0X44, ctx->r22) = ctx->r2;
    // 0x80231E28: sh          $v1, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r3;
L_80231E2C:
    // 0x80231E2C: lb          $v0, 0xA6($s5)
    ctx->r2 = MEM_B(ctx->r21, 0XA6);
    // 0x80231E30: beq         $v0, $zero, L_80231E40
    if (ctx->r2 == 0) {
        // 0x80231E34: addiu       $a0, $zero, 0xF6
        ctx->r4 = ADD32(0, 0XF6);
            goto L_80231E40;
    }
    // 0x80231E34: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    // 0x80231E38: jal         0x8002A33C
    // 0x80231E3C: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x80231E3C: addiu       $a1, $s5, 0x14
    ctx->r5 = ADD32(ctx->r21, 0X14);
    after_14:
L_80231E40:
    // 0x80231E40: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80231E44: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80231E48: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231E4C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231E50: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231E54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231E58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231E5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231E60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231E64: jr          $ra
    // 0x80231E68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80231E68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022C8BC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C8BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C8C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C8C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022C8C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C8CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022C8D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C8D4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022C8D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022C8DC: jal         0x8004EEAC
    // 0x8022C8E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022C8E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022C8E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C8E8: bne         $a0, $zero, L_8022C8F8
    if (ctx->r4 != 0) {
        // 0x8022C8EC: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_8022C8F8;
    }
    // 0x8022C8EC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8022C8F0: j           L_8022CA44
    // 0x8022C8F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CA44;
    // 0x8022C8F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C8F8:
    // 0x8022C8F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C8FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C900: addiu       $a3, $a0, 0x88
    ctx->r7 = ADD32(ctx->r4, 0X88);
    // 0x8022C904: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022C908: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x8022C90C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C914: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8022C918: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022C91C: sb          $s2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r18;
    // 0x8022C920: beq         $v1, $v0, L_8022C964
    if (ctx->r3 == ctx->r2) {
        // 0x8022C924: sw          $zero, 0xC($a0)
        MEM_W(0XC, ctx->r4) = 0;
            goto L_8022C964;
    }
    // 0x8022C924: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8022C928: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C92C: beql        $v0, $zero, L_8022C944
    if (ctx->r2 == 0) {
        // 0x8022C930: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C944;
    }
    goto skip_0;
    // 0x8022C930: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8022C934: beq         $v1, $zero, L_8022C954
    if (ctx->r3 == 0) {
        // 0x8022C938: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_8022C954;
    }
    // 0x8022C938: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022C93C: j           L_8022C9A8
    // 0x8022C940: nop

        goto L_8022C9A8;
    // 0x8022C940: nop

L_8022C944:
    // 0x8022C944: beq         $v1, $v0, L_8022C984
    if (ctx->r3 == ctx->r2) {
        // 0x8022C948: lui         $v1, 0x2E40
        ctx->r3 = S32(0X2E40 << 16);
            goto L_8022C984;
    }
    // 0x8022C948: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022C94C: j           L_8022C9A8
    // 0x8022C950: nop

        goto L_8022C9A8;
    // 0x8022C950: nop

L_8022C954:
    // 0x8022C954: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C958: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C95C: j           L_8022C974
    // 0x8022C960: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
        goto L_8022C974;
    // 0x8022C960: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
L_8022C964:
    // 0x8022C964: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022C968: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022C96C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C970: sb          $a1, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r5;
L_8022C974:
    // 0x8022C974: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022C978: sb          $a1, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r5;
    // 0x8022C97C: j           L_8022C9B8
    // 0x8022C980: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022C9B8;
    // 0x8022C980: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022C984:
    // 0x8022C984: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022C988: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C98C: sb          $v0, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r2;
    // 0x8022C990: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C994: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022C998: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C99C: sb          $v0, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r2;
    // 0x8022C9A0: j           L_8022C9B8
    // 0x8022C9A4: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022C9B8;
    // 0x8022C9A4: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022C9A8:
    // 0x8022C9A8: jal         0x8004F418
    // 0x8022C9AC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022C9AC: nop

    after_1:
    // 0x8022C9B0: j           L_8022CA44
    // 0x8022C9B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CA44;
    // 0x8022C9B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C9B8:
    // 0x8022C9B8: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022C9BC: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
    // 0x8022C9C0: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022C9C4: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022C9C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C9CC: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x8022C9D0: beq         $v1, $zero, L_8022CA40
    if (ctx->r3 == 0) {
        // 0x8022C9D4: sb          $v0, 0x2($a3)
        MEM_B(0X2, ctx->r7) = ctx->r2;
            goto L_8022CA40;
    }
    // 0x8022C9D4: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x8022C9D8: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
L_8022C9DC:
    // 0x8022C9DC: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022C9E0: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C9E4: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x8022C9E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C9EC: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022C9F0: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022C9F4: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022C9F8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_8022C9FC:
    // 0x8022C9FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022CA00: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CA04: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CA08: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022CA0C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022CA10: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022CA14: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022CA18: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022CA1C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CA20: bne         $v0, $zero, L_8022C9FC
    if (ctx->r2 != 0) {
        // 0x8022CA24: andi        $v0, $a1, 0xFF
        ctx->r2 = ctx->r5 & 0XFF;
            goto L_8022C9FC;
    }
    // 0x8022CA24: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022CA28: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022CA2C: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022CA30: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022CA34: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CA38: bne         $v0, $zero, L_8022C9DC
    if (ctx->r2 != 0) {
        // 0x8022CA3C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022C9DC;
    }
    // 0x8022CA3C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022CA40:
    // 0x8022CA40: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8022CA44:
    // 0x8022CA44: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CA48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CA4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CA50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CA54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CA58: jr          $ra
    // 0x8022CA5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CA5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023149C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023149C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802314A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802314A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802314A8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802314AC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802314B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802314B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802314B8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802314BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802314C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802314C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802314C8: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x802314CC: addiu       $s5, $s5, 0x49B0
    ctx->r21 = ADD32(ctx->r21, 0X49B0);
    // 0x802314D0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802314D4: beq         $v0, $zero, L_80231838
    if (ctx->r2 == 0) {
        // 0x802314D8: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_80231838;
    }
    // 0x802314D8: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x802314DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802314E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802314E4: addu        $at, $at, $v0
    gpr jr_addend_802314EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802314E8: lw          $v0, -0x6338($at)
    ctx->r2 = ADD32(ctx->r1, -0X6338);
    // 0x802314EC: jr          $v0
    // 0x802314F0: nop

    switch (jr_addend_802314EC >> 2) {
        case 0: goto L_802314F4; break;
        case 1: goto L_80231580; break;
        case 2: goto L_80231634; break;
        case 3: goto L_8023167C; break;
        case 4: goto L_80231778; break;
        case 5: goto L_802317C0; break;
        case 6: goto L_80231810; break;
        default: switch_error(__func__, 0x802314EC, 0x80239CC8);
    }
    // 0x802314F0: nop

L_802314F4:
    // 0x802314F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802314F8: addiu       $s3, $s5, 0x14
    ctx->r19 = ADD32(ctx->r21, 0X14);
    // 0x802314FC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231500: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80231504: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023150C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231510: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80231514: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231518: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023151C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231520: jal         0x8004F820
    // 0x80231524: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80231524: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x80231528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023152C: bgez        $v0, L_80231558
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231530: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80231558;
    }
    // 0x80231530: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231534: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231538: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023153C: jal         0x8004F820
    // 0x80231540: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231540: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_1:
    // 0x80231544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231548: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023154C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80231550: j           L_80231570
    // 0x80231554: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
        goto L_80231570;
    // 0x80231554: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
L_80231558:
    // 0x80231558: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023155C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231560: jal         0x8004F820
    // 0x80231564: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80231564: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_2:
    // 0x80231568: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023156C: sra         $v1, $v0, 20
    ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
L_80231570:
    // 0x80231570: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80231574: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x80231578: j           L_80231834
    // 0x8023157C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
        goto L_80231834;
    // 0x8023157C: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_80231580:
    // 0x80231580: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231584: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231588: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023158C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231590: bgez        $v0, L_802315B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231594: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_802315B4;
    }
    // 0x80231594: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80231598: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023159C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802315A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802315A4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802315A8: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802315AC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802315B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802315B4:
    // 0x802315B4: lb          $v0, 0x76($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X76);
    // 0x802315B8: beq         $v0, $zero, L_802315CC
    if (ctx->r2 == 0) {
        // 0x802315BC: nop
    
            goto L_802315CC;
    }
    // 0x802315BC: nop

    // 0x802315C0: lw          $v0, 0xC0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC0);
    // 0x802315C4: beq         $v0, $s0, L_80231604
    if (ctx->r2 == ctx->r16) {
        // 0x802315C8: addiu       $a0, $zero, 0xF7
        ctx->r4 = ADD32(0, 0XF7);
            goto L_80231604;
    }
    // 0x802315C8: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
L_802315CC:
    // 0x802315CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802315D0: lh          $a3, 0x6E($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X6E);
    // 0x802315D4: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x802315D8: jal         0x8004F820
    // 0x802315DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802315DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x802315E0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802315E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802315E8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802315EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802315F0: lhu         $v1, 0x42($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X42);
    // 0x802315F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802315F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802315FC: j           L_80231838
    // 0x80231600: sh          $v1, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r3;
        goto L_80231838;
    // 0x80231600: sh          $v1, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r3;
L_80231604:
    // 0x80231604: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023160C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231610: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80231614: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231618: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023161C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231620: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231624: jal         0x8002A33C
    // 0x80231628: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80231628: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    after_4:
    // 0x8023162C: j           L_80231838
    // 0x80231630: nop

        goto L_80231838;
    // 0x80231630: nop

L_80231634:
    // 0x80231634: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231638: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023163C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231644: bgez        $v0, L_8023166C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231648: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023166C;
    }
    // 0x80231648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023164C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231654: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231658: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023165C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231660: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80231664: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80231668: sb          $v0, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = ctx->r2;
L_8023166C:
    // 0x8023166C: jal         0x80232664
    // 0x80231670: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80232664_ovl13(rdram, ctx);
        goto after_5;
    // 0x80231670: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x80231674: j           L_80231838
    // 0x80231678: nop

        goto L_80231838;
    // 0x80231678: nop

L_8023167C:
    // 0x8023167C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231680: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231684: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231688: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023168C: bgez        $v0, L_80231838
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231690: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80231838;
    }
    // 0x80231690: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80231694: addiu       $s3, $s1, 0x68
    ctx->r19 = ADD32(ctx->r17, 0X68);
    // 0x80231698: addiu       $s6, $zero, -0x3200
    ctx->r22 = ADD32(0, -0X3200);
L_8023169C:
    // 0x8023169C: jal         0x8004EFE4
    // 0x802316A0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x802316A0: nop

    after_6:
    // 0x802316A4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802316A8: beql        $s2, $zero, L_80231740
    if (ctx->r18 == 0) {
        // 0x802316AC: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80231740;
    }
    goto skip_0;
    // 0x802316AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802316B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802316B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802316B8: jal         0x8009A3B4
    // 0x802316BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802316BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802316C0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802316C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316C8: sw          $v0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r2;
    // 0x802316CC: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802316D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316D4: sw          $v0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r2;
    // 0x802316D8: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802316DC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802316E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316E4: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x802316E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802316EC: addiu       $a1, $s1, 0x70
    ctx->r5 = ADD32(ctx->r17, 0X70);
    // 0x802316F0: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x802316F4: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802316F8: jal         0x8004DBA0
    // 0x802316FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_8;
    // 0x802316FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_8:
    // 0x80231700: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80231704: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80231708: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023170C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231710: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80231714: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231718: jal         0x8009A3B4
    // 0x8023171C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023171C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_9:
    // 0x80231720: jal         0x800A3450
    // 0x80231724: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x80231724: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    after_10:
    // 0x80231728: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023172C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80231730: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231734: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231738: addiu       $v1, $v1, -0x200
    ctx->r3 = ADD32(ctx->r3, -0X200);
    // 0x8023173C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
L_80231740:
    // 0x80231740: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80231744: bne         $v0, $zero, L_8023169C
    if (ctx->r2 != 0) {
        // 0x80231748: nop
    
            goto L_8023169C;
    }
    // 0x80231748: nop

    // 0x8023174C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231754: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231758: lb          $v0, 0x76($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X76);
    // 0x8023175C: bne         $v0, $zero, L_80231770
    if (ctx->r2 != 0) {
        // 0x80231760: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_80231770;
    }
    // 0x80231760: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80231764: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80231768: j           L_80231838
    // 0x8023176C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80231838;
    // 0x8023176C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80231770:
    // 0x80231770: j           L_80231838
    // 0x80231774: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80231838;
    // 0x80231774: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80231778:
    // 0x80231778: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023177C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231780: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80231784: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231788: bgez        $v0, L_80231838
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023178C: addiu       $a0, $zero, 0xF8
        ctx->r4 = ADD32(0, 0XF8);
            goto L_80231838;
    }
    // 0x8023178C: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x80231790: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231798: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023179C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802317A0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802317A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802317A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x802317AC: sb          $v0, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = ctx->r2;
    // 0x802317B0: jal         0x8002A33C
    // 0x802317B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x802317B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_11:
    // 0x802317B8: j           L_80231838
    // 0x802317BC: nop

        goto L_80231838;
    // 0x802317BC: nop

L_802317C0:
    // 0x802317C0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802317C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802317C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802317CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802317D0: bgez        $v0, L_80231800
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802317D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231800;
    }
    // 0x802317D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802317D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802317DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802317E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802317E4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802317E8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802317EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802317F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x802317F4: sb          $zero, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = 0;
    // 0x802317F8: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x802317FC: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80231800:
    // 0x80231800: jal         0x80232664
    // 0x80231804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80232664_ovl13(rdram, ctx);
        goto after_12;
    // 0x80231804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80231808: j           L_80231838
    // 0x8023180C: nop

        goto L_80231838;
    // 0x8023180C: nop

L_80231810:
    // 0x80231810: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231814: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231818: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023181C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231820: bgez        $v0, L_80231838
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231824: nop
    
            goto L_80231838;
    }
    // 0x80231824: nop

    // 0x80231828: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023182C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231830: andi        $v0, $v0, 0xDFFF
    ctx->r2 = ctx->r2 & 0XDFFF;
L_80231834:
    // 0x80231834: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80231838:
    // 0x80231838: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023183C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231840: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231844: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231848: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023184C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231850: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231854: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231858: jr          $ra
    // 0x8023185C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023185C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F84C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F84C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022F850: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F854: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022F858: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022F85C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F860: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022F864: bltzl       $v0, L_8022F86C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F868: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022F86C;
    }
    goto skip_0;
    // 0x8022F868: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022F86C:
    // 0x8022F86C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022F870: bnel        $v0, $zero, L_8022F894
    if (ctx->r2 != 0) {
        // 0x8022F874: sh          $a3, 0x328($a0)
        MEM_H(0X328, ctx->r4) = ctx->r7;
            goto L_8022F894;
    }
    goto skip_1;
    // 0x8022F874: sh          $a3, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r7;
    skip_1:
    // 0x8022F878: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022F87C: beq         $v0, $zero, L_8022F88C
    if (ctx->r2 == 0) {
        // 0x8022F880: addiu       $v0, $a2, 0x20
        ctx->r2 = ADD32(ctx->r6, 0X20);
            goto L_8022F88C;
    }
    // 0x8022F880: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8022F884: j           L_8022F894
    // 0x8022F888: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
        goto L_8022F894;
    // 0x8022F888: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022F88C:
    // 0x8022F88C: addiu       $v0, $a2, -0x20
    ctx->r2 = ADD32(ctx->r6, -0X20);
    // 0x8022F890: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022F894:
    // 0x8022F894: jr          $ra
    // 0x8022F898: nop

    TRACE_RETURN()
    return;
    // 0x8022F898: nop

;}
RECOMP_FUNC void func_802253CC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253DC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802253E4: beq         $v1, $v0, L_80225468
    if (ctx->r3 == ctx->r2) {
        // 0x802253E8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225468;
    }
    // 0x802253E8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802253EC: beql        $v0, $zero, L_80225404
    if (ctx->r2 == 0) {
        // 0x802253F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225404;
    }
    goto skip_0;
    // 0x802253F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802253F4: beq         $v1, $zero, L_8022541C
    if (ctx->r3 == 0) {
        // 0x802253F8: nop
    
            goto L_8022541C;
    }
    // 0x802253F8: nop

    // 0x802253FC: j           L_802254F8
    // 0x80225400: nop

        goto L_802254F8;
    // 0x80225400: nop

L_80225404:
    // 0x80225404: beq         $v1, $v0, L_80225498
    if (ctx->r3 == ctx->r2) {
        // 0x80225408: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225498;
    }
    // 0x80225408: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022540C: beq         $v1, $v0, L_802254C8
    if (ctx->r3 == ctx->r2) {
        // 0x80225410: nop
    
            goto L_802254C8;
    }
    // 0x80225410: nop

    // 0x80225414: j           L_802254F8
    // 0x80225418: nop

        goto L_802254F8;
    // 0x80225418: nop

L_8022541C:
    // 0x8022541C: jal         0x8006033C
    // 0x80225420: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225420: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_0:
    // 0x80225424: bne         $v0, $zero, L_802254F4
    if (ctx->r2 != 0) {
        // 0x80225428: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802254F4;
    }
    // 0x80225428: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022542C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225430: jal         0x800607C4
    // 0x80225434: addiu       $a0, $a0, -0x7D04
    ctx->r4 = ADD32(ctx->r4, -0X7D04);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x80225434: addiu       $a0, $a0, -0x7D04
    ctx->r4 = ADD32(ctx->r4, -0X7D04);
    after_1:
    // 0x80225438: jal         0x8004F228
    // 0x8022543C: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_2;
    // 0x8022543C: nop

    after_2:
    // 0x80225440: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225444: beq         $a0, $zero, L_80225460
    if (ctx->r4 == 0) {
        // 0x80225448: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225460;
    }
    // 0x80225448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022544C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225450: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80225454: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80225458: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022545C: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
L_80225460:
    // 0x80225460: j           L_802254F4
    // 0x80225464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802254F4;
    // 0x80225464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225468:
    // 0x80225468: jal         0x8006033C
    // 0x8022546C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022546C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_3:
    // 0x80225470: beq         $v0, $zero, L_802254F8
    if (ctx->r2 == 0) {
        // 0x80225474: nop
    
            goto L_802254F8;
    }
    // 0x80225474: nop

    // 0x80225478: jal         0x80060690
    // 0x8022547C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80060690_3BA90(rdram, ctx);
        goto after_4;
    // 0x8022547C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_4:
    // 0x80225480: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225488: jal         0x80060DA0
    // 0x8022548C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_5;
    // 0x8022548C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80225490: j           L_802254F4
    // 0x80225494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802254F4;
    // 0x80225494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80225498:
    // 0x80225498: jal         0x8006033C
    // 0x8022549C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x8022549C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x802254A0: beq         $v0, $zero, L_802254F8
    if (ctx->r2 == 0) {
        // 0x802254A4: nop
    
            goto L_802254F8;
    }
    // 0x802254A4: nop

    // 0x802254A8: jal         0x80060690
    // 0x802254AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80060690_3BA90(rdram, ctx);
        goto after_7;
    // 0x802254AC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_7:
    // 0x802254B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802254B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802254B8: jal         0x80060DA0
    // 0x802254BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_8;
    // 0x802254BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x802254C0: j           L_802254F4
    // 0x802254C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802254F4;
    // 0x802254C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802254C8:
    // 0x802254C8: jal         0x8004F228
    // 0x802254CC: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_9;
    // 0x802254CC: nop

    after_9:
    // 0x802254D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802254D4: beq         $a0, $zero, L_802254F0
    if (ctx->r4 == 0) {
        // 0x802254D8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802254F0;
    }
    // 0x802254D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802254DC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802254E0: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802254E4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802254E8: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x802254EC: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_802254F0:
    // 0x802254F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802254F4:
    // 0x802254F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254F8:
    // 0x802254F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225500: jr          $ra
    // 0x80225504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4A4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F4A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F4AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F4B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F4B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F4B8: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022F4BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F4C0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F4C4: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022F4C8: beq         $v0, $zero, L_8022F514
    if (ctx->r2 == 0) {
        // 0x8022F4CC: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022F514;
    }
    // 0x8022F4CC: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022F4D0: lbu         $v0, 0x36E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36E);
    // 0x8022F4D4: sltiu       $v0, $v0, 0x3C
    ctx->r2 = ctx->r2 < 0X3C ? 1 : 0;
    // 0x8022F4D8: beq         $v0, $zero, L_8022F514
    if (ctx->r2 == 0) {
        // 0x8022F4DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F514;
    }
    // 0x8022F4DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F4E0: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F4E4: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022F4E8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022F4EC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022F4F0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022F4F4: jal         0x8004F820
    // 0x8022F4F8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F4F8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022F4FC: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022F500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F504: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F508: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F50C: jal         0x8022F650
    // 0x8022F510: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    func_8022F650_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022F510: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    after_1:
L_8022F514:
    // 0x8022F514: lbu         $v0, 0x66($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X66);
    // 0x8022F518: bne         $v0, $zero, L_8022F54C
    if (ctx->r2 != 0) {
        // 0x8022F51C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022F54C;
    }
    // 0x8022F51C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F520: lb          $v0, 0x65($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X65);
    // 0x8022F524: beq         $v0, $zero, L_8022F534
    if (ctx->r2 == 0) {
        // 0x8022F528: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F534;
    }
    // 0x8022F528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F52C: j           L_8022F550
    // 0x8022F530: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F550;
    // 0x8022F530: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F534:
    // 0x8022F534: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F538: sb          $v0, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r2;
    // 0x8022F53C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022F540: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
    // 0x8022F544: j           L_8022F550
    // 0x8022F548: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022F550;
    // 0x8022F548: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022F54C:
    // 0x8022F54C: sb          $v0, 0x66($s1)
    MEM_B(0X66, ctx->r17) = ctx->r2;
L_8022F550:
    // 0x8022F550: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F554: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F558: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F55C: jr          $ra
    // 0x8022F560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228F2C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228F30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228F3C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80228F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228F44: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80228F48: beq         $v1, $v0, L_80228FD0
    if (ctx->r3 == ctx->r2) {
        // 0x80228F4C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80228FD0;
    }
    // 0x80228F4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228F50: beql        $v0, $zero, L_80228F68
    if (ctx->r2 == 0) {
        // 0x80228F54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228F68;
    }
    goto skip_0;
    // 0x80228F54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228F58: beq         $v1, $zero, L_80228F80
    if (ctx->r3 == 0) {
        // 0x80228F5C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80228F80;
    }
    // 0x80228F5C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80228F60: j           L_802290C8
    // 0x80228F64: nop

        goto L_802290C8;
    // 0x80228F64: nop

L_80228F68:
    // 0x80228F68: beq         $v1, $v0, L_80229038
    if (ctx->r3 == ctx->r2) {
        // 0x80228F6C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229038;
    }
    // 0x80228F6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228F70: beq         $v1, $v0, L_802290AC
    if (ctx->r3 == ctx->r2) {
        // 0x80228F74: nop
    
            goto L_802290AC;
    }
    // 0x80228F74: nop

    // 0x80228F78: j           L_802290C8
    // 0x80228F7C: nop

        goto L_802290C8;
    // 0x80228F7C: nop

L_80228F80:
    // 0x80228F80: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80228F84: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x80228F88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228F8C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80228F90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228F94: lhu         $a2, 0x56($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X56);
    // 0x80228F98: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x80228F9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228FA0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228FA4: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80228FA8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228FAC: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228FB0: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80228FB4: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x80228FB8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80228FBC: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x80228FC0: jal         0x8002A33C
    // 0x80228FC4: sh          $a2, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228FC4: sh          $a2, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r6;
    after_0:
    // 0x80228FC8: j           L_802290C8
    // 0x80228FCC: nop

        goto L_802290C8;
    // 0x80228FCC: nop

L_80228FD0:
    // 0x80228FD0: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80228FD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228FD8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228FDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228FE0: bgez        $v0, L_802290C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228FE4: addiu       $v1, $zero, 0x26
        ctx->r3 = ADD32(0, 0X26);
            goto L_802290C8;
    }
    // 0x80228FE4: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x80228FE8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228FEC: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x80228FF0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228FF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228FF8: andi        $a0, $a0, 0x20
    ctx->r4 = ctx->r4 & 0X20;
    // 0x80228FFC: beq         $a0, $zero, L_802290C8
    if (ctx->r4 == 0) {
        // 0x80229000: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802290C8;
    }
    // 0x80229000: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229004: lw          $v0, 0x364($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X364);
    // 0x80229008: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022900C: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    // 0x80229010: lw          $v1, 0x364($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X364);
    // 0x80229014: lhu         $v0, 0x56($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X56);
    // 0x80229018: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022901C: lw          $v1, 0x364($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X364);
    // 0x80229020: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229024: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x80229028: lw          $v1, 0x364($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X364);
    // 0x8022902C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229030: j           L_802290C8
    // 0x80229034: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
        goto L_802290C8;
    // 0x80229034: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
L_80229038:
    // 0x80229038: lhu         $v0, 0x32E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32E);
    // 0x8022903C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229040: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    // 0x80229044: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229048: bgez        $v0, L_80229094
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022904C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229094;
    }
    // 0x8022904C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229050: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229054: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x80229058: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022905C: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x80229060: beq         $v1, $zero, L_80229094
    if (ctx->r3 == 0) {
        // 0x80229064: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80229094;
    }
    // 0x80229064: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229068: lw          $a0, 0x364($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X364);
    // 0x8022906C: jal         0x8004F4F8
    // 0x80229070: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80229070: nop

    after_1:
    // 0x80229074: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80229078: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x8022907C: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80229080: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80229084: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80229088: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022908C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80229090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229094:
    // 0x80229094: addiu       $a1, $zero, -0xB0
    ctx->r5 = ADD32(0, -0XB0);
    // 0x80229098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022909C: jal         0x8004DA90
    // 0x802290A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802290A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802290A4: j           L_802290C8
    // 0x802290A8: nop

        goto L_802290C8;
    // 0x802290A8: nop

L_802290AC:
    // 0x802290AC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802290B0: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x802290B4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x802290B8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x802290BC: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802290C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802290C4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_802290C8:
    // 0x802290C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802290CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802290D0: jr          $ra
    // 0x802290D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802290D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B74_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B74: jr          $ra
    // 0x80225B78: nop

    TRACE_RETURN()
    return;
    // 0x80225B78: nop

;}
RECOMP_FUNC void func_802262CC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262CC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802262D0: beql        $v0, $zero, L_802262D8
    if (ctx->r2 == 0) {
        // 0x802262D4: sb          $zero, 0x6($a0)
        MEM_B(0X6, ctx->r4) = 0;
            goto L_802262D8;
    }
    goto skip_0;
    // 0x802262D4: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    skip_0:
L_802262D8:
    // 0x802262D8: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x802262DC: bne         $v0, $zero, L_8022630C
    if (ctx->r2 != 0) {
        // 0x802262E0: nop
    
            goto L_8022630C;
    }
    // 0x802262E0: nop

    // 0x802262E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262E8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802262EC: bne         $v0, $zero, L_8022630C
    if (ctx->r2 != 0) {
        // 0x802262F0: nop
    
            goto L_8022630C;
    }
    // 0x802262F0: nop

    // 0x802262F4: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x802262F8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802262FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226300: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80226304: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80226308: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
L_8022630C:
    // 0x8022630C: jr          $ra
    // 0x80226310: nop

    TRACE_RETURN()
    return;
    // 0x80226310: nop

;}
RECOMP_FUNC void func_80235D30_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D30: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80235D34: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80235D38: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x80235D3C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80235D40: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80235D44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D48: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x80235D4C: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80235D50: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80235D54: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80235D58: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235D5C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80235D60: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80235D64: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80235D68: beq         $v0, $zero, L_80235D78
    if (ctx->r2 == 0) {
        // 0x80235D6C: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80235D78;
    }
    // 0x80235D6C: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80235D70: j           L_80235D84
    // 0x80235D74: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80235D84;
    // 0x80235D74: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80235D78:
    // 0x80235D78: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x80235D7C: bne         $v0, $zero, L_80235D88
    if (ctx->r2 != 0) {
        // 0x80235D80: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80235D88;
    }
    // 0x80235D80: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80235D84:
    // 0x80235D84: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80235D88:
    // 0x80235D88: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x80235D8C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80235D90: bne         $v0, $zero, L_80235DA4
    if (ctx->r2 != 0) {
        // 0x80235D94: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80235DA4;
    }
    // 0x80235D94: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80235D98: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80235D9C: bne         $v0, $zero, L_80235DA8
    if (ctx->r2 != 0) {
        // 0x80235DA0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80235DA8;
    }
    // 0x80235DA0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80235DA4:
    // 0x80235DA4: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80235DA8:
    // 0x80235DA8: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x80235DAC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80235DB0: bne         $v0, $zero, L_80235DC4
    if (ctx->r2 != 0) {
        // 0x80235DB4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80235DC4;
    }
    // 0x80235DB4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80235DB8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80235DBC: bne         $v0, $zero, L_80235DC8
    if (ctx->r2 != 0) {
        // 0x80235DC0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80235DC8;
    }
    // 0x80235DC0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80235DC4:
    // 0x80235DC4: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80235DC8:
    // 0x80235DC8: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x80235DCC: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80235DD0: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80235DD4: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80235DD8: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x80235DDC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80235DE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235DE4: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80235DE8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80235DEC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80235DF0: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80235DF4: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80235DF8: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x80235DFC: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80235E00: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80235E04: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80235E08: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80235E0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235E10: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80235E14: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80235E18: jr          $ra
    // 0x80235E1C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80235E1C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_8022A9CC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A9D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A9D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A9DC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A9E0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A9E4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A9E8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A9EC: jal         0x8004F820
    // 0x8022A9F0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A9F0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022A9F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A9F8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A9FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AA00: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AA04: bgez        $a0, L_8022AA28
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022AA08: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022AA28;
    }
    // 0x8022AA08: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022AA0C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AA10: jal         0x8022B748
    // 0x8022AA14: nop

    func_8022B748_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022AA14: nop

    after_1:
    // 0x8022AA18: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022AA1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AA20: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022AA24: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022AA28:
    // 0x8022AA28: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AA2C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022AA30: bne         $v0, $zero, L_8022AA54
    if (ctx->r2 != 0) {
        // 0x8022AA34: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022AA54;
    }
    // 0x8022AA34: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022AA38: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AA3C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AA40: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022AA44: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022AA48: jal         0x8022B748
    // 0x8022AA4C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022B748_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022AA4C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022AA50: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AA54:
    // 0x8022AA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA5C: jr          $ra
    // 0x8022AA60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FA8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226FB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226FBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226FC0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226FC4: beq         $v0, $zero, L_80227170
    if (ctx->r2 == 0) {
        // 0x80226FC8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227170;
    }
    // 0x80226FC8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226FCC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226FD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226FD4: addu        $at, $at, $v0
    gpr jr_addend_80226FDC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FD8: lw          $v0, -0x6538($at)
    ctx->r2 = ADD32(ctx->r1, -0X6538);
    // 0x80226FDC: jr          $v0
    // 0x80226FE0: nop

    switch (jr_addend_80226FDC >> 2) {
        case 0: goto L_80226FE4; break;
        case 1: goto L_80227028; break;
        case 2: goto L_80227088; break;
        case 3: goto L_80227114; break;
        case 4: goto L_80227144; break;
        default: switch_error(__func__, 0x80226FDC, 0x80239AC8);
    }
    // 0x80226FE0: nop

L_80226FE4:
    // 0x80226FE4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226FE8: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80226FEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226FF0: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x80226FF4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226FF8: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80226FFC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80227000: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227004: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80227008: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022700C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227010: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80227014: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227018: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022701C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80227020: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80227024: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80227028:
    // 0x80227028: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022702C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227030: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227034: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227038: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022703C: bltz        $v0, L_8022706C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227040: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022706C;
    }
    // 0x80227040: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80227044: beq         $v0, $zero, L_80227170
    if (ctx->r2 == 0) {
        // 0x80227048: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227170;
    }
    // 0x80227048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022704C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227050: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80227054: jal         0x8004DA90
    // 0x80227058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227058: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022705C: jal         0x80040F30
    // 0x80227060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80227060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227064: j           L_80227170
    // 0x80227068: nop

        goto L_80227170;
    // 0x80227068: nop

L_8022706C:
    // 0x8022706C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227070: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227074: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227078: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x8022707C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227084: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227088:
    // 0x80227088: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022708C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227090: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227094: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227098: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022709C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802270A0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802270A4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802270A8: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x802270AC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802270B0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802270B4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802270B8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x802270BC: jal         0x8004DA90
    // 0x802270C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802270C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x802270C4: jal         0x80040F30
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802270CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802270D0: beq         $v1, $zero, L_80227170
    if (ctx->r3 == 0) {
        // 0x802270D4: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80227170;
    }
    // 0x802270D4: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x802270D8: bnel        $v0, $zero, L_802270E0
    if (ctx->r2 != 0) {
        // 0x802270DC: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802270E0;
    }
    goto skip_0;
    // 0x802270DC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_802270E0:
    // 0x802270E0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x802270E4: beq         $v0, $zero, L_80227170
    if (ctx->r2 == 0) {
        // 0x802270E8: nop
    
            goto L_80227170;
    }
    // 0x802270E8: nop

    // 0x802270EC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802270F0: bgtz        $v0, L_80227170
    if (SIGNED(ctx->r2) > 0) {
        // 0x802270F4: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_80227170;
    }
    // 0x802270F4: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x802270F8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802270FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227100: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x80227104: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227108: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022710C: j           L_80227170
    // 0x80227110: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227170;
    // 0x80227110: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227114:
    // 0x80227114: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227118: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022711C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227120: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227124: bgez        $v0, L_80227170
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227128: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227170;
    }
    // 0x80227128: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022712C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227130: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227134: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80227138: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022713C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227140: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227144:
    // 0x80227144: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227148: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022714C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227150: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227154: bgez        $v0, L_80227170
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227158: nop
    
            goto L_80227170;
    }
    // 0x80227158: nop

    // 0x8022715C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227160: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x80227164: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227168: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022716C: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_80227170:
    // 0x80227170: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227174: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227178: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022717C: jr          $ra
    // 0x80227180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D7F0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D7FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D800: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D808: jal         0x8009A3B4
    // 0x8022D80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D810: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D814: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D818: jal         0x8009A3B4
    // 0x8022D81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D820: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D824: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D828: jal         0x8009A3B4
    // 0x8022D82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D830: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D834: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022D838: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D83C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D840: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D844: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D848: lw          $v0, -0x69D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69D4);
    // 0x8022D84C: jalr        $v0
    // 0x8022D850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022D850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D854: sw          $zero, 0x2F0($s0)
    MEM_W(0X2F0, ctx->r16) = 0;
    // 0x8022D858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D85C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D860: jr          $ra
    // 0x8022D864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802274C4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802274C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802274CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802274D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802274D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802274D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274DC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802274E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802274E4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802274E8: beq         $v1, $zero, L_80227504
    if (ctx->r3 == 0) {
        // 0x802274EC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80227504;
    }
    // 0x802274EC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x802274F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274F4: beq         $v1, $v0, L_80227528
    if (ctx->r3 == ctx->r2) {
        // 0x802274F8: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_80227528;
    }
    // 0x802274F8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802274FC: j           L_80227600
    // 0x80227500: nop

        goto L_80227600;
    // 0x80227500: nop

L_80227504:
    // 0x80227504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227508: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022750C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80227510: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80227514: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80227518: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022751C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227520: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227524: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_80227528:
    // 0x80227528: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022752C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227530: jal         0x8004F820
    // 0x80227534: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227534: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x80227538: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022753C: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80227540: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80227544: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022754C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227550: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227554: jal         0x8004DA90
    // 0x80227558: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227558: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022755C: jal         0x80040F30
    // 0x80227560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80227560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80227564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227568: jal         0x8003E934
    // 0x8022756C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022756C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80227570: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80227574: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227578: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022757C: bne         $s0, $zero, L_802275B8
    if (ctx->r16 != 0) {
        // 0x80227580: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_802275B8;
    }
    // 0x80227580: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80227584: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x80227588: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022758C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227590: bltz        $v0, L_802275A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227594: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_802275A8;
    }
    // 0x80227594: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80227598: beq         $v0, $zero, L_802275BC
    if (ctx->r2 == 0) {
        // 0x8022759C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802275BC;
    }
    // 0x8022759C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802275A0: j           L_802275E8
    // 0x802275A4: nop

        goto L_802275E8;
    // 0x802275A4: nop

L_802275A8:
    // 0x802275A8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802275AC: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x802275B0: bne         $v0, $zero, L_802275E8
    if (ctx->r2 != 0) {
        // 0x802275B4: nop
    
            goto L_802275E8;
    }
    // 0x802275B4: nop

L_802275B8:
    // 0x802275B8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_802275BC:
    // 0x802275BC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802275C0: jal         0x8009A3B4
    // 0x802275C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802275C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802275C8: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802275CC: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802275D0: jal         0x8009A3B4
    // 0x802275D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802275D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802275D8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x802275DC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802275E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802275E4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_802275E8:
    // 0x802275E8: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x802275EC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x802275F0: bne         $v0, $zero, L_80227600
    if (ctx->r2 != 0) {
        // 0x802275F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227600;
    }
    // 0x802275F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802275F8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802275FC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80227600:
    // 0x80227600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227604: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227608: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022760C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227610: jr          $ra
    // 0x80227614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CF28_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CF2C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CF30: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022CF34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CF38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022CF3C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022CF40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CF44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF48: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022CF4C:
    // 0x8022CF4C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CF50: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CF54: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CF58: beq         $v0, $zero, L_8022CF88
    if (ctx->r2 == 0) {
        // 0x8022CF5C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CF88;
    }
    // 0x8022CF5C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CF60: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022CF64: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CF68:
    // 0x8022CF68: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022CF6C: jal         0x8022CFE0
    // 0x8022CF70: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022CFE0_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022CF70: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CF74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CF78: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CF7C: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022CF80: bne         $v0, $zero, L_8022CF68
    if (ctx->r2 != 0) {
        // 0x8022CF84: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022CF68;
    }
    // 0x8022CF84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CF88:
    // 0x8022CF88: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CF8C: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CF90: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CF94: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022CF98: beq         $v0, $zero, L_8022CFA4
    if (ctx->r2 == 0) {
        // 0x8022CF9C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CFA4;
    }
    // 0x8022CF9C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CFA0: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022CFA4:
    // 0x8022CFA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022CFA8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CFAC: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022CFB0: bne         $v0, $zero, L_8022CF4C
    if (ctx->r2 != 0) {
        // 0x8022CFB4: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022CF4C;
    }
    // 0x8022CFB4: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CFB8: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022CFBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CFC0: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x8022CFC4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CFC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CFCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CFD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CFD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CFD8: jr          $ra
    // 0x8022CFDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CFDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D3B0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D3B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D3B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D3BC: jal         0x800A3450
    // 0x8022D3C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D3C0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D3C4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D3C8: bne         $v1, $zero, L_8022D440
    if (ctx->r3 != 0) {
        // 0x8022D3CC: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022D440;
    }
    // 0x8022D3CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022D3D0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D3D4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D3D8: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D3DC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022D3E0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D3E4: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022D3E8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D3EC: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D3F0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D3F4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D3F8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D3FC: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D400: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D404: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022D408: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D40C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D410: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022D414: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D418: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D41C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D420: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D424: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D428: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D42C: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D430: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022D434: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D438: j           L_8022D484
    // 0x8022D43C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D484;
    // 0x8022D43C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D440:
    // 0x8022D440: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D444: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D448: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D44C: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D450: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D454: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022D458: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D45C: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x8022D460: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022D464: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8022D468: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D46C: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D470: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D474: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D478: bne         $v1, $zero, L_8022D484
    if (ctx->r3 != 0) {
        // 0x8022D47C: sh          $a1, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r5;
            goto L_8022D484;
    }
    // 0x8022D47C: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D480: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D484:
    // 0x8022D484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D488: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D48C: jr          $ra
    // 0x8022D490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233BEC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233BF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233BF8: jal         0x8004F144
    // 0x80233BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233C00: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80233C04: beql        $a1, $zero, L_80233C38
    if (ctx->r5 == 0) {
        // 0x80233C08: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80233C38;
    }
    goto skip_0;
    // 0x80233C08: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80233C0C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233C10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233C14: beq         $v0, $zero, L_80233C2C
    if (ctx->r2 == 0) {
        // 0x80233C18: nop
    
            goto L_80233C2C;
    }
    // 0x80233C18: nop

    // 0x80233C1C: jal         0x80233C50
    // 0x80233C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233C50_ovl13(rdram, ctx);
        goto after_1;
    // 0x80233C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233C24: j           L_80233C38
    // 0x80233C28: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80233C38;
    // 0x80233C28: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80233C2C:
    // 0x80233C2C: jal         0x80233C90
    // 0x80233C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233C90_ovl13(rdram, ctx);
        goto after_2;
    // 0x80233C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80233C34: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80233C38:
    // 0x80233C38: jal         0x8004F4F8
    // 0x80233C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x80233C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80233C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233C44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233C48: jr          $ra
    // 0x80233C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B36C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B36C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B37C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B384: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022B388: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B38C: jal         0x8004FA7C
    // 0x8022B390: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B390: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022B394: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B398: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B39C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B3A0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022B3A4: beq         $v0, $zero, L_8022B3BC
    if (ctx->r2 == 0) {
        // 0x8022B3A8: nop
    
            goto L_8022B3BC;
    }
    // 0x8022B3A8: nop

    // 0x8022B3AC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B3B0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022B3B4: beq         $v0, $zero, L_8022B408
    if (ctx->r2 == 0) {
        // 0x8022B3B8: nop
    
            goto L_8022B408;
    }
    // 0x8022B3B8: nop

L_8022B3BC:
    // 0x8022B3BC: jal         0x8003516C
    // 0x8022B3C0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022B3C0: nop

    after_1:
    // 0x8022B3C4: bne         $v0, $zero, L_8022B408
    if (ctx->r2 != 0) {
        // 0x8022B3C8: nop
    
            goto L_8022B408;
    }
    // 0x8022B3C8: nop

    // 0x8022B3CC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022B3D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B3D4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022B3D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B3DC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022B3E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B3E4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022B3E8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B3EC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B3F0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022B3F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B3F8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022B3FC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022B400: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022B404: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022B408:
    // 0x8022B408: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B40C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022B410: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B414: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B41C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B428: jr          $ra
    // 0x8022B42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B42C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229B50_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229B60: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80229B64: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229B68: jal         0x8004FA7C
    // 0x80229B6C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229B6C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80229B70: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229B74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229B78: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229B7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B80: bne         $v0, $zero, L_80229BE4
    if (ctx->r2 != 0) {
        // 0x80229B84: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229BE4;
    }
    // 0x80229B84: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229B88: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x80229B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B90: beq         $v1, $zero, L_80229BD4
    if (ctx->r3 == 0) {
        // 0x80229B94: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80229BD4;
    }
    // 0x80229B94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229B98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229B9C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80229BA0: jal         0x8009A3B4
    // 0x80229BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229BA8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80229BAC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80229BB0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80229BB4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80229BB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229BBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229BC0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229BC4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80229BC8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80229BCC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80229BD0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80229BD4:
    // 0x80229BD4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80229BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229BE0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80229BE4:
    // 0x80229BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229BE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229BEC: jr          $ra
    // 0x80229BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D9D4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D9D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D9D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D9DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D9E0: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x8022D9E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D9E8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D9EC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022D9F0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D9F4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D9F8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D9FC: jal         0x800540D0
    // 0x8022DA00: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022DA00: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    after_0:
    // 0x8022DA04: bne         $v0, $zero, L_8022DA18
    if (ctx->r2 != 0) {
        // 0x8022DA08: nop
    
            goto L_8022DA18;
    }
    // 0x8022DA08: nop

    // 0x8022DA0C: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022DA10: j           L_8022DA20
    // 0x8022DA14: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022DA20;
    // 0x8022DA14: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022DA18:
    // 0x8022DA18: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022DA1C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8022DA20:
    // 0x8022DA20: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
    // 0x8022DA24: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x8022DA28: beq         $v0, $zero, L_8022DA34
    if (ctx->r2 == 0) {
        // 0x8022DA2C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022DA34;
    }
    // 0x8022DA2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA30: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
L_8022DA34:
    // 0x8022DA34: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8022DA38: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022DA3C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022DA40: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022DA44: beq         $a0, $zero, L_8022DB88
    if (ctx->r4 == 0) {
        // 0x8022DA48: nop
    
            goto L_8022DB88;
    }
    // 0x8022DA48: nop

    // 0x8022DA4C: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022DA50: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022DA54: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022DA58: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022DA5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA60: bgtz        $v0, L_8022DA80
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022DA64: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022DA80;
    }
    // 0x8022DA64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022DA68: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022DA6C: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022DA70: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x8022DA74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DA78: j           L_8022DB88
    // 0x8022DA7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DB88;
    // 0x8022DA7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022DA80:
    // 0x8022DA80: lb          $v0, 0x76($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X76);
    // 0x8022DA84: beq         $v0, $zero, L_8022DA98
    if (ctx->r2 == 0) {
        // 0x8022DA88: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA98;
    }
    // 0x8022DA88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DA8C: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x8022DA90: xor         $v0, $v0, $s0
    ctx->r2 = ctx->r2 ^ ctx->r16;
    // 0x8022DA94: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8022DA98:
    // 0x8022DA98: bnel        $v0, $zero, L_8022DB78
    if (ctx->r2 != 0) {
        // 0x8022DA9C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022DB78;
    }
    goto skip_0;
    // 0x8022DA9C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_0:
    // 0x8022DAA0: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x8022DAA4: lbu         $a1, 0x4A($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022DAA8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022DAAC: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x8022DAB0: bne         $v0, $zero, L_8022DB74
    if (ctx->r2 != 0) {
        // 0x8022DAB4: sh          $a0, 0x40($s1)
        MEM_H(0X40, ctx->r17) = ctx->r4;
            goto L_8022DB74;
    }
    // 0x8022DAB4: sh          $a0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r4;
    // 0x8022DAB8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DABC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022DAC0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022DAC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DAC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DACC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022DAD0: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022DAD4: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8022DAD8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022DADC: bne         $v0, $zero, L_8022DB78
    if (ctx->r2 != 0) {
        // 0x8022DAE0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022DB78;
    }
    // 0x8022DAE0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022DAE4: ori         $v0, $a1, 0x4
    ctx->r2 = ctx->r5 | 0X4;
    // 0x8022DAE8: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x8022DAEC: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x8022DAF0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DAF4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DAF8: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x8022DAFC: sb          $v0, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r2;
    // 0x8022DB00: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022DB04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022DB08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DB0C: jal         0x8004FEA0
    // 0x8022DB10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8022DB10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DB14: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x8022DB18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB1C: beq         $v1, $v0, L_8022DB58
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB20: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DB58;
    }
    // 0x8022DB20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB24: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8022DB28: bne         $v0, $zero, L_8022DB44
    if (ctx->r2 != 0) {
        // 0x8022DB2C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022DB44;
    }
    // 0x8022DB2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DB30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DB34: beq         $v1, $v0, L_8022DB64
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DB64;
    }
    // 0x8022DB38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB3C: j           L_8022DB78
    // 0x8022DB40: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8022DB78;
    // 0x8022DB40: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022DB44:
    // 0x8022DB44: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022DB48: sb          $v0, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = ctx->r2;
    // 0x8022DB4C: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022DB50: j           L_8022DB6C
    // 0x8022DB54: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022DB6C;
    // 0x8022DB54: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022DB58:
    // 0x8022DB58: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DB5C: j           L_8022DB68
    // 0x8022DB60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022DB68;
    // 0x8022DB60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022DB64:
    // 0x8022DB64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DB68:
    // 0x8022DB68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022DB6C:
    // 0x8022DB6C: j           L_8022DB78
    // 0x8022DB70: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8022DB78;
    // 0x8022DB70: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022DB74:
    // 0x8022DB74: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022DB78:
    // 0x8022DB78: jal         0x8002A33C
    // 0x8022DB7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022DB7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022DB80: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022DB84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022DB88:
    // 0x8022DB88: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022DB8C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8022DB90: bne         $v0, $zero, L_8022DBB4
    if (ctx->r2 != 0) {
        // 0x8022DB94: nop
    
            goto L_8022DBB4;
    }
    // 0x8022DB94: nop

    // 0x8022DB98: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DB9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DBA0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DBA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DBA8: lw          $v0, -0x69C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69C8);
    // 0x8022DBAC: jalr        $v0
    // 0x8022DBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022DBB4:
    // 0x8022DBB4: jal         0x800504EC
    // 0x8022DBB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x8022DBB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022DBBC: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8022DBC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022DBC4: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x8022DBC8: jal         0x80051248
    // 0x8022DBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022DBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022DBD0: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022DBD4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022DBD8: beq         $v0, $zero, L_8022DBF4
    if (ctx->r2 == 0) {
        // 0x8022DBDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DBF4;
    }
    // 0x8022DBDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DBE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DBE4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DBE8: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8022DBEC: jal         0x80047284
    // 0x8022DBF0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022DBF0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_6:
L_8022DBF4:
    // 0x8022DBF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DBF8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DBFC: beq         $v0, $zero, L_8022DC14
    if (ctx->r2 == 0) {
        // 0x8022DC00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC14;
    }
    // 0x8022DC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC04: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022DC08: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022DC0C: jal         0x8003B564
    // 0x8022DC10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022DC10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022DC14:
    // 0x8022DC14: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022DC18: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022DC1C: beq         $v0, $zero, L_8022DC7C
    if (ctx->r2 == 0) {
        // 0x8022DC20: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DC7C;
    }
    // 0x8022DC20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DC24: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8022DC28: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022DC2C: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x8022DC30: addiu       $v0, $v0, -0x8C
    ctx->r2 = ADD32(ctx->r2, -0X8C);
    // 0x8022DC34: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022DC38: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x8022DC3C: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x8022DC40: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022DC44: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022DC48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DC4C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8022DC50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DC54: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022DC58: lhu         $v1, 0x42($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X42);
    // 0x8022DC5C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022DC60: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022DC64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022DC68: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022DC6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022DC70: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DC74: jal         0x80051E18
    // 0x8022DC78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x8022DC78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_8:
L_8022DC7C:
    // 0x8022DC7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022DC80: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022DC84: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DC88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DC8C: jr          $ra
    // 0x8022DC90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DC90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C2F8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2F8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022C2FC: beq         $a1, $zero, L_8022C310
    if (ctx->r5 == 0) {
        // 0x8022C300: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022C310;
    }
    // 0x8022C300: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C304: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022C308: j           L_8022C318
    // 0x8022C30C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_8022C318;
    // 0x8022C30C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_8022C310:
    // 0x8022C310: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x8022C314: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_8022C318:
    // 0x8022C318: jr          $ra
    // 0x8022C31C: nop

    TRACE_RETURN()
    return;
    // 0x8022C31C: nop

;}
RECOMP_FUNC void func_80225568_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022556C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225570: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225578: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022557C: bne         $v0, $zero, L_80225598
    if (ctx->r2 != 0) {
        // 0x80225580: nop
    
            goto L_80225598;
    }
    // 0x80225580: nop

    // 0x80225584: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225588: jal         0x800607C4
    // 0x8022558C: addiu       $a0, $a0, -0x7CEC
    ctx->r4 = ADD32(ctx->r4, -0X7CEC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022558C: addiu       $a0, $a0, -0x7CEC
    ctx->r4 = ADD32(ctx->r4, -0X7CEC);
    after_0:
    // 0x80225590: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225594: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225598:
    // 0x80225598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022559C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255A0: jr          $ra
    // 0x802255A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AFD0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AFD0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AFD4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022AFD8: bne         $v0, $zero, L_8022B010
    if (ctx->r2 != 0) {
        // 0x8022AFDC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022B010;
    }
    // 0x8022AFDC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022AFE0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022AFE4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022AFE8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022AFEC: beq         $v1, $zero, L_8022AFFC
    if (ctx->r3 == 0) {
        // 0x8022AFF0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022AFFC;
    }
    // 0x8022AFF0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022AFF4: j           L_8022B000
    // 0x8022AFF8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022B000;
    // 0x8022AFF8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022AFFC:
    // 0x8022AFFC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022B000:
    // 0x8022B000: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022B004: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022B008: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B00C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022B010:
    // 0x8022B010: jr          $ra
    // 0x8022B014: nop

    TRACE_RETURN()
    return;
    // 0x8022B014: nop

;}
RECOMP_FUNC void func_802349E0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802349E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802349E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802349E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802349EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802349F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802349F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802349F8: beq         $v0, $zero, L_80234A10
    if (ctx->r2 == 0) {
        // 0x802349FC: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80234A10;
    }
    // 0x802349FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234A00: jal         0x802350AC
    // 0x80234A04: nop

    func_802350AC_ovl13(rdram, ctx);
        goto after_0;
    // 0x80234A04: nop

    after_0:
    // 0x80234A08: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80234A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80234A10:
    // 0x80234A10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234A14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234A18: lw          $v0, -0x6634($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6634);
    // 0x80234A1C: jalr        $v0
    // 0x80234A20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80234A20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80234A24: jal         0x8023515C
    // 0x80234A28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023515C_ovl13(rdram, ctx);
        goto after_2;
    // 0x80234A28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80234A2C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80234A30: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80234A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234A38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234A3C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234A40: lw          $v0, 0xD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD0);
    // 0x80234A44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234A48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234A4C: jal         0x8009A3B4
    // 0x80234A50: sw          $v0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234A50: sw          $v0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r2;
    after_3:
    // 0x80234A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234A58: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80234A5C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80234A60: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234A64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234A68: addiu       $v0, $v0, 0x320
    ctx->r2 = ADD32(ctx->r2, 0X320);
    // 0x80234A6C: jal         0x8003B6B8
    // 0x80234A70: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_4;
    // 0x80234A70: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_4:
    // 0x80234A74: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80234A78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234A80: jr          $ra
    // 0x80234A84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234A84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237270_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237270: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237274: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80237278: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023727C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80237280: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237284: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80237288: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023728C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80237290: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237294: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80237298: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023729C: beq         $v0, $zero, L_802374EC
    if (ctx->r2 == 0) {
        // 0x802372A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802374EC;
    }
    // 0x802372A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802372A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802372A8: addu        $at, $at, $v0
    gpr jr_addend_802372B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802372AC: lw          $v0, -0x6280($at)
    ctx->r2 = ADD32(ctx->r1, -0X6280);
    // 0x802372B0: jr          $v0
    // 0x802372B4: nop

    switch (jr_addend_802372B0 >> 2) {
        case 0: goto L_802372B8; break;
        case 1: goto L_802372FC; break;
        case 2: goto L_802373AC; break;
        case 3: goto L_802373FC; break;
        case 4: goto L_8023749C; break;
        default: switch_error(__func__, 0x802372B0, 0x80239D80);
    }
    // 0x802372B4: nop

L_802372B8:
    // 0x802372B8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802372BC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802372C0: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802372C4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802372C8: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802372CC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802372D0: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802372D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802372D8: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802372DC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802372E0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802372E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802372E8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802372EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802372F0: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x802372F4: j           L_802374EC
    // 0x802372F8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_802374EC;
    // 0x802372F8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802372FC:
    // 0x802372FC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80237300: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80237304: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80237308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023730C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237310: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237314: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80237318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023731C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80237320: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80237324: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80237328: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023732C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80237330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237334: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80237338: beq         $a0, $v0, L_80237380
    if (ctx->r4 == ctx->r2) {
        // 0x8023733C: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80237380;
    }
    // 0x8023733C: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x80237340: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80237344: beql        $v0, $zero, L_8023735C
    if (ctx->r2 == 0) {
        // 0x80237348: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023735C;
    }
    goto skip_0;
    // 0x80237348: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023734C: beq         $a0, $zero, L_8023736C
    if (ctx->r4 == 0) {
        // 0x80237350: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023736C;
    }
    // 0x80237350: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237354: j           L_802374EC
    // 0x80237358: nop

        goto L_802374EC;
    // 0x80237358: nop

L_8023735C:
    // 0x8023735C: beq         $a0, $v0, L_80237398
    if (ctx->r4 == ctx->r2) {
        // 0x80237360: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80237398;
    }
    // 0x80237360: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237364: j           L_802374EC
    // 0x80237368: nop

        goto L_802374EC;
    // 0x80237368: nop

L_8023736C:
    // 0x8023736C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80237370: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80237374: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80237378: j           L_802374EC
    // 0x8023737C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802374EC;
    // 0x8023737C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80237380:
    // 0x80237380: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237384: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80237388: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023738C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80237390: j           L_802374EC
    // 0x80237394: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802374EC;
    // 0x80237394: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80237398:
    // 0x80237398: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023739C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x802373A0: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x802373A4: j           L_802374EC
    // 0x802373A8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_802374EC;
    // 0x802373A8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_802373AC:
    // 0x802373AC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x802373B0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802373B4: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x802373B8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802373BC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x802373C0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802373C4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802373C8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802373CC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802373D0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802373D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802373D8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802373DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802373E0: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x802373E4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802373E8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802373EC: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x802373F0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802373F4: j           L_802374EC
    // 0x802373F8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_802374EC;
    // 0x802373F8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_802373FC:
    // 0x802373FC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80237400: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80237404: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80237408: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023740C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80237410: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237414: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237418: addiu       $a1, $a1, -0x6288
    ctx->r5 = ADD32(ctx->r5, -0X6288);
    // 0x8023741C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80237420: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80237424: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80237428: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023742C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80237430: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80237434: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237438: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023743C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80237440: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80237444: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80237448: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8023744C: jal         0x8009A3B4
    // 0x80237450: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237450: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80237454: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80237458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023745C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237460: addiu       $a1, $a1, -0x6284
    ctx->r5 = ADD32(ctx->r5, -0X6284);
    // 0x80237464: jal         0x8009A3B4
    // 0x80237468: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237468: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8023746C: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80237470: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80237474: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80237478: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023747C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80237480: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237484: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80237488: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023748C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80237490: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80237494: j           L_802374EC
    // 0x80237498: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_802374EC;
    // 0x80237498: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8023749C:
    // 0x8023749C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x802374A0: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x802374A4: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x802374A8: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x802374AC: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x802374B0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802374B4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802374B8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802374BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802374C0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802374C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802374C8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802374CC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802374D0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x802374D4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802374D8: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x802374DC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x802374E0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802374E4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802374E8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_802374EC:
    // 0x802374EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802374F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802374F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802374F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802374FC: jr          $ra
    // 0x80237500: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237500: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
