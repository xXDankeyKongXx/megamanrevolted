#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80231C78_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C78: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80231C7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231C80: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80231C84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231C88: bne         $v0, $zero, L_80231C94
    if (ctx->r2 != 0) {
        // 0x80231C8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231C94;
    }
    // 0x80231C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231C90: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80231C94:
    // 0x80231C94: jr          $ra
    // 0x80231C98: nop

    TRACE_RETURN()
    return;
    // 0x80231C98: nop

;}
RECOMP_FUNC void func_8023B6DC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B6DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B6E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B6E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B6EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B6F0: bne         $v0, $zero, L_8023B710
    if (ctx->r2 != 0) {
        // 0x8023B6F4: addiu       $a1, $zero, 0x11
        ctx->r5 = ADD32(0, 0X11);
            goto L_8023B710;
    }
    // 0x8023B6F4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8023B6F8: jal         0x80050294
    // 0x8023B6FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023B6FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023B700: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B704: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B708: j           L_8023B718
    // 0x8023B70C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023B718;
    // 0x8023B70C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B710:
    // 0x8023B710: jal         0x8005044C
    // 0x8023B714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023B714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B718:
    // 0x8023B718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B71C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B720: jr          $ra
    // 0x8023B724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243BAC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243BAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80243BB0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80243BB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80243BB8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80243BBC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80243BC0: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x80243BC4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80243BC8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80243BCC: beq         $v0, $zero, L_80243C24
    if (ctx->r2 == 0) {
        // 0x80243BD0: nop
    
            goto L_80243C24;
    }
    // 0x80243BD0: nop

    // 0x80243BD4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80243BD8: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80243BDC: jal         0x800324B4
    // 0x80243BE0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80243BE0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80243BE4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243BE8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80243BEC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80243BF0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80243BF4: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80243BF8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80243BFC: jal         0x80032498
    // 0x80243C00: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80243C00: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80243C04: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80243C08: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80243C0C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80243C10: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80243C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243C18: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80243C1C: j           L_80243C54
    // 0x80243C20: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_80243C54;
    // 0x80243C20: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80243C24:
    // 0x80243C24: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80243C28: beq         $v0, $zero, L_80243C44
    if (ctx->r2 == 0) {
        // 0x80243C2C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80243C44;
    }
    // 0x80243C2C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80243C30: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80243C34: beq         $v0, $zero, L_80243C54
    if (ctx->r2 == 0) {
        // 0x80243C38: nop
    
            goto L_80243C54;
    }
    // 0x80243C38: nop

    // 0x80243C3C: j           L_80243C70
    // 0x80243C40: nop

        goto L_80243C70;
    // 0x80243C40: nop

L_80243C44:
    // 0x80243C44: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80243C48: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80243C4C: bne         $v0, $zero, L_80243C70
    if (ctx->r2 != 0) {
        // 0x80243C50: nop
    
            goto L_80243C70;
    }
    // 0x80243C50: nop

L_80243C54:
    // 0x80243C54: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80243C58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80243C5C: bne         $v0, $zero, L_80243C9C
    if (ctx->r2 != 0) {
        // 0x80243C60: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_80243C9C;
    }
    // 0x80243C60: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80243C64: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80243C68: beq         $v0, $zero, L_80243CA4
    if (ctx->r2 == 0) {
        // 0x80243C6C: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80243CA4;
    }
    // 0x80243C6C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80243C70:
    // 0x80243C70: jal         0x8004F144
    // 0x80243C74: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80243C74: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x80243C78: beq         $v0, $zero, L_80243C88
    if (ctx->r2 == 0) {
        // 0x80243C7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80243C88;
    }
    // 0x80243C7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243C80: jal         0x802444F0
    // 0x80243C84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802444F0_ovl10(rdram, ctx);
        goto after_3;
    // 0x80243C84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_80243C88:
    // 0x80243C88: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80243C8C: jal         0x8004F4F8
    // 0x80243C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x80243C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80243C94: j           L_80243DBC
    // 0x80243C98: nop

        goto L_80243DBC;
    // 0x80243C98: nop

L_80243C9C:
    // 0x80243C9C: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x80243CA0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80243CA4:
    // 0x80243CA4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80243CA8: jal         0x8009A3B4
    // 0x80243CAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80243CAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80243CB0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80243CB4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80243CB8: jal         0x8009A3B4
    // 0x80243CBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80243CBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80243CC0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80243CC4: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80243CC8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80243CCC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80243CD0: beq         $v0, $zero, L_80243D0C
    if (ctx->r2 == 0) {
        // 0x80243CD4: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_80243D0C;
    }
    // 0x80243CD4: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80243CD8: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80243CDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243CE0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243CE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243CE8: lhu         $v1, 0x2048($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2048);
    // 0x80243CEC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80243CF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243CF4: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80243CF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243CFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243D00: lhu         $v0, 0x204A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X204A);
    // 0x80243D04: j           L_80243D3C
    // 0x80243D08: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_80243D3C;
    // 0x80243D08: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80243D0C:
    // 0x80243D0C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80243D10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243D14: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243D18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243D1C: lhu         $v1, 0x2030($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2030);
    // 0x80243D20: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80243D24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243D28: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80243D2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243D30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243D34: lhu         $v0, 0x2032($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2032);
    // 0x80243D38: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80243D3C:
    // 0x80243D3C: jal         0x80244400
    // 0x80243D40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80244400_ovl10(rdram, ctx);
        goto after_7;
    // 0x80243D40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80243D44: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80243D48: jal         0x8004DD04
    // 0x80243D4C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80243D4C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x80243D50: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80243D54: jal         0x8004DD04
    // 0x80243D58: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80243D58: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x80243D5C: jal         0x80244248
    // 0x80243D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80244248_ovl10(rdram, ctx);
        goto after_10;
    // 0x80243D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80243D64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243D68: beq         $v0, $zero, L_80243D78
    if (ctx->r2 == 0) {
        // 0x80243D6C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80243D78;
    }
    // 0x80243D6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80243D70: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80243D74: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80243D78:
    // 0x80243D78: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80243D7C: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80243D80: bne         $v0, $zero, L_80243D98
    if (ctx->r2 != 0) {
        // 0x80243D84: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80243D98;
    }
    // 0x80243D84: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80243D88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80243D8C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80243D90: j           L_80243D9C
    // 0x80243D94: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_80243D9C;
    // 0x80243D94: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80243D98:
    // 0x80243D98: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80243D9C:
    // 0x80243D9C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80243DA0: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80243DA4: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80243DA8: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80243DAC: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80243DB0: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80243DB4: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80243DB8: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_80243DBC:
    // 0x80243DBC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80243DC0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80243DC4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80243DC8: jr          $ra
    // 0x80243DCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80243DCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022CF68_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CF6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CF78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CF7C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF80: beq         $v1, $zero, L_8022CF9C
    if (ctx->r3 == 0) {
        // 0x8022CF84: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CF9C;
    }
    // 0x8022CF84: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF8C: beq         $v1, $v0, L_8022CFAC
    if (ctx->r3 == ctx->r2) {
        // 0x8022CF90: nop
    
            goto L_8022CFAC;
    }
    // 0x8022CF90: nop

    // 0x8022CF94: j           L_8022D028
    // 0x8022CF98: nop

        goto L_8022D028;
    // 0x8022CF98: nop

L_8022CF9C:
    // 0x8022CF9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CFA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CFA8: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022CFAC:
    // 0x8022CFAC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CFB0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022CFB4: beq         $v0, $zero, L_8022CFDC
    if (ctx->r2 == 0) {
        // 0x8022CFB8: nop
    
            goto L_8022CFDC;
    }
    // 0x8022CFB8: nop

    // 0x8022CFBC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022CFC0: bne         $v0, $zero, L_8022CFDC
    if (ctx->r2 != 0) {
        // 0x8022CFC4: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_8022CFDC;
    }
    // 0x8022CFC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CFC8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CFCC: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CFD0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CFD4: j           L_8022CFF0
    // 0x8022CFD8: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
        goto L_8022CFF0;
    // 0x8022CFD8: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
L_8022CFDC:
    // 0x8022CFDC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CFE0: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CFE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CFE8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022CFEC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
L_8022CFF0:
    // 0x8022CFF0: jal         0x8004F820
    // 0x8022CFF4: nop

    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CFF4: nop

    after_0:
    // 0x8022CFF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CFFC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D000: bne         $v0, $zero, L_8022D018
    if (ctx->r2 != 0) {
        // 0x8022D004: nop
    
            goto L_8022D018;
    }
    // 0x8022D004: nop

    // 0x8022D008: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D00C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D010: j           L_8022D028
    // 0x8022D014: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022D028;
    // 0x8022D014: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D018:
    // 0x8022D018: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D01C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D020: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D024: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D028:
    // 0x8022D028: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D02C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D034: jr          $ra
    // 0x8022D038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80247DA0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247DA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247DA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247DAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247DB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247DB4: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80247DB8: beq         $v0, $zero, L_80247E38
    if (ctx->r2 == 0) {
        // 0x80247DBC: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80247E38;
    }
    // 0x80247DBC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247DC0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80247DC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247DC8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80247DCC: jal         0x8002C654
    // 0x80247DD0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80247DD0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80247DD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247DD8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80247DDC: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    // 0x80247DE0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80247DE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247DE8: sw          $v0, 0x3558($at)
    MEM_W(0X3558, ctx->r1) = ctx->r2;
    // 0x80247DEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247DF0: sw          $v0, 0x3554($at)
    MEM_W(0X3554, ctx->r1) = ctx->r2;
    // 0x80247DF4: jal         0x80031DA8
    // 0x80247DF8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80247DF8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    after_1:
    // 0x80247DFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247E00: jal         0x8004D5D4
    // 0x80247E04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80247E04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80247E08: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247E0C: sh          $zero, 0x3560($at)
    MEM_H(0X3560, ctx->r1) = 0;
    // 0x80247E10: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80247E14: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80247E18: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80247E1C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80247E20: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80247E24: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80247E28: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x80247E2C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80247E30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80247E34: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_80247E38:
    // 0x80247E38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247E3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247E44: jr          $ra
    // 0x80247E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C374_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C374: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C378: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C37C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C380: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C384: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C388: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C38C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022C390: beq         $v0, $zero, L_8022C3A0
    if (ctx->r2 == 0) {
        // 0x8022C394: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C3A0;
    }
    // 0x8022C394: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C398: jal         0x8022E2D8
    // 0x8022C39C: nop

    func_8022E2D8_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022C39C: nop

    after_0:
L_8022C3A0:
    // 0x8022C3A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C3A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C3A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022C3AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C3B0: lw          $v0, 0x89C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X89C);
    // 0x8022C3B4: jalr        $v0
    // 0x8022C3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022C3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C3BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C3C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C3C4: beq         $v0, $zero, L_8022C4E8
    if (ctx->r2 == 0) {
        // 0x8022C3C8: nop
    
            goto L_8022C4E8;
    }
    // 0x8022C3C8: nop

    // 0x8022C3CC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C3D0: addiu       $v1, $v0, -0x5
    ctx->r3 = ADD32(ctx->r2, -0X5);
    // 0x8022C3D4: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8022C3D8: beq         $v0, $zero, L_8022C474
    if (ctx->r2 == 0) {
        // 0x8022C3DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C474;
    }
    // 0x8022C3DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C3E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022C3E4: addu        $at, $at, $v0
    gpr jr_addend_8022C3EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C3E8: lw          $v0, 0x2D78($at)
    ctx->r2 = ADD32(ctx->r1, 0X2D78);
    // 0x8022C3EC: jr          $v0
    // 0x8022C3F0: nop

    switch (jr_addend_8022C3EC >> 2) {
        case 0: goto L_8022C404; break;
        case 1: goto L_8022C404; break;
        case 2: goto L_8022C404; break;
        case 3: goto L_8022C3F4; break;
        case 4: goto L_8022C428; break;
        case 5: goto L_8022C428; break;
        case 6: goto L_8022C428; break;
        case 7: goto L_8022C474; break;
        case 8: goto L_8022C45C; break;
        case 9: goto L_8022C45C; break;
        default: switch_error(__func__, 0x8022C3EC, 0x80252D78);
    }
    // 0x8022C3F0: nop

L_8022C3F4:
    // 0x8022C3F4: jal         0x8004F418
    // 0x8022C3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022C3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C3FC: j           L_8022C4DC
    // 0x8022C400: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022C4DC;
    // 0x8022C400: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C404:
    // 0x8022C404: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C408: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022C40C: beq         $v0, $zero, L_8022C4AC
    if (ctx->r2 == 0) {
        // 0x8022C410: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C4AC;
    }
    // 0x8022C410: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C414: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022C418: beq         $v0, $zero, L_8022C4A4
    if (ctx->r2 == 0) {
        // 0x8022C41C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C4A4;
    }
    // 0x8022C41C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C420: j           L_8022C4AC
    // 0x8022C424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C4AC;
    // 0x8022C424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C428:
    // 0x8022C428: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C42C: blez        $v0, L_8022C444
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022C430: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8022C444;
    }
    // 0x8022C430: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C434: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022C438: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C43C: j           L_8022C4D8
    // 0x8022C440: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C4D8;
    // 0x8022C440: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C444:
    // 0x8022C444: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C448: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022C44C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022C450: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C454: j           L_8022C4D8
    // 0x8022C458: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C4D8;
    // 0x8022C458: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C45C:
    // 0x8022C45C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022C460: beq         $v0, $zero, L_8022C474
    if (ctx->r2 == 0) {
        // 0x8022C464: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C474;
    }
    // 0x8022C464: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C468: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C46C: j           L_8022C4D8
    // 0x8022C470: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022C4D8;
    // 0x8022C470: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C474:
    // 0x8022C474: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C478: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C47C: beq         $v0, $zero, L_8022C4B4
    if (ctx->r2 == 0) {
        // 0x8022C480: nop
    
            goto L_8022C4B4;
    }
    // 0x8022C480: nop

    // 0x8022C484: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C488: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022C48C: beq         $v0, $zero, L_8022C4AC
    if (ctx->r2 == 0) {
        // 0x8022C490: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C4AC;
    }
    // 0x8022C490: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C494: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022C498: bne         $v0, $zero, L_8022C4AC
    if (ctx->r2 != 0) {
        // 0x8022C49C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C4AC;
    }
    // 0x8022C49C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C4A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022C4A4:
    // 0x8022C4A4: j           L_8022C4D8
    // 0x8022C4A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C4D8;
    // 0x8022C4A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C4AC:
    // 0x8022C4AC: j           L_8022C4D8
    // 0x8022C4B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C4D8;
    // 0x8022C4B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C4B4:
    // 0x8022C4B4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C4B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C4BC: beq         $v0, $zero, L_8022C4CC
    if (ctx->r2 == 0) {
        // 0x8022C4C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C4CC;
    }
    // 0x8022C4C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C4C4: j           L_8022C4D8
    // 0x8022C4C8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C4D8;
    // 0x8022C4C8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C4CC:
    // 0x8022C4CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C4D0: jal         0x8022E1E8
    // 0x8022C4D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E1E8_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022C4D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022C4D8:
    // 0x8022C4D8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C4DC:
    // 0x8022C4DC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C4E0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022C4E4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C4E8:
    // 0x8022C4E8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022C4EC: beq         $v0, $zero, L_8022C54C
    if (ctx->r2 == 0) {
        // 0x8022C4F0: nop
    
            goto L_8022C54C;
    }
    // 0x8022C4F0: nop

    // 0x8022C4F4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C4F8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C4FC: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8022C500: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C504: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C508: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022C50C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8022C510: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C514: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C518: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022C51C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C520: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022C524: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C528: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C52C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C530: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022C534: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C538: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022C53C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C540: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022C544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C548: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8022C54C:
    // 0x8022C54C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022C550: beq         $v0, $zero, L_8022C560
    if (ctx->r2 == 0) {
        // 0x8022C554: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C560;
    }
    // 0x8022C554: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C558: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C55C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022C560:
    // 0x8022C560: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C564: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C568: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C56C: jr          $ra
    // 0x8022C570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227CC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CC0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227CC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CC8: sh          $zero, 0x3384($at)
    MEM_H(0X3384, ctx->r1) = 0;
    // 0x80227CCC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CD0: sh          $zero, 0x3382($at)
    MEM_H(0X3382, ctx->r1) = 0;
    // 0x80227CD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CD8: sh          $zero, 0x3380($at)
    MEM_H(0X3380, ctx->r1) = 0;
    // 0x80227CDC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CE0: sh          $zero, 0x338A($at)
    MEM_H(0X338A, ctx->r1) = 0;
    // 0x80227CE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CE8: sh          $zero, 0x3388($at)
    MEM_H(0X3388, ctx->r1) = 0;
    // 0x80227CEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227CF0: sh          $zero, 0x3386($at)
    MEM_H(0X3386, ctx->r1) = 0;
    // 0x80227CF4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227CF8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227CFC: lw          $v0, -0xDAC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XDAC);
    // 0x80227D00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D04: sw          $v0, 0x338C($at)
    MEM_W(0X338C, ctx->r1) = ctx->r2;
    // 0x80227D08: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227D0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227D10: lw          $v0, -0xDA0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XDA0);
    // 0x80227D14: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D18: jr          $ra
    // 0x80227D1C: sw          $v0, 0x3390($at)
    MEM_W(0X3390, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80227D1C: sw          $v0, 0x3390($at)
    MEM_W(0X3390, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_802478E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802478E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802478E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802478E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802478EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802478F0: jal         0x80071A70
    // 0x802478F4: lui         $a0, 0x5
    ctx->r4 = S32(0X5 << 16);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x802478F4: lui         $a0, 0x5
    ctx->r4 = S32(0X5 << 16);
    after_0:
    // 0x802478F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802478FC: bne         $a1, $zero, L_80247914
    if (ctx->r5 != 0) {
        // 0x80247900: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_80247914;
    }
    // 0x80247900: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80247904: jal         0x8004F62C
    // 0x80247908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80247908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024790C: j           L_80247958
    // 0x80247910: nop

        goto L_80247958;
    // 0x80247910: nop

L_80247914:
    // 0x80247914: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80247918: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8024791C: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x80247920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247924: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80247928: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x8024792C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80247930: lw          $a0, 0x1C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1C);
    // 0x80247934: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x80247938: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8024793C: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x80247940: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x80247944: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247948: sw          $v1, 0x3540($at)
    MEM_W(0X3540, ctx->r1) = ctx->r3;
    // 0x8024794C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247950: sw          $a0, 0x3544($at)
    MEM_W(0X3544, ctx->r1) = ctx->r4;
    // 0x80247954: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80247958:
    // 0x80247958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024795C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247960: jr          $ra
    // 0x80247964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237C2C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237C30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80237C34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237C38: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80237C3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80237C40: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80237C44: beq         $v1, $zero, L_80237C60
    if (ctx->r3 == 0) {
        // 0x80237C48: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80237C60;
    }
    // 0x80237C48: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80237C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C50: beq         $v1, $v0, L_80237CA0
    if (ctx->r3 == ctx->r2) {
        // 0x80237C54: nop
    
            goto L_80237CA0;
    }
    // 0x80237C54: nop

    // 0x80237C58: j           L_80237E24
    // 0x80237C5C: nop

        goto L_80237E24;
    // 0x80237C5C: nop

L_80237C60:
    // 0x80237C60: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237C64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237C68: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80237C6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237C70: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237C74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237C78: lhu         $v0, 0x1638($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1638);
    // 0x80237C7C: addiu       $a0, $s0, 0x32C
    ctx->r4 = ADD32(ctx->r16, 0X32C);
    // 0x80237C80: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80237C84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237C88: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237C8C: jal         0x800540B4
    // 0x80237C90: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x80237C90: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237C94: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80237C98: andi        $v0, $v0, 0xFEEF
    ctx->r2 = ctx->r2 & 0XFEEF;
    // 0x80237C9C: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80237CA0:
    // 0x80237CA0: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237CA4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80237CA8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80237CAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80237CB0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237CB4: mflo        $v0
    ctx->r2 = lo;
    // 0x80237CB8: lh          $a0, 0x6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6);
    // 0x80237CBC: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80237CC0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80237CC4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237CC8: mflo        $v1
    ctx->r3 = lo;
    // 0x80237CCC: lui         $a0, 0x1F
    ctx->r4 = S32(0X1F << 16);
    // 0x80237CD0: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80237CD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237CD8: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237CDC: bnel        $a0, $zero, L_80237D94
    if (ctx->r4 != 0) {
        // 0x80237CE0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80237D94;
    }
    goto skip_0;
    // 0x80237CE0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80237CE4: jal         0x80238C08
    // 0x80237CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238C08_ovl10(rdram, ctx);
        goto after_1;
    // 0x80237CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237CEC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80237CF0: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237CF4: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80237CF8: sw          $a0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r4;
    // 0x80237CFC: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237D00: sb          $v1, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r3;
    // 0x80237D04: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x80237D08: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80237D0C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80237D10: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80237D14: lb          $a2, 0xC($a0)
    ctx->r6 = MEM_B(ctx->r4, 0XC);
    // 0x80237D18: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80237D1C: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x80237D20: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80237D24: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80237D28: lw          $a0, 0x1624($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1624);
    // 0x80237D2C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80237D30: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80237D34: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80237D38: sw          $a0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r4;
    // 0x80237D3C: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80237D40: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80237D44: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x80237D48: sh          $v1, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r3;
    // 0x80237D4C: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80237D50: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x80237D54: lb          $v1, 0x4A($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4A);
    // 0x80237D58: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237D5C: beq         $v1, $v0, L_80237D80
    if (ctx->r3 == ctx->r2) {
        // 0x80237D60: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80237D80;
    }
    // 0x80237D60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80237D64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237D68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80237D6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80237D70: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80237D74: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80237D78: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80237D7C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80237D80:
    // 0x80237D80: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237D84: sb          $a0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r4;
    // 0x80237D88: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80237D8C: j           L_80237DB4
    // 0x80237D90: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80237DB4;
    // 0x80237D90: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80237D94:
    // 0x80237D94: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80237D98: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80237D9C: jal         0x8004F820
    // 0x80237DA0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80237DA0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80237DA4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80237DA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237DAC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80237DB0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80237DB4:
    // 0x80237DB4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237DB8: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80237DBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237DC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237DC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237DC8: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x80237DCC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80237DD0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237DD4: beql        $v1, $zero, L_80237DEC
    if (ctx->r3 == 0) {
        // 0x80237DD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237DEC;
    }
    goto skip_1;
    // 0x80237DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80237DDC: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80237DE0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80237DE4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80237DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237DEC:
    // 0x80237DEC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80237DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237DF4: jal         0x8004DA90
    // 0x80237DF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80237DF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80237DFC: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x80237E00: bne         $v0, $zero, L_80237E24
    if (ctx->r2 != 0) {
        // 0x80237E04: nop
    
            goto L_80237E24;
    }
    // 0x80237E04: nop

    // 0x80237E08: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80237E0C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80237E10: beq         $v0, $zero, L_80237E24
    if (ctx->r2 == 0) {
        // 0x80237E14: ori         $v0, $v1, 0x21
        ctx->r2 = ctx->r3 | 0X21;
            goto L_80237E24;
    }
    // 0x80237E14: ori         $v0, $v1, 0x21
    ctx->r2 = ctx->r3 | 0X21;
    // 0x80237E18: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80237E1C: jal         0x8023922C
    // 0x80237E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023922C_ovl10(rdram, ctx);
        goto after_4;
    // 0x80237E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80237E24:
    // 0x80237E24: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80237E28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80237E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237E30: jr          $ra
    // 0x80237E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80237E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231D30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231D34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231D38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231D40: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80231D44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231D48: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231D4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231D50: bne         $v0, $zero, L_80231DA4
    if (ctx->r2 != 0) {
        // 0x80231D54: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80231DA4;
    }
    // 0x80231D54: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80231D58: jal         0x80233334
    // 0x80231D5C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231D5C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80231D60: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231D64: beq         $v0, $zero, L_80231DA0
    if (ctx->r2 == 0) {
        // 0x80231D68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231DA0;
    }
    // 0x80231D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D6C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231D70: jal         0x802332A8
    // 0x80231D74: nop

    func_802332A8_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231D74: nop

    after_1:
    // 0x80231D78: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231D7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231D80: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80231D84: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231D88: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231D8C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231D90: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80231D94: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231D98: j           L_80231DA4
    // 0x80231D9C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80231DA4;
    // 0x80231D9C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80231DA0:
    // 0x80231DA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231DA4:
    // 0x80231DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231DA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231DAC: jr          $ra
    // 0x80231DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802466CC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802466CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802466D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802466D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802466D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802466DC: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x802466E0: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x802466E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802466E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802466EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802466F0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802466F4: slti        $v0, $v0, 0x301
    ctx->r2 = SIGNED(ctx->r2) < 0X301 ? 1 : 0;
    // 0x802466F8: bne         $v0, $zero, L_80246704
    if (ctx->r2 != 0) {
        // 0x802466FC: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80246704;
    }
    // 0x802466FC: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80246700: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80246704:
    // 0x80246704: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80246708: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024670C: addiu       $v0, $v0, 0x2168
    ctx->r2 = ADD32(ctx->r2, 0X2168);
    // 0x80246710: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80246714: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246718: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8024671C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80246720: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246728: lbu         $v0, 0x2150($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2150);
    // 0x8024672C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80246730: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80246734: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80246738: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024673C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246740: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246744: lbu         $v0, 0x2151($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2151);
    // 0x80246748: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024674C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80246750: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80246754: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80246758: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8024675C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80246760: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80246764: jal         0x8004F820
    // 0x80246768: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80246768: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8024676C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246770: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80246774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246778: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024677C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246780: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80246784: jal         0x80246874
    // 0x80246788: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80246874_ovl10(rdram, ctx);
        goto after_1;
    // 0x80246788: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024678C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246790: beq         $v0, $zero, L_8024679C
    if (ctx->r2 == 0) {
        // 0x80246794: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024679C;
    }
    // 0x80246794: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80246798: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024679C:
    // 0x8024679C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802467A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802467A4: jr          $ra
    // 0x802467A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802467A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225AC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225AC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225AD0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225AD4: bne         $v0, $zero, L_80225B38
    if (ctx->r2 != 0) {
        // 0x80225AD8: nop
    
            goto L_80225B38;
    }
    // 0x80225AD8: nop

    // 0x80225ADC: jal         0x8004F418
    // 0x80225AE0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225AE0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x80225AE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225AE8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80225AEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225AF0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225AF4: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225AF8: lui         $v0, 0x72C
    ctx->r2 = S32(0X72C << 16);
    // 0x80225AFC: sw          $v0, 0x428($v1)
    MEM_W(0X428, ctx->r3) = ctx->r2;
    // 0x80225B00: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225B04: sw          $v0, 0x42C($v1)
    MEM_W(0X42C, ctx->r3) = ctx->r2;
    // 0x80225B08: lui         $v0, 0x137B
    ctx->r2 = S32(0X137B << 16);
    // 0x80225B0C: sw          $v0, 0x430($v1)
    MEM_W(0X430, ctx->r3) = ctx->r2;
    // 0x80225B10: addiu       $v0, $zero, 0x72C
    ctx->r2 = ADD32(0, 0X72C);
    // 0x80225B14: sh          $v0, 0x438($v1)
    MEM_H(0X438, ctx->r3) = ctx->r2;
    // 0x80225B18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225B1C: sh          $v0, 0x43A($v1)
    MEM_H(0X43A, ctx->r3) = ctx->r2;
    // 0x80225B20: addiu       $v0, $zero, 0x137B
    ctx->r2 = ADD32(0, 0X137B);
    // 0x80225B24: sh          $v0, 0x43C($v1)
    MEM_H(0X43C, ctx->r3) = ctx->r2;
    // 0x80225B28: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80225B2C: sh          $v0, 0x442($v1)
    MEM_H(0X442, ctx->r3) = ctx->r2;
    // 0x80225B30: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225B34: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
L_80225B38:
    // 0x80225B38: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225B3C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80225B40: bne         $v1, $v0, L_80225B60
    if (ctx->r3 != ctx->r2) {
        // 0x80225B44: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225B60;
    }
    // 0x80225B44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225B48: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225B4C: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225B50: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225B54: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80225B58: jal         0x800616FC
    // 0x80225B5C: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80225B5C: sb          $v0, 0x448($v1)
    MEM_B(0X448, ctx->r3) = ctx->r2;
    after_1:
L_80225B60:
    // 0x80225B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B68: jr          $ra
    // 0x80225B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229DF4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229DF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229DFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E00: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229E04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E08: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80229E0C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80229E10: lw          $s1, 0x5604($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5604);
    // 0x80229E14: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229E18: beq         $v0, $zero, L_80229F18
    if (ctx->r2 == 0) {
        // 0x80229E1C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229F18;
    }
    // 0x80229E1C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229E20: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229E24: addu        $at, $at, $v0
    gpr jr_addend_80229E2C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229E28: lw          $v0, 0x2D18($at)
    ctx->r2 = ADD32(ctx->r1, 0X2D18);
    // 0x80229E2C: jr          $v0
    // 0x80229E30: nop

    switch (jr_addend_80229E2C >> 2) {
        case 0: goto L_80229E34; break;
        case 1: goto L_80229E64; break;
        case 2: goto L_80229E94; break;
        case 3: goto L_80229EC4; break;
        case 4: goto L_80229EF0; break;
        default: switch_error(__func__, 0x80229E2C, 0x80252D18);
    }
    // 0x80229E30: nop

L_80229E34:
    // 0x80229E34: jal         0x8006033C
    // 0x80229E38: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229E38: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x80229E3C: beq         $v0, $zero, L_80229F18
    if (ctx->r2 == 0) {
        // 0x80229E40: nop
    
            goto L_80229F18;
    }
    // 0x80229E40: nop

    // 0x80229E44: jal         0x80060590
    // 0x80229E48: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229E48: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x80229E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E50: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229E54: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80229E58: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229E5C: j           L_80229EBC
    // 0x80229E60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229EBC;
    // 0x80229E60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229E64:
    // 0x80229E64: jal         0x8006033C
    // 0x80229E68: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229E68: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_2:
    // 0x80229E6C: beq         $v0, $zero, L_80229F18
    if (ctx->r2 == 0) {
        // 0x80229E70: nop
    
            goto L_80229F18;
    }
    // 0x80229E70: nop

    // 0x80229E74: jal         0x80060590
    // 0x80229E78: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80229E78: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x80229E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E80: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229E84: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80229E88: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229E8C: j           L_80229EBC
    // 0x80229E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229EBC;
    // 0x80229E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229E94:
    // 0x80229E94: jal         0x8006033C
    // 0x80229E98: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80229E98: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_4:
    // 0x80229E9C: beq         $v0, $zero, L_80229F18
    if (ctx->r2 == 0) {
        // 0x80229EA0: nop
    
            goto L_80229F18;
    }
    // 0x80229EA0: nop

    // 0x80229EA4: jal         0x80060590
    // 0x80229EA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80229EA8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_5:
    // 0x80229EAC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229EB0: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80229EB4: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80229EB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229EBC:
    // 0x80229EBC: j           L_80229F18
    // 0x80229EC0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_80229F18;
    // 0x80229EC0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80229EC4:
    // 0x80229EC4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80229EC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229ECC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80229ED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229ED4: bne         $v0, $zero, L_80229EF0
    if (ctx->r2 != 0) {
        // 0x80229ED8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229EF0;
    }
    // 0x80229ED8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229EDC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229EE0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80229EE4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229EE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229EEC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80229EF0:
    // 0x80229EF0: jal         0x8006033C
    // 0x80229EF4: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229EF4: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_6:
    // 0x80229EF8: beq         $v0, $zero, L_80229F18
    if (ctx->r2 == 0) {
        // 0x80229EFC: nop
    
            goto L_80229F18;
    }
    // 0x80229EFC: nop

    // 0x80229F00: jal         0x8022A170
    // 0x80229F04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x80229F04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x80229F08: jal         0x8022A398
    // 0x80229F0C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A398_ovl10(rdram, ctx);
        goto after_8;
    // 0x80229F0C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x80229F10: jal         0x8006036C
    // 0x80229F14: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80229F14: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    after_9:
L_80229F18:
    // 0x80229F18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229F1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229F20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F24: jr          $ra
    // 0x80229F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802321E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802321E0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802321E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802321E8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802321EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802321F0: bne         $v0, $zero, L_802321FC
    if (ctx->r2 != 0) {
        // 0x802321F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802321FC;
    }
    // 0x802321F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802321F8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802321FC:
    // 0x802321FC: jr          $ra
    // 0x80232200: nop

    TRACE_RETURN()
    return;
    // 0x80232200: nop

;}
RECOMP_FUNC void func_8023CF30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CF34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CF38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CF3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023CF40: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023CF44: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8023CF48: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023CF4C: beq         $v0, $zero, L_8023CF64
    if (ctx->r2 == 0) {
        // 0x8023CF50: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8023CF64;
    }
    // 0x8023CF50: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8023CF54: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8023CF58: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023CF5C: jal         0x8003B564
    // 0x8023CF60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x8023CF60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8023CF64:
    // 0x8023CF64: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023CF68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CF6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CF70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CF74: lw          $v0, 0x1820($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1820);
    // 0x8023CF78: jalr        $v0
    // 0x8023CF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023CF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023CF80: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023CF84: beq         $v0, $zero, L_8023CF94
    if (ctx->r2 == 0) {
        // 0x8023CF88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023CF94;
    }
    // 0x8023CF88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CF8C: j           L_8023CF98
    // 0x8023CF90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_8023CF98;
    // 0x8023CF90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8023CF94:
    // 0x8023CF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023CF98:
    // 0x8023CF98: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023CF9C: jal         0x80047284
    // 0x8023CFA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8023CFA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8023CFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023CFA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CFAC: jr          $ra
    // 0x8023CFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802347BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802347BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802347C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802347C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802347C8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802347CC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802347D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802347D4: jal         0x8004DDE8
    // 0x802347D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x802347D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802347DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802347E0: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x802347E4: beq         $v0, $zero, L_80234828
    if (ctx->r2 == 0) {
        // 0x802347E8: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_80234828;
    }
    // 0x802347E8: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x802347EC: beq         $v0, $zero, L_80234808
    if (ctx->r2 == 0) {
        // 0x802347F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234808;
    }
    // 0x802347F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802347F4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802347F8: beq         $v1, $v0, L_80234868
    if (ctx->r3 == ctx->r2) {
        // 0x802347FC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234868;
    }
    // 0x802347FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234800: j           L_80234868
    // 0x80234804: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80234868;
    // 0x80234804: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80234808:
    // 0x80234808: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023480C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234810: beq         $v1, $v0, L_80234868
    if (ctx->r3 == ctx->r2) {
        // 0x80234814: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234868;
    }
    // 0x80234814: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234818: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023481C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234820: j           L_80234848
    // 0x80234824: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80234848;
    // 0x80234824: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80234828:
    // 0x80234828: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023482C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234830: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80234834: bne         $v0, $zero, L_80234868
    if (ctx->r2 != 0) {
        // 0x80234838: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234868;
    }
    // 0x80234838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023483C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80234848:
    // 0x80234848: jal         0x80050294
    // 0x8023484C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023484C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80234850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234854: jal         0x80234898
    // 0x80234858: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80234898_ovl10(rdram, ctx);
        goto after_2;
    // 0x80234858: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8023485C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234860: jal         0x80234878
    // 0x80234864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234878_ovl10(rdram, ctx);
        goto after_3;
    // 0x80234864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80234868:
    // 0x80234868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023486C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234870: jr          $ra
    // 0x80234874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231470_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231470: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80231474: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231478: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8023147C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231480: bne         $v0, $zero, L_8023148C
    if (ctx->r2 != 0) {
        // 0x80231484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023148C;
    }
    // 0x80231484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231488: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8023148C:
    // 0x8023148C: jr          $ra
    // 0x80231490: nop

    TRACE_RETURN()
    return;
    // 0x80231490: nop

;}
RECOMP_FUNC void func_8023A894_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A894: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023A898: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023A89C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A8A0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023A8A4: jal         0x8005044C
    // 0x8023A8A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023A8A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023A8AC: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8023A8B0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023A8B4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023A8B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A8BC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023A8C0: beq         $v1, $v0, L_8023A958
    if (ctx->r3 == ctx->r2) {
        // 0x8023A8C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023A958;
    }
    // 0x8023A8C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A8C8: beql        $v0, $zero, L_8023A8E0
    if (ctx->r2 == 0) {
        // 0x8023A8CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A8E0;
    }
    goto skip_0;
    // 0x8023A8CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A8D0: beq         $v1, $zero, L_8023A8F8
    if (ctx->r3 == 0) {
        // 0x8023A8D4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023A8F8;
    }
    // 0x8023A8D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023A8D8: j           L_8023AA38
    // 0x8023A8DC: nop

        goto L_8023AA38;
    // 0x8023A8DC: nop

L_8023A8E0:
    // 0x8023A8E0: beq         $v1, $v0, L_8023A980
    if (ctx->r3 == ctx->r2) {
        // 0x8023A8E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A980;
    }
    // 0x8023A8E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A8E8: beq         $v1, $v0, L_8023A9A8
    if (ctx->r3 == ctx->r2) {
        // 0x8023A8EC: nop
    
            goto L_8023A9A8;
    }
    // 0x8023A8EC: nop

    // 0x8023A8F0: j           L_8023AA38
    // 0x8023A8F4: nop

        goto L_8023AA38;
    // 0x8023A8F4: nop

L_8023A8F8:
    // 0x8023A8F8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023A8FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023A900: sb          $v0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r2;
    // 0x8023A904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A908: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023A90C: sb          $v0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r2;
    // 0x8023A910: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023A914: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8023A918: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x8023A91C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A920: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023A924: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x8023A928: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023A92C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8023A930: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023A934: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023A938: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023A93C: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x8023A940: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8023A944: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x8023A948: jal         0x80034FCC
    // 0x8023A94C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x8023A94C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8023A950: j           L_8023A970
    // 0x8023A954: nop

        goto L_8023A970;
    // 0x8023A954: nop

L_8023A958:
    // 0x8023A958: jal         0x8003516C
    // 0x8023A95C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_2;
    // 0x8023A95C: nop

    after_2:
    // 0x8023A960: bne         $v0, $zero, L_8023AA38
    if (ctx->r2 != 0) {
        // 0x8023A964: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023AA38;
    }
    // 0x8023A964: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A968: jal         0x800616FC
    // 0x8023A96C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8023A96C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
L_8023A970:
    // 0x8023A970: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023A974: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A978: j           L_8023AA38
    // 0x8023A97C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023AA38;
    // 0x8023A97C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023A980:
    // 0x8023A980: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A984: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A988: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A98C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A990: bne         $v0, $zero, L_8023AA38
    if (ctx->r2 != 0) {
        // 0x8023A994: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023AA38;
    }
    // 0x8023A994: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023A998: jal         0x80034E3C
    // 0x8023A99C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x8023A99C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023A9A0: j           L_8023AA38
    // 0x8023A9A4: nop

        goto L_8023AA38;
    // 0x8023A9A4: nop

L_8023A9A8:
    // 0x8023A9A8: jal         0x8003516C
    // 0x8023A9AC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x8023A9AC: nop

    after_5:
    // 0x8023A9B0: bne         $v0, $zero, L_8023AA38
    if (ctx->r2 != 0) {
        // 0x8023A9B4: nop
    
            goto L_8023AA38;
    }
    // 0x8023A9B4: nop

    // 0x8023A9B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023A9BC: lbu         $a0, 0x55F4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X55F4);
    // 0x8023A9C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A9C4: lbu         $a1, 0x55E4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X55E4);
    // 0x8023A9C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A9CC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8023A9D0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023A9D4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023A9D8: lw          $a2, 0x4354($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4354);
    // 0x8023A9DC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8023A9E0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023A9E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9E8: sb          $a0, 0x434A($at)
    MEM_B(0X434A, ctx->r1) = ctx->r4;
    // 0x8023A9EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9F0: sb          $a1, 0x434B($at)
    MEM_B(0X434B, ctx->r1) = ctx->r5;
    // 0x8023A9F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9F8: sw          $a2, 0x4378($at)
    MEM_W(0X4378, ctx->r1) = ctx->r6;
    // 0x8023A9FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AA00: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023AA04: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8023AA08: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023AA0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023AA10: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023AA14: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023AA18: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023AA1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AA20: lw          $v0, 0x173C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X173C);
    // 0x8023AA24: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023AA28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AA2C: sb          $zero, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = 0;
    // 0x8023AA30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AA34: sb          $zero, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = 0;
L_8023AA38:
    // 0x8023AA38: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023AA3C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023AA40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023AA44: jr          $ra
    // 0x8023AA48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023AA48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802332E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332E8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x802332EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802332F0: beq         $a1, $v0, L_8023331C
    if (ctx->r5 == ctx->r2) {
        // 0x802332F4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8023331C;
    }
    // 0x802332F4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802332F8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x802332FC: bne         $a0, $v0, L_8023330C
    if (ctx->r4 != ctx->r2) {
        // 0x80233300: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8023330C;
    }
    // 0x80233300: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80233304: j           L_8023332C
    // 0x80233308: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8023332C;
    // 0x80233308: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8023330C:
    // 0x8023330C: bne         $a0, $v1, L_8023332C
    if (ctx->r4 != ctx->r3) {
        // 0x80233310: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8023332C;
    }
    // 0x80233310: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80233314: j           L_8023332C
    // 0x80233318: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8023332C;
    // 0x80233318: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8023331C:
    // 0x8023331C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80233320: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233324: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233328: lbu         $v0, 0xED0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XED0);
L_8023332C:
    // 0x8023332C: jr          $ra
    // 0x80233330: nop

    TRACE_RETURN()
    return;
    // 0x80233330: nop

;}
RECOMP_FUNC void func_8024691C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024691C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246920: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80246924: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80246928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024692C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246930: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246934: lw          $v0, 0x2268($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2268);
    // 0x80246938: jalr        $v0
    // 0x8024693C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024693C: nop

    after_0:
    // 0x80246940: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80246944: jr          $ra
    // 0x80246948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233FC8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233FCC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233FD0: jal         0x8004F488
    // 0x80233FD4: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80233FD4: nop

    after_0:
    // 0x80233FD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233FDC: jr          $ra
    // 0x80233FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233FE4: nop

    // 0x80233FE8: nop

    // 0x80233FEC: nop

;}
RECOMP_FUNC void func_80244D00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244D00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80244D04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244D08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80244D0C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80244D10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244D14: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80244D18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244D20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80244D24: jal         0x8009A3B4
    // 0x80244D28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80244D28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80244D2C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80244D30: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80244D34: jal         0x8009A3B4
    // 0x80244D38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244D38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80244D3C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x80244D40: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x80244D44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244D48: jal         0x8009A3B4
    // 0x80244D4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80244D4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80244D50: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80244D54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80244D58: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244D5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80244D60: lw          $v0, 0x20B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X20B8);
    // 0x80244D64: jalr        $v0
    // 0x80244D68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80244D68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80244D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244D70: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80244D74: jal         0x80031600
    // 0x80244D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x80244D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80244D7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244D80: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80244D84: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80244D88: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80244D8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80244D90: jal         0x80031DA8
    // 0x80244D94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80244D94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x80244D98: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x80244D9C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244DA0: jal         0x8009A3B4
    // 0x80244DA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80244DA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80244DA8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80244DAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80244DB0: beq         $v0, $zero, L_80244DCC
    if (ctx->r2 == 0) {
        // 0x80244DB4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80244DCC;
    }
    // 0x80244DB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80244DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80244DBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80244DC0: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x80244DC4: jal         0x80047284
    // 0x80244DC8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80244DC8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_80244DCC:
    // 0x80244DCC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80244DD0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80244DD4: beq         $v0, $zero, L_80244DEC
    if (ctx->r2 == 0) {
        // 0x80244DD8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80244DEC;
    }
    // 0x80244DD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80244DDC: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x80244DE0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80244DE4: jal         0x8003B564
    // 0x80244DE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x80244DE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_80244DEC:
    // 0x80244DEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80244DF0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244DF4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244DF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244DFC: jr          $ra
    // 0x80244E00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80244E00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023251C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023251C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023252C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232530: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80232534: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232538: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023253C: jal         0x8004F820
    // 0x80232540: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232540: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80232544: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232548: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023254C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232550: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232554: bgez        $a0, L_80232578
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232558: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80232578;
    }
    // 0x80232558: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023255C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232560: jal         0x80233298
    // 0x80232564: nop

    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80232564: nop

    after_1:
    // 0x80232568: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8023256C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232570: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80232574: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80232578:
    // 0x80232578: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023257C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80232580: bne         $v0, $zero, L_802325A4
    if (ctx->r2 != 0) {
        // 0x80232584: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802325A4;
    }
    // 0x80232584: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232588: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8023258C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232590: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80232594: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80232598: jal         0x80233298
    // 0x8023259C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80233298_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023259C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x802325A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802325A4:
    // 0x802325A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802325A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802325AC: jr          $ra
    // 0x802325B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802325B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DB60_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DB60: jr          $ra
    // 0x8023DB64: nop

    TRACE_RETURN()
    return;
    // 0x8023DB64: nop

;}
RECOMP_FUNC void func_8022B81C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B81C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B82C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B830: bne         $v0, $zero, L_8022B8AC
    if (ctx->r2 != 0) {
        // 0x8022B834: nop
    
            goto L_8022B8AC;
    }
    // 0x8022B834: nop

    // 0x8022B838: jal         0x8022BE40
    // 0x8022B83C: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B83C: nop

    after_0:
    // 0x8022B840: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B844: bne         $v0, $zero, L_8022B874
    if (ctx->r2 != 0) {
        // 0x8022B848: nop
    
            goto L_8022B874;
    }
    // 0x8022B848: nop

    // 0x8022B84C: jal         0x80229F50
    // 0x8022B850: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B850: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
    // 0x8022B854: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B858: jal         0x8003E87C
    // 0x8022B85C: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B85C: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B860: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B864: bne         $v0, $v1, L_8022B874
    if (ctx->r2 != ctx->r3) {
        // 0x8022B868: nop
    
            goto L_8022B874;
    }
    // 0x8022B868: nop

    // 0x8022B86C: jal         0x8022A170
    // 0x8022B870: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B870: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_8022B874:
    // 0x8022B874: jal         0x8006033C
    // 0x8022B878: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022B878: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_4:
    // 0x8022B87C: beq         $v0, $zero, L_8022B8A8
    if (ctx->r2 == 0) {
        // 0x8022B880: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B8A8;
    }
    // 0x8022B880: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B884: jal         0x8006033C
    // 0x8022B888: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022B888: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_5:
    // 0x8022B88C: bne         $v0, $zero, L_8022B8A8
    if (ctx->r2 != 0) {
        // 0x8022B890: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B8A8;
    }
    // 0x8022B890: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B894: jal         0x8022A170
    // 0x8022B898: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022A170_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022B898: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x8022B89C: jal         0x8022A170
    // 0x8022B8A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x8022B8A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_7:
    // 0x8022B8A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B8A8:
    // 0x8022B8A8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B8AC:
    // 0x8022B8AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8B4: jr          $ra
    // 0x8022B8B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B8B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024581C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024581C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80245820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80245824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024582C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80245830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245834: bne         $v1, $v0, L_80245874
    if (ctx->r3 != ctx->r2) {
        // 0x80245838: lui         $v0, 0x2FF
        ctx->r2 = S32(0X2FF << 16);
            goto L_80245874;
    }
    // 0x80245838: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
    // 0x8024583C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80245840: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80245844: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x80245848: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8024584C: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x80245850: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x80245854: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x80245858: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x8024585C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80245860: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x80245864: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245868: jal         0x8004DBA0
    // 0x8024586C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8024586C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x80245870: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
L_80245874:
    // 0x80245874: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x80245878: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8024587C: lui         $a0, 0x33
    ctx->r4 = S32(0X33 << 16);
    // 0x80245880: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80245884: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80245888: beq         $v0, $zero, L_802458DC
    if (ctx->r2 == 0) {
        // 0x8024588C: sw          $v1, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r3;
            goto L_802458DC;
    }
    // 0x8024588C: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x80245890: jal         0x8004F144
    // 0x80245894: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80245894: nop

    after_1:
    // 0x80245898: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024589C: beq         $v1, $zero, L_802458C8
    if (ctx->r3 == 0) {
        // 0x802458A0: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_802458C8;
    }
    // 0x802458A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802458A4: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802458A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802458AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802458B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802458B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802458B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802458BC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802458C0: jal         0x8009A3B4
    // 0x802458C4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802458C4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_2:
L_802458C8:
    // 0x802458C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802458CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802458D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802458D4: jal         0x8007A1B8
    // 0x802458D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x802458D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_802458DC:
    // 0x802458DC: jal         0x80040F30
    // 0x802458E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x802458E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802458E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802458E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802458EC: jr          $ra
    // 0x802458F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802458F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AB3C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AB48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AB4C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022AB50: bne         $v0, $zero, L_8022AB60
    if (ctx->r2 != 0) {
        // 0x8022AB54: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022AB60;
    }
    // 0x8022AB54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AB58: jal         0x800616FC
    // 0x8022AB5C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022AB5C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_0:
L_8022AB60:
    // 0x8022AB60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AB64: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022AB68: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AB6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AB70: bne         $v0, $zero, L_8022AB88
    if (ctx->r2 != 0) {
        // 0x8022AB74: nop
    
            goto L_8022AB88;
    }
    // 0x8022AB74: nop

    // 0x8022AB78: jal         0x80036E48
    // 0x8022AB7C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x8022AB7C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x8022AB80: jal         0x800600F8
    // 0x8022AB84: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x8022AB84: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_2:
L_8022AB88:
    // 0x8022AB88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB90: jr          $ra
    // 0x8022AB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B230_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B238: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B240: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B244: bne         $v0, $zero, L_8022B290
    if (ctx->r2 != 0) {
        // 0x8022B248: nop
    
            goto L_8022B290;
    }
    // 0x8022B248: nop

    // 0x8022B24C: jal         0x8022BE40
    // 0x8022B250: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B250: nop

    after_0:
    // 0x8022B254: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B258: bne         $v0, $zero, L_8022B28C
    if (ctx->r2 != 0) {
        // 0x8022B25C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B28C;
    }
    // 0x8022B25C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B260: jal         0x80229F50
    // 0x8022B264: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B264: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x8022B268: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B26C: jal         0x8003E87C
    // 0x8022B270: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B270: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B274: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B278: bne         $v0, $v1, L_8022B28C
    if (ctx->r2 != ctx->r3) {
        // 0x8022B27C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B28C;
    }
    // 0x8022B27C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B280: jal         0x8022A170
    // 0x8022B284: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B284: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8022B288: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B28C:
    // 0x8022B28C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B290:
    // 0x8022B290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B298: jr          $ra
    // 0x8022B29C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B29C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C640_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024C644: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024C648: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C64C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024C650: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8024C654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C658: beq         $a0, $v0, L_8024C698
    if (ctx->r4 == ctx->r2) {
        // 0x8024C65C: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8024C698;
    }
    // 0x8024C65C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8024C660: beql        $v0, $zero, L_8024C678
    if (ctx->r2 == 0) {
        // 0x8024C664: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C678;
    }
    goto skip_0;
    // 0x8024C664: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C668: beq         $a0, $zero, L_8024C688
    if (ctx->r4 == 0) {
        // 0x8024C66C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C688;
    }
    // 0x8024C66C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C670: j           L_8024C784
    // 0x8024C674: nop

        goto L_8024C784;
    // 0x8024C674: nop

L_8024C678:
    // 0x8024C678: beq         $a0, $v0, L_8024C72C
    if (ctx->r4 == ctx->r2) {
        // 0x8024C67C: nop
    
            goto L_8024C72C;
    }
    // 0x8024C67C: nop

    // 0x8024C680: j           L_8024C784
    // 0x8024C684: nop

        goto L_8024C784;
    // 0x8024C684: nop

L_8024C688:
    // 0x8024C688: jal         0x800616FC
    // 0x8024C68C: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8024C68C: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_0:
    // 0x8024C690: j           L_8024C71C
    // 0x8024C694: nop

        goto L_8024C71C;
    // 0x8024C694: nop

L_8024C698:
    // 0x8024C698: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C69C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C6A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C6A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C6A8: bne         $v0, $zero, L_8024C784
    if (ctx->r2 != 0) {
        // 0x8024C6AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024C784;
    }
    // 0x8024C6AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C6B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6B4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8024C6B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024C6BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8024C6C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6C4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8024C6C8: addiu       $v0, $zero, 0x35F
    ctx->r2 = ADD32(0, 0X35F);
    // 0x8024C6CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6D0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8024C6D4: addiu       $v0, $zero, -0x41
    ctx->r2 = ADD32(0, -0X41);
    // 0x8024C6D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6DC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8024C6E0: addiu       $v0, $zero, 0x160
    ctx->r2 = ADD32(0, 0X160);
    // 0x8024C6E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6E8: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8024C6EC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8024C6F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C6F4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8024C6F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8024C6FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C700: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x8024C704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C708: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8024C70C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C710: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8024C714: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C718: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
L_8024C71C:
    // 0x8024C71C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024C720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C724: j           L_8024C784
    // 0x8024C728: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024C784;
    // 0x8024C728: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024C72C:
    // 0x8024C72C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C730: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x8024C734: bne         $v0, $a0, L_8024C784
    if (ctx->r2 != ctx->r4) {
        // 0x8024C738: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024C784;
    }
    // 0x8024C738: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024C73C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8024C740: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024C744: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8024C748: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8024C74C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024C750: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8024C754: jal         0x80060590
    // 0x8024C758: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8024C758: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_1:
    // 0x8024C75C: jal         0x80060590
    // 0x8024C760: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x8024C760: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_2:
    // 0x8024C764: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C768: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8024C76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C770: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024C774: jal         0x80070050
    // 0x8024C778: sb          $v0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8024C778: sb          $v0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r2;
    after_3:
    // 0x8024C77C: jal         0x8004F684
    // 0x8024C780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8024C780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8024C784:
    // 0x8024C784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024C788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024C78C: jr          $ra
    // 0x8024C790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024C790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802465C4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802465C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802465C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802465CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802465D0: jal         0x80047B3C
    // 0x802465D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_0;
    // 0x802465D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802465D8: jal         0x8004F4F8
    // 0x802465DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x802465DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802465E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802465E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802465E8: jr          $ra
    // 0x802465EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802465EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE88_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BE8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BE90: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8022BE94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BE98: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022BE9C: addiu       $a1, $a1, 0x2D70
    ctx->r5 = ADD32(ctx->r5, 0X2D70);
    // 0x8022BEA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BEA4: jal         0x8009A3B4
    // 0x8022BEA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BEA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BEAC: jal         0x8003E6BC
    // 0x8022BEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022BEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BEB4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BEB8: jal         0x80071ACC
    // 0x8022BEBC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x8022BEBC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    after_2:
    // 0x8022BEC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BEC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BEC8: jr          $ra
    // 0x8022BECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244A64_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244A64: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80244A68: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80244A6C: jr          $ra
    // 0x80244A70: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80244A70: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022A170_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A174: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A178: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A17C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022A180: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022A184: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A188: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x8022A18C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8022A190: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x8022A194: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A198: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A19C: beq         $v1, $zero, L_8022A24C
    if (ctx->r3 == 0) {
        // 0x8022A1A0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022A24C;
    }
    // 0x8022A1A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A1A4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022A1A8: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022A1AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A1B0: lw          $s0, 0x55F8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55F8);
    // 0x8022A1B4: jal         0x8004DA68
    // 0x8022A1B8: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8022A1B8: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x8022A1BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022A1C4: beq         $v1, $v0, L_8022A1DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1C8: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8022A1DC;
    }
    // 0x8022A1C8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022A1CC: beq         $v1, $v0, L_8022A208
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A208;
    }
    // 0x8022A1D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A1D4: j           L_8022A230
    // 0x8022A1D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_8022A230;
    // 0x8022A1D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8022A1DC:
    // 0x8022A1DC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A1E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A1E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A1E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A1EC: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8022A1F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A1F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A1F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A1FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022A200: j           L_8022A21C
    // 0x8022A204: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022A21C;
    // 0x8022A204: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A208:
    // 0x8022A208: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A20C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A210: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8022A214: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8022A218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A21C:
    // 0x8022A21C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A220: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A224: jalr        $v0
    // 0x8022A228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022A228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A22C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8022A230:
    // 0x8022A230: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A234: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x8022A238: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x8022A23C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8022A240: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A244: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A248: sw          $v1, -0xD90($at)
    MEM_W(-0XD90, ctx->r1) = ctx->r3;
L_8022A24C:
    // 0x8022A24C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A250: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A254: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A258: jr          $ra
    // 0x8022A25C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A25C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231B44_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231B48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231B4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231B54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B5C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80231B60: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80231B64: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80231B68: jal         0x8004FA7C
    // 0x80231B6C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80231B6C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80231B70: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80231B74: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80231B78: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80231B7C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80231B80: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80231B84: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80231B88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231B8C: bnel        $v0, $zero, L_80231BAC
    if (ctx->r2 != 0) {
        // 0x80231B90: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_80231BAC;
    }
    goto skip_0;
    // 0x80231B90: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80231B94: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80231B98: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80231B9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231BA0: beq         $v0, $zero, L_80231BB0
    if (ctx->r2 == 0) {
        // 0x80231BA4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80231BB0;
    }
    // 0x80231BA4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80231BA8: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_80231BAC:
    // 0x80231BAC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80231BB0:
    // 0x80231BB0: bne         $v0, $zero, L_80231BE0
    if (ctx->r2 != 0) {
        // 0x80231BB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231BE0;
    }
    // 0x80231BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231BB8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231BBC: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231BC0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80231BC4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80231BC8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80231BCC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231BD4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80231BD8: j           L_80231C38
    // 0x80231BDC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80231C38;
    // 0x80231BDC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80231BE0:
    // 0x80231BE0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80231BE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231BE8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80231BEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231BF0: beq         $v0, $zero, L_80231C34
    if (ctx->r2 == 0) {
        // 0x80231BF4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80231C34;
    }
    // 0x80231BF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231BF8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80231BFC: jal         0x80233334
    // 0x80231C00: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231C00: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80231C04: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231C08: beq         $v0, $zero, L_80231C40
    if (ctx->r2 == 0) {
        // 0x80231C0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80231C40;
    }
    // 0x80231C0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231C10: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80231C14: jal         0x80233298
    // 0x80231C18: nop

    func_80233298_ovl10(rdram, ctx);
        goto after_2;
    // 0x80231C18: nop

    after_2:
    // 0x80231C1C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80231C20: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80231C24: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80231C28: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231C2C: j           L_80231C60
    // 0x80231C30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231C60;
    // 0x80231C30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231C34:
    // 0x80231C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231C38:
    // 0x80231C38: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231C3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80231C40:
    // 0x80231C40: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80231C44: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80231C48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231C4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231C50: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80231C54: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231C58: jal         0x8004DA90
    // 0x80231C5C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80231C5C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80231C60:
    // 0x80231C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231C64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231C68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231C6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C70: jr          $ra
    // 0x80231C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234878_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234878: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8023487C: beq         $a1, $zero, L_8023488C
    if (ctx->r5 == 0) {
        // 0x80234880: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023488C;
    }
    // 0x80234880: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234884: j           L_80234890
    // 0x80234888: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_80234890;
    // 0x80234888: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8023488C:
    // 0x8023488C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_80234890:
    // 0x80234890: jr          $ra
    // 0x80234894: nop

    TRACE_RETURN()
    return;
    // 0x80234894: nop

;}
RECOMP_FUNC void func_80241A00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241A00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241A04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241A0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80241A10: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80241A14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241A18: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241A1C: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80241A20: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x80241A24: bne         $v0, $zero, L_80241A74
    if (ctx->r2 != 0) {
        // 0x80241A28: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80241A74;
    }
    // 0x80241A28: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80241A2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241A30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80241A34: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x80241A38: jal         0x802420E4
    // 0x80241A3C: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
    func_802420E4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80241A3C: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
    after_0:
    // 0x80241A40: jal         0x80242348
    // 0x80241A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242348_ovl10(rdram, ctx);
        goto after_1;
    // 0x80241A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80241A48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241A4C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241A50: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80241A54: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80241A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241A5C: jal         0x80050294
    // 0x80241A60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80241A60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80241A64: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241A6C: j           L_80241A7C
    // 0x80241A70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80241A7C;
    // 0x80241A70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80241A74:
    // 0x80241A74: jal         0x8005044C
    // 0x80241A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80241A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80241A7C:
    // 0x80241A7C: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80241A80: bne         $v0, $zero, L_80241ACC
    if (ctx->r2 != 0) {
        // 0x80241A84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241ACC;
    }
    // 0x80241A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241A88: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x80241A8C: xori        $v1, $a0, 0xE
    ctx->r3 = ctx->r4 ^ 0XE;
    // 0x80241A90: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80241A94: xori        $v0, $a0, 0x18
    ctx->r2 = ctx->r4 ^ 0X18;
    // 0x80241A98: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80241A9C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80241AA0: bnel        $v1, $zero, L_80241AB8
    if (ctx->r3 != 0) {
        // 0x80241AA4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80241AB8;
    }
    goto skip_0;
    // 0x80241AA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x80241AA8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80241AAC: bnel        $a0, $v0, L_80241ACC
    if (ctx->r4 != ctx->r2) {
        // 0x80241AB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241ACC;
    }
    goto skip_1;
    // 0x80241AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80241AB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80241AB8:
    // 0x80241AB8: jal         0x802420E4
    // 0x80241ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802420E4_ovl10(rdram, ctx);
        goto after_4;
    // 0x80241ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80241AC0: jal         0x8024243C
    // 0x80241AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024243C_ovl10(rdram, ctx);
        goto after_5;
    // 0x80241AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80241AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241ACC:
    // 0x80241ACC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80241AD0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80241AD4: jal         0x8003B564
    // 0x80241AD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x80241AD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80241ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80241AE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80241AE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241AE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241AEC: jr          $ra
    // 0x80241AF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241AF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802493D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802493D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802493DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802493E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802493E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802493E8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x802493EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802493F0: jal         0x8002C654
    // 0x802493F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x802493F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x802493F8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802493FC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80249400: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80249404: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80249408: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024940C: lhu         $a0, 0x2370($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2370);
    // 0x80249410: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80249414: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80249418: jal         0x80031BB4
    // 0x8024941C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_1;
    // 0x8024941C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_1:
    // 0x80249420: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80249424: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80249428: jal         0x800319B4
    // 0x8024942C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8024942C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80249430: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80249434: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249438: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024943C: jr          $ra
    // 0x80249440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C890_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C89C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C8A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C8A4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C8A8: beq         $v1, $zero, L_8022C8C4
    if (ctx->r3 == 0) {
        // 0x8022C8AC: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022C8C4;
    }
    // 0x8022C8AC: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022C8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8B4: beq         $v1, $v0, L_8022C8D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8B8: nop
    
            goto L_8022C8D8;
    }
    // 0x8022C8B8: nop

    // 0x8022C8BC: j           L_8022C9A8
    // 0x8022C8C0: nop

        goto L_8022C9A8;
    // 0x8022C8C0: nop

L_8022C8C4:
    // 0x8022C8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C8CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C8D0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022C8D4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8022C8D8:
    // 0x8022C8D8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022C8DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C8E0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022C8E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C8E8: bgezl       $v0, L_8022C900
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C8EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C900;
    }
    goto skip_0;
    // 0x8022C8EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022C8F0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022C8F4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C8F8: j           L_8022C9A8
    // 0x8022C8FC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022C9A8;
    // 0x8022C8FC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022C900:
    // 0x8022C900: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C904: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022C908: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022C90C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C910: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C914: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C918: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C91C: jal         0x8004DA90
    // 0x8022C920: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C920: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C924: jal         0x80040F30
    // 0x8022C928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022C928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C930: jal         0x8003E934
    // 0x8022C934: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C934: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022C938: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C93C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C940: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C948: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C94C: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022C950: bne         $v1, $zero, L_8022C98C
    if (ctx->r3 != 0) {
        // 0x8022C954: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022C98C;
    }
    // 0x8022C954: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C958: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C95C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C964: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022C968: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C96C: jal         0x8009A3B4
    // 0x8022C970: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C970: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x8022C974: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C978: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C97C: jal         0x8009A3B4
    // 0x8022C980: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C980: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022C984: j           L_8022C9A8
    // 0x8022C988: nop

        goto L_8022C9A8;
    // 0x8022C988: nop

L_8022C98C:
    // 0x8022C98C: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022C990: beq         $v0, $zero, L_8022C9A8
    if (ctx->r2 == 0) {
        // 0x8022C994: nop
    
            goto L_8022C9A8;
    }
    // 0x8022C994: nop

    // 0x8022C998: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C99C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022C9A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C9A4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022C9A8:
    // 0x8022C9A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C9AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C9B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9B4: jr          $ra
    // 0x8022C9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802424D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802424D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802424D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802424D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802424DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802424E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802424E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802424E8: jal         0x8009A3B4
    // 0x802424EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802424EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802424F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802424F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802424F8: jal         0x8009A3B4
    // 0x802424FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802424FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80242500: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80242504: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80242508: jal         0x8009A3B4
    // 0x8024250C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8024250C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80242510: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242518: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024251C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242520: lw          $v0, 0x1BB8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1BB8);
    // 0x80242524: jalr        $v0
    // 0x80242528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80242528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024252C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242534: jr          $ra
    // 0x80242538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F9A8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F9A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F9AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F9B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F9B4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023F9B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F9BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F9C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F9C4: lw          $v0, 0x520($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X520);
    // 0x8023F9C8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023F9CC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023F9D0: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8023F9D4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F9D8: slti        $v0, $a1, 0x6
    ctx->r2 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x8023F9DC: bne         $v0, $zero, L_8023F9F0
    if (ctx->r2 != 0) {
        // 0x8023F9E0: addiu       $s2, $s1, 0x440
        ctx->r18 = ADD32(ctx->r17, 0X440);
            goto L_8023F9F0;
    }
    // 0x8023F9E0: addiu       $s2, $s1, 0x440
    ctx->r18 = ADD32(ctx->r17, 0X440);
    // 0x8023F9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F9E8: j           L_8023FAF4
    // 0x8023F9EC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8023FAF4;
    // 0x8023F9EC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023F9F0:
    // 0x8023F9F0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023F9F4: addiu       $a0, $a0, 0x18AC
    ctx->r4 = ADD32(ctx->r4, 0X18AC);
    // 0x8023F9F8: lhu         $v1, 0x442($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X442);
    // 0x8023F9FC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8023FA00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FA04: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8023FA08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FA0C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023FA10: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8023FA14: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023FA18: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023FA1C: beq         $v1, $v0, L_8023FAF4
    if (ctx->r3 == ctx->r2) {
        // 0x8023FA20: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_8023FAF4;
    }
    // 0x8023FA20: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8023FA24: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8023FA28: addiu       $a1, $s3, 0x3A8
    ctx->r5 = ADD32(ctx->r19, 0X3A8);
    // 0x8023FA2C: jal         0x8009A3B4
    // 0x8023FA30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FA30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023FA34: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8023FA38: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8023FA3C: jal         0x8009A3B4
    // 0x8023FA40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023FA40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023FA44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FA48: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023FA4C: addiu       $a2, $s1, 0x508
    ctx->r6 = ADD32(ctx->r17, 0X508);
    // 0x8023FA50: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023FA54: sh          $v0, 0x508($s1)
    MEM_H(0X508, ctx->r17) = ctx->r2;
    // 0x8023FA58: sh          $v0, 0x50A($s1)
    MEM_H(0X50A, ctx->r17) = ctx->r2;
    // 0x8023FA5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023FA60: addiu       $a3, $s1, 0x510
    ctx->r7 = ADD32(ctx->r17, 0X510);
    // 0x8023FA64: jal         0x8004DF78
    // 0x8023FA68: sh          $v0, 0x50C($s1)
    MEM_H(0X50C, ctx->r17) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8023FA68: sh          $v0, 0x50C($s1)
    MEM_H(0X50C, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023FA6C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023FA70: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023FA74: bne         $v0, $zero, L_8023FAF4
    if (ctx->r2 != 0) {
        // 0x8023FA78: nop
    
            goto L_8023FAF4;
    }
    // 0x8023FA78: nop

    // 0x8023FA7C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8023FA80: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x8023FA84: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8023FA88: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023FA8C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x8023FA90: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023FA94: bne         $v0, $zero, L_8023FAF4
    if (ctx->r2 != 0) {
        // 0x8023FA98: addiu       $a0, $s2, 0xB8
        ctx->r4 = ADD32(ctx->r18, 0XB8);
            goto L_8023FAF4;
    }
    // 0x8023FA98: addiu       $a0, $s2, 0xB8
    ctx->r4 = ADD32(ctx->r18, 0XB8);
    // 0x8023FA9C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023FAA0: jal         0x8009A3B4
    // 0x8023FAA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023FAA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023FAA8: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
    // 0x8023FAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FAB0: lbu         $a1, 0xEE($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0XEE);
    // 0x8023FAB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023FAB8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023FABC: addiu       $v0, $v0, 0x188C
    ctx->r2 = ADD32(ctx->r2, 0X188C);
    // 0x8023FAC0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023FAC4: jal         0x8009A3B4
    // 0x8023FAC8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023FAC8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_4:
    // 0x8023FACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FAD0: jal         0x8004EC38
    // 0x8023FAD4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_5;
    // 0x8023FAD4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
    // 0x8023FAD8: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8023FADC: sh          $v0, 0xC6($s2)
    MEM_H(0XC6, ctx->r18) = ctx->r2;
    // 0x8023FAE0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023FAE4: sb          $zero, 0xE8($s2)
    MEM_B(0XE8, ctx->r18) = 0;
    // 0x8023FAE8: sh          $v1, 0xBE($s2)
    MEM_H(0XBE, ctx->r18) = ctx->r3;
    // 0x8023FAEC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8023FAF0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8023FAF4:
    // 0x8023FAF4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023FAF8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FAFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023FB00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023FB04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FB08: jr          $ra
    // 0x8023FB0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023FB0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232E6C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E6C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232E70: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80232E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232E80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232E84: bne         $v1, $v0, L_80232EAC
    if (ctx->r3 != ctx->r2) {
        // 0x80232E88: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80232EAC;
    }
    // 0x80232E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232E8C: jal         0x80061724
    // 0x80232E90: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80232E90: nop

    after_0:
    // 0x80232E94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232E98: jal         0x800616FC
    // 0x80232E9C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80232E9C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80232EA0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232EA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232EA8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80232EAC:
    // 0x80232EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232EB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232EB4: jr          $ra
    // 0x80232EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E1E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1E8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E1EC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022E1F0: addiu       $v1, $v1, 0x8F0
    ctx->r3 = ADD32(ctx->r3, 0X8F0);
    // 0x8022E1F4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E1F8: beq         $v0, $zero, L_8022E208
    if (ctx->r2 == 0) {
        // 0x8022E1FC: addiu       $t0, $a0, 0x348
        ctx->r8 = ADD32(ctx->r4, 0X348);
            goto L_8022E208;
    }
    // 0x8022E1FC: addiu       $t0, $a0, 0x348
    ctx->r8 = ADD32(ctx->r4, 0X348);
    // 0x8022E200: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022E204: addiu       $v1, $v1, 0x8E8
    ctx->r3 = ADD32(ctx->r3, 0X8E8);
L_8022E208:
    // 0x8022E208: lhu         $v0, 0x34A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34A);
    // 0x8022E20C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E210: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E214: andi        $a3, $v0, 0xF
    ctx->r7 = ctx->r2 & 0XF;
L_8022E218:
    // 0x8022E218: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022E21C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E220: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E224: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E228: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E22C: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E230: bne         $v0, $zero, L_8022E250
    if (ctx->r2 != 0) {
        // 0x8022E234: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022E250;
    }
    // 0x8022E234: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022E238: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E23C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E240: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E244: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8022E248: bne         $v0, $zero, L_8022E218
    if (ctx->r2 != 0) {
        // 0x8022E24C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022E218;
    }
    // 0x8022E24C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8022E250:
    // 0x8022E250: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022E254: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E258: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022E25C: beql        $v0, $zero, L_8022E2CC
    if (ctx->r2 == 0) {
        // 0x8022E260: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022E2CC;
    }
    goto skip_0;
    // 0x8022E260: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    skip_0:
    // 0x8022E264: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E268: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E26C: addu        $at, $at, $v0
    gpr jr_addend_8022E274 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E270: lw          $v0, 0x2E00($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E00);
    // 0x8022E274: jr          $v0
    // 0x8022E278: nop

    switch (jr_addend_8022E274 >> 2) {
        case 0: goto L_8022E27C; break;
        case 1: goto L_8022E284; break;
        case 2: goto L_8022E290; break;
        case 3: goto L_8022E29C; break;
        case 4: goto L_8022E2AC; break;
        default: switch_error(__func__, 0x8022E274, 0x80252E00);
    }
    // 0x8022E278: nop

L_8022E27C:
    // 0x8022E27C: j           L_8022E2D0
    // 0x8022E280: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
        goto L_8022E2D0;
    // 0x8022E280: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
L_8022E284:
    // 0x8022E284: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E288: j           L_8022E2D0
    // 0x8022E28C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E28C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022E290:
    // 0x8022E290: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
    // 0x8022E294: j           L_8022E2D0
    // 0x8022E298: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E298: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022E29C:
    // 0x8022E29C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E2A0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022E2A4: j           L_8022E2B8
    // 0x8022E2A8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022E2B8;
    // 0x8022E2A8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022E2AC:
    // 0x8022E2AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E2B0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022E2B4: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
L_8022E2B8:
    // 0x8022E2B8: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
    // 0x8022E2BC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E2C0: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022E2C4: j           L_8022E2D0
    // 0x8022E2C8: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
        goto L_8022E2D0;
    // 0x8022E2C8: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
L_8022E2CC:
    // 0x8022E2CC: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_8022E2D0:
    // 0x8022E2D0: jr          $ra
    // 0x8022E2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022E2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8023B728_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B72C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B730: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8023B734: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8023B738: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023B73C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B740: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B744: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8023B748: lh          $v1, 0x2($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2);
    // 0x8023B74C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023B750: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B754: mflo        $a2
    ctx->r6 = lo;
    // 0x8023B758: lh          $a0, 0x4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4);
    // 0x8023B75C: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8023B760: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8023B764: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B768: mflo        $a0
    ctx->r4 = lo;
    // 0x8023B76C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023B770: nop

    // 0x8023B774: jal         0x80032424
    // 0x8023B778: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8023B778: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8023B77C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B780: jr          $ra
    // 0x8023B784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023B788: nop

    // 0x8023B78C: nop

;}
RECOMP_FUNC void func_8024C7E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C7E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C7EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C7F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C7F4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C7F8: beq         $v1, $zero, L_8024C810
    if (ctx->r3 == 0) {
        // 0x8024C7FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024C810;
    }
    // 0x8024C7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C800: beq         $v1, $v0, L_8024C83C
    if (ctx->r3 == ctx->r2) {
        // 0x8024C804: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C83C;
    }
    // 0x8024C804: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C808: j           L_8024C884
    // 0x8024C80C: nop

        goto L_8024C884;
    // 0x8024C80C: nop

L_8024C810:
    // 0x8024C810: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C814: jal         0x8006FF84
    // 0x8024C818: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C818: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C81C: beq         $v0, $zero, L_8024C884
    if (ctx->r2 == 0) {
        // 0x8024C820: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C884;
    }
    // 0x8024C820: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C824: jal         0x800616FC
    // 0x8024C828: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8024C828: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_1:
    // 0x8024C82C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C834: j           L_8024C884
    // 0x8024C838: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C884;
    // 0x8024C838: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C83C:
    // 0x8024C83C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C840: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C844: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C848: bne         $v0, $zero, L_8024C884
    if (ctx->r2 != 0) {
        // 0x8024C84C: nop
    
            goto L_8024C884;
    }
    // 0x8024C84C: nop

    // 0x8024C850: jal         0x8002A398
    // 0x8024C854: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_2;
    // 0x8024C854: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8024C858: bne         $v0, $zero, L_8024C884
    if (ctx->r2 != 0) {
        // 0x8024C85C: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024C884;
    }
    // 0x8024C85C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C860: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C864: jal         0x8002A2F8
    // 0x8024C868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8024C868: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8024C86C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C870: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C874: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C878: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C87C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C880: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C884:
    // 0x8024C884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C88C: jr          $ra
    // 0x8024C890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231DB4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231DBC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231DC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231DC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231DC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231DCC: lw          $v0, 0x10C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X10C4);
    // 0x80231DD0: jalr        $v0
    // 0x80231DD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231DD4: nop

    after_0:
    // 0x80231DD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231DDC: jr          $ra
    // 0x80231DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231DE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4DC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F4E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F4E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F4E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F4EC: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F4F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F4F4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022F4F8: beq         $v1, $v0, L_8022F538
    if (ctx->r3 == ctx->r2) {
        // 0x8022F4FC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F538;
    }
    // 0x8022F4FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F500: beql        $v0, $zero, L_8022F518
    if (ctx->r2 == 0) {
        // 0x8022F504: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F518;
    }
    goto skip_0;
    // 0x8022F504: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F508: beq         $v1, $zero, L_8022F530
    if (ctx->r3 == 0) {
        // 0x8022F50C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F530;
    }
    // 0x8022F50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F510: j           L_8022F5A8
    // 0x8022F514: nop

        goto L_8022F5A8;
    // 0x8022F514: nop

L_8022F518:
    // 0x8022F518: beq         $v1, $v0, L_8022F550
    if (ctx->r3 == ctx->r2) {
        // 0x8022F51C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F550;
    }
    // 0x8022F51C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F520: beq         $v1, $v0, L_8022F570
    if (ctx->r3 == ctx->r2) {
        // 0x8022F524: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_8022F570;
    }
    // 0x8022F524: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022F528: j           L_8022F5A8
    // 0x8022F52C: nop

        goto L_8022F5A8;
    // 0x8022F52C: nop

L_8022F530:
    // 0x8022F530: j           L_8022F558
    // 0x8022F534: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_8022F558;
    // 0x8022F534: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_8022F538:
    // 0x8022F538: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F53C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F540: bne         $v1, $v0, L_8022F5A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022F544: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022F5A0;
    }
    // 0x8022F544: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F548: j           L_8022F5A0
    // 0x8022F54C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F5A0;
    // 0x8022F54C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F550:
    // 0x8022F550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F554: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_8022F558:
    // 0x8022F558: jal         0x80050294
    // 0x8022F55C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F55C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F560: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F568: j           L_8022F5A8
    // 0x8022F56C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F5A8;
    // 0x8022F56C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F570:
    // 0x8022F570: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F574: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F578: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022F57C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F580: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F584: bne         $v0, $v1, L_8022F5A0
    if (ctx->r2 != ctx->r3) {
        // 0x8022F588: nop
    
            goto L_8022F5A0;
    }
    // 0x8022F588: nop

    // 0x8022F58C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F590: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022F594: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F59C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F5A0:
    // 0x8022F5A0: jal         0x8005044C
    // 0x8022F5A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F5A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022F5A8:
    // 0x8022F5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F5AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5B0: jr          $ra
    // 0x8022F5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E878_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E87C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E880: jal         0x8004F418
    // 0x8022E884: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022E884: nop

    after_0:
    // 0x8022E888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E88C: jr          $ra
    // 0x8022E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802495F4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802495F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802495F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802495FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249600: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80249604: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x80249608: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8024960C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249610: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80249614: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x80249618: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8024961C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80249620: beql        $v0, $v1, L_80249668
    if (ctx->r2 == ctx->r3) {
        // 0x80249624: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80249668;
    }
    goto skip_0;
    // 0x80249624: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80249628: beq         $a1, $zero, L_80249640
    if (ctx->r5 == 0) {
        // 0x8024962C: nop
    
            goto L_80249640;
    }
    // 0x8024962C: nop

    // 0x80249630: jal         0x8006033C
    // 0x80249634: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80249634: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80249638: beq         $v0, $zero, L_80249668
    if (ctx->r2 == 0) {
        // 0x8024963C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80249668;
    }
    // 0x8024963C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80249640:
    // 0x80249640: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80249644: jal         0x8006033C
    // 0x80249648: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80249648: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x8024964C: bne         $v0, $zero, L_80249668
    if (ctx->r2 != 0) {
        // 0x80249650: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80249668;
    }
    // 0x80249650: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80249654: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80249658: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024965C: bne         $v1, $v0, L_80249668
    if (ctx->r3 != ctx->r2) {
        // 0x80249660: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249668;
    }
    // 0x80249660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249664: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80249668:
    // 0x80249668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024966C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249670: jr          $ra
    // 0x80249674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244E04_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244E08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244E10: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80244E14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80244E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244E1C: jal         0x8009A3B4
    // 0x80244E20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80244E20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80244E24: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80244E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244E2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244E30: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80244E34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80244E38: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80244E3C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80244E40: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80244E44: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80244E48: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80244E4C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80244E50: jal         0x8004D5D4
    // 0x80244E54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80244E54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80244E58: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80244E5C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244E60: addiu       $v0, $v0, 0x20C8
    ctx->r2 = ADD32(ctx->r2, 0X20C8);
    // 0x80244E64: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80244E68: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244E6C: addiu       $v0, $v0, 0x20D4
    ctx->r2 = ADD32(ctx->r2, 0X20D4);
    // 0x80244E70: beq         $v1, $zero, L_80244E80
    if (ctx->r3 == 0) {
        // 0x80244E74: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_80244E80;
    }
    // 0x80244E74: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80244E78: j           L_80244E84
    // 0x80244E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80244E84;
    // 0x80244E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80244E80:
    // 0x80244E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80244E84:
    // 0x80244E84: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80244E88: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80244E8C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80244E90: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80244E94: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80244E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244EA0: jr          $ra
    // 0x80244EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024824C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024824C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248250: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248254: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80248258: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024825C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248260: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80248264: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80248268: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8024826C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248270: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80248274: beq         $v1, $v0, L_802482C0
    if (ctx->r3 == ctx->r2) {
        // 0x80248278: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802482C0;
    }
    // 0x80248278: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024827C: beql        $v0, $zero, L_80248294
    if (ctx->r2 == 0) {
        // 0x80248280: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248294;
    }
    goto skip_0;
    // 0x80248280: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80248284: beq         $v1, $zero, L_802482AC
    if (ctx->r3 == 0) {
        // 0x80248288: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802482AC;
    }
    // 0x80248288: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024828C: j           L_80248344
    // 0x80248290: nop

        goto L_80248344;
    // 0x80248290: nop

L_80248294:
    // 0x80248294: beq         $v1, $v0, L_802482F0
    if (ctx->r3 == ctx->r2) {
        // 0x80248298: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802482F0;
    }
    // 0x80248298: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024829C: beq         $v1, $v0, L_80248310
    if (ctx->r3 == ctx->r2) {
        // 0x802482A0: nop
    
            goto L_80248310;
    }
    // 0x802482A0: nop

    // 0x802482A4: j           L_80248344
    // 0x802482A8: nop

        goto L_80248344;
    // 0x802482A8: nop

L_802482AC:
    // 0x802482AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802482B0: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802482B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802482B8: j           L_802482E0
    // 0x802482BC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
        goto L_802482E0;
    // 0x802482BC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
L_802482C0:
    // 0x802482C0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802482C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802482C8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802482CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802482D0: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x802482D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802482D8: jal         0x80061510
    // 0x802482DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x802482DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_802482E0:
    // 0x802482E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802482E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802482E8: j           L_80248344
    // 0x802482EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80248344;
    // 0x802482EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802482F0:
    // 0x802482F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802482F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802482F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802482FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248300: bne         $v0, $zero, L_80248344
    if (ctx->r2 != 0) {
        // 0x80248304: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80248344;
    }
    // 0x80248304: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80248308: j           L_80248344
    // 0x8024830C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80248344;
    // 0x8024830C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80248310:
    // 0x80248310: jal         0x8003516C
    // 0x80248314: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80248314: nop

    after_1:
    // 0x80248318: bne         $v0, $zero, L_80248344
    if (ctx->r2 != 0) {
        // 0x8024831C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80248344;
    }
    // 0x8024831C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248320: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80248324: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80248328: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024832C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80248330: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80248334: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80248338: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024833C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80248340: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80248344:
    // 0x80248344: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80248348: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8024834C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80248350: beq         $v0, $zero, L_80248374
    if (ctx->r2 == 0) {
        // 0x80248354: nop
    
            goto L_80248374;
    }
    // 0x80248354: nop

    // 0x80248358: jal         0x80061724
    // 0x8024835C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_2;
    // 0x8024835C: nop

    after_2:
    // 0x80248360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248364: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80248368: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024836C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80248370: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80248374:
    // 0x80248374: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248378: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024837C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248380: jr          $ra
    // 0x80248384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
