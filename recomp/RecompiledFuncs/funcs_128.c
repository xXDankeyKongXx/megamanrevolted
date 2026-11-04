#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227D58_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D58: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227D5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227D60: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80227D64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227D68: bne         $v0, $zero, L_80227D74
    if (ctx->r2 != 0) {
        // 0x80227D6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227D74;
    }
    // 0x80227D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D70: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227D74:
    // 0x80227D74: jr          $ra
    // 0x80227D78: nop

    TRACE_RETURN()
    return;
    // 0x80227D78: nop

;}
RECOMP_FUNC void func_8022F6D0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F6D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F6D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F6DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F6E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F6E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F6E8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F6EC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022F6F0: jal         0x8004D5D4
    // 0x8022F6F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F6F4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F6F8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022F6FC: jal         0x8002C678
    // 0x8022F700: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8022F700: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022F704: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022F708: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F70C: jal         0x800319B4
    // 0x8022F710: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022F710: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022F714: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F718: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022F71C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F720: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022F724: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F728: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F72C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F730: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F734: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F738: jr          $ra
    // 0x8022F73C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F73C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230E04_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230E08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230E0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230E14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230E1C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230E20: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x80230E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230E28: beq         $v1, $v0, L_80230E70
    if (ctx->r3 == ctx->r2) {
        // 0x80230E2C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80230E70;
    }
    // 0x80230E2C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230E30: beql        $v0, $zero, L_80230E48
    if (ctx->r2 == 0) {
        // 0x80230E34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230E48;
    }
    goto skip_0;
    // 0x80230E34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230E38: beq         $v1, $zero, L_80230E58
    if (ctx->r3 == 0) {
        // 0x80230E3C: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_80230E58;
    }
    // 0x80230E3C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80230E40: j           L_80230F9C
    // 0x80230E44: nop

        goto L_80230F9C;
    // 0x80230E44: nop

L_80230E48:
    // 0x80230E48: beq         $v1, $v0, L_80230EA4
    if (ctx->r3 == ctx->r2) {
        // 0x80230E4C: nop
    
            goto L_80230EA4;
    }
    // 0x80230E4C: nop

    // 0x80230E50: j           L_80230F9C
    // 0x80230E54: nop

        goto L_80230F9C;
    // 0x80230E54: nop

L_80230E58:
    // 0x80230E58: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80230E5C: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x80230E60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230E64: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x80230E68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230E6C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_80230E70:
    // 0x80230E70: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80230E74: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x80230E78: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x80230E7C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x80230E80: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x80230E84: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80230E88: bne         $v1, $a0, L_80230E98
    if (ctx->r3 != ctx->r4) {
        // 0x80230E8C: nop
    
            goto L_80230E98;
    }
    // 0x80230E8C: nop

    // 0x80230E90: jal         0x80231038
    // 0x80230E94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80231038_ovl18(rdram, ctx);
        goto after_0;
    // 0x80230E94: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_80230E98:
    // 0x80230E98: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80230E9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230EA0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80230EA4:
    // 0x80230EA4: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80230EA8: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x80230EAC: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x80230EB0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80230EB4: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x80230EB8: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x80230EBC: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x80230EC0: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x80230EC4: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80230EC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230ECC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80230ED0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230ED4: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x80230ED8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80230EDC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80230EE0: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80230EE4: beq         $v1, $zero, L_80230F54
    if (ctx->r3 == 0) {
        // 0x80230EE8: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_80230F54;
    }
    // 0x80230EE8: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x80230EEC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230EF0: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x80230EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230EF8: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x80230EFC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80230F00: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80230F04: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x80230F08: jal         0x8004D5D4
    // 0x80230F0C: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80230F0C: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x80230F10: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80230F14: jal         0x8002C654
    // 0x80230F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80230F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230F1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230F20: jal         0x800317C0
    // 0x80230F24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x80230F24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230F28: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x80230F2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230F30: jal         0x800319B4
    // 0x80230F34: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80230F34: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x80230F38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230F3C: jal         0x80031BB4
    // 0x80230F40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x80230F40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230F44: jal         0x8004F684
    // 0x80230F48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x80230F48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80230F4C: j           L_80230F9C
    // 0x80230F50: nop

        goto L_80230F9C;
    // 0x80230F50: nop

L_80230F54:
    // 0x80230F54: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230F58: jal         0x8002C654
    // 0x80230F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x80230F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80230F60: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80230F64: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80230F68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80230F6C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80230F70: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80230F74: lh          $a0, 0x4470($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4470);
    // 0x80230F78: jal         0x80031BB4
    // 0x80230F7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x80230F7C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80230F80: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230F84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230F88: jal         0x800319B4
    // 0x80230F8C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x80230F8C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x80230F90: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80230F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230F98: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80230F9C:
    // 0x80230F9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230FA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230FA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230FA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230FAC: jr          $ra
    // 0x80230FB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230FB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227780_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227784: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227788: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022778C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227790: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227794: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227798: jal         0x8004FA7C
    // 0x8022779C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022779C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802277A0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802277A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802277A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802277AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802277B0: bne         $v0, $zero, L_80227814
    if (ctx->r2 != 0) {
        // 0x802277B4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227814;
    }
    // 0x802277B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802277B8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x802277BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277C0: beq         $v1, $zero, L_80227804
    if (ctx->r3 == 0) {
        // 0x802277C4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80227804;
    }
    // 0x802277C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802277C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802277CC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802277D0: jal         0x8009A3B4
    // 0x802277D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802277D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802277D8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802277DC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802277E0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802277E4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x802277E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802277EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802277F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802277F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802277F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802277FC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227800: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80227804:
    // 0x80227804: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80227808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022780C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227810: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80227814:
    // 0x80227814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227818: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022781C: jr          $ra
    // 0x80227820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DB34_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022DB38: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022DB3C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DB40: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022DB44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DB48: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x8022DB4C: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x8022DB50: beq         $v0, $zero, L_8022DC40
    if (ctx->r2 == 0) {
        // 0x8022DB54: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_8022DC40;
    }
    // 0x8022DB54: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022DB58: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022DB5C: jal         0x8009A3B4
    // 0x8022DB60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DB60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DB64: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022DB68: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022DB6C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022DB70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DB74: jal         0x8009A3B4
    // 0x8022DB78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DB78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022DB7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DB80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DB84: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022DB88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB8C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022DB90: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022DB94: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022DB98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DB9C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022DBA0: jal         0x8004DF78
    // 0x8022DBA4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022DBA4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022DBA8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DBAC: bne         $v0, $zero, L_8022DC44
    if (ctx->r2 != 0) {
        // 0x8022DBB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DC44;
    }
    // 0x8022DBB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DBB4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DBB8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022DBBC: jal         0x8009A3B4
    // 0x8022DBC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DBC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022DBC4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022DBC8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022DBCC: jal         0x8009A3B4
    // 0x8022DBD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022DBD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022DBD4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DBD8: beq         $v0, $zero, L_8022DBF4
    if (ctx->r2 == 0) {
        // 0x8022DBDC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DBF4;
    }
    // 0x8022DBDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DBE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DBE4: jal         0x80050294
    // 0x8022DBE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022DBE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022DBEC: j           L_8022DC38
    // 0x8022DBF0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8022DC38;
    // 0x8022DBF0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8022DBF4:
    // 0x8022DBF4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022DBF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DBFC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022DC00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DC04: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022DC08: bnel        $v0, $zero, L_8022DC44
    if (ctx->r2 != 0) {
        // 0x8022DC0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DC44;
    }
    goto skip_0;
    // 0x8022DC0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022DC10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DC14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DC18: jal         0x80050294
    // 0x8022DC1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022DC1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022DC20: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DC24: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022DC28: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022DC2C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DC30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DC34: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_8022DC38:
    // 0x8022DC38: j           L_8022DC44
    // 0x8022DC3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DC44;
    // 0x8022DC3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DC40:
    // 0x8022DC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DC44:
    // 0x8022DC44: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022DC48: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DC4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DC50: jr          $ra
    // 0x8022DC54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DC54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022DC58: nop

    // 0x8022DC5C: nop

;}
RECOMP_FUNC void func_802260E8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802260EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802260F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260F4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802260F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802260FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80226100: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80226104: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226108: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022610C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226110: jal         0x8009A3B4
    // 0x80226114: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226114: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226118: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022611C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226120: jal         0x8009A3B4
    // 0x80226124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226128: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022612C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226130: jal         0x8009A3B4
    // 0x80226134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226138: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022613C: jal         0x800A3450
    // 0x80226140: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80226140: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80226144: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80226148: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022614C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80226150: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x80226154: bne         $v1, $v0, L_80226164
    if (ctx->r3 != ctx->r2) {
        // 0x80226158: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226164;
    }
    // 0x80226158: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022615C: jal         0x80226BA8
    // 0x80226160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226BA8_ovl18(rdram, ctx);
        goto after_4;
    // 0x80226160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226164:
    // 0x80226164: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226168: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022616C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226170: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226174: lw          $v0, 0x392C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X392C);
    // 0x80226178: jalr        $v0
    // 0x8022617C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022617C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226180: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80226184: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226188: beq         $v0, $zero, L_802261C8
    if (ctx->r2 == 0) {
        // 0x8022618C: nop
    
            goto L_802261C8;
    }
    // 0x8022618C: nop

    // 0x80226190: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226194: bltz        $v1, L_802261B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80226198: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_802261B8;
    }
    // 0x80226198: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022619C: bne         $v0, $zero, L_802261B4
    if (ctx->r2 != 0) {
        // 0x802261A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802261B4;
    }
    // 0x802261A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802261A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802261A8: bnel        $v1, $v0, L_802261BC
    if (ctx->r3 != ctx->r2) {
        // 0x802261AC: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_802261BC;
    }
    goto skip_0;
    // 0x802261AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x802261B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802261B4:
    // 0x802261B4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802261B8:
    // 0x802261B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802261BC:
    // 0x802261BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802261C0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802261C4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802261C8:
    // 0x802261C8: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x802261CC: bne         $v0, $zero, L_802261FC
    if (ctx->r2 != 0) {
        // 0x802261D0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_802261FC;
    }
    // 0x802261D0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802261D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802261D8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802261DC: beq         $v0, $zero, L_802261FC
    if (ctx->r2 == 0) {
        // 0x802261E0: nop
    
            goto L_802261FC;
    }
    // 0x802261E0: nop

    // 0x802261E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802261E8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802261EC: bne         $v0, $zero, L_802261FC
    if (ctx->r2 != 0) {
        // 0x802261F0: nop
    
            goto L_802261FC;
    }
    // 0x802261F0: nop

    // 0x802261F4: jal         0x8004F418
    // 0x802261F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x802261F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802261FC:
    // 0x802261FC: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80226200: beq         $v0, $zero, L_80226210
    if (ctx->r2 == 0) {
        // 0x80226204: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226210;
    }
    // 0x80226204: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226208: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022620C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80226210:
    // 0x80226210: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80226214: beq         $v0, $zero, L_80226220
    if (ctx->r2 == 0) {
        // 0x80226218: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226220;
    }
    // 0x80226218: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022621C: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_80226220:
    // 0x80226220: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80226224: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226228: beq         $v0, $a1, L_80226240
    if (ctx->r2 == ctx->r5) {
        // 0x8022622C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226240;
    }
    // 0x8022622C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226230: jal         0x80050294
    // 0x80226234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80226234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80226238: j           L_80226248
    // 0x8022623C: nop

        goto L_80226248;
    // 0x8022623C: nop

L_80226240:
    // 0x80226240: jal         0x8005044C
    // 0x80226244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80226244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80226248:
    // 0x80226248: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022624C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226250: beq         $v0, $zero, L_80226268
    if (ctx->r2 == 0) {
        // 0x80226254: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226268;
    }
    // 0x80226254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226258: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022625C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80226260: jal         0x8003B564
    // 0x80226264: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80226264: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_80226268:
    // 0x80226268: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022626C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226270: beq         $v0, $zero, L_802262E0
    if (ctx->r2 == 0) {
        // 0x80226274: nop
    
            goto L_802262E0;
    }
    // 0x80226274: nop

    // 0x80226278: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022627C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226280: beq         $v0, $zero, L_802262E0
    if (ctx->r2 == 0) {
        // 0x80226284: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_802262E0;
    }
    // 0x80226284: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x80226288: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022628C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226290: jal         0x8009A3B4
    // 0x80226294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80226294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80226298: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022629C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802262A0: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x802262A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802262A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802262AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802262B0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802262B4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802262B8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x802262BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802262C0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802262C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802262C8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802262CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802262D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802262D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802262D8: jal         0x80051E18
    // 0x802262DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x802262DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_802262E0:
    // 0x802262E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802262E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802262E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802262EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802262F0: jr          $ra
    // 0x802262F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802262F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022717C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022717C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227180: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227184: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227188: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022718C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227190: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80227194: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227198: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022719C: addiu       $v0, $v0, 0x3F0C
    ctx->r2 = ADD32(ctx->r2, 0X3F0C);
    // 0x802271A0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x802271A4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x802271A8: jal         0x80229378
    // 0x802271AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80229378_ovl18(rdram, ctx);
        goto after_0;
    // 0x802271AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802271B0: jal         0x800A3450
    // 0x802271B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802271B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x802271B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802271BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802271C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802271C4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802271C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271CC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x802271D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802271D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802271D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802271DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271E0: jr          $ra
    // 0x802271E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802271E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802256F4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225704: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225708: bne         $v0, $zero, L_80225724
    if (ctx->r2 != 0) {
        // 0x8022570C: nop
    
            goto L_80225724;
    }
    // 0x8022570C: nop

    // 0x80225710: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225714: jal         0x800607C4
    // 0x80225718: addiu       $a0, $a0, 0x3798
    ctx->r4 = ADD32(ctx->r4, 0X3798);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225718: addiu       $a0, $a0, 0x3798
    ctx->r4 = ADD32(ctx->r4, 0X3798);
    after_0:
    // 0x8022571C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225720: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225724:
    // 0x80225724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022572C: jr          $ra
    // 0x80225730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D91C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D91C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D92C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022D930: bne         $a1, $zero, L_8022D960
    if (ctx->r5 != 0) {
        // 0x8022D934: andi        $v0, $a1, 0x500
        ctx->r2 = ctx->r5 & 0X500;
            goto L_8022D960;
    }
    // 0x8022D934: andi        $v0, $a1, 0x500
    ctx->r2 = ctx->r5 & 0X500;
    // 0x8022D938: jal         0x800A3450
    // 0x8022D93C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D93C: nop

    after_0:
    // 0x8022D940: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022D944: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022D948: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D94C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D950: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022D954: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022D958: j           L_8022D97C
    // 0x8022D95C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022D97C;
    // 0x8022D95C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022D960:
    // 0x8022D960: bnel        $v0, $zero, L_8022D968
    if (ctx->r2 != 0) {
        // 0x8022D964: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022D968;
    }
    goto skip_0;
    // 0x8022D964: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022D968:
    // 0x8022D968: andi        $v0, $a1, 0xA00
    ctx->r2 = ctx->r5 & 0XA00;
    // 0x8022D96C: beq         $v0, $zero, L_8022D97C
    if (ctx->r2 == 0) {
        // 0x8022D970: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022D97C;
    }
    // 0x8022D970: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D974: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D978: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022D97C:
    // 0x8022D97C: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022D980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D988: jr          $ra
    // 0x8022D98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A21C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A21C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A228: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022A22C: bne         $a1, $zero, L_8022A25C
    if (ctx->r5 != 0) {
        // 0x8022A230: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022A25C;
    }
    // 0x8022A230: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022A234: jal         0x800A3450
    // 0x8022A238: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A238: nop

    after_0:
    // 0x8022A23C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022A240: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022A244: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A248: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A24C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A250: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022A254: j           L_8022A280
    // 0x8022A258: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022A280;
    // 0x8022A258: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022A25C:
    // 0x8022A25C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022A260: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022A264: bnel        $v0, $zero, L_8022A26C
    if (ctx->r2 != 0) {
        // 0x8022A268: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022A26C;
    }
    goto skip_0;
    // 0x8022A268: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022A26C:
    // 0x8022A26C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022A270: beq         $v0, $zero, L_8022A280
    if (ctx->r2 == 0) {
        // 0x8022A274: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022A280;
    }
    // 0x8022A274: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A278: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A27C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022A280:
    // 0x8022A280: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022A284: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022A288: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022A28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A294: jr          $ra
    // 0x8022A298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229754_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229758: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022975C: jal         0x8004F418
    // 0x80229760: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229760: nop

    after_0:
    // 0x80229764: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229768: jr          $ra
    // 0x8022976C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022976C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226714_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226714: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226718: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022671C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226720: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226724: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80226728: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022672C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80226730: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80226734: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80226738: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022673C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226740: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226744: beq         $v0, $zero, L_80226A24
    if (ctx->r2 == 0) {
        // 0x80226748: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226A24;
    }
    // 0x80226748: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022674C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226750: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226754: addu        $at, $at, $v0
    gpr jr_addend_8022675C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226758: lw          $v0, 0x4610($at)
    ctx->r2 = ADD32(ctx->r1, 0X4610);
    // 0x8022675C: jr          $v0
    // 0x80226760: nop

    switch (jr_addend_8022675C >> 2) {
        case 0: goto L_802268B4; break;
        case 1: goto L_80226920; break;
        case 2: goto L_80226920; break;
        case 3: goto L_80226A00; break;
        case 4: goto L_80226764; break;
        default: switch_error(__func__, 0x8022675C, 0x80234610);
    }
    // 0x80226760: nop

L_80226764:
    // 0x80226764: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80226768: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022676C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226770: bne         $v0, $zero, L_8022687C
    if (ctx->r2 != 0) {
        // 0x80226774: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022687C;
    }
    // 0x80226774: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226778: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022677C: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x80226780: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226784: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226788: lbu         $v0, 0x394C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X394C);
    // 0x8022678C: bne         $v1, $v0, L_80226868
    if (ctx->r3 != ctx->r2) {
        // 0x80226790: nop
    
            goto L_80226868;
    }
    // 0x80226790: nop

    // 0x80226794: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80226798: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022679C: beq         $v0, $zero, L_80226868
    if (ctx->r2 == 0) {
        // 0x802267A0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80226868;
    }
    // 0x802267A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802267A4: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x802267A8: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x802267AC: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x802267B0: addiu       $s4, $s4, 0x3950
    ctx->r20 = ADD32(ctx->r20, 0X3950);
    // 0x802267B4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_802267B8:
    // 0x802267B8: jal         0x8004F144
    // 0x802267BC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802267BC: nop

    after_0:
    // 0x802267C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802267C4: beq         $v1, $zero, L_80226858
    if (ctx->r3 == 0) {
        // 0x802267C8: nop
    
            goto L_80226858;
    }
    // 0x802267C8: nop

    // 0x802267CC: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x802267D0: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x802267D4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802267D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802267DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802267E0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802267E4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802267E8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802267EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802267F0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802267F4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x802267F8: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802267FC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80226800: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226804: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80226808: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022680C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226810: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226814: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226818: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022681C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80226820: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80226824: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80226828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022682C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80226830: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80226834: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226838: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022683C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226840: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80226844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226848: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022684C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80226850: bne         $v0, $zero, L_802267B8
    if (ctx->r2 != 0) {
        // 0x80226854: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_802267B8;
    }
    // 0x80226854: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_80226858:
    // 0x80226858: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022685C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226860: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80226864: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80226868:
    // 0x80226868: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022686C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226870: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80226874: j           L_80226A24
    // 0x80226878: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80226A24;
    // 0x80226878: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022687C:
    // 0x8022687C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226880: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80226884: jal         0x8004FEA0
    // 0x80226888: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80226888: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022688C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226890: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226894: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226898: beq         $v0, $zero, L_802268AC
    if (ctx->r2 == 0) {
        // 0x8022689C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_802268AC;
    }
    // 0x8022689C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x802268A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802268A4: j           L_802268B0
    // 0x802268A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_802268B0;
    // 0x802268A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802268AC:
    // 0x802268AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802268B0:
    // 0x802268B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802268B4:
    // 0x802268B4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802268B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802268BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802268C0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x802268C4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802268C8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802268CC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802268D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802268D4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802268D8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x802268DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802268E0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802268E4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802268E8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x802268EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802268F0: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x802268F4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x802268F8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802268FC: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x80226900: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80226904: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226908: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022690C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80226910: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80226914: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226918: jal         0x8002A33C
    // 0x8022691C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022691C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_80226920:
    // 0x80226920: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226924: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022692C: jal         0x8004DA90
    // 0x80226930: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80226930: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80226934: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80226938: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022693C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226940: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226944: jal         0x80040F30
    // 0x80226948: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80226948: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022694C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226950: beq         $v1, $zero, L_80226A24
    if (ctx->r3 == 0) {
        // 0x80226954: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80226A24;
    }
    // 0x80226954: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80226958: beq         $v0, $zero, L_80226974
    if (ctx->r2 == 0) {
        // 0x8022695C: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_80226974;
    }
    // 0x8022695C: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80226960: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226964: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226968: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022696C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226970: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_80226974:
    // 0x80226974: beq         $v0, $zero, L_80226A28
    if (ctx->r2 == 0) {
        // 0x80226978: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80226A28;
    }
    // 0x80226978: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022697C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80226980: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80226984: bne         $v0, $zero, L_802269D8
    if (ctx->r2 != 0) {
        // 0x80226988: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_802269D8;
    }
    // 0x80226988: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022698C: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80226990: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80226994: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226998: beq         $v0, $zero, L_802269C8
    if (ctx->r2 == 0) {
        // 0x8022699C: nop
    
            goto L_802269C8;
    }
    // 0x8022699C: nop

    // 0x802269A0: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x802269A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802269A8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802269AC: beq         $v0, $zero, L_802269C8
    if (ctx->r2 == 0) {
        // 0x802269B0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802269C8;
    }
    // 0x802269B0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802269B4: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x802269B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802269BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802269C0: jal         0x8007A290
    // 0x802269C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x802269C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_802269C8:
    // 0x802269C8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802269CC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802269D0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802269D4: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_802269D8:
    // 0x802269D8: jal         0x8002A33C
    // 0x802269DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802269DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802269E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802269E4: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802269E8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802269EC: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x802269F0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802269F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269F8: j           L_80226A24
    // 0x802269FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226A24;
    // 0x802269FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226A00:
    // 0x80226A00: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226A04: bne         $v0, $zero, L_80226A28
    if (ctx->r2 != 0) {
        // 0x80226A08: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80226A28;
    }
    // 0x80226A08: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x80226A0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226A14: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226A18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226A1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226A20: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226A24:
    // 0x80226A24: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_80226A28:
    // 0x80226A28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226A2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80226A30: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80226A34: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80226A38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80226A3C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80226A40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226A44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226A4C: jr          $ra
    // 0x80226A50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226A50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802307AC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802307AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802307B0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802307B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802307B8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802307BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802307C0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802307C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802307C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802307CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802307D0: lw          $v0, 0x444C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X444C);
    // 0x802307D4: jalr        $v0
    // 0x802307D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802307D8: nop

    after_0:
    // 0x802307DC: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x802307E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802307E4: beq         $v1, $v0, L_80230858
    if (ctx->r3 == ctx->r2) {
        // 0x802307E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80230858;
    }
    // 0x802307E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802307EC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802307F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802307F4: jal         0x80047284
    // 0x802307F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x802307F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802307FC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80230800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230804: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230808: jal         0x8009A3B4
    // 0x8023080C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023080C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230814: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80230818: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8023081C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230820: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80230824: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80230828: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023082C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230830: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x80230834: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230838: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023083C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230840: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230844: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80230848: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023084C: jal         0x80051E18
    // 0x80230850: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80230850: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230854: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80230858:
    // 0x80230858: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023085C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230860: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230864: jr          $ra
    // 0x80230868: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230868: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802294C0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802294C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802294C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802294CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802294D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802294D8: lw          $v0, 0x4110($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4110);
    // 0x802294DC: jalr        $v0
    // 0x802294E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802294E0: nop

    after_0:
    // 0x802294E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802294E8: jr          $ra
    // 0x802294EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D2D8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D2DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D2E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D2E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D2E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022D2EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D2F0: jal         0x8004DDE8
    // 0x8022D2F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022D2F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D2F8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D2FC: beq         $v1, $zero, L_8022D318
    if (ctx->r3 == 0) {
        // 0x8022D300: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022D318;
    }
    // 0x8022D300: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022D304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D308: beq         $v1, $v0, L_8022D344
    if (ctx->r3 == ctx->r2) {
        // 0x8022D30C: nop
    
            goto L_8022D344;
    }
    // 0x8022D30C: nop

    // 0x8022D310: j           L_8022D36C
    // 0x8022D314: nop

        goto L_8022D36C;
    // 0x8022D314: nop

L_8022D318:
    // 0x8022D318: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022D31C: beq         $v0, $zero, L_8022D36C
    if (ctx->r2 == 0) {
        // 0x8022D320: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D36C;
    }
    // 0x8022D320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D324: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022D328: jal         0x80050294
    // 0x8022D32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022D32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022D330: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D334: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D33C: j           L_8022D36C
    // 0x8022D340: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D36C;
    // 0x8022D340: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D344:
    // 0x8022D344: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D348: bgez        $v0, L_8022D36C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D34C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D36C;
    }
    // 0x8022D34C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D354: jal         0x80050294
    // 0x8022D358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022D358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022D35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D360: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D364: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D368: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D36C:
    // 0x8022D36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D374: jr          $ra
    // 0x8022D378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C4A4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C4A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C4AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C4B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C4B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C4B8: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022C4BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C4C0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022C4C4: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022C4C8: beq         $v0, $zero, L_8022C514
    if (ctx->r2 == 0) {
        // 0x8022C4CC: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022C514;
    }
    // 0x8022C4CC: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022C4D0: lbu         $v0, 0x36E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36E);
    // 0x8022C4D4: sltiu       $v0, $v0, 0x3C
    ctx->r2 = ctx->r2 < 0X3C ? 1 : 0;
    // 0x8022C4D8: beq         $v0, $zero, L_8022C514
    if (ctx->r2 == 0) {
        // 0x8022C4DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C514;
    }
    // 0x8022C4DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C4E0: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C4E4: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022C4E8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022C4EC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022C4F0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C4F4: jal         0x8004F820
    // 0x8022C4F8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C4F8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022C4FC: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022C500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C504: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C508: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C50C: jal         0x8022C650
    // 0x8022C510: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    func_8022C650_ovl18(rdram, ctx);
        goto after_1;
    // 0x8022C510: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    after_1:
L_8022C514:
    // 0x8022C514: lbu         $v0, 0x66($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X66);
    // 0x8022C518: bne         $v0, $zero, L_8022C54C
    if (ctx->r2 != 0) {
        // 0x8022C51C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022C54C;
    }
    // 0x8022C51C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C520: lb          $v0, 0x65($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X65);
    // 0x8022C524: beq         $v0, $zero, L_8022C534
    if (ctx->r2 == 0) {
        // 0x8022C528: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C534;
    }
    // 0x8022C528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C52C: j           L_8022C550
    // 0x8022C530: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C550;
    // 0x8022C530: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C534:
    // 0x8022C534: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C538: sb          $v0, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r2;
    // 0x8022C53C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C540: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
    // 0x8022C544: j           L_8022C550
    // 0x8022C548: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C550;
    // 0x8022C548: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C54C:
    // 0x8022C54C: sb          $v0, 0x66($s1)
    MEM_B(0X66, ctx->r17) = ctx->r2;
L_8022C550:
    // 0x8022C550: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C554: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C558: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C55C: jr          $ra
    // 0x8022C560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CB08_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CB0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CB18: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022CB1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022CB20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CB24: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x8022CB28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CB2C: jal         0x8004DE68
    // 0x8022CB30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022CB30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022CB34: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CB38: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022CB3C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022CB40: beq         $v1, $zero, L_8022CB5C
    if (ctx->r3 == 0) {
        // 0x8022CB44: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022CB5C;
    }
    // 0x8022CB44: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022CB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB4C: beq         $v1, $v0, L_8022CB7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB50: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022CB7C;
    }
    // 0x8022CB50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022CB54: j           L_8022CBBC
    // 0x8022CB58: nop

        goto L_8022CBBC;
    // 0x8022CB58: nop

L_8022CB5C:
    // 0x8022CB5C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022CB60: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CB64: bne         $v0, $zero, L_8022CBA8
    if (ctx->r2 != 0) {
        // 0x8022CB68: nop
    
            goto L_8022CBA8;
    }
    // 0x8022CB68: nop

    // 0x8022CB6C: beq         $v1, $zero, L_8022CBA8
    if (ctx->r3 == 0) {
        // 0x8022CB70: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022CBA8;
    }
    // 0x8022CB70: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022CB74: j           L_8022CBBC
    // 0x8022CB78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022CBBC;
    // 0x8022CB78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CB7C:
    // 0x8022CB7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CB80: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022CB84: jal         0x8004F820
    // 0x8022CB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022CB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022CB8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CB90: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x8022CB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CB98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CB9C: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022CBA0: beq         $a0, $zero, L_8022CBBC
    if (ctx->r4 == 0) {
        // 0x8022CBA4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022CBBC;
    }
    // 0x8022CBA4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022CBA8:
    // 0x8022CBA8: jal         0x8022CCD0
    // 0x8022CBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CCD0_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022CBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CBB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBB4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CBB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022CBBC:
    // 0x8022CBBC: jal         0x8022CBF8
    // 0x8022CBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CBF8_ovl18(rdram, ctx);
        goto after_3;
    // 0x8022CBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CBC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CBC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CBCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBD4: jr          $ra
    // 0x8022CBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229770_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022977C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229780: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229784: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229788: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022978C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80229790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229794: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80229798: beq         $v1, $v0, L_8022982C
    if (ctx->r3 == ctx->r2) {
        // 0x8022979C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022982C;
    }
    // 0x8022979C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802297A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802297A4: beq         $v0, $zero, L_80229870
    if (ctx->r2 == 0) {
        // 0x802297A8: nop
    
            goto L_80229870;
    }
    // 0x802297A8: nop

    // 0x802297AC: bne         $v1, $zero, L_80229870
    if (ctx->r3 != 0) {
        // 0x802297B0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80229870;
    }
    // 0x802297B0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802297B4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802297B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802297BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802297C0: addiu       $s2, $s0, 0x354
    ctx->r18 = ADD32(ctx->r16, 0X354);
    // 0x802297C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802297C8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802297CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802297D0: jal         0x8004F820
    // 0x802297D4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802297D4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x802297D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297DC: bgez        $v0, L_80229808
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802297E0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229808;
    }
    // 0x802297E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802297E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802297E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802297EC: jal         0x8004F820
    // 0x802297F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802297F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802297F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802297F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802297FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229800: j           L_80229820
    // 0x80229804: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229820;
    // 0x80229804: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229808:
    // 0x80229808: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022980C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229810: jal         0x8004F820
    // 0x80229814: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229814: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229818: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022981C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229820:
    // 0x80229820: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229824: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80229828: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022982C:
    // 0x8022982C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229830: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80229834: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229838: jal         0x8004F820
    // 0x8022983C: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022983C: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    after_3:
    // 0x80229840: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229844: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229848: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022984C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229850: bne         $v0, $zero, L_80229870
    if (ctx->r2 != 0) {
        // 0x80229854: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229870;
    }
    // 0x80229854: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229858: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8022985C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229860: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x80229864: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229868: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022986C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229870:
    // 0x80229870: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229874: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229878: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022987C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229884: jr          $ra
    // 0x80229888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802314BC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802314C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802314C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802314C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802314CC: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x802314D0: beq         $a0, $zero, L_802314E8
    if (ctx->r4 == 0) {
        // 0x802314D4: nop
    
            goto L_802314E8;
    }
    // 0x802314D4: nop

    // 0x802314D8: jal         0x8006033C
    // 0x802314DC: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802314DC: nop

    after_0:
    // 0x802314E0: beq         $v0, $zero, L_80231510
    if (ctx->r2 == 0) {
        // 0x802314E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231510;
    }
    // 0x802314E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802314E8:
    // 0x802314E8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802314EC: jal         0x8006033C
    // 0x802314F0: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802314F0: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x802314F4: bne         $v0, $zero, L_80231510
    if (ctx->r2 != 0) {
        // 0x802314F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80231510;
    }
    // 0x802314F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802314FC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80231500: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231504: bne         $v1, $v0, L_80231510
    if (ctx->r3 != ctx->r2) {
        // 0x80231508: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231510;
    }
    // 0x80231508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023150C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80231510:
    // 0x80231510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231514: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231518: jr          $ra
    // 0x8023151C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023151C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E60C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E60C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E610: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E614: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022E618: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022E61C: lui         $s5, 0x2E80
    ctx->r21 = S32(0X2E80 << 16);
    // 0x8022E620: ori         $s5, $s5, 0x8080
    ctx->r21 = ctx->r21 | 0X8080;
    // 0x8022E624: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8022E628: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x8022E62C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022E630: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x8022E634: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022E638: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8022E63C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E640: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022E644: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E648: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022E64C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022E650: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8022E658:
    // 0x8022E658: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022E65C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x8022E660: lbu         $s1, 0x435C($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X435C);
    // 0x8022E664: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022E668: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x8022E66C: lbu         $s0, 0x435D($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X435D);
    // 0x8022E670: jal         0x8003B878
    // 0x8022E674: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022E674: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    after_0:
    // 0x8022E678: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x8022E67C: lw          $v1, 0xD8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD8);
    // 0x8022E680: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022E684: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022E688: lw          $a2, 0xDC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XDC);
    // 0x8022E68C: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x8022E690: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x8022E694: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022E698: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x8022E69C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022E6A0: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x8022E6A4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8022E6A8: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x8022E6AC: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8022E6B0: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x8022E6B4: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x8022E6B8: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x8022E6BC: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022E6C0: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x8022E6C4: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x8022E6C8: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x8022E6CC: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x8022E6D0: bne         $v0, $zero, L_8022E658
    if (ctx->r2 != 0) {
        // 0x8022E6D4: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_8022E658;
    }
    // 0x8022E6D4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8022E6D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022E6DC: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8022E6E0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E6E4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022E6E8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022E6EC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E6F0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E6F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E6F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E6FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E700: jr          $ra
    // 0x8022E704: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E704: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022E708: nop

    // 0x8022E70C: nop

;}
RECOMP_FUNC void func_80231B44_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231B48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231B4C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231B50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B58: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231B5C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231B60: beq         $v0, $zero, L_80231C18
    if (ctx->r2 == 0) {
        // 0x80231B64: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80231C18;
    }
    // 0x80231B64: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80231B68: bne         $v0, $zero, L_80231BFC
    if (ctx->r2 != 0) {
        // 0x80231B6C: nop
    
            goto L_80231BFC;
    }
    // 0x80231B6C: nop

    // 0x80231B70: jal         0x8004F144
    // 0x80231B74: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231B74: nop

    after_0:
    // 0x80231B78: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231B7C: beq         $s0, $zero, L_80231BFC
    if (ctx->r16 == 0) {
        // 0x80231B80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231BFC;
    }
    // 0x80231B80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231B84: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231B88: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80231B8C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231B90: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231B94: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231B98: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80231B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231BA0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231BA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231BA8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80231BAC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80231BB0: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80231BB4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80231BB8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80231BBC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80231BC0: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x80231BC4: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80231BC8: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80231BCC: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80231BD0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80231BD4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231BD8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231BDC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80231BE0: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80231BE4: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80231BE8: jal         0x800A3450
    // 0x80231BEC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231BEC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80231BF0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231BF8: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231BFC:
    // 0x80231BFC: jal         0x800A3450
    // 0x80231C00: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231C00: nop

    after_2:
    // 0x80231C04: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231C08: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231C0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231C10: j           L_80231C20
    // 0x80231C14: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80231C20;
    // 0x80231C14: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80231C18:
    // 0x80231C18: jal         0x8004F5C4
    // 0x80231C1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80231C1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80231C20:
    // 0x80231C20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231C24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231C28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C2C: jr          $ra
    // 0x80231C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F30_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225F44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F48: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225F4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F50: lw          $v0, 0x3920($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3920);
    // 0x80225F54: jalr        $v0
    // 0x80225F58: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225F58: nop

    after_0:
    // 0x80225F5C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80225F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F68: jr          $ra
    // 0x80225F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F1C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F1C: jr          $ra
    // 0x80225F20: nop

    TRACE_RETURN()
    return;
    // 0x80225F20: nop

    // 0x80225F24: nop

    // 0x80225F28: nop

    // 0x80225F2C: nop

;}
RECOMP_FUNC void func_802311B0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802311B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802311B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802311BC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802311C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802311C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802311C8: lh          $v1, 0x3E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3E);
    // 0x802311CC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802311D0: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x802311D4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802311D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802311DC: jal         0x8004D5D4
    // 0x802311E0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802311E0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    after_0:
    // 0x802311E4: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x802311E8: jal         0x8002C654
    // 0x802311EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802311EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802311F0: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x802311F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802311F8: jal         0x800319B4
    // 0x802311FC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x802311FC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80231200: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80231204: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80231208: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023120C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80231210: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231214: addiu       $v0, $v0, 0x4490
    ctx->r2 = ADD32(ctx->r2, 0X4490);
    // 0x80231218: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8023121C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80231220: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80231224: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231228: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023122C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231230: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231234: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231238: jr          $ra
    // 0x8023123C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023123C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022EB6C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EB78: jal         0x8004F144
    // 0x8022EB7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022EB7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022EB80: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022EB84: beql        $a1, $zero, L_8022EBB8
    if (ctx->r5 == 0) {
        // 0x8022EB88: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022EBB8;
    }
    goto skip_0;
    // 0x8022EB88: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022EB8C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022EB90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022EB94: beq         $v0, $zero, L_8022EBAC
    if (ctx->r2 == 0) {
        // 0x8022EB98: nop
    
            goto L_8022EBAC;
    }
    // 0x8022EB98: nop

    // 0x8022EB9C: jal         0x8022EBD0
    // 0x8022EBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022EBD0_ovl18(rdram, ctx);
        goto after_1;
    // 0x8022EBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EBA4: j           L_8022EBB8
    // 0x8022EBA8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8022EBB8;
    // 0x8022EBA8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022EBAC:
    // 0x8022EBAC: jal         0x8022EC10
    // 0x8022EBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022EC10_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022EBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022EBB4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022EBB8:
    // 0x8022EBB8: jal         0x8004F4F8
    // 0x8022EBBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8022EBBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EBC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EBC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EBC8: jr          $ra
    // 0x8022EBCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EBCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A378_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A378: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022A37C: beq         $a1, $zero, L_8022A390
    if (ctx->r5 == 0) {
        // 0x8022A380: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022A390;
    }
    // 0x8022A380: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A384: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022A388: j           L_8022A398
    // 0x8022A38C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_8022A398;
    // 0x8022A38C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_8022A390:
    // 0x8022A390: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x8022A394: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_8022A398:
    // 0x8022A398: jr          $ra
    // 0x8022A39C: nop

    TRACE_RETURN()
    return;
    // 0x8022A39C: nop

;}
RECOMP_FUNC void func_80227E94_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227E98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227E9C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227EA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EA4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EAC: lw          $v0, 0x4044($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4044);
    // 0x80227EB0: jalr        $v0
    // 0x80227EB4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227EB4: nop

    after_0:
    // 0x80227EB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227EBC: jr          $ra
    // 0x80227EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257CC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802257D0: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x802257D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257D8: bne         $v0, $zero, L_8022580C
    if (ctx->r2 != 0) {
        // 0x802257DC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022580C;
    }
    // 0x802257DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802257E0: jal         0x8006033C
    // 0x802257E4: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802257E4: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_0:
    // 0x802257E8: beq         $v0, $zero, L_8022580C
    if (ctx->r2 == 0) {
        // 0x802257EC: nop
    
            goto L_8022580C;
    }
    // 0x802257EC: nop

    // 0x802257F0: jal         0x8006033C
    // 0x802257F4: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802257F4: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    after_1:
    // 0x802257F8: bne         $v0, $zero, L_8022580C
    if (ctx->r2 != 0) {
        // 0x802257FC: nop
    
            goto L_8022580C;
    }
    // 0x802257FC: nop

    // 0x80225800: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225804: jal         0x8005FB30
    // 0x80225808: addiu       $a0, $a0, 0x44B8
    ctx->r4 = ADD32(ctx->r4, 0X44B8);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_2;
    // 0x80225808: addiu       $a0, $a0, 0x44B8
    ctx->r4 = ADD32(ctx->r4, 0X44B8);
    after_2:
L_8022580C:
    // 0x8022580C: jal         0x8006036C
    // 0x80225810: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225810: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_3:
    // 0x80225814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225818: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022581C: jr          $ra
    // 0x80225820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255A0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255B4: bne         $v0, $zero, L_802255D4
    if (ctx->r2 != 0) {
        // 0x802255B8: nop
    
            goto L_802255D4;
    }
    // 0x802255B8: nop

    // 0x802255BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802255C0: jal         0x800607C4
    // 0x802255C4: addiu       $a0, $a0, 0x3788
    ctx->r4 = ADD32(ctx->r4, 0X3788);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802255C4: addiu       $a0, $a0, 0x3788
    ctx->r4 = ADD32(ctx->r4, 0X3788);
    after_0:
    // 0x802255C8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255D0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255D4:
    // 0x802255D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255DC: jr          $ra
    // 0x802255E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225734_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225734: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225738: bne         $v0, $zero, L_80225744
    if (ctx->r2 != 0) {
        // 0x8022573C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225744;
    }
    // 0x8022573C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225740: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80225744:
    // 0x80225744: jr          $ra
    // 0x80225748: nop

    TRACE_RETURN()
    return;
    // 0x80225748: nop

;}
RECOMP_FUNC void func_8022B880_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B88C: jal         0x8004F144
    // 0x8022B890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B894: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B898: beq         $v1, $zero, L_8022B8D0
    if (ctx->r3 == 0) {
        // 0x8022B89C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022B8D0;
    }
    // 0x8022B89C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022B8A0: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022B8A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B8A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B8AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B8B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B8B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B8B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B8BC: jal         0x8009A3B4
    // 0x8022B8C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B8C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022B8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B8C8: jal         0x8007A1B8
    // 0x8022B8CC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022B8CC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022B8D0:
    // 0x8022B8D0: jal         0x80047B3C
    // 0x8022B8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_3;
    // 0x8022B8D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B8D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B8DC: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022B8E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B8E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B8EC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022B8F0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022B8F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022B8F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022B8FC: jal         0x8009A3B4
    // 0x8022B900: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B900: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_4:
    // 0x8022B904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B908: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022B90C: lh          $v0, 0x188($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X188);
    // 0x8022B910: lh          $v1, 0x18A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18A);
    // 0x8022B914: lh          $a3, 0x18C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18C);
    // 0x8022B918: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022B91C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B920: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B924: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022B928: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022B92C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B930: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022B934: jal         0x8004DA90
    // 0x8022B938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022B938: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_5:
    // 0x8022B93C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022B940: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B944: jal         0x8009A3B4
    // 0x8022B948: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022B948: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022B94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B954: jr          $ra
    // 0x8022B958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F70_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F80: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225F84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F88: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225F8C: jal         0x8004D5D4
    // 0x80225F90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225F90: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225F94: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80225F98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F9C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80225FA0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225FA4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225FA8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225FAC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225FB0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225FB4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225FB8: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x80225FBC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225FC0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225FC4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80225FC8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80225FCC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80225FD0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80225FD4: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80225FD8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80225FDC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80225FE0: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x80225FE4: jal         0x800540BC
    // 0x80225FE8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80225FE8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x80225FEC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80225FF0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225FF4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80225FF8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x80225FFC: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x80226000: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226004: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226008: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022600C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80226010: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80226014: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226018: addiu       $v0, $v0, 0x3940
    ctx->r2 = ADD32(ctx->r2, 0X3940);
    // 0x8022601C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80226020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226024: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80226028: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022602C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80226030: beq         $a0, $v0, L_8022607C
    if (ctx->r4 == ctx->r2) {
        // 0x80226034: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022607C;
    }
    // 0x80226034: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80226038: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022603C: beql        $v0, $zero, L_80226054
    if (ctx->r2 == 0) {
        // 0x80226040: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226054;
    }
    goto skip_0;
    // 0x80226040: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226044: beq         $a0, $zero, L_80226064
    if (ctx->r4 == 0) {
        // 0x80226048: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226064;
    }
    // 0x80226048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022604C: j           L_802260D0
    // 0x80226050: nop

        goto L_802260D0;
    // 0x80226050: nop

L_80226054:
    // 0x80226054: beq         $a0, $v0, L_802260B0
    if (ctx->r4 == ctx->r2) {
        // 0x80226058: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802260B0;
    }
    // 0x80226058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022605C: j           L_802260D0
    // 0x80226060: nop

        goto L_802260D0;
    // 0x80226060: nop

L_80226064:
    // 0x80226064: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022606C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226070: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226074: j           L_802260C8
    // 0x80226078: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_802260C8;
    // 0x80226078: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022607C:
    // 0x8022607C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226080: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226084: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022608C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226090: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226094: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226098: jal         0x80050294
    // 0x8022609C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022609C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x802260A0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802260A4: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x802260A8: j           L_802260D0
    // 0x802260AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802260D0;
    // 0x802260AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_802260B0:
    // 0x802260B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802260B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802260B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802260BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802260C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802260C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802260C8:
    // 0x802260C8: jal         0x80050294
    // 0x802260CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802260CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_802260D0:
    // 0x802260D0: jal         0x802260E8
    // 0x802260D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802260E8_ovl18(rdram, ctx);
        goto after_4;
    // 0x802260D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802260D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260E0: jr          $ra
    // 0x802260E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232278_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023227C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232280: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232288: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023228C: blez        $v0, L_80232314
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80232290: nop
    
            goto L_80232314;
    }
    // 0x80232290: nop

    // 0x80232294: jal         0x800A3450
    // 0x80232298: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80232298: nop

    after_0:
    // 0x8023229C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802322A0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802322A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802322A8: jal         0x800A3450
    // 0x802322AC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802322AC: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x802322B0: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x802322B4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802322B8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802322BC: jal         0x800A3450
    // 0x802322C0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802322C0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x802322C4: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x802322C8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802322CC: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x802322D0: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x802322D4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802322D8: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x802322DC: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x802322E0: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x802322E4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802322E8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802322EC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x802322F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802322F4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x802322F8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x802322FC: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80232300: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x80232304: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x80232308: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x8023230C: j           L_8023231C
    // 0x80232310: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_8023231C;
    // 0x80232310: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_80232314:
    // 0x80232314: jal         0x8004F5C4
    // 0x80232318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80232318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023231C:
    // 0x8023231C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232324: jr          $ra
    // 0x80232328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023232C: nop

;}
RECOMP_FUNC void func_8022A4CC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A4D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4D8: beq         $a1, $zero, L_8022A528
    if (ctx->r5 == 0) {
        // 0x8022A4DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022A528;
    }
    // 0x8022A4DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A4E0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A4E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A4E8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022A4EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A4F0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A4F4: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8022A4F8: bne         $v0, $zero, L_8022A528
    if (ctx->r2 != 0) {
        // 0x8022A4FC: nop
    
            goto L_8022A528;
    }
    // 0x8022A4FC: nop

    // 0x8022A500: jal         0x800A3450
    // 0x8022A504: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A504: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x8022A508: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022A50C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022A510: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A514: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A518: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022A51C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A520: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A524: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022A528:
    // 0x8022A528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A52C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A530: jr          $ra
    // 0x8022A534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C920_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C92C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C930: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C938: jal         0x8009A3B4
    // 0x8022C93C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C93C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C940: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C944: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C948: jal         0x8009A3B4
    // 0x8022C94C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C94C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C950: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C954: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C958: jal         0x8009A3B4
    // 0x8022C95C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C95C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C960: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C964: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C968: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C96C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C970: lw          $v0, 0x41B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X41B0);
    // 0x8022C974: jalr        $v0
    // 0x8022C978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C97C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C980: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C984: beq         $v0, $zero, L_8022C99C
    if (ctx->r2 == 0) {
        // 0x8022C988: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C99C;
    }
    // 0x8022C988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C98C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022C990: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C994: jal         0x8003B564
    // 0x8022C998: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022C998: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022C99C:
    // 0x8022C99C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C9A0: beq         $v0, $zero, L_8022C9B8
    if (ctx->r2 == 0) {
        // 0x8022C9A4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022C9B8;
    }
    // 0x8022C9A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C9A8: jal         0x8005044C
    // 0x8022C9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022C9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C9B0: j           L_8022C9BC
    // 0x8022C9B4: nop

        goto L_8022C9BC;
    // 0x8022C9B4: nop

L_8022C9B8:
    // 0x8022C9B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022C9BC:
    // 0x8022C9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C9C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9C4: jr          $ra
    // 0x8022C9C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C9C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C7FC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7FC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022C800: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022C804: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022C808: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022C80C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C810: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022C814: bltzl       $v0, L_8022C81C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C818: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022C81C;
    }
    goto skip_0;
    // 0x8022C818: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022C81C:
    // 0x8022C81C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C820: bnel        $v0, $zero, L_8022C844
    if (ctx->r2 != 0) {
        // 0x8022C824: sh          $a3, 0x328($a0)
        MEM_H(0X328, ctx->r4) = ctx->r7;
            goto L_8022C844;
    }
    goto skip_1;
    // 0x8022C824: sh          $a3, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r7;
    skip_1:
    // 0x8022C828: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022C82C: beq         $v0, $zero, L_8022C83C
    if (ctx->r2 == 0) {
        // 0x8022C830: addiu       $v0, $a2, -0x20
        ctx->r2 = ADD32(ctx->r6, -0X20);
            goto L_8022C83C;
    }
    // 0x8022C830: addiu       $v0, $a2, -0x20
    ctx->r2 = ADD32(ctx->r6, -0X20);
    // 0x8022C834: j           L_8022C844
    // 0x8022C838: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
        goto L_8022C844;
    // 0x8022C838: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022C83C:
    // 0x8022C83C: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8022C840: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022C844:
    // 0x8022C844: jr          $ra
    // 0x8022C848: nop

    TRACE_RETURN()
    return;
    // 0x8022C848: nop

;}
RECOMP_FUNC void func_80227960_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227964: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022796C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227970: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227974: addiu       $s1, $s1, 0x4014
    ctx->r17 = ADD32(ctx->r17, 0X4014);
    // 0x80227978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022797C: jal         0x800A3450
    // 0x80227980: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227980: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80227984: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227988: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022798C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227990: lbu         $v1, 0x4004($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4004);
    // 0x80227994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227998: beq         $v1, $v0, L_80227A38
    if (ctx->r3 == ctx->r2) {
        // 0x8022799C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227A38;
    }
    // 0x8022799C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802279A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802279A4: beql        $v0, $zero, L_802279BC
    if (ctx->r2 == 0) {
        // 0x802279A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802279BC;
    }
    goto skip_0;
    // 0x802279A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802279AC: beq         $v1, $zero, L_802279CC
    if (ctx->r3 == 0) {
        // 0x802279B0: nop
    
            goto L_802279CC;
    }
    // 0x802279B0: nop

    // 0x802279B4: j           L_80227A84
    // 0x802279B8: nop

        goto L_80227A84;
    // 0x802279B8: nop

L_802279BC:
    // 0x802279BC: beq         $v1, $v0, L_80227A58
    if (ctx->r3 == ctx->r2) {
        // 0x802279C0: nop
    
            goto L_80227A58;
    }
    // 0x802279C0: nop

    // 0x802279C4: j           L_80227A84
    // 0x802279C8: nop

        goto L_80227A84;
    // 0x802279C8: nop

L_802279CC:
    // 0x802279CC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802279D0: bne         $v0, $zero, L_802279E4
    if (ctx->r2 != 0) {
        // 0x802279D4: nop
    
            goto L_802279E4;
    }
    // 0x802279D4: nop

    // 0x802279D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279DC: j           L_802279EC
    // 0x802279E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802279EC;
    // 0x802279E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802279E4:
    // 0x802279E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279E8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_802279EC:
    // 0x802279EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802279F0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802279F4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802279F8: beq         $v0, $zero, L_80227A14
    if (ctx->r2 == 0) {
        // 0x802279FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A14;
    }
    // 0x802279FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A00: jal         0x802293C8
    // 0x80227A04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802293C8_ovl18(rdram, ctx);
        goto after_1;
    // 0x80227A04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80227A08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227A0C: j           L_80227A28
    // 0x80227A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227A28;
    // 0x80227A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227A14:
    // 0x80227A14: jal         0x802293C8
    // 0x80227A18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293C8_ovl18(rdram, ctx);
        goto after_2;
    // 0x80227A18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80227A1C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A20: jal         0x80229388
    // 0x80227A24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80229388_ovl18(rdram, ctx);
        goto after_3;
    // 0x80227A24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80227A28:
    // 0x80227A28: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227A2C: addiu       $s1, $s1, 0x4014
    ctx->r17 = ADD32(ctx->r17, 0X4014);
    // 0x80227A30: j           L_80227A84
    // 0x80227A34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227A84;
    // 0x80227A34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227A38:
    // 0x80227A38: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A3C: jal         0x80229378
    // 0x80227A40: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80229378_ovl18(rdram, ctx);
        goto after_4;
    // 0x80227A40: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80227A44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A4C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80227A50: j           L_80227A84
    // 0x80227A54: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80227A84;
    // 0x80227A54: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227A58:
    // 0x80227A58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A5C: jal         0x80229388
    // 0x80227A60: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80229388_ovl18(rdram, ctx);
        goto after_5;
    // 0x80227A60: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80227A64: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A70: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227A74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227A78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80227A7C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80227A80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227A84:
    // 0x80227A84: jal         0x800A3450
    // 0x80227A88: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227A88: nop

    after_6:
    // 0x80227A8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227A90: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227A94: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227A98: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80227A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227AA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227AA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AAC: jr          $ra
    // 0x80227AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D7C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D8C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80227D90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227D94: jal         0x8004FA7C
    // 0x80227D98: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227D98: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x80227D9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227DA0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80227DA4: bne         $v0, $zero, L_80227DF0
    if (ctx->r2 != 0) {
        // 0x80227DA8: nop
    
            goto L_80227DF0;
    }
    // 0x80227DA8: nop

    // 0x80227DAC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80227DB0: beq         $v0, $zero, L_80227DC4
    if (ctx->r2 == 0) {
        // 0x80227DB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227DC4;
    }
    // 0x80227DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DB8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80227DBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227DC0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80227DC4:
    // 0x80227DC4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80227DC8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80227DCC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80227DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DDC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80227DE0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80227DE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227DE8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x80227DEC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80227DF0:
    // 0x80227DF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227DF4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227DF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227DFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E08: jr          $ra
    // 0x80227E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C8DC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C8DC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022C8E0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C8E4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022C8E8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C8EC: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022C8F0: bltzl       $v0, L_8022C8F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C8F4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022C8F8;
    }
    goto skip_0;
    // 0x8022C8F4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022C8F8:
    // 0x8022C8F8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C8FC: bne         $v0, $zero, L_8022C914
    if (ctx->r2 != 0) {
        // 0x8022C900: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022C914;
    }
    // 0x8022C900: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C904: bne         $v0, $zero, L_8022C910
    if (ctx->r2 != 0) {
        // 0x8022C908: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_8022C910;
    }
    // 0x8022C908: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x8022C90C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_8022C910:
    // 0x8022C910: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022C914:
    // 0x8022C914: jr          $ra
    // 0x8022C918: nop

    TRACE_RETURN()
    return;
    // 0x8022C918: nop

    // 0x8022C91C: nop

;}
RECOMP_FUNC void func_80228EA8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228EB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228EB8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228EBC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228EC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228EC4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228EC8: jal         0x8004F820
    // 0x80228ECC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228ECC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228ED0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228ED4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228ED8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228EDC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228EE0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228EE4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228EE8: bne         $v0, $zero, L_80228F20
    if (ctx->r2 != 0) {
        // 0x80228EEC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228F20;
    }
    // 0x80228EEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228EF0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228EF4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228EF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228EFC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228F00: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80228F04: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228F08: jal         0x80229378
    // 0x80228F0C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80228F0C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80228F10: jal         0x80034E3C
    // 0x80228F14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80228F14: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228F18: j           L_80228F3C
    // 0x80228F1C: nop

        goto L_80228F3C;
    // 0x80228F1C: nop

L_80228F20:
    // 0x80228F20: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228F24: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80228F28: bne         $v1, $v0, L_80228F3C
    if (ctx->r3 != ctx->r2) {
        // 0x80228F2C: nop
    
            goto L_80228F3C;
    }
    // 0x80228F2C: nop

    // 0x80228F30: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F38: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80228F3C:
    // 0x80228F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228F40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F44: jr          $ra
    // 0x80228F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262F8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802262FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226300: jal         0x8004F418
    // 0x80226304: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80226304: nop

    after_0:
    // 0x80226308: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022630C: jr          $ra
    // 0x80226310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E30_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226E34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226E40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226E44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226E48: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80226E4C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226E50: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226E54: beq         $v1, $zero, L_80226E64
    if (ctx->r3 == 0) {
        // 0x80226E58: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80226E64;
    }
    // 0x80226E58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226E5C: j           L_80226E6C
    // 0x80226E60: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_80226E6C;
    // 0x80226E60: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80226E64:
    // 0x80226E64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80226E6C:
    // 0x80226E6C: jal         0x8004D5D4
    // 0x80226E70: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226E70: nop

    after_0:
    // 0x80226E74: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226E78: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80226E7C: bne         $a0, $v0, L_80226E8C
    if (ctx->r4 != ctx->r2) {
        // 0x80226E80: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_80226E8C;
    }
    // 0x80226E80: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80226E84: j           L_80226F00
    // 0x80226E88: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80226F00;
    // 0x80226E88: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_80226E8C:
    // 0x80226E8C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226E90: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80226E94: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226E98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226E9C: bne         $v1, $zero, L_80226F00
    if (ctx->r3 != 0) {
        // 0x80226EA0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226F00;
    }
    // 0x80226EA0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226EA4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80226EA8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226EAC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80226EB0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226EB4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226EB8: bne         $v1, $zero, L_80226F00
    if (ctx->r3 != 0) {
        // 0x80226EBC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226F00;
    }
    // 0x80226EBC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226EC0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80226EC4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226EC8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x80226ECC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226ED0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226ED4: bne         $v1, $zero, L_80226F00
    if (ctx->r3 != 0) {
        // 0x80226ED8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226F00;
    }
    // 0x80226ED8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226EDC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80226EE0: bnel        $a0, $v0, L_80226F00
    if (ctx->r4 != ctx->r2) {
        // 0x80226EE4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80226F00;
    }
    goto skip_0;
    // 0x80226EE4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80226EE8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80226EEC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226EF0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226EF4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226EF8: j           L_80226F08
    // 0x80226EFC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80226F08;
    // 0x80226EFC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80226F00:
    // 0x80226F00: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226F04: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80226F08:
    // 0x80226F08: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226F0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226F10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226F14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226F18: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226F1C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80226F20: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226F24: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80226F28: bne         $v0, $zero, L_80226F34
    if (ctx->r2 != 0) {
        // 0x80226F2C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80226F34;
    }
    // 0x80226F2C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80226F30: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80226F34:
    // 0x80226F34: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80226F38: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80226F3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226F40: jal         0x8009A3B4
    // 0x80226F44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226F44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226F48: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F54: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80226F58: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80226F5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226F60: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226F64: addiu       $v0, $v0, 0x3EC0
    ctx->r2 = ADD32(ctx->r2, 0X3EC0);
    // 0x80226F68: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80226F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F70: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226F74: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226F78: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80226F7C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226F80: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80226F84: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80226F88: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80226F8C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226F90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226F94: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226F98: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226F9C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226FA0: jal         0x80050294
    // 0x80226FA4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226FA4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80226FA8: jal         0x80226FC4
    // 0x80226FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226FC4_ovl18(rdram, ctx);
        goto after_3;
    // 0x80226FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226FB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226FB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226FB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FBC: jr          $ra
    // 0x80226FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DC60_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DC68: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022DC6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DC70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DC74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DC78: lw          $v0, 0x4364($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4364);
    // 0x8022DC7C: jalr        $v0
    // 0x8022DC80: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DC80: nop

    after_0:
    // 0x8022DC84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC88: jr          $ra
    // 0x8022DC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230CE4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230CE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230CEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230CF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230CF4: jal         0x8004F2C4
    // 0x80230CF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80230CF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230CFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230D00: beq         $s0, $zero, L_80230D84
    if (ctx->r16 == 0) {
        // 0x80230D04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230D84;
    }
    // 0x80230D04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230D08: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80230D0C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230D10: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80230D14: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80230D18: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80230D1C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80230D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230D24: jal         0x8009A3B4
    // 0x80230D28: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230D28: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230D2C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D34: addiu       $a1, $a0, 0x3
    ctx->r5 = ADD32(ctx->r4, 0X3);
    // 0x80230D38: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80230D3C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80230D40: sw          $s1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r17;
    // 0x80230D44: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80230D48: jal         0x8004D5D4
    // 0x80230D4C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80230D4C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    after_2:
    // 0x80230D50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230D54: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80230D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230D5C: jal         0x8004D5D4
    // 0x80230D60: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80230D60: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x80230D64: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230D68: jal         0x8002C654
    // 0x80230D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x80230D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230D70: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230D74: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230D78: jal         0x800319B4
    // 0x80230D7C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80230D7C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_5:
    // 0x80230D80: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80230D84:
    // 0x80230D84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230D88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230D90: jr          $ra
    // 0x80230D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231E70_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231E74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231E80: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231E84: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80231E88: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80231E8C: blez        $a0, L_80231F84
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80231E90: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_80231F84;
    }
    // 0x80231E90: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80231E94: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80231E98: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231E9C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80231EA0: mfhi        $a1
    ctx->r5 = hi;
    // 0x80231EA4: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80231EA8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231EAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231EB0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231EB4: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80231EB8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80231EBC: bne         $v0, $zero, L_80231EDC
    if (ctx->r2 != 0) {
        // 0x80231EC0: nop
    
            goto L_80231EDC;
    }
    // 0x80231EC0: nop

    // 0x80231EC4: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80231EC8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80231ECC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80231ED0: beq         $v0, $zero, L_80231EDC
    if (ctx->r2 == 0) {
        // 0x80231ED4: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80231EDC;
    }
    // 0x80231ED4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80231ED8: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_80231EDC:
    // 0x80231EDC: jal         0x800A3450
    // 0x80231EE0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231EE0: nop

    after_0:
    // 0x80231EE4: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231EE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231EEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231EF0: jal         0x800A3450
    // 0x80231EF4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231EF4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231EF8: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80231EFC: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80231F00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231F04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231F08: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80231F0C: bne         $a0, $zero, L_80231F2C
    if (ctx->r4 != 0) {
        // 0x80231F10: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80231F2C;
    }
    // 0x80231F10: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80231F14: jal         0x800A3450
    // 0x80231F18: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231F18: nop

    after_2:
    // 0x80231F1C: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231F20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231F24: j           L_80231F40
    // 0x80231F28: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80231F40;
    // 0x80231F28: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80231F2C:
    // 0x80231F2C: jal         0x800A3450
    // 0x80231F30: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231F30: nop

    after_3:
    // 0x80231F34: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231F38: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231F3C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80231F40:
    // 0x80231F40: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231F44: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80231F48: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231F4C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231F50: bne         $v0, $zero, L_80231F64
    if (ctx->r2 != 0) {
        // 0x80231F54: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80231F64;
    }
    // 0x80231F54: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80231F58: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80231F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231F60: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231F64:
    // 0x80231F64: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80231F68: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80231F6C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80231F70: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80231F74: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80231F78: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231F7C: j           L_80231F8C
    // 0x80231F80: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80231F8C;
    // 0x80231F80: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80231F84:
    // 0x80231F84: jal         0x8004F5C4
    // 0x80231F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80231F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80231F8C:
    // 0x80231F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231F94: jr          $ra
    // 0x80231F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232650_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232650: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80232654: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80232658: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023265C: beq         $v1, $a0, L_802326E4
    if (ctx->r3 == ctx->r4) {
        // 0x80232660: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802326E4;
    }
    // 0x80232660: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80232664: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232668: beq         $v0, $zero, L_8023271C
    if (ctx->r2 == 0) {
        // 0x8023266C: nop
    
            goto L_8023271C;
    }
    // 0x8023266C: nop

    // 0x80232670: bne         $v1, $zero, L_8023271C
    if (ctx->r3 != 0) {
        // 0x80232674: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023271C;
    }
    // 0x80232674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232678: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8023267C: beq         $v1, $a0, L_802326C0
    if (ctx->r3 == ctx->r4) {
        // 0x80232680: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_802326C0;
    }
    // 0x80232680: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80232684: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232688: beql        $v0, $zero, L_802326A0
    if (ctx->r2 == 0) {
        // 0x8023268C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802326A0;
    }
    goto skip_0;
    // 0x8023268C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232690: beq         $v1, $zero, L_802326B0
    if (ctx->r3 == 0) {
        // 0x80232694: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802326B0;
    }
    // 0x80232694: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80232698: j           L_802326E4
    // 0x8023269C: nop

        goto L_802326E4;
    // 0x8023269C: nop

L_802326A0:
    // 0x802326A0: beq         $v1, $v0, L_802326D4
    if (ctx->r3 == ctx->r2) {
        // 0x802326A4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802326D4;
    }
    // 0x802326A4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802326A8: j           L_802326E4
    // 0x802326AC: nop

        goto L_802326E4;
    // 0x802326AC: nop

L_802326B0:
    // 0x802326B0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802326B4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802326B8: j           L_802326E0
    // 0x802326BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802326E0;
    // 0x802326BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802326C0:
    // 0x802326C0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802326C4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x802326C8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802326CC: j           L_802326E0
    // 0x802326D0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_802326E0;
    // 0x802326D0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_802326D4:
    // 0x802326D4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802326D8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802326DC: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_802326E0:
    // 0x802326E0: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_802326E4:
    // 0x802326E4: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x802326E8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802326EC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x802326F0: bne         $v0, $zero, L_80232708
    if (ctx->r2 != 0) {
        // 0x802326F4: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80232708;
    }
    // 0x802326F4: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x802326F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802326FC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80232700: j           L_8023271C
    // 0x80232704: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8023271C;
    // 0x80232704: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_80232708:
    // 0x80232708: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8023270C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80232710: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80232714: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232718: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8023271C:
    // 0x8023271C: jr          $ra
    // 0x80232720: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80232720: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802320B4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802320B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802320BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802320C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802320C4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802320C8: blez        $v0, L_80232144
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802320CC: nop
    
            goto L_80232144;
    }
    // 0x802320CC: nop

    // 0x802320D0: jal         0x800A3450
    // 0x802320D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802320D4: nop

    after_0:
    // 0x802320D8: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802320DC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802320E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802320E4: jal         0x800A3450
    // 0x802320E8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802320E8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x802320EC: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x802320F0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802320F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802320F8: jal         0x800A3450
    // 0x802320FC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802320FC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80232100: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x80232104: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80232108: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8023210C: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x80232110: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80232114: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80232118: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023211C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80232120: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x80232124: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232128: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8023212C: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80232130: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80232134: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x80232138: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x8023213C: j           L_8023214C
    // 0x80232140: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_8023214C;
    // 0x80232140: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_80232144:
    // 0x80232144: jal         0x8004F5C4
    // 0x80232148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80232148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023214C:
    // 0x8023214C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232154: jr          $ra
    // 0x80232158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227130_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227134: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227138: jal         0x8004F418
    // 0x8022713C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022713C: nop

    after_0:
    // 0x80227140: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227144: jr          $ra
    // 0x80227148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DFB4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFB4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022DFB8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022DFBC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022DFC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022DFC4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022DFC8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022DFCC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022DFD0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022DFD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DFD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DFDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DFE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DFE4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022DFE8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022DFEC: jal         0x80071110
    // 0x8022DFF0: lbu         $a1, 0x4232($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4232);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8022DFF0: lbu         $a1, 0x4232($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4232);
    after_0:
    // 0x8022DFF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DFF8: beq         $v1, $zero, L_8022E068
    if (ctx->r3 == 0) {
        // 0x8022DFFC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022E068;
    }
    // 0x8022DFFC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E000: bne         $v1, $v0, L_8022E2D0
    if (ctx->r3 != ctx->r2) {
        // 0x8022E004: nop
    
            goto L_8022E2D0;
    }
    // 0x8022E004: nop

    // 0x8022E008: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E00C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E010: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E014: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E018: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E01C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022E020: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x8022E024: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E028: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E02C: lw          $v1, 0x4234($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4234);
    // 0x8022E030: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E034: beql        $v0, $zero, L_8022E06C
    if (ctx->r2 == 0) {
        // 0x8022E038: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_8022E06C;
    }
    goto skip_0;
    // 0x8022E038: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    skip_0:
    // 0x8022E03C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E040: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E044: lbu         $v0, 0x422C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X422C);
    // 0x8022E048: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E04C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E050: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E054: lw          $v0, 0x4354($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4354);
    // 0x8022E058: jalr        $v0
    // 0x8022E05C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022E05C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8022E060: jal         0x8004F4F8
    // 0x8022E064: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022E064: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_8022E068:
    // 0x8022E068: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8022E06C:
    // 0x8022E06C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022E070: jal         0x8009A3B4
    // 0x8022E074: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022E074: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022E078: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022E07C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022E080: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E084: jal         0x8009A3B4
    // 0x8022E088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022E088: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022E08C: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x8022E090: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x8022E094: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E098: jal         0x8009A3B4
    // 0x8022E09C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022E09C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022E0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0A4: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x8022E0A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E0AC: jal         0x8009A3B4
    // 0x8022E0B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022E0B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022E0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0B8: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x8022E0BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E0C0: jal         0x8009A3B4
    // 0x8022E0C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022E0C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022E0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E0CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E0D0: jal         0x8009A3B4
    // 0x8022E0D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022E0D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022E0D8: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x8022E0DC: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8022E0E0: beq         $v1, $zero, L_8022E2D0
    if (ctx->r3 == 0) {
        // 0x8022E0E4: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_8022E2D0;
    }
    // 0x8022E0E4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8022E0E8: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022E0EC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x8022E0F0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022E0F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E0F8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8022E0FC: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022E100: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x8022E104: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022E108: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8022E10C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022E110: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022E114: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8022E118: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x8022E11C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022E120: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x8022E124: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8022E128: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022E12C: bne         $v1, $zero, L_8022E150
    if (ctx->r3 != 0) {
        // 0x8022E130: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8022E150;
    }
    // 0x8022E130: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8022E134: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8022E138: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E13C: bne         $v0, $zero, L_8022E150
    if (ctx->r2 != 0) {
        // 0x8022E140: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8022E150;
    }
    // 0x8022E140: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x8022E144: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E148: beq         $v0, $zero, L_8022E178
    if (ctx->r2 == 0) {
        // 0x8022E14C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022E178;
    }
    // 0x8022E14C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022E150:
    // 0x8022E150: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8022E154: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E158: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8022E15C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022E160: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8022E164: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8022E168: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022E16C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8022E170: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8022E174: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022E178:
    // 0x8022E178: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022E17C: jal         0x80032308
    // 0x8022E180: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x8022E180: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022E184: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E188: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022E18C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E190: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E194: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E198: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E19C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E1A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E1A4: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022E1A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022E1AC: lw          $a3, 0x4218($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4218);
    // 0x8022E1B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E1B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E1B8: lw          $v0, 0x421C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X421C);
    // 0x8022E1BC: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x8022E1C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022E1C4: jal         0x80051B48
    // 0x8022E1C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_10;
    // 0x8022E1C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022E1CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E1D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022E1D4: jal         0x8009A3B4
    // 0x8022E1D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022E1D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022E1DC: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8022E1E0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8022E1E4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E1E8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E1EC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E1F0: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022E1F4: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8022E1F8: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E1FC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E200: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E204: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022E208: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8022E20C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E210: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E214: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E218: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8022E21C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022E220: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8022E224: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E228: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E22C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E230: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E234: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E238: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E23C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E240: lh          $v1, 0x4214($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4214);
    // 0x8022E244: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022E248: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E24C: lhu         $a1, 0x4216($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X4216);
    // 0x8022E250: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022E254: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E258: bnel        $v0, $zero, L_8022E264
    if (ctx->r2 != 0) {
        // 0x8022E25C: sh          $a0, 0x6E($s2)
        MEM_H(0X6E, ctx->r18) = ctx->r4;
            goto L_8022E264;
    }
    goto skip_1;
    // 0x8022E25C: sh          $a0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r4;
    skip_1:
    // 0x8022E260: sh          $a1, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r5;
L_8022E264:
    // 0x8022E264: jal         0x8022E500
    // 0x8022E268: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022E500_ovl18(rdram, ctx);
        goto after_12;
    // 0x8022E268: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x8022E26C: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x8022E270: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8022E274: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x8022E278: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x8022E27C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E280: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E284: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x8022E288: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8022E28C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8022E290: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022E294: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8022E298: sw          $a1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r5;
    // 0x8022E29C: lhu         $a0, 0x24($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X24);
    // 0x8022E2A0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E2A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E2A8: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022E2AC: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022E2B0: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8022E2B4: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
    // 0x8022E2B8: sh          $a0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r4;
    // 0x8022E2BC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022E2C0: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x8022E2C4: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8022E2C8: j           L_8022E31C
    // 0x8022E2CC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
        goto L_8022E31C;
    // 0x8022E2CC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
L_8022E2D0:
    // 0x8022E2D0: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E2D4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E2D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E2DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E2E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E2E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E2E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E2EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E2F0: lbu         $v0, 0x422C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X422C);
    // 0x8022E2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E2F8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E2FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E300: lw          $v0, 0x4354($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4354);
    // 0x8022E304: jalr        $v0
    // 0x8022E308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x8022E308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x8022E30C: jal         0x8004F4F8
    // 0x8022E310: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_14;
    // 0x8022E310: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x8022E314: j           L_8022E368
    // 0x8022E318: nop

        goto L_8022E368;
    // 0x8022E318: nop

L_8022E31C:
    // 0x8022E31C: jal         0x8022E45C
    // 0x8022E320: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022E45C_ovl18(rdram, ctx);
        goto after_15;
    // 0x8022E320: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x8022E324: jal         0x8022E60C
    // 0x8022E328: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022E60C_ovl18(rdram, ctx);
        goto after_16;
    // 0x8022E328: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x8022E32C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022E330: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022E334: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E338: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E33C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E340: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E344: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E348: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E34C: lbu         $v0, 0x422C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X422C);
    // 0x8022E350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E354: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E358: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E35C: lw          $v0, 0x434C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X434C);
    // 0x8022E360: jalr        $v0
    // 0x8022E364: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x8022E364: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_8022E368:
    // 0x8022E368: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022E36C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022E370: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E374: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022E378: jr          $ra
    // 0x8022E37C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022E37C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022574C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022574C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022575C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225760: bne         $v0, $zero, L_8022577C
    if (ctx->r2 != 0) {
        // 0x80225764: nop
    
            goto L_8022577C;
    }
    // 0x80225764: nop

    // 0x80225768: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022576C: jal         0x800607C4
    // 0x80225770: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225770: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    after_0:
    // 0x80225774: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225778: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022577C:
    // 0x8022577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225780: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225784: jr          $ra
    // 0x80225788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
