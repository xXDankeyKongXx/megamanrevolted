#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023BCD8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BCD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BCDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BCE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BCE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BCE8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023BCEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BCF0: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x8023BCF4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023BCF8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023BCFC: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8023BD00: beq         $a0, $zero, L_8023BD6C
    if (ctx->r4 == 0) {
        // 0x8023BD04: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_8023BD6C;
    }
    // 0x8023BD04: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8023BD08: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023BD0C: beql        $v0, $zero, L_8023BD58
    if (ctx->r2 == 0) {
        // 0x8023BD10: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023BD58;
    }
    goto skip_0;
    // 0x8023BD10: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8023BD14: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023BD18: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023BD1C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023BD20: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023BD24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023BD28: bgtz        $v0, L_8023BD40
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023BD2C: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8023BD40;
    }
    // 0x8023BD2C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8023BD30: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BD34: andi        $v0, $v0, 0xFF1D
    ctx->r2 = ctx->r2 & 0XFF1D;
    // 0x8023BD38: ori         $v0, $v0, 0x201
    ctx->r2 = ctx->r2 | 0X201;
    // 0x8023BD3C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023BD40:
    // 0x8023BD40: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023BD44: jal         0x8002A33C
    // 0x8023BD48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023BD48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023BD4C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023BD50: j           L_8023BD60
    // 0x8023BD54: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8023BD60;
    // 0x8023BD54: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023BD58:
    // 0x8023BD58: jal         0x8002A33C
    // 0x8023BD5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023BD5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8023BD60:
    // 0x8023BD60: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BD64: j           L_8023BD74
    // 0x8023BD68: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_8023BD74;
    // 0x8023BD68: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_8023BD6C:
    // 0x8023BD6C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BD70: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_8023BD74:
    // 0x8023BD74: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023BD78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BD7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BD80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BD84: jr          $ra
    // 0x8023BD88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BD88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232374_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232374: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023237C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232380: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232384: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232388: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023238C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232390: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232394: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232398: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023239C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802323A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802323A4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802323A8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802323AC: jal         0x80233298
    // 0x802323B0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80233298_ovl10(rdram, ctx);
        goto after_0;
    // 0x802323B0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802323B4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802323B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802323BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802323C0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802323C4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802323C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802323CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802323D0: jal         0x8004F820
    // 0x802323D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802323D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802323D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802323DC: bgez        $v0, L_8023240C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802323E0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8023240C;
    }
    // 0x802323E0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802323E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802323E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802323EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802323F0: jal         0x8004F820
    // 0x802323F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802323F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802323F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802323FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232400: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232404: j           L_80232428
    // 0x80232408: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80232428;
    // 0x80232408: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8023240C:
    // 0x8023240C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232410: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232414: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232418: jal         0x8004F820
    // 0x8023241C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8023241C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80232420: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232424: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80232428:
    // 0x80232428: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023242C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80232430: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80232434: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232438: jal         0x800610AC
    // 0x8023243C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8023243C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80232440: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232444: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232448: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023244C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232450: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232454: jr          $ra
    // 0x80232458: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232458: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228330_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022833C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228340: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228344: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80228348: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022834C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228350: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80228354: beq         $v0, $zero, L_802284A0
    if (ctx->r2 == 0) {
        // 0x80228358: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802284A0;
    }
    // 0x80228358: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022835C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228360: addu        $at, $at, $v0
    gpr jr_addend_80228368 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228364: lw          $v0, 0x2B78($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B78);
    // 0x80228368: jr          $v0
    // 0x8022836C: nop

    switch (jr_addend_80228368 >> 2) {
        case 0: goto L_80228370; break;
        case 1: goto L_802283A8; break;
        case 2: goto L_802283D8; break;
        case 3: goto L_80228414; break;
        case 4: goto L_80228448; break;
        case 5: goto L_802284A0; break;
        default: switch_error(__func__, 0x80228368, 0x80252B78);
    }
    // 0x8022836C: nop

L_80228370:
    // 0x80228370: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80228374: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x80228378: lui         $v0, 0x3F8
    ctx->r2 = S32(0X3F8 << 16);
    // 0x8022837C: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80228380: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228384: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x80228388: lui         $v0, 0x17EA
    ctx->r2 = S32(0X17EA << 16);
    // 0x8022838C: jal         0x8004DD04
    // 0x80228390: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80228390: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    after_0:
    // 0x80228394: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228398: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x8022839C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283A0: j           L_802283C0
    // 0x802283A4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802283C0;
    // 0x802283A4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_802283A8:
    // 0x802283A8: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x802283AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802283B0: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802283B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802283B8: bne         $v0, $zero, L_802284A0
    if (ctx->r2 != 0) {
        // 0x802283BC: nop
    
            goto L_802284A0;
    }
    // 0x802283BC: nop

L_802283C0:
    // 0x802283C0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802283C4: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x802283C8: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x802283CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802283D0: j           L_802284A0
    // 0x802283D4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_802284A0;
    // 0x802283D4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_802283D8:
    // 0x802283D8: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x802283DC: addiu       $v1, $zero, 0x7C
    ctx->r3 = ADD32(0, 0X7C);
    // 0x802283E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802283E4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802283E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802283EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802283F0: beq         $v0, $v1, L_80228400
    if (ctx->r2 == ctx->r3) {
        // 0x802283F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228400;
    }
    // 0x802283F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802283F8: j           L_80228494
    // 0x802283FC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
        goto L_80228494;
    // 0x802283FC: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
L_80228400:
    // 0x80228400: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228404: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228408: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022840C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228410: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228414:
    // 0x80228414: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228418: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x8022841C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228420: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228424: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228428: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022842C: bne         $v0, $v1, L_802284A0
    if (ctx->r2 != ctx->r3) {
        // 0x80228430: nop
    
            goto L_802284A0;
    }
    // 0x80228430: nop

    // 0x80228434: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228438: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022843C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80228440: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228444: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228448:
    // 0x80228448: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022844C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80228450: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228454: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228458: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022845C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228460: bne         $v0, $v1, L_80228490
    if (ctx->r2 != ctx->r3) {
        // 0x80228464: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228490;
    }
    // 0x80228464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228468: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022846C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80228470: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80228474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228478: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022847C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228480: jal         0x8022A350
    // 0x80228484: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_8022A350_ovl10(rdram, ctx);
        goto after_1;
    // 0x80228484: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_1:
    // 0x80228488: j           L_802284A0
    // 0x8022848C: nop

        goto L_802284A0;
    // 0x8022848C: nop

L_80228490:
    // 0x80228490: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_80228494:
    // 0x80228494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228498: jal         0x8004DB18
    // 0x8022849C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DB18_28F18(rdram, ctx);
        goto after_2;
    // 0x8022849C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_802284A0:
    // 0x802284A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802284A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802284A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802284AC: jr          $ra
    // 0x802284B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802284B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D0B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D0B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D0BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D0C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D0C8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023D0CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023D0D0: jal         0x8004DA90
    // 0x8023D0D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023D0D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8023D0D8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023D0DC: bne         $v0, $zero, L_8023D0F4
    if (ctx->r2 != 0) {
        // 0x8023D0E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D0F4;
    }
    // 0x8023D0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D0E4: jal         0x8005044C
    // 0x8023D0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023D0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023D0EC: j           L_8023D104
    // 0x8023D0F0: nop

        goto L_8023D104;
    // 0x8023D0F0: nop

L_8023D0F4:
    // 0x8023D0F4: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8023D0F8: jal         0x80050294
    // 0x8023D0FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023D0FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023D100: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8023D104:
    // 0x8023D104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D10C: jr          $ra
    // 0x8023D110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023D114: nop

    // 0x8023D118: nop

    // 0x8023D11C: nop

;}
RECOMP_FUNC void func_8023BAD0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BAD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BAD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BAD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023BADC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BAE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BAE4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BAE8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023BAEC: beq         $v0, $zero, L_8023BAFC
    if (ctx->r2 == 0) {
        // 0x8023BAF0: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_8023BAFC;
    }
    // 0x8023BAF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BAF4: jal         0x8023BCD8
    // 0x8023BAF8: nop

    func_8023BCD8_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023BAF8: nop

    after_0:
L_8023BAFC:
    // 0x8023BAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BB00: jal         0x8023BD8C
    // 0x8023BB04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023BD8C_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023BB04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023BB08: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BB0C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023BB10: bne         $v0, $zero, L_8023BB38
    if (ctx->r2 != 0) {
        // 0x8023BB14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BB38;
    }
    // 0x8023BB14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BB18: jal         0x8023BFF0
    // 0x8023BB1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023BFF0_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023BB1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8023BB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BB24: jal         0x8023C334
    // 0x8023BB28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023C334_ovl10(rdram, ctx);
        goto after_3;
    // 0x8023BB28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023BB2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BB30: jal         0x8023C45C
    // 0x8023BB34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023C45C_ovl10(rdram, ctx);
        goto after_4;
    // 0x8023BB34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
L_8023BB38:
    // 0x8023BB38: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023BB3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BB40: beq         $v1, $v0, L_8023BB9C
    if (ctx->r3 == ctx->r2) {
        // 0x8023BB44: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023BB9C;
    }
    // 0x8023BB44: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023BB48: beql        $v0, $zero, L_8023BB60
    if (ctx->r2 == 0) {
        // 0x8023BB4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BB60;
    }
    goto skip_0;
    // 0x8023BB4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023BB50: beq         $v1, $zero, L_8023BB70
    if (ctx->r3 == 0) {
        // 0x8023BB54: nop
    
            goto L_8023BB70;
    }
    // 0x8023BB54: nop

    // 0x8023BB58: j           L_8023BBF8
    // 0x8023BB5C: nop

        goto L_8023BBF8;
    // 0x8023BB5C: nop

L_8023BB60:
    // 0x8023BB60: beq         $v1, $v0, L_8023BBE8
    if (ctx->r3 == ctx->r2) {
        // 0x8023BB64: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023BBE8;
    }
    // 0x8023BB64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BB68: j           L_8023BBF8
    // 0x8023BB6C: nop

        goto L_8023BBF8;
    // 0x8023BB6C: nop

L_8023BB70:
    // 0x8023BB70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BB74: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023BB78: beq         $v0, $zero, L_8023BB84
    if (ctx->r2 == 0) {
        // 0x8023BB7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BB84;
    }
    // 0x8023BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BB80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023BB84:
    // 0x8023BB84: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BB88: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023BB8C: beq         $v0, $zero, L_8023BBF8
    if (ctx->r2 == 0) {
        // 0x8023BB90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BBF8;
    }
    // 0x8023BB90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BB94: j           L_8023BBF8
    // 0x8023BB98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023BBF8;
    // 0x8023BB98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023BB9C:
    // 0x8023BB9C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023BBA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BBA4: bne         $v1, $v0, L_8023BBD0
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBA8: nop
    
            goto L_8023BBD0;
    }
    // 0x8023BBA8: nop

    // 0x8023BBAC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BBB0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023BBB4: beq         $v0, $zero, L_8023BBCC
    if (ctx->r2 == 0) {
        // 0x8023BBB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BBCC;
    }
    // 0x8023BBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BBBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023BBC0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BBC4: j           L_8023BBD0
    // 0x8023BBC8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_8023BBD0;
    // 0x8023BBC8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8023BBCC:
    // 0x8023BBCC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8023BBD0:
    // 0x8023BBD0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BBD4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023BBD8: beq         $v0, $zero, L_8023BBF8
    if (ctx->r2 == 0) {
        // 0x8023BBDC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BBF8;
    }
    // 0x8023BBDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BBE0: j           L_8023BBF8
    // 0x8023BBE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023BBF8;
    // 0x8023BBE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023BBE8:
    // 0x8023BBE8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023BBEC: bne         $v1, $v0, L_8023BBF8
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BBF8;
    }
    // 0x8023BBF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BBF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023BBF8:
    // 0x8023BBF8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023BBFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BC00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023BC04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BC08: lw          $v0, 0x17AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17AC);
    // 0x8023BC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023BC10: jalr        $v0
    // 0x8023BC14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023BC14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023BC18: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BC1C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8023BC20: beq         $v0, $zero, L_8023BCC4
    if (ctx->r2 == 0) {
        // 0x8023BC24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BCC4;
    }
    // 0x8023BC24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BC28: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023BC2C: beq         $v1, $v0, L_8023BC74
    if (ctx->r3 == ctx->r2) {
        // 0x8023BC30: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023BC74;
    }
    // 0x8023BC30: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023BC34: beql        $v0, $zero, L_8023BC4C
    if (ctx->r2 == 0) {
        // 0x8023BC38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BC4C;
    }
    goto skip_1;
    // 0x8023BC38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8023BC3C: beq         $v1, $zero, L_8023BC64
    if (ctx->r3 == 0) {
        // 0x8023BC40: andi        $v0, $a0, 0x200
        ctx->r2 = ctx->r4 & 0X200;
            goto L_8023BC64;
    }
    // 0x8023BC40: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x8023BC44: j           L_8023BCB8
    // 0x8023BC48: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8023BCB8;
    // 0x8023BC48: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023BC4C:
    // 0x8023BC4C: beq         $v1, $v0, L_8023BC8C
    if (ctx->r3 == ctx->r2) {
        // 0x8023BC50: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BC8C;
    }
    // 0x8023BC50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC54: beq         $v1, $v0, L_8023BCAC
    if (ctx->r3 == ctx->r2) {
        // 0x8023BC58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BCAC;
    }
    // 0x8023BC58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BC5C: j           L_8023BCB8
    // 0x8023BC60: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8023BCB8;
    // 0x8023BC60: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023BC64:
    // 0x8023BC64: bne         $v0, $zero, L_8023BC98
    if (ctx->r2 != 0) {
        // 0x8023BC68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BC98;
    }
    // 0x8023BC68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC6C: j           L_8023BCA4
    // 0x8023BC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023BCA4;
    // 0x8023BC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BC74:
    // 0x8023BC74: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x8023BC78: bne         $v0, $zero, L_8023BC98
    if (ctx->r2 != 0) {
        // 0x8023BC7C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BC98;
    }
    // 0x8023BC7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BC84: j           L_8023BCB4
    // 0x8023BC88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023BCB4;
    // 0x8023BC88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023BC8C:
    // 0x8023BC8C: andi        $v0, $a0, 0x200
    ctx->r2 = ctx->r4 & 0X200;
    // 0x8023BC90: beq         $v0, $zero, L_8023BCA0
    if (ctx->r2 == 0) {
        // 0x8023BC94: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BCA0;
    }
    // 0x8023BC94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023BC98:
    // 0x8023BC98: j           L_8023BCB4
    // 0x8023BC9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023BCB4;
    // 0x8023BC9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023BCA0:
    // 0x8023BCA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BCA4:
    // 0x8023BCA4: j           L_8023BCB4
    // 0x8023BCA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023BCB4;
    // 0x8023BCA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023BCAC:
    // 0x8023BCAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BCB0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023BCB4:
    // 0x8023BCB4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023BCB8:
    // 0x8023BCB8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023BCBC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023BCC0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023BCC4:
    // 0x8023BCC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BCC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BCCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BCD0: jr          $ra
    // 0x8023BCD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BCD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238008_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238008: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023800C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238014: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80238018: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023801C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80238020: beq         $v1, $zero, L_8023803C
    if (ctx->r3 == 0) {
        // 0x80238024: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8023803C;
    }
    // 0x80238024: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80238028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023802C: beq         $v1, $v0, L_8023807C
    if (ctx->r3 == ctx->r2) {
        // 0x80238030: nop
    
            goto L_8023807C;
    }
    // 0x80238030: nop

    // 0x80238034: j           L_80238208
    // 0x80238038: nop

        goto L_80238208;
    // 0x80238038: nop

L_8023803C:
    // 0x8023803C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238040: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80238044: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80238048: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023804C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238050: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238054: lhu         $v0, 0x1638($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1638);
    // 0x80238058: addiu       $a0, $s0, 0x32C
    ctx->r4 = ADD32(ctx->r16, 0X32C);
    // 0x8023805C: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80238060: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238064: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80238068: jal         0x800540B4
    // 0x8023806C: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x8023806C: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80238070: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x80238074: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80238078: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_8023807C:
    // 0x8023807C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80238080: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80238084: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80238088: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023808C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238090: mflo        $v0
    ctx->r2 = lo;
    // 0x80238094: lh          $a0, 0x6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6);
    // 0x80238098: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8023809C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802380A0: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802380A4: mflo        $v1
    ctx->r3 = lo;
    // 0x802380A8: lui         $a0, 0x1F
    ctx->r4 = S32(0X1F << 16);
    // 0x802380AC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x802380B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802380B4: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802380B8: bnel        $a0, $zero, L_80238170
    if (ctx->r4 != 0) {
        // 0x802380BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80238170;
    }
    goto skip_0;
    // 0x802380BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x802380C0: jal         0x80238C08
    // 0x802380C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238C08_ovl10(rdram, ctx);
        goto after_1;
    // 0x802380C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802380C8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x802380CC: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x802380D0: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x802380D4: sw          $a0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r4;
    // 0x802380D8: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x802380DC: sb          $v1, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r3;
    // 0x802380E0: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x802380E4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802380E8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802380EC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802380F0: lb          $a2, 0xC($a0)
    ctx->r6 = MEM_B(ctx->r4, 0XC);
    // 0x802380F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802380F8: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x802380FC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80238100: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80238104: lw          $a0, 0x1624($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1624);
    // 0x80238108: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023810C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238110: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80238114: sw          $a0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r4;
    // 0x80238118: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x8023811C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80238120: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x80238124: sh          $v1, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r3;
    // 0x80238128: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x8023812C: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x80238130: lb          $v1, 0x4A($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4A);
    // 0x80238134: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238138: beq         $v1, $v0, L_8023815C
    if (ctx->r3 == ctx->r2) {
        // 0x8023813C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8023815C;
    }
    // 0x8023813C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80238140: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238144: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238148: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023814C: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80238150: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80238154: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80238158: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023815C:
    // 0x8023815C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80238160: sb          $a0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r4;
    // 0x80238164: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x80238168: j           L_80238190
    // 0x8023816C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80238190;
    // 0x8023816C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80238170:
    // 0x80238170: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80238174: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80238178: jal         0x8004F820
    // 0x8023817C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023817C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80238180: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80238184: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238188: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023818C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80238190:
    // 0x80238190: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238194: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80238198: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023819C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802381A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802381A4: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x802381A8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802381AC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802381B0: beql        $v1, $zero, L_802381C8
    if (ctx->r3 == 0) {
        // 0x802381B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802381C8;
    }
    goto skip_1;
    // 0x802381B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x802381B8: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x802381BC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802381C0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802381C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802381C8:
    // 0x802381C8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802381CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802381D0: jal         0x8004DA90
    // 0x802381D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802381D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802381D8: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x802381DC: bne         $v0, $zero, L_80238208
    if (ctx->r2 != 0) {
        // 0x802381E0: nop
    
            goto L_80238208;
    }
    // 0x802381E0: nop

    // 0x802381E4: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x802381E8: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x802381EC: beq         $v0, $zero, L_80238208
    if (ctx->r2 == 0) {
        // 0x802381F0: lui         $v0, 0x12
        ctx->r2 = S32(0X12 << 16);
            goto L_80238208;
    }
    // 0x802381F0: lui         $v0, 0x12
    ctx->r2 = S32(0X12 << 16);
    // 0x802381F4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802381F8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802381FC: bne         $v0, $zero, L_80238208
    if (ctx->r2 != 0) {
        // 0x80238200: ori         $v0, $a0, 0x21
        ctx->r2 = ctx->r4 | 0X21;
            goto L_80238208;
    }
    // 0x80238200: ori         $v0, $a0, 0x21
    ctx->r2 = ctx->r4 | 0X21;
    // 0x80238204: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80238208:
    // 0x80238208: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023820C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238210: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238214: jr          $ra
    // 0x80238218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802316A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802316A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802316AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802316B0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802316B4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802316B8: jal         0x8004FA7C
    // 0x802316BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802316BC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802316C0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802316C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802316C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802316CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316D0: bne         $v0, $zero, L_80231734
    if (ctx->r2 != 0) {
        // 0x802316D4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231734;
    }
    // 0x802316D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802316D8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x802316DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802316E0: beq         $v1, $zero, L_80231724
    if (ctx->r3 == 0) {
        // 0x802316E4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80231724;
    }
    // 0x802316E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802316E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802316EC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802316F0: jal         0x8009A3B4
    // 0x802316F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802316F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802316F8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802316FC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231700: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80231704: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80231708: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023170C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231710: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231714: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231718: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023171C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80231720: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80231724:
    // 0x80231724: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80231728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023172C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231730: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80231734:
    // 0x80231734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231738: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023173C: jr          $ra
    // 0x80231740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E2C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E2C: jr          $ra
    // 0x80225E30: nop

    TRACE_RETURN()
    return;
    // 0x80225E30: nop

;}
RECOMP_FUNC void func_80238B5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238B5C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80238B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238B64: beq         $v1, $v0, L_80238BC0
    if (ctx->r3 == ctx->r2) {
        // 0x80238B68: addiu       $a1, $a0, 0x308
        ctx->r5 = ADD32(ctx->r4, 0X308);
            goto L_80238BC0;
    }
    // 0x80238B68: addiu       $a1, $a0, 0x308
    ctx->r5 = ADD32(ctx->r4, 0X308);
    // 0x80238B6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80238B70: beql        $v0, $zero, L_80238B88
    if (ctx->r2 == 0) {
        // 0x80238B74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238B88;
    }
    goto skip_0;
    // 0x80238B74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80238B78: beq         $v1, $zero, L_80238B98
    if (ctx->r3 == 0) {
        // 0x80238B7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80238B98;
    }
    // 0x80238B7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238B80: j           L_80238C00
    // 0x80238B84: nop

        goto L_80238C00;
    // 0x80238B84: nop

L_80238B88:
    // 0x80238B88: beq         $v1, $v0, L_80238BDC
    if (ctx->r3 == ctx->r2) {
        // 0x80238B8C: nop
    
            goto L_80238BDC;
    }
    // 0x80238B8C: nop

    // 0x80238B90: j           L_80238C00
    // 0x80238B94: nop

        goto L_80238C00;
    // 0x80238B94: nop

L_80238B98:
    // 0x80238B98: lhu         $v1, 0x308($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X308);
    // 0x80238B9C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80238BA0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238BA4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80238BA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238BAC: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80238BB0: sh          $v0, 0x30C($a0)
    MEM_H(0X30C, ctx->r4) = ctx->r2;
    // 0x80238BB4: sh          $zero, 0x310($a0)
    MEM_H(0X310, ctx->r4) = 0;
    // 0x80238BB8: andi        $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 & 0XFEFF;
    // 0x80238BBC: sh          $v1, 0x308($a0)
    MEM_H(0X308, ctx->r4) = ctx->r3;
L_80238BC0:
    // 0x80238BC0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80238BC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238BC8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80238BCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238BD0: bgez        $v0, L_80238C00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238BD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238C00;
    }
    // 0x80238BD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238BD8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80238BDC:
    // 0x80238BDC: lw          $v0, 0x34($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X34);
    // 0x80238BE0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80238BE4: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80238BE8: andi        $v0, $v0, 0x4200
    ctx->r2 = ctx->r2 & 0X4200;
    // 0x80238BEC: beq         $v0, $v1, L_80238C00
    if (ctx->r2 == ctx->r3) {
        // 0x80238BF0: nop
    
            goto L_80238C00;
    }
    // 0x80238BF0: nop

    // 0x80238BF4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80238BF8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80238BFC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80238C00:
    // 0x80238C00: jr          $ra
    // 0x80238C04: nop

    TRACE_RETURN()
    return;
    // 0x80238C04: nop

;}
RECOMP_FUNC void func_8024694C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024694C: jr          $ra
    // 0x80246950: nop

    TRACE_RETURN()
    return;
    // 0x80246950: nop

;}
RECOMP_FUNC void func_8023473C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023473C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234744: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234748: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8023474C: bne         $a1, $zero, L_8023477C
    if (ctx->r5 != 0) {
        // 0x80234750: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8023477C;
    }
    // 0x80234750: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x80234754: jal         0x800A3450
    // 0x80234758: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80234758: nop

    after_0:
    // 0x8023475C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80234760: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80234764: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234768: mflo        $v0
    ctx->r2 = lo;
    // 0x8023476C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234770: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80234774: j           L_802347A0
    // 0x80234778: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_802347A0;
    // 0x80234778: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8023477C:
    // 0x8023477C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80234780: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80234784: bnel        $v0, $zero, L_8023478C
    if (ctx->r2 != 0) {
        // 0x80234788: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8023478C;
    }
    goto skip_0;
    // 0x80234788: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8023478C:
    // 0x8023478C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x80234790: beq         $v0, $zero, L_802347A0
    if (ctx->r2 == 0) {
        // 0x80234794: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802347A0;
    }
    // 0x80234794: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80234798: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023479C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_802347A0:
    // 0x802347A0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x802347A4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x802347A8: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x802347AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802347B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802347B4: jr          $ra
    // 0x802347B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802347B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D460_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D46C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023D470: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D474: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023D478: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D47C: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023D480: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023D484: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023D488: bne         $v1, $zero, L_8023D4A0
    if (ctx->r3 != 0) {
        // 0x8023D48C: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8023D4A0;
    }
    // 0x8023D48C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023D490: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023D494: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023D498: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x8023D49C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023D4A0:
    // 0x8023D4A0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023D4A4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D4A8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023D4AC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023D4B0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8023D4B4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023D4B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D4BC: bne         $v1, $v0, L_8023D4D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023D4C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D4D4;
    }
    // 0x8023D4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D4C4: jal         0x8004D5FC
    // 0x8023D4C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8023D4C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023D4CC: j           L_8023D4E0
    // 0x8023D4D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_8023D4E0;
    // 0x8023D4D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8023D4D4:
    // 0x8023D4D4: jal         0x8004D5D4
    // 0x8023D4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023D4D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8023D4DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8023D4E0:
    // 0x8023D4E0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023D4E4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023D4E8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023D4EC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023D4F0: addiu       $v0, $zero, 0x19E
    ctx->r2 = ADD32(0, 0X19E);
    // 0x8023D4F4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8023D4F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023D4FC: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8023D500: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
L_8023D504:
    // 0x8023D504: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8023D508: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023D50C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023D510: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8023D514: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8023D518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D51C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D520: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8023D524: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x8023D528: bne         $v0, $zero, L_8023D504
    if (ctx->r2 != 0) {
        // 0x8023D52C: sw          $zero, 0x14($v1)
        MEM_W(0X14, ctx->r3) = 0;
            goto L_8023D504;
    }
    // 0x8023D52C: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x8023D530: addiu       $a0, $s1, 0xA0
    ctx->r4 = ADD32(ctx->r17, 0XA0);
    // 0x8023D534: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023D538: jal         0x800540BC
    // 0x8023D53C: addiu       $a2, $zero, -0x1F4
    ctx->r6 = ADD32(0, -0X1F4);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8023D53C: addiu       $a2, $zero, -0x1F4
    ctx->r6 = ADD32(0, -0X1F4);
    after_2:
    // 0x8023D540: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023D544: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023D548: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023D54C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D550: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D554: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023D558: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D55C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8023D560: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D564: addiu       $v0, $v0, 0x1840
    ctx->r2 = ADD32(ctx->r2, 0X1840);
    // 0x8023D568: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023D56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D570: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8023D574: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8023D578: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8023D57C: beq         $a0, $v0, L_8023D5B0
    if (ctx->r4 == ctx->r2) {
        // 0x8023D580: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8023D5B0;
    }
    // 0x8023D580: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8023D584: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023D588: beql        $v0, $zero, L_8023D5A0
    if (ctx->r2 == 0) {
        // 0x8023D58C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023D5A0;
    }
    goto skip_0;
    // 0x8023D58C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023D590: beq         $a0, $zero, L_8023D5B4
    if (ctx->r4 == 0) {
        // 0x8023D594: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D5B4;
    }
    // 0x8023D594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D598: j           L_8023D5C4
    // 0x8023D59C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023D5C4;
    // 0x8023D59C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023D5A0:
    // 0x8023D5A0: beq         $a0, $v0, L_8023D5B4
    if (ctx->r4 == ctx->r2) {
        // 0x8023D5A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023D5B4;
    }
    // 0x8023D5A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023D5A8: j           L_8023D5C4
    // 0x8023D5AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023D5C4;
    // 0x8023D5AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023D5B0:
    // 0x8023D5B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023D5B4:
    // 0x8023D5B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023D5B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023D5BC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023D5C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023D5C4:
    // 0x8023D5C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D5C8: jal         0x80050294
    // 0x8023D5CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023D5CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8023D5D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023D5D4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8023D5D8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_8023D5DC:
    // 0x8023D5DC: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8023D5E0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023D5E4: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x8023D5E8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023D5EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023D5F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D5F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D5F8: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8023D5FC: bne         $v0, $zero, L_8023D5DC
    if (ctx->r2 != 0) {
        // 0x8023D600: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_8023D5DC;
    }
    // 0x8023D600: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023D604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D608: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8023D60C: sb          $v0, 0xED($s1)
    MEM_B(0XED, ctx->r17) = ctx->r2;
    // 0x8023D610: sb          $v0, 0xEE($s1)
    MEM_B(0XEE, ctx->r17) = ctx->r2;
    // 0x8023D614: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023D618: sb          $zero, 0xEB($s1)
    MEM_B(0XEB, ctx->r17) = 0;
    // 0x8023D61C: sb          $zero, 0xEA($s1)
    MEM_B(0XEA, ctx->r17) = 0;
    // 0x8023D620: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D624: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023D628: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D62C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D630: jr          $ra
    // 0x8023D634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C06C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C070: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C074: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C07C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C080: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C084: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C088: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C08C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C090: addiu       $s2, $zero, 0x50
    ctx->r18 = ADD32(0, 0X50);
    // 0x8022C094: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C098: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x8022C09C: beq         $v1, $s2, L_8022C0BC
    if (ctx->r3 == ctx->r18) {
        // 0x8022C0A0: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022C0BC;
    }
    // 0x8022C0A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C0A4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C0A8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C0AC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C0B0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022C0B4: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x8022C0B8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022C0BC:
    // 0x8022C0BC: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C0C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C0C8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C0CC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022C0D0: jal         0x8004D5D4
    // 0x8022C0D4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C0D4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C0D8: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022C0DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C0E0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022C0E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C0E8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C0EC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C0F0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C0F4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022C0F8: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8022C0FC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022C100: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022C104: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022C108: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022C10C: jal         0x800540BC
    // 0x8022C110: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022C110: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    after_1:
    // 0x8022C114: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C118: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022C11C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022C120: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x8022C124: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C128: sw          $v1, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r3;
    // 0x8022C12C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C130: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C134: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C138: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C13C: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022C140: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x8022C144: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C148: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C14C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022C150: beq         $v1, $s2, L_8022C16C
    if (ctx->r3 == ctx->r18) {
        // 0x8022C154: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_8022C16C;
    }
    // 0x8022C154: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022C158: jal         0x8003E934
    // 0x8022C15C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022C15C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C160: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C164: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C168: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022C16C:
    // 0x8022C16C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C170: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C174: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022C178: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x8022C17C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C180: beq         $v1, $v0, L_8022C1F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C184: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_8022C1F8;
    }
    // 0x8022C184: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8022C188: beql        $v0, $zero, L_8022C1A8
    if (ctx->r2 == 0) {
        // 0x8022C18C: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022C1A8;
    }
    goto skip_0;
    // 0x8022C18C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    skip_0:
    // 0x8022C190: beq         $v1, $zero, L_8022C1D8
    if (ctx->r3 == 0) {
        // 0x8022C194: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022C1D8;
    }
    // 0x8022C194: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C198: beq         $v1, $v0, L_8022C1E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C19C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022C1E8;
    }
    // 0x8022C19C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022C1A0: j           L_8022C28C
    // 0x8022C1A4: nop

        goto L_8022C28C;
    // 0x8022C1A4: nop

L_8022C1A8:
    // 0x8022C1A8: beq         $v1, $v0, L_8022C23C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C1AC: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_8022C23C;
    }
    // 0x8022C1AC: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x8022C1B0: beq         $v0, $zero, L_8022C1C8
    if (ctx->r2 == 0) {
        // 0x8022C1B4: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8022C1C8;
    }
    // 0x8022C1B4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022C1B8: beq         $v1, $v0, L_8022C20C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C1BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C20C;
    }
    // 0x8022C1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1C0: j           L_8022C28C
    // 0x8022C1C4: nop

        goto L_8022C28C;
    // 0x8022C1C4: nop

L_8022C1C8:
    // 0x8022C1C8: beq         $v1, $s2, L_8022C274
    if (ctx->r3 == ctx->r18) {
        // 0x8022C1CC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022C274;
    }
    // 0x8022C1CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022C1D0: j           L_8022C28C
    // 0x8022C1D4: nop

        goto L_8022C28C;
    // 0x8022C1D4: nop

L_8022C1D8:
    // 0x8022C1D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C1DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1E0: j           L_8022C280
    // 0x8022C1E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8022C280;
    // 0x8022C1E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022C1E8:
    // 0x8022C1E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C1EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1F0: j           L_8022C280
    // 0x8022C1F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022C280;
    // 0x8022C1F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022C1F8:
    // 0x8022C1F8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022C1FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C204: j           L_8022C280
    // 0x8022C208: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
        goto L_8022C280;
    // 0x8022C208: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_8022C20C:
    // 0x8022C20C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022C210: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C214: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C21C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C220: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C224: andi        $a3, $a3, 0xFD
    ctx->r7 = ctx->r7 & 0XFD;
    // 0x8022C228: andi        $v1, $v1, 0xFFF9
    ctx->r3 = ctx->r3 & 0XFFF9;
    // 0x8022C22C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022C230: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
    // 0x8022C234: j           L_8022C284
    // 0x8022C238: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
        goto L_8022C284;
    // 0x8022C238: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_8022C23C:
    // 0x8022C23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C244: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C248: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C24C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C250: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022C254: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C258: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022C25C: andi        $a3, $a3, 0xFD
    ctx->r7 = ctx->r7 & 0XFD;
    // 0x8022C260: andi        $v1, $v1, 0xFFF9
    ctx->r3 = ctx->r3 & 0XFFF9;
    // 0x8022C264: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022C268: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
    // 0x8022C26C: j           L_8022C284
    // 0x8022C270: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
        goto L_8022C284;
    // 0x8022C270: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_8022C274:
    // 0x8022C274: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C27C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
L_8022C280:
    // 0x8022C280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022C284:
    // 0x8022C284: jal         0x80050294
    // 0x8022C288: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022C288: nop

    after_3:
L_8022C28C:
    // 0x8022C28C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C290: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022C294: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C298: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C29C: beq         $v1, $zero, L_8022C354
    if (ctx->r3 == 0) {
        // 0x8022C2A0: sb          $v0, 0x3($s0)
        MEM_B(0X3, ctx->r16) = ctx->r2;
            goto L_8022C354;
    }
    // 0x8022C2A0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022C2A4: jal         0x8004EFE4
    // 0x8022C2A8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_4;
    // 0x8022C2A8: nop

    after_4:
    // 0x8022C2AC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C2B0: beq         $v1, $zero, L_8022C354
    if (ctx->r3 == 0) {
        // 0x8022C2B4: sw          $v1, 0x38($s1)
        MEM_W(0X38, ctx->r17) = ctx->r3;
            goto L_8022C354;
    }
    // 0x8022C2B4: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x8022C2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C2BC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C2C0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C2C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C2C8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C2CC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C2D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C2D4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022C2D8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C2DC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C2E0: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8022C2E4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C2E8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C2EC: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022C2F0: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8022C2F4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C2F8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C2FC: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022C300: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C304: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022C308: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C30C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C310: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C314: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022C318: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C31C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022C320: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C324: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022C328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C32C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022C330: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C334: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C338: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8022C33C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C340: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C344: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022C348: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022C34C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C350: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
L_8022C354:
    // 0x8022C354: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C358: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C35C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C360: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C36C: jr          $ra
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802313A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802313A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802313A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802313AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802313B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802313B4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802313B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802313BC: jal         0x8004DA90
    // 0x802313C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802313C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802313C4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x802313C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802313CC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x802313D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802313D4: bne         $v0, $zero, L_8023140C
    if (ctx->r2 != 0) {
        // 0x802313D8: nop
    
            goto L_8023140C;
    }
    // 0x802313D8: nop

    // 0x802313DC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802313E0: beq         $v0, $zero, L_802313F4
    if (ctx->r2 == 0) {
        // 0x802313E4: nop
    
            goto L_802313F4;
    }
    // 0x802313E4: nop

    // 0x802313E8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802313EC: j           L_802313FC
    // 0x802313F0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_802313FC;
    // 0x802313F0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_802313F4:
    // 0x802313F4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802313F8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_802313FC:
    // 0x802313FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231400: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231404: j           L_8023145C
    // 0x80231408: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023145C;
    // 0x80231408: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023140C:
    // 0x8023140C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80231410: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231414: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231418: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023141C: bne         $v0, $zero, L_8023142C
    if (ctx->r2 != 0) {
        // 0x80231420: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023142C;
    }
    // 0x80231420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231424: j           L_8023145C
    // 0x80231428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023145C;
    // 0x80231428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023142C:
    // 0x8023142C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80231430: jal         0x80233334
    // 0x80231434: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231434: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80231438: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023143C: beq         $v0, $zero, L_80231460
    if (ctx->r2 == 0) {
        // 0x80231440: nop
    
            goto L_80231460;
    }
    // 0x80231440: nop

    // 0x80231444: jal         0x80233298
    // 0x80231448: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_2;
    // 0x80231448: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8023144C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231450: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80231454: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231458: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023145C:
    // 0x8023145C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231460:
    // 0x80231460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231464: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231468: jr          $ra
    // 0x8023146C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023146C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024AEF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024AEF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024AEF8: jal         0x8006033C
    // 0x8024AEFC: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8024AEFC: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
    after_0:
    // 0x8024AF00: beq         $v0, $zero, L_8024AFB0
    if (ctx->r2 == 0) {
        // 0x8024AF04: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8024AFB0;
    }
    // 0x8024AF04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024AF08: jal         0x8006033C
    // 0x8024AF0C: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024AF0C: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
    after_1:
    // 0x8024AF10: beq         $v0, $zero, L_8024AFB0
    if (ctx->r2 == 0) {
        // 0x8024AF14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8024AFB0;
    }
    // 0x8024AF14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024AF18: jal         0x8006033C
    // 0x8024AF1C: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8024AF1C: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    after_2:
    // 0x8024AF20: beq         $v0, $zero, L_8024AF38
    if (ctx->r2 == 0) {
        // 0x8024AF24: nop
    
            goto L_8024AF38;
    }
    // 0x8024AF24: nop

    // 0x8024AF28: jal         0x8006033C
    // 0x8024AF2C: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8024AF2C: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    after_3:
    // 0x8024AF30: bne         $v0, $zero, L_8024AF74
    if (ctx->r2 != 0) {
        // 0x8024AF34: nop
    
            goto L_8024AF74;
    }
    // 0x8024AF34: nop

L_8024AF38:
    // 0x8024AF38: jal         0x8006033C
    // 0x8024AF3C: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8024AF3C: addiu       $a0, $zero, 0x575
    ctx->r4 = ADD32(0, 0X575);
    after_4:
    // 0x8024AF40: bne         $v0, $zero, L_8024AF5C
    if (ctx->r2 != 0) {
        // 0x8024AF44: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8024AF5C;
    }
    // 0x8024AF44: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8024AF48: jal         0x8006033C
    // 0x8024AF4C: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8024AF4C: addiu       $a0, $zero, 0x576
    ctx->r4 = ADD32(0, 0X576);
    after_5:
    // 0x8024AF50: bnel        $v0, $zero, L_8024AF5C
    if (ctx->r2 != 0) {
        // 0x8024AF54: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8024AF5C;
    }
    goto skip_0;
    // 0x8024AF54: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    skip_0:
    // 0x8024AF58: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_8024AF5C:
    // 0x8024AF5C: jal         0x80060D38
    // 0x8024AF60: nop

    func_80060D38_3C138(rdram, ctx);
        goto after_6;
    // 0x8024AF60: nop

    after_6:
    // 0x8024AF64: jal         0x8006036C
    // 0x8024AF68: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8024AF68: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_7:
    // 0x8024AF6C: j           L_8024AF80
    // 0x8024AF70: addiu       $a0, $zero, 0x2E6
    ctx->r4 = ADD32(0, 0X2E6);
        goto L_8024AF80;
    // 0x8024AF70: addiu       $a0, $zero, 0x2E6
    ctx->r4 = ADD32(0, 0X2E6);
L_8024AF74:
    // 0x8024AF74: jal         0x80060D38
    // 0x8024AF78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060D38_3C138(rdram, ctx);
        goto after_8;
    // 0x8024AF78: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8024AF7C: addiu       $a0, $zero, 0x2E5
    ctx->r4 = ADD32(0, 0X2E5);
L_8024AF80:
    // 0x8024AF80: jal         0x80060C1C
    // 0x8024AF84: nop

    func_80060C1C_3C01C(rdram, ctx);
        goto after_9;
    // 0x8024AF84: nop

    after_9:
    // 0x8024AF88: jal         0x80060590
    // 0x8024AF8C: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_80060590_3B990(rdram, ctx);
        goto after_10;
    // 0x8024AF8C: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_10:
    // 0x8024AF90: jal         0x80060590
    // 0x8024AF94: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8024AF94: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    after_11:
    // 0x8024AF98: jal         0x8006036C
    // 0x8024AF9C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8024AF9C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_12:
    // 0x8024AFA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024AFA4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024AFA8: sb          $v0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r2;
    // 0x8024AFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024AFB0:
    // 0x8024AFB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024AFB4: jr          $ra
    // 0x8024AFB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024AFB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024AFBC: nop

;}
RECOMP_FUNC void func_80225E34_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E44: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225E48: bne         $v0, $zero, L_80225E6C
    if (ctx->r2 != 0) {
        // 0x80225E4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225E6C;
    }
    // 0x80225E4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225E50: jal         0x800616FC
    // 0x80225E54: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80225E54: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x80225E58: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80225E5C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80225E60: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80225E64: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80225E68: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
L_80225E6C:
    // 0x80225E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E74: jr          $ra
    // 0x80225E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B98_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B98: lw          $a2, 0x2C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X2C);
    // 0x80226B9C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226BA0: lw          $a3, 0x30($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X30);
    // 0x80226BA4: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80226BA8: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x80226BAC: bne         $v0, $zero, L_80226C18
    if (ctx->r2 != 0) {
        // 0x80226BB0: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80226C18;
    }
    // 0x80226BB0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226BB4: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80226BB8: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80226BBC: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80226BC0: addiu       $v0, $zero, 0x2108
    ctx->r2 = ADD32(0, 0X2108);
    // 0x80226BC4: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80226BC8: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x80226BCC: lh          $a0, 0x16($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X16);
    // 0x80226BD0: lh          $a1, 0x18($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X18);
    // 0x80226BD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226BD8: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x80226BDC: sh          $zero, 0xC($a2)
    MEM_H(0XC, ctx->r6) = 0;
    // 0x80226BE0: sb          $v1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r3;
    // 0x80226BE4: sb          $v1, 0xF($a2)
    MEM_B(0XF, ctx->r6) = ctx->r3;
    // 0x80226BE8: sw          $zero, 0x44($a2)
    MEM_W(0X44, ctx->r6) = 0;
    // 0x80226BEC: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x80226BF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BF4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226BF8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80226BFC: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80226C00: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x80226C04: sw          $a1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r5;
    // 0x80226C08: sb          $v1, 0xF($a3)
    MEM_B(0XF, ctx->r7) = ctx->r3;
    // 0x80226C0C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80226C10: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226C14: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
L_80226C18:
    // 0x80226C18: jr          $ra
    // 0x80226C1C: nop

    TRACE_RETURN()
    return;
    // 0x80226C1C: nop

;}
RECOMP_FUNC void func_8022BA4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA5C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022BA60: bne         $v0, $zero, L_8022BAB4
    if (ctx->r2 != 0) {
        // 0x8022BA64: nop
    
            goto L_8022BAB4;
    }
    // 0x8022BA64: nop

    // 0x8022BA68: jal         0x80229F50
    // 0x8022BA6C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022BA6C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x8022BA70: jal         0x8006033C
    // 0x8022BA74: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022BA74: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    after_1:
    // 0x8022BA78: beq         $v0, $zero, L_8022BA90
    if (ctx->r2 == 0) {
        // 0x8022BA7C: nop
    
            goto L_8022BA90;
    }
    // 0x8022BA7C: nop

    // 0x8022BA80: jal         0x8022A170
    // 0x8022BA84: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022A170_ovl10(rdram, ctx);
        goto after_2;
    // 0x8022BA84: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x8022BA88: j           L_8022BA9C
    // 0x8022BA8C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_8022BA9C;
    // 0x8022BA8C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_8022BA90:
    // 0x8022BA90: jal         0x8022A170
    // 0x8022BA94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022BA94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x8022BA98: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8022BA9C:
    // 0x8022BA9C: jal         0x8022A170
    // 0x8022BAA0: nop

    func_8022A170_ovl10(rdram, ctx);
        goto after_4;
    // 0x8022BAA0: nop

    after_4:
    // 0x8022BAA4: jal         0x8006036C
    // 0x8022BAA8: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8022BAA8: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    after_5:
    // 0x8022BAAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BAB0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022BAB4:
    // 0x8022BAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BABC: jr          $ra
    // 0x8022BAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D2B8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D2BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D2C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024D2C8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024D2CC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024D2D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024D2D4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024D2D8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024D2DC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024D2E0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D2E4: beq         $v1, $zero, L_8024D304
    if (ctx->r3 == 0) {
        // 0x8024D2E8: nop
    
            goto L_8024D304;
    }
    // 0x8024D2E8: nop

    // 0x8024D2EC: jal         0x8024D6D4
    // 0x8024D2F0: nop

    func_8024D6D4_ovl10(rdram, ctx);
        goto after_0;
    // 0x8024D2F0: nop

    after_0:
    // 0x8024D2F4: beq         $v0, $zero, L_8024D304
    if (ctx->r2 == 0) {
        // 0x8024D2F8: nop
    
            goto L_8024D304;
    }
    // 0x8024D2F8: nop

    // 0x8024D2FC: jal         0x8004F62C
    // 0x8024D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8024D300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8024D304:
    // 0x8024D304: jal         0x8024D31C
    // 0x8024D308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024D31C_ovl10(rdram, ctx);
        goto after_2;
    // 0x8024D308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024D30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D314: jr          $ra
    // 0x8024D318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231C9C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231CA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231CA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231CA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231CAC: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80231CB0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80231CB4: jal         0x8004FA7C
    // 0x80231CB8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80231CB8: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x80231CBC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80231CC0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80231CC4: bne         $v0, $zero, L_80231D10
    if (ctx->r2 != 0) {
        // 0x80231CC8: nop
    
            goto L_80231D10;
    }
    // 0x80231CC8: nop

    // 0x80231CCC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80231CD0: beq         $v0, $zero, L_80231CE4
    if (ctx->r2 == 0) {
        // 0x80231CD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231CE4;
    }
    // 0x80231CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231CD8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80231CDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231CE0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80231CE4:
    // 0x80231CE4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80231CE8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80231CEC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80231CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231CF4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231CFC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231D00: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80231D04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231D08: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x80231D0C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80231D10:
    // 0x80231D10: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231D14: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80231D18: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231D1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80231D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231D24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231D28: jr          $ra
    // 0x80231D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024B084_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024B088: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024B08C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024B090: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x8024B094: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024B098: jal         0x8002C654
    // 0x8024B09C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8024B09C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024B0A0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024B0A4: beq         $v1, $zero, L_8024B0BC
    if (ctx->r3 == 0) {
        // 0x8024B0A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024B0BC;
    }
    // 0x8024B0A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B0AC: beq         $v1, $v0, L_8024B0DC
    if (ctx->r3 == ctx->r2) {
        // 0x8024B0B0: nop
    
            goto L_8024B0DC;
    }
    // 0x8024B0B0: nop

    // 0x8024B0B4: j           L_8024B180
    // 0x8024B0B8: nop

        goto L_8024B180;
    // 0x8024B0B8: nop

L_8024B0BC:
    // 0x8024B0BC: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8024B0C0: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x8024B0C4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x8024B0C8: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x8024B0CC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024B0D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024B0D4: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x8024B0D8: sb          $a0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r4;
L_8024B0DC:
    // 0x8024B0DC: jal         0x8003ECF0
    // 0x8024B0E0: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_1;
    // 0x8024B0E0: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    after_1:
    // 0x8024B0E4: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8024B0E8: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8024B0EC: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x8024B0F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024B0F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024B0F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024B0FC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8024B100: sw          $v1, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r3;
    // 0x8024B104: lw          $v1, 0x50($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X50);
    // 0x8024B108: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x8024B10C: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x8024B110: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024B114: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x8024B118: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024B11C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8024B120: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8024B124: beq         $v0, $zero, L_8024B150
    if (ctx->r2 == 0) {
        // 0x8024B128: sw          $v1, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r3;
            goto L_8024B150;
    }
    // 0x8024B128: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x8024B12C: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x8024B130: jal         0x800317C0
    // 0x8024B134: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    func_800317C0_CBC0(rdram, ctx);
        goto after_2;
    // 0x8024B134: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    after_2:
    // 0x8024B138: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8024B13C: sh          $s0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r16;
    // 0x8024B140: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8024B144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B148: j           L_8024B180
    // 0x8024B14C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8024B180;
    // 0x8024B14C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8024B150:
    // 0x8024B150: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8024B154: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8024B158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024B15C: jal         0x800317C0
    // 0x8024B160: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x8024B160: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_3:
    // 0x8024B164: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8024B168: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024B16C: jal         0x800319B4
    // 0x8024B170: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8024B170: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_4:
    // 0x8024B174: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8024B178: addiu       $v0, $v0, 0xD
    ctx->r2 = ADD32(ctx->r2, 0XD);
    // 0x8024B17C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8024B180:
    // 0x8024B180: jal         0x8024B338
    // 0x8024B184: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8024B338_ovl10(rdram, ctx);
        goto after_5;
    // 0x8024B184: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8024B188: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024B18C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024B190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B194: jr          $ra
    // 0x8024B198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024B198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246F20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246F24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246F28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246F30: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80246F34: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80246F38: bne         $v0, $zero, L_80246FB8
    if (ctx->r2 != 0) {
        // 0x80246F3C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80246FB8;
    }
    // 0x80246F3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80246F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80246F44: jal         0x8005F6B4
    // 0x80246F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x80246F48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80246F4C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80246F50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246F54: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246F58: sw          $v0, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r2;
    // 0x80246F5C: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80246F60: addiu       $v0, $v0, -0x12C
    ctx->r2 = ADD32(ctx->r2, -0X12C);
    // 0x80246F64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246F68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246F6C: sw          $v0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r2;
    // 0x80246F70: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80246F74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246F78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246F7C: sw          $v0, 0x9E8($at)
    MEM_W(0X9E8, ctx->r1) = ctx->r2;
    // 0x80246F80: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80246F84: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80246F88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246F8C: sw          $v0, 0xA14($at)
    MEM_W(0XA14, ctx->r1) = ctx->r2;
    // 0x80246F90: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    // 0x80246F94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246F98: sw          $v0, 0xA18($at)
    MEM_W(0XA18, ctx->r1) = ctx->r2;
    // 0x80246F9C: addiu       $v1, $v1, 0x600
    ctx->r3 = ADD32(ctx->r3, 0X600);
    // 0x80246FA0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80246FA4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80246FA8: sw          $v1, 0xA10($at)
    MEM_W(0XA10, ctx->r1) = ctx->r3;
    // 0x80246FAC: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80246FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246FB4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80246FB8:
    // 0x80246FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246FBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246FC0: jr          $ra
    // 0x80246FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237548_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237548: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8023754C: beq         $v1, $zero, L_80237568
    if (ctx->r3 == 0) {
        // 0x80237550: addiu       $a1, $a0, 0x308
        ctx->r5 = ADD32(ctx->r4, 0X308);
            goto L_80237568;
    }
    // 0x80237550: addiu       $a1, $a0, 0x308
    ctx->r5 = ADD32(ctx->r4, 0X308);
    // 0x80237554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237558: beq         $v1, $v0, L_80237590
    if (ctx->r3 == ctx->r2) {
        // 0x8023755C: nop
    
            goto L_80237590;
    }
    // 0x8023755C: nop

    // 0x80237560: j           L_802375B4
    // 0x80237564: nop

        goto L_802375B4;
    // 0x80237564: nop

L_80237568:
    // 0x80237568: lhu         $v0, 0x308($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X308);
    // 0x8023756C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237570: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80237574: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80237578: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8023757C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80237580: sh          $v1, 0x30C($a0)
    MEM_H(0X30C, ctx->r4) = ctx->r3;
    // 0x80237584: sh          $zero, 0x310($a0)
    MEM_H(0X310, ctx->r4) = 0;
    // 0x80237588: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8023758C: sh          $v0, 0x308($a0)
    MEM_H(0X308, ctx->r4) = ctx->r2;
L_80237590:
    // 0x80237590: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237594: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237598: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8023759C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802375A0: bgez        $v0, L_802375B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802375A4: nop
    
            goto L_802375B4;
    }
    // 0x802375A4: nop

    // 0x802375A8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802375AC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802375B0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802375B4:
    // 0x802375B4: jr          $ra
    // 0x802375B8: nop

    TRACE_RETURN()
    return;
    // 0x802375B8: nop

;}
RECOMP_FUNC void func_80233BD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233BD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233BDC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80233BE0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233BE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233BE8: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x80233BEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233BF0: blez        $v0, L_80233C28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233BF4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80233C28;
    }
    // 0x80233BF4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233BF8: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x80233BFC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80233C00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233C04: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80233C08: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80233C0C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80233C10: bne         $v1, $zero, L_80233C2C
    if (ctx->r3 != 0) {
        // 0x80233C14: sh          $v0, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r2;
            goto L_80233C2C;
    }
    // 0x80233C14: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80233C18: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80233C1C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80233C20: j           L_80233C2C
    // 0x80233C24: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_80233C2C;
    // 0x80233C24: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80233C28:
    // 0x80233C28: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
L_80233C2C:
    // 0x80233C2C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80233C30: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233C34: bne         $v1, $v0, L_80233C60
    if (ctx->r3 != ctx->r2) {
        // 0x80233C38: nop
    
            goto L_80233C60;
    }
    // 0x80233C38: nop

    // 0x80233C3C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80233C40: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80233C44: bne         $v0, $zero, L_80233C60
    if (ctx->r2 != 0) {
        // 0x80233C48: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_80233C60;
    }
    // 0x80233C48: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80233C4C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80233C50: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80233C54: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80233C58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233C5C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80233C60:
    // 0x80233C60: jal         0x800504EC
    // 0x80233C64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x80233C64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80233C68: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80233C6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80233C70: sh          $v0, -0x3D88($at)
    MEM_H(-0X3D88, ctx->r1) = ctx->r2;
    // 0x80233C74: jal         0x80051248
    // 0x80233C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_1;
    // 0x80233C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80233C7C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233C80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233C84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233C88: jr          $ra
    // 0x80233C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80240D90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240D90: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80240D94: bne         $v0, $zero, L_80240E7C
    if (ctx->r2 != 0) {
        // 0x80240D98: addiu       $a1, $a0, 0x500
        ctx->r5 = ADD32(ctx->r4, 0X500);
            goto L_80240E7C;
    }
    // 0x80240D98: addiu       $a1, $a0, 0x500
    ctx->r5 = ADD32(ctx->r4, 0X500);
    // 0x80240D9C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80240DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240DA4: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80240DA8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80240DAC: beq         $v0, $zero, L_80241144
    if (ctx->r2 == 0) {
        // 0x80240DB0: sh          $zero, 0x504($a0)
        MEM_H(0X504, ctx->r4) = 0;
            goto L_80241144;
    }
    // 0x80240DB0: sh          $zero, 0x504($a0)
    MEM_H(0X504, ctx->r4) = 0;
    // 0x80240DB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240DB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240DBC: addu        $at, $at, $v0
    gpr jr_addend_80240DC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240DC0: lw          $v0, 0x30A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X30A0);
    // 0x80240DC4: jr          $v0
    // 0x80240DC8: nop

    switch (jr_addend_80240DC4 >> 2) {
        case 0: goto L_80240DCC; break;
        case 1: goto L_80240DE4; break;
        case 2: goto L_80240E10; break;
        case 3: goto L_80240E3C; break;
        case 4: goto L_80240E5C; break;
        default: switch_error(__func__, 0x80240DC4, 0x802530A0);
    }
    // 0x80240DC8: nop

L_80240DCC:
    // 0x80240DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240DD0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80240DD4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240DD8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80240DDC: j           L_80241124
    // 0x80240DE0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80241124;
    // 0x80240DE0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80240DE4:
    // 0x80240DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240DE8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80240DEC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240DF0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80240DF4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80240DF8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240DFC: lw          $v1, 0x1A40($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A40);
    // 0x80240E00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240E04: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80240E08: j           L_8024113C
    // 0x80240E0C: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
        goto L_8024113C;
    // 0x80240E0C: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
L_80240E10:
    // 0x80240E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240E14: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80240E18: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240E1C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80240E20: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80240E24: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240E28: lw          $v1, 0x1A40($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A40);
    // 0x80240E2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240E30: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80240E34: j           L_80241138
    // 0x80240E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80241138;
    // 0x80240E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80240E3C:
    // 0x80240E3C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240E40: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80240E44: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80240E48: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240E4C: lw          $v1, 0x1A44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A44);
    // 0x80240E50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80240E54: j           L_80241138
    // 0x80240E58: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
        goto L_80241138;
    // 0x80240E58: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
L_80240E5C:
    // 0x80240E5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240E60: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80240E64: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240E68: lw          $v1, 0x1A48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A48);
    // 0x80240E6C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80240E70: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80240E74: j           L_80241138
    // 0x80240E78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80241138;
    // 0x80240E78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80240E7C:
    // 0x80240E7C: lhu         $v0, 0x504($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X504);
    // 0x80240E80: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80240E84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240E88: sh          $v0, 0x504($a0)
    MEM_H(0X504, ctx->r4) = ctx->r2;
    // 0x80240E8C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80240E90: beq         $v0, $zero, L_80241144
    if (ctx->r2 == 0) {
        // 0x80240E94: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80241144;
    }
    // 0x80240E94: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240E98: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240E9C: addu        $at, $at, $v0
    gpr jr_addend_80240EA4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240EA0: lw          $v0, 0x30B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X30B8);
    // 0x80240EA4: jr          $v0
    // 0x80240EA8: nop

    switch (jr_addend_80240EA4 >> 2) {
        case 0: goto L_80240EAC; break;
        case 1: goto L_80240ED0; break;
        case 2: goto L_80240EF0; break;
        case 3: goto L_80240FB0; break;
        case 4: goto L_80241034; break;
        default: switch_error(__func__, 0x80240EA4, 0x802530B8);
    }
    // 0x80240EA8: nop

L_80240EAC:
    // 0x80240EAC: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80240EB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80240EB4: beq         $v1, $v0, L_80240F74
    if (ctx->r3 == ctx->r2) {
        // 0x80240EB8: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80240F74;
    }
    // 0x80240EB8: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80240EBC: bne         $v1, $v0, L_80241144
    if (ctx->r3 != ctx->r2) {
        // 0x80240EC0: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_80241144;
    }
    // 0x80240EC0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80240EC4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240EC8: j           L_80240F90
    // 0x80240ECC: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
        goto L_80240F90;
    // 0x80240ECC: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
L_80240ED0:
    // 0x80240ED0: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80240ED4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80240ED8: beq         $v1, $v0, L_80240F74
    if (ctx->r3 == ctx->r2) {
        // 0x80240EDC: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80240F74;
    }
    // 0x80240EDC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80240EE0: beq         $v1, $v0, L_80240F84
    if (ctx->r3 == ctx->r2) {
        // 0x80240EE4: nop
    
            goto L_80240F84;
    }
    // 0x80240EE4: nop

    // 0x80240EE8: j           L_80241144
    // 0x80240EEC: nop

        goto L_80241144;
    // 0x80240EEC: nop

L_80240EF0:
    // 0x80240EF0: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80240EF4: addiu       $v0, $zero, 0xC3
    ctx->r2 = ADD32(0, 0XC3);
    // 0x80240EF8: beq         $v1, $v0, L_80240F84
    if (ctx->r3 == ctx->r2) {
        // 0x80240EFC: slti        $v0, $v1, 0xC4
        ctx->r2 = SIGNED(ctx->r3) < 0XC4 ? 1 : 0;
            goto L_80240F84;
    }
    // 0x80240EFC: slti        $v0, $v1, 0xC4
    ctx->r2 = SIGNED(ctx->r3) < 0XC4 ? 1 : 0;
    // 0x80240F00: beq         $v0, $zero, L_80240F3C
    if (ctx->r2 == 0) {
        // 0x80240F04: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_80240F3C;
    }
    // 0x80240F04: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x80240F08: beq         $v1, $v0, L_80240F84
    if (ctx->r3 == ctx->r2) {
        // 0x80240F0C: slti        $v0, $v1, 0x56
        ctx->r2 = SIGNED(ctx->r3) < 0X56 ? 1 : 0;
            goto L_80240F84;
    }
    // 0x80240F0C: slti        $v0, $v1, 0x56
    ctx->r2 = SIGNED(ctx->r3) < 0X56 ? 1 : 0;
    // 0x80240F10: beq         $v0, $zero, L_80240F28
    if (ctx->r2 == 0) {
        // 0x80240F14: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80240F28;
    }
    // 0x80240F14: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80240F18: beq         $v1, $v0, L_80240F74
    if (ctx->r3 == ctx->r2) {
        // 0x80240F1C: nop
    
            goto L_80240F74;
    }
    // 0x80240F1C: nop

    // 0x80240F20: j           L_80241144
    // 0x80240F24: nop

        goto L_80241144;
    // 0x80240F24: nop

L_80240F28:
    // 0x80240F28: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80240F2C: beq         $v1, $v0, L_80240F74
    if (ctx->r3 == ctx->r2) {
        // 0x80240F30: nop
    
            goto L_80240F74;
    }
    // 0x80240F30: nop

    // 0x80240F34: j           L_80241144
    // 0x80240F38: nop

        goto L_80241144;
    // 0x80240F38: nop

L_80240F3C:
    // 0x80240F3C: addiu       $v0, $zero, 0xDD
    ctx->r2 = ADD32(0, 0XDD);
    // 0x80240F40: beq         $v1, $v0, L_80240F9C
    if (ctx->r3 == ctx->r2) {
        // 0x80240F44: slti        $v0, $v1, 0xDE
        ctx->r2 = SIGNED(ctx->r3) < 0XDE ? 1 : 0;
            goto L_80240F9C;
    }
    // 0x80240F44: slti        $v0, $v1, 0xDE
    ctx->r2 = SIGNED(ctx->r3) < 0XDE ? 1 : 0;
    // 0x80240F48: beq         $v0, $zero, L_80240F60
    if (ctx->r2 == 0) {
        // 0x80240F4C: addiu       $v0, $zero, 0xDC
        ctx->r2 = ADD32(0, 0XDC);
            goto L_80240F60;
    }
    // 0x80240F4C: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80240F50: beq         $v1, $v0, L_80240FA8
    if (ctx->r3 == ctx->r2) {
        // 0x80240F54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80240FA8;
    }
    // 0x80240F54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240F58: j           L_80241144
    // 0x80240F5C: nop

        goto L_80241144;
    // 0x80240F5C: nop

L_80240F60:
    // 0x80240F60: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80240F64: beq         $v1, $v0, L_80240FA8
    if (ctx->r3 == ctx->r2) {
        // 0x80240F68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80240FA8;
    }
    // 0x80240F68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240F6C: j           L_80241144
    // 0x80240F70: nop

        goto L_80241144;
    // 0x80240F70: nop

L_80240F74:
    // 0x80240F74: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240F78: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80240F7C: j           L_80241144
    // 0x80240F80: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80241144;
    // 0x80240F80: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80240F84:
    // 0x80240F84: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240F88: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80240F8C: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
L_80240F90:
    // 0x80240F90: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80240F94: j           L_80241144
    // 0x80240F98: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80241144;
    // 0x80240F98: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80240F9C:
    // 0x80240F9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240FA0: j           L_80241144
    // 0x80240FA4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_80241144;
    // 0x80240FA4: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_80240FA8:
    // 0x80240FA8: j           L_80241144
    // 0x80240FAC: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
        goto L_80241144;
    // 0x80240FAC: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_80240FB0:
    // 0x80240FB0: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80240FB4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80240FB8: beq         $v1, $v0, L_80241004
    if (ctx->r3 == ctx->r2) {
        // 0x80240FBC: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80241004;
    }
    // 0x80240FBC: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80240FC0: beq         $v0, $zero, L_80240FD8
    if (ctx->r2 == 0) {
        // 0x80240FC4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80240FD8;
    }
    // 0x80240FC4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80240FC8: beq         $v1, $v0, L_80240FF8
    if (ctx->r3 == ctx->r2) {
        // 0x80240FCC: nop
    
            goto L_80240FF8;
    }
    // 0x80240FCC: nop

    // 0x80240FD0: j           L_80241020
    // 0x80240FD4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80241020;
    // 0x80240FD4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80240FD8:
    // 0x80240FD8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80240FDC: beq         $v1, $v0, L_80240FF8
    if (ctx->r3 == ctx->r2) {
        // 0x80240FE0: nop
    
            goto L_80240FF8;
    }
    // 0x80240FE0: nop

    // 0x80240FE4: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80240FE8: beq         $v1, $v0, L_80241004
    if (ctx->r3 == ctx->r2) {
        // 0x80240FEC: nop
    
            goto L_80241004;
    }
    // 0x80240FEC: nop

    // 0x80240FF0: j           L_80241018
    // 0x80240FF4: nop

        goto L_80241018;
    // 0x80240FF4: nop

L_80240FF8:
    // 0x80240FF8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80240FFC: j           L_80241014
    // 0x80241000: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_80241014;
    // 0x80241000: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_80241004:
    // 0x80241004: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241008: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8024100C: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x80241010: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_80241014:
    // 0x80241014: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80241018:
    // 0x80241018: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8024101C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80241020:
    // 0x80241020: bne         $v1, $v0, L_80241144
    if (ctx->r3 != ctx->r2) {
        // 0x80241024: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80241144;
    }
    // 0x80241024: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80241028: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8024102C: j           L_80241144
    // 0x80241030: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
        goto L_80241144;
    // 0x80241030: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
L_80241034:
    // 0x80241034: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241038: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8024103C: beq         $v1, $v0, L_802410E4
    if (ctx->r3 == ctx->r2) {
        // 0x80241040: slti        $v0, $v1, 0x65
        ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_802410E4;
    }
    // 0x80241040: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x80241044: beq         $v0, $zero, L_80241080
    if (ctx->r2 == 0) {
        // 0x80241048: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80241080;
    }
    // 0x80241048: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8024104C: beq         $v1, $v0, L_802410CC
    if (ctx->r3 == ctx->r2) {
        // 0x80241050: slti        $v0, $v1, 0x24
        ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
            goto L_802410CC;
    }
    // 0x80241050: slti        $v0, $v1, 0x24
    ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x80241054: beq         $v0, $zero, L_8024106C
    if (ctx->r2 == 0) {
        // 0x80241058: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8024106C;
    }
    // 0x80241058: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8024105C: beq         $v1, $v0, L_802410C4
    if (ctx->r3 == ctx->r2) {
        // 0x80241060: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802410C4;
    }
    // 0x80241060: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80241064: j           L_80241118
    // 0x80241068: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
        goto L_80241118;
    // 0x80241068: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
L_8024106C:
    // 0x8024106C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80241070: beq         $v1, $v0, L_802410D8
    if (ctx->r3 == ctx->r2) {
        // 0x80241074: nop
    
            goto L_802410D8;
    }
    // 0x80241074: nop

    // 0x80241078: j           L_80241110
    // 0x8024107C: nop

        goto L_80241110;
    // 0x8024107C: nop

L_80241080:
    // 0x80241080: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80241084: beq         $v1, $v0, L_802410FC
    if (ctx->r3 == ctx->r2) {
        // 0x80241088: slti        $v0, $v1, 0xAB
        ctx->r2 = SIGNED(ctx->r3) < 0XAB ? 1 : 0;
            goto L_802410FC;
    }
    // 0x80241088: slti        $v0, $v1, 0xAB
    ctx->r2 = SIGNED(ctx->r3) < 0XAB ? 1 : 0;
    // 0x8024108C: beq         $v0, $zero, L_802410A4
    if (ctx->r2 == 0) {
        // 0x80241090: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_802410A4;
    }
    // 0x80241090: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80241094: beq         $v1, $v0, L_802410F0
    if (ctx->r3 == ctx->r2) {
        // 0x80241098: nop
    
            goto L_802410F0;
    }
    // 0x80241098: nop

    // 0x8024109C: j           L_80241110
    // 0x802410A0: nop

        goto L_80241110;
    // 0x802410A0: nop

L_802410A4:
    // 0x802410A4: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x802410A8: beq         $v1, $v0, L_802410F0
    if (ctx->r3 == ctx->r2) {
        // 0x802410AC: nop
    
            goto L_802410F0;
    }
    // 0x802410AC: nop

    // 0x802410B0: addiu       $v0, $zero, 0x17E
    ctx->r2 = ADD32(0, 0X17E);
    // 0x802410B4: beq         $v1, $v0, L_802410FC
    if (ctx->r3 == ctx->r2) {
        // 0x802410B8: nop
    
            goto L_802410FC;
    }
    // 0x802410B8: nop

    // 0x802410BC: j           L_80241110
    // 0x802410C0: nop

        goto L_80241110;
    // 0x802410C0: nop

L_802410C4:
    // 0x802410C4: j           L_80241110
    // 0x802410C8: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
        goto L_80241110;
    // 0x802410C8: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
L_802410CC:
    // 0x802410CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802410D0: j           L_80241110
    // 0x802410D4: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
        goto L_80241110;
    // 0x802410D4: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
L_802410D8:
    // 0x802410D8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802410DC: j           L_8024110C
    // 0x802410E0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_8024110C;
    // 0x802410E0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_802410E4:
    // 0x802410E4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802410E8: j           L_80241104
    // 0x802410EC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
        goto L_80241104;
    // 0x802410EC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_802410F0:
    // 0x802410F0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802410F4: j           L_8024110C
    // 0x802410F8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_8024110C;
    // 0x802410F8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_802410FC:
    // 0x802410FC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80241100: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_80241104:
    // 0x80241104: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x80241108: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_8024110C:
    // 0x8024110C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80241110:
    // 0x80241110: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x80241114: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
L_80241118:
    // 0x80241118: bne         $v1, $v0, L_80241144
    if (ctx->r3 != ctx->r2) {
        // 0x8024111C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80241144;
    }
    // 0x8024111C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241120: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80241124:
    // 0x80241124: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80241128: lw          $v1, 0x1A4C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1A4C);
    // 0x8024112C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80241130: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80241134: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80241138:
    // 0x80241138: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
L_8024113C:
    // 0x8024113C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241140: sw          $v1, 0x3524($at)
    MEM_W(0X3524, ctx->r1) = ctx->r3;
L_80241144:
    // 0x80241144: jr          $ra
    // 0x80241148: nop

    TRACE_RETURN()
    return;
    // 0x80241148: nop

;}
RECOMP_FUNC void func_802375F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802375F8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802375FC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237600: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237604: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237608: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023760C: lw          $v0, 0x12C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X12C4);
    // 0x80237610: jalr        $v0
    // 0x80237614: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237614: nop

    after_0:
    // 0x80237618: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023761C: jr          $ra
    // 0x80237620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242D9C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242D9C: jr          $ra
    // 0x80242DA0: nop

    TRACE_RETURN()
    return;
    // 0x80242DA0: nop

;}
RECOMP_FUNC void func_8023821C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023821C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238220: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80238224: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238228: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8023822C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80238230: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80238234: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80238238: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023823C: beq         $v1, $v0, L_80238304
    if (ctx->r3 == ctx->r2) {
        // 0x80238240: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80238304;
    }
    // 0x80238240: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80238244: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80238248: beql        $v0, $zero, L_80238260
    if (ctx->r2 == 0) {
        // 0x8023824C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238260;
    }
    goto skip_0;
    // 0x8023824C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x80238250: beq         $v1, $zero, L_80238278
    if (ctx->r3 == 0) {
        // 0x80238254: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238278;
    }
    // 0x80238254: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238258: j           L_802385A8
    // 0x8023825C: nop

        goto L_802385A8;
    // 0x8023825C: nop

L_80238260:
    // 0x80238260: beq         $v1, $v0, L_80238480
    if (ctx->r3 == ctx->r2) {
        // 0x80238264: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80238480;
    }
    // 0x80238264: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238268: beq         $v1, $v0, L_80238538
    if (ctx->r3 == ctx->r2) {
        // 0x8023826C: nop
    
            goto L_80238538;
    }
    // 0x8023826C: nop

    // 0x80238270: j           L_802385A8
    // 0x80238274: nop

        goto L_802385A8;
    // 0x80238274: nop

L_80238278:
    // 0x80238278: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023827C: lhu         $v1, 0x308($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X308);
    // 0x80238280: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238284: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80238288: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023828C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80238290: lhu         $v0, 0x1638($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1638);
    // 0x80238294: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x80238298: sh          $v1, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r3;
    // 0x8023829C: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x802382A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802382A4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802382A8: beq         $v1, $zero, L_802382F8
    if (ctx->r3 == 0) {
        // 0x802382AC: sh          $v0, 0x4C($s0)
        MEM_H(0X4C, ctx->r16) = ctx->r2;
            goto L_802382F8;
    }
    // 0x802382AC: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x802382B0: lb          $v0, 0x352($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X352);
    // 0x802382B4: lw          $v1, 0x344($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X344);
    // 0x802382B8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802382BC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802382C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802382C4: lb          $v0, 0xC($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XC);
    // 0x802382C8: beq         $v0, $a1, L_802382F8
    if (ctx->r2 == ctx->r5) {
        // 0x802382CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802382F8;
    }
    // 0x802382CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802382D0: lb          $a0, 0x353($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X353);
    // 0x802382D4: lhu         $v1, 0x358($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X358);
    // 0x802382D8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802382DC: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x802382E0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x802382E4: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x802382E8: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x802382EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802382F0: j           L_80238480
    // 0x802382F4: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
        goto L_80238480;
    // 0x802382F4: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
L_802382F8:
    // 0x802382F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802382FC: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80238300: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80238304:
    // 0x80238304: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80238308: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023830C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80238310: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238314: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238318: mflo        $a1
    ctx->r5 = lo;
    // 0x8023831C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80238320: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x80238324: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80238328: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023832C: mflo        $v1
    ctx->r3 = lo;
    // 0x80238330: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x80238334: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80238338: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023833C: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80238340: bne         $v0, $zero, L_80238438
    if (ctx->r2 != 0) {
        // 0x80238344: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80238438;
    }
    // 0x80238344: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80238348: jal         0x80238E44
    // 0x8023834C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238E44_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023834C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80238350: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238354: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238358: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023835C: beq         $v0, $v1, L_80238378
    if (ctx->r2 == ctx->r3) {
        // 0x80238360: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238378;
    }
    // 0x80238360: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238364: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238368: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8023836C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238370: j           L_802383BC
    // 0x80238374: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
        goto L_802383BC;
    // 0x80238374: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
L_80238378:
    // 0x80238378: jal         0x80238C08
    // 0x8023837C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238C08_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023837C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238380: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80238384: lb          $v1, 0x4A($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4A);
    // 0x80238388: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023838C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238390: beq         $v1, $v0, L_802383BC
    if (ctx->r3 == ctx->r2) {
        // 0x80238394: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802383BC;
    }
    // 0x80238394: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238398: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023839C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802383A0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802383A4: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x802383A8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802383AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802383B0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802383B4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802383B8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_802383BC:
    // 0x802383BC: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x802383C0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x802383C4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802383C8: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x802383CC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x802383D0: sb          $v0, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r2;
    // 0x802383D4: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802383D8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802383DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802383E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802383E4: lb          $a1, 0xC($v1)
    ctx->r5 = MEM_B(ctx->r3, 0XC);
    // 0x802383E8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802383EC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x802383F0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802383F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802383F8: lw          $v1, 0x1624($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1624);
    // 0x802383FC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80238400: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238404: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238408: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x8023840C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80238410: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80238414: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x80238418: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    // 0x8023841C: lhu         $v1, 0x6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6);
    // 0x80238420: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x80238424: andi        $a2, $a2, 0x3
    ctx->r6 = ctx->r6 & 0X3;
    // 0x80238428: sb          $a2, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r6;
    // 0x8023842C: sb          $v0, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = ctx->r2;
    // 0x80238430: j           L_80238460
    // 0x80238434: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
        goto L_80238460;
    // 0x80238434: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
L_80238438:
    // 0x80238438: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023843C: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80238440: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80238444: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x80238448: jal         0x8004F820
    // 0x8023844C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023844C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80238450: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80238454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238458: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023845C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80238460:
    // 0x80238460: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238464: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80238468: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023846C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238470: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238474: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x80238478: j           L_802384F8
    // 0x8023847C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
        goto L_802384F8;
    // 0x8023847C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_80238480:
    // 0x80238480: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x80238484: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80238488: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8023848C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238490: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238494: mflo        $a1
    ctx->r5 = lo;
    // 0x80238498: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8023849C: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x802384A0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802384A4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802384A8: mflo        $v0
    ctx->r2 = lo;
    // 0x802384AC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802384B0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802384B4: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802384B8: beq         $v0, $zero, L_802384DC
    if (ctx->r2 == 0) {
        // 0x802384BC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802384DC;
    }
    // 0x802384BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802384C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802384C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802384C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802384CC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802384D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802384D4: j           L_80238538
    // 0x802384D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80238538;
    // 0x802384D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802384DC:
    // 0x802384DC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802384E0: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x802384E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802384E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802384EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802384F0: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x802384F4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_802384F8:
    // 0x802384F8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802384FC: beql        $v1, $zero, L_80238514
    if (ctx->r3 == 0) {
        // 0x80238500: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238514;
    }
    goto skip_1;
    // 0x80238500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80238504: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80238508: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023850C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80238510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238514:
    // 0x80238514: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x80238518: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023851C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80238520: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80238524: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80238528: jal         0x8004DA90
    // 0x8023852C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023852C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_3:
    // 0x80238530: j           L_802385A8
    // 0x80238534: nop

        goto L_802385A8;
    // 0x80238534: nop

L_80238538:
    // 0x80238538: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023853C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238540: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80238544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238548: bgez        $v0, L_802385A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023854C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802385A8;
    }
    // 0x8023854C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238550: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238554: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80238558: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023855C: andi        $v1, $v0, 0xFFDF
    ctx->r3 = ctx->r2 & 0XFFDF;
    // 0x80238560: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80238564: bne         $v0, $zero, L_8023858C
    if (ctx->r2 != 0) {
        // 0x80238568: sh          $v1, 0x0($s1)
        MEM_H(0X0, ctx->r17) = ctx->r3;
            goto L_8023858C;
    }
    // 0x80238568: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023856C: lb          $v0, 0x4A($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4A);
    // 0x80238570: lhu         $a0, 0x50($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X50);
    // 0x80238574: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80238578: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023857C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238580: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x80238584: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80238588: sh          $a0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r4;
L_8023858C:
    // 0x8023858C: jal         0x8023922C
    // 0x80238590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023922C_ovl10(rdram, ctx);
        goto after_4;
    // 0x80238590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80238594: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80238598: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8023859C: sh          $v1, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r3;
    // 0x802385A0: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x802385A4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802385A8:
    // 0x802385A8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802385AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802385B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802385B4: jr          $ra
    // 0x802385B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802385B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023181C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023181C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231820: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231824: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023182C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231830: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231834: lw          $v0, 0x1068($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1068);
    // 0x80231838: jalr        $v0
    // 0x8023183C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023183C: nop

    after_0:
    // 0x80231840: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231844: jr          $ra
    // 0x80231848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024AFF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AFF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024AFF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024AFF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024AFFC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024B000: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024B004: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024B008: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8024B00C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8024B010: jal         0x8004D5D4
    // 0x8024B014: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8024B014: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024B018: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8024B01C: jal         0x8002C654
    // 0x8024B020: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8024B020: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8024B024: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024B028: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024B02C: jal         0x800319B4
    // 0x8024B030: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8024B030: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8024B034: jal         0x8024B338
    // 0x8024B038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B338_ovl10(rdram, ctx);
        goto after_3;
    // 0x8024B038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024B03C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8024B040: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024B044: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024B048: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8024B04C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024B050: addiu       $v0, $v0, 0x2570
    ctx->r2 = ADD32(ctx->r2, 0X2570);
    // 0x8024B054: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8024B058: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024B05C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8024B060: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024B064: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024B068: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024B06C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8024B070: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024B074: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024B078: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024B07C: jr          $ra
    // 0x8024B080: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024B080: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802478B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802478B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802478B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802478B8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802478BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802478C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802478C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802478C8: lw          $v0, 0x22A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X22A0);
    // 0x802478CC: jalr        $v0
    // 0x802478D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802478D0: nop

    after_0:
    // 0x802478D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802478D8: jr          $ra
    // 0x802478DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802478DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023932C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023932C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023933C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80239340: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80239344: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239348: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023934C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80239350: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80239354: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80239358: jal         0x800A3450
    // 0x8023935C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023935C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80239360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239364: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239368: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023936C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80239370: jal         0x8004D5D4
    // 0x80239374: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80239374: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x80239378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023937C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80239380: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239384: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239388: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023938C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239390: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239394: jal         0x8003E934
    // 0x80239398: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80239398: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8023939C: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802393A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802393A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802393A8: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x802393AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802393B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802393B4: jal         0x8009A3B4
    // 0x802393B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802393B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x802393BC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802393C0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802393C4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802393C8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802393CC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802393D0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802393D4: jal         0x800A3450
    // 0x802393D8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802393D8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x802393DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802393E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802393E8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802393EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802393F0: jal         0x80050294
    // 0x802393F4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802393F4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x802393F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802393FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239400: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80239404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023940C: jr          $ra
    // 0x80239410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023116C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023116C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80231170: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80231174: beq         $v0, $zero, L_80231190
    if (ctx->r2 == 0) {
        // 0x80231178: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231190;
    }
    // 0x80231178: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023117C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231180: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80231184: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231188: bne         $v0, $zero, L_802311BC
    if (ctx->r2 != 0) {
        // 0x8023118C: nop
    
            goto L_802311BC;
    }
    // 0x8023118C: nop

L_80231190:
    // 0x80231190: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80231194: bgez        $v0, L_802311BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231198: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802311BC;
    }
    // 0x80231198: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8023119C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802311A0: bnel        $v1, $v0, L_802311BC
    if (ctx->r3 != ctx->r2) {
        // 0x802311A4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802311BC;
    }
    goto skip_0;
    // 0x802311A4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x802311A8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802311AC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802311B0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802311B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802311B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802311BC:
    // 0x802311BC: jr          $ra
    // 0x802311C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802311C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802308F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802308F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802308FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230900: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230904: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230908: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023090C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80230910: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230918: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023091C: beq         $v1, $v0, L_80230994
    if (ctx->r3 == ctx->r2) {
        // 0x80230920: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_80230994;
    }
    // 0x80230920: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80230924: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230928: beql        $v0, $zero, L_80230940
    if (ctx->r2 == 0) {
        // 0x8023092C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230940;
    }
    goto skip_0;
    // 0x8023092C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230930: beq         $v1, $zero, L_80230958
    if (ctx->r3 == 0) {
        // 0x80230934: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80230958;
    }
    // 0x80230934: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80230938: j           L_80230AB8
    // 0x8023093C: nop

        goto L_80230AB8;
    // 0x8023093C: nop

L_80230940:
    // 0x80230940: beq         $v1, $v0, L_802309F0
    if (ctx->r3 == ctx->r2) {
        // 0x80230944: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802309F0;
    }
    // 0x80230944: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230948: beq         $v1, $v0, L_80230A90
    if (ctx->r3 == ctx->r2) {
        // 0x8023094C: nop
    
            goto L_80230A90;
    }
    // 0x8023094C: nop

    // 0x80230950: j           L_80230AB8
    // 0x80230954: nop

        goto L_80230AB8;
    // 0x80230954: nop

L_80230958:
    // 0x80230958: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8023095C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230960: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80230964: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230968: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023096C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230970: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80230974: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230978: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023097C: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80230980: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230984: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80230988: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8023098C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80230990: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80230994:
    // 0x80230994: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230998: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023099C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802309A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802309A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802309A8: bltz        $v0, L_802309D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802309AC: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_802309D8;
    }
    // 0x802309AC: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802309B0: beq         $v0, $zero, L_80230AB8
    if (ctx->r2 == 0) {
        // 0x802309B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230AB8;
    }
    // 0x802309B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802309B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802309BC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802309C0: jal         0x8004DA90
    // 0x802309C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802309C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802309C8: jal         0x80040F30
    // 0x802309CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802309CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802309D0: j           L_80230AB8
    // 0x802309D4: nop

        goto L_80230AB8;
    // 0x802309D4: nop

L_802309D8:
    // 0x802309D8: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x802309DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802309E0: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x802309E4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802309E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802309EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802309F0:
    // 0x802309F0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x802309F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802309F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802309FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230A00: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80230A04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80230A08: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80230A0C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80230A10: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80230A14: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80230A18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230A1C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230A20: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80230A24: jal         0x8004DA90
    // 0x80230A28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80230A28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80230A2C: jal         0x80040F30
    // 0x80230A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80230A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230A34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230A38: beq         $v1, $zero, L_80230AB8
    if (ctx->r3 == 0) {
        // 0x80230A3C: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80230AB8;
    }
    // 0x80230A3C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80230A40: bnel        $v0, $zero, L_80230A48
    if (ctx->r2 != 0) {
        // 0x80230A44: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80230A48;
    }
    goto skip_1;
    // 0x80230A44: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80230A48:
    // 0x80230A48: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80230A4C: beq         $v0, $zero, L_80230AB8
    if (ctx->r2 == 0) {
        // 0x80230A50: nop
    
            goto L_80230AB8;
    }
    // 0x80230A50: nop

    // 0x80230A54: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80230A58: bgtz        $v0, L_80230AB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80230A5C: addiu       $a0, $zero, 0xD8
        ctx->r4 = ADD32(0, 0XD8);
            goto L_80230AB8;
    }
    // 0x80230A5C: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    // 0x80230A60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230A64: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80230A68: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230A6C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230A74: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80230A78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230A7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230A80: jal         0x8002A2F8
    // 0x80230A84: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80230A84: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    after_4:
    // 0x80230A88: j           L_80230AB8
    // 0x80230A8C: nop

        goto L_80230AB8;
    // 0x80230A8C: nop

L_80230A90:
    // 0x80230A90: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x80230A94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230A98: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80230A9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230AA0: bgez        $v0, L_80230AB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230AA4: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80230AB8;
    }
    // 0x80230AA4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80230AA8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230AAC: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x80230AB0: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80230AB4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80230AB8:
    // 0x80230AB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230ABC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230AC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230AC4: jr          $ra
    // 0x80230AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D654_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D65C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D660: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D668: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D66C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D670: beq         $v0, $zero, L_8022D868
    if (ctx->r2 == 0) {
        // 0x8022D674: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D868;
    }
    // 0x8022D674: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D678: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D67C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022D680: addu        $at, $at, $v0
    gpr jr_addend_8022D688 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D684: lw          $v0, 0x2DB8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2DB8);
    // 0x8022D688: jr          $v0
    // 0x8022D68C: nop

    switch (jr_addend_8022D688 >> 2) {
        case 0: goto L_8022D690; break;
        case 1: goto L_8022D720; break;
        case 2: goto L_8022D77C; break;
        case 3: goto L_8022D804; break;
        case 4: goto L_8022D830; break;
        default: switch_error(__func__, 0x8022D688, 0x80252DB8);
    }
    // 0x8022D68C: nop

L_8022D690:
    // 0x8022D690: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D694: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D698: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D69C: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x8022D6A0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022D6A4: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022D6A8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8022D6AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D6B0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022D6B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D6BC: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022D6C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D6C4: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x8022D6C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D6CC: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022D6D0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D6D4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D6D8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022D6DC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D6E0: beq         $a0, $zero, L_8022D720
    if (ctx->r4 == 0) {
        // 0x8022D6E4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D720;
    }
    // 0x8022D6E4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D6E8: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022D6EC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022D6F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D6F4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022D6F8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D6FC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D700: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022D704: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022D708: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D70C: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022D710: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022D714: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D718: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022D71C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022D720:
    // 0x8022D720: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D724: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D728: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D72C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D730: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D734: bltz        $v0, L_8022D764
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D738: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022D764;
    }
    // 0x8022D738: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022D73C: beq         $v0, $zero, L_8022D868
    if (ctx->r2 == 0) {
        // 0x8022D740: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D868;
    }
    // 0x8022D740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D744: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D748: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022D74C: jal         0x8004DA90
    // 0x8022D750: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D750: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022D754: jal         0x80040F30
    // 0x8022D758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D75C: j           L_8022D868
    // 0x8022D760: nop

        goto L_8022D868;
    // 0x8022D760: nop

L_8022D764:
    // 0x8022D764: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022D768: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D76C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D770: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D774: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022D778: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D77C:
    // 0x8022D77C: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D784: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D788: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D78C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D790: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D794: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022D798: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D79C: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022D7A0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022D7A4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022D7A8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D7AC: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022D7B0: jal         0x8004DA90
    // 0x8022D7B4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D7B4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022D7B8: jal         0x80040F30
    // 0x8022D7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022D7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D7C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D7C4: beq         $v1, $zero, L_8022D868
    if (ctx->r3 == 0) {
        // 0x8022D7C8: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022D868;
    }
    // 0x8022D7C8: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D7CC: bnel        $v0, $zero, L_8022D7D4
    if (ctx->r2 != 0) {
        // 0x8022D7D0: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D7D4;
    }
    goto skip_0;
    // 0x8022D7D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022D7D4:
    // 0x8022D7D4: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D7D8: beq         $v0, $zero, L_8022D868
    if (ctx->r2 == 0) {
        // 0x8022D7DC: nop
    
            goto L_8022D868;
    }
    // 0x8022D7DC: nop

    // 0x8022D7E0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022D7E4: bgtz        $v0, L_8022D868
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D7E8: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8022D868;
    }
    // 0x8022D7E8: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022D7EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D7F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D7F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D7F8: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8022D7FC: j           L_8022D868
    // 0x8022D800: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D868;
    // 0x8022D800: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D804:
    // 0x8022D804: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D808: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D80C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D810: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D814: bgez        $v0, L_8022D868
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D818: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022D868;
    }
    // 0x8022D818: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022D81C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D820: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D824: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D828: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022D82C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D830:
    // 0x8022D830: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D834: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D838: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D83C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D840: bgez        $v0, L_8022D868
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D844: nop
    
            goto L_8022D868;
    }
    // 0x8022D844: nop

    // 0x8022D848: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D84C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D850: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D854: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D858: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022D85C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D860: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022D864: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D868:
    // 0x8022D868: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D86C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D870: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D874: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D87C: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022D880: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022D884: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022D888: bgtz        $v0, L_8022D8A4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D88C: nop
    
            goto L_8022D8A4;
    }
    // 0x8022D88C: nop

    // 0x8022D890: bne         $v1, $zero, L_8022D8A4
    if (ctx->r3 != 0) {
        // 0x8022D894: nop
    
            goto L_8022D8A4;
    }
    // 0x8022D894: nop

    // 0x8022D898: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D89C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D8A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022D8A4:
    // 0x8022D8A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D8A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8B0: jr          $ra
    // 0x8022D8B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D8B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248170_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248174: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248178: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024817C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80248180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248184: jal         0x80248B84
    // 0x80248188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80248B84_ovl10(rdram, ctx);
        goto after_0;
    // 0x80248188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8024818C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80248190: beq         $v0, $zero, L_802481DC
    if (ctx->r2 == 0) {
        // 0x80248194: nop
    
            goto L_802481DC;
    }
    // 0x80248194: nop

    // 0x80248198: jal         0x80248BD0
    // 0x8024819C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80248BD0_ovl10(rdram, ctx);
        goto after_1;
    // 0x8024819C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802481A0: beq         $v0, $zero, L_802481B4
    if (ctx->r2 == 0) {
        // 0x802481A4: nop
    
            goto L_802481B4;
    }
    // 0x802481A4: nop

    // 0x802481A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802481AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802481B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802481B4:
    // 0x802481B4: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x802481B8: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x802481BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802481C0: beq         $v0, $zero, L_802481DC
    if (ctx->r2 == 0) {
        // 0x802481C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802481DC;
    }
    // 0x802481C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802481C8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802481CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802481D0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802481D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802481D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802481DC:
    // 0x802481DC: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x802481E0: bgez        $v0, L_8024820C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802481E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024820C;
    }
    // 0x802481E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802481E8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802481EC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x802481F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802481F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802481F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802481FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80248200: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80248204: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80248208: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8024820C:
    // 0x8024820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248214: jr          $ra
    // 0x80248218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234D10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234D10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80234D14: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80234D18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234D1C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80234D20: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80234D24: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80234D28: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80234D2C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80234D30: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80234D34: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80234D38: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234D3C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80234D40: bnel        $v0, $zero, L_80234D5C
    if (ctx->r2 != 0) {
        // 0x80234D44: addiu       $a0, $s1, 0x2C
        ctx->r4 = ADD32(ctx->r17, 0X2C);
            goto L_80234D5C;
    }
    goto skip_0;
    // 0x80234D44: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    skip_0:
    // 0x80234D48: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80234D4C: lw          $v0, 0x1210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1210);
    // 0x80234D50: jalr        $v0
    // 0x80234D54: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234D54: nop

    after_0:
    // 0x80234D58: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
L_80234D5C:
    // 0x80234D5C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80234D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D68: jal         0x8009A3B4
    // 0x80234D6C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234D6C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_1:
    // 0x80234D70: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80234D74: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234D78: jal         0x8009A3B4
    // 0x80234D7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234D7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80234D80: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80234D84: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80234D88: jal         0x8009A3B4
    // 0x80234D8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234D8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80234D90: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80234D94: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234D98: beq         $v0, $zero, L_80234DB8
    if (ctx->r2 == 0) {
        // 0x80234D9C: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80234DB8;
    }
    // 0x80234D9C: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80234DA0: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80234DA4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80234DA8: sh          $v1, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r3;
    // 0x80234DAC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234DB0: j           L_80234DC0
    // 0x80234DB4: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
        goto L_80234DC0;
    // 0x80234DB4: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_80234DB8:
    // 0x80234DB8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80234DBC: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_80234DC0:
    // 0x80234DC0: jal         0x800A3450
    // 0x80234DC4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80234DC4: nop

    after_4:
    // 0x80234DC8: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80234DCC: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x80234DD0: beq         $v1, $zero, L_80234E30
    if (ctx->r3 == 0) {
        // 0x80234DD4: sh          $v0, 0x2($s2)
        MEM_H(0X2, ctx->r18) = ctx->r2;
            goto L_80234E30;
    }
    // 0x80234DD4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x80234DD8: lw          $a1, 0x34($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X34);
    // 0x80234DDC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234DE4: jal         0x8009A3B4
    // 0x80234DE8: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80234DE8: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_5:
    // 0x80234DEC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80234DF0: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80234DF4: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x80234DF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234DFC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234E00: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234E04: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234E08: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80234E0C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x80234E10: lw          $v0, 0x34($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X34);
    // 0x80234E14: lhu         $v1, 0x56($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X56);
    // 0x80234E18: lhu         $a0, 0x5E($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X5E);
    // 0x80234E1C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80234E20: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80234E24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234E28: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234E2C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234E30:
    // 0x80234E30: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80234E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234E38: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234E40: lw          $v0, 0x1210($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1210);
    // 0x80234E44: jalr        $v0
    // 0x80234E48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80234E48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80234E4C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80234E50: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80234E54: beq         $v0, $a1, L_80234E6C
    if (ctx->r2 == ctx->r5) {
        // 0x80234E58: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234E6C;
    }
    // 0x80234E58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234E5C: jal         0x800502EC
    // 0x80234E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_7;
    // 0x80234E60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80234E64: j           L_80234E74
    // 0x80234E68: nop

        goto L_80234E74;
    // 0x80234E68: nop

L_80234E6C:
    // 0x80234E6C: jal         0x800504EC
    // 0x80234E70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x80234E70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_80234E74:
    // 0x80234E74: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80234E78: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80234E7C: beq         $v0, $zero, L_80234F84
    if (ctx->r2 == 0) {
        // 0x80234E80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234F84;
    }
    // 0x80234E80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234E84: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x80234E88: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80234E8C: addiu       $s0, $s0, -0x3D98
    ctx->r16 = ADD32(ctx->r16, -0X3D98);
    // 0x80234E90: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80234E94: addiu       $s3, $s3, 0x3420
    ctx->r19 = ADD32(ctx->r19, 0X3420);
    // 0x80234E98: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80234E9C: addiu       $s7, $s7, 0x3440
    ctx->r23 = ADD32(ctx->r23, 0X3440);
    // 0x80234EA0: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x80234EA4: addiu       $s6, $s6, 0x3460
    ctx->r22 = ADD32(ctx->r22, 0X3460);
    // 0x80234EA8: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x80234EAC: addiu       $s5, $s5, 0x3480
    ctx->r21 = ADD32(ctx->r21, 0X3480);
    // 0x80234EB0: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x80234EB4: addiu       $s4, $s4, 0x34A0
    ctx->r20 = ADD32(ctx->r20, 0X34A0);
L_80234EB8:
    // 0x80234EB8: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x80234EBC: sra         $v0, $v1, 2
    ctx->r2 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80234EC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234EC4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234EC8: lhu         $v0, 0x40($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X40);
    // 0x80234ECC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234ED0: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80234ED4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80234ED8: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80234EDC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234EE0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80234EE4: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80234EE8: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80234EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234EF0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80234EF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234EF8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80234EFC: jal         0x80031428
    // 0x80234F00: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_9;
    // 0x80234F00: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    after_9:
    // 0x80234F04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234F08: jal         0x80031E10
    // 0x80234F0C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    func_80031E10_D210(rdram, ctx);
        goto after_10;
    // 0x80234F0C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    after_10:
    // 0x80234F10: lw          $a0, 0x48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X48);
    // 0x80234F14: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80234F18: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80234F1C: jal         0x80031428
    // 0x80234F20: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_80031428_C828(rdram, ctx);
        goto after_11;
    // 0x80234F20: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_11:
    // 0x80234F24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234F28: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80234F2C: jal         0x800306F0
    // 0x80234F30: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_12;
    // 0x80234F30: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_12:
    // 0x80234F34: lw          $a1, 0x48($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X48);
    // 0x80234F38: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80234F3C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80234F40: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x80234F44: addiu       $a1, $a1, 0x1E8
    ctx->r5 = ADD32(ctx->r5, 0X1E8);
    // 0x80234F48: jal         0x800306F0
    // 0x80234F4C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_800306F0_BAF0(rdram, ctx);
        goto after_13;
    // 0x80234F4C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_13:
    // 0x80234F50: lw          $a2, 0x48($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X48);
    // 0x80234F54: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80234F58: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80234F5C: sll         $a2, $a2, 5
    ctx->r6 = S32(ctx->r6 << 5);
    // 0x80234F60: addiu       $a2, $a2, 0x1E8
    ctx->r6 = ADD32(ctx->r6, 0X1E8);
    // 0x80234F64: jal         0x800306F0
    // 0x80234F68: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    func_800306F0_BAF0(rdram, ctx);
        goto after_14;
    // 0x80234F68: addu        $a2, $s1, $a2
    ctx->r6 = ADD32(ctx->r17, ctx->r6);
    after_14:
    // 0x80234F6C: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80234F70: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80234F74: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x80234F78: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80234F7C: bne         $v0, $zero, L_80234EB8
    if (ctx->r2 != 0) {
        // 0x80234F80: nop
    
            goto L_80234EB8;
    }
    // 0x80234F80: nop

L_80234F84:
    // 0x80234F84: jal         0x80051248
    // 0x80234F88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_15;
    // 0x80234F88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x80234F8C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80234F90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234F94: beq         $v0, $zero, L_80234FAC
    if (ctx->r2 == 0) {
        // 0x80234F98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234FAC;
    }
    // 0x80234F98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234F9C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80234FA0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234FA4: jal         0x8003B564
    // 0x80234FA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_16;
    // 0x80234FA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
L_80234FAC:
    // 0x80234FAC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80234FB0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80234FB4: bne         $v0, $zero, L_80234FD0
    if (ctx->r2 != 0) {
        // 0x80234FB8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234FD0;
    }
    // 0x80234FB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234FC0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234FC4: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80234FC8: jal         0x80047284
    // 0x80234FCC: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_17;
    // 0x80234FCC: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_17:
L_80234FD0:
    // 0x80234FD0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80234FD4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234FD8: beq         $v0, $zero, L_80235010
    if (ctx->r2 == 0) {
        // 0x80234FDC: nop
    
            goto L_80235010;
    }
    // 0x80234FDC: nop

    // 0x80234FE0: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80234FE4: lw          $v1, 0x44($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X44);
    // 0x80234FE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234FEC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80234FF0: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80234FF4: lw          $v1, 0x44($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X44);
    // 0x80234FF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234FFC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80235000: lw          $a1, 0x44($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X44);
    // 0x80235004: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80235008: jal         0x8004DD04
    // 0x8023500C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_18;
    // 0x8023500C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_18:
L_80235010:
    // 0x80235010: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235014: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235018: beql        $v0, $zero, L_80235090
    if (ctx->r2 == 0) {
        // 0x8023501C: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80235090;
    }
    goto skip_1;
    // 0x8023501C: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_1:
    // 0x80235020: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80235024: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80235028: beq         $v0, $zero, L_8023508C
    if (ctx->r2 == 0) {
        // 0x8023502C: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8023508C;
    }
    // 0x8023502C: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80235030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235034: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80235038: jal         0x8009A3B4
    // 0x8023503C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023503C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x80235040: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x80235044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235048: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023504C: addiu       $v0, $v0, 0x38
    ctx->r2 = ADD32(ctx->r2, 0X38);
    // 0x80235050: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80235054: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80235058: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023505C: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80235060: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235064: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80235068: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8023506C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80235070: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80235074: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80235078: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8023507C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80235080: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80235084: jal         0x80051E18
    // 0x80235088: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x80235088: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_20:
L_8023508C:
    // 0x8023508C: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80235090:
    // 0x80235090: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80235094: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80235098: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8023509C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802350A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802350A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802350A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802350AC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802350B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802350B4: jr          $ra
    // 0x802350B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802350B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80236A50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236A54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236A58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236A5C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80236A60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236A64: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80236A68: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80236A6C: beq         $v0, $zero, L_80236A84
    if (ctx->r2 == 0) {
        // 0x80236A70: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80236A84;
    }
    // 0x80236A70: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80236A74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80236A78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236A7C: j           L_80236A98
    // 0x80236A80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80236A98;
    // 0x80236A80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80236A84:
    // 0x80236A84: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80236A88: beq         $v0, $zero, L_80236AA4
    if (ctx->r2 == 0) {
        // 0x80236A8C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236AA4;
    }
    // 0x80236A8C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236A90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236A94: addiu       $v0, $zero, 0x208
    ctx->r2 = ADD32(0, 0X208);
L_80236A98:
    // 0x80236A98: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236A9C: j           L_80236AD8
    // 0x80236AA0: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
        goto L_80236AD8;
    // 0x80236AA0: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80236AA4:
    // 0x80236AA4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80236AA8: bne         $v0, $zero, L_80236ACC
    if (ctx->r2 != 0) {
        // 0x80236AAC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80236ACC;
    }
    // 0x80236AAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236AB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AB4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236AB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236ABC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236AC0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236AC4: j           L_80236AD8
    // 0x80236AC8: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
        goto L_80236AD8;
    // 0x80236AC8: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_80236ACC:
    // 0x80236ACC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236AD0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236AD4: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
L_80236AD8:
    // 0x80236AD8: jal         0x8004EEAC
    // 0x80236ADC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80236ADC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_0:
    // 0x80236AE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236AE4: beq         $v1, $zero, L_80236B74
    if (ctx->r3 == 0) {
        // 0x80236AE8: sw          $v1, 0x34($s1)
        MEM_W(0X34, ctx->r17) = ctx->r3;
            goto L_80236B74;
    }
    // 0x80236AE8: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x80236AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AF0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80236AF4: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236AF8: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80236AFC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80236B00: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B04: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236B08: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80236B0C: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80236B10: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80236B14: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B18: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80236B1C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80236B20: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x80236B24: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B2C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80236B30: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x80236B34: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B3C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80236B40: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x80236B44: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B4C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80236B50: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x80236B54: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80236B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236B5C: jal         0x8009A3B4
    // 0x80236B60: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236B60: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x80236B64: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236B68: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80236B6C: j           L_80236B84
    // 0x80236B70: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_80236B84;
    // 0x80236B70: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80236B74:
    // 0x80236B74: jal         0x8004F418
    // 0x80236B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80236B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236B7C: j           L_80236E60
    // 0x80236B80: nop

        goto L_80236E60;
    // 0x80236B80: nop

L_80236B84:
    // 0x80236B84: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80236B88: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80236B8C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236B90: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236B94: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236B98: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80236B9C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236BA0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80236BA4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80236BA8: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x80236BAC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80236BB0: sb          $a0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r4;
    // 0x80236BB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80236BB8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236BBC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80236BC0: bne         $v0, $zero, L_80236C10
    if (ctx->r2 != 0) {
        // 0x80236BC4: nop
    
            goto L_80236C10;
    }
    // 0x80236BC4: nop

    // 0x80236BC8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236BCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236BD0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80236BD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236BD8: lhu         $v1, 0x1630($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1630);
    // 0x80236BDC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236BE0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236BE4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80236BE8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80236BEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236BF0: lhu         $v1, 0x1638($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1638);
    // 0x80236BF4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236BF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236BFC: sh          $v1, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r3;
    // 0x80236C00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236C04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236C08: lhu         $v0, 0x1640($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1640);
    // 0x80236C0C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_80236C10:
    // 0x80236C10: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236C14: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80236C18: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80236C1C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236C20: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80236C24: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80236C28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80236C2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236C30: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236C34: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80236C38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236C3C: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80236C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C44: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236C48: addiu       $v0, $v0, 0x12D0
    ctx->r2 = ADD32(ctx->r2, 0X12D0);
    // 0x80236C4C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80236C50: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80236C54: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80236C58: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80236C5C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80236C60: jal         0x8003E934
    // 0x80236C64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80236C64: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_3:
    // 0x80236C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C6C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80236C70: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236C74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236C78: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80236C7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236C80: jal         0x8004D5D4
    // 0x80236C84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x80236C84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_4:
    // 0x80236C88: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236C8C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236C90: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236C94: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236C98: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236C9C: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80236CA0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80236CA4: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80236CA8: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80236CAC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80236CB0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80236CB4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80236CB8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80236CBC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80236CC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236CC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236CC8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236CCC: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80236CD0: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x80236CD4: jal         0x800540BC
    // 0x80236CD8: addiu       $a2, $zero, -0x200
    ctx->r6 = ADD32(0, -0X200);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_5;
    // 0x80236CD8: addiu       $a2, $zero, -0x200
    ctx->r6 = ADD32(0, -0X200);
    after_5:
    // 0x80236CDC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236CE0: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80236CE4: bne         $v0, $zero, L_80236E34
    if (ctx->r2 != 0) {
        // 0x80236CE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236E34;
    }
    // 0x80236CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CEC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80236CF0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80236CF4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80236CF8: lbu         $a0, 0x1648($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1648);
    // 0x80236CFC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80236D00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236D04: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80236D08: lw          $v1, 0x1624($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1624);
    // 0x80236D0C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80236D10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236D14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236D18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236D1C: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x80236D20: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236D24: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80236D28: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80236D2C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236D30: lbu         $a0, 0x164E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164E);
    // 0x80236D34: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236D38: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80236D3C: lw          $v1, 0x1624($at)
    ctx->r3 = MEM_W(ctx->r1, 0X1624);
    // 0x80236D40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236D44: sb          $v0, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r2;
    // 0x80236D48: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80236D4C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236D50: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x80236D54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236D58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236D5C: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x80236D60: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80236D64: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80236D68: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x80236D6C: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    // 0x80236D70: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80236D74: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80236D78: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236D7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236D80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236D84: lbu         $v0, 0x164B($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X164B);
    // 0x80236D88: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x80236D8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236D90: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80236D94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236D98: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236D9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236DA0: sw          $v1, 0x5644($at)
    MEM_W(0X5644, ctx->r1) = ctx->r3;
    // 0x80236DA4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80236DA8: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x80236DAC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236DB0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236DB4: sw          $zero, 0x5640($at)
    MEM_W(0X5640, ctx->r1) = 0;
    // 0x80236DB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236DBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236DC0: sw          $v1, 0x563C($at)
    MEM_W(0X563C, ctx->r1) = ctx->r3;
    // 0x80236DC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236DC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236DCC: sw          $s0, 0x5650($at)
    MEM_W(0X5650, ctx->r1) = ctx->r16;
    // 0x80236DD0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80236DD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236DD8: bne         $v1, $v0, L_80236E34
    if (ctx->r3 != ctx->r2) {
        // 0x80236DDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236E34;
    }
    // 0x80236DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236DE0: jal         0x8004EFE4
    // 0x80236DE4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x80236DE4: nop

    after_6:
    // 0x80236DE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236DEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236DF0: sw          $v1, 0x5638($at)
    MEM_W(0X5638, ctx->r1) = ctx->r3;
    // 0x80236DF4: beq         $v1, $zero, L_80236E30
    if (ctx->r3 == 0) {
        // 0x80236DF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236E30;
    }
    // 0x80236DF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236DFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80236E00: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80236E04: lw          $v1, 0x5638($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5638);
    // 0x80236E08: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80236E0C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80236E10: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236E14: lw          $v0, 0x5638($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5638);
    // 0x80236E18: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80236E1C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80236E20: lw          $v1, 0x5648($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5648);
    // 0x80236E24: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80236E28: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80236E2C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_80236E30:
    // 0x80236E30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236E34:
    // 0x80236E34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236E3C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80236E40: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80236E44: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80236E48: sb          $zero, 0x48($s1)
    MEM_B(0X48, ctx->r17) = 0;
    // 0x80236E4C: sh          $zero, 0x52($s1)
    MEM_H(0X52, ctx->r17) = 0;
    // 0x80236E50: sw          $v0, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r2;
    // 0x80236E54: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x80236E58: jal         0x80050294
    // 0x80236E5C: sb          $zero, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80236E5C: sb          $zero, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = 0;
    after_7:
L_80236E60:
    // 0x80236E60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80236E64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236E68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236E6C: jr          $ra
    // 0x80236E70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236E70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B7E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B7E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B7F0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B7F4: bne         $v0, $zero, L_8022B80C
    if (ctx->r2 != 0) {
        // 0x8022B7F8: nop
    
            goto L_8022B80C;
    }
    // 0x8022B7F8: nop

    // 0x8022B7FC: jal         0x80229F50
    // 0x8022B800: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B800: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x8022B804: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B808: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B80C:
    // 0x8022B80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B814: jr          $ra
    // 0x8022B818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CEF4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CEF4: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8022CEF8: beq         $a1, $zero, L_8022CF14
    if (ctx->r5 == 0) {
        // 0x8022CEFC: addiu       $v1, $a0, 0x348
        ctx->r3 = ADD32(ctx->r4, 0X348);
            goto L_8022CF14;
    }
    // 0x8022CEFC: addiu       $v1, $a0, 0x348
    ctx->r3 = ADD32(ctx->r4, 0X348);
    // 0x8022CF00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF04: beq         $a1, $v0, L_8022CF24
    if (ctx->r5 == ctx->r2) {
        // 0x8022CF08: nop
    
            goto L_8022CF24;
    }
    // 0x8022CF08: nop

    // 0x8022CF0C: j           L_8022CF60
    // 0x8022CF10: nop

        goto L_8022CF60;
    // 0x8022CF10: nop

L_8022CF14:
    // 0x8022CF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF18: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022CF1C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022CF20: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022CF24:
    // 0x8022CF24: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022CF28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CF2C: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8022CF30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CF34: bgez        $v0, L_8022CF4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CF38: nop
    
            goto L_8022CF4C;
    }
    // 0x8022CF38: nop

    // 0x8022CF3C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8022CF40: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CF44: j           L_8022CF60
    // 0x8022CF48: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_8022CF60;
    // 0x8022CF48: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_8022CF4C:
    // 0x8022CF4C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022CF50: lhu         $v1, 0x66($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X66);
    // 0x8022CF54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CF58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CF5C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022CF60:
    // 0x8022CF60: jr          $ra
    // 0x8022CF64: nop

    TRACE_RETURN()
    return;
    // 0x8022CF64: nop

;}
RECOMP_FUNC void func_80244400_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244400: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80244404: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80244408: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x8024440C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80244410: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80244414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80244418: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x8024441C: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80244420: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80244424: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80244428: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024442C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80244430: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80244434: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80244438: beq         $v0, $zero, L_80244448
    if (ctx->r2 == 0) {
        // 0x8024443C: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80244448;
    }
    // 0x8024443C: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80244440: j           L_80244454
    // 0x80244444: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80244454;
    // 0x80244444: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80244448:
    // 0x80244448: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x8024444C: bne         $v0, $zero, L_80244458
    if (ctx->r2 != 0) {
        // 0x80244450: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80244458;
    }
    // 0x80244450: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80244454:
    // 0x80244454: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80244458:
    // 0x80244458: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x8024445C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80244460: bne         $v0, $zero, L_80244474
    if (ctx->r2 != 0) {
        // 0x80244464: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80244474;
    }
    // 0x80244464: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80244468: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8024446C: bne         $v0, $zero, L_80244478
    if (ctx->r2 != 0) {
        // 0x80244470: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80244478;
    }
    // 0x80244470: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80244474:
    // 0x80244474: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80244478:
    // 0x80244478: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x8024447C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80244480: bne         $v0, $zero, L_80244494
    if (ctx->r2 != 0) {
        // 0x80244484: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80244494;
    }
    // 0x80244484: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80244488: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8024448C: bne         $v0, $zero, L_80244498
    if (ctx->r2 != 0) {
        // 0x80244490: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80244498;
    }
    // 0x80244490: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80244494:
    // 0x80244494: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80244498:
    // 0x80244498: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x8024449C: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x802444A0: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x802444A4: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x802444A8: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x802444AC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802444B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802444B4: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x802444B8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802444BC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x802444C0: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x802444C4: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x802444C8: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x802444CC: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x802444D0: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x802444D4: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x802444D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802444DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802444E0: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x802444E4: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x802444E8: jr          $ra
    // 0x802444EC: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802444EC: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80228FBC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228FC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228FC4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228FC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228FCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FD0: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x80228FD4: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80228FD8: lw          $s0, 0x55F8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55F8);
    // 0x80228FDC: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80228FE0: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x80228FE4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802291D4;
    }
    // 0x80228FE4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228FE8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228FEC: addu        $at, $at, $v0
    gpr jr_addend_80228FF4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228FF0: lw          $v0, 0x2C40($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C40);
    // 0x80228FF4: jr          $v0
    // 0x80228FF8: nop

    switch (jr_addend_80228FF4 >> 2) {
        case 0: goto L_80228FFC; break;
        case 1: goto L_80229030; break;
        case 2: goto L_8022906C; break;
        case 3: goto L_80229090; break;
        case 4: goto L_802290C4; break;
        case 5: goto L_802290F0; break;
        case 6: goto L_80229134; break;
        case 7: goto L_80229180; break;
        case 8: goto L_802291B0; break;
        case 9: goto L_802291D4; break;
        default: switch_error(__func__, 0x80228FF4, 0x80252C40);
    }
    // 0x80228FF8: nop

L_80228FFC:
    // 0x80228FFC: jal         0x8006033C
    // 0x80229000: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229000: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_0:
    // 0x80229004: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x80229008: addiu       $a0, $zero, 0x60B
        ctx->r4 = ADD32(0, 0X60B);
            goto L_802291D4;
    }
    // 0x80229008: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x8022900C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229010: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229014: jal         0x80060590
    // 0x80229018: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229018: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_1:
    // 0x8022901C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229020: jal         0x800616FC
    // 0x80229024: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80229024: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80229028: j           L_802291C8
    // 0x8022902C: nop

        goto L_802291C8;
    // 0x8022902C: nop

L_80229030:
    // 0x80229030: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229034: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229038: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022903C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229040: bne         $v0, $zero, L_802291D4
    if (ctx->r2 != 0) {
        // 0x80229044: nop
    
            goto L_802291D4;
    }
    // 0x80229044: nop

    // 0x80229048: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022904C: jal         0x800600F8
    // 0x80229050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80229050: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x80229054: jal         0x8006036C
    // 0x80229058: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80229058: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_4:
    // 0x8022905C: jal         0x8006036C
    // 0x80229060: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80229060: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_5:
    // 0x80229064: j           L_802291C8
    // 0x80229068: nop

        goto L_802291C8;
    // 0x80229068: nop

L_8022906C:
    // 0x8022906C: jal         0x8006033C
    // 0x80229070: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229070: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_6:
    // 0x80229074: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x80229078: addiu       $a0, $zero, 0x60B
        ctx->r4 = ADD32(0, 0X60B);
            goto L_802291D4;
    }
    // 0x80229078: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x8022907C: addiu       $v0, $zero, 0xE08
    ctx->r2 = ADD32(0, 0XE08);
    // 0x80229080: jal         0x80060590
    // 0x80229084: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x80229084: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_7:
    // 0x80229088: j           L_802291C8
    // 0x8022908C: nop

        goto L_802291C8;
    // 0x8022908C: nop

L_80229090:
    // 0x80229090: jal         0x8006033C
    // 0x80229094: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80229094: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_8:
    // 0x80229098: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x8022909C: addiu       $a0, $zero, 0x60B
        ctx->r4 = ADD32(0, 0X60B);
            goto L_802291D4;
    }
    // 0x8022909C: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x802290A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802290A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802290A8: jal         0x80060590
    // 0x802290AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x802290AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_9:
    // 0x802290B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802290B4: jal         0x800616FC
    // 0x802290B8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x802290B8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_10:
    // 0x802290BC: j           L_802291C8
    // 0x802290C0: nop

        goto L_802291C8;
    // 0x802290C0: nop

L_802290C4:
    // 0x802290C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802290C8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802290CC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802290D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802290D4: bne         $v0, $zero, L_802291D4
    if (ctx->r2 != 0) {
        // 0x802290D8: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_802291D4;
    }
    // 0x802290D8: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x802290DC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802290E0: jal         0x8006036C
    // 0x802290E4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x802290E4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_11:
    // 0x802290E8: j           L_802291C8
    // 0x802290EC: nop

        goto L_802291C8;
    // 0x802290EC: nop

L_802290F0:
    // 0x802290F0: jal         0x8006033C
    // 0x802290F4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x802290F4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_12:
    // 0x802290F8: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x802290FC: addiu       $a0, $zero, 0x60B
        ctx->r4 = ADD32(0, 0X60B);
            goto L_802291D4;
    }
    // 0x802290FC: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x80229100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229104: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229108: jal         0x80060590
    // 0x8022910C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x8022910C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_13:
    // 0x80229110: jal         0x80060590
    // 0x80229114: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x80229114: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_14:
    // 0x80229118: jal         0x80060590
    // 0x8022911C: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_80060590_3B990(rdram, ctx);
        goto after_15;
    // 0x8022911C: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_15:
    // 0x80229120: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229124: jal         0x800616FC
    // 0x80229128: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_16;
    // 0x80229128: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_16:
    // 0x8022912C: j           L_802291C8
    // 0x80229130: nop

        goto L_802291C8;
    // 0x80229130: nop

L_80229134:
    // 0x80229134: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229138: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022913C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229140: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229144: bne         $v0, $zero, L_802291D4
    if (ctx->r2 != 0) {
        // 0x80229148: nop
    
            goto L_802291D4;
    }
    // 0x80229148: nop

    // 0x8022914C: jal         0x8006033C
    // 0x80229150: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_17;
    // 0x80229150: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_17:
    // 0x80229154: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x80229158: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802291D4;
    }
    // 0x80229158: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022915C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80229160: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229164: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229168: jal         0x800616FC
    // 0x8022916C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x8022916C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_18:
    // 0x80229170: jal         0x80060590
    // 0x80229174: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_80060590_3B990(rdram, ctx);
        goto after_19;
    // 0x80229174: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_19:
    // 0x80229178: j           L_802291C8
    // 0x8022917C: nop

        goto L_802291C8;
    // 0x8022917C: nop

L_80229180:
    // 0x80229180: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229184: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229188: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022918C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229190: bne         $v0, $zero, L_802291D4
    if (ctx->r2 != 0) {
        // 0x80229194: nop
    
            goto L_802291D4;
    }
    // 0x80229194: nop

    // 0x80229198: jal         0x8006036C
    // 0x8022919C: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_20;
    // 0x8022919C: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_20:
    // 0x802291A0: jal         0x8006036C
    // 0x802291A4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_21;
    // 0x802291A4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_21:
    // 0x802291A8: j           L_802291C8
    // 0x802291AC: nop

        goto L_802291C8;
    // 0x802291AC: nop

L_802291B0:
    // 0x802291B0: jal         0x8006033C
    // 0x802291B4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_22;
    // 0x802291B4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_22:
    // 0x802291B8: beq         $v0, $zero, L_802291D4
    if (ctx->r2 == 0) {
        // 0x802291BC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802291D4;
    }
    // 0x802291BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802291C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802291C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802291C8:
    // 0x802291C8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802291CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802291D0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_802291D4:
    // 0x802291D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802291D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802291DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802291E0: jr          $ra
    // 0x802291E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802291E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802497F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802497F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802497F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802497F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802497FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80249800: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80249804: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80249808: lh          $v1, 0x3E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3E);
    // 0x8024980C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80249810: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x80249814: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80249818: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024981C: jal         0x8004D5D4
    // 0x80249820: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80249820: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    after_0:
    // 0x80249824: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80249828: jal         0x8002C654
    // 0x8024982C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8024982C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80249830: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x80249834: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80249838: jal         0x800319B4
    // 0x8024983C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8024983C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80249840: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80249844: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80249848: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024984C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80249850: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80249854: addiu       $v0, $v0, 0x2390
    ctx->r2 = ADD32(ctx->r2, 0X2390);
    // 0x80249858: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8024985C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80249860: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80249864: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80249868: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8024986C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80249870: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80249874: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80249878: jr          $ra
    // 0x8024987C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024987C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225B70_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B80: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225B84: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225B88: bne         $v1, $v0, L_80225BE8
    if (ctx->r3 != ctx->r2) {
        // 0x80225B8C: addiu       $v0, $zero, 0xAC
        ctx->r2 = ADD32(0, 0XAC);
            goto L_80225BE8;
    }
    // 0x80225B8C: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x80225B90: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225B94: lw          $v1, 0x3320($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3320);
    // 0x80225B98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225B9C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x80225BA0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225BA4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225BA8: lw          $a0, 0x3320($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3320);
    // 0x80225BAC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225BB0: sh          $v0, 0x442($v1)
    MEM_H(0X442, ctx->r3) = ctx->r2;
    // 0x80225BB4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80225BB8: sb          $v0, 0x448($a0)
    MEM_B(0X448, ctx->r4) = ctx->r2;
    // 0x80225BBC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225BC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225BC4: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80225BC8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225BCC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80225BD0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80225BD4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225BD8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80225BDC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80225BE0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225BE4: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
L_80225BE8:
    // 0x80225BE8: bne         $v1, $v0, L_80225C4C
    if (ctx->r3 != ctx->r2) {
        // 0x80225BEC: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80225C4C;
    }
    // 0x80225BEC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225BF0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225BF4: lb          $a0, -0x1D8E($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D8E);
    // 0x80225BF8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225BFC: jal         0x8003B85C
    // 0x80225C00: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80225C00: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80225C04: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225C08: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225C0C: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225C10: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225C14: jal         0x8003B840
    // 0x80225C18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80225C18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80225C1C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225C20: lb          $a0, -0x1D8D($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D8D);
    // 0x80225C24: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225C28: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225C2C: jal         0x8003B85C
    // 0x80225C30: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80225C30: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80225C34: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225C38: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80225C3C: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225C40: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225C44: jal         0x8003B840
    // 0x80225C48: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80225C48: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80225C4C:
    // 0x80225C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C54: jr          $ra
    // 0x80225C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230EE4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230EE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230EEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230EF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230EF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230EF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230EFC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230F00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230F04: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80230F08: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80230F0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230F10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230F14: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80230F18: addiu       $v1, $v1, 0x9F0
    ctx->r3 = ADD32(ctx->r3, 0X9F0);
    // 0x80230F1C: jal         0x80233334
    // 0x80230F20: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x80230F20: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80230F24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230F28: beq         $v0, $zero, L_80231038
    if (ctx->r2 == 0) {
        // 0x80230F2C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80231038;
    }
    // 0x80230F2C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80230F30: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230F34: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230F38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230F3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230F40: jal         0x8009A3B4
    // 0x80230F44: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230F44: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230F48: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230F4C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230F50: jal         0x8009A3B4
    // 0x80230F54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230F54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80230F58: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230F5C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230F60: jal         0x8009A3B4
    // 0x80230F64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80230F64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80230F68: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230F6C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80230F70: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230F74: beq         $v0, $zero, L_80230F84
    if (ctx->r2 == 0) {
        // 0x80230F78: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80230F84;
    }
    // 0x80230F78: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80230F7C: jal         0x8023319C
    // 0x80230F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023319C_ovl10(rdram, ctx);
        goto after_4;
    // 0x80230F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80230F84:
    // 0x80230F84: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230F88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230F8C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230F90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230F94: lw          $v0, 0xF58($at)
    ctx->r2 = MEM_W(ctx->r1, 0XF58);
    // 0x80230F98: jalr        $v0
    // 0x80230F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80230F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230FA0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80230FA4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80230FA8: bne         $v0, $zero, L_80230FC4
    if (ctx->r2 != 0) {
        // 0x80230FAC: nop
    
            goto L_80230FC4;
    }
    // 0x80230FAC: nop

    // 0x80230FB0: jal         0x8003E934
    // 0x80230FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80230FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80230FB8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230FBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230FC0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80230FC4:
    // 0x80230FC4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230FC8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230FCC: beq         $v0, $a1, L_80230FE4
    if (ctx->r2 == ctx->r5) {
        // 0x80230FD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230FE4;
    }
    // 0x80230FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FD4: jal         0x80050294
    // 0x80230FD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230FD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80230FDC: j           L_80230FEC
    // 0x80230FE0: nop

        goto L_80230FEC;
    // 0x80230FE0: nop

L_80230FE4:
    // 0x80230FE4: jal         0x8005044C
    // 0x80230FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80230FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80230FEC:
    // 0x80230FEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230FF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230FF4: beq         $v0, $zero, L_80231010
    if (ctx->r2 == 0) {
        // 0x80230FF8: nop
    
            goto L_80231010;
    }
    // 0x80230FF8: nop

    // 0x80230FFC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80231000: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80231004: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80231008: jal         0x8003B564
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80231010:
    // 0x80231010: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80231014: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80231018: beq         $v0, $zero, L_80231028
    if (ctx->r2 == 0) {
        // 0x8023101C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231028;
    }
    // 0x8023101C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231020: j           L_8023102C
    // 0x80231024: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023102C;
    // 0x80231024: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80231028:
    // 0x80231028: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8023102C:
    // 0x8023102C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80231030: jal         0x80047284
    // 0x80231034: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80231034: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80231038:
    // 0x80231038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023103C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231040: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231048: jr          $ra
    // 0x8023104C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023104C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023953C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023953C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239540: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239544: jal         0x8004F418
    // 0x80239548: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80239548: nop

    after_0:
    // 0x8023954C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239550: jr          $ra
    // 0x80239554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B168_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B16C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B178: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B17C: bne         $v0, $zero, L_8023B1DC
    if (ctx->r2 != 0) {
        // 0x8023B180: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8023B1DC;
    }
    // 0x8023B180: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023B184: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B188: lui         $v0, 0x105F
    ctx->r2 = S32(0X105F << 16);
    // 0x8023B18C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023B190: lui         $v0, 0x790
    ctx->r2 = S32(0X790 << 16);
    // 0x8023B194: jal         0x8004DD04
    // 0x8023B198: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x8023B198: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B19C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B1A0: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B1A4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023B1A8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023B1AC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8023B1B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023B1B4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023B1B8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023B1BC: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
    // 0x8023B1C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023B1C4: lw          $a1, 0x1738($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1738);
    // 0x8023B1C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B1CC: jal         0x80050294
    // 0x8023B1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023B1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023B1D4: j           L_8023B1E4
    // 0x8023B1D8: nop

        goto L_8023B1E4;
    // 0x8023B1D8: nop

L_8023B1DC:
    // 0x8023B1DC: jal         0x8005044C
    // 0x8023B1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023B1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023B1E4:
    // 0x8023B1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B1E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B1EC: jr          $ra
    // 0x8023B1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BA10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA20: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022BA24: bne         $v0, $zero, L_8022BA3C
    if (ctx->r2 != 0) {
        // 0x8022BA28: nop
    
            goto L_8022BA3C;
    }
    // 0x8022BA28: nop

    // 0x8022BA2C: jal         0x80229F50
    // 0x8022BA30: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022BA30: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_0:
    // 0x8022BA34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BA38: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022BA3C:
    // 0x8022BA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA44: jr          $ra
    // 0x8022BA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024866C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024866C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80248670: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80248674: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248678: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8024867C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80248680: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80248684: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80248688: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8024868C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80248690: sltiu       $v0, $v1, 0x2A
    ctx->r2 = ctx->r3 < 0X2A ? 1 : 0;
    // 0x80248694: beq         $v0, $zero, L_80248B1C
    if (ctx->r2 == 0) {
        // 0x80248698: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80248B1C;
    }
    // 0x80248698: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024869C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802486A0: addu        $at, $at, $v0
    gpr jr_addend_802486A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802486A4: lw          $v0, 0x31D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X31D0);
    // 0x802486A8: jr          $v0
    // 0x802486AC: nop

    switch (jr_addend_802486A8 >> 2) {
        case 0: goto L_802486B0; break;
        case 1: goto L_802486D8; break;
        case 2: goto L_80248B1C; break;
        case 3: goto L_80248B1C; break;
        case 4: goto L_80248B1C; break;
        case 5: goto L_80248B1C; break;
        case 6: goto L_80248B1C; break;
        case 7: goto L_80248B1C; break;
        case 8: goto L_80248B1C; break;
        case 9: goto L_80248B1C; break;
        case 10: goto L_80248738; break;
        case 11: goto L_80248760; break;
        case 12: goto L_80248788; break;
        case 13: goto L_802487DC; break;
        case 14: goto L_802487F0; break;
        case 15: goto L_80248818; break;
        case 16: goto L_8024884C; break;
        case 17: goto L_80248878; break;
        case 18: goto L_80248B1C; break;
        case 19: goto L_80248B1C; break;
        case 20: goto L_802488A4; break;
        case 21: goto L_80248900; break;
        case 22: goto L_80248990; break;
        case 23: goto L_802489E0; break;
        case 24: goto L_802489F0; break;
        case 25: goto L_80248B1C; break;
        case 26: goto L_80248B1C; break;
        case 27: goto L_80248B1C; break;
        case 28: goto L_80248B1C; break;
        case 29: goto L_80248B1C; break;
        case 30: goto L_80248A04; break;
        case 31: goto L_80248A94; break;
        case 32: goto L_80248B1C; break;
        case 33: goto L_80248B1C; break;
        case 34: goto L_80248B1C; break;
        case 35: goto L_80248B1C; break;
        case 36: goto L_80248B1C; break;
        case 37: goto L_80248B1C; break;
        case 38: goto L_80248B1C; break;
        case 39: goto L_80248B1C; break;
        case 40: goto L_80248AAC; break;
        case 41: goto L_80248AF8; break;
        default: switch_error(__func__, 0x802486A8, 0x802531D0);
    }
    // 0x802486AC: nop

L_802486B0:
    // 0x802486B0: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x802486B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802486B8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802486BC: jal         0x80070E54
    // 0x802486C0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x802486C0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_0:
    // 0x802486C4: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x802486C8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80248B1C;
    }
    // 0x802486C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_802486CC:
    // 0x802486CC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802486D0: j           L_80248AE8
    // 0x802486D4: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_80248AE8;
    // 0x802486D4: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_802486D8:
    // 0x802486D8: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802486DC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802486E0: beq         $v0, $zero, L_802486F0
    if (ctx->r2 == 0) {
        // 0x802486E4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802486F0;
    }
    // 0x802486E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802486E8: j           L_80248B1C
    // 0x802486EC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x802486EC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802486F0:
    // 0x802486F0: jal         0x800A3450
    // 0x802486F4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802486F4: nop

    after_1:
    // 0x802486F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802486FC: beq         $v0, $zero, L_80248728
    if (ctx->r2 == 0) {
        // 0x80248700: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80248728;
    }
    // 0x80248700: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80248704: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x80248708: jal         0x80248CD4
    // 0x8024870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80248CD4_ovl10(rdram, ctx);
        goto after_2;
    // 0x8024870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80248710: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80248714: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80248718: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8024871C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80248720: j           L_80248B1C
    // 0x80248724: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x80248724: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80248728:
    // 0x80248728: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8024872C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80248730: j           L_80248B1C
    // 0x80248734: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x80248734: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80248738:
    // 0x80248738: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8024873C: bne         $v0, $zero, L_8024899C
    if (ctx->r2 != 0) {
        // 0x80248740: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024899C;
    }
    // 0x80248740: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80248744: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x80248748: jal         0x8002A33C
    // 0x8024874C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8024874C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_3:
    // 0x80248750: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80248754: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80248758: j           L_80248AEC
    // 0x8024875C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_80248AEC;
    // 0x8024875C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_80248760:
    // 0x80248760: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80248764: bne         $v0, $zero, L_8024899C
    if (ctx->r2 != 0) {
        // 0x80248768: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024899C;
    }
    // 0x80248768: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024876C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80248770: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x80248774: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80248778:
    // 0x80248778: jal         0x80061510
    // 0x8024877C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8024877C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80248780: j           L_80248AE8
    // 0x80248784: nop

        goto L_80248AE8;
    // 0x80248784: nop

L_80248788:
    // 0x80248788: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024878C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248790: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248794: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248798: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x8024879C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80248B1C;
    }
    // 0x8024879C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802487A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802487A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802487A8: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x802487AC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802487B0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802487B4: jal         0x80061510
    // 0x802487B8: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x802487B8: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    after_5:
    // 0x802487BC: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x802487C0: jal         0x8002A33C
    // 0x802487C4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802487C4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_6:
    // 0x802487C8: lh          $a0, 0xB0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XB0);
    // 0x802487CC: jal         0x80070F38
    // 0x802487D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_7;
    // 0x802487D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x802487D4: j           L_80248AE8
    // 0x802487D8: nop

        goto L_80248AE8;
    // 0x802487D8: nop

L_802487DC:
    // 0x802487DC: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802487E0: bltz        $v0, L_80248AE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802487E4: nop
    
            goto L_80248AE8;
    }
    // 0x802487E4: nop

    // 0x802487E8: j           L_80248B1C
    // 0x802487EC: nop

        goto L_80248B1C;
    // 0x802487EC: nop

L_802487F0:
    // 0x802487F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802487F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802487F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802487FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248800: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x80248804: nop
    
            goto L_80248B1C;
    }
    // 0x80248804: nop

    // 0x80248808: jal         0x80060D38
    // 0x8024880C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060D38_3C138(rdram, ctx);
        goto after_8;
    // 0x8024880C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x80248810: j           L_80248AE8
    // 0x80248814: nop

        goto L_80248AE8;
    // 0x80248814: nop

L_80248818:
    // 0x80248818: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024881C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248820: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248824: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248828: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x8024882C: nop
    
            goto L_80248B1C;
    }
    // 0x8024882C: nop

    // 0x80248830: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80248834: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x80248838: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024883C: jal         0x80061510
    // 0x80248840: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x80248840: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x80248844: j           L_802486CC
    // 0x80248848: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_802486CC;
    // 0x80248848: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_8024884C:
    // 0x8024884C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248850: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248854: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248858: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024885C: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x80248860: nop
    
            goto L_80248B1C;
    }
    // 0x80248860: nop

    // 0x80248864: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80248868: bgez        $v0, L_80248B1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024886C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80248B1C;
    }
    // 0x8024886C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80248870: j           L_802486CC
    // 0x80248874: nop

        goto L_802486CC;
    // 0x80248874: nop

L_80248878:
    // 0x80248878: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024887C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80248880: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80248884: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80248888: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x8024888C: nop
    
            goto L_80248B1C;
    }
    // 0x8024888C: nop

    // 0x80248890: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80248894: bgez        $v0, L_80248B1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80248898: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80248B1C;
    }
    // 0x80248898: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8024889C: j           L_80248AA4
    // 0x802488A0: nop

        goto L_80248AA4;
    // 0x802488A0: nop

L_802488A4:
    // 0x802488A4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802488A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802488AC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802488B0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802488B4: jal         0x8004D5D4
    // 0x802488B8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_10;
    // 0x802488B8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_10:
    // 0x802488BC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802488C0: jal         0x8002C654
    // 0x802488C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_11;
    // 0x802488C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x802488C8: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x802488CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802488D0: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x802488D4: jal         0x800319B4
    // 0x802488D8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_12;
    // 0x802488D8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_12:
    // 0x802488DC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802488E0: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x802488E4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802488E8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802488EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802488F0: jal         0x8002A33C
    // 0x802488F4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x802488F4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_13:
    // 0x802488F8: j           L_80248B1C
    // 0x802488FC: nop

        goto L_80248B1C;
    // 0x802488FC: nop

L_80248900:
    // 0x80248900: jal         0x8004F144
    // 0x80248904: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x80248904: nop

    after_14:
    // 0x80248908: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024890C: beq         $s0, $zero, L_80248B1C
    if (ctx->r16 == 0) {
        // 0x80248910: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80248B1C;
    }
    // 0x80248910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248914: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80248918: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8024891C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80248920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80248924: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80248928: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8024892C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80248930: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80248934: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80248938: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8024893C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80248940: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80248944: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80248948: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024894C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248950: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248954: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248958: lhu         $v0, 0x2328($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2328);
    // 0x8024895C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80248960: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80248964: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80248968: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8024896C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80248970: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x80248974: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80248978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8024897C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80248980: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80248984: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80248988: j           L_80248AEC
    // 0x8024898C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_80248AEC;
    // 0x8024898C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_80248990:
    // 0x80248990: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80248994: beq         $v0, $zero, L_802489A8
    if (ctx->r2 == 0) {
        // 0x80248998: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802489A8;
    }
    // 0x80248998: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8024899C:
    // 0x8024899C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802489A0: j           L_80248B1C
    // 0x802489A4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x802489A4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_802489A8:
    // 0x802489A8: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802489AC: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x802489B0: beq         $v0, $zero, L_802489D4
    if (ctx->r2 == 0) {
        // 0x802489B4: nop
    
            goto L_802489D4;
    }
    // 0x802489B4: nop

    // 0x802489B8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802489BC: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802489C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802489C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802489C8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802489CC: j           L_80248B1C
    // 0x802489D0: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_80248B1C;
    // 0x802489D0: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_802489D4:
    // 0x802489D4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802489D8: j           L_80248AEC
    // 0x802489DC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80248AEC;
    // 0x802489DC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_802489E0:
    // 0x802489E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802489E4: lw          $a1, 0x2B2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B2C);
    // 0x802489E8: j           L_80248778
    // 0x802489EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80248778;
    // 0x802489EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802489F0:
    // 0x802489F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802489F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802489F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802489FC: j           L_80248A9C
    // 0x80248A00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_80248A9C;
    // 0x80248A00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80248A04:
    // 0x80248A04: jal         0x8004F144
    // 0x80248A08: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_15;
    // 0x80248A08: nop

    after_15:
    // 0x80248A0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80248A10: beq         $s0, $zero, L_80248B1C
    if (ctx->r16 == 0) {
        // 0x80248A14: addiu       $a1, $s1, 0x38
        ctx->r5 = ADD32(ctx->r17, 0X38);
            goto L_80248B1C;
    }
    // 0x80248A14: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80248A18: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80248A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80248A20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80248A24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80248A28: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80248A2C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80248A30: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80248A34: jal         0x8009A3B4
    // 0x80248A38: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80248A38: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_16:
    // 0x80248A3C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80248A40: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80248A44: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80248A48: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80248A4C: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80248A50: sw          $s0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r16;
    // 0x80248A54: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80248A58: andi        $v1, $v1, 0x8
    ctx->r3 = ctx->r3 & 0X8;
    // 0x80248A5C: bne         $v1, $zero, L_80248A6C
    if (ctx->r3 != 0) {
        // 0x80248A60: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80248A6C;
    }
    // 0x80248A60: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80248A64: jal         0x80248C2C
    // 0x80248A68: nop

    func_80248C2C_ovl10(rdram, ctx);
        goto after_17;
    // 0x80248A68: nop

    after_17:
L_80248A6C:
    // 0x80248A6C: jal         0x80060D38
    // 0x80248A70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D38_3C138(rdram, ctx);
        goto after_18;
    // 0x80248A70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80248A74: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80248A78: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x80248A7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80248A80: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80248A84: jal         0x80248CD4
    // 0x80248A88: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_80248CD4_ovl10(rdram, ctx);
        goto after_19;
    // 0x80248A88: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_19:
    // 0x80248A8C: j           L_80248AE8
    // 0x80248A90: nop

        goto L_80248AE8;
    // 0x80248A90: nop

L_80248A94:
    // 0x80248A94: lw          $s0, 0x44($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X44);
    // 0x80248A98: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
L_80248A9C:
    // 0x80248A9C: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x80248AA0: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80248B1C;
    }
    // 0x80248AA0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_80248AA4:
    // 0x80248AA4: j           L_80248B1C
    // 0x80248AA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x80248AA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80248AAC:
    // 0x80248AAC: jal         0x8003516C
    // 0x80248AB0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_20;
    // 0x80248AB0: nop

    after_20:
    // 0x80248AB4: bne         $v0, $zero, L_80248B1C
    if (ctx->r2 != 0) {
        // 0x80248AB8: nop
    
            goto L_80248B1C;
    }
    // 0x80248AB8: nop

    // 0x80248ABC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80248AC0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80248AC4: bne         $v0, $zero, L_80248AE8
    if (ctx->r2 != 0) {
        // 0x80248AC8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80248AE8;
    }
    // 0x80248AC8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80248ACC: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80248AD0: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    // 0x80248AD4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80248AD8: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x80248ADC: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x80248AE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248AE4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_80248AE8:
    // 0x80248AE8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80248AEC:
    // 0x80248AEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248AF0: j           L_80248B1C
    // 0x80248AF4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80248B1C;
    // 0x80248AF4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80248AF8:
    // 0x80248AF8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80248AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248B00: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80248B04: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80248B08: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x80248B0C: beq         $v1, $zero, L_80248B1C
    if (ctx->r3 == 0) {
        // 0x80248B10: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80248B1C;
    }
    // 0x80248B10: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80248B14: jal         0x8004F684
    // 0x80248B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_21;
    // 0x80248B18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
L_80248B1C:
    // 0x80248B1C: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80248B20: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80248B24: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80248B28: beq         $v0, $zero, L_80248B6C
    if (ctx->r2 == 0) {
        // 0x80248B2C: nop
    
            goto L_80248B6C;
    }
    // 0x80248B2C: nop

    // 0x80248B30: jal         0x80061724
    // 0x80248B34: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_22;
    // 0x80248B34: nop

    after_22:
    // 0x80248B38: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80248B3C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x80248B40: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80248B44: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80248B48: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80248B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248B50: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80248B54: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80248B58: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x80248B5C: beq         $v1, $zero, L_80248B6C
    if (ctx->r3 == 0) {
        // 0x80248B60: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_80248B6C;
    }
    // 0x80248B60: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80248B64: jal         0x8004F684
    // 0x80248B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_23;
    // 0x80248B68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_23:
L_80248B6C:
    // 0x80248B6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80248B70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80248B74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80248B78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80248B7C: jr          $ra
    // 0x80248B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80248B80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233E60_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233E64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233E68: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80233E6C: bne         $v0, $zero, L_80233F04
    if (ctx->r2 != 0) {
        // 0x80233E70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233F04;
    }
    // 0x80233E70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E74: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80233E78: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80233E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E80: beq         $v1, $v0, L_80233EE0
    if (ctx->r3 == ctx->r2) {
        // 0x80233E84: sh          $zero, 0x34C($a0)
        MEM_H(0X34C, ctx->r4) = 0;
            goto L_80233EE0;
    }
    // 0x80233E84: sh          $zero, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = 0;
    // 0x80233E88: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233E8C: beql        $v0, $zero, L_80233EA4
    if (ctx->r2 == 0) {
        // 0x80233E90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233EA4;
    }
    goto skip_0;
    // 0x80233E90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233E94: beq         $v1, $zero, L_80233EB4
    if (ctx->r3 == 0) {
        // 0x80233E98: addiu       $a1, $zero, 0xC0
        ctx->r5 = ADD32(0, 0XC0);
            goto L_80233EB4;
    }
    // 0x80233E98: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80233E9C: j           L_80233FBC
    // 0x80233EA0: nop

        goto L_80233FBC;
    // 0x80233EA0: nop

L_80233EA4:
    // 0x80233EA4: beq         $v1, $v0, L_80233EF4
    if (ctx->r3 == ctx->r2) {
        // 0x80233EA8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80233EF4;
    }
    // 0x80233EA8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233EAC: j           L_80233FBC
    // 0x80233EB0: nop

        goto L_80233FBC;
    // 0x80233EB0: nop

L_80233EB4:
    // 0x80233EB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233EB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233EBC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233EC0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233EC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233EC8: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
    // 0x80233ECC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80233ED0: jal         0x8004DA90
    // 0x80233ED4: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80233ED4: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    after_0:
    // 0x80233ED8: j           L_80233FBC
    // 0x80233EDC: nop

        goto L_80233FBC;
    // 0x80233EDC: nop

L_80233EE0:
    // 0x80233EE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233EE4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80233EE8: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
    // 0x80233EEC: j           L_80233FBC
    // 0x80233EF0: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
        goto L_80233FBC;
    // 0x80233EF0: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
L_80233EF4:
    // 0x80233EF4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233EF8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233EFC: j           L_80233FBC
    // 0x80233F00: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
        goto L_80233FBC;
    // 0x80233F00: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_80233F04:
    // 0x80233F04: lhu         $v0, 0x34C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34C);
    // 0x80233F08: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80233F0C: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x80233F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F14: beq         $v1, $v0, L_80233F5C
    if (ctx->r3 == ctx->r2) {
        // 0x80233F18: sh          $a1, 0x34C($a0)
        MEM_H(0X34C, ctx->r4) = ctx->r5;
            goto L_80233F5C;
    }
    // 0x80233F18: sh          $a1, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r5;
    // 0x80233F1C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233F20: beql        $v0, $zero, L_80233F38
    if (ctx->r2 == 0) {
        // 0x80233F24: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233F38;
    }
    goto skip_1;
    // 0x80233F24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80233F28: beq         $v1, $zero, L_80233F48
    if (ctx->r3 == 0) {
        // 0x80233F2C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80233F48;
    }
    // 0x80233F2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233F30: j           L_80233FBC
    // 0x80233F34: nop

        goto L_80233FBC;
    // 0x80233F34: nop

L_80233F38:
    // 0x80233F38: beq         $v1, $v0, L_80233FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80233F3C: nop
    
            goto L_80233FAC;
    }
    // 0x80233F3C: nop

    // 0x80233F40: j           L_80233FBC
    // 0x80233F44: nop

        goto L_80233FBC;
    // 0x80233F44: nop

L_80233F48:
    // 0x80233F48: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80233F4C: jal         0x8004DA90
    // 0x80233F50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80233F50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80233F54: j           L_80233FBC
    // 0x80233F58: nop

        goto L_80233FBC;
    // 0x80233F58: nop

L_80233F5C:
    // 0x80233F5C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80233F60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233F64: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x80233F68: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80233F6C: xori        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 ^ 0XF;
    // 0x80233F70: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80233F74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233F78: beq         $v1, $zero, L_80233F84
    if (ctx->r3 == 0) {
        // 0x80233F7C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80233F84;
    }
    // 0x80233F7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233F80: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_80233F84:
    // 0x80233F84: lh          $v0, 0x34C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X34C);
    // 0x80233F88: xori        $v1, $v0, 0xA
    ctx->r3 = ctx->r2 ^ 0XA;
    // 0x80233F8C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80233F90: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x80233F94: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80233F98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233F9C: beq         $v1, $zero, L_80233FBC
    if (ctx->r3 == 0) {
        // 0x80233FA0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80233FBC;
    }
    // 0x80233FA0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233FA4: j           L_80233FBC
    // 0x80233FA8: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
        goto L_80233FBC;
    // 0x80233FA8: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_80233FAC:
    // 0x80233FAC: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80233FB0: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80233FB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233FB8: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_80233FBC:
    // 0x80233FBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233FC0: jr          $ra
    // 0x80233FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
