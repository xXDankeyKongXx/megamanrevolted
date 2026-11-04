#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022EE6C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE6C: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x8022EE70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022EE74: beq         $v0, $zero, L_8022EE88
    if (ctx->r2 == 0) {
        // 0x8022EE78: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EE88;
    }
    // 0x8022EE78: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EE7C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EE80: j           L_8022EE94
    // 0x8022EE84: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_8022EE94;
    // 0x8022EE84: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022EE88:
    // 0x8022EE88: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022EE8C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022EE90: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_8022EE94:
    // 0x8022EE94: jr          $ra
    // 0x8022EE98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022EE98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80229254_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229254: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229258: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022925C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229260: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80229264: jal         0x8006033C
    // 0x80229268: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229268: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x8022926C: beq         $v0, $zero, L_802292AC
    if (ctx->r2 == 0) {
        // 0x80229270: nop
    
            goto L_802292AC;
    }
    // 0x80229270: nop

    // 0x80229274: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229278: jal         0x8003E6BC
    // 0x8022927C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022927C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x80229280: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80229284: bne         $v1, $v0, L_802292AC
    if (ctx->r3 != ctx->r2) {
        // 0x80229288: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_802292AC;
    }
    // 0x80229288: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8022928C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229290: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229294: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229298: jal         0x8006036C
    // 0x8022929C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022929C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x802292A0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x802292A4: jal         0x8002A33C
    // 0x802292A8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802292A8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
L_802292AC:
    // 0x802292AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802292B0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802292B4: jr          $ra
    // 0x802292B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802292B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022F124_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F128: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022F12C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F130: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022F134: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F138: bne         $v1, $v0, L_8022F1AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022F13C: addiu       $a1, $a0, 0xC4
        ctx->r5 = ADD32(ctx->r4, 0XC4);
            goto L_8022F1AC;
    }
    // 0x8022F13C: addiu       $a1, $a0, 0xC4
    ctx->r5 = ADD32(ctx->r4, 0XC4);
    // 0x8022F140: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F144: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8022F148: sb          $v1, 0x386($a0)
    MEM_B(0X386, ctx->r4) = ctx->r3;
    // 0x8022F14C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022F150: beq         $v0, $v1, L_8022F164
    if (ctx->r2 == ctx->r3) {
        // 0x8022F154: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022F164;
    }
    // 0x8022F154: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F158: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022F15C: j           L_8022F170
    // 0x8022F160: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022F170;
    // 0x8022F160: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022F164:
    // 0x8022F164: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F168: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022F16C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_8022F170:
    // 0x8022F170: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x8022F174: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F178: beq         $v0, $zero, L_8022F194
    if (ctx->r2 == 0) {
        // 0x8022F17C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022F194;
    }
    // 0x8022F17C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F180: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x8022F184: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x8022F188: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022F18C: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8022F190: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022F194:
    // 0x8022F194: sh          $v0, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r2;
    // 0x8022F198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F19C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F1A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F1A4: jal         0x80050294
    // 0x8022F1A8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F1A8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_0:
L_8022F1AC:
    // 0x8022F1AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1B0: jr          $ra
    // 0x8022F1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234950_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234954: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234958: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023495C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234960: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234964: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234968: lw          $v0, -0x60F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X60F0);
    // 0x8023496C: jalr        $v0
    // 0x80234970: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234970: nop

    after_0:
    // 0x80234974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234978: jr          $ra
    // 0x8023497C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023497C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802310C0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310C0: jr          $ra
    // 0x802310C4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802310C4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
;}
RECOMP_FUNC void func_802348C0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802348C4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802348C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802348CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802348D0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802348D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802348D8: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802348DC: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x802348E0: bne         $v0, $zero, L_802348EC
    if (ctx->r2 != 0) {
        // 0x802348E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802348EC;
    }
    // 0x802348E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802348E8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_802348EC:
    // 0x802348EC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802348F0: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802348F4: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x802348F8: jal         0x8009A3B4
    // 0x802348FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802348FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80234900: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234904: jr          $ra
    // 0x80234908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E78_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231E7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231E80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231E88: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80231E8C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231E90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231E94: jal         0x8004F144
    // 0x80231E98: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231E98: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80231E9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231EA0: beq         $v1, $zero, L_80231EE8
    if (ctx->r3 == 0) {
        // 0x80231EA4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231EE8;
    }
    // 0x80231EA4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231EA8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80231EAC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80231EB0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80231EB4: andi        $v0, $s1, 0x2
    ctx->r2 = ctx->r17 & 0X2;
    // 0x80231EB8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80231EBC: beq         $v0, $zero, L_80231ECC
    if (ctx->r2 == 0) {
        // 0x80231EC0: sb          $s2, 0xC($v1)
        MEM_B(0XC, ctx->r3) = ctx->r18;
            goto L_80231ECC;
    }
    // 0x80231EC0: sb          $s2, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r18;
    // 0x80231EC4: j           L_80231ED4
    // 0x80231EC8: sh          $zero, 0x38($v1)
    MEM_H(0X38, ctx->r3) = 0;
        goto L_80231ED4;
    // 0x80231EC8: sh          $zero, 0x38($v1)
    MEM_H(0X38, ctx->r3) = 0;
L_80231ECC:
    // 0x80231ECC: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80231ED0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
L_80231ED4:
    // 0x80231ED4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231ED8: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80231EDC: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80231EE0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231EE4: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80231EE8:
    // 0x80231EE8: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
    // 0x80231EEC: bne         $v0, $zero, L_80231EF8
    if (ctx->r2 != 0) {
        // 0x80231EF0: addiu       $a0, $zero, 0x195
        ctx->r4 = ADD32(0, 0X195);
            goto L_80231EF8;
    }
    // 0x80231EF0: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    // 0x80231EF4: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
L_80231EF8:
    // 0x80231EF8: jal         0x8002A33C
    // 0x80231EFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80231EFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231F00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231F04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231F08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231F10: jr          $ra
    // 0x80231F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230AEC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230AF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230AF8: jal         0x80230B54
    // 0x80230AFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80230B54_ovl22(rdram, ctx);
        goto after_0;
    // 0x80230AFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80230B00: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80230B04: bne         $v0, $zero, L_80230B3C
    if (ctx->r2 != 0) {
        // 0x80230B08: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80230B3C;
    }
    // 0x80230B08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80230B0C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230B10: bne         $v1, $v0, L_80230B2C
    if (ctx->r3 != ctx->r2) {
        // 0x80230B14: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80230B2C;
    }
    // 0x80230B14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230B18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230B1C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80230B20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230B24: j           L_80230B44
    // 0x80230B28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80230B44;
    // 0x80230B28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230B2C:
    // 0x80230B2C: jal         0x80230C08
    // 0x80230B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230C08_ovl22(rdram, ctx);
        goto after_1;
    // 0x80230B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230B34: j           L_80230B44
    // 0x80230B38: nop

        goto L_80230B44;
    // 0x80230B38: nop

L_80230B3C:
    // 0x80230B3C: jal         0x80230B74
    // 0x80230B40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230B74_ovl22(rdram, ctx);
        goto after_2;
    // 0x80230B40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80230B44:
    // 0x80230B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B4C: jr          $ra
    // 0x80230B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802333AC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802333B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802333B4: jal         0x80233AB0
    // 0x802333B8: nop

    func_80233AB0_ovl22(rdram, ctx);
        goto after_0;
    // 0x802333B8: nop

    after_0:
    // 0x802333BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802333C0: jr          $ra
    // 0x802333C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802333C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225EC0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EC0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225EC4: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225EC8: addiu       $v0, $zero, 0x14F
    ctx->r2 = ADD32(0, 0X14F);
    // 0x80225ECC: beq         $v1, $v0, L_80225F10
    if (ctx->r3 == ctx->r2) {
        // 0x80225ED0: slti        $v0, $v1, 0x150
        ctx->r2 = SIGNED(ctx->r3) < 0X150 ? 1 : 0;
            goto L_80225F10;
    }
    // 0x80225ED0: slti        $v0, $v1, 0x150
    ctx->r2 = SIGNED(ctx->r3) < 0X150 ? 1 : 0;
    // 0x80225ED4: beq         $v0, $zero, L_80225EEC
    if (ctx->r2 == 0) {
        // 0x80225ED8: addiu       $v0, $zero, 0xEB
        ctx->r2 = ADD32(0, 0XEB);
            goto L_80225EEC;
    }
    // 0x80225ED8: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x80225EDC: beq         $v1, $v0, L_80225F00
    if (ctx->r3 == ctx->r2) {
        // 0x80225EE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225F00;
    }
    // 0x80225EE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EE4: j           L_80225F34
    // 0x80225EE8: nop

        goto L_80225F34;
    // 0x80225EE8: nop

L_80225EEC:
    // 0x80225EEC: addiu       $v0, $zero, 0x163
    ctx->r2 = ADD32(0, 0X163);
    // 0x80225EF0: beq         $v1, $v0, L_80225F2C
    if (ctx->r3 == ctx->r2) {
        // 0x80225EF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225F2C;
    }
    // 0x80225EF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225EF8: j           L_80225F34
    // 0x80225EFC: nop

        goto L_80225F34;
    // 0x80225EFC: nop

L_80225F00:
    // 0x80225F00: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225F04: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80225F08: j           L_80225F34
    // 0x80225F0C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_80225F34;
    // 0x80225F0C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_80225F10:
    // 0x80225F10: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80225F14: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x80225F18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225F20: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80225F24: j           L_80225F34
    // 0x80225F28: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
        goto L_80225F34;
    // 0x80225F28: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
L_80225F2C:
    // 0x80225F2C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225F30: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80225F34:
    // 0x80225F34: jr          $ra
    // 0x80225F38: nop

    TRACE_RETURN()
    return;
    // 0x80225F38: nop

;}
RECOMP_FUNC void func_8022ABB4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022ABB8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022ABBC: lbu         $s3, 0x3B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X3B);
    // 0x8022ABC0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022ABC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ABC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ABCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8022ABD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8022ABD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8022ABDC: jal         0x800A3450
    // 0x8022ABE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022ABE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022ABE4: andi        $s1, $v0, 0x7
    ctx->r17 = ctx->r2 & 0X7;
    // 0x8022ABE8: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x8022ABEC: andi        $s3, $s3, 0xFF
    ctx->r19 = ctx->r19 & 0XFF;
    // 0x8022ABF0: mult        $s1, $s3
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022ABF4: mflo        $s1
    ctx->r17 = lo;
    // 0x8022ABF8: nop

    // 0x8022ABFC: nop

    // 0x8022AC00: jal         0x800A3450
    // 0x8022AC04: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022AC04: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    after_1:
    // 0x8022AC08: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x8022AC0C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x8022AC10: mult        $s0, $s3
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022AC14: mflo        $s0
    ctx->r16 = lo;
    // 0x8022AC18: nop

    // 0x8022AC1C: nop

    // 0x8022AC20: jal         0x800A3450
    // 0x8022AC24: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022AC24: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    after_2:
    // 0x8022AC28: andi        $s2, $v0, 0x7
    ctx->r18 = ctx->r2 & 0X7;
    // 0x8022AC2C: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x8022AC30: mult        $s2, $s3
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022AC34: mflo        $s2
    ctx->r18 = lo;
    // 0x8022AC38: nop

    // 0x8022AC3C: nop

    // 0x8022AC40: jal         0x8003B8FC
    // 0x8022AC44: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    func_8003B8FC_16CFC(rdram, ctx);
        goto after_3;
    // 0x8022AC44: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    after_3:
    // 0x8022AC48: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8022AC4C: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x8022AC50: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AC54: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022AC58: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8022AC5C: lui         $v1, 0x5200
    ctx->r3 = S32(0X5200 << 16);
    // 0x8022AC60: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8022AC64: or          $s0, $s0, $v1
    ctx->r16 = ctx->r16 | ctx->r3;
    // 0x8022AC68: or          $s1, $s1, $s0
    ctx->r17 = ctx->r17 | ctx->r16;
    // 0x8022AC6C: andi        $s2, $s2, 0xFF
    ctx->r18 = ctx->r18 & 0XFF;
    // 0x8022AC70: or          $s1, $s1, $s2
    ctx->r17 = ctx->r17 | ctx->r18;
    // 0x8022AC74: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8022AC78: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x8022AC7C: lhu         $a1, 0x28($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X28);
    // 0x8022AC80: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x8022AC84: ori         $a0, $a0, 0x101
    ctx->r4 = ctx->r4 | 0X101;
    // 0x8022AC88: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x8022AC8C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AC90: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022AC94: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022AC98: lh          $v1, 0x34($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X34);
    // 0x8022AC9C: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x8022ACA0: lui         $a0, 0xE100
    ctx->r4 = S32(0XE100 << 16);
    // 0x8022ACA4: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8022ACA8: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022ACAC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ACB0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022ACB4: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8022ACB8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022ACBC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ACC0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ACC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACCC: jr          $ra
    // 0x8022ACD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022ACD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022ACD4: nop

    // 0x8022ACD8: nop

    // 0x8022ACDC: nop

;}
RECOMP_FUNC void func_80228F30_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F30: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80228F34: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x80228F38: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228F3C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x80228F40: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x80228F44: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80228F48: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80228F4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228F50: bne         $v1, $v0, L_80228F70
    if (ctx->r3 != ctx->r2) {
        // 0x80228F54: nop
    
            goto L_80228F70;
    }
    // 0x80228F54: nop

    // 0x80228F58: jal         0x8022953C
    // 0x80228F5C: nop

    func_8022953C_ovl22(rdram, ctx);
        goto after_0;
    // 0x80228F5C: nop

    after_0:
    // 0x80228F60: jal         0x8004F684
    // 0x80228F64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80228F64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80228F68: j           L_80229220
    // 0x80228F6C: nop

        goto L_80229220;
    // 0x80228F6C: nop

L_80228F70:
    // 0x80228F70: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80228F74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228F78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228F7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228F80: lw          $v0, -0x66D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66D0);
    // 0x80228F84: jalr        $v0
    // 0x80228F88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80228F88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80228F8C: jal         0x8006033C
    // 0x80228F90: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80228F90: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x80228F94: bne         $v0, $zero, L_80229218
    if (ctx->r2 != 0) {
        // 0x80228F98: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80229218;
    }
    // 0x80228F98: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80228F9C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80228FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FA4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80228FA8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80228FAC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80228FB0: jal         0x8002C678
    // 0x80228FB4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x80228FB4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x80228FB8: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80228FBC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228FC0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80228FC4: jal         0x800319B4
    // 0x80228FC8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80228FC8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x80228FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FD0: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80228FD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228FD8: jal         0x800308E8
    // 0x80228FDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x80228FDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80228FE0: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x80228FE4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80228FE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FEC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80228FF0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80228FF4: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x80228FF8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80228FFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229000: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80229004: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80229008: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8022900C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80229010: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80229014: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80229018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022901C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229020: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80229024: jal         0x80031E5C
    // 0x80229028: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x80229028: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x8022902C: jal         0x80031E94
    // 0x80229030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x80229030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229034: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80229038: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022903C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229040: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229044: jal         0x8009A3B4
    // 0x80229048: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80229048: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022904C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80229050: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80229054: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229058: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022905C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80229060: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80229064: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80229068: jal         0x80031F0C
    // 0x8022906C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x8022906C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x80229070: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80229074: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80229078: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8022907C: jal         0x8009A3B4
    // 0x80229080: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80229080: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x80229084: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80229088: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022908C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80229090: jal         0x8009A3B4
    // 0x80229094: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80229094: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80229098: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022909C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802290A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802290A4: jal         0x8009A3B4
    // 0x802290A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x802290A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x802290AC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802290B0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802290B4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802290B8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802290BC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802290C0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x802290C4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x802290C8: jal         0x80031F0C
    // 0x802290CC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x802290CC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x802290D0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802290D4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802290D8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x802290DC: jal         0x8009A3B4
    // 0x802290E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x802290E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x802290E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802290E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802290EC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802290F0: jal         0x8009A3B4
    // 0x802290F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x802290F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x802290F8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802290FC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80229100: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x80229104: jal         0x8009A3B4
    // 0x80229108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80229108: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8022910C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80229110: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80229114: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229118: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022911C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80229120: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80229124: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80229128: jal         0x80031F0C
    // 0x8022912C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x8022912C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x80229130: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80229134: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80229138: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8022913C: jal         0x8009A3B4
    // 0x80229140: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80229140: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x80229144: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80229148: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022914C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80229150: jal         0x8009A3B4
    // 0x80229154: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x80229154: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x80229158: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8022915C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80229160: beq         $a2, $a1, L_80229218
    if (ctx->r6 == ctx->r5) {
        // 0x80229164: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80229218;
    }
    // 0x80229164: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80229168: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8022916C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80229170: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80229174: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229178: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022917C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229180: mflo        $v0
    ctx->r2 = lo;
    // 0x80229184: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x80229188: nop

    // 0x8022918C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80229190: bne         $v1, $zero, L_8022919C
    if (ctx->r3 != 0) {
        // 0x80229194: nop
    
            goto L_8022919C;
    }
    // 0x80229194: nop

    // 0x80229198: break       7
    do_break(2149749144);
L_8022919C:
    // 0x8022919C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802291A0: bne         $v1, $at, L_802291B4
    if (ctx->r3 != ctx->r1) {
        // 0x802291A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802291B4;
    }
    // 0x802291A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802291A8: bne         $v0, $at, L_802291B4
    if (ctx->r2 != ctx->r1) {
        // 0x802291AC: nop
    
            goto L_802291B4;
    }
    // 0x802291AC: nop

    // 0x802291B0: break       6
    do_break(2149749168);
L_802291B4:
    // 0x802291B4: mflo        $v0
    ctx->r2 = lo;
    // 0x802291B8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802291BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802291C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802291C4: beq         $v0, $zero, L_80229218
    if (ctx->r2 == 0) {
        // 0x802291C8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80229218;
    }
    // 0x802291C8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802291CC: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x802291D0: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x802291D4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802291D8: beq         $v0, $zero, L_802291F4
    if (ctx->r2 == 0) {
        // 0x802291DC: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_802291F4;
    }
    // 0x802291DC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802291E0: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x802291E4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802291E8: bne         $v0, $zero, L_8022920C
    if (ctx->r2 != 0) {
        // 0x802291EC: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8022920C;
    }
    // 0x802291EC: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x802291F0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_802291F4:
    // 0x802291F4: beq         $v0, $zero, L_80229218
    if (ctx->r2 == 0) {
        // 0x802291F8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80229218;
    }
    // 0x802291F8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802291FC: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80229200: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229204: beq         $v0, $zero, L_80229214
    if (ctx->r2 == 0) {
        // 0x80229208: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80229214;
    }
    // 0x80229208: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8022920C:
    // 0x8022920C: j           L_8022921C
    // 0x80229210: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8022921C;
    // 0x80229210: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80229214:
    // 0x80229214: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80229218:
    // 0x80229218: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8022921C:
    // 0x8022921C: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_80229220:
    // 0x80229220: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80229224: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80229228: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8022922C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80229230: jr          $ra
    // 0x80229234: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80229234: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8022ED24_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ED28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022ED2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022ED34: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022ED38: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022ED3C: beq         $v0, $zero, L_8022EE00
    if (ctx->r2 == 0) {
        // 0x8022ED40: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_8022EE00;
    }
    // 0x8022ED40: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022ED44: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED48: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022ED4C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022ED50: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022ED54: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ED5C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022ED60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED64: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022ED68: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022ED6C: bne         $v0, $zero, L_8022ED78
    if (ctx->r2 != 0) {
        // 0x8022ED70: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022ED78;
    }
    // 0x8022ED70: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022ED74: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022ED78:
    // 0x8022ED78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ED7C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ED80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED84: jal         0x80050294
    // 0x8022ED88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022ED88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022ED8C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED90: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022ED94: bne         $a0, $v0, L_8022EDDC
    if (ctx->r4 != ctx->r2) {
        // 0x8022ED98: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022EDDC;
    }
    // 0x8022ED98: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022ED9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EDA0: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022EDA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022EDA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EDAC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022EDB0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022EDB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022EDB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EDBC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022EDC0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022EDC4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EDC8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022EDCC: jal         0x80050294
    // 0x8022EDD0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022EDD0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EDD4: j           L_8022EDF0
    // 0x8022EDD8: nop

        goto L_8022EDF0;
    // 0x8022EDD8: nop

L_8022EDDC:
    // 0x8022EDDC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022EDE0: bne         $v0, $zero, L_8022EDEC
    if (ctx->r2 != 0) {
        // 0x8022EDE4: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022EDEC;
    }
    // 0x8022EDE4: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022EDE8: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022EDEC:
    // 0x8022EDEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EDF0:
    // 0x8022EDF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EDF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EDF8: j           L_8022EE5C
    // 0x8022EDFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022EE5C;
    // 0x8022EDFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EE00:
    // 0x8022EE00: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8022EE04: beq         $v0, $zero, L_8022EE2C
    if (ctx->r2 == 0) {
        // 0x8022EE08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EE2C;
    }
    // 0x8022EE08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE0C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EE10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EE14: jal         0x8004DA90
    // 0x8022EE18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022EE18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022EE1C: lbu         $v0, 0x385($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X385);
    // 0x8022EE20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE24: j           L_8022EE5C
    // 0x8022EE28: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
        goto L_8022EE5C;
    // 0x8022EE28: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022EE2C:
    // 0x8022EE2C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022EE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE34: beq         $v1, $v0, L_8022EE50
    if (ctx->r3 == ctx->r2) {
        // 0x8022EE38: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8022EE50;
    }
    // 0x8022EE38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EE3C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022EE40: jal         0x8004DA90
    // 0x8022EE44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022EE44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022EE48: j           L_8022EE5C
    // 0x8022EE4C: nop

        goto L_8022EE5C;
    // 0x8022EE4C: nop

L_8022EE50:
    // 0x8022EE50: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022EE54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EE58: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022EE5C:
    // 0x8022EE5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EE60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EE64: jr          $ra
    // 0x8022EE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AB98_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AB9C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ABA0: jal         0x8004F5C4
    // 0x8022ABA4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022ABA4: nop

    after_0:
    // 0x8022ABA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABAC: jr          $ra
    // 0x8022ABB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ABB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230760_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230764: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230768: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023076C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230770: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230774: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230778: lw          $v0, -0x6384($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6384);
    // 0x8023077C: jalr        $v0
    // 0x80230780: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230780: nop

    after_0:
    // 0x80230784: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230788: jr          $ra
    // 0x8023078C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023078C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022855C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022855C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022856C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228570: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228574: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228578: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8022857C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80228580: jal         0x8002C654
    // 0x80228584: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80228584: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228588: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022858C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80228590: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228594: bne         $v1, $v0, L_802285A8
    if (ctx->r3 != ctx->r2) {
        // 0x80228598: addiu       $s2, $s0, 0x2C
        ctx->r18 = ADD32(ctx->r16, 0X2C);
            goto L_802285A8;
    }
    // 0x80228598: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x8022859C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285A0: j           L_802285B0
    // 0x802285A4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_802285B0;
    // 0x802285A4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_802285A8:
    // 0x802285A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285AC: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
L_802285B0:
    // 0x802285B0: jal         0x8004D5D4
    // 0x802285B4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802285B4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_1:
    // 0x802285B8: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x802285BC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802285C0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802285C4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802285C8: sb          $s1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r17;
    // 0x802285CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802285D0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802285D4: jal         0x8004F2C4
    // 0x802285D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x802285D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_2:
    // 0x802285DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802285E0: beq         $a0, $zero, L_80228654
    if (ctx->r4 == 0) {
        // 0x802285E4: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_80228654;
    }
    // 0x802285E4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802285E8: sb          $s1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r17;
    // 0x802285EC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802285F0: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x802285F4: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802285F8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802285FC: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80228600: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80228604: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x80228608: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022860C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228610: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228614: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80228618: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022861C: bnel        $v1, $v0, L_8022863C
    if (ctx->r3 != ctx->r2) {
        // 0x80228620: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_8022863C;
    }
    goto skip_0;
    // 0x80228620: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    skip_0:
    // 0x80228624: addiu       $v0, $zero, 0x4FE
    ctx->r2 = ADD32(0, 0X4FE);
    // 0x80228628: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022862C: addiu       $v0, $zero, -0x256
    ctx->r2 = ADD32(0, -0X256);
    // 0x80228630: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80228634: j           L_8022864C
    // 0x80228638: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
        goto L_8022864C;
    // 0x80228638: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
L_8022863C:
    // 0x8022863C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80228640: addiu       $v0, $zero, -0xDC
    ctx->r2 = ADD32(0, -0XDC);
    // 0x80228644: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80228648: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022864C:
    // 0x8022864C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x80228650: sw          $a0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r4;
L_80228654:
    // 0x80228654: jal         0x80228674
    // 0x80228658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228674_ovl22(rdram, ctx);
        goto after_3;
    // 0x80228658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022865C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228660: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228664: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022866C: jr          $ra
    // 0x80228670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B84_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227B88: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227B8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227B90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227B94: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80227B98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227B9C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80227BA0: beq         $v0, $zero, L_80227BC8
    if (ctx->r2 == 0) {
        // 0x80227BA4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227BC8;
    }
    // 0x80227BA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227BA8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227BAC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80227BB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227BB4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80227BB8: jal         0x80047284
    // 0x80227BBC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80227BBC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227BC0: j           L_80227E94
    // 0x80227BC4: nop

        goto L_80227E94;
    // 0x80227BC4: nop

L_80227BC8:
    // 0x80227BC8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80227BCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BD0: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
    // 0x80227BD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BD8: jal         0x8009A3B4
    // 0x80227BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80227BE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227BE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227BE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227BEC: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80227BF0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80227BF4: lhu         $t0, 0x14($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X14);
    // 0x80227BF8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227BFC: addiu       $v0, $v0, -0x301
    ctx->r2 = ADD32(ctx->r2, -0X301);
    // 0x80227C00: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x80227C04: addiu       $t0, $t0, -0x3E
    ctx->r8 = ADD32(ctx->r8, -0X3E);
    // 0x80227C08: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80227C0C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227C10: jal         0x80229F18
    // 0x80227C14: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    func_80229F18_ovl22(rdram, ctx);
        goto after_2;
    // 0x80227C14: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x80227C18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227C1C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227C20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227C24: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227C28: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80227C2C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227C30: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227C34: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x80227C38: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227C3C: jal         0x80229F18
    // 0x80227C40: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80229F18_ovl22(rdram, ctx);
        goto after_3;
    // 0x80227C40: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_3:
    // 0x80227C44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227C48: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227C4C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227C50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227C54: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227C58: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227C5C: jal         0x80229F18
    // 0x80227C60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_4;
    // 0x80227C60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80227C64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227C68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227C6C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227C74: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227C78: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227C7C: jal         0x80229F18
    // 0x80227C80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_5;
    // 0x80227C80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x80227C84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227C88: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80227C8C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227C90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227C94: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227C98: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227C9C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227CA0: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x80227CA4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227CA8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80227CAC: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227CB0: jal         0x80229F18
    // 0x80227CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_6;
    // 0x80227CB4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x80227CB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227CBC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227CC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227CC4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227CC8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80227CCC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227CD0: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227CD4: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x80227CD8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227CDC: jal         0x80229F18
    // 0x80227CE0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80229F18_ovl22(rdram, ctx);
        goto after_7;
    // 0x80227CE0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x80227CE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227CE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227CEC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227CF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227CF4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227CF8: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227CFC: jal         0x80229F18
    // 0x80227D00: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_8;
    // 0x80227D00: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x80227D04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227D08: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227D0C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227D14: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227D18: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227D1C: jal         0x80229F18
    // 0x80227D20: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_9;
    // 0x80227D20: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x80227D24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227D28: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80227D2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227D34: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227D38: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227D3C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227D40: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x80227D44: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227D48: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80227D4C: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227D50: jal         0x80229F18
    // 0x80227D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_10;
    // 0x80227D54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_10:
    // 0x80227D58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227D5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227D64: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227D68: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80227D6C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227D70: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227D74: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x80227D78: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227D7C: jal         0x80229F18
    // 0x80227D80: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80229F18_ovl22(rdram, ctx);
        goto after_11;
    // 0x80227D80: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_11:
    // 0x80227D84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227D88: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227D8C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227D90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227D94: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227D98: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227D9C: jal         0x80229F18
    // 0x80227DA0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_12;
    // 0x80227DA0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_12:
    // 0x80227DA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227DAC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227DB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227DB4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227DB8: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227DBC: jal         0x80229F18
    // 0x80227DC0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_13;
    // 0x80227DC0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x80227DC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227DC8: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80227DCC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227DD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227DD4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227DD8: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80227DDC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227DE0: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x80227DE4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80227DE8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80227DEC: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x80227DF0: jal         0x80229F18
    // 0x80227DF4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_14;
    // 0x80227DF4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_14:
    // 0x80227DF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227DFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227E00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227E04: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227E08: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80227E0C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227E10: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227E14: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x80227E18: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227E1C: jal         0x80229F18
    // 0x80227E20: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80229F18_ovl22(rdram, ctx);
        goto after_15;
    // 0x80227E20: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_15:
    // 0x80227E24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227E28: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227E2C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227E30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227E34: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227E38: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227E3C: jal         0x80229F18
    // 0x80227E40: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_16;
    // 0x80227E40: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_16:
    // 0x80227E44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227E48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80227E4C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80227E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227E54: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80227E58: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x80227E5C: jal         0x80229F18
    // 0x80227E60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80229F18_ovl22(rdram, ctx);
        goto after_17;
    // 0x80227E60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_17:
    // 0x80227E64: jal         0x80047B3C
    // 0x80227E68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_18;
    // 0x80227E68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
    // 0x80227E6C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80227E70: beq         $v0, $zero, L_80227E84
    if (ctx->r2 == 0) {
        // 0x80227E74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E84;
    }
    // 0x80227E74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227E78: jal         0x8006036C
    // 0x80227E7C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x80227E7C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_19:
    // 0x80227E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227E84:
    // 0x80227E84: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80227E88: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    // 0x80227E8C: jal         0x8002A33C
    // 0x80227E90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x80227E90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_20:
L_80227E94:
    // 0x80227E94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227E98: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80227E9C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227EA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227EA4: jr          $ra
    // 0x80227EA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227EA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B358_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B358: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B35C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B360: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B364: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B368: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B36C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B370: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B374: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B378: beq         $v1, $zero, L_8022B394
    if (ctx->r3 == 0) {
        // 0x8022B37C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022B394;
    }
    // 0x8022B37C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022B380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B384: beq         $v1, $v0, L_8022B418
    if (ctx->r3 == ctx->r2) {
        // 0x8022B388: nop
    
            goto L_8022B418;
    }
    // 0x8022B388: nop

    // 0x8022B38C: j           L_8022B468
    // 0x8022B390: nop

        goto L_8022B468;
    // 0x8022B390: nop

L_8022B394:
    // 0x8022B394: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022B398: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B39C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022B3A0: addiu       $s3, $s3, 0x49C4
    ctx->r19 = ADD32(ctx->r19, 0X49C4);
    // 0x8022B3A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B3A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B3AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B3B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B3B8: jal         0x8004F820
    // 0x8022B3BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B3BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B3C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B3C4: bgez        $v0, L_8022B3F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B3C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B3F0;
    }
    // 0x8022B3C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B3CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B3D0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B3D4: jal         0x8004F820
    // 0x8022B3D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B3D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022B3DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B3E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B3E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B3E8: j           L_8022B408
    // 0x8022B3EC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B408;
    // 0x8022B3EC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B3F0:
    // 0x8022B3F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B3F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B3F8: jal         0x8004F820
    // 0x8022B3FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B3FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B400: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B404: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B408:
    // 0x8022B408: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022B40C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B410: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022B414: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
L_8022B418:
    // 0x8022B418: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022B41C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B420: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022B424: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B428: bgez        $v0, L_8022B43C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B42C: nop
    
            goto L_8022B43C;
    }
    // 0x8022B42C: nop

    // 0x8022B430: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022B434: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B438: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022B43C:
    // 0x8022B43C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B440: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022B444: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B448: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B44C: jal         0x8004F820
    // 0x8022B450: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B450: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022B454: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022B458: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B45C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B460: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B464: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022B468:
    // 0x8022B468: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B46C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B470: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B474: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B478: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B47C: jr          $ra
    // 0x8022B480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D5B0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D5B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D5B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D5BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D5C0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D5C4: jal         0x8006033C
    // 0x8022D5C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022D5C8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x8022D5CC: bne         $v0, $zero, L_8022D5E8
    if (ctx->r2 != 0) {
        // 0x8022D5D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D5E8;
    }
    // 0x8022D5D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D5D4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D5D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D5DC: bne         $v1, $v0, L_8022D5E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D5E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D5E8;
    }
    // 0x8022D5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D5E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D5E8:
    // 0x8022D5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D5EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D5F0: jr          $ra
    // 0x8022D5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023280C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023280C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232810: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232814: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232818: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023281C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232820: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232824: bne         $v0, $zero, L_80232854
    if (ctx->r2 != 0) {
        // 0x80232828: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80232854;
    }
    // 0x80232828: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x8023282C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80232830: jal         0x80050294
    // 0x80232834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023283C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232840: jal         0x80232998
    // 0x80232844: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80232998_ovl22(rdram, ctx);
        goto after_1;
    // 0x80232844: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80232848: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023284C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232850: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232854:
    // 0x80232854: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023285C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232860: jr          $ra
    // 0x80232864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802288B0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802288B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802288B8: jal         0x8004F684
    // 0x802288BC: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x802288BC: nop

    after_0:
    // 0x802288C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802288C4: jr          $ra
    // 0x802288C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802288CC: nop

;}
RECOMP_FUNC void func_80228058_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228058: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022805C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228060: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228064: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228068: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022806C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228070: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80228074: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80228078: jal         0x8004DE68
    // 0x8022807C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022807C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x80228080: sltiu       $v0, $v0, 0x384
    ctx->r2 = ctx->r2 < 0X384 ? 1 : 0;
    // 0x80228084: beq         $v0, $zero, L_8022816C
    if (ctx->r2 == 0) {
        // 0x80228088: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8022816C;
    }
    // 0x80228088: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022808C: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x80228090: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228094: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80228098: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022809C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802280A4: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x802280A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280AC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802280B0: lhu         $a1, 0x32($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X32);
    // 0x802280B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802280B8: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x802280BC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x802280C0: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x802280C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802280C8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802280CC: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x802280D0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802280D4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802280D8: jal         0x8004FAEC
    // 0x802280DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x802280DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x802280E0: beq         $v0, $zero, L_8022816C
    if (ctx->r2 == 0) {
        // 0x802280E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022816C;
    }
    // 0x802280E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802280E8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802280EC: bne         $v1, $zero, L_80228128
    if (ctx->r3 != 0) {
        // 0x802280F0: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_80228128;
    }
    // 0x802280F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802280F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802280F8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802280FC: addiu       $v0, $zero, -0x900
    ctx->r2 = ADD32(0, -0X900);
    // 0x80228100: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80228104: addiu       $v0, $zero, -0x12B
    ctx->r2 = ADD32(0, -0X12B);
    // 0x80228108: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022810C: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x80228110: jal         0x8003E768
    // 0x80228114: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x80228114: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228118: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022811C: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80228120: j           L_80228158
    // 0x80228124: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
        goto L_80228158;
    // 0x80228124: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
L_80228128:
    // 0x80228128: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022812C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80228130: addiu       $v0, $zero, -0x1700
    ctx->r2 = ADD32(0, -0X1700);
    // 0x80228134: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80228138: addiu       $v0, $zero, -0x2AB
    ctx->r2 = ADD32(0, -0X2AB);
    // 0x8022813C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80228140: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x80228144: jal         0x8003E768
    // 0x80228148: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_3;
    // 0x80228148: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022814C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228150: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x80228154: ori         $a1, $a1, 0x402
    ctx->r5 = ctx->r5 | 0X402;
L_80228158:
    // 0x80228158: jal         0x80071ACC
    // 0x8022815C: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x8022815C: nop

    after_4:
    // 0x80228160: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    // 0x80228164: jal         0x8002A33C
    // 0x80228168: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80228168: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_5:
L_8022816C:
    // 0x8022816C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228170: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228174: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228178: jr          $ra
    // 0x8022817C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022817C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802311A0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802311A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802311A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802311AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802311B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802311B4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802311B8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802311BC: beq         $v0, $zero, L_802312E4
    if (ctx->r2 == 0) {
        // 0x802311C0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802312E4;
    }
    // 0x802311C0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802311C4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802311C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802311CC: addu        $at, $at, $v0
    gpr jr_addend_802311D4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802311D0: lw          $v0, -0x5B38($at)
    ctx->r2 = ADD32(ctx->r1, -0X5B38);
    // 0x802311D4: jr          $v0
    // 0x802311D8: nop

    switch (jr_addend_802311D4 >> 2) {
        case 0: goto L_802311DC; break;
        case 1: goto L_80231218; break;
        case 2: goto L_8023128C; break;
        case 3: goto L_802312A0; break;
        case 4: goto L_802312BC; break;
        default: switch_error(__func__, 0x802311D4, 0x8023A4C8);
    }
    // 0x802311D8: nop

L_802311DC:
    // 0x802311DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802311E0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802311E4: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x802311E8: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x802311EC: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x802311F0: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802311F4: mfhi        $t0
    ctx->r8 = hi;
    // 0x802311F8: srl         $a0, $t0, 5
    ctx->r4 = S32(U32(ctx->r8) >> 5);
    // 0x802311FC: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80231200: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231204: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231208: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023120C: addiu       $v1, $v1, 0x1E
    ctx->r3 = ADD32(ctx->r3, 0X1E);
    // 0x80231210: j           L_802312E4
    // 0x80231214: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
        goto L_802312E4;
    // 0x80231214: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
L_80231218:
    // 0x80231218: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8023121C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231220: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80231224: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231228: bne         $v0, $zero, L_802312E8
    if (ctx->r2 != 0) {
        // 0x8023122C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802312E8;
    }
    // 0x8023122C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231230: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80231234: addiu       $v1, $zero, 0x180
    ctx->r3 = ADD32(0, 0X180);
    // 0x80231238: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8023123C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80231240: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x80231244: beq         $v0, $zero, L_80231258
    if (ctx->r2 == 0) {
        // 0x80231248: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_80231258;
    }
    // 0x80231248: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x8023124C: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    // 0x80231250: j           L_802312E8
    // 0x80231254: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802312E8;
    // 0x80231254: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80231258:
    // 0x80231258: bne         $v0, $zero, L_8023126C
    if (ctx->r2 != 0) {
        // 0x8023125C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8023126C;
    }
    // 0x8023125C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231260: slti        $v0, $v1, 0xF
    ctx->r2 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x80231264: beq         $v0, $zero, L_80231278
    if (ctx->r2 == 0) {
        // 0x80231268: addiu       $v0, $zero, -0x20
        ctx->r2 = ADD32(0, -0X20);
            goto L_80231278;
    }
    // 0x80231268: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
L_8023126C:
    // 0x8023126C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80231270: j           L_802312E4
    // 0x80231274: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802312E4;
    // 0x80231274: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80231278:
    // 0x80231278: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023127C: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    // 0x80231280: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231284: j           L_802312E4
    // 0x80231288: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802312E4;
    // 0x80231288: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023128C:
    // 0x8023128C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231290: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80231294: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231298: j           L_802312E4
    // 0x8023129C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802312E4;
    // 0x8023129C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802312A0:
    // 0x802312A0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802312A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802312A8: bnel        $v1, $v0, L_802312E8
    if (ctx->r3 != ctx->r2) {
        // 0x802312AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802312E8;
    }
    goto skip_0;
    // 0x802312AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802312B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802312B4: j           L_802312E4
    // 0x802312B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802312E4;
    // 0x802312B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802312BC:
    // 0x802312BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802312C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802312C4: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802312C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802312CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802312D0: sb          $a0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r4;
    // 0x802312D4: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x802312D8: addiu       $v1, $v1, -0x800
    ctx->r3 = ADD32(ctx->r3, -0X800);
    // 0x802312DC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802312E0: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_802312E4:
    // 0x802312E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802312E8:
    // 0x802312E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802312EC: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x802312F0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802312F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802312F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802312FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231300: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231304: jal         0x8004DA90
    // 0x80231308: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80231308: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023130C: jal         0x8023215C
    // 0x80231310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023215C_ovl22(rdram, ctx);
        goto after_1;
    // 0x80231310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231314: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231318: beq         $v0, $zero, L_8023134C
    if (ctx->r2 == 0) {
        // 0x8023131C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023134C;
    }
    // 0x8023131C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231320: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80231324: jal         0x8009A3B4
    // 0x80231328: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231328: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023132C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231330: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80231334: jal         0x8009A3B4
    // 0x80231338: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231338: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8023133C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231340: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    // 0x80231344: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231348: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023134C:
    // 0x8023134C: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80231350: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231354: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x80231358: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023135C: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80231360: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80231364: beq         $v0, $zero, L_80231370
    if (ctx->r2 == 0) {
        // 0x80231368: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80231370;
    }
    // 0x80231368: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8023136C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80231370:
    // 0x80231370: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231374: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231378: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023137C: jr          $ra
    // 0x80231380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236DA0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DA0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80236DA4: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80236DA8: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80236DAC: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x80236DB0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236DB4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236DB8: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236DBC: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236DC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236DC4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236DC8: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236DCC: beq         $v0, $zero, L_80236E24
    if (ctx->r2 == 0) {
        // 0x80236DD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236E24;
    }
    // 0x80236DD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236DD4: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80236DD8: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80236DDC: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x80236DE0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236DE4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236DE8: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80236DEC: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236DF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236DF4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80236DF8: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80236DFC: beq         $v0, $zero, L_80236E24
    if (ctx->r2 == 0) {
        // 0x80236E00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236E24;
    }
    // 0x80236E00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80236E04: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x80236E08: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236E0C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236E10: beq         $v1, $v0, L_80236E20
    if (ctx->r3 == ctx->r2) {
        // 0x80236E14: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80236E20;
    }
    // 0x80236E14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236E18: bne         $v1, $v0, L_80236E24
    if (ctx->r3 != ctx->r2) {
        // 0x80236E1C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80236E24;
    }
    // 0x80236E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80236E20:
    // 0x80236E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236E24:
    // 0x80236E24: jr          $ra
    // 0x80236E28: nop

    TRACE_RETURN()
    return;
    // 0x80236E28: nop

;}
RECOMP_FUNC void func_80227AE8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227AF0: jal         0x8004F684
    // 0x80227AF4: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80227AF4: nop

    after_0:
    // 0x80227AF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227AFC: jr          $ra
    // 0x80227B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229B64_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229B68: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229B6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229B70: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80229B74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229B78: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x80229B7C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229B80: bne         $v0, $zero, L_80229B98
    if (ctx->r2 != 0) {
        // 0x80229B84: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80229B98;
    }
    // 0x80229B84: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80229B88: jal         0x8004F5C4
    // 0x80229B8C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229B8C: nop

    after_0:
    // 0x80229B90: j           L_80229BB4
    // 0x80229B94: nop

        goto L_80229BB4;
    // 0x80229B94: nop

L_80229B98:
    // 0x80229B98: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80229B9C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80229BA0: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80229BA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229BA8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80229BAC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80229BB0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80229BB4:
    // 0x80229BB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229BB8: jr          $ra
    // 0x80229BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023567C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023567C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80235680: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80235684: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80235688: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023568C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80235690: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80235694: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023569C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802356A0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802356A4: jal         0x8009A3B4
    // 0x802356A8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802356A8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x802356AC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802356B0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802356B4: jal         0x8009A3B4
    // 0x802356B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802356B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802356BC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x802356C0: addiu       $s1, $s2, 0x54
    ctx->r17 = ADD32(ctx->r18, 0X54);
    // 0x802356C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802356C8: jal         0x8009A3B4
    // 0x802356CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802356CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802356D0: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x802356D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802356D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802356DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802356E0: lw          $v0, -0x60A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X60A0);
    // 0x802356E4: jalr        $v0
    // 0x802356E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802356E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x802356EC: addiu       $s3, $s2, 0xAC
    ctx->r19 = ADD32(ctx->r18, 0XAC);
    // 0x802356F0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802356F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802356F8: jal         0x8009A3B4
    // 0x802356FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802356FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80235700: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80235704: jal         0x8002C654
    // 0x80235708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_5;
    // 0x80235708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023570C: lh          $v0, 0xE8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XE8);
    // 0x80235710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235714: addiu       $a1, $s2, 0xFC
    ctx->r5 = ADD32(ctx->r18, 0XFC);
    // 0x80235718: sw          $v0, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->r2;
    // 0x8023571C: sw          $v0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->r2;
    // 0x80235720: jal         0x80031DA8
    // 0x80235724: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80235724: sw          $v0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->r2;
    after_6:
    // 0x80235728: jal         0x8002C654
    // 0x8023572C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x8023572C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x80235730: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235734: jal         0x80031428
    // 0x80235738: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x80235738: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x8023573C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235740: jal         0x8003077C
    // 0x80235744: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x80235744: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x80235748: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023574C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80235750: beq         $v0, $zero, L_80235768
    if (ctx->r2 == 0) {
        // 0x80235754: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80235768;
    }
    // 0x80235754: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80235758: lh          $a3, 0x56($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X56);
    // 0x8023575C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80235760: jal         0x8003B6B8
    // 0x80235764: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x80235764: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_10:
L_80235768:
    // 0x80235768: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8023576C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80235770: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80235774: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80235778: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023577C: jr          $ra
    // 0x80235780: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80235780: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802269C0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802269C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802269C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802269CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802269D0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802269D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802269D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802269DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269E0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802269E4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802269E8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802269EC: jal         0x8004D5D4
    // 0x802269F0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802269F0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x802269F4: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x802269F8: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802269FC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80226A00: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80226A04: bne         $v1, $zero, L_80226A58
    if (ctx->r3 != 0) {
        // 0x80226A08: sw          $zero, 0x50($s1)
        MEM_W(0X50, ctx->r17) = 0;
            goto L_80226A58;
    }
    // 0x80226A08: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80226A0C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80226A10: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80226A14: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x80226A18: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226A1C: addiu       $s0, $s0, -0x5A20
    ctx->r16 = ADD32(ctx->r16, -0X5A20);
L_80226A20:
    // 0x80226A20: jal         0x8004F144
    // 0x80226A24: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80226A24: nop

    after_1:
    // 0x80226A28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226A2C: beq         $v1, $zero, L_80226A4C
    if (ctx->r3 == 0) {
        // 0x80226A30: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80226A4C;
    }
    // 0x80226A30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80226A34: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80226A38: sb          $s4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r20;
    // 0x80226A3C: sb          $s3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r19;
    // 0x80226A40: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80226A44: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226A48: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226A4C:
    // 0x80226A4C: sltiu       $v0, $s2, 0x7
    ctx->r2 = ctx->r18 < 0X7 ? 1 : 0;
    // 0x80226A50: bne         $v0, $zero, L_80226A20
    if (ctx->r2 != 0) {
        // 0x80226A54: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80226A20;
    }
    // 0x80226A54: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80226A58:
    // 0x80226A58: jal         0x8004F2C4
    // 0x80226A5C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x80226A5C: nop

    after_2:
    // 0x80226A60: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226A64: beq         $s0, $zero, L_80226AE0
    if (ctx->r16 == 0) {
        // 0x80226A68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226AE0;
    }
    // 0x80226A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226A6C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226A70: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226A74: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80226A78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A7C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80226A80: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80226A84: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80226A88: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80226A8C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80226A90: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x80226A94: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80226A98: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80226A9C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80226AA0: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80226AA4: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80226AA8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80226AAC: jal         0x8004D5D4
    // 0x80226AB0: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80226AB0: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    after_3:
    // 0x80226AB4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226AB8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80226ABC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80226AC0: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80226AC4: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80226AC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226ACC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226AD0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80226AD4: sw          $s0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r16;
    // 0x80226AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226ADC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80226AE0:
    // 0x80226AE0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80226AE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AE8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80226AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226AF0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226AF4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226AF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226AFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B04: jr          $ra
    // 0x80226B08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226B08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F1B8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F1BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F1C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F1C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F1CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F1D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F1D4: jal         0x80050294
    // 0x8022F1D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F1D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F1DC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022F1E0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F1E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F1E8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F1EC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022F1F0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022F1F4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022F1F8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022F1FC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022F200: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022F204: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022F208: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022F20C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022F210: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022F214: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022F218: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022F21C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022F220: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022F224: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022F228: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022F22C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022F230: bne         $v1, $zero, L_8022F26C
    if (ctx->r3 != 0) {
        // 0x8022F234: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022F26C;
    }
    // 0x8022F234: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F238: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022F23C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022F240: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F244: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F248: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022F24C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F250: beq         $v1, $v0, L_8022F26C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F254: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022F26C;
    }
    // 0x8022F254: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022F258: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F25C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022F260: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022F264: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022F268: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022F26C:
    // 0x8022F26C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F270: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F274: jr          $ra
    // 0x8022F278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234980_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023498C: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x80234990: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80234994: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80234998: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x8023499C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802349A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802349A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802349A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802349AC: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802349B0: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x802349B4: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x802349B8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802349BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802349C0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802349C4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802349C8: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x802349CC: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x802349D0: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x802349D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802349D8: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802349DC: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802349E0: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x802349E4: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x802349E8: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x802349EC: jal         0x8009A3B4
    // 0x802349F0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802349F0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x802349F4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802349F8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802349FC: jal         0x8009A3B4
    // 0x80234A00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234A00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234A04: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80234A08: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80234A0C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80234A10: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234A14: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80234A18: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234A1C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80234A20: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80234A24: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80234A28: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80234A2C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80234A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A34: beq         $v1, $v0, L_80234B48
    if (ctx->r3 == ctx->r2) {
        // 0x80234A38: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_80234B48;
    }
    // 0x80234A38: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80234A3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80234A40: beql        $v0, $zero, L_80234A58
    if (ctx->r2 == 0) {
        // 0x80234A44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234A58;
    }
    goto skip_0;
    // 0x80234A44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80234A48: beq         $v1, $zero, L_80234A80
    if (ctx->r3 == 0) {
        // 0x80234A4C: nop
    
            goto L_80234A80;
    }
    // 0x80234A4C: nop

    // 0x80234A50: j           L_80234BE4
    // 0x80234A54: nop

        goto L_80234BE4;
    // 0x80234A54: nop

L_80234A58:
    // 0x80234A58: beq         $v1, $v0, L_80234B94
    if (ctx->r3 == ctx->r2) {
        // 0x80234A5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234B94;
    }
    // 0x80234A5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234A60: bne         $v1, $v0, L_80234BE4
    if (ctx->r3 != ctx->r2) {
        // 0x80234A64: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80234BE4;
    }
    // 0x80234A64: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80234A68: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x80234A6C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80234A70: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80234A74: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80234A78: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80234A7C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80234A80:
    // 0x80234A80: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80234A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234A88: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234A8C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80234A90: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234A94: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234A98: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234A9C: jal         0x800324B4
    // 0x80234AA0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80234AA0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x80234AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234AA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234AAC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234AB0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80234AB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234AB8: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80234ABC: jal         0x8004DDE8
    // 0x80234AC0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x80234AC0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x80234AC4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80234AC8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x80234ACC: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x80234AD0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234AD4: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x80234AD8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80234ADC: mfhi        $t3
    ctx->r11 = hi;
    // 0x80234AE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80234AE4: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x80234AE8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80234AEC: bne         $v0, $zero, L_80234AF8
    if (ctx->r2 != 0) {
        // 0x80234AF0: nop
    
            goto L_80234AF8;
    }
    // 0x80234AF0: nop

    // 0x80234AF4: break       7
    do_break(2149796596);
L_80234AF8:
    // 0x80234AF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80234AFC: bne         $v0, $at, L_80234B10
    if (ctx->r2 != ctx->r1) {
        // 0x80234B00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80234B10;
    }
    // 0x80234B00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80234B04: bne         $v1, $at, L_80234B10
    if (ctx->r3 != ctx->r1) {
        // 0x80234B08: nop
    
            goto L_80234B10;
    }
    // 0x80234B08: nop

    // 0x80234B0C: break       6
    do_break(2149796620);
L_80234B10:
    // 0x80234B10: mflo        $v1
    ctx->r3 = lo;
    // 0x80234B14: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80234B18: nop

    // 0x80234B1C: jal         0x80032498
    // 0x80234B20: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80234B20: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80234B24: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234B28: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80234B2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234B30: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80234B34: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80234B38: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80234B3C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80234B40: j           L_80234BE4
    // 0x80234B44: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80234BE4;
    // 0x80234B44: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_80234B48:
    // 0x80234B48: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80234B4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234B50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234B54: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80234B58: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234B5C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80234B60: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234B64: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234B68: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80234B6C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80234B70: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234B74: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234B78: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80234B7C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80234B80: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80234B84: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80234B88: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80234B8C: j           L_80234BE4
    // 0x80234B90: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80234BE4;
    // 0x80234B90: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80234B94:
    // 0x80234B94: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80234B98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234B9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234BA0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80234BA4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234BA8: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80234BAC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234BB0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80234BB4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80234BB8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234BBC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234BC0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80234BC4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80234BC8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80234BCC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80234BD0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80234BD4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80234BD8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80234BDC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234BE0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80234BE4:
    // 0x80234BE4: jal         0x8003F754
    // 0x80234BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80234BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234BEC: beql        $v0, $zero, L_80234C00
    if (ctx->r2 == 0) {
        // 0x80234BF0: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80234C00;
    }
    goto skip_1;
    // 0x80234BF0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80234BF4: jal         0x8004F4F8
    // 0x80234BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80234BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80234BFC: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80234C00:
    // 0x80234C00: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80234C04: jal         0x8002A33C
    // 0x80234C08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80234C08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x80234C0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234C10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234C14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234C18: jr          $ra
    // 0x80234C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235A54_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235A58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235A5C: jal         0x8004F4F8
    // 0x80235A60: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80235A60: nop

    after_0:
    // 0x80235A64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235A68: jr          $ra
    // 0x80235A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802366C0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802366C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802366CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802366D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802366D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802366D8: lw          $v0, -0x5D24($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5D24);
    // 0x802366DC: jalr        $v0
    // 0x802366E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802366E0: nop

    after_0:
    // 0x802366E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802366E8: jr          $ra
    // 0x802366EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802366EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C748_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C748: lhu         $v0, 0x32A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32A);
    // 0x8022C74C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C750: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022C754: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022C758: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022C75C:
    // 0x8022C75C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C760: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C764: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C768: lbu         $v0, -0x64C8($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X64C8);
    // 0x8022C76C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022C770: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022C774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C778: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C77C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C780: bne         $v0, $zero, L_8022C7A0
    if (ctx->r2 != 0) {
        // 0x8022C784: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022C7A0;
    }
    // 0x8022C784: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022C788: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C78C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C790: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C794: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022C798: bne         $v0, $zero, L_8022C75C
    if (ctx->r2 != 0) {
        // 0x8022C79C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022C75C;
    }
    // 0x8022C79C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022C7A0:
    // 0x8022C7A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C7A4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022C7A8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022C7AC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C7B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7B4: beq         $v1, $v0, L_8022C7E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7B8: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_8022C7E8;
    }
    // 0x8022C7B8: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022C7BC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C7C0: beql        $v0, $zero, L_8022C7D8
    if (ctx->r2 == 0) {
        // 0x8022C7C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C7D8;
    }
    goto skip_0;
    // 0x8022C7C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C7C8: beql        $v1, $zero, L_8022C7F8
    if (ctx->r3 == 0) {
        // 0x8022C7CC: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022C7F8;
    }
    goto skip_1;
    // 0x8022C7CC: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x8022C7D0: j           L_8022C7F8
    // 0x8022C7D4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022C7F8;
    // 0x8022C7D4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022C7D8:
    // 0x8022C7D8: beql        $v1, $v0, L_8022C7F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C7DC: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022C7F4;
    }
    goto skip_2;
    // 0x8022C7DC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_2:
    // 0x8022C7E0: j           L_8022C7F8
    // 0x8022C7E4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8022C7F8;
    // 0x8022C7E4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022C7E8:
    // 0x8022C7E8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C7EC: j           L_8022C7F8
    // 0x8022C7F0: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022C7F8;
    // 0x8022C7F0: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022C7F4:
    // 0x8022C7F4: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022C7F8:
    // 0x8022C7F8: jr          $ra
    // 0x8022C7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022C7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80232624_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232628: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023262C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232634: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232638: bne         $v0, $zero, L_80232658
    if (ctx->r2 != 0) {
        // 0x8023263C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80232658;
    }
    // 0x8023263C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80232640: jal         0x80050294
    // 0x80232644: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232644: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232648: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023264C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80232650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232654: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232658:
    // 0x80232658: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023265C: bne         $v0, $zero, L_80232674
    if (ctx->r2 != 0) {
        // 0x80232660: nop
    
            goto L_80232674;
    }
    // 0x80232660: nop

    // 0x80232664: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80232668: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023266C: j           L_80232680
    // 0x80232670: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80232680;
    // 0x80232670: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80232674:
    // 0x80232674: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80232678: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023267C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80232680:
    // 0x80232680: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232684: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232688: jal         0x8009A3B4
    // 0x8023268C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023268C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80232690: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232694: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232698: jal         0x8009A3B4
    // 0x8023269C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023269C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802326A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802326A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802326A8: jal         0x8009A3B4
    // 0x802326AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802326AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802326B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802326B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802326B8: jr          $ra
    // 0x802326BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802326BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F88_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225F8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225F90: jal         0x8004EF48
    // 0x80225F94: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x80225F94: nop

    after_0:
    // 0x80225F98: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80225F9C: beq         $a2, $zero, L_80226020
    if (ctx->r6 == 0) {
        // 0x80225FA0: addiu       $v0, $zero, -0x104
        ctx->r2 = ADD32(0, -0X104);
            goto L_80226020;
    }
    // 0x80225FA0: addiu       $v0, $zero, -0x104
    ctx->r2 = ADD32(0, -0X104);
    // 0x80225FA4: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80225FA8: lh          $v1, 0x14($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X14);
    // 0x80225FAC: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x80225FB0: lh          $a0, 0x16($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X16);
    // 0x80225FB4: addiu       $v0, $zero, -0x15E0
    ctx->r2 = ADD32(0, -0X15E0);
    // 0x80225FB8: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80225FBC: lh          $a1, 0x18($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X18);
    // 0x80225FC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225FC4: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80225FC8: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80225FCC: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80225FD0: addiu       $v0, $zero, 0x7080
    ctx->r2 = ADD32(0, 0X7080);
    // 0x80225FD4: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    // 0x80225FD8: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
    // 0x80225FDC: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80225FE0: sb          $zero, 0xC($a2)
    MEM_B(0XC, ctx->r6) = 0;
    // 0x80225FE4: sb          $zero, 0xD($a2)
    MEM_B(0XD, ctx->r6) = 0;
    // 0x80225FE8: sb          $zero, 0xE($a2)
    MEM_B(0XE, ctx->r6) = 0;
    // 0x80225FEC: sb          $zero, 0xF($a2)
    MEM_B(0XF, ctx->r6) = 0;
    // 0x80225FF0: sb          $zero, 0x8($a2)
    MEM_B(0X8, ctx->r6) = 0;
    // 0x80225FF4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225FF8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225FFC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80226000: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x80226004: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80226008: sw          $a1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r5;
    // 0x8022600C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226010: sw          $v1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r3;
    // 0x80226014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226018: jal         0x8004A00C
    // 0x8022601C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_1;
    // 0x8022601C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
L_80226020:
    // 0x80226020: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226024: jr          $ra
    // 0x80226028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022602C: nop

;}
RECOMP_FUNC void func_80232B20_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232B34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232B3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232B40: lw          $v0, -0x61E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X61E0);
    // 0x80232B44: jalr        $v0
    // 0x80232B48: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232B48: nop

    after_0:
    // 0x80232B4C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232B50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232B54: jal         0x8009A3B4
    // 0x80232B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80232B5C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232B60: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232B64: jal         0x8009A3B4
    // 0x80232B68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232B68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80232B6C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232B70: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232B74: jal         0x8009A3B4
    // 0x80232B78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80232B78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80232B7C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80232B80: bne         $v0, $zero, L_80232B98
    if (ctx->r2 != 0) {
        // 0x80232B84: nop
    
            goto L_80232B98;
    }
    // 0x80232B84: nop

    // 0x80232B88: jal         0x8005044C
    // 0x80232B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80232B8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80232B90: j           L_80232BA8
    // 0x80232B94: nop

        goto L_80232BA8;
    // 0x80232B94: nop

L_80232B98:
    // 0x80232B98: jal         0x80051770
    // 0x80232B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x80232B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232BA0: jal         0x80051248
    // 0x80232BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x80232BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80232BA8:
    // 0x80232BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232BAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232BB0: jr          $ra
    // 0x80232BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230B54_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B54: lw          $v0, 0x35C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X35C);
    // 0x80230B58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230B5C: beq         $v0, $zero, L_80230B6C
    if (ctx->r2 == 0) {
        // 0x80230B60: nop
    
            goto L_80230B6C;
    }
    // 0x80230B60: nop

    // 0x80230B64: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80230B68: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_80230B6C:
    // 0x80230B6C: jr          $ra
    // 0x80230B70: nop

    TRACE_RETURN()
    return;
    // 0x80230B70: nop

;}
RECOMP_FUNC void func_8022E598_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E59C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E5A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E5A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E5A8: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022E5AC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022E5B0: beq         $v0, $zero, L_8022E610
    if (ctx->r2 == 0) {
        // 0x8022E5B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E610;
    }
    // 0x8022E5B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E5BC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022E5C0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E5C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E5C8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022E5CC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022E5D0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022E5D4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E5D8: beq         $v0, $zero, L_8022E5E8
    if (ctx->r2 == 0) {
        // 0x8022E5DC: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8022E5E8;
    }
    // 0x8022E5DC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E5E0: j           L_8022E5EC
    // 0x8022E5E4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8022E5EC;
    // 0x8022E5E4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_8022E5E8:
    // 0x8022E5E8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022E5EC:
    // 0x8022E5EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E5F0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E5F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5F8: jal         0x80050294
    // 0x8022E5FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022E5FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022E600: jal         0x8022E824
    // 0x8022E604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E824_ovl22(rdram, ctx);
        goto after_1;
    // 0x8022E604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E608: j           L_8022E6C4
    // 0x8022E60C: nop

        goto L_8022E6C4;
    // 0x8022E60C: nop

L_8022E610:
    // 0x8022E610: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E618: jal         0x8004DA90
    // 0x8022E61C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022E61C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022E620: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8022E624: bne         $v0, $zero, L_8022E6BC
    if (ctx->r2 != 0) {
        // 0x8022E628: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E6BC;
    }
    // 0x8022E628: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E62C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022E630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E634: bne         $v1, $v0, L_8022E6C4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E638: nop
    
            goto L_8022E6C4;
    }
    // 0x8022E638: nop

    // 0x8022E63C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x8022E640: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E644: bne         $v0, $zero, L_8022E680
    if (ctx->r2 != 0) {
        // 0x8022E648: addiu       $a0, $s0, 0x378
        ctx->r4 = ADD32(ctx->r16, 0X378);
            goto L_8022E680;
    }
    // 0x8022E648: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
    // 0x8022E64C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8022E650: bne         $v0, $zero, L_8022E664
    if (ctx->r2 != 0) {
        // 0x8022E654: nop
    
            goto L_8022E664;
    }
    // 0x8022E654: nop

    // 0x8022E658: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022E65C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E660: sb          $v0, 0x384($s0)
    MEM_B(0X384, ctx->r16) = ctx->r2;
L_8022E664:
    // 0x8022E664: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022E668: beq         $v0, $v1, L_8022E67C
    if (ctx->r2 == ctx->r3) {
        // 0x8022E66C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022E67C;
    }
    // 0x8022E66C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E670: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022E674: j           L_8022E6C4
    // 0x8022E678: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_8022E6C4;
    // 0x8022E678: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_8022E67C:
    // 0x8022E67C: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
L_8022E680:
    // 0x8022E680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E688: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022E68C: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8022E690: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E694: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022E698: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022E69C: jal         0x8009A3B4
    // 0x8022E6A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022E6A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022E6A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E6A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E6AC: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022E6B0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022E6B4: j           L_8022E6C4
    // 0x8022E6B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_8022E6C4;
    // 0x8022E6B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_8022E6BC:
    // 0x8022E6BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E6C0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022E6C4:
    // 0x8022E6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E6C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E6CC: jr          $ra
    // 0x8022E6D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E6D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230680_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230680: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230684: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023068C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80230690: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230694: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80230698: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023069C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802306A0: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x802306A4: beql        $v0, $zero, L_802306BC
    if (ctx->r2 == 0) {
        // 0x802306A8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802306BC;
    }
    goto skip_0;
    // 0x802306A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x802306AC: jal         0x80230C08
    // 0x802306B0: nop

    func_80230C08_ovl22(rdram, ctx);
        goto after_0;
    // 0x802306B0: nop

    after_0:
    // 0x802306B4: j           L_8023074C
    // 0x802306B8: nop

        goto L_8023074C;
    // 0x802306B8: nop

L_802306BC:
    // 0x802306BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802306C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802306C4: jal         0x8004F820
    // 0x802306C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802306C8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x802306CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802306D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802306D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802306D8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802306DC: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802306E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802306E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802306E8: jal         0x8004DA90
    // 0x802306EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802306EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x802306F0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802306F4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802306F8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802306FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80230700: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80230704: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x80230708: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023070C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230710: jal         0x8004FAEC
    // 0x80230714: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x80230714: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230718: beq         $v0, $zero, L_8023074C
    if (ctx->r2 == 0) {
        // 0x8023071C: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_8023074C;
    }
    // 0x8023071C: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x80230720: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80230724: ori         $v0, $v0, 0x4240
    ctx->r2 = ctx->r2 | 0X4240;
    // 0x80230728: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023072C: bne         $v0, $zero, L_8023074C
    if (ctx->r2 != 0) {
        // 0x80230730: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023074C;
    }
    // 0x80230730: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230734: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80230738: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023073C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230740: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230744: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230748: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023074C:
    // 0x8023074C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80230750: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230754: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230758: jr          $ra
    // 0x8023075C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023075C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229BC0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229BC4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80229BC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80229BCC: beq         $v1, $a0, L_80229C54
    if (ctx->r3 == ctx->r4) {
        // 0x80229BD0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80229C54;
    }
    // 0x80229BD0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80229BD4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229BD8: beq         $v0, $zero, L_80229C8C
    if (ctx->r2 == 0) {
        // 0x80229BDC: nop
    
            goto L_80229C8C;
    }
    // 0x80229BDC: nop

    // 0x80229BE0: bne         $v1, $zero, L_80229C8C
    if (ctx->r3 != 0) {
        // 0x80229BE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229C8C;
    }
    // 0x80229BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BE8: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x80229BEC: beq         $v1, $a0, L_80229C30
    if (ctx->r3 == ctx->r4) {
        // 0x80229BF0: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_80229C30;
    }
    // 0x80229BF0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80229BF4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229BF8: beql        $v0, $zero, L_80229C10
    if (ctx->r2 == 0) {
        // 0x80229BFC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229C10;
    }
    goto skip_0;
    // 0x80229BFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229C00: beq         $v1, $zero, L_80229C20
    if (ctx->r3 == 0) {
        // 0x80229C04: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80229C20;
    }
    // 0x80229C04: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80229C08: j           L_80229C54
    // 0x80229C0C: nop

        goto L_80229C54;
    // 0x80229C0C: nop

L_80229C10:
    // 0x80229C10: beq         $v1, $v0, L_80229C44
    if (ctx->r3 == ctx->r2) {
        // 0x80229C14: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80229C44;
    }
    // 0x80229C14: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80229C18: j           L_80229C54
    // 0x80229C1C: nop

        goto L_80229C54;
    // 0x80229C1C: nop

L_80229C20:
    // 0x80229C20: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80229C24: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80229C28: j           L_80229C50
    // 0x80229C2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229C50;
    // 0x80229C2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229C30:
    // 0x80229C30: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80229C34: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80229C38: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80229C3C: j           L_80229C50
    // 0x80229C40: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80229C50;
    // 0x80229C40: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80229C44:
    // 0x80229C44: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80229C48: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80229C4C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_80229C50:
    // 0x80229C50: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_80229C54:
    // 0x80229C54: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80229C58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229C5C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80229C60: bne         $v0, $zero, L_80229C78
    if (ctx->r2 != 0) {
        // 0x80229C64: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80229C78;
    }
    // 0x80229C64: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80229C68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229C6C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80229C70: j           L_80229C8C
    // 0x80229C74: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_80229C8C;
    // 0x80229C74: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_80229C78:
    // 0x80229C78: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80229C7C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80229C80: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80229C84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229C88: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80229C8C:
    // 0x80229C8C: jr          $ra
    // 0x80229C90: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80229C90: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80233B0C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B0C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80233B10: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80233B14: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80233B18: sh          $v0, 0x56A($a0)
    MEM_H(0X56A, ctx->r4) = ctx->r2;
    // 0x80233B1C: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80233B20: jr          $ra
    // 0x80233B24: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80233B24: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_802369B0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802369B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802369BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802369C0: jal         0x8006033C
    // 0x802369C4: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802369C4: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    after_0:
    // 0x802369C8: bne         $v0, $zero, L_80236A84
    if (ctx->r2 != 0) {
        // 0x802369CC: addiu       $v0, $zero, 0x6F
        ctx->r2 = ADD32(0, 0X6F);
            goto L_80236A84;
    }
    // 0x802369CC: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x802369D0: jal         0x8006033C
    // 0x802369D4: addiu       $a0, $zero, 0x531
    ctx->r4 = ADD32(0, 0X531);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802369D4: addiu       $a0, $zero, 0x531
    ctx->r4 = ADD32(0, 0X531);
    after_1:
    // 0x802369D8: bne         $v0, $zero, L_80236A00
    if (ctx->r2 != 0) {
        // 0x802369DC: nop
    
            goto L_80236A00;
    }
    // 0x802369DC: nop

    // 0x802369E0: jal         0x8006033C
    // 0x802369E4: addiu       $a0, $zero, 0x532
    ctx->r4 = ADD32(0, 0X532);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802369E4: addiu       $a0, $zero, 0x532
    ctx->r4 = ADD32(0, 0X532);
    after_2:
    // 0x802369E8: bne         $v0, $zero, L_80236A00
    if (ctx->r2 != 0) {
        // 0x802369EC: nop
    
            goto L_80236A00;
    }
    // 0x802369EC: nop

    // 0x802369F0: jal         0x8006033C
    // 0x802369F4: addiu       $a0, $zero, 0x533
    ctx->r4 = ADD32(0, 0X533);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802369F4: addiu       $a0, $zero, 0x533
    ctx->r4 = ADD32(0, 0X533);
    after_3:
    // 0x802369F8: beq         $v0, $zero, L_80236A14
    if (ctx->r2 == 0) {
        // 0x802369FC: nop
    
            goto L_80236A14;
    }
    // 0x802369FC: nop

L_80236A00:
    // 0x80236A00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236A04: addiu       $v1, $v1, -0x3AA4
    ctx->r3 = ADD32(ctx->r3, -0X3AA4);
    // 0x80236A08: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80236A0C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80236A10: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80236A14:
    // 0x80236A14: jal         0x8006033C
    // 0x80236A18: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80236A18: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
    after_4:
    // 0x80236A1C: beq         $v0, $zero, L_80236A38
    if (ctx->r2 == 0) {
        // 0x80236A20: nop
    
            goto L_80236A38;
    }
    // 0x80236A20: nop

    // 0x80236A24: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236A28: addiu       $v1, $v1, -0x3AA4
    ctx->r3 = ADD32(ctx->r3, -0X3AA4);
    // 0x80236A2C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80236A30: ori         $v0, $v0, 0x18
    ctx->r2 = ctx->r2 | 0X18;
    // 0x80236A34: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80236A38:
    // 0x80236A38: jal         0x8006033C
    // 0x80236A3C: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80236A3C: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_5:
    // 0x80236A40: beq         $v0, $zero, L_80236A5C
    if (ctx->r2 == 0) {
        // 0x80236A44: nop
    
            goto L_80236A5C;
    }
    // 0x80236A44: nop

    // 0x80236A48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236A4C: addiu       $v1, $v1, -0x3AA4
    ctx->r3 = ADD32(ctx->r3, -0X3AA4);
    // 0x80236A50: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80236A54: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80236A58: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80236A5C:
    // 0x80236A5C: jal         0x8006033C
    // 0x80236A60: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80236A60: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_6:
    // 0x80236A64: beq         $v0, $zero, L_80236A8C
    if (ctx->r2 == 0) {
        // 0x80236A68: nop
    
            goto L_80236A8C;
    }
    // 0x80236A68: nop

    // 0x80236A6C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236A70: addiu       $v1, $v1, -0x3AA4
    ctx->r3 = ADD32(ctx->r3, -0X3AA4);
    // 0x80236A74: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80236A78: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80236A7C: j           L_80236A8C
    // 0x80236A80: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_80236A8C;
    // 0x80236A80: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80236A84:
    // 0x80236A84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80236A88: sh          $v0, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = ctx->r2;
L_80236A8C:
    // 0x80236A8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236A90: lhu         $v1, -0x3AA4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3AA4);
    // 0x80236A94: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x80236A98: bne         $v1, $v0, L_80236AAC
    if (ctx->r3 != ctx->r2) {
        // 0x80236A9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236AAC;
    }
    // 0x80236A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236AA4: j           L_80236AC0
    // 0x80236AA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236AC0;
    // 0x80236AA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236AAC:
    // 0x80236AAC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80236AB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236AB4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236AB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236ABC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80236AC0:
    // 0x80236AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236AC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236AC8: jr          $ra
    // 0x80236ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236980_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236984: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236988: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023698C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236990: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236994: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236998: lw          $v0, -0x5D10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5D10);
    // 0x8023699C: jalr        $v0
    // 0x802369A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802369A0: nop

    after_0:
    // 0x802369A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802369A8: jr          $ra
    // 0x802369AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802369AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226990_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226994: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226998: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022699C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802269A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802269A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802269A8: lw          $v0, -0x6C00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C00);
    // 0x802269AC: jalr        $v0
    // 0x802269B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802269B0: nop

    after_0:
    // 0x802269B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802269B8: jr          $ra
    // 0x802269BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233F7C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233F80: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233F84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233F88: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80233F8C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233F90: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x80233F94: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80233F98: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80233F9C: beq         $v0, $zero, L_80233FF4
    if (ctx->r2 == 0) {
        // 0x80233FA0: nop
    
            goto L_80233FF4;
    }
    // 0x80233FA0: nop

    // 0x80233FA4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80233FA8: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80233FAC: jal         0x800324B4
    // 0x80233FB0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80233FB0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80233FB4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80233FB8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80233FBC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233FC0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80233FC4: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80233FC8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80233FCC: jal         0x80032498
    // 0x80233FD0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80233FD0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80233FD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80233FD8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80233FDC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233FE0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80233FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233FE8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80233FEC: j           L_80234024
    // 0x80233FF0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_80234024;
    // 0x80233FF0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80233FF4:
    // 0x80233FF4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80233FF8: beq         $v0, $zero, L_80234014
    if (ctx->r2 == 0) {
        // 0x80233FFC: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80234014;
    }
    // 0x80233FFC: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80234000: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234004: beq         $v0, $zero, L_80234024
    if (ctx->r2 == 0) {
        // 0x80234008: nop
    
            goto L_80234024;
    }
    // 0x80234008: nop

    // 0x8023400C: j           L_80234040
    // 0x80234010: nop

        goto L_80234040;
    // 0x80234010: nop

L_80234014:
    // 0x80234014: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80234018: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023401C: bne         $v0, $zero, L_80234040
    if (ctx->r2 != 0) {
        // 0x80234020: nop
    
            goto L_80234040;
    }
    // 0x80234020: nop

L_80234024:
    // 0x80234024: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80234028: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023402C: bne         $v0, $zero, L_8023406C
    if (ctx->r2 != 0) {
        // 0x80234030: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_8023406C;
    }
    // 0x80234030: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80234034: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80234038: beq         $v0, $zero, L_80234074
    if (ctx->r2 == 0) {
        // 0x8023403C: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80234074;
    }
    // 0x8023403C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80234040:
    // 0x80234040: jal         0x8004F144
    // 0x80234044: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80234044: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x80234048: beq         $v0, $zero, L_80234058
    if (ctx->r2 == 0) {
        // 0x8023404C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234058;
    }
    // 0x8023404C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234050: jal         0x802348C0
    // 0x80234054: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802348C0_ovl22(rdram, ctx);
        goto after_3;
    // 0x80234054: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_80234058:
    // 0x80234058: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8023405C: jal         0x8004F4F8
    // 0x80234060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x80234060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80234064: j           L_8023418C
    // 0x80234068: nop

        goto L_8023418C;
    // 0x80234068: nop

L_8023406C:
    // 0x8023406C: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x80234070: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80234074:
    // 0x80234074: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234078: jal         0x8009A3B4
    // 0x8023407C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023407C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80234080: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80234084: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234088: jal         0x8009A3B4
    // 0x8023408C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023408C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234090: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80234094: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80234098: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023409C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802340A0: beq         $v0, $zero, L_802340DC
    if (ctx->r2 == 0) {
        // 0x802340A4: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_802340DC;
    }
    // 0x802340A4: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x802340A8: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802340AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802340B0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802340B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802340B8: lhu         $v1, -0x6128($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6128);
    // 0x802340BC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802340C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802340C4: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x802340C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802340CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802340D0: lhu         $v0, -0x6126($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6126);
    // 0x802340D4: j           L_8023410C
    // 0x802340D8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_8023410C;
    // 0x802340D8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_802340DC:
    // 0x802340DC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802340E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802340E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802340E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802340EC: lhu         $v1, -0x6140($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6140);
    // 0x802340F0: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802340F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802340F8: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x802340FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234100: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234104: lhu         $v0, -0x613E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X613E);
    // 0x80234108: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023410C:
    // 0x8023410C: jal         0x802347D0
    // 0x80234110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802347D0_ovl22(rdram, ctx);
        goto after_7;
    // 0x80234110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80234114: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80234118: jal         0x8004DD04
    // 0x8023411C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8023411C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x80234120: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80234124: jal         0x8004DD04
    // 0x80234128: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80234128: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x8023412C: jal         0x80234618
    // 0x80234130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80234618_ovl22(rdram, ctx);
        goto after_10;
    // 0x80234130: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80234134: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234138: beq         $v0, $zero, L_80234148
    if (ctx->r2 == 0) {
        // 0x8023413C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234148;
    }
    // 0x8023413C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234140: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80234144: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80234148:
    // 0x80234148: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023414C: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80234150: bne         $v0, $zero, L_80234168
    if (ctx->r2 != 0) {
        // 0x80234154: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80234168;
    }
    // 0x80234154: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80234158: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023415C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80234160: j           L_8023416C
    // 0x80234164: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_8023416C;
    // 0x80234164: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80234168:
    // 0x80234168: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8023416C:
    // 0x8023416C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80234170: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80234174: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80234178: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x8023417C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80234180: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80234184: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80234188: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_8023418C:
    // 0x8023418C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80234190: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234194: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234198: jr          $ra
    // 0x8023419C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023419C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022FDA8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FDAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FDB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FDB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FDB8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022FDBC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022FDC0: bne         $a0, $v0, L_8022FE0C
    if (ctx->r4 != ctx->r2) {
        // 0x8022FDC4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022FE0C;
    }
    // 0x8022FDC4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022FDC8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FDCC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022FDD0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022FDD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FDD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FDE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FDE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FDE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FDEC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022FDF0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022FDF4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FDF8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022FDFC: jal         0x80050294
    // 0x8022FE00: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FE00: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FE04: j           L_8022FE20
    // 0x8022FE08: nop

        goto L_8022FE20;
    // 0x8022FE08: nop

L_8022FE0C:
    // 0x8022FE0C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022FE10: bne         $v0, $zero, L_8022FE1C
    if (ctx->r2 != 0) {
        // 0x8022FE14: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022FE1C;
    }
    // 0x8022FE14: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022FE18: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022FE1C:
    // 0x8022FE1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022FE20:
    // 0x8022FE20: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FE24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FE28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FE2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FE30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE34: jr          $ra
    // 0x8022FE38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236180_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236184: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023618C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236190: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236194: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236198: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023619C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802361A0: lw          $v0, -0x5E98($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E98);
    // 0x802361A4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802361A8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802361AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802361B0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x802361B4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802361B8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802361BC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802361C0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802361C4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802361C8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802361CC: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x802361D0: jal         0x80236624
    // 0x802361D4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80236624_ovl22(rdram, ctx);
        goto after_0;
    // 0x802361D4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x802361D8: beq         $v0, $zero, L_802361EC
    if (ctx->r2 == 0) {
        // 0x802361DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802361EC;
    }
    // 0x802361DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802361E0: jal         0x8004F62C
    // 0x802361E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802361E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802361E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802361EC:
    // 0x802361EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802361F0: jal         0x8023626C
    // 0x802361F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023626C_ovl22(rdram, ctx);
        goto after_2;
    // 0x802361F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802361F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802361FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236200: jr          $ra
    // 0x80236204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282BC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802282C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802282C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802282C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802282CC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802282D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802282D4: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x802282D8: beq         $v0, $zero, L_802282E8
    if (ctx->r2 == 0) {
        // 0x802282DC: addiu       $s2, $s1, 0x4C
        ctx->r18 = ADD32(ctx->r17, 0X4C);
            goto L_802282E8;
    }
    // 0x802282DC: addiu       $s2, $s1, 0x4C
    ctx->r18 = ADD32(ctx->r17, 0X4C);
    // 0x802282E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282E4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802282E8:
    // 0x802282E8: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x802282EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802282F0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802282F4: jal         0x8009A3B4
    // 0x802282F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802282F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802282FC: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80228300: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80228304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228308: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8022830C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228310: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80228314: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x80228318: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022831C: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80228320: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80228324: ori         $a3, $zero, 0xC000
    ctx->r7 = 0 | 0XC000;
    // 0x80228328: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022832C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80228330: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228334: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80228338: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022833C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80228340: jal         0x80051E18
    // 0x80228344: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80228344: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80228348: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022834C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228350: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228354: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228358: lw          $v0, -0x6B50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B50);
    // 0x8022835C: jalr        $v0
    // 0x80228360: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80228360: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80228364: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x80228368: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022836C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80228370: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228374: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228378: jr          $ra
    // 0x8022837C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022837C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225150_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x7BB0
    ctx->r2 = ADD32(ctx->r2, -0X7BB0);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x7A70
    ctx->r2 = ADD32(ctx->r2, -0X7A70);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x7A10
    ctx->r2 = ADD32(ctx->r2, -0X7A10);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x7950
    ctx->r2 = ADD32(ctx->r2, -0X7950);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x78D0
    ctx->r2 = ADD32(ctx->r2, -0X78D0);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x7848
    ctx->r2 = ADD32(ctx->r2, -0X7848);
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
RECOMP_FUNC void func_8022D1C8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D1CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D1D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D1D4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D1D8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D1DC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D1E0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D1E4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022D1E8: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022D1EC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D1F0: beq         $a0, $zero, L_8022D224
    if (ctx->r4 == 0) {
        // 0x8022D1F4: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_8022D224;
    }
    // 0x8022D1F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022D1F8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022D1FC: jal         0x800540D0
    // 0x8022D200: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022D200: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D204: beq         $v0, $zero, L_8022D218
    if (ctx->r2 == 0) {
        // 0x8022D208: nop
    
            goto L_8022D218;
    }
    // 0x8022D208: nop

    // 0x8022D20C: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022D210: j           L_8022D220
    // 0x8022D214: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8022D220;
    // 0x8022D214: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8022D218:
    // 0x8022D218: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022D21C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022D220:
    // 0x8022D220: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_8022D224:
    // 0x8022D224: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D228: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D22C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D230: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D234: lw          $v0, -0x64A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X64A8);
    // 0x8022D238: jalr        $v0
    // 0x8022D23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D240: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D244: bne         $v0, $zero, L_8022D268
    if (ctx->r2 != 0) {
        // 0x8022D248: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_8022D268;
    }
    // 0x8022D248: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x8022D24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D254: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022D258: jal         0x80047284
    // 0x8022D25C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022D25C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x8022D260: j           L_8022D298
    // 0x8022D264: nop

        goto L_8022D298;
    // 0x8022D264: nop

L_8022D268:
    // 0x8022D268: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022D26C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D270: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x8022D274: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D278: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D27C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8022D280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D284: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D288: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D28C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022D290: jal         0x80051E18
    // 0x8022D294: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022D294: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_8022D298:
    // 0x8022D298: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022D29C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D2A0: bnel        $v1, $v0, L_8022D2B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D2A4: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_8022D2B4;
    }
    goto skip_0;
    // 0x8022D2A4: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x8022D2A8: jal         0x8005044C
    // 0x8022D2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022D2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D2B0: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_8022D2B4:
    // 0x8022D2B4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D2B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D2BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D2C0: jr          $ra
    // 0x8022D2C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D2C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
