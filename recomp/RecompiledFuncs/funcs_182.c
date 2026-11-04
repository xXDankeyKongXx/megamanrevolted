#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802348B4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802348B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802348BC: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802348C0: bne         $v0, $zero, L_8023493C
    if (ctx->r2 != 0) {
        // 0x802348C4: nop
    
            goto L_8023493C;
    }
    // 0x802348C4: nop

    // 0x802348C8: lhu         $v1, 0x3B2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3B2);
    // 0x802348CC: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x802348D0: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x802348D4: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802348D8: beq         $v0, $zero, L_802348F8
    if (ctx->r2 == 0) {
        // 0x802348DC: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_802348F8;
    }
    // 0x802348DC: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x802348E0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802348E4: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802348E8: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802348EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802348F0: j           L_80234930
    // 0x802348F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80234930;
    // 0x802348F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802348F8:
    // 0x802348F8: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x802348FC: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80234900: beq         $v0, $zero, L_8023491C
    if (ctx->r2 == 0) {
        // 0x80234904: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023491C;
    }
    // 0x80234904: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80234908: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023490C: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80234910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234914: j           L_80234930
    // 0x80234918: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80234930;
    // 0x80234918: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023491C:
    // 0x8023491C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80234920: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80234924: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80234928: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023492C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80234930:
    // 0x80234930: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80234934: jal         0x80050294
    // 0x80234938: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80234938: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_8023493C:
    // 0x8023493C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234940: jr          $ra
    // 0x80234944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244C18_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244C18: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80244C1C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80244C20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80244C24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80244C28: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80244C2C: jal         0x80071110
    // 0x80244C30: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80244C30: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    after_0:
    // 0x80244C34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80244C38: beq         $v1, $zero, L_80244C70
    if (ctx->r3 == 0) {
        // 0x80244C3C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80244C70;
    }
    // 0x80244C3C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80244C40: bne         $v1, $v0, L_80244C58
    if (ctx->r3 != ctx->r2) {
        // 0x80244C44: lui         $v1, 0xFF00
        ctx->r3 = S32(0XFF00 << 16);
            goto L_80244C58;
    }
    // 0x80244C44: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80244C48: lw          $v0, 0xC8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC8);
    // 0x80244C4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80244C50: beq         $v0, $zero, L_80244C74
    if (ctx->r2 == 0) {
        // 0x80244C54: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80244C74;
    }
    // 0x80244C54: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80244C58:
    // 0x80244C58: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80244C5C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80244C60: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80244C64: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80244C68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244C6C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80244C70:
    // 0x80244C70: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80244C74:
    // 0x80244C74: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80244C78: jal         0x8009A3B4
    // 0x80244C7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244C7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80244C80: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80244C84: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80244C88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244C8C: jal         0x8009A3B4
    // 0x80244C90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80244C90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80244C94: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80244C98: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80244C9C: bne         $v0, $zero, L_80244CDC
    if (ctx->r2 != 0) {
        // 0x80244CA0: nop
    
            goto L_80244CDC;
    }
    // 0x80244CA0: nop

    // 0x80244CA4: jal         0x8004EFE4
    // 0x80244CA8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x80244CA8: nop

    after_3:
    // 0x80244CAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80244CB0: beq         $v1, $zero, L_80244CDC
    if (ctx->r3 == 0) {
        // 0x80244CB4: addiu       $a0, $v1, 0xAC
        ctx->r4 = ADD32(ctx->r3, 0XAC);
            goto L_80244CDC;
    }
    // 0x80244CB4: addiu       $a0, $v1, 0xAC
    ctx->r4 = ADD32(ctx->r3, 0XAC);
    // 0x80244CB8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244CBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244CC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80244CC8: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x80244CCC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80244CD0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x80244CD4: jal         0x8009A3B4
    // 0x80244CD8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80244CD8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_4:
L_80244CDC:
    // 0x80244CDC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80244CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244CE4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80244CE8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80244CEC: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80244CF0: beq         $v0, $zero, L_80244E34
    if (ctx->r2 == 0) {
        // 0x80244CF4: ori         $a1, $zero, 0xD0FC
        ctx->r5 = 0 | 0XD0FC;
            goto L_80244E34;
    }
    // 0x80244CF4: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x80244CF8: lw          $v0, 0xB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8);
    // 0x80244CFC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x80244D00: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80244D04: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80244D08: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80244D0C: lw          $v0, 0xB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8);
    // 0x80244D10: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x80244D14: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80244D18: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x80244D1C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80244D20: lw          $v0, 0xB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8);
    // 0x80244D24: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x80244D28: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x80244D2C: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80244D30: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80244D34: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80244D38: bne         $v1, $zero, L_80244D5C
    if (ctx->r3 != 0) {
        // 0x80244D3C: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_80244D5C;
    }
    // 0x80244D3C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80244D40: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x80244D44: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80244D48: bne         $v0, $zero, L_80244D5C
    if (ctx->r2 != 0) {
        // 0x80244D4C: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_80244D5C;
    }
    // 0x80244D4C: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80244D50: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80244D54: beq         $v0, $zero, L_80244D84
    if (ctx->r2 == 0) {
        // 0x80244D58: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_80244D84;
    }
    // 0x80244D58: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80244D5C:
    // 0x80244D5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80244D60: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80244D64: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80244D68: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80244D6C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80244D70: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80244D74: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80244D78: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80244D7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80244D80: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80244D84:
    // 0x80244D84: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80244D88: jal         0x80032308
    // 0x80244D8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_5;
    // 0x80244D8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80244D90: lui         $v0, 0xFF0
    ctx->r2 = S32(0XFF0 << 16);
    // 0x80244D94: ori         $v0, $v0, 0x69DA
    ctx->r2 = ctx->r2 | 0X69DA;
    // 0x80244D98: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80244D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244DA0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x80244DA4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80244DA8: addiu       $a3, $zero, 0x165
    ctx->r7 = ADD32(0, 0X165);
    // 0x80244DAC: jal         0x80051B48
    // 0x80244DB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_6;
    // 0x80244DB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x80244DB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244DB8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80244DBC: jal         0x8009A3B4
    // 0x80244DC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80244DC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80244DC4: lh          $a0, 0x6E($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6E);
    // 0x80244DC8: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80244DCC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244DD0: mflo        $v0
    ctx->r2 = lo;
    // 0x80244DD4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244DD8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80244DDC: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x80244DE0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244DE4: mflo        $v0
    ctx->r2 = lo;
    // 0x80244DE8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244DEC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80244DF0: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x80244DF4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244DF8: mflo        $v0
    ctx->r2 = lo;
    // 0x80244DFC: lh          $a0, 0x6E($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X6E);
    // 0x80244E00: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80244E04: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80244E08: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80244E0C: lh          $v1, 0x4C30($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4C30);
    // 0x80244E10: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80244E14: lh          $v0, 0x4C34($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4C34);
    // 0x80244E18: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80244E1C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80244E20: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80244E24: bnel        $v0, $zero, L_80244E40
    if (ctx->r2 != 0) {
        // 0x80244E28: sh          $a0, 0x6E($s1)
        MEM_H(0X6E, ctx->r17) = ctx->r4;
            goto L_80244E40;
    }
    goto skip_0;
    // 0x80244E28: sh          $a0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r4;
    skip_0:
    // 0x80244E2C: j           L_80244E40
    // 0x80244E30: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
        goto L_80244E40;
    // 0x80244E30: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
L_80244E34:
    // 0x80244E34: sltiu       $v0, $v1, 0x3C
    ctx->r2 = ctx->r3 < 0X3C ? 1 : 0;
    // 0x80244E38: beq         $v0, $zero, L_80244EA4
    if (ctx->r2 == 0) {
        // 0x80244E3C: nop
    
            goto L_80244EA4;
    }
    // 0x80244E3C: nop

L_80244E40:
    // 0x80244E40: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80244E44: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80244E48: lh          $a0, 0x48($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X48);
    // 0x80244E4C: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x80244E50: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80244E54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244E58: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80244E5C: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x80244E60: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80244E64: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80244E68: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80244E6C: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80244E70: lhu         $a0, 0x24($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X24);
    // 0x80244E74: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80244E78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244E7C: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80244E80: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80244E84: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80244E88: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x80244E8C: sh          $a0, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r4;
    // 0x80244E90: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80244E94: sh          $v0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r2;
    // 0x80244E98: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80244E9C: j           L_80244EBC
    // 0x80244EA0: sh          $v1, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r3;
        goto L_80244EBC;
    // 0x80244EA0: sh          $v1, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r3;
L_80244EA4:
    // 0x80244EA4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80244EA8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80244EAC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80244EB0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80244EB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244EB8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80244EBC:
    // 0x80244EBC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80244EC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80244EC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244EC8: jal         0x8024511C
    // 0x80244ECC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8024511C_ovl28(rdram, ctx);
        goto after_8;
    // 0x80244ECC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_8:
    // 0x80244ED0: jal         0x8024508C
    // 0x80244ED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8024508C_ovl28(rdram, ctx);
        goto after_9;
    // 0x80244ED4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x80244ED8: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80244EDC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80244EE0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80244EE4: jr          $ra
    // 0x80244EE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80244EE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8024A178_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A178: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8024A17C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A180: beq         $v1, $v0, L_8024A1CC
    if (ctx->r3 == ctx->r2) {
        // 0x8024A184: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024A1CC;
    }
    // 0x8024A184: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024A188: beq         $v0, $zero, L_8024A1EC
    if (ctx->r2 == 0) {
        // 0x8024A18C: nop
    
            goto L_8024A1EC;
    }
    // 0x8024A18C: nop

    // 0x8024A190: bne         $v1, $zero, L_8024A1EC
    if (ctx->r3 != 0) {
        // 0x8024A194: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8024A1EC;
    }
    // 0x8024A194: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8024A198: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8024A19C: bne         $v1, $v0, L_8024A1EC
    if (ctx->r3 != ctx->r2) {
        // 0x8024A1A0: addiu       $v0, $zero, 0x258
        ctx->r2 = ADD32(0, 0X258);
            goto L_8024A1EC;
    }
    // 0x8024A1A0: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x8024A1A4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8024A1A8: bne         $v1, $v0, L_8024A1EC
    if (ctx->r3 != ctx->r2) {
        // 0x8024A1AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8024A1EC;
    }
    // 0x8024A1AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024A1B0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8024A1B4: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8024A1B8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8024A1BC: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024A1C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A1C4: j           L_8024A1EC
    // 0x8024A1C8: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
        goto L_8024A1EC;
    // 0x8024A1C8: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_8024A1CC:
    // 0x8024A1CC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8024A1D0: addiu       $v0, $zero, 0x268
    ctx->r2 = ADD32(0, 0X268);
    // 0x8024A1D4: bne         $v1, $v0, L_8024A1EC
    if (ctx->r3 != ctx->r2) {
        // 0x8024A1D8: nop
    
            goto L_8024A1EC;
    }
    // 0x8024A1D8: nop

    // 0x8024A1DC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8024A1E0: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8024A1E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A1E8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8024A1EC:
    // 0x8024A1EC: jr          $ra
    // 0x8024A1F0: nop

    TRACE_RETURN()
    return;
    // 0x8024A1F0: nop

    // 0x8024A1F4: nop

    // 0x8024A1F8: nop

    // 0x8024A1FC: nop

;}
RECOMP_FUNC void func_80226760_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226760: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226764: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226768: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022676C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80226770: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80226774: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226778: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022677C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226780: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226784: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226788: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x8022678C: bne         $v0, $zero, L_802268D8
    if (ctx->r2 != 0) {
        // 0x80226790: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802268D8;
    }
    // 0x80226790: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80226794: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226798: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022679C: addiu       $s4, $zero, 0x1C
    ctx->r20 = ADD32(0, 0X1C);
    // 0x802267A0: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x802267A4: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x802267A8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_802267AC:
    // 0x802267AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802267B0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802267B4: jal         0x8004F144
    // 0x802267B8: lw          $s1, 0x30($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X30);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802267B8: lw          $s1, 0x30($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X30);
    after_0:
    // 0x802267BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802267C0: beq         $v1, $zero, L_802267E0
    if (ctx->r3 == 0) {
        // 0x802267C4: nop
    
            goto L_802267E0;
    }
    // 0x802267C4: nop

    // 0x802267C8: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x802267CC: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x802267D0: sb          $s6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r22;
    // 0x802267D4: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x802267D8: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x802267DC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_802267E0:
    // 0x802267E0: jal         0x8004F144
    // 0x802267E4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802267E4: nop

    after_1:
    // 0x802267E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802267EC: beq         $v1, $zero, L_80226810
    if (ctx->r3 == 0) {
        // 0x802267F0: nop
    
            goto L_80226810;
    }
    // 0x802267F0: nop

    // 0x802267F4: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x802267F8: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x802267FC: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x80226800: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226804: sb          $s0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r16;
    // 0x80226808: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x8022680C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226810:
    // 0x80226810: jal         0x8004F144
    // 0x80226814: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80226814: nop

    after_2:
    // 0x80226818: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022681C: beql        $v1, $zero, L_80226844
    if (ctx->r3 == 0) {
        // 0x80226820: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80226844;
    }
    goto skip_0;
    // 0x80226820: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80226824: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x80226828: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x8022682C: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x80226830: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226834: sb          $s0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r16;
    // 0x80226838: sb          $s2, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r18;
    // 0x8022683C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226840: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80226844:
    // 0x80226844: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226848: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022684C: bne         $v0, $zero, L_802267AC
    if (ctx->r2 != 0) {
        // 0x80226850: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_802267AC;
    }
    // 0x80226850: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226854: lw          $a1, 0x28($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X28);
    // 0x80226858: addiu       $v0, $zero, 0x227
    ctx->r2 = ADD32(0, 0X227);
    // 0x8022685C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80226860: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226864: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80226868: addiu       $v0, $zero, -0x15A
    ctx->r2 = ADD32(0, -0X15A);
    // 0x8022686C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80226870: lui         $v0, 0x227
    ctx->r2 = S32(0X227 << 16);
    // 0x80226874: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226878: lui         $v0, 0xFEA6
    ctx->r2 = S32(0XFEA6 << 16);
    // 0x8022687C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226880: addiu       $v0, $zero, 0x4AA
    ctx->r2 = ADD32(0, 0X4AA);
    // 0x80226884: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226888: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8022688C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80226890: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80226894: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226898: lw          $a1, 0x2C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X2C);
    // 0x8022689C: addiu       $v0, $zero, 0x182
    ctx->r2 = ADD32(0, 0X182);
    // 0x802268A0: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x802268A4: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x802268A8: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x802268AC: lui         $v0, 0x182
    ctx->r2 = S32(0X182 << 16);
    // 0x802268B0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802268B4: lui         $v0, 0xFD00
    ctx->r2 = S32(0XFD00 << 16);
    // 0x802268B8: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802268BC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802268C0: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x802268C4: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x802268C8: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x802268CC: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x802268D0: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802268D4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_802268D8:
    // 0x802268D8: jal         0x80226BC4
    // 0x802268DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_3;
    // 0x802268DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x802268E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802268E4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802268E8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802268EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802268F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802268F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802268F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802268FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226900: jr          $ra
    // 0x80226904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80240CB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240CB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80240CB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80240CB8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80240CBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80240CC0: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80240CC4: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80240CC8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80240CCC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80240CD0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80240CD4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80240CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240CDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240CE0: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80240CE4: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80240CE8: beq         $v0, $zero, L_80240D08
    if (ctx->r2 == 0) {
        // 0x80240CEC: addiu       $s4, $s2, 0x440
        ctx->r20 = ADD32(ctx->r18, 0X440);
            goto L_80240D08;
    }
    // 0x80240CEC: addiu       $s4, $s2, 0x440
    ctx->r20 = ADD32(ctx->r18, 0X440);
    // 0x80240CF0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240CF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240CF8: addu        $at, $at, $v0
    gpr jr_addend_80240D00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240CFC: lw          $v0, 0x6168($at)
    ctx->r2 = ADD32(ctx->r1, 0X6168);
    // 0x80240D00: jr          $v0
    // 0x80240D04: nop

    switch (jr_addend_80240D00 >> 2) {
        case 0: goto L_80240D08; break;
        case 1: goto L_80240D24; break;
        case 2: goto L_80240E3C; break;
        case 3: goto L_802411C8; break;
        case 4: goto L_80241298; break;
        case 5: goto L_80241304; break;
        case 6: goto L_80241370; break;
        case 7: goto L_802413DC; break;
        case 8: goto L_80241448; break;
        case 9: goto L_802414B4; break;
        case 10: goto L_80240D08; break;
        case 11: goto L_80241520; break;
        case 12: goto L_8024158C; break;
        case 13: goto L_802415F8; break;
        case 14: goto L_80241664; break;
        case 15: goto L_802416C8; break;
        case 16: goto L_802416F0; break;
        default: switch_error(__func__, 0x80240D00, 0x80256168);
    }
    // 0x80240D04: nop

L_80240D08:
    // 0x80240D08: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80240D0C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80240D10: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240D14: jal         0x8009A3B4
    // 0x80240D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80240D1C: j           L_802416E0
    // 0x80240D20: nop

        goto L_802416E0;
    // 0x80240D20: nop

L_80240D24:
    // 0x80240D24: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80240D28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240D2C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80240D30: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80240D34: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240D38: jal         0x8004F820
    // 0x80240D3C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80240D3C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80240D40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240D44: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240D48: beq         $s3, $zero, L_80240D60
    if (ctx->r19 == 0) {
        // 0x80240D4C: nop
    
            goto L_80240D60;
    }
    // 0x80240D4C: nop

    // 0x80240D50: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80240D54: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80240D58: j           L_80241710
    // 0x80240D5C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
        goto L_80241710;
    // 0x80240D5C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_80240D60:
    // 0x80240D60: jal         0x8004F144
    // 0x80240D64: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80240D64: nop

    after_2:
    // 0x80240D68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80240D6C: beq         $v1, $zero, L_80240DFC
    if (ctx->r3 == 0) {
        // 0x80240D70: sw          $v1, 0xD0($s4)
        MEM_W(0XD0, ctx->r20) = ctx->r3;
            goto L_80240DFC;
    }
    // 0x80240D70: sw          $v1, 0xD0($s4)
    MEM_W(0XD0, ctx->r20) = ctx->r3;
    // 0x80240D74: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80240D78: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80240D7C: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x80240D80: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80240D84: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80240D88: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x80240D8C: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80240D90: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80240D94: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x80240D98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80240D9C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80240DA0: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x80240DA4: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x80240DA8: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x80240DAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240DB0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80240DB4: lh          $v0, 0x1D8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1D8);
    // 0x80240DB8: lh          $v1, 0x1F8($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1F8);
    // 0x80240DBC: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80240DC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240DC4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80240DC8: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80240DCC: lh          $v0, 0x1DA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DA);
    // 0x80240DD0: lh          $v1, 0x1FA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FA);
    // 0x80240DD4: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80240DD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240DDC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80240DE0: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80240DE4: lh          $v0, 0x1DC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DC);
    // 0x80240DE8: lh          $v1, 0x1FC($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FC);
    // 0x80240DEC: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80240DF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240DF4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80240DF8: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_80240DFC:
    // 0x80240DFC: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    // 0x80240E00: jal         0x8002A33C
    // 0x80240E04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80240E04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80240E08: addiu       $a0, $zero, 0x1F7
    ctx->r4 = ADD32(0, 0X1F7);
    // 0x80240E0C: jal         0x8002A33C
    // 0x80240E10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80240E10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80240E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240E18: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x80240E1C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80240E20: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x80240E24: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    // 0x80240E28: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80240E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240E30: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80240E34: j           L_80241710
    // 0x80240E38: sh          $zero, 0xCC($s4)
    MEM_H(0XCC, ctx->r20) = 0;
        goto L_80241710;
    // 0x80240E38: sh          $zero, 0xCC($s4)
    MEM_H(0XCC, ctx->r20) = 0;
L_80240E3C:
    // 0x80240E3C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80240E40: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80240E44: lhu         $v0, 0xCC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XCC);
    // 0x80240E48: addiu       $s7, $zero, 0x22
    ctx->r23 = ADD32(0, 0X22);
    // 0x80240E4C: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80240E50: addiu       $s6, $s6, -0x2400
    ctx->r22 = ADD32(ctx->r22, -0X2400);
    // 0x80240E54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240E58: jal         0x800A3450
    // 0x80240E5C: sh          $v0, 0xCC($s4)
    MEM_H(0XCC, ctx->r20) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80240E5C: sh          $v0, 0xCC($s4)
    MEM_H(0XCC, ctx->r20) = ctx->r2;
    after_5:
    // 0x80240E60: andi        $s3, $v0, 0x3F
    ctx->r19 = ctx->r2 & 0X3F;
L_80240E64:
    // 0x80240E64: jal         0x8004F144
    // 0x80240E68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x80240E68: nop

    after_6:
    // 0x80240E6C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240E70: beql        $s1, $zero, L_80240EF0
    if (ctx->r17 == 0) {
        // 0x80240E74: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_80240EF0;
    }
    goto skip_0;
    // 0x80240E74: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_0:
    // 0x80240E78: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80240E7C: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
    // 0x80240E80: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x80240E84: sb          $t0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r8;
    // 0x80240E88: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80240E8C: sll         $s0, $s3, 1
    ctx->r16 = S32(ctx->r19 << 1);
    // 0x80240E90: addu        $v0, $s0, $s6
    ctx->r2 = ADD32(ctx->r16, ctx->r22);
    // 0x80240E94: sb          $t0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r8;
    // 0x80240E98: sb          $fp, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r30;
    // 0x80240E9C: sb          $s7, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r23;
    // 0x80240EA0: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80240EA4: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80240EA8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80240EAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240EB0: jal         0x800A3450
    // 0x80240EB4: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80240EB4: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    after_7:
    // 0x80240EB8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80240EBC: addiu       $v1, $zero, -0x1F
    ctx->r3 = ADD32(0, -0X1F);
    // 0x80240EC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240EC4: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80240EC8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80240ECC: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80240ED0: lh          $v1, -0x3F08($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3F08);
    // 0x80240ED4: lhu         $a0, 0x18($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X18);
    // 0x80240ED8: addiu       $v0, $s3, 0x15
    ctx->r2 = ADD32(ctx->r19, 0X15);
    // 0x80240EDC: andi        $s3, $v0, 0x3F
    ctx->r19 = ctx->r2 & 0X3F;
    // 0x80240EE0: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80240EE4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80240EE8: sh          $a0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r4;
    // 0x80240EEC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_80240EF0:
    // 0x80240EF0: slti        $v0, $s5, 0x2
    ctx->r2 = SIGNED(ctx->r21) < 0X2 ? 1 : 0;
    // 0x80240EF4: bne         $v0, $zero, L_80240E64
    if (ctx->r2 != 0) {
        // 0x80240EF8: nop
    
            goto L_80240E64;
    }
    // 0x80240EF8: nop

    // 0x80240EFC: lw          $v0, 0xE0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XE0);
    // 0x80240F00: beq         $v0, $zero, L_80240F5C
    if (ctx->r2 == 0) {
        // 0x80240F04: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80240F5C;
    }
    // 0x80240F04: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80240F08: lh          $v1, 0xCC($s4)
    ctx->r3 = MEM_H(ctx->r20, 0XCC);
    // 0x80240F0C: bne         $v1, $v0, L_80240F5C
    if (ctx->r3 != ctx->r2) {
        // 0x80240F10: nop
    
            goto L_80240F5C;
    }
    // 0x80240F10: nop

    // 0x80240F14: jal         0x8004F144
    // 0x80240F18: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80240F18: nop

    after_8:
    // 0x80240F1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240F20: beq         $s1, $zero, L_80240F5C
    if (ctx->r17 == 0) {
        // 0x80240F24: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80240F5C;
    }
    // 0x80240F24: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80240F28: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80240F2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240F30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80240F34: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80240F38: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80240F3C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80240F40: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80240F44: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80240F48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240F4C: jal         0x8009A3B4
    // 0x80240F50: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80240F50: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    after_9:
    // 0x80240F54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80240F58: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_80240F5C:
    // 0x80240F5C: lbu         $v1, 0xA4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA4);
    // 0x80240F60: sltiu       $v0, $v1, 0x2B
    ctx->r2 = ctx->r3 < 0X2B ? 1 : 0;
    // 0x80240F64: bne         $v0, $zero, L_802410F0
    if (ctx->r2 != 0) {
        // 0x80240F68: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_802410F0;
    }
    // 0x80240F68: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80240F6C: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x80240F70: bne         $v1, $v0, L_80240FDC
    if (ctx->r3 != ctx->r2) {
        // 0x80240F74: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80240FDC;
    }
    // 0x80240F74: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80240F78: addiu       $a0, $zero, 0x1F8
    ctx->r4 = ADD32(0, 0X1F8);
    // 0x80240F7C: jal         0x8002A33C
    // 0x80240F80: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80240F80: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_10:
    // 0x80240F84: jal         0x8004EFE4
    // 0x80240F88: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_11;
    // 0x80240F88: nop

    after_11:
    // 0x80240F8C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80240F90: beq         $a0, $zero, L_80240FD4
    if (ctx->r4 == 0) {
        // 0x80240F94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240FD4;
    }
    // 0x80240F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240F98: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80240F9C: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x80240FA0: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80240FA4: addiu       $v0, $zero, 0xFC
    ctx->r2 = ADD32(0, 0XFC);
    // 0x80240FA8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80240FAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80240FB0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80240FB4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80240FB8: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80240FBC: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80240FC0: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x80240FC4: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x80240FC8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80240FCC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80240FD0: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80240FD4:
    // 0x80240FD4: lbu         $v1, 0xA4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA4);
    // 0x80240FD8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_80240FDC:
    // 0x80240FDC: bne         $v1, $v0, L_8024102C
    if (ctx->r3 != ctx->r2) {
        // 0x80240FE0: nop
    
            goto L_8024102C;
    }
    // 0x80240FE0: nop

    // 0x80240FE4: jal         0x8004F144
    // 0x80240FE8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_12;
    // 0x80240FE8: nop

    after_12:
    // 0x80240FEC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240FF0: beq         $s1, $zero, L_8024102C
    if (ctx->r17 == 0) {
        // 0x80240FF4: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8024102C;
    }
    // 0x80240FF4: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80240FF8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80240FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80241000: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80241004: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80241008: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024100C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80241010: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80241014: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80241018: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024101C: jal         0x8009A3B4
    // 0x80241020: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80241020: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    after_13:
    // 0x80241024: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80241028: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_8024102C:
    // 0x8024102C: lh          $v0, 0x1D8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1D8);
    // 0x80241030: lh          $v1, 0x1F8($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1F8);
    // 0x80241034: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80241038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024103C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80241040: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80241044: lh          $v0, 0x1DA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DA);
    // 0x80241048: lh          $v1, 0x1FA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FA);
    // 0x8024104C: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80241050: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241054: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80241058: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8024105C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80241060: lh          $v0, 0x1DC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DC);
    // 0x80241064: lh          $v1, 0x1FC($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FC);
    // 0x80241068: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x8024106C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241070: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80241074: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x80241078: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x8024107C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80241080: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80241084: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80241088: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x8024108C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80241090: sltiu       $v0, $v0, 0xDC
    ctx->r2 = ctx->r2 < 0XDC ? 1 : 0;
    // 0x80241094: bne         $v0, $zero, L_802410A0
    if (ctx->r2 != 0) {
        // 0x80241098: addiu       $v0, $zero, -0x24
        ctx->r2 = ADD32(0, -0X24);
            goto L_802410A0;
    }
    // 0x80241098: addiu       $v0, $zero, -0x24
    ctx->r2 = ADD32(0, -0X24);
    // 0x8024109C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_802410A0:
    // 0x802410A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802410A4: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802410A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802410AC: beq         $v0, $zero, L_802410F0
    if (ctx->r2 == 0) {
        // 0x802410B0: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_802410F0;
    }
    // 0x802410B0: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802410B4: jal         0x8004EFE4
    // 0x802410B8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_14;
    // 0x802410B8: nop

    after_14:
    // 0x802410BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802410C0: beq         $a0, $zero, L_802410EC
    if (ctx->r4 == 0) {
        // 0x802410C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802410EC;
    }
    // 0x802410C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802410C8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802410CC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802410D0: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802410D4: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x802410D8: lw          $a1, 0xD0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XD0);
    // 0x802410DC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802410E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802410E4: jal         0x8009A3B4
    // 0x802410E8: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x802410E8: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    after_15:
L_802410EC:
    // 0x802410EC: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_802410F0:
    // 0x802410F0: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x802410F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802410F8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802410FC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241100: jal         0x8004F820
    // 0x80241104: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x80241104: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x80241108: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8024110C: lbu         $a0, 0xA4($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA4);
    // 0x80241110: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241114: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x80241118: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024111C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241120: lbu         $v0, 0x4A14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A14);
    // 0x80241124: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x80241128: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x8024112C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80241130: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80241134: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241138: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8024113C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80241140: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241144: sw          $v1, 0x20($s2)
        MEM_W(0X20, ctx->r18) = ctx->r3;
            goto L_80241710;
    }
    // 0x80241144: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80241148: lh          $v0, 0xCC($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XCC);
    // 0x8024114C: slti        $v0, $v0, 0x5B
    ctx->r2 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80241150: bne         $v0, $zero, L_80241710
    if (ctx->r2 != 0) {
        // 0x80241154: nop
    
            goto L_80241710;
    }
    // 0x80241154: nop

    // 0x80241158: jal         0x8004EFE4
    // 0x8024115C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_17;
    // 0x8024115C: nop

    after_17:
    // 0x80241160: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80241164: beq         $a0, $zero, L_802411A4
    if (ctx->r4 == 0) {
        // 0x80241168: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802411A4;
    }
    // 0x80241168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024116C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80241170: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x80241174: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80241178: addiu       $v0, $zero, 0xFC
    ctx->r2 = ADD32(0, 0XFC);
    // 0x8024117C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80241180: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80241184: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80241188: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8024118C: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80241190: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x80241194: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80241198: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x8024119C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802411A0: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_802411A4:
    // 0x802411A4: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    // 0x802411A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802411AC: jal         0x8002A2F8
    // 0x802411B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_18;
    // 0x802411B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x802411B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802411B8: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802411BC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802411C0: j           L_802416DC
    // 0x802411C4: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
        goto L_802416DC;
    // 0x802411C4: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
L_802411C8:
    // 0x802411C8: lbu         $v1, 0xA4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA4);
    // 0x802411CC: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802411D0: beq         $v0, $zero, L_80241238
    if (ctx->r2 == 0) {
        // 0x802411D4: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80241238;
    }
    // 0x802411D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802411D8: lh          $v0, 0x1D8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1D8);
    // 0x802411DC: lh          $v1, 0x1F8($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1F8);
    // 0x802411E0: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x802411E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802411E8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802411EC: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x802411F0: lh          $v0, 0x1DA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DA);
    // 0x802411F4: lh          $v1, 0x1FA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FA);
    // 0x802411F8: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x802411FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241200: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80241204: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80241208: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8024120C: lh          $v0, 0x1DC($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1DC);
    // 0x80241210: lh          $v1, 0x1FC($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1FC);
    // 0x80241214: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80241218: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024121C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80241220: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x80241224: lw          $v1, 0xD0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XD0);
    // 0x80241228: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x8024122C: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80241230: j           L_8024124C
    // 0x80241234: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_8024124C;
    // 0x80241234: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80241238:
    // 0x80241238: bne         $v1, $v0, L_80241250
    if (ctx->r3 != ctx->r2) {
        // 0x8024123C: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_80241250;
    }
    // 0x8024123C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241240: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80241244: jal         0x8004F5C4
    // 0x80241248: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_19;
    // 0x80241248: nop

    after_19:
L_8024124C:
    // 0x8024124C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_80241250:
    // 0x80241250: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241254: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241258: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8024125C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241260: jal         0x8004F820
    // 0x80241264: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_20;
    // 0x80241264: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_20:
    // 0x80241268: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8024126C: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241270: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241274: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241278: sh          $v1, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r3;
            goto L_80241710;
    }
    // 0x80241278: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x8024127C: jal         0x80241EE4
    // 0x80241280: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_21;
    // 0x80241280: nop

    after_21:
    // 0x80241284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241288: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x8024128C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80241290: j           L_802416DC
    // 0x80241294: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
        goto L_802416DC;
    // 0x80241294: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
L_80241298:
    // 0x80241298: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8024129C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x802412A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802412A4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802412A8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802412AC: jal         0x8004F820
    // 0x802412B0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_22;
    // 0x802412B0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_22:
    // 0x802412B4: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x802412B8: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x802412BC: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x802412C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802412C4: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802412C8: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x802412C8: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x802412CC: jal         0x80241EE4
    // 0x802412D0: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_23;
    // 0x802412D0: nop

    after_23:
    // 0x802412D4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802412D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802412DC: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802412E0: addiu       $a3, $s2, 0x1F8
    ctx->r7 = ADD32(ctx->r18, 0X1F8);
    // 0x802412E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802412E8: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802412EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802412F0: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x802412F4: jal         0x8003491C
    // 0x802412F8: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_24;
    // 0x802412F8: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_24:
    // 0x802412FC: j           L_802416E0
    // 0x80241300: nop

        goto L_802416E0;
    // 0x80241300: nop

L_80241304:
    // 0x80241304: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241308: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8024130C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241310: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241314: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241318: jal         0x8004F820
    // 0x8024131C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_25;
    // 0x8024131C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_25:
    // 0x80241320: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241324: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241328: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8024132C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241330: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241334: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x80241334: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80241338: jal         0x80241EE4
    // 0x8024133C: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_26;
    // 0x8024133C: nop

    after_26:
    // 0x80241340: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80241344: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80241348: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x8024134C: addiu       $a3, $s2, 0x1D8
    ctx->r7 = ADD32(ctx->r18, 0X1D8);
    // 0x80241350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241354: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x80241358: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8024135C: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x80241360: jal         0x8003491C
    // 0x80241364: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_27;
    // 0x80241364: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_27:
    // 0x80241368: j           L_802416E0
    // 0x8024136C: nop

        goto L_802416E0;
    // 0x8024136C: nop

L_80241370:
    // 0x80241370: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241374: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241378: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024137C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241380: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241384: jal         0x8004F820
    // 0x80241388: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_28;
    // 0x80241388: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_28:
    // 0x8024138C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241390: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241394: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80241398: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024139C: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802413A0: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x802413A0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x802413A4: jal         0x80241EE4
    // 0x802413A8: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_29;
    // 0x802413A8: nop

    after_29:
    // 0x802413AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802413B0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802413B4: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802413B8: addiu       $a3, $s2, 0x1F8
    ctx->r7 = ADD32(ctx->r18, 0X1F8);
    // 0x802413BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802413C0: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802413C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802413C8: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x802413CC: jal         0x8003491C
    // 0x802413D0: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_30;
    // 0x802413D0: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_30:
    // 0x802413D4: j           L_802416E0
    // 0x802413D8: nop

        goto L_802416E0;
    // 0x802413D8: nop

L_802413DC:
    // 0x802413DC: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802413E0: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x802413E4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802413E8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802413EC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802413F0: jal         0x8004F820
    // 0x802413F4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_31;
    // 0x802413F4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_31:
    // 0x802413F8: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x802413FC: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241400: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80241404: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241408: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8024140C: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x8024140C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80241410: jal         0x80241EE4
    // 0x80241414: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_32;
    // 0x80241414: nop

    after_32:
    // 0x80241418: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8024141C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80241420: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80241424: addiu       $a3, $s2, 0x1D8
    ctx->r7 = ADD32(ctx->r18, 0X1D8);
    // 0x80241428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024142C: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x80241430: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80241434: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x80241438: jal         0x8003491C
    // 0x8024143C: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_33;
    // 0x8024143C: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_33:
    // 0x80241440: j           L_802416E0
    // 0x80241444: nop

        goto L_802416E0;
    // 0x80241444: nop

L_80241448:
    // 0x80241448: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8024144C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241450: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241454: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241458: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8024145C: jal         0x8004F820
    // 0x80241460: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_34;
    // 0x80241460: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_34:
    // 0x80241464: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241468: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x8024146C: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80241470: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241474: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241478: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x80241478: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8024147C: jal         0x80241EE4
    // 0x80241480: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_35;
    // 0x80241480: nop

    after_35:
    // 0x80241484: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80241488: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8024148C: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80241490: addiu       $a3, $s2, 0x1F8
    ctx->r7 = ADD32(ctx->r18, 0X1F8);
    // 0x80241494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241498: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x8024149C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802414A0: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x802414A4: jal         0x8003491C
    // 0x802414A8: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_36;
    // 0x802414A8: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_36:
    // 0x802414AC: j           L_802416E0
    // 0x802414B0: nop

        goto L_802416E0;
    // 0x802414B0: nop

L_802414B4:
    // 0x802414B4: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802414B8: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x802414BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802414C0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802414C4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802414C8: jal         0x8004F820
    // 0x802414CC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_37;
    // 0x802414CC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_37:
    // 0x802414D0: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x802414D4: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x802414D8: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x802414DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802414E0: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802414E4: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x802414E4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x802414E8: jal         0x80241EE4
    // 0x802414EC: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_38;
    // 0x802414EC: nop

    after_38:
    // 0x802414F0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802414F4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802414F8: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802414FC: addiu       $a3, $s2, 0x1D8
    ctx->r7 = ADD32(ctx->r18, 0X1D8);
    // 0x80241500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241504: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x80241508: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8024150C: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x80241510: jal         0x8003491C
    // 0x80241514: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_39;
    // 0x80241514: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_39:
    // 0x80241518: j           L_802416E0
    // 0x8024151C: nop

        goto L_802416E0;
    // 0x8024151C: nop

L_80241520:
    // 0x80241520: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241524: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241528: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024152C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241530: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241534: jal         0x8004F820
    // 0x80241538: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_40;
    // 0x80241538: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_40:
    // 0x8024153C: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241540: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241544: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80241548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024154C: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241550: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x80241550: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80241554: jal         0x80241EE4
    // 0x80241558: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_41;
    // 0x80241558: nop

    after_41:
    // 0x8024155C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80241560: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80241564: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80241568: addiu       $a3, $s2, 0x1F8
    ctx->r7 = ADD32(ctx->r18, 0X1F8);
    // 0x8024156C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241570: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x80241574: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80241578: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x8024157C: jal         0x8003491C
    // 0x80241580: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_42;
    // 0x80241580: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_42:
    // 0x80241584: j           L_802416E0
    // 0x80241588: nop

        goto L_802416E0;
    // 0x80241588: nop

L_8024158C:
    // 0x8024158C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241590: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241594: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241598: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8024159C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802415A0: jal         0x8004F820
    // 0x802415A4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_43;
    // 0x802415A4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_43:
    // 0x802415A8: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x802415AC: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x802415B0: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x802415B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802415B8: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802415BC: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x802415BC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x802415C0: jal         0x80241EE4
    // 0x802415C4: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_44;
    // 0x802415C4: nop

    after_44:
    // 0x802415C8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802415CC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802415D0: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802415D4: addiu       $a3, $s2, 0x1D8
    ctx->r7 = ADD32(ctx->r18, 0X1D8);
    // 0x802415D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802415DC: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802415E0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802415E4: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x802415E8: jal         0x8003491C
    // 0x802415EC: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_45;
    // 0x802415EC: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_45:
    // 0x802415F0: j           L_802416E0
    // 0x802415F4: nop

        goto L_802416E0;
    // 0x802415F4: nop

L_802415F8:
    // 0x802415F8: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x802415FC: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80241600: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241604: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241608: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8024160C: jal         0x8004F820
    // 0x80241610: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_46;
    // 0x80241610: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_46:
    // 0x80241614: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241618: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x8024161C: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80241620: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241624: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241628: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x80241628: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8024162C: jal         0x80241EE4
    // 0x80241630: nop

    func_80241EE4_ovl28(rdram, ctx);
        goto after_47;
    // 0x80241630: nop

    after_47:
    // 0x80241634: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80241638: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8024163C: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80241640: addiu       $a3, $s2, 0x1F8
    ctx->r7 = ADD32(ctx->r18, 0X1F8);
    // 0x80241644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241648: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x8024164C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80241650: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x80241654: jal         0x8003491C
    // 0x80241658: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_48;
    // 0x80241658: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_48:
    // 0x8024165C: j           L_802416E0
    // 0x80241660: nop

        goto L_802416E0;
    // 0x80241660: nop

L_80241664:
    // 0x80241664: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80241668: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8024166C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241670: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80241674: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80241678: jal         0x8004F820
    // 0x8024167C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_49;
    // 0x8024167C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_49:
    // 0x80241680: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80241684: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x80241688: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8024168C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241690: bgez        $a0, L_80241710
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80241694: sh          $v0, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r2;
            goto L_80241710;
    }
    // 0x80241694: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x80241698: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8024169C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802416A0: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802416A4: addiu       $a3, $s2, 0x1D8
    ctx->r7 = ADD32(ctx->r18, 0X1D8);
    // 0x802416A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802416AC: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802416B0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802416B4: sb          $v0, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = ctx->r2;
    // 0x802416B8: jal         0x8003491C
    // 0x802416BC: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_50;
    // 0x802416BC: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
    after_50:
    // 0x802416C0: j           L_802416E0
    // 0x802416C4: nop

        goto L_802416E0;
    // 0x802416C4: nop

L_802416C8:
    // 0x802416C8: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802416CC: bgez        $v0, L_80241710
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802416D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241710;
    }
    // 0x802416D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802416D4: sh          $v0, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r2;
    // 0x802416D8: sb          $zero, 0x9A($s4)
    MEM_B(0X9A, ctx->r20) = 0;
L_802416DC:
    // 0x802416DC: sb          $zero, 0x9B($s4)
    MEM_B(0X9B, ctx->r20) = 0;
L_802416E0:
    // 0x802416E0: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802416E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802416E8: j           L_80241710
    // 0x802416EC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80241710;
    // 0x802416EC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_802416F0:
    // 0x802416F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802416F4: jal         0x80241E88
    // 0x802416F8: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    func_80241E88_ovl28(rdram, ctx);
        goto after_51;
    // 0x802416F8: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    after_51:
    // 0x802416FC: beq         $v0, $zero, L_80241710
    if (ctx->r2 == 0) {
        // 0x80241700: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241710;
    }
    // 0x80241700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241704: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80241708: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x8024170C: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
L_80241710:
    // 0x80241710: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80241714: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80241718: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8024171C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80241720: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80241724: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80241728: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024172C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80241730: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241734: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241738: jr          $ra
    // 0x8024173C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024173C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80230CB8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80230CBC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80230CC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CC4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80230CC8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80230CCC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80230CD0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230CD4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230CD8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80230CDC: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80230CE0: beq         $v0, $zero, L_80231050
    if (ctx->r2 == 0) {
        // 0x80230CE4: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_80231050;
    }
    // 0x80230CE4: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x80230CE8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230CEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230CF0: addu        $at, $at, $v0
    gpr jr_addend_80230CF8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230CF4: lw          $v0, 0x5D48($at)
    ctx->r2 = ADD32(ctx->r1, 0X5D48);
    // 0x80230CF8: jr          $v0
    // 0x80230CFC: nop

    switch (jr_addend_80230CF8 >> 2) {
        case 0: goto L_80230D00; break;
        case 1: goto L_80230D14; break;
        case 2: goto L_80230D60; break;
        case 3: goto L_80230D8C; break;
        case 4: goto L_80230DE4; break;
        case 5: goto L_80230DF0; break;
        case 6: goto L_80230FF0; break;
        case 7: goto L_80230E38; break;
        case 8: goto L_80230F94; break;
        case 9: goto L_80230FF0; break;
        case 10: goto L_80231018; break;
        default: switch_error(__func__, 0x80230CF8, 0x80255D48);
    }
    // 0x80230CFC: nop

L_80230D00:
    // 0x80230D00: jal         0x80230B3C
    // 0x80230D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230B3C_ovl28(rdram, ctx);
        goto after_0;
    // 0x80230D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230D08: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230D14:
    // 0x80230D14: jal         0x802314A0
    // 0x80230D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802314A0_ovl28(rdram, ctx);
        goto after_1;
    // 0x80230D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230D1C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230D20: beq         $v0, $zero, L_80230D3C
    if (ctx->r2 == 0) {
        // 0x80230D24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230D3C;
    }
    // 0x80230D24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230D2C: jal         0x80050294
    // 0x80230D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80230D34: j           L_80230D54
    // 0x80230D38: nop

        goto L_80230D54;
    // 0x80230D38: nop

L_80230D3C:
    // 0x80230D3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230D40: jal         0x80050294
    // 0x80230D44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80230D44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80230D48: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80230D4C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230D50: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80230D54:
    // 0x80230D54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230D60:
    // 0x80230D60: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x80230D64: bne         $v0, $s0, L_80231054
    if (ctx->r2 != ctx->r16) {
        // 0x80230D68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231054;
    }
    // 0x80230D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D6C: jal         0x802314E8
    // 0x80230D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802314E8_ovl28(rdram, ctx);
        goto after_4;
    // 0x80230D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230D74: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230D78: beql        $v0, $zero, L_80231050
    if (ctx->r2 == 0) {
        // 0x80230D7C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_80231050;
    }
    goto skip_0;
    // 0x80230D7C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x80230D80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D84: j           L_8023104C
    // 0x80230D88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023104C;
    // 0x80230D88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230D8C:
    // 0x80230D8C: jal         0x8006FF84
    // 0x80230D90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x80230D90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80230D94: beq         $v0, $zero, L_80231050
    if (ctx->r2 == 0) {
        // 0x80230D98: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_80231050;
    }
    // 0x80230D98: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x80230D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230DA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230DA4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230DA8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230DAC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230DB0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80230DB4: jal         0x8004CB2C
    // 0x80230DB8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80230DB8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x80230DBC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80230DC0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230DC4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80230DC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80230DCC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230DD0: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80230DD4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230DD8: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x80230DDC: j           L_80231050
    // 0x80230DE0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_80231050;
    // 0x80230DE0: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_80230DE4:
    // 0x80230DE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230DE8: j           L_8023104C
    // 0x80230DEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023104C;
    // 0x80230DEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230DF0:
    // 0x80230DF0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80230DF4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230DF8: bne         $v0, $zero, L_80230E20
    if (ctx->r2 != 0) {
        // 0x80230DFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230E20;
    }
    // 0x80230DFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230E04: jal         0x80050294
    // 0x80230E08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230E08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80230E0C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80230E10: jal         0x8002A33C
    // 0x80230E14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80230E14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x80230E18: j           L_80230E2C
    // 0x80230E1C: nop

        goto L_80230E2C;
    // 0x80230E1C: nop

L_80230E20:
    // 0x80230E20: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230E28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230E2C:
    // 0x80230E2C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E30: j           L_8023104C
    // 0x80230E34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023104C;
    // 0x80230E34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230E38:
    // 0x80230E38: jal         0x802314A0
    // 0x80230E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802314A0_ovl28(rdram, ctx);
        goto after_9;
    // 0x80230E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80230E40: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230E44: beql        $v0, $zero, L_80230F78
    if (ctx->r2 == 0) {
        // 0x80230E48: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80230F78;
    }
    goto skip_1;
    // 0x80230E48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x80230E4C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80230E50: bne         $v1, $zero, L_80230E74
    if (ctx->r3 != 0) {
        // 0x80230E54: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80230E74;
    }
    // 0x80230E54: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80230E58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230E5C: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80230E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230E64: jal         0x800610AC
    // 0x80230E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x80230E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80230E6C: j           L_80230F88
    // 0x80230E70: nop

        goto L_80230F88;
    // 0x80230E70: nop

L_80230E74:
    // 0x80230E74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230E78: bnel        $v1, $v0, L_80230E9C
    if (ctx->r3 != ctx->r2) {
        // 0x80230E7C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80230E9C;
    }
    goto skip_2;
    // 0x80230E7C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x80230E80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230E84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230E88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230E8C: jal         0x800610AC
    // 0x80230E90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x80230E90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x80230E94: j           L_80230F88
    // 0x80230E98: nop

        goto L_80230F88;
    // 0x80230E98: nop

L_80230E9C:
    // 0x80230E9C: beq         $v0, $zero, L_80230F00
    if (ctx->r2 == 0) {
        // 0x80230EA0: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80230F00;
    }
    // 0x80230EA0: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80230EA4: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80230EA8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80230EAC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80230EB0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80230EB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230EB8: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80230EBC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80230EC0: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80230EC4: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230ECC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230ED0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80230ED4: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80230ED8: mfhi        $t0
    ctx->r8 = hi;
    // 0x80230EDC: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80230EE0: nop

    // 0x80230EE4: jal         0x80069754
    // 0x80230EE8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x80230EE8: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x80230EEC: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230EF0: jal         0x8006036C
    // 0x80230EF4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80230EF4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x80230EF8: j           L_80230F88
    // 0x80230EFC: nop

        goto L_80230F88;
    // 0x80230EFC: nop

L_80230F00:
    // 0x80230F00: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230F04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230F08: beq         $v1, $v0, L_80230F74
    if (ctx->r3 == ctx->r2) {
        // 0x80230F0C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80230F74;
    }
    // 0x80230F0C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80230F10: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80230F14: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x80230F18: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230F1C: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x80230F20: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230F24: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230F28: beq         $v1, $zero, L_80230F48
    if (ctx->r3 == 0) {
        // 0x80230F2C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230F48;
    }
    // 0x80230F2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230F30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230F38: jal         0x800610AC
    // 0x80230F3C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x80230F3C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x80230F40: j           L_80230F5C
    // 0x80230F44: nop

        goto L_80230F5C;
    // 0x80230F44: nop

L_80230F48:
    // 0x80230F48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80230F4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230F50: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80230F54: jal         0x80069754
    // 0x80230F58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x80230F58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_80230F5C:
    // 0x80230F5C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230F60: jal         0x8006036C
    // 0x80230F64: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x80230F64: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x80230F68: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80230F6C: j           L_80230F88
    // 0x80230F70: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_80230F88;
    // 0x80230F70: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80230F74:
    // 0x80230F74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80230F78:
    // 0x80230F78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230F7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230F80: jal         0x80069754
    // 0x80230F84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x80230F84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_80230F88:
    // 0x80230F88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230F8C: j           L_8023104C
    // 0x80230F90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023104C;
    // 0x80230F90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230F94:
    // 0x80230F94: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230F98: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230F9C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230FA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230FA4: bne         $v0, $zero, L_80231054
    if (ctx->r2 != 0) {
        // 0x80230FA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231054;
    }
    // 0x80230FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FAC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80230FB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230FB4: bne         $v0, $zero, L_80230FD8
    if (ctx->r2 != 0) {
        // 0x80230FB8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80230FD8;
    }
    // 0x80230FB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230FBC: jal         0x80050294
    // 0x80230FC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x80230FC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80230FC4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x80230FC8: jal         0x8002A33C
    // 0x80230FCC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x80230FCC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x80230FD0: j           L_80230FE4
    // 0x80230FD4: nop

        goto L_80230FE4;
    // 0x80230FD4: nop

L_80230FD8:
    // 0x80230FD8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230FDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230FE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230FE4:
    // 0x80230FE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230FE8: j           L_8023104C
    // 0x80230FEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023104C;
    // 0x80230FEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230FF0:
    // 0x80230FF0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80230FF4: bgez        $v0, L_80231008
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230FF8: nop
    
            goto L_80231008;
    }
    // 0x80230FF8: nop

    // 0x80230FFC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231000: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231004: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231008:
    // 0x80231008: jal         0x8005044C
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x80231010: j           L_80231054
    // 0x80231014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80231054;
    // 0x80231014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231018:
    // 0x80231018: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8023101C: jal         0x8004CB2C
    // 0x80231020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x80231020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x80231024: jal         0x80070050
    // 0x80231028: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x80231028: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8023102C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231030: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80231034: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231038: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023103C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80231040: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80231044: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80231048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023104C:
    // 0x8023104C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231050:
    // 0x80231050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231054:
    // 0x80231054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231058: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023105C: jal         0x80047284
    // 0x80231060: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x80231060: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x80231064: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231068: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8023106C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231070: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80231074: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231078: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x8023107C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231080: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80231084: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80231088: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023108C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80231090: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80231094: jal         0x80051E18
    // 0x80231098: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x80231098: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x8023109C: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x802310A0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802310A4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802310A8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802310AC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802310B0: jr          $ra
    // 0x802310B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802310B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80228310_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228310: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228314: lb          $v0, 0x63CA($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X63CA);
    // 0x80228318: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022831C: lw          $v1, 0x63D0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X63D0);
    // 0x80228320: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80228324: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80228328: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022832C: addiu       $a1, $a1, 0x63C8
    ctx->r5 = ADD32(ctx->r5, 0X63C8);
    // 0x80228330: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80228334: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80228338: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022833C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80228340: beq         $a0, $v0, L_80228368
    if (ctx->r4 == ctx->r2) {
        // 0x80228344: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80228368;
    }
    // 0x80228344: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80228348: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022834C: bne         $a0, $v0, L_80228360
    if (ctx->r4 != ctx->r2) {
        // 0x80228350: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228360;
    }
    // 0x80228350: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228354: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228358: j           L_80228368
    // 0x8022835C: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
        goto L_80228368;
    // 0x8022835C: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
L_80228360:
    // 0x80228360: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228364: sb          $v0, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = ctx->r2;
L_80228368:
    // 0x80228368: lb          $v1, 0x2($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2);
    // 0x8022836C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80228370: lb          $a0, 0x5($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X5);
    // 0x80228374: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228378: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022837C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x80228380: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80228384: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80228388: sb          $v1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r3;
    // 0x8022838C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80228390: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80228394: beq         $v1, $v0, L_802283B0
    if (ctx->r3 == ctx->r2) {
        // 0x80228398: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802283B0;
    }
    // 0x80228398: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022839C: bne         $v1, $v0, L_802283AC
    if (ctx->r3 != ctx->r2) {
        // 0x802283A0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802283AC;
    }
    // 0x802283A0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802283A4: j           L_802283B0
    // 0x802283A8: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
        goto L_802283B0;
    // 0x802283A8: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_802283AC:
    // 0x802283AC: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_802283B0:
    // 0x802283B0: lb          $v1, 0x5($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X5);
    // 0x802283B4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x802283B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802283BC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802283C0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802283C4: sb          $a0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r4;
    // 0x802283C8: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x802283CC: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x802283D0: sb          $a0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r4;
    // 0x802283D4: sb          $v1, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r3;
    // 0x802283D8: jr          $ra
    // 0x802283DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802283DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8024BD30_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BD34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024BD38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024BD3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BD40: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BD44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BD48: lw          $v0, 0x5440($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5440);
    // 0x8024BD4C: jalr        $v0
    // 0x8024BD50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024BD50: nop

    after_0:
    // 0x8024BD54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024BD58: jr          $ra
    // 0x8024BD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024BD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802272E8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802272EC: beq         $v1, $zero, L_80227304
    if (ctx->r3 == 0) {
        // 0x802272F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227304;
    }
    // 0x802272F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272F4: beq         $v1, $v0, L_802273D0
    if (ctx->r3 == ctx->r2) {
        // 0x802272F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802273D0;
    }
    // 0x802272F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802272FC: j           L_80227460
    // 0x80227300: nop

        goto L_80227460;
    // 0x80227300: nop

L_80227304:
    // 0x80227304: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227308: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x8022730C: jal         0x8004F418
    // 0x80227310: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227310: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x80227314: jal         0x8004F418
    // 0x80227318: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80227318: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x8022731C: jal         0x8004F418
    // 0x80227320: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80227320: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x80227324: jal         0x8004F418
    // 0x80227328: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80227328: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    after_3:
    // 0x8022732C: jal         0x8004F418
    // 0x80227330: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80227330: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_4:
    // 0x80227334: jal         0x8004F418
    // 0x80227338: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    func_8004F418_2A818(rdram, ctx);
        goto after_5;
    // 0x80227338: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    after_5:
    // 0x8022733C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227340: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227344: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80227348: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x8022734C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227350: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80227354: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80227358: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022735C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80227360: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227364: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227368: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022736C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227370: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80227374: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227378: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022737C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227380: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80227384: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227388: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022738C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227390: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80227394: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227398: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022739C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802273A0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802273A4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802273A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802273AC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802273B0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802273B4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802273B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802273BC: addiu       $v0, $zero, -0x15
    ctx->r2 = ADD32(0, -0X15);
    // 0x802273C0: jal         0x80036E48
    // 0x802273C4: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x802273C4: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    after_6:
    // 0x802273C8: j           L_80227460
    // 0x802273CC: nop

        goto L_80227460;
    // 0x802273CC: nop

L_802273D0:
    // 0x802273D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802273D4: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x802273D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273DC: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802273E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273E8: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802273EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802273F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273F4: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802273F8: addiu       $v0, $zero, 0x898
    ctx->r2 = ADD32(0, 0X898);
    // 0x802273FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227400: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80227404: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227408: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022740C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80227410: lui         $v0, 0x898
    ctx->r2 = S32(0X898 << 16);
    // 0x80227414: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227418: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022741C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227420: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227424: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80227428: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022742C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227430: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80227434: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227438: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8022743C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227440: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80227444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227448: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022744C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227450: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80227454: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227458: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022745C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80227460:
    // 0x80227460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227464: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227468: jr          $ra
    // 0x8022746C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022746C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245F90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80245F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80245F98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245F9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80245FA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80245FA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80245FA8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80245FAC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80245FB0: beq         $v0, $zero, L_80246234
    if (ctx->r2 == 0) {
        // 0x80245FB4: addiu       $s1, $s0, 0xC0
        ctx->r17 = ADD32(ctx->r16, 0XC0);
            goto L_80246234;
    }
    // 0x80245FB4: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    // 0x80245FB8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80245FBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80245FC0: addu        $at, $at, $v0
    gpr jr_addend_80245FC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245FC4: lw          $v0, 0x61B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X61B0);
    // 0x80245FC8: jr          $v0
    // 0x80245FCC: nop

    switch (jr_addend_80245FC8 >> 2) {
        case 0: goto L_80245FD0; break;
        case 1: goto L_80246030; break;
        case 2: goto L_80246090; break;
        case 3: goto L_80246120; break;
        case 4: goto L_802461A0; break;
        default: switch_error(__func__, 0x80245FC8, 0x802561B0);
    }
    // 0x80245FCC: nop

L_80245FD0:
    // 0x80245FD0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80245FD4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80245FD8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80245FDC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80245FE0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80245FE4: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x80245FE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80245FEC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80245FF0: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x80245FF4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80245FF8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80245FFC: jal         0x8004DEE8
    // 0x80246000: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_0;
    // 0x80246000: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x80246004: lh          $v1, 0x4C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4C);
    // 0x80246008: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8024600C: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x80246010: bne         $v1, $zero, L_8024601C
    if (ctx->r3 != 0) {
        // 0x80246014: nop
    
            goto L_8024601C;
    }
    // 0x80246014: nop

    // 0x80246018: break       7
    do_break(2149867544);
L_8024601C:
    // 0x8024601C: mflo        $v0
    ctx->r2 = lo;
    // 0x80246020: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
    // 0x80246024: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80246028: jal         0x8002A33C
    // 0x8024602C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8024602C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_1:
L_80246030:
    // 0x80246030: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80246034: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80246038: lhu         $a3, 0x4C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4C);
    // 0x8024603C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80246040: lh          $a2, 0x56($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X56);
    // 0x80246044: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x80246048: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8024604C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80246050: jal         0x8004DBA0
    // 0x80246054: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80246054: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80246058: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8024605C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80246060: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80246064: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246068: bgez        $v0, L_80246234
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024606C: lui         $v1, 0x2E50
        ctx->r3 = S32(0X2E50 << 16);
            goto L_80246234;
    }
    // 0x8024606C: lui         $v1, 0x2E50
    ctx->r3 = S32(0X2E50 << 16);
    // 0x80246070: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80246074: ori         $v1, $v1, 0x5050
    ctx->r3 = ctx->r3 | 0X5050;
    // 0x80246078: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024607C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80246080: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80246084: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80246088: j           L_80246234
    // 0x8024608C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
        goto L_80246234;
    // 0x8024608C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
L_80246090:
    // 0x80246090: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80246094: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80246098: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x8024609C: lhu         $a3, 0x4C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4C);
    // 0x802460A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802460A4: lh          $a2, 0x56($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X56);
    // 0x802460A8: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x802460AC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802460B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802460B4: jal         0x8004DBA0
    // 0x802460B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x802460B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x802460BC: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x802460C0: lui         $v1, 0xFFEF
    ctx->r3 = S32(0XFFEF << 16);
    // 0x802460C4: ori         $v1, $v1, 0xEFF0
    ctx->r3 = ctx->r3 | 0XEFF0;
    // 0x802460C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802460CC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x802460D0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802460D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802460D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802460DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802460E0: bgez        $v0, L_80246234
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802460E4: addiu       $a0, $zero, 0x1DB
        ctx->r4 = ADD32(0, 0X1DB);
            goto L_80246234;
    }
    // 0x802460E4: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    // 0x802460E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802460EC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802460F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802460F4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802460F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802460FC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80246100: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80246104: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80246108: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8024610C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246110: jal         0x8002A33C
    // 0x80246114: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80246114: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    after_4:
    // 0x80246118: j           L_80246234
    // 0x8024611C: nop

        goto L_80246234;
    // 0x8024611C: nop

L_80246120:
    // 0x80246120: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80246124: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x80246128: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8024612C: beq         $v0, $zero, L_80246234
    if (ctx->r2 == 0) {
        // 0x80246130: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80246234;
    }
    // 0x80246130: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80246134: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80246138: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024613C: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80246140: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246144: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80246148: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024614C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80246150: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80246154: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246158: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8024615C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80246160: jal         0x8009A3B4
    // 0x80246164: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80246164: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_5:
    // 0x80246168: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8024616C: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80246170: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80246174: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246178: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024617C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80246180: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80246184: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80246188: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8024618C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80246190: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80246194: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80246198: j           L_80246230
    // 0x8024619C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80246230;
    // 0x8024619C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_802461A0:
    // 0x802461A0: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x802461A4: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x802461A8: ori         $v1, $v1, 0x1010
    ctx->r3 = ctx->r3 | 0X1010;
    // 0x802461AC: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802461B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802461B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802461B8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x802461BC: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802461C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802461C4: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802461C8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802461CC: jal         0x8009A3B4
    // 0x802461D0: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802461D0: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_6:
    // 0x802461D4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802461D8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802461DC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x802461E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802461E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802461E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802461EC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802461F0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802461F4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802461F8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802461FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80246200: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80246204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246208: bgez        $v0, L_80246234
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024620C: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80246234;
    }
    // 0x8024620C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80246210: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80246214: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80246218: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x8024621C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80246220: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80246224: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80246228: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024622C: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
L_80246230:
    // 0x80246230: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80246234:
    // 0x80246234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80246238: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024623C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80246240: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246244: jr          $ra
    // 0x80246248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80246248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024624C: nop

;}
RECOMP_FUNC void func_8022B7B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7B8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B7BC: addiu       $a1, $a1, 0x63E0
    ctx->r5 = ADD32(ctx->r5, 0X63E0);
    // 0x8022B7C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022B7C4: lb          $v0, 0x63EA($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X63EA);
    // 0x8022B7C8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022B7CC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B7D0: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022B7D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B7D8: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B7DC: beq         $a0, $v0, L_8022B804
    if (ctx->r4 == ctx->r2) {
        // 0x8022B7E0: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8022B804;
    }
    // 0x8022B7E0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8022B7E4: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B7E8: bne         $a0, $v0, L_8022B7FC
    if (ctx->r4 != ctx->r2) {
        // 0x8022B7EC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B7FC;
    }
    // 0x8022B7EC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B7F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B7F4: j           L_8022B804
    // 0x8022B7F8: sb          $zero, 0x63EA($at)
    MEM_B(0X63EA, ctx->r1) = 0;
        goto L_8022B804;
    // 0x8022B7F8: sb          $zero, 0x63EA($at)
    MEM_B(0X63EA, ctx->r1) = 0;
L_8022B7FC:
    // 0x8022B7FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B800: sb          $v0, 0x63EA($at)
    MEM_B(0X63EA, ctx->r1) = ctx->r2;
L_8022B804:
    // 0x8022B804: lb          $v1, 0xA($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA);
    // 0x8022B808: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8022B80C: lb          $a0, 0xD($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XD);
    // 0x8022B810: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B814: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B818: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8022B81C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B820: sb          $v1, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r3;
    // 0x8022B824: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x8022B828: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022B82C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B830: beq         $v1, $v0, L_8022B84C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B834: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B84C;
    }
    // 0x8022B834: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B838: bne         $v1, $v0, L_8022B848
    if (ctx->r3 != ctx->r2) {
        // 0x8022B83C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B848;
    }
    // 0x8022B83C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022B840: j           L_8022B84C
    // 0x8022B844: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
        goto L_8022B84C;
    // 0x8022B844: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8022B848:
    // 0x8022B848: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_8022B84C:
    // 0x8022B84C: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x8022B850: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8022B854: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B858: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B85C: lbu         $v0, 0x8($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X8);
    // 0x8022B860: sb          $a0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r4;
    // 0x8022B864: lbu         $v1, 0xB($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XB);
    // 0x8022B868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B86C: sb          $v0, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = ctx->r2;
    // 0x8022B870: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x8022B874: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B878: sb          $v1, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = ctx->r3;
    // 0x8022B87C: jr          $ra
    // 0x8022B880: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8022B880: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80238520_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023852C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80238530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238534: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238538: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023853C: jal         0x8009A3B4
    // 0x80238540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80238540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80238544: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80238548: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023854C: jal         0x8009A3B4
    // 0x80238550: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80238550: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80238554: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80238558: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023855C: jal         0x8009A3B4
    // 0x80238560: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80238560: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80238564: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80238568: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023856C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238570: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80238574: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80238578: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023857C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80238580: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238584: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238588: lw          $v0, 0x4170($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4170);
    // 0x8023858C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238590: jalr        $v0
    // 0x80238594: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80238594: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80238598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023859C: jal         0x80238FEC
    // 0x802385A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80238FEC_ovl28(rdram, ctx);
        goto after_4;
    // 0x802385A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802385A4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802385A8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802385AC: beq         $a1, $v0, L_802385C8
    if (ctx->r5 == ctx->r2) {
        // 0x802385B0: nop
    
            goto L_802385C8;
    }
    // 0x802385B0: nop

    // 0x802385B4: lh          $a2, 0x4E2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4E2);
    // 0x802385B8: jal         0x80050294
    // 0x802385BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802385BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802385C0: j           L_802385D0
    // 0x802385C4: nop

        goto L_802385D0;
    // 0x802385C4: nop

L_802385C8:
    // 0x802385C8: jal         0x8005044C
    // 0x802385CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802385CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802385D0:
    // 0x802385D0: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x802385D4: beq         $v0, $zero, L_802385EC
    if (ctx->r2 == 0) {
        // 0x802385D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802385EC;
    }
    // 0x802385D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802385DC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802385E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802385E4: jal         0x8003B564
    // 0x802385E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x802385E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_802385EC:
    // 0x802385EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802385F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802385F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802385F8: jr          $ra
    // 0x802385FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802385FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227DF8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DF8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227DFC: bne         $v0, $zero, L_80227E0C
    if (ctx->r2 != 0) {
        // 0x80227E00: nop
    
            goto L_80227E0C;
    }
    // 0x80227E00: nop

    // 0x80227E04: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227E08: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80227E0C:
    // 0x80227E0C: jr          $ra
    // 0x80227E10: nop

    TRACE_RETURN()
    return;
    // 0x80227E10: nop

;}
RECOMP_FUNC void func_80248508_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024850C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248510: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248514: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x80248518: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024851C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248520: jal         0x8006033C
    // 0x80248524: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80248524: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    after_0:
    // 0x80248528: beq         $v0, $zero, L_80248574
    if (ctx->r2 == 0) {
        // 0x8024852C: nop
    
            goto L_80248574;
    }
    // 0x8024852C: nop

    // 0x80248530: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248534: addiu       $s0, $s0, 0x514C
    ctx->r16 = ADD32(ctx->r16, 0X514C);
    // 0x80248538: jal         0x8003E6BC
    // 0x8024853C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8024853C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80248540: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248544: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248548: jal         0x80071ACC
    // 0x8024854C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x8024854C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_2:
    // 0x80248550: jal         0x8003E6BC
    // 0x80248554: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80248554: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x80248558: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024855C: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248560: jal         0x80071ACC
    // 0x80248564: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x80248564: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_4:
    // 0x80248568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024856C: j           L_80248594
    // 0x80248570: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80248594;
    // 0x80248570: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248574:
    // 0x80248574: jal         0x802492D0
    // 0x80248578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802492D0_ovl28(rdram, ctx);
        goto after_5;
    // 0x80248578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8024857C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248580: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248584: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80248588: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024858C: jal         0x8024932C
    // 0x80248590: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024932C_ovl28(rdram, ctx);
        goto after_6;
    // 0x80248590: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_6:
L_80248594:
    // 0x80248594: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248598: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024859C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802485A0: jr          $ra
    // 0x802485A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802485A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248870_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248874: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248878: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024887C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248880: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248884: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248888: lw          $v0, 0x512C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X512C);
    // 0x8024888C: jalr        $v0
    // 0x80248890: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80248890: nop

    after_0:
    // 0x80248894: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248898: jr          $ra
    // 0x8024889C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024889C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D760_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D764: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D76C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023D770: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023D774: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D778: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D77C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023D780: beq         $v0, $zero, L_8023DB1C
    if (ctx->r2 == 0) {
        // 0x8023D784: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023DB1C;
    }
    // 0x8023D784: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023D788: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023D78C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023D790: addu        $at, $at, $v0
    gpr jr_addend_8023D798 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D794: lw          $v0, 0x6028($at)
    ctx->r2 = ADD32(ctx->r1, 0X6028);
    // 0x8023D798: jr          $v0
    // 0x8023D79C: nop

    switch (jr_addend_8023D798 >> 2) {
        case 0: goto L_8023D7A0; break;
        case 1: goto L_8023D838; break;
        case 2: goto L_8023D9A4; break;
        case 3: goto L_8023DA64; break;
        case 4: goto L_8023DAA0; break;
        default: switch_error(__func__, 0x8023D798, 0x80256028);
    }
    // 0x8023D79C: nop

L_8023D7A0:
    // 0x8023D7A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D7A4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023D7A8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D7AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D7B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D7B4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D7B8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023D7BC: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
    // 0x8023D7C0: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8023D7C4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023D7C8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023D7CC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023D7D0: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023D7D4: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023D7D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D7DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D7E0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023D7E4: addiu       $a0, $zero, 0x1D7
    ctx->r4 = ADD32(0, 0X1D7);
    // 0x8023D7E8: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023D7EC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8023D7F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023D7F4: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8023D7F8: sb          $zero, 0x52($s1)
    MEM_B(0X52, ctx->r17) = 0;
    // 0x8023D7FC: sb          $zero, 0x72($s1)
    MEM_B(0X72, ctx->r17) = 0;
    // 0x8023D800: sb          $zero, 0x73($s1)
    MEM_B(0X73, ctx->r17) = 0;
    // 0x8023D804: jal         0x8002A33C
    // 0x8023D808: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023D808: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023D80C: lh          $v0, 0x7A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7A);
    // 0x8023D810: bgtz        $v0, L_8023DB1C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023D814: addiu       $a0, $zero, 0x1E3
        ctx->r4 = ADD32(0, 0X1E3);
            goto L_8023DB1C;
    }
    // 0x8023D814: addiu       $a0, $zero, 0x1E3
    ctx->r4 = ADD32(0, 0X1E3);
    // 0x8023D818: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023D81C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D820: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
    // 0x8023D824: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023D828: jal         0x8002A33C
    // 0x8023D82C: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023D82C: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023D830: j           L_8023DB1C
    // 0x8023D834: nop

        goto L_8023DB1C;
    // 0x8023D834: nop

L_8023D838:
    // 0x8023D838: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023D83C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D840: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023D844: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023D848: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023D84C: jal         0x8004F820
    // 0x8023D850: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023D850: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_2:
    // 0x8023D854: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023D858: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023D85C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023D860: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023D864: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023D868: lhu         $a2, 0x4D5A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4D5A);
    // 0x8023D86C: lhu         $v0, 0x50($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X50);
    // 0x8023D870: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D874: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D878: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023D87C: sh          $a2, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r6;
    // 0x8023D880: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023D884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D888: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023D88C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023D890: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D894: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023D898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D89C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D8A0: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023D8A4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D8A8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023D8AC: jal         0x8004DA90
    // 0x8023D8B0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023D8B0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_3:
    // 0x8023D8B4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D8B8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023D8BC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023D8C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D8C4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023D8C8: bgez        $v0, L_8023D974
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D8CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D974;
    }
    // 0x8023D8CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D8D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D8D4: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8023D8D8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D8DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D8E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D8E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D8E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D8EC: andi        $v0, $v0, 0xFE7F
    ctx->r2 = ctx->r2 & 0XFE7F;
    // 0x8023D8F0: jal         0x8023EE10
    // 0x8023D8F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8023EE10_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023D8F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023D8F8: beq         $v0, $zero, L_8023D90C
    if (ctx->r2 == 0) {
        // 0x8023D8FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D90C;
    }
    // 0x8023D8FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D900: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D904: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023D908: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023D90C:
    // 0x8023D90C: jal         0x8023EE10
    // 0x8023D910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023EE10_ovl28(rdram, ctx);
        goto after_5;
    // 0x8023D910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8023D914: beq         $v0, $zero, L_8023D928
    if (ctx->r2 == 0) {
        // 0x8023D918: nop
    
            goto L_8023D928;
    }
    // 0x8023D918: nop

    // 0x8023D91C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D920: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x8023D924: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023D928:
    // 0x8023D928: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D92C: andi        $v0, $v0, 0x180
    ctx->r2 = ctx->r2 & 0X180;
    // 0x8023D930: beq         $v0, $zero, L_8023D940
    if (ctx->r2 == 0) {
        // 0x8023D934: addiu       $a0, $zero, 0x1D8
        ctx->r4 = ADD32(0, 0X1D8);
            goto L_8023D940;
    }
    // 0x8023D934: addiu       $a0, $zero, 0x1D8
    ctx->r4 = ADD32(0, 0X1D8);
    // 0x8023D938: jal         0x8002A33C
    // 0x8023D93C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023D93C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8023D940:
    // 0x8023D940: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x8023D944: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023D948: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x8023D94C: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8023D950: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023D954: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023D958: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023D95C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8023D960: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023D964: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023D968: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8023D96C: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023D970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023D974:
    // 0x8023D974: jal         0x8023EEC8
    // 0x8023D978: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023D978: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x8023D97C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D980: jal         0x8023EEC8
    // 0x8023D984: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_8;
    // 0x8023D984: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8023D988: lbu         $v0, 0x72($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X72);
    // 0x8023D98C: lbu         $v1, 0x73($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X73);
    // 0x8023D990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D994: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023D998: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
    // 0x8023D99C: j           L_8023DB1C
    // 0x8023D9A0: sb          $v1, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r3;
        goto L_8023DB1C;
    // 0x8023D9A0: sb          $v1, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r3;
L_8023D9A4:
    // 0x8023D9A4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023D9A8: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x8023D9AC: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8023D9B0: lhu         $a1, 0x64($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X64);
    // 0x8023D9B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023D9B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023D9BC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023D9C0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023D9C4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8023D9C8: lb          $v0, 0x72($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X72);
    // 0x8023D9CC: beq         $v0, $zero, L_8023D9E8
    if (ctx->r2 == 0) {
        // 0x8023D9D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D9E8;
    }
    // 0x8023D9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D9D4: jal         0x8023EEC8
    // 0x8023D9D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023D9D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_9:
    // 0x8023D9DC: lbu         $v0, 0x72($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X72);
    // 0x8023D9E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D9E4: sb          $v0, 0x72($s1)
    MEM_B(0X72, ctx->r17) = ctx->r2;
L_8023D9E8:
    // 0x8023D9E8: lb          $v0, 0x73($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X73);
    // 0x8023D9EC: beq         $v0, $zero, L_8023DA08
    if (ctx->r2 == 0) {
        // 0x8023D9F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023DA08;
    }
    // 0x8023D9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D9F4: jal         0x8023EEC8
    // 0x8023D9F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023EEC8_ovl28(rdram, ctx);
        goto after_10;
    // 0x8023D9F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x8023D9FC: lbu         $v0, 0x73($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X73);
    // 0x8023DA00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DA04: sb          $v0, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r2;
L_8023DA08:
    // 0x8023DA08: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023DA0C: bgez        $v0, L_8023DB1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023DA10: nop
    
            goto L_8023DB1C;
    }
    // 0x8023DA10: nop

    // 0x8023DA14: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023DA18: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023DA1C: beq         $v0, $zero, L_8023DA2C
    if (ctx->r2 == 0) {
        // 0x8023DA20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023DA2C;
    }
    // 0x8023DA20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DA24: lw          $v1, 0x68($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X68);
    // 0x8023DA28: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023DA2C:
    // 0x8023DA2C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023DA30: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8023DA34: beq         $v0, $zero, L_8023DA44
    if (ctx->r2 == 0) {
        // 0x8023DA38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023DA44;
    }
    // 0x8023DA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DA3C: lw          $v1, 0x6C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X6C);
    // 0x8023DA40: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023DA44:
    // 0x8023DA44: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023DA48: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8023DA4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DA50: andi        $v1, $v1, 0xEF
    ctx->r3 = ctx->r3 & 0XEF;
    // 0x8023DA54: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8023DA58: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023DA5C: j           L_8023DB1C
    // 0x8023DA60: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
        goto L_8023DB1C;
    // 0x8023DA60: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
L_8023DA64:
    // 0x8023DA64: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x8023DA68: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8023DA6C: beq         $v0, $zero, L_8023DB1C
    if (ctx->r2 == 0) {
        // 0x8023DA70: andi        $v0, $a0, 0xEF
        ctx->r2 = ctx->r4 & 0XEF;
            goto L_8023DB1C;
    }
    // 0x8023DA70: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8023DA74: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023DA78: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023DA7C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023DA80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023DA84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023DA88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023DA8C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023DA90: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023DA94: addiu       $v0, $zero, -0x180
    ctx->r2 = ADD32(0, -0X180);
    // 0x8023DA98: j           L_8023DB1C
    // 0x8023DA9C: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
        goto L_8023DB1C;
    // 0x8023DA9C: sh          $v0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r2;
L_8023DAA0:
    // 0x8023DAA0: jal         0x8003E934
    // 0x8023DAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_11;
    // 0x8023DAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023DAA8: lhu         $a0, 0x50($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X50);
    // 0x8023DAAC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023DAB0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023DAB4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023DAB8: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8023DABC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023DAC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023DAC4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023DAC8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023DACC: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023DAD0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023DAD4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023DAD8: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DADC: mflo        $a2
    ctx->r6 = lo;
    // 0x8023DAE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023DAE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023DAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DAEC: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023DAF0: jal         0x8004DA90
    // 0x8023DAF4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_12;
    // 0x8023DAF4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_12:
    // 0x8023DAF8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023DAFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DB00: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023DB04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DB08: bgez        $v0, L_8023DB1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023DB0C: nop
    
            goto L_8023DB1C;
    }
    // 0x8023DB0C: nop

    // 0x8023DB10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023DB14: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023DB18: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023DB1C:
    // 0x8023DB1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DB20: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023DB24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023DB28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023DB2C: jr          $ra
    // 0x8023DB30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023DB30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231DC0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231DC8: lhu         $v0, 0x37C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X37C);
    // 0x80231DCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231DD0: sh          $v0, 0x37C($a0)
    MEM_H(0X37C, ctx->r4) = ctx->r2;
    // 0x80231DD4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80231DD8: bne         $v0, $zero, L_80231DF0
    if (ctx->r2 != 0) {
        // 0x80231DDC: nop
    
            goto L_80231DF0;
    }
    // 0x80231DDC: nop

    // 0x80231DE0: jal         0x802324AC
    // 0x80231DE4: nop

    func_802324AC_ovl28(rdram, ctx);
        goto after_0;
    // 0x80231DE4: nop

    after_0:
    // 0x80231DE8: j           L_80231E1C
    // 0x80231DEC: nop

        goto L_80231E1C;
    // 0x80231DEC: nop

L_80231DF0:
    // 0x80231DF0: lw          $v0, 0x358($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X358);
    // 0x80231DF4: beq         $v0, $zero, L_80231E1C
    if (ctx->r2 == 0) {
        // 0x80231DF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231E1C;
    }
    // 0x80231DF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231DFC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80231E00: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231E04: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231E08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231E0C: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231E10: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80231E14: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80231E18: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80231E1C:
    // 0x80231E1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231E20: jr          $ra
    // 0x80231E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BA20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BA24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BA28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BA2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BA30: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023BA34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BA38: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023BA3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023BA40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023BA44: jal         0x8004D5D4
    // 0x8023BA48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023BA48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023BA4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BA50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BA54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023BA58: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023BA5C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023BA60: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023BA64: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023BA68: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BA6C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023BA70: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023BA74: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023BA78: jal         0x8023C510
    // 0x8023BA7C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_8023C510_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023BA7C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_1:
    // 0x8023BA80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BA84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023BA88: jal         0x8023C538
    // 0x8023BA8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023C538_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023BA8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023BA90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023BA94: bne         $v0, $zero, L_8023BAB4
    if (ctx->r2 != 0) {
        // 0x8023BA98: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_8023BAB4;
    }
    // 0x8023BA98: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023BA9C: addiu       $v0, $zero, 0x421
    ctx->r2 = ADD32(0, 0X421);
    // 0x8023BAA0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023BAA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BAA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BAAC: j           L_8023BAC8
    // 0x8023BAB0: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
        goto L_8023BAC8;
    // 0x8023BAB0: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
L_8023BAB4:
    // 0x8023BAB4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023BAB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BABC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023BAC0: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
    // 0x8023BAC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023BAC8:
    // 0x8023BAC8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BACC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023BAD0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023BAD4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023BAD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BADC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BAE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BAE4: jr          $ra
    // 0x8023BAE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BAE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024D924_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D924: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024D928: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024D92C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D930: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024D934: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x8024D938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024D93C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024D940: addiu       $a1, $a1, 0x6384
    ctx->r5 = ADD32(ctx->r5, 0X6384);
    // 0x8024D944: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8024D948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024D94C: jal         0x8009A3B4
    // 0x8024D950: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024D950: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8024D954: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024D958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D95C: beq         $v1, $v0, L_8024D9E4
    if (ctx->r3 == ctx->r2) {
        // 0x8024D960: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024D9E4;
    }
    // 0x8024D960: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024D964: beql        $v0, $zero, L_8024D97C
    if (ctx->r2 == 0) {
        // 0x8024D968: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024D97C;
    }
    goto skip_0;
    // 0x8024D968: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024D96C: beq         $v1, $zero, L_8024D994
    if (ctx->r3 == 0) {
        // 0x8024D970: nop
    
            goto L_8024D994;
    }
    // 0x8024D970: nop

    // 0x8024D974: j           L_8024DA60
    // 0x8024D978: nop

        goto L_8024DA60;
    // 0x8024D978: nop

L_8024D97C:
    // 0x8024D97C: beq         $v1, $v0, L_8024DA14
    if (ctx->r3 == ctx->r2) {
        // 0x8024D980: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024DA14;
    }
    // 0x8024D980: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024D984: beq         $v1, $v0, L_8024DA44
    if (ctx->r3 == ctx->r2) {
        // 0x8024D988: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_8024DA44;
    }
    // 0x8024D988: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024D98C: j           L_8024DA60
    // 0x8024D990: nop

        goto L_8024DA60;
    // 0x8024D990: nop

L_8024D994:
    // 0x8024D994: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8024D998: addiu       $s1, $s1, -0x3A9E
    ctx->r17 = ADD32(ctx->r17, -0X3A9E);
    // 0x8024D99C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024D9A0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8024D9A4: bne         $v0, $zero, L_8024D9BC
    if (ctx->r2 != 0) {
        // 0x8024D9A8: nop
    
            goto L_8024D9BC;
    }
    // 0x8024D9A8: nop

    // 0x8024D9AC: jal         0x8006033C
    // 0x8024D9B0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024D9B0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_1:
    // 0x8024D9B4: beq         $v0, $zero, L_8024D9CC
    if (ctx->r2 == 0) {
        // 0x8024D9B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024D9CC;
    }
    // 0x8024D9B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8024D9BC:
    // 0x8024D9BC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024D9C0: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8024D9C4: j           L_8024DA58
    // 0x8024D9C8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8024DA58;
    // 0x8024D9C8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8024D9CC:
    // 0x8024D9CC: jal         0x8024DD2C
    // 0x8024D9D0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024D9D0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8024D9D4: beq         $v0, $zero, L_8024DA60
    if (ctx->r2 == 0) {
        // 0x8024D9D8: nop
    
            goto L_8024DA60;
    }
    // 0x8024D9D8: nop

    // 0x8024D9DC: j           L_8024DA34
    // 0x8024D9E0: nop

        goto L_8024DA34;
    // 0x8024D9E0: nop

L_8024D9E4:
    // 0x8024D9E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D9E8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D9EC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024D9F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D9F4: bne         $v0, $zero, L_8024DA60
    if (ctx->r2 != 0) {
        // 0x8024D9F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024DA60;
    }
    // 0x8024D9F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024D9FC: jal         0x8024DD2C
    // 0x8024DA00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_3;
    // 0x8024DA00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8024DA04: bne         $v0, $zero, L_8024DA34
    if (ctx->r2 != 0) {
        // 0x8024DA08: nop
    
            goto L_8024DA34;
    }
    // 0x8024DA08: nop

    // 0x8024DA0C: j           L_8024DA60
    // 0x8024DA10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8024DA60;
    // 0x8024DA10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8024DA14:
    // 0x8024DA14: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8024DA18: jal         0x800616FC
    // 0x8024DA1C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8024DA1C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_4:
    // 0x8024DA20: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024DA24: addiu       $v0, $v0, -0x3A9E
    ctx->r2 = ADD32(ctx->r2, -0X3A9E);
    // 0x8024DA28: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8024DA2C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8024DA30: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
L_8024DA34:
    // 0x8024DA34: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024DA38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024DA3C: j           L_8024DA60
    // 0x8024DA40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024DA60;
    // 0x8024DA40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024DA44:
    // 0x8024DA44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DA48: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024DA4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024DA50: bne         $v0, $zero, L_8024DA60
    if (ctx->r2 != 0) {
        // 0x8024DA54: nop
    
            goto L_8024DA60;
    }
    // 0x8024DA54: nop

L_8024DA58:
    // 0x8024DA58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DA5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024DA60:
    // 0x8024DA60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024DA64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024DA68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DA6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024DA70: jr          $ra
    // 0x8024DA74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024DA74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D4B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4B8: lhu         $v0, 0x32A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32A);
    // 0x8022D4BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D4C0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022D4C4: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022D4C8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022D4CC:
    // 0x8022D4CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D4D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D4D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D4D8: lbu         $v0, 0x3068($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3068);
    // 0x8022D4DC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022D4E0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022D4E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D4E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D4EC: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D4F0: bne         $v0, $zero, L_8022D510
    if (ctx->r2 != 0) {
        // 0x8022D4F4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D510;
    }
    // 0x8022D4F4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D4F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D4FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D500: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D504: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022D508: bne         $v0, $zero, L_8022D4CC
    if (ctx->r2 != 0) {
        // 0x8022D50C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022D4CC;
    }
    // 0x8022D50C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022D510:
    // 0x8022D510: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D514: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022D518: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D51C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D524: beq         $v1, $v0, L_8022D558
    if (ctx->r3 == ctx->r2) {
        // 0x8022D528: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_8022D558;
    }
    // 0x8022D528: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022D52C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D530: beql        $v0, $zero, L_8022D548
    if (ctx->r2 == 0) {
        // 0x8022D534: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D548;
    }
    goto skip_0;
    // 0x8022D534: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D538: beql        $v1, $zero, L_8022D568
    if (ctx->r3 == 0) {
        // 0x8022D53C: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022D568;
    }
    goto skip_1;
    // 0x8022D53C: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x8022D540: j           L_8022D568
    // 0x8022D544: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022D568;
    // 0x8022D544: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022D548:
    // 0x8022D548: beql        $v1, $v0, L_8022D564
    if (ctx->r3 == ctx->r2) {
        // 0x8022D54C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022D564;
    }
    goto skip_2;
    // 0x8022D54C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_2:
    // 0x8022D550: j           L_8022D568
    // 0x8022D554: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022D568;
    // 0x8022D554: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022D558:
    // 0x8022D558: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D55C: j           L_8022D568
    // 0x8022D560: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022D568;
    // 0x8022D560: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022D564:
    // 0x8022D564: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022D568:
    // 0x8022D568: jr          $ra
    // 0x8022D56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022D56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_802476B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802476B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802476B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802476B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802476BC: jal         0x8004F144
    // 0x802476C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802476C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802476C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802476C8: beq         $v1, $zero, L_802476F0
    if (ctx->r3 == 0) {
        // 0x802476CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802476F0;
    }
    // 0x802476CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802476D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802476D4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x802476D8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802476DC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802476E0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x802476E4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802476E8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802476EC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_802476F0:
    // 0x802476F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802476F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802476F8: jr          $ra
    // 0x802476FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802476FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247EB4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247EB4: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80247EB8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80247EBC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80247EC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80247EC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247EC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80247ECC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247ED0: sw          $a1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r5;
    // 0x80247ED4: jr          $ra
    // 0x80247ED8: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80247ED8: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_802314E8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802314EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802314F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802314F4: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x802314F8: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802314FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231500: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80231504: jal         0x8009A3B4
    // 0x80231508: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231508: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023150C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80231510: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80231514: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x80231518: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023151C: jal         0x8009A3B4
    // 0x80231520: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231520: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80231524: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231528: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023152C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80231530: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231534: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80231538: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023153C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80231540: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231544: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80231548: jal         0x8004DF78
    // 0x8023154C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8023154C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80231550: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80231554: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80231558: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023155C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80231560: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80231564: jr          $ra
    // 0x80231568: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80231568: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022EDF0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDF0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022EDF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EDF8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022EDFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EE00: bne         $v0, $zero, L_8022EE0C
    if (ctx->r2 != 0) {
        // 0x8022EE04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EE0C;
    }
    // 0x8022EE04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE08: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022EE0C:
    // 0x8022EE0C: jr          $ra
    // 0x8022EE10: nop

    TRACE_RETURN()
    return;
    // 0x8022EE10: nop

;}
RECOMP_FUNC void func_80230224_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230228: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023022C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230230: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230234: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230238: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023023C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230244: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230248: jal         0x8004D5D4
    // 0x8023024C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023024C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230250: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230254: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230258: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023025C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230260: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230264: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230268: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023026C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230270: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230278: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023027C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230280: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80230284: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230288: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023028C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80230290: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230294: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230298: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023029C: sb          $v0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r2;
    // 0x802302A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802302A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802302A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802302AC: jr          $ra
    // 0x802302B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802302B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244EEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244EEC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80244EF0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80244EF4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80244EF8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80244EFC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80244F00: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80244F04: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80244F08: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80244F0C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80244F10: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80244F14: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80244F18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80244F1C: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80244F20: bne         $v0, $zero, L_80245018
    if (ctx->r2 != 0) {
        // 0x80244F24: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80245018;
    }
    // 0x80244F24: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80244F28: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80244F2C: lh          $a0, 0x16($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X16);
    // 0x80244F30: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x80244F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244F38: slti        $a0, $a0, -0x1E
    ctx->r4 = SIGNED(ctx->r4) < -0X1E ? 1 : 0;
    // 0x80244F3C: bne         $a0, $zero, L_80245038
    if (ctx->r4 != 0) {
        // 0x80244F40: sb          $v0, 0x9($s2)
        MEM_B(0X9, ctx->r18) = ctx->r2;
            goto L_80245038;
    }
    // 0x80244F40: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80244F44: addiu       $a0, $zero, 0x1F6
    ctx->r4 = ADD32(0, 0X1F6);
    // 0x80244F48: jal         0x8002A33C
    // 0x80244F4C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80244F4C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x80244F50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80244F54: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x80244F58: lh          $a0, 0x14($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X14);
    // 0x80244F5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80244F60: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80244F64: lh          $a1, 0x18($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X18);
    // 0x80244F68: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x80244F6C: jal         0x80032664
    // 0x80244F70: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x80244F70: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_1:
    // 0x80244F74: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80244F78: lb          $v1, -0x3BBD($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BBD);
    // 0x80244F7C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80244F80: slti        $v1, $v1, 0x2
    ctx->r3 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80244F84: bne         $v1, $zero, L_80244F90
    if (ctx->r3 != 0) {
        // 0x80244F88: addu        $s4, $v0, $zero
        ctx->r20 = ADD32(ctx->r2, 0);
            goto L_80244F90;
    }
    // 0x80244F88: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80244F8C: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_80244F90:
    // 0x80244F90: beq         $s5, $zero, L_80245038
    if (ctx->r21 == 0) {
        // 0x80244F94: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80245038;
    }
    // 0x80244F94: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80244F98: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80244F9C: addiu       $s7, $zero, 0x32
    ctx->r23 = ADD32(0, 0X32);
    // 0x80244FA0: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80244FA4: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80244FA8: addiu       $s1, $s1, 0x4C64
    ctx->r17 = ADD32(ctx->r17, 0X4C64);
L_80244FAC:
    // 0x80244FAC: jal         0x8004EFE4
    // 0x80244FB0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x80244FB0: nop

    after_2:
    // 0x80244FB4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80244FB8: beql        $s0, $zero, L_80245004
    if (ctx->r16 == 0) {
        // 0x80244FBC: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80245004;
    }
    goto skip_0;
    // 0x80244FBC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80244FC0: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x80244FC4: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x80244FC8: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x80244FCC: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x80244FD0: jal         0x800324B4
    // 0x80244FD4: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80244FD4: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_3:
    // 0x80244FD8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80244FDC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80244FE0: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x80244FE4: jal         0x80032498
    // 0x80244FE8: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80244FE8: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_4:
    // 0x80244FEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80244FF0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80244FF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244FF8: jal         0x8009A3B4
    // 0x80244FFC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80244FFC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_5:
    // 0x80245000: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80245004:
    // 0x80245004: slt         $v0, $s3, $s5
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80245008: bne         $v0, $zero, L_80244FAC
    if (ctx->r2 != 0) {
        // 0x8024500C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80244FAC;
    }
    // 0x8024500C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80245010: j           L_80245038
    // 0x80245014: nop

        goto L_80245038;
    // 0x80245014: nop

L_80245018:
    // 0x80245018: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8024501C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80245020: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80245024: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245028: bne         $v0, $zero, L_80245038
    if (ctx->r2 != 0) {
        // 0x8024502C: nop
    
            goto L_80245038;
    }
    // 0x8024502C: nop

    // 0x80245030: jal         0x8004F4F8
    // 0x80245034: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80245034: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
L_80245038:
    // 0x80245038: lbu         $a0, 0xA($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA);
    // 0x8024503C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80245040: sll         $a1, $a0, 3
    ctx->r5 = S32(ctx->r4 << 3);
    // 0x80245044: sll         $v0, $a0, 11
    ctx->r2 = S32(ctx->r4 << 11);
    // 0x80245048: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024504C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x80245050: sll         $a0, $a0, 19
    ctx->r4 = S32(ctx->r4 << 19);
    // 0x80245054: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x80245058: sw          $a1, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r5;
    // 0x8024505C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80245060: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80245064: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80245068: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8024506C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80245070: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80245074: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80245078: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8024507C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80245080: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80245084: jr          $ra
    // 0x80245088: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80245088: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022DD7C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD7C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022DD80: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022DD84: beq         $v0, $zero, L_8022DDA0
    if (ctx->r2 == 0) {
        // 0x8022DD88: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DDA0;
    }
    // 0x8022DD88: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DD8C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DD90: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022DD94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DD98: bne         $v0, $zero, L_8022DDCC
    if (ctx->r2 != 0) {
        // 0x8022DD9C: nop
    
            goto L_8022DDCC;
    }
    // 0x8022DD9C: nop

L_8022DDA0:
    // 0x8022DDA0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022DDA4: bgez        $v0, L_8022DDCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DDA8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022DDCC;
    }
    // 0x8022DDA8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022DDAC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022DDB0: bnel        $v1, $v0, L_8022DDCC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DDB4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022DDCC;
    }
    goto skip_0;
    // 0x8022DDB4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022DDB8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DDBC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022DDC0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022DDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DDC8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022DDCC:
    // 0x8022DDCC: jr          $ra
    // 0x8022DDD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022DDD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8023DB34_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DB34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DB38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023DB3C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023DB40: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023DB44: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023DB48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023DB4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023DB50: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DB54: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8023DB58: beq         $v0, $zero, L_8023E208
    if (ctx->r2 == 0) {
        // 0x8023DB5C: addiu       $s3, $s2, 0x440
        ctx->r19 = ADD32(ctx->r18, 0X440);
            goto L_8023E208;
    }
    // 0x8023DB5C: addiu       $s3, $s2, 0x440
    ctx->r19 = ADD32(ctx->r18, 0X440);
    // 0x8023DB60: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023DB64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023DB68: addu        $at, $at, $v0
    gpr jr_addend_8023DB70 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DB6C: lw          $v0, 0x6040($at)
    ctx->r2 = ADD32(ctx->r1, 0X6040);
    // 0x8023DB70: jr          $v0
    // 0x8023DB74: nop

    switch (jr_addend_8023DB70 >> 2) {
        case 0: goto L_8023DB78; break;
        case 1: goto L_8023DBD0; break;
        case 2: goto L_8023DCC4; break;
        case 3: goto L_8023DDF0; break;
        case 4: goto L_8023DFA0; break;
        case 5: goto L_8023E19C; break;
        case 6: goto L_8023E1F0; break;
        default: switch_error(__func__, 0x8023DB70, 0x80256040);
    }
    // 0x8023DB74: nop

L_8023DB78:
    // 0x8023DB78: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DB7C: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    // 0x8023DB80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DB84: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023DB88: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x8023DB8C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023DB90: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DB94: addiu       $v0, $zero, -0x180
    ctx->r2 = ADD32(0, -0X180);
    // 0x8023DB98: sh          $v0, 0x50($s3)
    MEM_H(0X50, ctx->r19) = ctx->r2;
    // 0x8023DB9C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023DBA0: sh          $v1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r3;
    // 0x8023DBA4: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8023DBA8: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023DBAC: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023DBB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DBB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DBB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023DBBC: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8023DBC0: sb          $zero, 0x53($s3)
    MEM_B(0X53, ctx->r19) = 0;
    // 0x8023DBC4: sb          $zero, 0x52($s3)
    MEM_B(0X52, ctx->r19) = 0;
    // 0x8023DBC8: j           L_8023E208
    // 0x8023DBCC: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
        goto L_8023E208;
    // 0x8023DBCC: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_8023DBD0:
    // 0x8023DBD0: jal         0x8003E934
    // 0x8023DBD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8023DBD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8023DBD8: lhu         $a0, 0x50($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X50);
    // 0x8023DBDC: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8023DBE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023DBE4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023DBE8: sh          $v1, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r3;
    // 0x8023DBEC: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x8023DBF0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023DBF4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023DBF8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023DBFC: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023DC00: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023DC04: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023DC08: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC0C: mflo        $a2
    ctx->r6 = lo;
    // 0x8023DC10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023DC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023DC18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DC1C: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023DC20: jal         0x8004DA90
    // 0x8023DC24: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023DC24: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_1:
    // 0x8023DC28: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DC2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DC30: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DC34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DC38: bgez        $v0, L_8023E208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023DC3C: addiu       $s0, $s2, 0x14
        ctx->r16 = ADD32(ctx->r18, 0X14);
            goto L_8023E208;
    }
    // 0x8023DC3C: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023DC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DC44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023DC48: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023DC4C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8023DC50: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DC54: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023DC58: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023DC5C: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8023DC60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023DC64: jal         0x8004F820
    // 0x8023DC68: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023DC68: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    after_2:
    // 0x8023DC6C: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    // 0x8023DC70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DC74: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023DC78: addiu       $v1, $zero, -0x40
    ctx->r3 = ADD32(0, -0X40);
    // 0x8023DC7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023DC80: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023DC84: sh          $v0, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r2;
    // 0x8023DC88: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023DC8C: sh          $v0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r2;
    // 0x8023DC90: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x8023DC94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DC98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023DC9C: sb          $v0, 0x53($s3)
    MEM_B(0X53, ctx->r19) = ctx->r2;
    // 0x8023DCA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023DCA4: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DCA8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023DCAC: sh          $v0, 0x50($s3)
    MEM_H(0X50, ctx->r19) = ctx->r2;
    // 0x8023DCB0: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8023DCB4: jal         0x8002A33C
    // 0x8023DCB8: sh          $v1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023DCB8: sh          $v1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r3;
    after_3:
    // 0x8023DCBC: j           L_8023E208
    // 0x8023DCC0: nop

        goto L_8023E208;
    // 0x8023DCC0: nop

L_8023DCC4:
    // 0x8023DCC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DCC8: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023DCCC: lhu         $a1, 0x66($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X66);
    // 0x8023DCD0: lhu         $v1, 0x66($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X66);
    // 0x8023DCD4: lhu         $a2, 0x64($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X64);
    // 0x8023DCD8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023DCDC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023DCE0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023DCE4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023DCE8: jal         0x8003E934
    // 0x8023DCEC: sh          $v1, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8023DCEC: sh          $v1, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r3;
    after_4:
    // 0x8023DCF0: lhu         $a2, 0x50($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X50);
    // 0x8023DCF4: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8023DCF8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023DCFC: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023DD00: sh          $a2, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r6;
    // 0x8023DD04: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x8023DD08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DD0C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023DD10: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023DD14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DD18: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023DD1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023DD20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023DD24: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023DD28: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023DD2C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023DD30: jal         0x8004DA90
    // 0x8023DD34: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8023DD34: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_5:
    // 0x8023DD38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023DD3C: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x8023DD40: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_8023DD44:
    // 0x8023DD44: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DD48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023DD4C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023DD50: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8023DD54: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8023DD58: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023DD5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023DD60: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8023DD64: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
    // 0x8023DD68: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8023DD6C: bne         $v0, $zero, L_8023DD44
    if (ctx->r2 != 0) {
        // 0x8023DD70: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8023DD44;
    }
    // 0x8023DD70: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8023DD74: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8023DD78: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023DD7C: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8023DD80: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DD84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DD88: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DD8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DD90: bgez        $v0, L_8023E208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023DD94: addiu       $a0, $s2, 0x1C
        ctx->r4 = ADD32(ctx->r18, 0X1C);
            goto L_8023E208;
    }
    // 0x8023DD94: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8023DD98: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023DD9C: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DDA0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023DDA4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DDA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023DDAC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023DDB0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023DDB4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023DDB8: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x8023DDBC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DDC0: lui         $v0, 0xFFBF
    ctx->r2 = S32(0XFFBF << 16);
    // 0x8023DDC4: sh          $zero, 0x6($s3)
    MEM_H(0X6, ctx->r19) = 0;
    // 0x8023DDC8: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8023DDCC: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023DDD0: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x8023DDD4: jal         0x8004DD04
    // 0x8023DDD8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8023DDD8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_6:
    // 0x8023DDDC: addiu       $a0, $zero, 0x1DD
    ctx->r4 = ADD32(0, 0X1DD);
    // 0x8023DDE0: jal         0x8002A33C
    // 0x8023DDE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8023DDE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023DDE8: j           L_8023E208
    // 0x8023DDEC: nop

        goto L_8023E208;
    // 0x8023DDEC: nop

L_8023DDF0:
    // 0x8023DDF0: lhu         $v1, 0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DDF4: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x8023DDF8: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x8023DDFC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023DE00: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023DE04: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DE08: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023DE0C: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023DE10: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x8023DE14: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DE18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DE1C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023DE20: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023DE24: bne         $a0, $zero, L_8023DE4C
    if (ctx->r4 != 0) {
        // 0x8023DE28: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_8023DE4C;
    }
    // 0x8023DE28: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x8023DE2C: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8023DE30: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
    // 0x8023DE34: addiu       $a3, $s2, 0x14
    ctx->r7 = ADD32(ctx->r18, 0X14);
    // 0x8023DE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DE3C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8023DE40: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023DE44: jal         0x8003491C
    // 0x8023DE48: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    func_8003491C_FD1C(rdram, ctx);
        goto after_8;
    // 0x8023DE48: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    after_8:
L_8023DE4C:
    // 0x8023DE4C: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8023DE50: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023DE54: bne         $v0, $zero, L_8023DEE4
    if (ctx->r2 != 0) {
        // 0x8023DE58: nop
    
            goto L_8023DEE4;
    }
    // 0x8023DE58: nop

    // 0x8023DE5C: jal         0x8004F144
    // 0x8023DE60: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_9;
    // 0x8023DE60: nop

    after_9:
    // 0x8023DE64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023DE68: beq         $s0, $zero, L_8023DEE4
    if (ctx->r16 == 0) {
        // 0x8023DE6C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8023DEE4;
    }
    // 0x8023DE6C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023DE70: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023DE74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023DE78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023DE7C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023DE80: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8023DE84: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023DE88: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023DE8C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023DE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DE94: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023DE98: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023DE9C: jal         0x8009A3B4
    // 0x8023DEA0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8023DEA0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_10:
    // 0x8023DEA4: jal         0x800A3450
    // 0x8023DEA8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8023DEA8: nop

    after_11:
    // 0x8023DEAC: lhu         $v1, 0x38($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X38);
    // 0x8023DEB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DEB4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023DEB8: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023DEBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DEC0: jal         0x8003E934
    // 0x8023DEC4: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_12;
    // 0x8023DEC4: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_12:
    // 0x8023DEC8: jal         0x800A3450
    // 0x8023DECC: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8023DECC: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_13:
    // 0x8023DED0: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x8023DED4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023DED8: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023DEDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DEE0: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_8023DEE4:
    // 0x8023DEE4: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DEE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DEEC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DEF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DEF4: bgez        $v0, L_8023E208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023DEF8: addiu       $s0, $s2, 0x14
        ctx->r16 = ADD32(ctx->r18, 0X14);
            goto L_8023E208;
    }
    // 0x8023DEF8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023DEFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DF00: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8023DF04: lbu         $a2, 0xA($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DF08: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023DF0C: addiu       $s1, $s1, 0x49C4
    ctx->r17 = ADD32(ctx->r17, 0X49C4);
    // 0x8023DF10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DF14: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023DF18: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8023DF1C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023DF20: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023DF24: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023DF28: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8023DF2C: sb          $a2, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r6;
    // 0x8023DF30: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023DF34: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023DF38: jal         0x8004EC38
    // 0x8023DF3C: sh          $v0, 0x50($s3)
    MEM_H(0X50, ctx->r19) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_14;
    // 0x8023DF3C: sh          $v0, 0x50($s3)
    MEM_H(0X50, ctx->r19) = ctx->r2;
    after_14:
    // 0x8023DF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DF44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DF48: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023DF4C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023DF50: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8023DF54: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8023DF58: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023DF5C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8023DF60: jal         0x8004F820
    // 0x8023DF64: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x8023DF64: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    after_15:
    // 0x8023DF68: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    // 0x8023DF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DF70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DF74: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023DF78: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x8023DF7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023DF80: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023DF84: sh          $v0, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r2;
    // 0x8023DF88: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023DF8C: jal         0x8002A33C
    // 0x8023DF90: sh          $v0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_16;
    // 0x8023DF90: sh          $v0, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r2;
    after_16:
    // 0x8023DF94: addiu       $a0, $zero, 0x1DE
    ctx->r4 = ADD32(0, 0X1DE);
    // 0x8023DF98: jal         0x8002A33C
    // 0x8023DF9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x8023DF9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_17:
L_8023DFA0:
    // 0x8023DFA0: lhu         $v1, 0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X4);
    // 0x8023DFA4: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x8023DFA8: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x8023DFAC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023DFB0: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023DFB4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DFB8: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023DFBC: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023DFC0: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x8023DFC4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DFC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DFCC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023DFD0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023DFD4: bne         $a0, $zero, L_8023DFFC
    if (ctx->r4 != 0) {
        // 0x8023DFD8: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_8023DFFC;
    }
    // 0x8023DFD8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x8023DFDC: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8023DFE0: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
    // 0x8023DFE4: addiu       $a3, $s2, 0x14
    ctx->r7 = ADD32(ctx->r18, 0X14);
    // 0x8023DFE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DFEC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8023DFF0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023DFF4: jal         0x8003491C
    // 0x8023DFF8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    func_8003491C_FD1C(rdram, ctx);
        goto after_18;
    // 0x8023DFF8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    after_18:
L_8023DFFC:
    // 0x8023DFFC: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8023E000: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E004: bne         $v0, $zero, L_8023E098
    if (ctx->r2 != 0) {
        // 0x8023E008: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023E098;
    }
    // 0x8023E008: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E00C: jal         0x8004F144
    // 0x8023E010: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_19;
    // 0x8023E010: nop

    after_19:
    // 0x8023E014: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023E018: beq         $s0, $zero, L_8023E094
    if (ctx->r16 == 0) {
        // 0x8023E01C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8023E094;
    }
    // 0x8023E01C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023E020: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023E024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023E02C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023E030: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x8023E034: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023E038: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023E03C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023E040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E044: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023E048: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023E04C: jal         0x8009A3B4
    // 0x8023E050: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8023E050: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_20:
    // 0x8023E054: jal         0x800A3450
    // 0x8023E058: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_21;
    // 0x8023E058: nop

    after_21:
    // 0x8023E05C: lhu         $v1, 0x38($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X38);
    // 0x8023E060: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E064: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023E068: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023E06C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E070: jal         0x8003E934
    // 0x8023E074: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_22;
    // 0x8023E074: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_22:
    // 0x8023E078: jal         0x800A3450
    // 0x8023E07C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_23;
    // 0x8023E07C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_23:
    // 0x8023E080: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x8023E084: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023E088: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023E08C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E090: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_8023E094:
    // 0x8023E094: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8023E098:
    // 0x8023E098: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023E09C: lhu         $a1, 0x66($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X66);
    // 0x8023E0A0: lhu         $v1, 0x66($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X66);
    // 0x8023E0A4: lhu         $a2, 0x64($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X64);
    // 0x8023E0A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023E0AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023E0B0: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023E0B4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023E0B8: jal         0x8003E934
    // 0x8023E0BC: sh          $v1, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8023E0BC: sh          $v1, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r3;
    after_24:
    // 0x8023E0C0: lhu         $a2, 0x50($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X50);
    // 0x8023E0C4: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x8023E0C8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023E0CC: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023E0D0: sh          $a2, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r6;
    // 0x8023E0D4: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x8023E0D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E0DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023E0E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023E0E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E0E8: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023E0EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023E0F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023E0F4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023E0F8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023E0FC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023E100: jal         0x8004DA90
    // 0x8023E104: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_25;
    // 0x8023E104: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_25:
    // 0x8023E108: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023E10C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8023E110: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x8023E114: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_8023E118:
    // 0x8023E118: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023E11C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023E120: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x8023E124: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023E128: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8023E12C: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8023E130: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023E134: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023E138: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8023E13C: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
    // 0x8023E140: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8023E144: bne         $v0, $zero, L_8023E118
    if (ctx->r2 != 0) {
        // 0x8023E148: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8023E118;
    }
    // 0x8023E148: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8023E14C: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023E150: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023E154: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023E158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E15C: bgez        $v0, L_8023E208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E160: addiu       $a0, $zero, 0x1DF
        ctx->r4 = ADD32(0, 0X1DF);
            goto L_8023E208;
    }
    // 0x8023E160: addiu       $a0, $zero, 0x1DF
    ctx->r4 = ADD32(0, 0X1DF);
    // 0x8023E164: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8023E168: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E16C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023E170: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023E174: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023E178: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x8023E17C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8023E180: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023E184: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8023E188: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x8023E18C: jal         0x8002A33C
    // 0x8023E190: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_26;
    // 0x8023E190: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    after_26:
    // 0x8023E194: j           L_8023E208
    // 0x8023E198: nop

        goto L_8023E208;
    // 0x8023E198: nop

L_8023E19C:
    // 0x8023E19C: lbu         $a0, 0xF($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XF);
    // 0x8023E1A0: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8023E1A4: beq         $v0, $zero, L_8023E208
    if (ctx->r2 == 0) {
        // 0x8023E1A8: andi        $v0, $a0, 0xEF
        ctx->r2 = ctx->r4 & 0XEF;
            goto L_8023E208;
    }
    // 0x8023E1A8: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8023E1AC: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023E1B0: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8023E1B4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023E1B8: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8023E1BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023E1C0: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x8023E1C4: lh          $v0, 0x7A($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X7A);
    // 0x8023E1C8: bgtz        $v0, L_8023E208
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023E1CC: addiu       $a0, $zero, 0x1E8
        ctx->r4 = ADD32(0, 0X1E8);
            goto L_8023E208;
    }
    // 0x8023E1CC: addiu       $a0, $zero, 0x1E8
    ctx->r4 = ADD32(0, 0X1E8);
    // 0x8023E1D0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023E1D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E1D8: sh          $v0, 0x7A($s3)
    MEM_H(0X7A, ctx->r19) = ctx->r2;
    // 0x8023E1DC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023E1E0: jal         0x8002A33C
    // 0x8023E1E4: sh          $v0, 0x78($s3)
    MEM_H(0X78, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_27;
    // 0x8023E1E4: sh          $v0, 0x78($s3)
    MEM_H(0X78, ctx->r19) = ctx->r2;
    after_27:
    // 0x8023E1E8: j           L_8023E208
    // 0x8023E1EC: nop

        goto L_8023E208;
    // 0x8023E1EC: nop

L_8023E1F0:
    // 0x8023E1F0: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8023E1F4: bgez        $v0, L_8023E208
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023E1F8: nop
    
            goto L_8023E208;
    }
    // 0x8023E1F8: nop

    // 0x8023E1FC: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023E200: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E204: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8023E208:
    // 0x8023E208: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023E20C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E210: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023E214: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E218: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E21C: jr          $ra
    // 0x8023E220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023E220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232E74_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E74: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x80232E78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232E7C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80232E80: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80232E84: lhu         $v1, 0x34A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X34A);
    // 0x80232E88: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232E8C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232E90: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232E94: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
    // 0x80232E98: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80232E9C: sh          $v1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r3;
    // 0x80232EA0: jr          $ra
    // 0x80232EA4: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80232EA4: sb          $a1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8024B688_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B688: lb          $v0, 0xF($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XF);
    // 0x8024B68C: lb          $v1, 0xF($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XF);
    // 0x8024B690: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024B694: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B698: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B69C: lbu         $v0, 0x52A8($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X52A8);
    // 0x8024B6A0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B6A4: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8024B6A8: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x8024B6AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B6B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B6B4: lbu         $v1, 0x52A9($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X52A9);
    // 0x8024B6B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B6BC: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8024B6C0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024B6C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024B6C8: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024B6CC: bne         $v0, $zero, L_8024B6D8
    if (ctx->r2 != 0) {
        // 0x8024B6D0: sb          $v1, 0x23($a0)
        MEM_B(0X23, ctx->r4) = ctx->r3;
            goto L_8024B6D8;
    }
    // 0x8024B6D0: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
    // 0x8024B6D4: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_8024B6D8:
    // 0x8024B6D8: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x8024B6DC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024B6E0: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x8024B6E4: beq         $v1, $v0, L_8024B6F0
    if (ctx->r3 == ctx->r2) {
        // 0x8024B6E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024B6F0;
    }
    // 0x8024B6E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024B6EC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8024B6F0:
    // 0x8024B6F0: jr          $ra
    // 0x8024B6F4: nop

    TRACE_RETURN()
    return;
    // 0x8024B6F4: nop

;}
RECOMP_FUNC void func_8023A6D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A6D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A6D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A6DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A6E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A6E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023A6E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023A6EC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023A6F0: jal         0x8004F820
    // 0x8023A6F4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023A6F4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x8023A6F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023A6FC: lw          $a0, 0x4F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4F0);
    // 0x8023A700: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A704: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A708: beq         $a0, $zero, L_8023A768
    if (ctx->r4 == 0) {
        // 0x8023A70C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023A768;
    }
    // 0x8023A70C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023A710: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8023A714: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023A718: beq         $v0, $zero, L_8023A768
    if (ctx->r2 == 0) {
        // 0x8023A71C: nop
    
            goto L_8023A768;
    }
    // 0x8023A71C: nop

    // 0x8023A720: jal         0x800A3450
    // 0x8023A724: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023A724: nop

    after_1:
    // 0x8023A728: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023A72C: beq         $v0, $zero, L_8023A744
    if (ctx->r2 == 0) {
        // 0x8023A730: nop
    
            goto L_8023A744;
    }
    // 0x8023A730: nop

    // 0x8023A734: jal         0x8023AD88
    // 0x8023A738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AD88_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023A738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023A73C: j           L_8023A7AC
    // 0x8023A740: nop

        goto L_8023A7AC;
    // 0x8023A740: nop

L_8023A744:
    // 0x8023A744: jal         0x8023ACE4
    // 0x8023A748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023ACE4_ovl28(rdram, ctx);
        goto after_3;
    // 0x8023A748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023A74C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A750: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A754: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A758: jal         0x8004DA90
    // 0x8023A75C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8023A75C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023A760: j           L_8023A7AC
    // 0x8023A764: nop

        goto L_8023A7AC;
    // 0x8023A764: nop

L_8023A768:
    // 0x8023A768: jal         0x8005044C
    // 0x8023A76C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023A76C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023A770: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A774: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A778: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A77C: jal         0x8004DA90
    // 0x8023A780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023A780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023A784: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023A788: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x8023A78C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023A790: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
    // 0x8023A794: beql        $v0, $v1, L_8023A79C
    if (ctx->r2 == ctx->r3) {
        // 0x8023A798: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023A79C;
    }
    goto skip_0;
    // 0x8023A798: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_8023A79C:
    // 0x8023A79C: beq         $a0, $zero, L_8023A7AC
    if (ctx->r4 == 0) {
        // 0x8023A7A0: addiu       $a0, $zero, 0x1B7
        ctx->r4 = ADD32(0, 0X1B7);
            goto L_8023A7AC;
    }
    // 0x8023A7A0: addiu       $a0, $zero, 0x1B7
    ctx->r4 = ADD32(0, 0X1B7);
    // 0x8023A7A4: jal         0x8002A33C
    // 0x8023A7A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8023A7A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
L_8023A7AC:
    // 0x8023A7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A7B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A7B4: jr          $ra
    // 0x8023A7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A7B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F7E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F7E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F7E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F7EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F7F0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023F7F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023F7F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F7FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023F800: jal         0x8009A3B4
    // 0x8023F804: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023F804: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023F808: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023F80C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023F810: jal         0x8009A3B4
    // 0x8023F814: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023F814: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023F818: jal         0x80241AE8
    // 0x8023F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80241AE8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023F81C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023F820: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023F824: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F828: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F82C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F830: lw          $v0, 0x49AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X49AC);
    // 0x8023F834: jalr        $v0
    // 0x8023F838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023F838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023F83C: lh          $v0, 0x4D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4D8);
    // 0x8023F840: blez        $v0, L_8023F864
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023F844: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023F864;
    }
    // 0x8023F844: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023F848: lb          $a1, 0x4DA($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X4DA);
    // 0x8023F84C: lb          $a2, 0x4DB($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X4DB);
    // 0x8023F850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F854: jal         0x80050294
    // 0x8023F858: sh          $zero, 0x4D8($s0)
    MEM_H(0X4D8, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8023F858: sh          $zero, 0x4D8($s0)
    MEM_H(0X4D8, ctx->r16) = 0;
    after_4:
    // 0x8023F85C: j           L_8023F874
    // 0x8023F860: nop

        goto L_8023F874;
    // 0x8023F860: nop

L_8023F864:
    // 0x8023F864: bne         $v0, $zero, L_8023F874
    if (ctx->r2 != 0) {
        // 0x8023F868: nop
    
            goto L_8023F874;
    }
    // 0x8023F868: nop

    // 0x8023F86C: jal         0x8005044C
    // 0x8023F870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023F870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023F874:
    // 0x8023F874: lh          $a1, 0x9C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X9C);
    // 0x8023F878: jal         0x80241874
    // 0x8023F87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80241874_ovl28(rdram, ctx);
        goto after_6;
    // 0x8023F87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023F880: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023F884: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F88C: jr          $ra
    // 0x8023F890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023F890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FBC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FBC: jr          $ra
    // 0x80225FC0: nop

    TRACE_RETURN()
    return;
    // 0x80225FC0: nop

;}
RECOMP_FUNC void func_8024CFE0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CFE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CFE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CFE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024CFEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024CFF0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024CFF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CFF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CFFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D000: lw          $v0, 0x5AF8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5AF8);
    // 0x8024D004: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8024D008: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8024D00C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8024D010: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8024D014: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8024D018: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8024D01C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8024D020: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8024D024: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8024D028: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8024D02C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8024D030: jal         0x8024D484
    // 0x8024D034: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8024D484_ovl28(rdram, ctx);
        goto after_0;
    // 0x8024D034: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024D038: beq         $v0, $zero, L_8024D04C
    if (ctx->r2 == 0) {
        // 0x8024D03C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024D04C;
    }
    // 0x8024D03C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D040: jal         0x8004F62C
    // 0x8024D044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8024D044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024D048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024D04C:
    // 0x8024D04C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024D050: jal         0x8024D0CC
    // 0x8024D054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024D0CC_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024D054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024D058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D05C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D060: jr          $ra
    // 0x8024D064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245AB8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245AB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80245ABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80245AC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80245AC4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80245AC8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80245ACC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80245AD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80245AD4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80245AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245ADC: beq         $v1, $v0, L_80245B68
    if (ctx->r3 == ctx->r2) {
        // 0x80245AE0: addiu       $s2, $s1, 0xC0
        ctx->r18 = ADD32(ctx->r17, 0XC0);
            goto L_80245B68;
    }
    // 0x80245AE0: addiu       $s2, $s1, 0xC0
    ctx->r18 = ADD32(ctx->r17, 0XC0);
    // 0x80245AE4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80245AE8: beql        $v0, $zero, L_80245B00
    if (ctx->r2 == 0) {
        // 0x80245AEC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80245B00;
    }
    goto skip_0;
    // 0x80245AEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80245AF0: beq         $v1, $zero, L_80245B18
    if (ctx->r3 == 0) {
        // 0x80245AF4: nop
    
            goto L_80245B18;
    }
    // 0x80245AF4: nop

    // 0x80245AF8: j           L_80245E08
    // 0x80245AFC: nop

        goto L_80245E08;
    // 0x80245AFC: nop

L_80245B00:
    // 0x80245B00: beq         $v1, $v0, L_80245D28
    if (ctx->r3 == ctx->r2) {
        // 0x80245B04: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80245D28;
    }
    // 0x80245B04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80245B08: beq         $v1, $v0, L_80245DA8
    if (ctx->r3 == ctx->r2) {
        // 0x80245B0C: nop
    
            goto L_80245DA8;
    }
    // 0x80245B0C: nop

    // 0x80245B10: j           L_80245E08
    // 0x80245B14: nop

        goto L_80245E08;
    // 0x80245B14: nop

L_80245B18:
    // 0x80245B18: lw          $v0, 0xF4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF4);
    // 0x80245B1C: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x80245B20: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80245B24: bne         $v0, $zero, L_80245B3C
    if (ctx->r2 != 0) {
        // 0x80245B28: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80245B3C;
    }
    // 0x80245B28: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80245B2C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80245B30: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80245B34: j           L_80245E08
    // 0x80245B38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80245E08;
    // 0x80245B38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80245B3C:
    // 0x80245B3C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80245B40: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80245B44: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x80245B48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80245B4C: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80245B50: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    // 0x80245B54: sh          $zero, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = 0;
    // 0x80245B58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80245B5C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80245B60: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80245B64: sb          $a0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r4;
L_80245B68:
    // 0x80245B68: lhu         $v0, 0x48($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X48);
    // 0x80245B6C: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x80245B70: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80245B74: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80245B78: lw          $v1, 0xB4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB4);
    // 0x80245B7C: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80245B80: ori         $v0, $v0, 0x807F
    ctx->r2 = ctx->r2 | 0X807F;
    // 0x80245B84: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80245B88: bnel        $v0, $zero, L_80245BA0
    if (ctx->r2 != 0) {
        // 0x80245B8C: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80245BA0;
    }
    goto skip_1;
    // 0x80245B8C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    skip_1:
    // 0x80245B90: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80245B94: ori         $v0, $v0, 0x808
    ctx->r2 = ctx->r2 | 0X808;
    // 0x80245B98: j           L_80245BA4
    // 0x80245B9C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_80245BA4;
    // 0x80245B9C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_80245BA0:
    // 0x80245BA0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80245BA4:
    // 0x80245BA4: jal         0x8004F144
    // 0x80245BA8: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80245BA8: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    after_0:
    // 0x80245BAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80245BB0: beq         $s0, $zero, L_80245C34
    if (ctx->r16 == 0) {
        // 0x80245BB4: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80245C34;
    }
    // 0x80245BB4: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80245BB8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80245BBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245BC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80245BC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80245BC8: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80245BCC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80245BD0: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80245BD4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80245BD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80245BDC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80245BE0: jal         0x8009A3B4
    // 0x80245BE4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245BE4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_1:
    // 0x80245BE8: jal         0x800A3450
    // 0x80245BEC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80245BEC: nop

    after_2:
    // 0x80245BF0: lhu         $v1, 0x38($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X38);
    // 0x80245BF4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245BF8: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x80245BFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245C00: jal         0x800A3450
    // 0x80245C04: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80245C04: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_3:
    // 0x80245C08: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80245C0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245C10: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x80245C14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245C18: jal         0x800A3450
    // 0x80245C1C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80245C1C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    after_4:
    // 0x80245C20: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x80245C24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245C28: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x80245C2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245C30: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_80245C34:
    // 0x80245C34: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80245C38: lh          $v1, 0x48($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X48);
    // 0x80245C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245C40: bgez        $v1, L_80245CFC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80245C44: sh          $v0, 0x4($s2)
        MEM_H(0X4, ctx->r18) = ctx->r2;
            goto L_80245CFC;
    }
    // 0x80245C44: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80245C48: lw          $a3, 0x34($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X34);
    // 0x80245C4C: lbu         $v1, 0xF($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XF);
    // 0x80245C50: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80245C54: bne         $v0, $zero, L_80245CE4
    if (ctx->r2 != 0) {
        // 0x80245C58: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80245CE4;
    }
    // 0x80245C58: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80245C5C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80245C60: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80245C64: ori         $v0, $v1, 0x20
    ctx->r2 = ctx->r3 | 0X20;
    // 0x80245C68: addiu       $s3, $s1, 0x14
    ctx->r19 = ADD32(ctx->r17, 0X14);
    // 0x80245C6C: sb          $v0, 0xF($a3)
    MEM_B(0XF, ctx->r7) = ctx->r2;
    // 0x80245C70: jal         0x8003491C
    // 0x80245C74: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_5;
    // 0x80245C74: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_5:
    // 0x80245C78: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80245C7C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80245C80: bne         $v1, $v0, L_80245CE4
    if (ctx->r3 != ctx->r2) {
        // 0x80245C84: nop
    
            goto L_80245CE4;
    }
    // 0x80245C84: nop

    // 0x80245C88: jal         0x8004F144
    // 0x80245C8C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x80245C8C: nop

    after_6:
    // 0x80245C90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80245C94: beq         $s0, $zero, L_80245CE4
    if (ctx->r16 == 0) {
        // 0x80245C98: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80245CE4;
    }
    // 0x80245C98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80245C9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80245CA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80245CA4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80245CA8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80245CAC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80245CB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80245CB4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80245CB8: lw          $a1, 0x34($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X34);
    // 0x80245CBC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80245CC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245CC4: jal         0x8009A3B4
    // 0x80245CC8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80245CC8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_7:
    // 0x80245CCC: jal         0x8003E934
    // 0x80245CD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_8;
    // 0x80245CD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x80245CD4: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x80245CD8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80245CDC: jal         0x8002A33C
    // 0x80245CE0: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80245CE0: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_9:
L_80245CE4:
    // 0x80245CE4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80245CE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245CEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80245CF0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80245CF4: j           L_80245E08
    // 0x80245CF8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80245E08;
    // 0x80245CF8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80245CFC:
    // 0x80245CFC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80245D00: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x80245D04: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x80245D08: lhu         $a1, 0x4E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4E);
    // 0x80245D0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80245D10: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80245D14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245D18: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80245D1C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80245D20: j           L_80245E08
    // 0x80245D24: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
        goto L_80245E08;
    // 0x80245D24: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
L_80245D28:
    // 0x80245D28: lhu         $v0, 0xC4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC4);
    // 0x80245D2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80245D30: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x80245D34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245D38: bgez        $v0, L_80245E08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80245D3C: nop
    
            goto L_80245E08;
    }
    // 0x80245D3C: nop

    // 0x80245D40: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80245D44: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80245D48: lw          $a0, 0xF4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XF4);
    // 0x80245D4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245D50: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80245D54: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80245D58: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80245D5C: lh          $v1, 0x182($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X182);
    // 0x80245D60: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80245D64: lui         $a0, 0x8888
    ctx->r4 = S32(0X8888 << 16);
    // 0x80245D68: ori         $a0, $a0, 0x8889
    ctx->r4 = ctx->r4 | 0X8889;
    // 0x80245D6C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80245D70: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245D74: lw          $a0, 0xF4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XF4);
    // 0x80245D78: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80245D7C: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x80245D80: mfhi        $t0
    ctx->r8 = hi;
    // 0x80245D84: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x80245D88: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80245D8C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80245D90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80245D94: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80245D98: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80245D9C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80245DA0: j           L_80245E08
    // 0x80245DA4: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
        goto L_80245E08;
    // 0x80245DA4: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
L_80245DA8:
    // 0x80245DA8: lhu         $v0, 0xC4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC4);
    // 0x80245DAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80245DB0: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x80245DB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245DB8: bgez        $v0, L_80245DF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80245DBC: nop
    
            goto L_80245DF0;
    }
    // 0x80245DBC: nop

    // 0x80245DC0: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80245DC4: lw          $v1, 0xF4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XF4);
    // 0x80245DC8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80245DCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245DD0: lhu         $v0, 0xC0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC0);
    // 0x80245DD4: lhu         $v1, 0x182($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X182);
    // 0x80245DD8: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
    // 0x80245DDC: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80245DE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80245DE4: sh          $v0, 0xC0($s1)
    MEM_H(0XC0, ctx->r17) = ctx->r2;
    // 0x80245DE8: j           L_80245E08
    // 0x80245DEC: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
        goto L_80245E08;
    // 0x80245DEC: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
L_80245DF0:
    // 0x80245DF0: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80245DF4: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x80245DF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80245DFC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80245E00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245E04: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_80245E08:
    // 0x80245E08: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80245E0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80245E10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80245E14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80245E18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80245E1C: jr          $ra
    // 0x80245E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80245E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024AF94_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AF94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024AF98: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8024AF9C: lbu         $s3, 0x3B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X3B);
    // 0x8024AFA0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024AFA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024AFA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024AFAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024AFB0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024AFB4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8024AFB8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8024AFBC: jal         0x800A3450
    // 0x8024AFC0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024AFC0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8024AFC4: andi        $s1, $v0, 0x7
    ctx->r17 = ctx->r2 & 0X7;
    // 0x8024AFC8: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x8024AFCC: andi        $s3, $s3, 0xFF
    ctx->r19 = ctx->r19 & 0XFF;
    // 0x8024AFD0: mult        $s1, $s3
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AFD4: mflo        $s1
    ctx->r17 = lo;
    // 0x8024AFD8: nop

    // 0x8024AFDC: nop

    // 0x8024AFE0: jal         0x800A3450
    // 0x8024AFE4: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024AFE4: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    after_1:
    // 0x8024AFE8: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x8024AFEC: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x8024AFF0: mult        $s0, $s3
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024AFF4: mflo        $s0
    ctx->r16 = lo;
    // 0x8024AFF8: nop

    // 0x8024AFFC: nop

    // 0x8024B000: jal         0x800A3450
    // 0x8024B004: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024B004: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    after_2:
    // 0x8024B008: andi        $s2, $v0, 0x7
    ctx->r18 = ctx->r2 & 0X7;
    // 0x8024B00C: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x8024B010: mult        $s2, $s3
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024B014: mflo        $s2
    ctx->r18 = lo;
    // 0x8024B018: nop

    // 0x8024B01C: nop

    // 0x8024B020: jal         0x8003B8FC
    // 0x8024B024: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    func_8003B8FC_16CFC(rdram, ctx);
        goto after_3;
    // 0x8024B024: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    after_3:
    // 0x8024B028: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8024B02C: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x8024B030: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024B034: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8024B038: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8024B03C: lui         $v1, 0x5200
    ctx->r3 = S32(0X5200 << 16);
    // 0x8024B040: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8024B044: or          $s0, $s0, $v1
    ctx->r16 = ctx->r16 | ctx->r3;
    // 0x8024B048: or          $s1, $s1, $s0
    ctx->r17 = ctx->r17 | ctx->r16;
    // 0x8024B04C: andi        $s2, $s2, 0xFF
    ctx->r18 = ctx->r18 & 0XFF;
    // 0x8024B050: or          $s1, $s1, $s2
    ctx->r17 = ctx->r17 | ctx->r18;
    // 0x8024B054: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8024B058: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x8024B05C: lhu         $a1, 0x28($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X28);
    // 0x8024B060: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8024B064: ori         $a0, $a0, 0x101
    ctx->r4 = ctx->r4 | 0X101;
    // 0x8024B068: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x8024B06C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024B070: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8024B074: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8024B078: lh          $v1, 0x34($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X34);
    // 0x8024B07C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x8024B080: lui         $a0, 0xE100
    ctx->r4 = S32(0XE100 << 16);
    // 0x8024B084: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8024B088: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8024B08C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024B090: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024B094: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8024B098: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024B09C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024B0A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024B0A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024B0A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B0AC: jr          $ra
    // 0x8024B0B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024B0B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024B0B4: nop

    // 0x8024B0B8: nop

    // 0x8024B0BC: nop

;}
RECOMP_FUNC void func_802484D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802484D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802484DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802484E0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802484E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802484E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802484EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802484F0: lw          $v0, 0x510C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X510C);
    // 0x802484F4: jalr        $v0
    // 0x802484F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802484F8: nop

    after_0:
    // 0x802484FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248500: jr          $ra
    // 0x80248504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D960_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D96C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D970: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D974: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D978: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D97C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D980: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D984: beq         $v1, $zero, L_8022D994
    if (ctx->r3 == 0) {
        // 0x8022D988: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022D994;
    }
    // 0x8022D988: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D98C: j           L_8022D99C
    // 0x8022D990: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022D99C;
    // 0x8022D990: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022D994:
    // 0x8022D994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D998: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022D99C:
    // 0x8022D99C: jal         0x8004D5D4
    // 0x8022D9A0: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022D9A0: nop

    after_0:
    // 0x8022D9A4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D9A8: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022D9AC: bne         $a0, $v0, L_8022D9BC
    if (ctx->r4 != ctx->r2) {
        // 0x8022D9B0: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022D9BC;
    }
    // 0x8022D9B0: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x8022D9B4: j           L_8022DA30
    // 0x8022D9B8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_8022DA30;
    // 0x8022D9B8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022D9BC:
    // 0x8022D9BC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D9C0: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x8022D9C4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D9C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D9CC: bne         $v1, $zero, L_8022DA30
    if (ctx->r3 != 0) {
        // 0x8022D9D0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA30;
    }
    // 0x8022D9D0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D9D4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x8022D9D8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D9DC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x8022D9E0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D9E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D9E8: bne         $v1, $zero, L_8022DA30
    if (ctx->r3 != 0) {
        // 0x8022D9EC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA30;
    }
    // 0x8022D9EC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D9F0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x8022D9F4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D9F8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022D9FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022DA00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DA04: bne         $v1, $zero, L_8022DA30
    if (ctx->r3 != 0) {
        // 0x8022DA08: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA30;
    }
    // 0x8022DA08: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022DA0C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x8022DA10: bnel        $a0, $v0, L_8022DA30
    if (ctx->r4 != ctx->r2) {
        // 0x8022DA14: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022DA30;
    }
    goto skip_0;
    // 0x8022DA14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x8022DA18: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022DA1C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DA20: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DA24: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DA28: j           L_8022DA38
    // 0x8022DA2C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_8022DA38;
    // 0x8022DA2C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_8022DA30:
    // 0x8022DA30: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DA34: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_8022DA38:
    // 0x8022DA38: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DA3C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DA40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DA44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DA48: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022DA4C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022DA50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DA54: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DA58: bne         $v0, $zero, L_8022DA64
    if (ctx->r2 != 0) {
        // 0x8022DA5C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_8022DA64;
    }
    // 0x8022DA5C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x8022DA60: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_8022DA64:
    // 0x8022DA64: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022DA68: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022DA6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DA70: jal         0x8009A3B4
    // 0x8022DA74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DA74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022DA78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DA80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DA84: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022DA88: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DA8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DA90: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022DA94: addiu       $v0, $v0, 0x35D0
    ctx->r2 = ADD32(ctx->r2, 0X35D0);
    // 0x8022DA98: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022DA9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DAA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DAA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DAA8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022DAAC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022DAB0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022DAB4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022DAB8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022DABC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DAC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DAC4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DAC8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022DACC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022DAD0: jal         0x80050294
    // 0x8022DAD4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022DAD4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022DAD8: jal         0x8022DAF4
    // 0x8022DADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DAF4_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022DADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DAE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAEC: jr          $ra
    // 0x8022DAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233E9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233EA0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233EA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233EA8: addiu       $a0, $s0, 0x360
    ctx->r4 = ADD32(ctx->r16, 0X360);
    // 0x80233EAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233EB0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233EB4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80233EB8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80233EBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233EC0: jal         0x800540D0
    // 0x80233EC4: addiu       $s2, $s0, 0x1D8
    ctx->r18 = ADD32(ctx->r16, 0X1D8);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80233EC4: addiu       $s2, $s0, 0x1D8
    ctx->r18 = ADD32(ctx->r16, 0X1D8);
    after_0:
    // 0x80233EC8: bne         $v0, $zero, L_80233EDC
    if (ctx->r2 != 0) {
        // 0x80233ECC: nop
    
            goto L_80233EDC;
    }
    // 0x80233ECC: nop

    // 0x80233ED0: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80233ED4: j           L_80233EE4
    // 0x80233ED8: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_80233EE4;
    // 0x80233ED8: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_80233EDC:
    // 0x80233EDC: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80233EE0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80233EE4:
    // 0x80233EE4: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x80233EE8: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x80233EEC: beq         $v0, $zero, L_80233EF8
    if (ctx->r2 == 0) {
        // 0x80233EF0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80233EF8;
    }
    // 0x80233EF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233EF4: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
L_80233EF8:
    // 0x80233EF8: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80233EFC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80233F00: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80233F04: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80233F08: beq         $a0, $zero, L_80234054
    if (ctx->r4 == 0) {
        // 0x80233F0C: nop
    
            goto L_80234054;
    }
    // 0x80233F0C: nop

    // 0x80233F10: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80233F14: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80233F18: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233F1C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80233F20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233F24: bgtz        $v0, L_80233F68
    if (SIGNED(ctx->r2) > 0) {
        // 0x80233F28: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80233F68;
    }
    // 0x80233F28: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80233F2C: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x80233F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233F34: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80233F38: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80233F3C: sb          $v0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r2;
    // 0x80233F40: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233F44: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233F4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233F50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233F54: jal         0x80050294
    // 0x80233F58: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80233F58: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233F5C: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x80233F60: j           L_80234054
    // 0x80233F64: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
        goto L_80234054;
    // 0x80233F64: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
L_80233F68:
    // 0x80233F68: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x80233F6C: lbu         $a1, 0x6C($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X6C);
    // 0x80233F70: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80233F74: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x80233F78: bne         $v0, $zero, L_80233FF8
    if (ctx->r2 != 0) {
        // 0x80233F7C: sh          $a0, 0x66($s1)
        MEM_H(0X66, ctx->r17) = ctx->r4;
            goto L_80233FF8;
    }
    // 0x80233F7C: sh          $a0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r4;
    // 0x80233F80: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233F84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80233F88: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233F8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233F90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233F94: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233F98: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80233F9C: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x80233FA0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233FA4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233FA8: bne         $v1, $zero, L_80233FFC
    if (ctx->r3 != 0) {
        // 0x80233FAC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80233FFC;
    }
    // 0x80233FAC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80233FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233FB4: ori         $v0, $a1, 0x4
    ctx->r2 = ctx->r5 | 0X4;
    // 0x80233FB8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80233FBC: sb          $v0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r2;
    // 0x80233FC0: sh          $zero, 0x66($s1)
    MEM_H(0X66, ctx->r17) = 0;
    // 0x80233FC4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233FC8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80233FCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233FD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233FD8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233FDC: jal         0x80050294
    // 0x80233FE0: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80233FE0: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    after_2:
    // 0x80233FE4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80233FE8: jal         0x8002A33C
    // 0x80233FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80233FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80233FF0: j           L_80234050
    // 0x80233FF4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80234050;
    // 0x80233FF4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80233FF8:
    // 0x80233FF8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80233FFC:
    // 0x80233FFC: jal         0x8002A33C
    // 0x80234000: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80234000: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x80234004: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234008: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x8023400C: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80234010: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x80234014: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80234018: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023401C: beq         $v1, $zero, L_8023404C
    if (ctx->r3 == 0) {
        // 0x80234020: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023404C;
    }
    // 0x80234020: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234024: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234028: bne         $v1, $zero, L_8023404C
    if (ctx->r3 != 0) {
        // 0x8023402C: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_8023404C;
    }
    // 0x8023402C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80234030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234034: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234038: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023403C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234040: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234044: jal         0x80050294
    // 0x80234048: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80234048: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_5:
L_8023404C:
    // 0x8023404C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80234050:
    // 0x80234050: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80234054:
    // 0x80234054: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x80234058: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023405C: beq         $v0, $zero, L_80234090
    if (ctx->r2 == 0) {
        // 0x80234060: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234090;
    }
    // 0x80234060: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234064: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234068: beq         $v1, $v0, L_80234090
    if (ctx->r3 == ctx->r2) {
        // 0x8023406C: nop
    
            goto L_80234090;
    }
    // 0x8023406C: nop

    // 0x80234070: lw          $v0, 0x60($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X60);
    // 0x80234074: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80234078: bne         $v0, $zero, L_8023408C
    if (ctx->r2 != 0) {
        // 0x8023407C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023408C;
    }
    // 0x8023407C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234084: bne         $v1, $v0, L_80234090
    if (ctx->r3 != ctx->r2) {
        // 0x80234088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234090;
    }
    // 0x80234088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023408C:
    // 0x8023408C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234090:
    // 0x80234090: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234094: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234098: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023409C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802340A0: lw          $v0, 0x399C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X399C);
    // 0x802340A4: jalr        $v0
    // 0x802340A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x802340A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802340AC: jal         0x8005044C
    // 0x802340B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x802340B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802340B4: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x802340B8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802340BC: beq         $v0, $zero, L_802340CC
    if (ctx->r2 == 0) {
        // 0x802340C0: addiu       $a0, $zero, 0x1BD
        ctx->r4 = ADD32(0, 0X1BD);
            goto L_802340CC;
    }
    // 0x802340C0: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    // 0x802340C4: jal         0x8002A33C
    // 0x802340C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802340C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
L_802340CC:
    // 0x802340CC: jal         0x80040F30
    // 0x802340D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x802340D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802340D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802340D8: jal         0x8003E934
    // 0x802340DC: sw          $v0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_10;
    // 0x802340DC: sw          $v0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r2;
    after_10:
    // 0x802340E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802340E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802340E8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802340EC: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x802340F0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802340F4: beq         $v0, $zero, L_80234148
    if (ctx->r2 == 0) {
        // 0x802340F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234148;
    }
    // 0x802340F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802340FC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234100: beq         $v1, $v0, L_80234148
    if (ctx->r3 == ctx->r2) {
        // 0x80234104: nop
    
            goto L_80234148;
    }
    // 0x80234104: nop

    // 0x80234108: lw          $v0, 0x60($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X60);
    // 0x8023410C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80234110: beq         $v0, $zero, L_80234148
    if (ctx->r2 == 0) {
        // 0x80234114: nop
    
            goto L_80234148;
    }
    // 0x80234114: nop

    // 0x80234118: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023411C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80234120: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234124: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80234128: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8023412C: lh          $v1, 0x5E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5E);
    // 0x80234130: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234134: blez        $v0, L_80234144
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80234138: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234144;
    }
    // 0x80234138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023413C: j           L_80234148
    // 0x80234140: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80234148;
    // 0x80234140: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80234144:
    // 0x80234144: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80234148:
    // 0x80234148: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023414C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234150: beq         $v0, $zero, L_80234168
    if (ctx->r2 == 0) {
        // 0x80234154: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234168;
    }
    // 0x80234154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234158: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8023415C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234160: jal         0x8003B564
    // 0x80234164: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_11;
    // 0x80234164: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
L_80234168:
    // 0x80234168: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x8023416C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80234170: beq         $v0, $zero, L_802341CC
    if (ctx->r2 == 0) {
        // 0x80234174: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802341CC;
    }
    // 0x80234174: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234178: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8023417C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80234180: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80234184: addiu       $v0, $v0, -0x2E
    ctx->r2 = ADD32(ctx->r2, -0X2E);
    // 0x80234188: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8023418C: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80234190: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80234194: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80234198: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023419C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802341A0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x802341A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802341A8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802341AC: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x802341B0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802341B4: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802341B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802341BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802341C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802341C4: jal         0x80051E18
    // 0x802341C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x802341C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_12:
L_802341CC:
    // 0x802341CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802341D0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802341D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802341D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802341DC: jr          $ra
    // 0x802341E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802341E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80238FC4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80238FC8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80238FCC: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80238FD0: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80238FD4: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80238FD8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80238FDC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80238FE0: lw          $v0, 0x42C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X42C4);
    // 0x80238FE4: jr          $ra
    // 0x80238FE8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238FE8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8024B840_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B84C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B850: jal         0x80053ED8
    // 0x8024B854: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B854: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024B858: jal         0x8024B890
    // 0x8024B85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B890_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024B85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024B860: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024B864: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8024B868: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8024B86C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024B870: bne         $v0, $zero, L_8024B880
    if (ctx->r2 != 0) {
        // 0x8024B874: nop
    
            goto L_8024B880;
    }
    // 0x8024B874: nop

    // 0x8024B878: jal         0x8004F5C4
    // 0x8024B87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8024B87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024B880:
    // 0x8024B880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024B884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B888: jr          $ra
    // 0x8024B88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243120_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80243124: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80243128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024312C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80243130: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80243134: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80243138: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024313C: jal         0x800540D0
    // 0x80243140: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80243140: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80243144: beq         $v0, $zero, L_8024315C
    if (ctx->r2 == 0) {
        // 0x80243148: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024315C;
    }
    // 0x80243148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024314C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80243150: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80243154: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80243158: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8024315C:
    // 0x8024315C: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x80243160: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x80243164: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80243168: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024316C: jal         0x800324B4
    // 0x80243170: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80243170: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80243174: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x80243178: lh          $v1, 0xE4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE4);
    // 0x8024317C: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x80243180: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80243184: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80243188: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024318C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243190: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80243194: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243198: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024319C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802431A0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x802431A4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x802431A8: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x802431AC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x802431B0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    // 0x802431B4: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x802431B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802431BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802431C0: bltzl       $v0, L_802431C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802431C4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802431C8;
    }
    goto skip_0;
    // 0x802431C4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_802431C8:
    // 0x802431C8: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802431CC: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x802431D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802431D4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802431D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802431DC: jal         0x8004DBA0
    // 0x802431E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x802431E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802431E4: jal         0x80040F30
    // 0x802431E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802431E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802431EC: bne         $v0, $zero, L_802432A4
    if (ctx->r2 != 0) {
        // 0x802431F0: nop
    
            goto L_802432A4;
    }
    // 0x802431F0: nop

    // 0x802431F4: jal         0x8003E934
    // 0x802431F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x802431F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802431FC: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x80243200: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80243204: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80243208: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024320C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243210: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243214: bltzl       $v0, L_80243230
    if (SIGNED(ctx->r2) < 0) {
        // 0x80243218: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80243230;
    }
    goto skip_1;
    // 0x80243218: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x8024321C: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80243220: beq         $v0, $zero, L_80243240
    if (ctx->r2 == 0) {
        // 0x80243224: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80243240;
    }
    // 0x80243224: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80243228: j           L_80243264
    // 0x8024322C: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
        goto L_80243264;
    // 0x8024322C: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
L_80243230:
    // 0x80243230: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80243234: bnel        $v0, $zero, L_80243264
    if (ctx->r2 != 0) {
        // 0x80243238: sh          $a0, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r4;
            goto L_80243264;
    }
    goto skip_2;
    // 0x80243238: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
    skip_2:
    // 0x8024323C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_80243240:
    // 0x80243240: bltz        $v0, L_80243258
    if (SIGNED(ctx->r2) < 0) {
        // 0x80243244: nop
    
            goto L_80243258;
    }
    // 0x80243244: nop

    // 0x80243248: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8024324C: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80243250: j           L_80243264
    // 0x80243254: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_80243264;
    // 0x80243254: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_80243258:
    // 0x80243258: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8024325C: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80243260: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_80243264:
    // 0x80243264: jal         0x800324B4
    // 0x80243268: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x80243268: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_5:
    // 0x8024326C: lh          $a2, 0x12($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X12);
    // 0x80243270: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80243274: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80243278: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8024327C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80243280: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80243284: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80243288: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024328C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80243290: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243294: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80243298: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024329C: jal         0x8004DD04
    // 0x802432A0: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x802432A0: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_6:
L_802432A4:
    // 0x802432A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802432A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802432AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802432B0: jr          $ra
    // 0x802432B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802432B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227C78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C78: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80227C7C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80227C80: beq         $v1, $v0, L_80227CBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227C84: slti        $v0, $v1, 0x1F
        ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_80227CBC;
    }
    // 0x80227C84: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80227C88: beql        $v0, $zero, L_80227CA0
    if (ctx->r2 == 0) {
        // 0x80227C8C: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80227CA0;
    }
    goto skip_0;
    // 0x80227C8C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_0:
    // 0x80227C90: beq         $v1, $zero, L_80227CB0
    if (ctx->r3 == 0) {
        // 0x80227C94: nop
    
            goto L_80227CB0;
    }
    // 0x80227C94: nop

    // 0x80227C98: j           L_80227CCC
    // 0x80227C9C: nop

        goto L_80227CCC;
    // 0x80227C9C: nop

L_80227CA0:
    // 0x80227CA0: beq         $v1, $v0, L_80227CBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227CA4: nop
    
            goto L_80227CBC;
    }
    // 0x80227CA4: nop

    // 0x80227CA8: j           L_80227CCC
    // 0x80227CAC: nop

        goto L_80227CCC;
    // 0x80227CAC: nop

L_80227CB0:
    // 0x80227CB0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227CB4: j           L_80227CCC
    // 0x80227CB8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
        goto L_80227CCC;
    // 0x80227CB8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80227CBC:
    // 0x80227CBC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80227CC0: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80227CC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CC8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80227CCC:
    // 0x80227CCC: jr          $ra
    // 0x80227CD0: nop

    TRACE_RETURN()
    return;
    // 0x80227CD0: nop

;}
RECOMP_FUNC void func_8023ACE4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ACE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ACE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023ACEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ACF0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8023ACF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023ACF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ACFC: jal         0x80050294
    // 0x8023AD00: sh          $zero, 0x516($s0)
    MEM_H(0X516, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023AD00: sh          $zero, 0x516($s0)
    MEM_H(0X516, ctx->r16) = 0;
    after_0:
    // 0x8023AD04: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023AD08: sh          $v0, 0x514($s0)
    MEM_H(0X514, ctx->r16) = ctx->r2;
    // 0x8023AD0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023AD10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023AD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AD18: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023AD1C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023AD20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023AD24: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023AD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AD2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AD30: jr          $ra
    // 0x8023AD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236374_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023637C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236380: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236388: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023638C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236390: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80236394: bne         $v1, $v0, L_8023647C
    if (ctx->r3 != ctx->r2) {
        // 0x80236398: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_8023647C;
    }
    // 0x80236398: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8023639C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802363A0: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x802363A4: beq         $a1, $v0, L_80236450
    if (ctx->r5 == ctx->r2) {
        // 0x802363A8: slti        $v0, $a1, 0x74
        ctx->r2 = SIGNED(ctx->r5) < 0X74 ? 1 : 0;
            goto L_80236450;
    }
    // 0x802363A8: slti        $v0, $a1, 0x74
    ctx->r2 = SIGNED(ctx->r5) < 0X74 ? 1 : 0;
    // 0x802363AC: beq         $v0, $zero, L_802363F0
    if (ctx->r2 == 0) {
        // 0x802363B0: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_802363F0;
    }
    // 0x802363B0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802363B4: beq         $a1, $v0, L_80236438
    if (ctx->r5 == ctx->r2) {
        // 0x802363B8: slti        $v0, $a1, 0x33
        ctx->r2 = SIGNED(ctx->r5) < 0X33 ? 1 : 0;
            goto L_80236438;
    }
    // 0x802363B8: slti        $v0, $a1, 0x33
    ctx->r2 = SIGNED(ctx->r5) < 0X33 ? 1 : 0;
    // 0x802363BC: beq         $v0, $zero, L_802363D4
    if (ctx->r2 == 0) {
        // 0x802363C0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802363D4;
    }
    // 0x802363C0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802363C4: beq         $a1, $v0, L_80236468
    if (ctx->r5 == ctx->r2) {
        // 0x802363C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236468;
    }
    // 0x802363C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802363CC: j           L_802364A8
    // 0x802363D0: nop

        goto L_802364A8;
    // 0x802363D0: nop

L_802363D4:
    // 0x802363D4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802363D8: beq         $a1, $v0, L_80236450
    if (ctx->r5 == ctx->r2) {
        // 0x802363DC: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80236450;
    }
    // 0x802363DC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802363E0: beq         $a1, $v0, L_8023643C
    if (ctx->r5 == ctx->r2) {
        // 0x802363E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023643C;
    }
    // 0x802363E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802363E8: j           L_802364A8
    // 0x802363EC: nop

        goto L_802364A8;
    // 0x802363EC: nop

L_802363F0:
    // 0x802363F0: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x802363F4: beq         $a1, $v0, L_80236438
    if (ctx->r5 == ctx->r2) {
        // 0x802363F8: slti        $v0, $a1, 0xDD
        ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
            goto L_80236438;
    }
    // 0x802363F8: slti        $v0, $a1, 0xDD
    ctx->r2 = SIGNED(ctx->r5) < 0XDD ? 1 : 0;
    // 0x802363FC: beq         $v0, $zero, L_8023641C
    if (ctx->r2 == 0) {
        // 0x80236400: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_8023641C;
    }
    // 0x80236400: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80236404: beq         $a1, $v0, L_80236438
    if (ctx->r5 == ctx->r2) {
        // 0x80236408: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80236438;
    }
    // 0x80236408: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8023640C: beq         $a1, $v0, L_80236454
    if (ctx->r5 == ctx->r2) {
        // 0x80236410: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236454;
    }
    // 0x80236410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236414: j           L_802364A8
    // 0x80236418: nop

        goto L_802364A8;
    // 0x80236418: nop

L_8023641C:
    // 0x8023641C: addiu       $v0, $zero, 0x102
    ctx->r2 = ADD32(0, 0X102);
    // 0x80236420: beq         $a1, $v0, L_80236450
    if (ctx->r5 == ctx->r2) {
        // 0x80236424: addiu       $v0, $zero, 0x113
        ctx->r2 = ADD32(0, 0X113);
            goto L_80236450;
    }
    // 0x80236424: addiu       $v0, $zero, 0x113
    ctx->r2 = ADD32(0, 0X113);
    // 0x80236428: beq         $a1, $v0, L_80236468
    if (ctx->r5 == ctx->r2) {
        // 0x8023642C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236468;
    }
    // 0x8023642C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236430: j           L_802364A8
    // 0x80236434: nop

        goto L_802364A8;
    // 0x80236434: nop

L_80236438:
    // 0x80236438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023643C:
    // 0x8023643C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236440: jal         0x80236A60
    // 0x80236444: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x80236444: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80236448: j           L_802364A8
    // 0x8023644C: nop

        goto L_802364A8;
    // 0x8023644C: nop

L_80236450:
    // 0x80236450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236454:
    // 0x80236454: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236458: jal         0x80236A60
    // 0x8023645C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023645C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80236460: j           L_802364A8
    // 0x80236464: nop

        goto L_802364A8;
    // 0x80236464: nop

L_80236468:
    // 0x80236468: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8023646C: jal         0x80236A60
    // 0x80236470: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x80236470: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x80236474: j           L_802364A8
    // 0x80236478: nop

        goto L_802364A8;
    // 0x80236478: nop

L_8023647C:
    // 0x8023647C: bne         $v1, $v0, L_802364A8
    if (ctx->r3 != ctx->r2) {
        // 0x80236480: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802364A8;
    }
    // 0x80236480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236484: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236488: bne         $v1, $v0, L_802364A8
    if (ctx->r3 != ctx->r2) {
        // 0x8023648C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802364A8;
    }
    // 0x8023648C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236490: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236494: jal         0x80236A60
    // 0x80236498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236A60_ovl28(rdram, ctx);
        goto after_3;
    // 0x80236498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8023649C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802364A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802364A4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802364A8:
    // 0x802364A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802364AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802364B0: jr          $ra
    // 0x802364B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802364B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234200_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234200: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023420C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80234210: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80234214: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80234218: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023421C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80234220: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80234224: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80234228: beq         $v0, $zero, L_80234324
    if (ctx->r2 == 0) {
        // 0x8023422C: addiu       $s3, $s0, 0x1D8
        ctx->r19 = ADD32(ctx->r16, 0X1D8);
            goto L_80234324;
    }
    // 0x8023422C: addiu       $s3, $s0, 0x1D8
    ctx->r19 = ADD32(ctx->r16, 0X1D8);
    // 0x80234230: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x80234234: bne         $v0, $zero, L_802342A4
    if (ctx->r2 != 0) {
        // 0x80234238: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802342A4;
    }
    // 0x80234238: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023423C: lhu         $v0, 0x3B2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3B2);
    // 0x80234240: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80234244: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x80234248: beq         $v0, $zero, L_80234258
    if (ctx->r2 == 0) {
        // 0x8023424C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234258;
    }
    // 0x8023424C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234250: j           L_80234298
    // 0x80234254: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80234298;
    // 0x80234254: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80234258:
    // 0x80234258: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8023425C: beq         $v0, $zero, L_8023426C
    if (ctx->r2 == 0) {
        // 0x80234260: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023426C;
    }
    // 0x80234260: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234264: j           L_80234298
    // 0x80234268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80234298;
    // 0x80234268: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023426C:
    // 0x8023426C: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80234270: beq         $v0, $zero, L_80234280
    if (ctx->r2 == 0) {
        // 0x80234274: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234280;
    }
    // 0x80234274: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234278: j           L_80234298
    // 0x8023427C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80234298;
    // 0x8023427C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80234280:
    // 0x80234280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234284: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023428C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234290: jal         0x80050294
    // 0x80234294: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80234294: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
L_80234298:
    // 0x80234298: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023429C: j           L_802342AC
    // 0x802342A0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
        goto L_802342AC;
    // 0x802342A0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_802342A4:
    // 0x802342A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802342A8: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_802342AC:
    // 0x802342AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802342B0: beq         $v0, $zero, L_80234324
    if (ctx->r2 == 0) {
        // 0x802342B4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80234324;
    }
    // 0x802342B4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802342B8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802342BC: beq         $v0, $s1, L_802342E0
    if (ctx->r2 == ctx->r17) {
        // 0x802342C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802342E0;
    }
    // 0x802342C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802342C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802342C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802342CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802342D0: jal         0x80050294
    // 0x802342D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802342D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802342D8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802342DC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_802342E0:
    // 0x802342E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802342E4: bnel        $v1, $s1, L_802342F8
    if (ctx->r3 != ctx->r17) {
        // 0x802342E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802342F8;
    }
    goto skip_0;
    // 0x802342E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802342EC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802342F0: j           L_80234308
    // 0x802342F4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_80234308;
    // 0x802342F4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_802342F8:
    // 0x802342F8: bne         $v1, $v0, L_80234314
    if (ctx->r3 != ctx->r2) {
        // 0x802342FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234314;
    }
    // 0x802342FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234300: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80234304: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
L_80234308:
    // 0x80234308: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023430C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80234314:
    // 0x80234314: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234318: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023431C: jal         0x8004DA90
    // 0x80234320: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80234320: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_80234324:
    // 0x80234324: lbu         $v1, 0x6C($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6C);
    // 0x80234328: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8023432C: beq         $v0, $zero, L_80234348
    if (ctx->r2 == 0) {
        // 0x80234330: ori         $v0, $v1, 0x20
        ctx->r2 = ctx->r3 | 0X20;
            goto L_80234348;
    }
    // 0x80234330: ori         $v0, $v1, 0x20
    ctx->r2 = ctx->r3 | 0X20;
    // 0x80234334: sb          $v0, 0x6C($s2)
    MEM_B(0X6C, ctx->r18) = ctx->r2;
    // 0x80234338: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023433C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80234340: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234344: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
L_80234348:
    // 0x80234348: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023434C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80234350: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80234354: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023435C: jr          $ra
    // 0x80234360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E8AC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E8B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E8B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E8BC: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x8022E8C0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E8C4: jal         0x8004FA7C
    // 0x8022E8C8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E8C8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022E8CC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E8D0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022E8D4: bne         $v0, $zero, L_8022E920
    if (ctx->r2 != 0) {
        // 0x8022E8D8: nop
    
            goto L_8022E920;
    }
    // 0x8022E8D8: nop

    // 0x8022E8DC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022E8E0: beq         $v0, $zero, L_8022E8F4
    if (ctx->r2 == 0) {
        // 0x8022E8E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E8F4;
    }
    // 0x8022E8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8E8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022E8EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E8F0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022E8F4:
    // 0x8022E8F4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x8022E8F8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022E8FC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x8022E900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E90C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E910: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022E914: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E918: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022E91C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_8022E920:
    // 0x8022E920: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E924: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E928: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E92C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E938: jr          $ra
    // 0x8022E93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AFBC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AFBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AFC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AFC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AFC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023AFCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AFD0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023AFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AFD8: beq         $v1, $v0, L_8023B048
    if (ctx->r3 == ctx->r2) {
        // 0x8023AFDC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8023B048;
    }
    // 0x8023AFDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023AFE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AFE4: beql        $v0, $zero, L_8023AFFC
    if (ctx->r2 == 0) {
        // 0x8023AFE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AFFC;
    }
    goto skip_0;
    // 0x8023AFE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AFEC: beql        $v1, $zero, L_8023B014
    if (ctx->r3 == 0) {
        // 0x8023AFF0: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8023B014;
    }
    goto skip_1;
    // 0x8023AFF0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_1:
    // 0x8023AFF4: j           L_8023B07C
    // 0x8023AFF8: nop

        goto L_8023B07C;
    // 0x8023AFF8: nop

L_8023AFFC:
    // 0x8023AFFC: beq         $v1, $v0, L_8023B058
    if (ctx->r3 == ctx->r2) {
        // 0x8023B000: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023B058;
    }
    // 0x8023B000: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B004: beq         $v1, $v0, L_8023B048
    if (ctx->r3 == ctx->r2) {
        // 0x8023B008: nop
    
            goto L_8023B048;
    }
    // 0x8023B008: nop

    // 0x8023B00C: j           L_8023B07C
    // 0x8023B010: nop

        goto L_8023B07C;
    // 0x8023B010: nop

L_8023B014:
    // 0x8023B014: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B018: lw          $v0, 0x465C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X465C);
    // 0x8023B01C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B020: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8023B024: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x8023B028: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8023B02C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B030: lw          $v0, 0x45DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45DC);
    // 0x8023B034: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8023B038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B03C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023B040: j           L_8023B068
    // 0x8023B044: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_8023B068;
    // 0x8023B044: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_8023B048:
    // 0x8023B048: jal         0x8005044C
    // 0x8023B04C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B04C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023B050: j           L_8023B07C
    // 0x8023B054: nop

        goto L_8023B07C;
    // 0x8023B054: nop

L_8023B058:
    // 0x8023B058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B05C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8023B060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B064: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_8023B068:
    // 0x8023B068: jal         0x80050294
    // 0x8023B06C: nop

    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023B06C: nop

    after_1:
    // 0x8023B070: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B074: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B07C:
    // 0x8023B07C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B080: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B084: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8023B088: beq         $v1, $v0, L_8023B0A0
    if (ctx->r3 == ctx->r2) {
        // 0x8023B08C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8023B0A0;
    }
    // 0x8023B08C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023B090: beql        $v1, $v0, L_8023B0B4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B094: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8023B0B4;
    }
    goto skip_2;
    // 0x8023B094: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_2:
    // 0x8023B098: j           L_8023B0C4
    // 0x8023B09C: nop

        goto L_8023B0C4;
    // 0x8023B09C: nop

L_8023B0A0:
    // 0x8023B0A0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8023B0A4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B0A8: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B0AC: j           L_8023B0C0
    // 0x8023B0B0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8023B0C0;
    // 0x8023B0B0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8023B0B4:
    // 0x8023B0B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B0B8: lw          $v0, 0x465C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X465C);
    // 0x8023B0BC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8023B0C0:
    // 0x8023B0C0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_8023B0C4:
    // 0x8023B0C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B0C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B0CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B0D0: jr          $ra
    // 0x8023B0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B0D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802401B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802401B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802401B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802401B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802401BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802401C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802401C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802401C8: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x802401CC: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x802401D0: beq         $v0, $zero, L_802401F0
    if (ctx->r2 == 0) {
        // 0x802401D4: addiu       $s1, $s2, 0x440
        ctx->r17 = ADD32(ctx->r18, 0X440);
            goto L_802401F0;
    }
    // 0x802401D4: addiu       $s1, $s2, 0x440
    ctx->r17 = ADD32(ctx->r18, 0X440);
    // 0x802401D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802401DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802401E0: addu        $at, $at, $v0
    gpr jr_addend_802401E8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802401E4: lw          $v0, 0x60D8($at)
    ctx->r2 = ADD32(ctx->r1, 0X60D8);
    // 0x802401E8: jr          $v0
    // 0x802401EC: nop

    switch (jr_addend_802401E8 >> 2) {
        case 0: goto L_802401F0; break;
        case 1: goto L_802401FC; break;
        case 2: goto L_80240218; break;
        case 3: goto L_80240298; break;
        case 4: goto L_802406A0; break;
        case 5: goto L_80240744; break;
        case 6: goto L_80240824; break;
        case 7: goto L_802408A0; break;
        case 8: goto L_802408A0; break;
        case 9: goto L_802408A0; break;
        case 10: goto L_802408A0; break;
        case 11: goto L_802408A0; break;
        case 12: goto L_802408A0; break;
        case 13: goto L_802408A0; break;
        case 14: goto L_802408A0; break;
        case 15: goto L_80240890; break;
        default: switch_error(__func__, 0x802401E8, 0x802560D8);
    }
    // 0x802401EC: nop

L_802401F0:
    // 0x802401F0: sh          $zero, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = 0;
    // 0x802401F4: j           L_80240288
    // 0x802401F8: sh          $zero, 0xA6($s1)
    MEM_H(0XA6, ctx->r17) = 0;
        goto L_80240288;
    // 0x802401F8: sh          $zero, 0xA6($s1)
    MEM_H(0XA6, ctx->r17) = 0;
L_802401FC:
    // 0x802401FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240200: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80240204: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240208: jal         0x8009A3B4
    // 0x8024020C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024020C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80240210: j           L_80240288
    // 0x80240214: nop

        goto L_80240288;
    // 0x80240214: nop

L_80240218:
    // 0x80240218: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8024021C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240220: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80240224: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240228: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8024022C: jal         0x8004F820
    // 0x80240230: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80240230: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80240234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240238: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024023C: beq         $v1, $zero, L_80240254
    if (ctx->r3 == 0) {
        // 0x80240240: nop
    
            goto L_80240254;
    }
    // 0x80240240: nop

    // 0x80240244: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80240248: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024024C: j           L_802408A0
    // 0x80240250: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
        goto L_802408A0;
    // 0x80240250: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_80240254:
    // 0x80240254: jal         0x800A3450
    // 0x80240258: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80240258: nop

    after_2:
    // 0x8024025C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80240260: bne         $v0, $zero, L_80240278
    if (ctx->r2 != 0) {
        // 0x80240264: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240278;
    }
    // 0x80240264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240268: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    // 0x8024026C: jal         0x8002A33C
    // 0x80240270: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80240270: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80240274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80240278:
    // 0x80240278: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8024027C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80240280: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x80240284: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
L_80240288:
    // 0x80240288: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8024028C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240290: j           L_802408A0
    // 0x80240294: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_802408A0;
    // 0x80240294: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80240298:
    // 0x80240298: lbu         $v0, 0xA4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA4);
    // 0x8024029C: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x802402A0: bne         $v0, $zero, L_80240574
    if (ctx->r2 != 0) {
        // 0x802402A4: addiu       $s0, $s2, 0x14
        ctx->r16 = ADD32(ctx->r18, 0X14);
            goto L_80240574;
    }
    // 0x802402A4: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802402A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802402AC: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x802402B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802402B4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802402B8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802402BC: jal         0x8004F820
    // 0x802402C0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x802402C0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_4:
    // 0x802402C4: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x802402C8: lbu         $a0, 0xA4($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA4);
    // 0x802402CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802402D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802402D4: bne         $a0, $v0, L_80240390
    if (ctx->r4 != ctx->r2) {
        // 0x802402D8: sh          $v1, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r3;
            goto L_80240390;
    }
    // 0x802402D8: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x802402DC: addiu       $a0, $zero, 0x1EE
    ctx->r4 = ADD32(0, 0X1EE);
    // 0x802402E0: jal         0x8002A33C
    // 0x802402E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x802402E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802402E8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802402EC: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x802402F0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802402F4: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x802402F8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802402FC: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240300: mflo        $a1
    ctx->r5 = lo;
    // 0x80240304: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80240308: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x8024030C: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80240310: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240314: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80240318: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8024031C: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240320: mflo        $a2
    ctx->r6 = lo;
    // 0x80240324: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80240328: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8024032C: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80240330: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240334: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x80240338: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024033C: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240340: mflo        $a0
    ctx->r4 = lo;
    // 0x80240344: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80240348: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8024034C: jal         0x80032424
    // 0x80240350: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_6;
    // 0x80240350: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    after_6:
    // 0x80240354: addiu       $a0, $s1, 0xA8
    ctx->r4 = ADD32(ctx->r17, 0XA8);
    // 0x80240358: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024035C: jal         0x8009A3B4
    // 0x80240360: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80240360: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80240364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240368: sh          $zero, 0xC0($s1)
    MEM_H(0XC0, ctx->r17) = 0;
    // 0x8024036C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80240370: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240374: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80240378: jal         0x8004F820
    // 0x8024037C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_8;
    // 0x8024037C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_8:
    // 0x80240380: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80240384: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240388: j           L_802408A0
    // 0x8024038C: sh          $v1, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r3;
        goto L_802408A0;
    // 0x8024038C: sh          $v1, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r3;
L_80240390:
    // 0x80240390: lhu         $v0, 0xC0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC0);
    // 0x80240394: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240398: sh          $v0, 0xC0($s1)
    MEM_H(0XC0, ctx->r17) = ctx->r2;
    // 0x8024039C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802403A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802403A4: slti        $v0, $v0, 0x14
    ctx->r2 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x802403A8: bne         $v0, $zero, L_8024049C
    if (ctx->r2 != 0) {
        // 0x802403AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024049C;
    }
    // 0x802403AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802403B0: lhu         $v0, 0xA4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA4);
    // 0x802403B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802403B8: jal         0x80241840
    // 0x802403BC: sh          $v0, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r2;
    func_80241840_ovl28(rdram, ctx);
        goto after_9;
    // 0x802403BC: sh          $v0, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = ctx->r2;
    after_9:
    // 0x802403C0: beq         $v0, $zero, L_8024040C
    if (ctx->r2 == 0) {
        // 0x802403C4: addiu       $a0, $zero, 0x1F0
        ctx->r4 = ADD32(0, 0X1F0);
            goto L_8024040C;
    }
    // 0x802403C4: addiu       $a0, $zero, 0x1F0
    ctx->r4 = ADD32(0, 0X1F0);
    // 0x802403C8: jal         0x8002A33C
    // 0x802403CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802403CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802403D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x802403D4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802403D8: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x802403DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x802403E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802403E4: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x802403E8: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802403EC: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x802403F0: jal         0x8003491C
    // 0x802403F4: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_11;
    // 0x802403F4: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    after_11:
    // 0x802403F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802403FC: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80240400: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80240404: j           L_80240498
    // 0x80240408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80240498;
    // 0x80240408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8024040C:
    // 0x8024040C: lh          $v1, 0xA4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA4);
    // 0x80240410: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240414: bne         $v1, $v0, L_8024045C
    if (ctx->r3 != ctx->r2) {
        // 0x80240418: addiu       $a0, $zero, 0x1EF
        ctx->r4 = ADD32(0, 0X1EF);
            goto L_8024045C;
    }
    // 0x80240418: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    // 0x8024041C: jal         0x8002A33C
    // 0x80240420: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x80240420: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80240424: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80240428: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8024042C: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80240430: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80240434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240438: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8024043C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80240440: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x80240444: jal         0x8003491C
    // 0x80240448: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_13;
    // 0x80240448: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    after_13:
    // 0x8024044C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240450: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80240454: j           L_80240498
    // 0x80240458: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80240498;
    // 0x80240458: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8024045C:
    // 0x8024045C: jal         0x8002A33C
    // 0x80240460: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x80240460: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_14:
    // 0x80240464: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80240468: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8024046C: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    // 0x80240470: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80240474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240478: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8024047C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80240480: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x80240484: jal         0x8003491C
    // 0x80240488: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    func_8003491C_FD1C(rdram, ctx);
        goto after_15;
    // 0x80240488: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    after_15:
    // 0x8024048C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240490: sh          $v0, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r2;
    // 0x80240494: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80240498:
    // 0x80240498: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_8024049C:
    // 0x8024049C: lh          $a2, 0xC0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0XC0);
    // 0x802404A0: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x802404A4: mult        $v1, $a2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802404A8: mflo        $v1
    ctx->r3 = lo;
    // 0x802404AC: lh          $v0, 0xA8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA8);
    // 0x802404B0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x802404B4: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x802404B8: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802404BC: mflo        $v0
    ctx->r2 = lo;
    // 0x802404C0: lui         $t0, 0x6666
    ctx->r8 = S32(0X6666 << 16);
    // 0x802404C4: ori         $t0, $t0, 0x6667
    ctx->r8 = ctx->r8 | 0X6667;
    // 0x802404C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802404CC: mult        $v1, $t0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802404D0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x802404D4: mfhi        $t1
    ctx->r9 = hi;
    // 0x802404D8: sra         $v0, $t1, 3
    ctx->r2 = S32(SIGNED(ctx->r9) >> 3);
    // 0x802404DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802404E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802404E4: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x802404E8: lh          $a0, 0x4($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X4);
    // 0x802404EC: mult        $a0, $a2
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802404F0: mflo        $a0
    ctx->r4 = lo;
    // 0x802404F4: lh          $a1, 0xAC($s1)
    ctx->r5 = MEM_H(ctx->r17, 0XAC);
    // 0x802404F8: nop

    // 0x802404FC: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240500: mflo        $a1
    ctx->r5 = lo;
    // 0x80240504: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80240508: subu        $v1, $v0, $a2
    ctx->r3 = SUB32(ctx->r2, ctx->r6);
    // 0x8024050C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80240510: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240514: mflo        $v1
    ctx->r3 = lo;
    // 0x80240518: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8024051C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80240520: mult        $a0, $t0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240524: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240528: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8024052C: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x80240530: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80240534: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80240538: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024053C: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80240540: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80240544: lh          $v1, 0x20($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X20);
    // 0x80240548: mfhi        $t1
    ctx->r9 = hi;
    // 0x8024054C: sra         $v0, $t1, 3
    ctx->r2 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80240550: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80240554: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240558: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8024055C: lh          $v0, 0x1C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1C);
    // 0x80240560: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x80240564: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x80240568: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8024056C: j           L_802408A0
    // 0x80240570: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
        goto L_802408A0;
    // 0x80240570: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
L_80240574:
    // 0x80240574: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80240578: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8024057C: jal         0x802417CC
    // 0x80240580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802417CC_ovl28(rdram, ctx);
        goto after_16;
    // 0x80240580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80240584: beq         $v0, $zero, L_802405A0
    if (ctx->r2 == 0) {
        // 0x80240588: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802405A0;
    }
    // 0x80240588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024058C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80240590: jal         0x8009A3B4
    // 0x80240594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80240594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80240598: j           L_80240650
    // 0x8024059C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
        goto L_80240650;
    // 0x8024059C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_802405A0:
    // 0x802405A0: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x802405A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802405A8: sw          $v0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r2;
    // 0x802405AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802405B0: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x802405B4: addiu       $a0, $s1, 0xB0
    ctx->r4 = ADD32(ctx->r17, 0XB0);
    // 0x802405B8: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x802405BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802405C0: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x802405C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802405C8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802405CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802405D0: jal         0x80032308
    // 0x802405D4: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    func_80032308_D708(rdram, ctx);
        goto after_18;
    // 0x802405D4: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    after_18:
    // 0x802405D8: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x802405DC: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x802405E0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802405E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802405E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802405EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802405F0: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x802405F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802405F8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x802405FC: lh          $a0, 0x12($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X12);
    // 0x80240600: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80240604: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x80240608: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8024060C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240610: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80240614: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240618: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x8024061C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240620: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x80240624: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x80240628: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8024062C: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x80240630: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80240634: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240638: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024063C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240640: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80240644: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240648: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8024064C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_80240650:
    // 0x80240650: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240654: lbu         $v0, 0xA4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA4);
    // 0x80240658: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8024065C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240660: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240664: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240668: lbu         $v0, 0x49DC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X49DC);
    // 0x8024066C: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x80240670: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80240674: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80240678: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024067C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240680: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x80240684: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80240688: jal         0x8004F820
    // 0x8024068C: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_19;
    // 0x8024068C: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    after_19:
    // 0x80240690: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80240694: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240698: j           L_802408A0
    // 0x8024069C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
        goto L_802408A0;
    // 0x8024069C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
L_802406A0:
    // 0x802406A0: lbu         $v0, 0xA4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA4);
    // 0x802406A4: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x802406A8: beq         $v0, $zero, L_8024070C
    if (ctx->r2 == 0) {
        // 0x802406AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8024070C;
    }
    // 0x802406AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802406B0: jal         0x8004EFE4
    // 0x802406B4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_20;
    // 0x802406B4: nop

    after_20:
    // 0x802406B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802406BC: beq         $s0, $zero, L_80240708
    if (ctx->r16 == 0) {
        // 0x802406C0: addiu       $a0, $s0, 0xAC
        ctx->r4 = ADD32(ctx->r16, 0XAC);
            goto L_80240708;
    }
    // 0x802406C0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x802406C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802406C8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802406CC: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x802406D0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802406D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802406D8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802406DC: lw          $v0, 0x88($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X88);
    // 0x802406E0: addiu       $a1, $s2, 0x1F8
    ctx->r5 = ADD32(ctx->r18, 0X1F8);
    // 0x802406E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802406E8: jal         0x8009A3B4
    // 0x802406EC: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x802406EC: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    after_21:
    // 0x802406F0: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x802406F4: addiu       $a1, $s2, 0x420
    ctx->r5 = ADD32(ctx->r18, 0X420);
    // 0x802406F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802406FC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80240700: jal         0x8009A3B4
    // 0x80240704: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x80240704: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    after_22:
L_80240708:
    // 0x80240708: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8024070C:
    // 0x8024070C: jal         0x80241E88
    // 0x80240710: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    func_80241E88_ovl28(rdram, ctx);
        goto after_23;
    // 0x80240710: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    after_23:
    // 0x80240714: beq         $v0, $zero, L_802408A0
    if (ctx->r2 == 0) {
        // 0x80240718: nop
    
            goto L_802408A0;
    }
    // 0x80240718: nop

    // 0x8024071C: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80240720: bgez        $v0, L_802408A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80240724: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802408A0;
    }
    // 0x80240724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240728: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8024072C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80240730: sb          $zero, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = 0;
    // 0x80240734: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    // 0x80240738: sh          $zero, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = 0;
    // 0x8024073C: j           L_802408A0
    // 0x80240740: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_802408A0;
    // 0x80240740: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80240744:
    // 0x80240744: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80240748: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8024074C: jal         0x802417CC
    // 0x80240750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802417CC_ovl28(rdram, ctx);
        goto after_24;
    // 0x80240750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80240754: beq         $v0, $zero, L_80240770
    if (ctx->r2 == 0) {
        // 0x80240758: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_80240770;
    }
    // 0x80240758: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024075C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240760: jal         0x8009A3B4
    // 0x80240764: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_25;
    // 0x80240764: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_25:
    // 0x80240768: j           L_8024083C
    // 0x8024076C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
        goto L_8024083C;
    // 0x8024076C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_80240770:
    // 0x80240770: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80240774: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80240778: sw          $v0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r2;
    // 0x8024077C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80240780: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80240784: addiu       $a0, $s1, 0xB0
    ctx->r4 = ADD32(ctx->r17, 0XB0);
    // 0x80240788: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x8024078C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80240790: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x80240794: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80240798: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8024079C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802407A0: jal         0x80032308
    // 0x802407A4: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    func_80032308_D708(rdram, ctx);
        goto after_26;
    // 0x802407A4: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    after_26:
    // 0x802407A8: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x802407AC: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x802407B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802407B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802407B8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802407BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802407C0: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x802407C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802407C8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x802407CC: lh          $a0, 0x12($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X12);
    // 0x802407D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802407D4: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x802407D8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802407DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802407E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802407E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802407E8: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x802407EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802407F0: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x802407F4: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x802407F8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802407FC: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x80240800: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80240804: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240808: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024080C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80240810: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80240814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240818: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8024081C: j           L_8024083C
    // 0x80240820: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
        goto L_8024083C;
    // 0x80240820: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_80240824:
    // 0x80240824: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80240828: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024082C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80240830: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80240834: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80240838: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8024083C:
    // 0x8024083C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80240840: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80240844: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240848: jal         0x8004F820
    // 0x8024084C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_27;
    // 0x8024084C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_27:
    // 0x80240850: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80240854: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80240858: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024085C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240860: jal         0x80241E88
    // 0x80240864: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_80241E88_ovl28(rdram, ctx);
        goto after_28;
    // 0x80240864: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_28:
    // 0x80240868: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8024086C: bgez        $v0, L_802408A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80240870: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802408A0;
    }
    // 0x80240870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240874: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240878: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024087C: sb          $v0, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = ctx->r2;
    // 0x80240880: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240884: sb          $zero, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = 0;
    // 0x80240888: j           L_802408A0
    // 0x8024088C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_802408A0;
    // 0x8024088C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80240890:
    // 0x80240890: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240894: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80240898: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    // 0x8024089C: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
L_802408A0:
    // 0x802408A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802408A4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802408A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802408AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802408B0: jr          $ra
    // 0x802408B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802408B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80248A5C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248A5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248A60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248A64: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248A68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248A70: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x80248A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248A78: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80248A7C: beq         $v1, $v0, L_80248AD0
    if (ctx->r3 == ctx->r2) {
        // 0x80248A80: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80248AD0;
    }
    // 0x80248A80: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80248A84: beql        $v0, $zero, L_80248A9C
    if (ctx->r2 == 0) {
        // 0x80248A88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248A9C;
    }
    goto skip_0;
    // 0x80248A88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80248A8C: beq         $v1, $zero, L_80248AB4
    if (ctx->r3 == 0) {
        // 0x80248A90: nop
    
            goto L_80248AB4;
    }
    // 0x80248A90: nop

    // 0x80248A94: j           L_80248C04
    // 0x80248A98: nop

        goto L_80248C04;
    // 0x80248A98: nop

L_80248A9C:
    // 0x80248A9C: beq         $v1, $v0, L_80248B20
    if (ctx->r3 == ctx->r2) {
        // 0x80248AA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80248B20;
    }
    // 0x80248AA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80248AA4: beq         $v1, $v0, L_80248B74
    if (ctx->r3 == ctx->r2) {
        // 0x80248AA8: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80248B74;
    }
    // 0x80248AA8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80248AAC: j           L_80248C04
    // 0x80248AB0: nop

        goto L_80248C04;
    // 0x80248AB0: nop

L_80248AB4:
    // 0x80248AB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80248AB8: lw          $v0, -0x3AA4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3AA4);
    // 0x80248ABC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80248AC0: beq         $v0, $zero, L_80248C04
    if (ctx->r2 == 0) {
        // 0x80248AC4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80248C04;
    }
    // 0x80248AC4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80248AC8: j           L_80248C04
    // 0x80248ACC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248C04;
    // 0x80248ACC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248AD0:
    // 0x80248AD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248AD4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248AD8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248ADC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248AE0: bne         $v0, $zero, L_80248C04
    if (ctx->r2 != 0) {
        // 0x80248AE4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80248C04;
    }
    // 0x80248AE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80248AE8: jal         0x800616FC
    // 0x80248AEC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80248AEC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80248AF0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80248AF4: addiu       $a1, $a1, -0x3AA4
    ctx->r5 = ADD32(ctx->r5, -0X3AA4);
    // 0x80248AF8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80248AFC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80248B00: addiu       $a2, $a2, 0x4A6D
    ctx->r6 = ADD32(ctx->r6, 0X4A6D);
    // 0x80248B04: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x80248B08: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x80248B0C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80248B10: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x80248B14: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80248B18: j           L_80248B48
    // 0x80248B1C: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
        goto L_80248B48;
    // 0x80248B1C: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
L_80248B20:
    // 0x80248B20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248B24: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248B28: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248B2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248B30: bne         $v0, $zero, L_80248C04
    if (ctx->r2 != 0) {
        // 0x80248B34: nop
    
            goto L_80248C04;
    }
    // 0x80248B34: nop

    // 0x80248B38: jal         0x8006033C
    // 0x80248B3C: addiu       $a0, $zero, 0x5B
    ctx->r4 = ADD32(0, 0X5B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80248B3C: addiu       $a0, $zero, 0x5B
    ctx->r4 = ADD32(0, 0X5B);
    after_1:
    // 0x80248B40: beq         $v0, $zero, L_80248B58
    if (ctx->r2 == 0) {
        // 0x80248B44: nop
    
            goto L_80248B58;
    }
    // 0x80248B44: nop

L_80248B48:
    // 0x80248B48: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80248B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248B50: j           L_80248C04
    // 0x80248B54: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80248C04;
    // 0x80248B54: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80248B58:
    // 0x80248B58: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248B5C: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80248B60: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80248B64: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248B68: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80248B6C: j           L_80248C04
    // 0x80248B70: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80248C04;
    // 0x80248B70: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80248B74:
    // 0x80248B74: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80248B78: bne         $v1, $v0, L_80248B8C
    if (ctx->r3 != ctx->r2) {
        // 0x80248B7C: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80248B8C;
    }
    // 0x80248B7C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80248B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248B84: jal         0x8002A2F8
    // 0x80248B88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80248B88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80248B8C:
    // 0x80248B8C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80248B90: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80248B94: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80248B98: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80248B9C: bne         $v0, $zero, L_80248C04
    if (ctx->r2 != 0) {
        // 0x80248BA0: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_80248C04;
    }
    // 0x80248BA0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80248BA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248BA8: jal         0x8002A2F8
    // 0x80248BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80248BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80248BB0: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248BB4: addiu       $s0, $s0, 0x5154
    ctx->r16 = ADD32(ctx->r16, 0X5154);
    // 0x80248BB8: jal         0x8003E6BC
    // 0x80248BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80248BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80248BC0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248BC4: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248BC8: jal         0x80071ACC
    // 0x80248BCC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_5;
    // 0x80248BCC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_5:
    // 0x80248BD0: jal         0x8003E6BC
    // 0x80248BD4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80248BD4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_6:
    // 0x80248BD8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248BDC: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248BE0: jal         0x80071ACC
    // 0x80248BE4: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_7;
    // 0x80248BE4: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_7:
    // 0x80248BE8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248BEC: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x80248BF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80248BF4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248BF8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80248BFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80248C00: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248C04:
    // 0x80248C04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248C08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80248C0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248C10: jr          $ra
    // 0x80248C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
