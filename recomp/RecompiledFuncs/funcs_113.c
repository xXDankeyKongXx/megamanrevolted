#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80229954_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229958: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022995C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229960: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229964: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229968: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022996C: lw          $v0, 0x18B4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X18B4);
    // 0x80229970: jalr        $v0
    // 0x80229974: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229974: nop

    after_0:
    // 0x80229978: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022997C: jr          $ra
    // 0x80229980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BD18_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BD1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BD20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BD24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BD28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD2C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BD30: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022BD34: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022BD38: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BD3C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022BD40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022BD44: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8022BD48: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022BD4C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022BD50: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x8022BD54: bne         $v1, $v0, L_8022BD6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BD58: addiu       $s0, $s1, 0x2E8
        ctx->r16 = ADD32(ctx->r17, 0X2E8);
            goto L_8022BD6C;
    }
    // 0x8022BD58: addiu       $s0, $s1, 0x2E8
    ctx->r16 = ADD32(ctx->r17, 0X2E8);
    // 0x8022BD5C: jal         0x8004D5FC
    // 0x8022BD60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022BD60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022BD64: j           L_8022BD7C
    // 0x8022BD68: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
        goto L_8022BD7C;
    // 0x8022BD68: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022BD6C:
    // 0x8022BD6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BD70: jal         0x8004D5D4
    // 0x8022BD74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022BD74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8022BD78: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022BD7C:
    // 0x8022BD7C: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022BD80: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022BD84: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022BD88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BD8C: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
    // 0x8022BD90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BD94: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8022BD98: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022BD9C: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x8022BDA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BDA4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022BDA8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022BDAC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022BDB0: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8022BDB4: sb          $zero, 0x50($s0)
    MEM_B(0X50, ctx->r16) = 0;
    // 0x8022BDB8: sb          $zero, 0x53($s0)
    MEM_B(0X53, ctx->r16) = 0;
    // 0x8022BDBC: sb          $zero, 0x54($s0)
    MEM_B(0X54, ctx->r16) = 0;
    // 0x8022BDC0: sb          $zero, 0x4E($s0)
    MEM_B(0X4E, ctx->r16) = 0;
    // 0x8022BDC4: sb          $zero, 0x48($s0)
    MEM_B(0X48, ctx->r16) = 0;
    // 0x8022BDC8: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x8022BDCC: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x8022BDD0: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022BDD4: beq         $v1, $zero, L_8022BDEC
    if (ctx->r3 == 0) {
        // 0x8022BDD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BDEC;
    }
    // 0x8022BDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BDDC: bnel        $v1, $v0, L_8022BDF0
    if (ctx->r3 != ctx->r2) {
        // 0x8022BDE0: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_8022BDF0;
    }
    goto skip_0;
    // 0x8022BDE0: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    skip_0:
    // 0x8022BDE4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022BDE8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022BDEC:
    // 0x8022BDEC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
L_8022BDF0:
    // 0x8022BDF0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8022BDF4: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022BDF8: jal         0x800540BC
    // 0x8022BDFC: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022BDFC: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    after_2:
    // 0x8022BE00: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BE04: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BE08: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BE0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BE10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BE14: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022BE18: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022BE1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BE20: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x8022BE24: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022BE28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BE2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE30: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022BE34: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BE38: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x8022BE3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BE40: addiu       $v0, $v0, 0x19A0
    ctx->r2 = ADD32(ctx->r2, 0X19A0);
    // 0x8022BE44: sb          $zero, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = 0;
    // 0x8022BE48: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022BE4C: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x8022BE50: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x8022BE54: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BE58: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x8022BE5C: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x8022BE60: jal         0x800502EC
    // 0x8022BE64: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x8022BE64: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022BE68: jal         0x80051248
    // 0x8022BE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_4;
    // 0x8022BE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022BE70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BE74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE7C: jr          $ra
    // 0x8022BE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F3D4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3D4: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F3D8: beq         $v1, $zero, L_8022F3F0
    if (ctx->r3 == 0) {
        // 0x8022F3DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F3F0;
    }
    // 0x8022F3DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F3E0: beq         $v1, $v0, L_8022F414
    if (ctx->r3 == ctx->r2) {
        // 0x8022F3E4: nop
    
            goto L_8022F414;
    }
    // 0x8022F3E4: nop

    // 0x8022F3E8: j           L_8022F430
    // 0x8022F3EC: nop

        goto L_8022F430;
    // 0x8022F3EC: nop

L_8022F3F0:
    // 0x8022F3F0: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x8022F3F4: sltiu       $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 < 0X3F ? 1 : 0;
    // 0x8022F3F8: beq         $v0, $zero, L_8022F424
    if (ctx->r2 == 0) {
        // 0x8022F3FC: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_8022F424;
    }
    // 0x8022F3FC: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x8022F400: beq         $v0, $zero, L_8022F430
    if (ctx->r2 == 0) {
        // 0x8022F404: nop
    
            goto L_8022F430;
    }
    // 0x8022F404: nop

    // 0x8022F408: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8022F40C: j           L_8022F42C
    // 0x8022F410: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022F42C;
    // 0x8022F410: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022F414:
    // 0x8022F414: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8022F418: sltiu       $v0, $v0, 0xE1
    ctx->r2 = ctx->r2 < 0XE1 ? 1 : 0;
    // 0x8022F41C: bne         $v0, $zero, L_8022F430
    if (ctx->r2 != 0) {
        // 0x8022F420: nop
    
            goto L_8022F430;
    }
    // 0x8022F420: nop

L_8022F424:
    // 0x8022F424: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8022F428: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8022F42C:
    // 0x8022F42C: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_8022F430:
    // 0x8022F430: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8022F434: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F438: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x8022F43C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F440: bne         $v0, $zero, L_8022F454
    if (ctx->r2 != 0) {
        // 0x8022F444: nop
    
            goto L_8022F454;
    }
    // 0x8022F444: nop

    // 0x8022F448: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F44C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F450: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8022F454:
    // 0x8022F454: jr          $ra
    // 0x8022F458: nop

    TRACE_RETURN()
    return;
    // 0x8022F458: nop

;}
RECOMP_FUNC void func_80227888_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022788C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227894: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80227898: lw          $a2, 0x1D30($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1D30);
    // 0x8022789C: addiu       $v0, $zero, -0x188C
    ctx->r2 = ADD32(0, -0X188C);
    // 0x802278A0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802278A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278A8: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x802278AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278B0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x802278B4: addiu       $v0, $zero, 0x14C0
    ctx->r2 = ADD32(0, 0X14C0);
    // 0x802278B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278BC: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802278C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278C4: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x802278C8: lui         $v0, 0xE774
    ctx->r2 = S32(0XE774 << 16);
    // 0x802278CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278D0: sw          $v0, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = ctx->r2;
    // 0x802278D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278D8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802278DC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802278E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278E4: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x802278E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278EC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802278F0: lui         $v0, 0x14C0
    ctx->r2 = S32(0X14C0 << 16);
    // 0x802278F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278F8: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x802278FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227900: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80227904: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022790C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227910: sh          $a0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r4;
    // 0x80227914: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227918: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x8022791C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227920: sh          $v0, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = ctx->r2;
    // 0x80227924: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227928: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x8022792C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227930: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80227934: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x80227938: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022793C: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80227940: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227944: lw          $v1, 0x1D30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D30);
    // 0x80227948: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022794C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80227950: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227954: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x80227958: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x8022795C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227960: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x80227964: addiu       $v1, $zero, -0x1ADA
    ctx->r3 = ADD32(0, -0X1ADA);
    // 0x80227968: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x8022796C: addiu       $v1, $zero, 0x109B
    ctx->r3 = ADD32(0, 0X109B);
    // 0x80227970: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80227974: lh          $v1, 0x14($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X14);
    // 0x80227978: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
    // 0x8022797C: lh          $a0, 0x16($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X16);
    // 0x80227980: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    // 0x80227984: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x80227988: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022798C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227990: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227994: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80227998: addiu       $v1, $zero, 0x5B
    ctx->r3 = ADD32(0, 0X5B);
    // 0x8022799C: sw          $a0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r4;
    // 0x802279A0: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x802279A4: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x802279A8: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x802279AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802279B0: sb          $v0, 0xF0($a2)
    MEM_B(0XF0, ctx->r6) = ctx->r2;
    // 0x802279B4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802279B8: lw          $v1, 0x1D30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1D30);
    // 0x802279BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802279C0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802279C4: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x802279C8: jal         0x80070050
    // 0x802279CC: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x802279CC: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    after_0:
    // 0x802279D0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802279D4: jal         0x8004CB2C
    // 0x802279D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x802279D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802279DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802279E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279E8: jr          $ra
    // 0x802279EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F030_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F034: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022F038: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F03C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F040: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022F044: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022F048: jal         0x80071060
    // 0x8022F04C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8022F04C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8022F050: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022F054: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x8022F058: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F05C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F060: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x8022F064: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022F068: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x8022F06C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8022F070: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F074: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022F078: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x8022F07C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022F080: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x8022F084: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F088: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x8022F08C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F090: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F094: bne         $a0, $zero, L_8022F0A0
    if (ctx->r4 != 0) {
        // 0x8022F098: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_8022F0A0;
    }
    // 0x8022F098: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8022F09C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_8022F0A0:
    // 0x8022F0A0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F0A4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F0A8: beq         $v0, $zero, L_8022F0EC
    if (ctx->r2 == 0) {
        // 0x8022F0AC: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8022F0EC;
    }
    // 0x8022F0AC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022F0B0: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8022F0B4: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x8022F0B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022F0BC: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F0C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F0C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F0C8: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x8022F0CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F0D0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F0D4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022F0D8: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022F0DC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F0E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F0E4: j           L_8022F144
    // 0x8022F0E8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_8022F144;
    // 0x8022F0E8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8022F0EC:
    // 0x8022F0EC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022F0F0: beq         $v0, $zero, L_8022F10C
    if (ctx->r2 == 0) {
        // 0x8022F0F4: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_8022F10C;
    }
    // 0x8022F0F4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022F0F8: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F0FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F100: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F104: j           L_8022F120
    // 0x8022F108: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8022F120;
    // 0x8022F108: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022F10C:
    // 0x8022F10C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022F110: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022F114: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F118: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F11C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_8022F120:
    // 0x8022F120: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F124: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F128: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022F12C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022F130: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F134: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022F138: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8022F13C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F140: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022F144:
    // 0x8022F144: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8022F148: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022F14C: jal         0x80051F9C
    // 0x8022F150: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x8022F150: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022F154: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F158: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022F15C: jr          $ra
    // 0x8022F160: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F160: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022F45C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F45C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F460: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F464: jal         0x8004F5C4
    // 0x8022F468: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022F468: nop

    after_0:
    // 0x8022F46C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F470: jr          $ra
    // 0x8022F474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022F478: nop

    // 0x8022F47C: nop

;}
RECOMP_FUNC void func_8022911C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022911C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022912C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80229130: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229134: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229138: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022913C: bne         $v0, $zero, L_80229164
    if (ctx->r2 != 0) {
        // 0x80229140: nop
    
            goto L_80229164;
    }
    // 0x80229140: nop

    // 0x80229144: jal         0x8022ADA0
    // 0x80229148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022ADA0_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022914C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229150: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229154: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80229158: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022915C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229160: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229164:
    // 0x80229164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229168: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022916C: jr          $ra
    // 0x80229170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1B8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1B8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022C1BC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022C1C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C1C4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8022C1C8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022C1CC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022C1D0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022C1D4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022C1D8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022C1DC: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8022C1E0: bne         $v1, $zero, L_8022C340
    if (ctx->r3 != 0) {
        // 0x8022C1E4: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022C340;
    }
    // 0x8022C1E4: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022C1E8: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022C1EC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C1F0: beq         $v0, $zero, L_8022C67C
    if (ctx->r2 == 0) {
        // 0x8022C1F4: addiu       $s4, $s1, 0x14
        ctx->r20 = ADD32(ctx->r17, 0X14);
            goto L_8022C67C;
    }
    // 0x8022C1F4: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022C1F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C1FC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022C200: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022C204: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C208: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C20C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8022C210: jal         0x8004F820
    // 0x8022C214: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C214: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022C218: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022C21C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C220: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C224: lhu         $v0, 0x32C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022C228: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C22C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C230: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C234: jal         0x8004F820
    // 0x8022C238: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C238: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022C23C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C240: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C244: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022C248: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022C24C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C250: beq         $v0, $zero, L_8022C288
    if (ctx->r2 == 0) {
        // 0x8022C254: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022C288;
    }
    // 0x8022C254: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022C258: lb          $v0, 0x330($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X330);
    // 0x8022C25C: bne         $v0, $zero, L_8022C27C
    if (ctx->r2 != 0) {
        // 0x8022C260: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C27C;
    }
    // 0x8022C260: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C264: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022C268: jal         0x8002A33C
    // 0x8022C26C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C26C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8022C270: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022C274: j           L_8022C28C
    // 0x8022C278: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022C28C;
    // 0x8022C278: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022C27C:
    // 0x8022C27C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C280: j           L_8022C28C
    // 0x8022C284: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022C28C;
    // 0x8022C284: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022C288:
    // 0x8022C288: sb          $zero, 0x330($s1)
    MEM_B(0X330, ctx->r17) = 0;
L_8022C28C:
    // 0x8022C28C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022C290: beql        $v0, $zero, L_8022C2C4
    if (ctx->r2 == 0) {
        // 0x8022C294: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022C2C4;
    }
    goto skip_0;
    // 0x8022C294: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_0:
    // 0x8022C298: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022C29C: bne         $v0, $zero, L_8022C2BC
    if (ctx->r2 != 0) {
        // 0x8022C2A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C2BC;
    }
    // 0x8022C2A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C2A4: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022C2A8: jal         0x8002A33C
    // 0x8022C2AC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022C2AC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022C2B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C2B4: j           L_8022C2C4
    // 0x8022C2B8: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022C2C4;
    // 0x8022C2B8: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022C2BC:
    // 0x8022C2BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C2C0: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022C2C4:
    // 0x8022C2C4: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8022C2C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022C2CC: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022C2D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C2D4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C2D8: mflo        $v1
    ctx->r3 = lo;
    // 0x8022C2DC: nop

    // 0x8022C2E0: nop

    // 0x8022C2E4: blez        $v1, L_8022C304
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022C2E8: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022C304;
    }
    // 0x8022C2E8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C2EC: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C2F0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C2F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C2F8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C2FC: j           L_8022C318
    // 0x8022C300: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022C318;
    // 0x8022C300: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022C304:
    // 0x8022C304: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C308: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C30C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C310: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C314: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022C318:
    // 0x8022C318: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C31C: jal         0x8004F820
    // 0x8022C320: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022C320: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_4:
    // 0x8022C324: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C328: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C32C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C330: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022C334: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C338: j           L_8022C674
    // 0x8022C33C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
        goto L_8022C674;
    // 0x8022C33C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
L_8022C340:
    // 0x8022C340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C344: bne         $v1, $v0, L_8022C53C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C348: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C53C;
    }
    // 0x8022C348: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C34C: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022C350: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022C354: beq         $v0, $zero, L_8022C67C
    if (ctx->r2 == 0) {
        // 0x8022C358: nop
    
            goto L_8022C67C;
    }
    // 0x8022C358: nop

    // 0x8022C35C: lbu         $v0, 0x336($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X336);
    // 0x8022C360: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C364: bne         $v0, $zero, L_8022C39C
    if (ctx->r2 != 0) {
        // 0x8022C368: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022C39C;
    }
    // 0x8022C368: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022C36C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C370: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C374: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C378: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C37C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C380: jal         0x8004F820
    // 0x8022C384: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022C384: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_5:
    // 0x8022C388: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C38C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022C390: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022C394: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C398: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8022C39C:
    // 0x8022C39C: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022C3A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022C3A4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C3A8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C3AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C3B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C3B4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C3B8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C3BC: jal         0x8004F820
    // 0x8022C3C0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022C3C0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_6:
    // 0x8022C3C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C3C8: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022C3CC: beql        $v0, $zero, L_8022C400
    if (ctx->r2 == 0) {
        // 0x8022C3D0: sb          $zero, 0x48($s2)
        MEM_B(0X48, ctx->r18) = 0;
            goto L_8022C400;
    }
    goto skip_1;
    // 0x8022C3D0: sb          $zero, 0x48($s2)
    MEM_B(0X48, ctx->r18) = 0;
    skip_1:
    // 0x8022C3D4: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022C3D8: bne         $v0, $zero, L_8022C3F8
    if (ctx->r2 != 0) {
        // 0x8022C3DC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C3F8;
    }
    // 0x8022C3DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C3E0: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022C3E4: jal         0x8002A33C
    // 0x8022C3E8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022C3E8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x8022C3EC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022C3F0: j           L_8022C400
    // 0x8022C3F4: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
        goto L_8022C400;
    // 0x8022C3F4: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022C3F8:
    // 0x8022C3F8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C3FC: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022C400:
    // 0x8022C400: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022C404: beql        $v0, $zero, L_8022C438
    if (ctx->r2 == 0) {
        // 0x8022C408: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022C438;
    }
    goto skip_2;
    // 0x8022C408: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_2:
    // 0x8022C40C: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022C410: bne         $v0, $zero, L_8022C430
    if (ctx->r2 != 0) {
        // 0x8022C414: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C430;
    }
    // 0x8022C414: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C418: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022C41C: jal         0x8002A33C
    // 0x8022C420: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022C420: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x8022C424: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C428: j           L_8022C438
    // 0x8022C42C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022C438;
    // 0x8022C42C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022C430:
    // 0x8022C430: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C434: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022C438:
    // 0x8022C438: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022C43C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C440: beq         $v1, $zero, L_8022C4A0
    if (ctx->r3 == 0) {
        // 0x8022C444: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8022C4A0;
    }
    // 0x8022C444: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022C448: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C44C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C450: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C454: nop

    // 0x8022C458: nop

    // 0x8022C45C: blez        $v0, L_8022C47C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022C460: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022C47C;
    }
    // 0x8022C460: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C464: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C468: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C46C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C470: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C474: j           L_8022C490
    // 0x8022C478: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022C490;
    // 0x8022C478: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022C47C:
    // 0x8022C47C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C480: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C484: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C488: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C48C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022C490:
    // 0x8022C490: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C494: jal         0x8004F820
    // 0x8022C498: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8022C498: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x8022C49C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8022C4A0:
    // 0x8022C4A0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C4A4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022C4A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C4AC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022C4B0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022C4B4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C4B8: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022C4BC: bne         $v0, $zero, L_8022C4D8
    if (ctx->r2 != 0) {
        // 0x8022C4C0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C4D8;
    }
    // 0x8022C4C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C4C4: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022C4C8: jal         0x8002A33C
    // 0x8022C4CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022C4CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_10:
    // 0x8022C4D0: j           L_8022C4DC
    // 0x8022C4D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022C4DC;
    // 0x8022C4D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022C4D8:
    // 0x8022C4D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022C4DC:
    // 0x8022C4DC: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022C4E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C4E4: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022C4E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C4EC: jal         0x8004DA90
    // 0x8022C4F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x8022C4F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022C4F4: jal         0x80040F30
    // 0x8022C4F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x8022C4F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022C4FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C500: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x8022C504: bne         $v0, $zero, L_8022C524
    if (ctx->r2 != 0) {
        // 0x8022C508: andi        $v0, $s0, 0xF00
        ctx->r2 = ctx->r16 & 0XF00;
            goto L_8022C524;
    }
    // 0x8022C508: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
    // 0x8022C50C: jal         0x8003E934
    // 0x8022C510: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8022C510: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022C514: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C51C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022C520: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
L_8022C524:
    // 0x8022C524: beq         $v0, $zero, L_8022C670
    if (ctx->r2 == 0) {
        // 0x8022C528: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C670;
    }
    // 0x8022C528: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C52C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022C530: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C534: j           L_8022C67C
    // 0x8022C538: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
        goto L_8022C67C;
    // 0x8022C538: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022C53C:
    // 0x8022C53C: bne         $v1, $v0, L_8022C67C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C540: addiu       $s3, $s1, 0x14
        ctx->r19 = ADD32(ctx->r17, 0X14);
            goto L_8022C67C;
    }
    // 0x8022C540: addiu       $s3, $s1, 0x14
    ctx->r19 = ADD32(ctx->r17, 0X14);
    // 0x8022C544: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C548: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022C54C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C550: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C554: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022C558: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C55C: lhu         $a2, 0x32C($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022C560: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022C564: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022C568: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C56C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C570: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C574: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022C578: jal         0x8004F820
    // 0x8022C57C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_14;
    // 0x8022C57C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_14:
    // 0x8022C580: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C584: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022C588: beql        $v0, $zero, L_8022C5BC
    if (ctx->r2 == 0) {
        // 0x8022C58C: sb          $zero, 0x331($s1)
        MEM_B(0X331, ctx->r17) = 0;
            goto L_8022C5BC;
    }
    goto skip_3;
    // 0x8022C58C: sb          $zero, 0x331($s1)
    MEM_B(0X331, ctx->r17) = 0;
    skip_3:
    // 0x8022C590: lb          $v0, 0x331($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X331);
    // 0x8022C594: bne         $v0, $zero, L_8022C5B4
    if (ctx->r2 != 0) {
        // 0x8022C598: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C5B4;
    }
    // 0x8022C598: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C59C: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022C5A0: jal         0x8002A33C
    // 0x8022C5A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022C5A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_15:
    // 0x8022C5A8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C5AC: j           L_8022C5BC
    // 0x8022C5B0: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
        goto L_8022C5BC;
    // 0x8022C5B0: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022C5B4:
    // 0x8022C5B4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C5B8: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022C5BC:
    // 0x8022C5BC: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022C5C0: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022C5C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C5C8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C5CC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C5D0: nop

    // 0x8022C5D4: nop

    // 0x8022C5D8: blez        $v0, L_8022C5F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022C5DC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022C5F8;
    }
    // 0x8022C5DC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C5E0: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C5E4: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C5E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C5EC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C5F0: j           L_8022C60C
    // 0x8022C5F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022C60C;
    // 0x8022C5F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022C5F8:
    // 0x8022C5F8: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C5FC: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C600: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C604: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C608: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022C60C:
    // 0x8022C60C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C610: jal         0x8004F820
    // 0x8022C614: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x8022C614: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x8022C618: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C61C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022C620: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022C624: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C628: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022C62C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022C630: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C634: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022C638: bne         $v0, $zero, L_8022C654
    if (ctx->r2 != 0) {
        // 0x8022C63C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C654;
    }
    // 0x8022C63C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C640: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022C644: jal         0x8002A33C
    // 0x8022C648: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x8022C648: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_17:
    // 0x8022C64C: j           L_8022C658
    // 0x8022C650: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8022C658;
    // 0x8022C650: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8022C654:
    // 0x8022C654: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022C658:
    // 0x8022C658: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022C65C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C660: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022C664: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C668: jal         0x8004DA90
    // 0x8022C66C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x8022C66C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
L_8022C670:
    // 0x8022C670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022C674:
    // 0x8022C674: jal         0x8022CE0C
    // 0x8022C678: nop

    func_8022CE0C_ovl14(rdram, ctx);
        goto after_19;
    // 0x8022C678: nop

    after_19:
L_8022C67C:
    // 0x8022C67C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8022C680: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022C684: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022C688: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022C68C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022C690: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022C694: jr          $ra
    // 0x8022C698: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022C698: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022F250_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F254: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F258: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8022F25C: bne         $v0, $zero, L_8022F27C
    if (ctx->r2 != 0) {
        // 0x8022F260: nop
    
            goto L_8022F27C;
    }
    // 0x8022F260: nop

    // 0x8022F264: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F268: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F26C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F270: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F274: j           L_8022F290
    // 0x8022F278: lw          $v0, 0x1AA8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AA8);
        goto L_8022F290;
    // 0x8022F278: lw          $v0, 0x1AA8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AA8);
L_8022F27C:
    // 0x8022F27C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F284: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F288: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F28C: lw          $v0, 0x1AA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AA0);
L_8022F290:
    // 0x8022F290: jalr        $v0
    // 0x8022F294: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F294: nop

    after_0:
    // 0x8022F298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F29C: jr          $ra
    // 0x8022F2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B9E8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B9EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B9F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B9F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B9F8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022B9FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BA00: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022BA04: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022BA08: jal         0x8004DA90
    // 0x8022BA0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022BA0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022BA10: jal         0x8003E810
    // 0x8022BA14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022BA14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022BA18: bne         $v0, $zero, L_8022BA34
    if (ctx->r2 != 0) {
        // 0x8022BA1C: nop
    
            goto L_8022BA34;
    }
    // 0x8022BA1C: nop

    // 0x8022BA20: jal         0x80040F30
    // 0x8022BA24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022BA24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BA28: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022BA2C: j           L_8022BA40
    // 0x8022BA30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022BA40;
    // 0x8022BA30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022BA34:
    // 0x8022BA34: jal         0x8004F418
    // 0x8022BA38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022BA38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BA40:
    // 0x8022BA40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA4C: jr          $ra
    // 0x8022BA50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BA50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B97C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B97C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B984: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B988: beq         $a1, $zero, L_8022B9D8
    if (ctx->r5 == 0) {
        // 0x8022B98C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B9D8;
    }
    // 0x8022B98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B990: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B994: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B998: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022B99C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B9A0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B9A4: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8022B9A8: bne         $v0, $zero, L_8022B9D8
    if (ctx->r2 != 0) {
        // 0x8022B9AC: nop
    
            goto L_8022B9D8;
    }
    // 0x8022B9AC: nop

    // 0x8022B9B0: jal         0x800A3450
    // 0x8022B9B4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B9B4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x8022B9B8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022B9BC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022B9C0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B9C4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B9C8: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022B9CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B9D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B9D4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022B9D8:
    // 0x8022B9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B9DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9E0: jr          $ra
    // 0x8022B9E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B9E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A154_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A158: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A15C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A160: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A164: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A168: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022A16C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A170: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A174: jal         0x8004FA7C
    // 0x8022A178: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A178: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022A17C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A180: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A184: beq         $v0, $zero, L_8022A218
    if (ctx->r2 == 0) {
        // 0x8022A188: nop
    
            goto L_8022A218;
    }
    // 0x8022A188: nop

    // 0x8022A18C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A190: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022A194: bne         $v0, $zero, L_8022A218
    if (ctx->r2 != 0) {
        // 0x8022A198: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A218;
    }
    // 0x8022A198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A19C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022A1A0: beq         $v1, $v0, L_8022A1B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A1B8;
    }
    // 0x8022A1A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A1A8: beq         $v1, $v0, L_8022A1E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A1E8;
    }
    // 0x8022A1AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A1B0: j           L_8022A20C
    // 0x8022A1B4: nop

        goto L_8022A20C;
    // 0x8022A1B4: nop

L_8022A1B8:
    // 0x8022A1B8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A1BC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022A1C0: bne         $v0, $zero, L_8022A20C
    if (ctx->r2 != 0) {
        // 0x8022A1C4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A20C;
    }
    // 0x8022A1C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A1C8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022A1CC: bne         $v0, $zero, L_8022A20C
    if (ctx->r2 != 0) {
        // 0x8022A1D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A20C;
    }
    // 0x8022A1D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A1D8: bne         $v1, $v0, L_8022A20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A1DC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A20C;
    }
    // 0x8022A1DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A1E0: j           L_8022A20C
    // 0x8022A1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A20C;
    // 0x8022A1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A1E8:
    // 0x8022A1E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A1EC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022A1F0: beq         $v0, $zero, L_8022A208
    if (ctx->r2 == 0) {
        // 0x8022A1F4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022A208;
    }
    // 0x8022A1F4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022A1F8: bne         $v0, $zero, L_8022A20C
    if (ctx->r2 != 0) {
        // 0x8022A1FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A20C;
    }
    // 0x8022A1FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A200: j           L_8022A20C
    // 0x8022A204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A20C;
    // 0x8022A204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A208:
    // 0x8022A208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A20C:
    // 0x8022A20C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A210: beq         $v0, $zero, L_8022A23C
    if (ctx->r2 == 0) {
        // 0x8022A214: nop
    
            goto L_8022A23C;
    }
    // 0x8022A214: nop

L_8022A218:
    // 0x8022A218: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A21C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A220: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A224: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A228: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A22C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A230: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A234: j           L_8022A24C
    // 0x8022A238: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A24C;
    // 0x8022A238: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A23C:
    // 0x8022A23C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A240: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A244: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A248: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_8022AED4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AED4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022AED8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022AEDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AEE0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022AEE4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022AEE8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022AEEC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022AEF0: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022AEF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022AEF8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AEFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AF00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022AF04: jal         0x8004DC2C
    // 0x8022AF08: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022AF08: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022AF0C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022AF10: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022AF14: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022AF18: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022AF1C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022AF20: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022AF24: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022AF28: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022AF2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AF30: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022AF34: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022AF38: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022AF3C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022AF40: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022AF44: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022AF48: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022AF4C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022AF50: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022AF54: beq         $a0, $zero, L_8022AF64
    if (ctx->r4 == 0) {
        // 0x8022AF58: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AF64;
    }
    // 0x8022AF58: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022AF5C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022AF60: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022AF64:
    // 0x8022AF64: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022AF68: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AF6C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022AF70: jr          $ra
    // 0x8022AF74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022AF74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022AF78: nop

    // 0x8022AF7C: nop

;}
RECOMP_FUNC void func_802265FC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226600: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226604: jal         0x8004F4F8
    // 0x80226608: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80226608: nop

    after_0:
    // 0x8022660C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226610: jr          $ra
    // 0x80226614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A84_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228A88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228A94: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228A98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228A9C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228AA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228AA4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80228AA8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80228AAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228AB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228AB4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228AB8: addiu       $v1, $v1, 0x11E0
    ctx->r3 = ADD32(ctx->r3, 0X11E0);
    // 0x80228ABC: jal         0x8022AED4
    // 0x80228AC0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x80228AC0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80228AC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228AC8: beq         $v0, $zero, L_80228BD8
    if (ctx->r2 == 0) {
        // 0x80228ACC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80228BD8;
    }
    // 0x80228ACC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80228AD0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228AD4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228AD8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228ADC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228AE0: jal         0x8009A3B4
    // 0x80228AE4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228AE4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228AE8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228AEC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228AF0: jal         0x8009A3B4
    // 0x80228AF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228AF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80228AF8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228AFC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80228B00: jal         0x8009A3B4
    // 0x80228B04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80228B04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80228B08: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228B0C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80228B10: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228B14: beq         $v0, $zero, L_80228B24
    if (ctx->r2 == 0) {
        // 0x80228B18: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80228B24;
    }
    // 0x80228B18: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228B1C: jal         0x8022AD3C
    // 0x80228B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AD3C_ovl14(rdram, ctx);
        goto after_4;
    // 0x80228B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80228B24:
    // 0x80228B24: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228B28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228B2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228B30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228B34: lw          $v0, 0x1748($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1748);
    // 0x80228B38: jalr        $v0
    // 0x80228B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80228B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228B40: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228B44: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80228B48: bne         $v0, $zero, L_80228B64
    if (ctx->r2 != 0) {
        // 0x80228B4C: nop
    
            goto L_80228B64;
    }
    // 0x80228B4C: nop

    // 0x80228B50: jal         0x8003E934
    // 0x80228B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80228B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80228B58: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228B5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B60: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228B64:
    // 0x80228B64: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80228B68: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228B6C: beq         $v0, $a1, L_80228B84
    if (ctx->r2 == ctx->r5) {
        // 0x80228B70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228B84;
    }
    // 0x80228B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B74: jal         0x80050294
    // 0x80228B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80228B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80228B7C: j           L_80228B8C
    // 0x80228B80: nop

        goto L_80228B8C;
    // 0x80228B80: nop

L_80228B84:
    // 0x80228B84: jal         0x8005044C
    // 0x80228B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80228B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80228B8C:
    // 0x80228B8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228B90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228B94: beq         $v0, $zero, L_80228BB0
    if (ctx->r2 == 0) {
        // 0x80228B98: nop
    
            goto L_80228BB0;
    }
    // 0x80228B98: nop

    // 0x80228B9C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80228BA0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80228BA4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80228BA8: jal         0x8003B564
    // 0x80228BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80228BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80228BB0:
    // 0x80228BB0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80228BB4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228BB8: beq         $v0, $zero, L_80228BC8
    if (ctx->r2 == 0) {
        // 0x80228BBC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BC8;
    }
    // 0x80228BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BC0: j           L_80228BCC
    // 0x80228BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80228BCC;
    // 0x80228BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80228BC8:
    // 0x80228BC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80228BCC:
    // 0x80228BCC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228BD0: jal         0x80047284
    // 0x80228BD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80228BD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80228BD8:
    // 0x80228BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228BDC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228BE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228BE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228BE8: jr          $ra
    // 0x80228BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228BEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B4C4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B4C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B4D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B4D8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B4DC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B4E0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B4E4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022B4E8: beq         $v0, $zero, L_8022B6A4
    if (ctx->r2 == 0) {
        // 0x8022B4EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022B6A4;
    }
    // 0x8022B4EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B4F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B4F4: addu        $at, $at, $v0
    gpr jr_addend_8022B4FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B4F8: lw          $v0, 0x1CB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1CB0);
    // 0x8022B4FC: jr          $v0
    // 0x8022B500: nop

    switch (jr_addend_8022B4FC >> 2) {
        case 0: goto L_8022B504; break;
        case 1: goto L_8022B5C4; break;
        case 2: goto L_8022B5E0; break;
        case 3: goto L_8022B648; break;
        case 4: goto L_8022B674; break;
        default: switch_error(__func__, 0x8022B4FC, 0x80231CB0);
    }
    // 0x8022B500: nop

L_8022B504:
    // 0x8022B504: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B50C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B510: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B514: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B518: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B51C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B520: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B524: jal         0x8004D5D4
    // 0x8022B528: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B528: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B530: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B534: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B538: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B53C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B540: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B544: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B548: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B54C: addiu       $v0, $v0, 0x1980
    ctx->r2 = ADD32(ctx->r2, 0X1980);
    // 0x8022B550: jal         0x8003E934
    // 0x8022B554: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022B554: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B558: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B55C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B564: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B568: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B56C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022B570: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B574: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B578: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B57C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022B580: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022B584: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022B588: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022B58C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022B590: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022B594: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022B598: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022B59C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022B5A0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B5A4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022B5A8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022B5AC: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022B5B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B5B4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022B5B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B5BC: j           L_8022B6A4
    // 0x8022B5C0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022B6A4;
    // 0x8022B5C0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022B5C4:
    // 0x8022B5C4: jal         0x8022B850
    // 0x8022B5C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B850_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022B5C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B5CC: beq         $v0, $zero, L_8022B6A8
    if (ctx->r2 == 0) {
        // 0x8022B5D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B6A8;
    }
    // 0x8022B5D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B5D8: j           L_8022B6A0
    // 0x8022B5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B6A0;
    // 0x8022B5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B5E0:
    // 0x8022B5E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B5E4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022B5E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B5EC: jal         0x8004F820
    // 0x8022B5F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B5F0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022B5F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B5F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B5FC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B600: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B604: bne         $v0, $zero, L_8022B6A4
    if (ctx->r2 != 0) {
        // 0x8022B608: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B6A4;
    }
    // 0x8022B608: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B60C: jal         0x8003516C
    // 0x8022B610: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022B610: nop

    after_4:
    // 0x8022B614: bne         $v0, $zero, L_8022B6A8
    if (ctx->r2 != 0) {
        // 0x8022B618: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B6A8;
    }
    // 0x8022B618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B61C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B620: jal         0x800616FC
    // 0x8022B624: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022B624: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022B628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B62C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022B630: jal         0x80050294
    // 0x8022B634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022B634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022B638: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B63C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B640: j           L_8022B6A0
    // 0x8022B644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B6A0;
    // 0x8022B644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B648:
    // 0x8022B648: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B64C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B650: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B654: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B658: bne         $v0, $zero, L_8022B6A8
    if (ctx->r2 != 0) {
        // 0x8022B65C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B6A8;
    }
    // 0x8022B65C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B660: jal         0x80034E3C
    // 0x8022B664: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022B664: nop

    after_7:
    // 0x8022B668: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B66C: j           L_8022B6A0
    // 0x8022B670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B6A0;
    // 0x8022B670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B674:
    // 0x8022B674: jal         0x8003516C
    // 0x8022B678: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022B678: nop

    after_8:
    // 0x8022B67C: bne         $v0, $zero, L_8022B6A8
    if (ctx->r2 != 0) {
        // 0x8022B680: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B6A8;
    }
    // 0x8022B680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B684: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022B688: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B68C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022B690: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B694: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022B698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B69C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022B6A0:
    // 0x8022B6A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B6A4:
    // 0x8022B6A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B6A8:
    // 0x8022B6A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B6AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022B6B0: jal         0x80047284
    // 0x8022B6B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022B6B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022B6B8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B6BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6C4: jr          $ra
    // 0x8022B6C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B6C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226380_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226380: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226384: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80226388: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022638C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80226390: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226394: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80226398: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022639C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802263A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802263A4: jal         0x8009A3B4
    // 0x802263A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802263A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802263AC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802263B0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802263B4: jal         0x8009A3B4
    // 0x802263B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802263B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802263BC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x802263C0: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x802263C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802263C8: jal         0x8009A3B4
    // 0x802263CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802263CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802263D0: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x802263D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802263D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802263DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802263E0: lw          $v0, 0xCD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0XCD8);
    // 0x802263E4: jalr        $v0
    // 0x802263E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802263E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x802263EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802263F0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x802263F4: jal         0x80031600
    // 0x802263F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x802263F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802263FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226400: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80226404: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226408: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022640C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226410: jal         0x80031DA8
    // 0x80226414: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80226414: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x80226418: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022641C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226420: jal         0x8009A3B4
    // 0x80226424: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80226424: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80226428: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022642C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226430: beq         $v0, $zero, L_8022644C
    if (ctx->r2 == 0) {
        // 0x80226434: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022644C;
    }
    // 0x80226434: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022643C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80226440: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80226444: jal         0x80047284
    // 0x80226448: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80226448: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022644C:
    // 0x8022644C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80226450: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226454: beq         $v0, $zero, L_8022646C
    if (ctx->r2 == 0) {
        // 0x80226458: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022646C;
    }
    // 0x80226458: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022645C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x80226460: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80226464: jal         0x8003B564
    // 0x80226468: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x80226468: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022646C:
    // 0x8022646C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80226470: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80226474: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80226478: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022647C: jr          $ra
    // 0x80226480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226480: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228F44_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228F48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228F54: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228F5C: jal         0x8004DA90
    // 0x80228F60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228F60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80228F64: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80228F68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F6C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80228F70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F74: bne         $v0, $zero, L_80228FAC
    if (ctx->r2 != 0) {
        // 0x80228F78: nop
    
            goto L_80228FAC;
    }
    // 0x80228F78: nop

    // 0x80228F7C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80228F80: beq         $v0, $zero, L_80228F94
    if (ctx->r2 == 0) {
        // 0x80228F84: nop
    
            goto L_80228F94;
    }
    // 0x80228F84: nop

    // 0x80228F88: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80228F8C: j           L_80228F9C
    // 0x80228F90: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_80228F9C;
    // 0x80228F90: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80228F94:
    // 0x80228F94: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80228F98: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_80228F9C:
    // 0x80228F9C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80228FA0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228FA4: j           L_80228FFC
    // 0x80228FA8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80228FFC;
    // 0x80228FA8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80228FAC:
    // 0x80228FAC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228FB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228FB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228FB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228FBC: bne         $v0, $zero, L_80228FCC
    if (ctx->r2 != 0) {
        // 0x80228FC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228FCC;
    }
    // 0x80228FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FC4: j           L_80228FFC
    // 0x80228FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228FFC;
    // 0x80228FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228FCC:
    // 0x80228FCC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228FD0: jal         0x8022AED4
    // 0x80228FD4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_1;
    // 0x80228FD4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80228FD8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228FDC: beq         $v0, $zero, L_80229000
    if (ctx->r2 == 0) {
        // 0x80228FE0: nop
    
            goto L_80229000;
    }
    // 0x80228FE0: nop

    // 0x80228FE4: jal         0x8022AE38
    // 0x80228FE8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_2;
    // 0x80228FE8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80228FEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228FF0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80228FF4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228FF8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80228FFC:
    // 0x80228FFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229000:
    // 0x80229000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229008: jr          $ra
    // 0x8022900C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022900C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F744_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F748: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F74C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F750: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x8022F754: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F758: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8022F75C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F760: bne         $v0, $zero, L_8022F778
    if (ctx->r2 != 0) {
        // 0x8022F764: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_8022F778;
    }
    // 0x8022F764: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x8022F768: jal         0x8004F5C4
    // 0x8022F76C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022F76C: nop

    after_0:
    // 0x8022F770: j           L_8022F794
    // 0x8022F774: nop

        goto L_8022F794;
    // 0x8022F774: nop

L_8022F778:
    // 0x8022F778: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022F77C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x8022F780: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x8022F784: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F788: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022F78C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8022F790: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_8022F794:
    // 0x8022F794: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F798: jr          $ra
    // 0x8022F79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: bne         $v0, $zero, L_802251E0
    if (ctx->r2 != 0) {
        // 0x802251C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E0;
    }
    // 0x802251C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D0: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251D8: j           L_802251E8
    // 0x802251DC: addiu       $a1, $a1, 0x7C8
    ctx->r5 = ADD32(ctx->r5, 0X7C8);
        goto L_802251E8;
    // 0x802251DC: addiu       $a1, $a1, 0x7C8
    ctx->r5 = ADD32(ctx->r5, 0X7C8);
L_802251E0:
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251E8:
    // 0x802251E8: jal         0x80037D80
    // 0x802251EC: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251EC: nop

    after_0:
    // 0x802251F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251F4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251F8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251FC: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225200: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225204: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225208: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225214: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80225218: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8022521C: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x80225220: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80225224: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225228: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8022522C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225230: sb          $a1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r5;
    // 0x80225234: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225238: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022523C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225240: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80225244: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225248: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022524C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225250: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225254: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225258: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022525C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225260: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225268: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022526C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225270: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225274: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80225278: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022527C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80225280: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225284: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225288: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022528C: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225290: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225294: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x80225298: bne         $v1, $zero, L_802252C8
    if (ctx->r3 != 0) {
        // 0x8022529C: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_802252C8;
    }
    // 0x8022529C: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x802252A0: jal         0x8006033C
    // 0x802252A4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802252A4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_1:
    // 0x802252A8: bne         $v0, $zero, L_802252BC
    if (ctx->r2 != 0) {
        // 0x802252AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252BC;
    }
    // 0x802252AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252B4: j           L_802252E4
    // 0x802252B8: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
        goto L_802252E4;
    // 0x802252B8: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
L_802252BC:
    // 0x802252BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C0: j           L_802252E4
    // 0x802252C4: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
        goto L_802252E4;
    // 0x802252C4: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_802252C8:
    // 0x802252C8: bne         $v0, $zero, L_802252D4
    if (ctx->r2 != 0) {
        // 0x802252CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802252D4;
    }
    // 0x802252CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802252D0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_802252D4:
    // 0x802252D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252D8: sb          $v0, 0x51E($at)
    MEM_B(0X51E, ctx->r1) = ctx->r2;
    // 0x802252DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252E0: sb          $v0, 0x44E($a0)
    MEM_B(0X44E, ctx->r4) = ctx->r2;
L_802252E4:
    // 0x802252E4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802252E8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802252EC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252F4: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225300: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225304: lw          $a0, 0x508($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X508);
    // 0x80225308: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022530C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225310: lw          $v0, 0x578($at)
    ctx->r2 = MEM_W(ctx->r1, 0X578);
    // 0x80225314: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225318: jal         0x8004C790
    // 0x8022531C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_2;
    // 0x8022531C: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_2:
    // 0x80225320: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225324: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225328: addiu       $a0, $a0, 0x5B8
    ctx->r4 = ADD32(ctx->r4, 0X5B8);
    // 0x8022532C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225330: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225334: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225338: lw          $v1, 0x7B8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7B8);
    // 0x8022533C: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225340: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225344: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225348: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022534C: addiu       $v0, $v0, 0x588
    ctx->r2 = ADD32(ctx->r2, 0X588);
    // 0x80225350: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225354: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225358: jal         0x80054FB8
    // 0x8022535C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_3;
    // 0x8022535C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_3:
    // 0x80225360: jal         0x8004A614
    // 0x80225364: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_4;
    // 0x80225364: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x80225368: jal         0x80225380
    // 0x8022536C: nop

    func_80225380_ovl14(rdram, ctx);
        goto after_5;
    // 0x8022536C: nop

    after_5:
    // 0x80225370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225378: jr          $ra
    // 0x8022537C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022537C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA80_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FA88: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FA8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FA90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FA94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FA98: lw          $v0, 0x1AF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AF0);
    // 0x8022FA9C: jalr        $v0
    // 0x8022FAA0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FAA0: nop

    after_0:
    // 0x8022FAA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAA8: jr          $ra
    // 0x8022FAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229420_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022942C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229430: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80229434: addiu       $s1, $s1, 0x1884
    ctx->r17 = ADD32(ctx->r17, 0X1884);
    // 0x80229438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022943C: jal         0x800A3450
    // 0x80229440: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229440: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80229444: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229448: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022944C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229450: lbu         $v1, 0x1874($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1874);
    // 0x80229454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229458: beq         $v1, $v0, L_802294F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022945C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802294F8;
    }
    // 0x8022945C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229460: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229464: beql        $v0, $zero, L_8022947C
    if (ctx->r2 == 0) {
        // 0x80229468: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022947C;
    }
    goto skip_0;
    // 0x80229468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022946C: beq         $v1, $zero, L_8022948C
    if (ctx->r3 == 0) {
        // 0x80229470: nop
    
            goto L_8022948C;
    }
    // 0x80229470: nop

    // 0x80229474: j           L_80229544
    // 0x80229478: nop

        goto L_80229544;
    // 0x80229478: nop

L_8022947C:
    // 0x8022947C: beq         $v1, $v0, L_80229518
    if (ctx->r3 == ctx->r2) {
        // 0x80229480: nop
    
            goto L_80229518;
    }
    // 0x80229480: nop

    // 0x80229484: j           L_80229544
    // 0x80229488: nop

        goto L_80229544;
    // 0x80229488: nop

L_8022948C:
    // 0x8022948C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80229490: bne         $v0, $zero, L_802294A4
    if (ctx->r2 != 0) {
        // 0x80229494: nop
    
            goto L_802294A4;
    }
    // 0x80229494: nop

    // 0x80229498: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022949C: j           L_802294AC
    // 0x802294A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802294AC;
    // 0x802294A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802294A4:
    // 0x802294A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802294A8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_802294AC:
    // 0x802294AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802294B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802294B4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802294B8: beq         $v0, $zero, L_802294D4
    if (ctx->r2 == 0) {
        // 0x802294BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802294D4;
    }
    // 0x802294BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802294C0: jal         0x8022AE88
    // 0x802294C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022AE88_ovl14(rdram, ctx);
        goto after_1;
    // 0x802294C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802294C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802294CC: j           L_802294E8
    // 0x802294D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802294E8;
    // 0x802294D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802294D4:
    // 0x802294D4: jal         0x8022AE88
    // 0x802294D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022AE88_ovl14(rdram, ctx);
        goto after_2;
    // 0x802294D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802294DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802294E0: jal         0x8022AE48
    // 0x802294E4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022AE48_ovl14(rdram, ctx);
        goto after_3;
    // 0x802294E4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_802294E8:
    // 0x802294E8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802294EC: addiu       $s1, $s1, 0x1884
    ctx->r17 = ADD32(ctx->r17, 0X1884);
    // 0x802294F0: j           L_80229544
    // 0x802294F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80229544;
    // 0x802294F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802294F8:
    // 0x802294F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802294FC: jal         0x8022AE38
    // 0x80229500: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_4;
    // 0x80229500: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80229504: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229508: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022950C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80229510: j           L_80229544
    // 0x80229514: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80229544;
    // 0x80229514: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229518:
    // 0x80229518: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022951C: jal         0x8022AE48
    // 0x80229520: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022AE48_ovl14(rdram, ctx);
        goto after_5;
    // 0x80229520: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80229524: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229528: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022952C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229530: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80229534: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229538: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022953C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80229540: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229544:
    // 0x80229544: jal         0x800A3450
    // 0x80229548: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80229548: nop

    after_6:
    // 0x8022954C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229550: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80229554: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229558: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022955C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229560: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229564: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022956C: jr          $ra
    // 0x80229570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CD30_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CD34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CD3C: jal         0x8004F144
    // 0x8022CD40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022CD40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022CD44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CD48: beq         $v1, $zero, L_8022CD80
    if (ctx->r3 == 0) {
        // 0x8022CD4C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022CD80;
    }
    // 0x8022CD4C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022CD50: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022CD54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CD58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CD5C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022CD60: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022CD64: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022CD68: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022CD6C: jal         0x8009A3B4
    // 0x8022CD70: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CD70: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022CD74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CD78: jal         0x8007A1B8
    // 0x8022CD7C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022CD7C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022CD80:
    // 0x8022CD80: jal         0x80047B3C
    // 0x8022CD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_3;
    // 0x8022CD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CD88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CD8C: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022CD90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CD94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022CD9C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022CDA0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022CDA4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022CDA8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022CDAC: jal         0x8009A3B4
    // 0x8022CDB0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022CDB0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_4:
    // 0x8022CDB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDB8: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022CDBC: lh          $v0, 0x188($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X188);
    // 0x8022CDC0: lh          $v1, 0x18A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18A);
    // 0x8022CDC4: lh          $a3, 0x18C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18C);
    // 0x8022CDC8: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022CDCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CDD0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CDD4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022CDD8: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022CDDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CDE0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022CDE4: jal         0x8004DA90
    // 0x8022CDE8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022CDE8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_5:
    // 0x8022CDEC: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022CDF0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022CDF4: jal         0x8009A3B4
    // 0x8022CDF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022CDF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022CDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE04: jr          $ra
    // 0x8022CE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BBEC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BBF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BBF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022BBF8: jal         0x8003E934
    // 0x8022BBFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022BBFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BC00: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022BC04: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x8022BC08: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022BC0C: beq         $v1, $zero, L_8022BC1C
    if (ctx->r3 == 0) {
        // 0x8022BC10: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022BC1C;
    }
    // 0x8022BC10: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BC14: jal         0x8004F418
    // 0x8022BC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022BC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022BC1C:
    // 0x8022BC1C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC24: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022BC28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022BC2C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8022BC30: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022BC34: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022BC38: jal         0x8004DA90
    // 0x8022BC3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022BC3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022BC40: jal         0x8003E810
    // 0x8022BC44: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x8022BC44: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022BC48: beq         $v0, $zero, L_8022BC60
    if (ctx->r2 == 0) {
        // 0x8022BC4C: nop
    
            goto L_8022BC60;
    }
    // 0x8022BC4C: nop

    // 0x8022BC50: jal         0x8004F418
    // 0x8022BC54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022BC54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BC58: j           L_8022BC70
    // 0x8022BC5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022BC70;
    // 0x8022BC5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BC60:
    // 0x8022BC60: jal         0x80040F30
    // 0x8022BC64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022BC64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BC68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BC6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022BC70:
    // 0x8022BC70: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BC74: bne         $v0, $zero, L_8022BC84
    if (ctx->r2 != 0) {
        // 0x8022BC78: nop
    
            goto L_8022BC84;
    }
    // 0x8022BC78: nop

    // 0x8022BC7C: jal         0x8005044C
    // 0x8022BC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022BC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022BC84:
    // 0x8022BC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BC88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BC8C: jr          $ra
    // 0x8022BC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BC90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022BC94: nop

    // 0x8022BC98: nop

    // 0x8022BC9C: nop

;}
RECOMP_FUNC void func_80226D28_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D28: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80226D2C: bne         $v0, $zero, L_80226D44
    if (ctx->r2 != 0) {
        // 0x80226D30: nop
    
            goto L_80226D44;
    }
    // 0x80226D30: nop

    // 0x80226D34: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80226D38: sb          $zero, 0x448($a0)
    MEM_B(0X448, ctx->r4) = 0;
    // 0x80226D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D40: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_80226D44:
    // 0x80226D44: jr          $ra
    // 0x80226D48: nop

    TRACE_RETURN()
    return;
    // 0x80226D48: nop

;}
RECOMP_FUNC void func_8022E730_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E730: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E734: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022E738: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022E73C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022E740: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E744: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022E748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E74C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E750: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E754: jal         0x8009A3B4
    // 0x8022E758: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E758: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E75C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022E760: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022E764: jal         0x8009A3B4
    // 0x8022E768: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E768: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E76C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022E770: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x8022E774: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E778: jal         0x8009A3B4
    // 0x8022E77C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E77C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E780: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022E784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E788: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E78C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E790: lw          $v0, 0x1A58($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A58);
    // 0x8022E794: jalr        $v0
    // 0x8022E798: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022E798: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022E79C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7A0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022E7A4: jal         0x80031600
    // 0x8022E7A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022E7A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E7AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7B0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022E7B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E7B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022E7BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E7C0: jal         0x80031DA8
    // 0x8022E7C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022E7C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022E7C8: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022E7CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E7D0: jal         0x8009A3B4
    // 0x8022E7D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022E7D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022E7D8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022E7DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E7E0: beq         $v0, $zero, L_8022E7FC
    if (ctx->r2 == 0) {
        // 0x8022E7E4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E7FC;
    }
    // 0x8022E7E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E7E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E7EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022E7F0: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x8022E7F4: jal         0x80047284
    // 0x8022E7F8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022E7F8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022E7FC:
    // 0x8022E7FC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022E800: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E804: beq         $v0, $zero, L_8022E81C
    if (ctx->r2 == 0) {
        // 0x8022E808: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E81C;
    }
    // 0x8022E808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E80C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x8022E810: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E814: jal         0x8003B564
    // 0x8022E818: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022E818: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022E81C:
    // 0x8022E81C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E820: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022E824: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E828: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E82C: jr          $ra
    // 0x8022E830: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E830: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AA5C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AA60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AA6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AA70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AA74: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022AA78: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022AA7C: jal         0x8004FA7C
    // 0x8022AA80: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022AA80: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022AA84: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022AA88: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022AA8C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022AA90: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022AA94: beq         $v0, $zero, L_8022AAAC
    if (ctx->r2 == 0) {
        // 0x8022AA98: nop
    
            goto L_8022AAAC;
    }
    // 0x8022AA98: nop

    // 0x8022AA9C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AAA0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022AAA4: beq         $v0, $zero, L_8022AAF8
    if (ctx->r2 == 0) {
        // 0x8022AAA8: nop
    
            goto L_8022AAF8;
    }
    // 0x8022AAA8: nop

L_8022AAAC:
    // 0x8022AAAC: jal         0x8003516C
    // 0x8022AAB0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022AAB0: nop

    after_1:
    // 0x8022AAB4: bne         $v0, $zero, L_8022AAF8
    if (ctx->r2 != 0) {
        // 0x8022AAB8: nop
    
            goto L_8022AAF8;
    }
    // 0x8022AAB8: nop

    // 0x8022AABC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022AAC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AAC4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022AAC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AACC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022AAD0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AAD4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022AAD8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AADC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AAE0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022AAE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AAE8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022AAEC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022AAF0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022AAF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022AAF8:
    // 0x8022AAF8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AAFC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022AB00: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AB04: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022AB08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AB0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB18: jr          $ra
    // 0x8022AB1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AB1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F874_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F878: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F87C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F880: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8022F884: bgtz        $v0, L_8022F89C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022F888: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022F89C;
    }
    // 0x8022F888: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F88C: jal         0x8004F5C4
    // 0x8022F890: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022F890: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022F894: j           L_8022F8B4
    // 0x8022F898: nop

        goto L_8022F8B4;
    // 0x8022F898: nop

L_8022F89C:
    // 0x8022F89C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8022F8A0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022F8A4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x8022F8A8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8022F8AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F8B0: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8022F8B4:
    // 0x8022F8B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F8B8: jr          $ra
    // 0x8022F8BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F8BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EAE0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EAE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EAE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EAF0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EAF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EAF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EAFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EB00: lw          $v0, 0x1A8C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A8C);
    // 0x8022EB04: jalr        $v0
    // 0x8022EB08: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EB08: nop

    after_0:
    // 0x8022EB0C: jal         0x800472C0
    // 0x8022EB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x8022EB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EB14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB1C: jr          $ra
    // 0x8022EB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D1B0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D1B4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D1B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D1BC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D1C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022D1C4: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022D1C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D1CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D1D0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022D1D4: jal         0x8009A3B4
    // 0x8022D1D8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D1D8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022D1DC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D1E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D1E4: jal         0x8009A3B4
    // 0x8022D1E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D1E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D1EC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D1F0: addiu       $a1, $s0, 0x320
    ctx->r5 = ADD32(ctx->r16, 0X320);
    // 0x8022D1F4: jal         0x8009A3B4
    // 0x8022D1F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D1F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D1FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D200: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022D204: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D208: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D20C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D210: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D214: lw          $v0, 0x19E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X19E0);
    // 0x8022D218: jalr        $v0
    // 0x8022D21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022D21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D220: addiu       $a0, $s0, 0x310
    ctx->r4 = ADD32(ctx->r16, 0X310);
    // 0x8022D224: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022D228: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022D22C: jal         0x8003BD00
    // 0x8022D230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD00_17100(rdram, ctx);
        goto after_4;
    // 0x8022D230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D234: jal         0x80051248
    // 0x8022D238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022D238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D23C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D240: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D244: beq         $v0, $zero, L_8022D260
    if (ctx->r2 == 0) {
        // 0x8022D248: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022D260;
    }
    // 0x8022D248: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022D24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D250: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022D254: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022D258: jal         0x8003B564
    // 0x8022D25C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022D25C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022D260:
    // 0x8022D260: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D264: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022D268: beql        $v0, $zero, L_8022D2FC
    if (ctx->r2 == 0) {
        // 0x8022D26C: sw          $zero, 0x28($s1)
        MEM_W(0X28, ctx->r17) = 0;
            goto L_8022D2FC;
    }
    goto skip_0;
    // 0x8022D26C: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    skip_0:
    // 0x8022D270: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8022D274: lw          $v0, 0x320($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X320);
    // 0x8022D278: beql        $v1, $v0, L_8022D2AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D27C: sb          $zero, 0x370($s0)
        MEM_B(0X370, ctx->r16) = 0;
            goto L_8022D2AC;
    }
    goto skip_1;
    // 0x8022D27C: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    skip_1:
    // 0x8022D280: lb          $v0, 0x370($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X370);
    // 0x8022D284: bne         $v0, $zero, L_8022D2A4
    if (ctx->r2 != 0) {
        // 0x8022D288: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D2A4;
    }
    // 0x8022D288: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D28C: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    // 0x8022D290: jal         0x8002A33C
    // 0x8022D294: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022D294: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022D298: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D29C: j           L_8022D2AC
    // 0x8022D2A0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
        goto L_8022D2AC;
    // 0x8022D2A0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022D2A4:
    // 0x8022D2A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D2A8: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022D2AC:
    // 0x8022D2AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D2B0: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022D2B4: jal         0x8009A3B4
    // 0x8022D2B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D2B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022D2BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D2C0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D2C4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022D2C8: addiu       $v0, $s1, 0x28
    ctx->r2 = ADD32(ctx->r17, 0X28);
    // 0x8022D2CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D2D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D2D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D2D8: lhu         $v1, 0x5C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X5C);
    // 0x8022D2DC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D2E0: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022D2E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D2E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022D2EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D2F0: jal         0x80051E18
    // 0x8022D2F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022D2F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022D2F8: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_8022D2FC:
    // 0x8022D2FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D300: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022D304: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022D308: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022D30C: jr          $ra
    // 0x8022D310: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022D310: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802296E4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802296E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802296EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802296F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802296F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802296F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802296FC: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80229700: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80229704: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80229708: jal         0x8004FA7C
    // 0x8022970C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022970C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80229710: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80229714: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80229718: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022971C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80229720: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80229724: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80229728: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022972C: bnel        $v0, $zero, L_8022974C
    if (ctx->r2 != 0) {
        // 0x80229730: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022974C;
    }
    goto skip_0;
    // 0x80229730: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80229734: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80229738: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022973C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229740: beq         $v0, $zero, L_80229750
    if (ctx->r2 == 0) {
        // 0x80229744: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80229750;
    }
    // 0x80229744: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80229748: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022974C:
    // 0x8022974C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80229750:
    // 0x80229750: bne         $v0, $zero, L_80229780
    if (ctx->r2 != 0) {
        // 0x80229754: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229780;
    }
    // 0x80229754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229758: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022975C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80229760: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80229764: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80229768: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022976C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229774: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80229778: j           L_802297D8
    // 0x8022977C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_802297D8;
    // 0x8022977C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80229780:
    // 0x80229780: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80229784: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229788: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022978C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229790: beq         $v0, $zero, L_802297D4
    if (ctx->r2 == 0) {
        // 0x80229794: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802297D4;
    }
    // 0x80229794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229798: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022979C: jal         0x8022AED4
    // 0x802297A0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_1;
    // 0x802297A0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802297A4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802297A8: beq         $v0, $zero, L_802297E0
    if (ctx->r2 == 0) {
        // 0x802297AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802297E0;
    }
    // 0x802297AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802297B0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802297B4: jal         0x8022AE38
    // 0x802297B8: nop

    func_8022AE38_ovl14(rdram, ctx);
        goto after_2;
    // 0x802297B8: nop

    after_2:
    // 0x802297BC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802297C0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802297C4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802297C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802297CC: j           L_80229800
    // 0x802297D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80229800;
    // 0x802297D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802297D4:
    // 0x802297D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802297D8:
    // 0x802297D8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802297DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802297E0:
    // 0x802297E0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802297E4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802297E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802297EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802297F0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802297F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802297F8: jal         0x8004DA90
    // 0x802297FC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802297FC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80229800:
    // 0x80229800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229804: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022980C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229810: jr          $ra
    // 0x80229814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DE7C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE8C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DE90: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DE94: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DE98: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022DE9C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DEA0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022DEA4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DEA8: jal         0x800A3450
    // 0x8022DEAC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DEAC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022DEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DEB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DEB8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DEBC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022DEC0: jal         0x8004D5D4
    // 0x8022DEC4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022DEC4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DEC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DECC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022DED0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DED4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DED8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DEDC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DEE0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DEE4: jal         0x8003E934
    // 0x8022DEE8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022DEE8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8022DEEC: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8022DEF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DEF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DEF8: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022DEFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DF00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF04: jal         0x8009A3B4
    // 0x8022DF08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DF08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022DF0C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DF10: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022DF14: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022DF18: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022DF1C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022DF20: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022DF24: jal         0x800A3450
    // 0x8022DF28: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022DF28: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x8022DF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DF34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DF38: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022DF3C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022DF40: jal         0x80050294
    // 0x8022DF44: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022DF44: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022DF48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DF50: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022DF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DF58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF5C: jr          $ra
    // 0x8022DF60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DF60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA54_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA54: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8022FA58: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8022FA5C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022FA60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FA64: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8022FA68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FA6C: bne         $v1, $zero, L_8022FA78
    if (ctx->r3 != 0) {
        // 0x8022FA70: sh          $v0, 0x38($a0)
        MEM_H(0X38, ctx->r4) = ctx->r2;
            goto L_8022FA78;
    }
    // 0x8022FA70: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FA74: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022FA78:
    // 0x8022FA78: jr          $ra
    // 0x8022FA7C: nop

    TRACE_RETURN()
    return;
    // 0x8022FA7C: nop

;}
RECOMP_FUNC void func_8022BE84_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BE88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BE8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE90: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x8022BE94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BE98: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BE9C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BEA0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022BEA4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022BEA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BEAC: jal         0x800540D0
    // 0x8022BEB0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022BEB0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    after_0:
    // 0x8022BEB4: bne         $v0, $zero, L_8022BEC8
    if (ctx->r2 != 0) {
        // 0x8022BEB8: nop
    
            goto L_8022BEC8;
    }
    // 0x8022BEB8: nop

    // 0x8022BEBC: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022BEC0: j           L_8022BED0
    // 0x8022BEC4: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022BED0;
    // 0x8022BEC4: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022BEC8:
    // 0x8022BEC8: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022BECC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8022BED0:
    // 0x8022BED0: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
    // 0x8022BED4: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x8022BED8: beq         $v0, $zero, L_8022BEE4
    if (ctx->r2 == 0) {
        // 0x8022BEDC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022BEE4;
    }
    // 0x8022BEDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BEE0: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
L_8022BEE4:
    // 0x8022BEE4: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8022BEE8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022BEEC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BEF0: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022BEF4: beq         $a0, $zero, L_8022C038
    if (ctx->r4 == 0) {
        // 0x8022BEF8: nop
    
            goto L_8022C038;
    }
    // 0x8022BEF8: nop

    // 0x8022BEFC: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022BF00: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022BF04: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022BF08: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022BF0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF10: bgtz        $v0, L_8022BF30
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BF14: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022BF30;
    }
    // 0x8022BF14: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022BF18: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022BF1C: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022BF20: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x8022BF24: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BF28: j           L_8022C038
    // 0x8022BF2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C038;
    // 0x8022BF2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BF30:
    // 0x8022BF30: lb          $v0, 0x76($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X76);
    // 0x8022BF34: beq         $v0, $zero, L_8022BF48
    if (ctx->r2 == 0) {
        // 0x8022BF38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022BF48;
    }
    // 0x8022BF38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022BF3C: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x8022BF40: xor         $v0, $v0, $s0
    ctx->r2 = ctx->r2 ^ ctx->r16;
    // 0x8022BF44: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8022BF48:
    // 0x8022BF48: bnel        $v0, $zero, L_8022C028
    if (ctx->r2 != 0) {
        // 0x8022BF4C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022C028;
    }
    goto skip_0;
    // 0x8022BF4C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_0:
    // 0x8022BF50: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x8022BF54: lbu         $a1, 0x4A($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022BF58: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BF5C: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x8022BF60: bne         $v0, $zero, L_8022C024
    if (ctx->r2 != 0) {
        // 0x8022BF64: sh          $a0, 0x40($s1)
        MEM_H(0X40, ctx->r17) = ctx->r4;
            goto L_8022C024;
    }
    // 0x8022BF64: sh          $a0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r4;
    // 0x8022BF68: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BF6C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BF70: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BF74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BF78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BF7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022BF80: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022BF84: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8022BF88: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022BF8C: bne         $v0, $zero, L_8022C028
    if (ctx->r2 != 0) {
        // 0x8022BF90: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022C028;
    }
    // 0x8022BF90: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022BF94: ori         $v0, $a1, 0x4
    ctx->r2 = ctx->r5 | 0X4;
    // 0x8022BF98: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x8022BF9C: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x8022BFA0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BFA4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BFA8: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x8022BFAC: sb          $v0, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r2;
    // 0x8022BFB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BFB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022BFB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BFBC: jal         0x8004FEA0
    // 0x8022BFC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8022BFC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BFC4: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x8022BFC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BFCC: beq         $v1, $v0, L_8022C008
    if (ctx->r3 == ctx->r2) {
        // 0x8022BFD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C008;
    }
    // 0x8022BFD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BFD4: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8022BFD8: bne         $v0, $zero, L_8022BFF4
    if (ctx->r2 != 0) {
        // 0x8022BFDC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022BFF4;
    }
    // 0x8022BFDC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BFE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BFE4: beq         $v1, $v0, L_8022C014
    if (ctx->r3 == ctx->r2) {
        // 0x8022BFE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C014;
    }
    // 0x8022BFE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BFEC: j           L_8022C028
    // 0x8022BFF0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8022C028;
    // 0x8022BFF0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022BFF4:
    // 0x8022BFF4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022BFF8: sb          $v0, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = ctx->r2;
    // 0x8022BFFC: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022C000: j           L_8022C01C
    // 0x8022C004: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022C01C;
    // 0x8022C004: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022C008:
    // 0x8022C008: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C00C: j           L_8022C018
    // 0x8022C010: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022C018;
    // 0x8022C010: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022C014:
    // 0x8022C014: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C018:
    // 0x8022C018: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C01C:
    // 0x8022C01C: j           L_8022C028
    // 0x8022C020: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8022C028;
    // 0x8022C020: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022C024:
    // 0x8022C024: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022C028:
    // 0x8022C028: jal         0x8002A33C
    // 0x8022C02C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C02C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022C030: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022C034: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022C038:
    // 0x8022C038: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022C03C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8022C040: bne         $v0, $zero, L_8022C064
    if (ctx->r2 != 0) {
        // 0x8022C044: nop
    
            goto L_8022C064;
    }
    // 0x8022C044: nop

    // 0x8022C048: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C04C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C058: lw          $v0, 0x19B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X19B8);
    // 0x8022C05C: jalr        $v0
    // 0x8022C060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022C064:
    // 0x8022C064: jal         0x800504EC
    // 0x8022C068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x8022C068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C06C: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8022C070: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022C074: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x8022C078: jal         0x80051248
    // 0x8022C07C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022C07C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C080: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022C084: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C088: beq         $v0, $zero, L_8022C0A4
    if (ctx->r2 == 0) {
        // 0x8022C08C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0A4;
    }
    // 0x8022C08C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C094: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C098: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8022C09C: jal         0x80047284
    // 0x8022C0A0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022C0A0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_6:
L_8022C0A4:
    // 0x8022C0A4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C0A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C0AC: beq         $v0, $zero, L_8022C0C4
    if (ctx->r2 == 0) {
        // 0x8022C0B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0C4;
    }
    // 0x8022C0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0B4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022C0B8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C0BC: jal         0x8003B564
    // 0x8022C0C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022C0C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022C0C4:
    // 0x8022C0C4: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8022C0C8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C0CC: beq         $v0, $zero, L_8022C12C
    if (ctx->r2 == 0) {
        // 0x8022C0D0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C12C;
    }
    // 0x8022C0D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C0D4: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8022C0D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022C0DC: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x8022C0E0: addiu       $v0, $v0, -0x8C
    ctx->r2 = ADD32(ctx->r2, -0X8C);
    // 0x8022C0E4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022C0E8: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x8022C0EC: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x8022C0F0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022C0F4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C0F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C0FC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8022C100: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C104: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C108: lhu         $v1, 0x42($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X42);
    // 0x8022C10C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C110: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C114: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C118: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022C11C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022C120: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C124: jal         0x80051E18
    // 0x8022C128: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x8022C128: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_8:
L_8022C12C:
    // 0x8022C12C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022C130: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C134: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C138: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C13C: jr          $ra
    // 0x8022C140: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C140: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225E5C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E5C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80225E60: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80225E64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E68: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80225E6C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80225E70: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80225E74: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80225E78: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x80225E7C: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x80225E80: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80225E84: bltzl       $v0, L_80225E8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225E88: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80225E8C;
    }
    goto skip_0;
    // 0x80225E88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_80225E8C:
    // 0x80225E8C: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80225E90: bne         $v0, $zero, L_80225F08
    if (ctx->r2 != 0) {
        // 0x80225E94: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80225F08;
    }
    // 0x80225E94: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225E98: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80225E9C: beq         $v0, $zero, L_80225ED4
    if (ctx->r2 == 0) {
        // 0x80225EA0: addiu       $v0, $a1, 0x14
        ctx->r2 = ADD32(ctx->r5, 0X14);
            goto L_80225ED4;
    }
    // 0x80225EA0: addiu       $v0, $a1, 0x14
    ctx->r2 = ADD32(ctx->r5, 0X14);
    // 0x80225EA4: lh          $a0, 0xE8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE8);
    // 0x80225EA8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225EAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225EB0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225EB4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80225EB8: bltzl       $v0, L_80225EC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225EBC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80225EC0;
    }
    goto skip_1;
    // 0x80225EBC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_80225EC0:
    // 0x80225EC0: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80225EC4: beq         $v0, $zero, L_80225F64
    if (ctx->r2 == 0) {
        // 0x80225EC8: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80225F64;
    }
    // 0x80225EC8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225ECC: j           L_80225F4C
    // 0x80225ED0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
        goto L_80225F4C;
    // 0x80225ED0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
L_80225ED4:
    // 0x80225ED4: lh          $a0, 0xE8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE8);
    // 0x80225ED8: addiu       $v0, $a1, -0x14
    ctx->r2 = ADD32(ctx->r5, -0X14);
    // 0x80225EDC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225EE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225EE4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225EE8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80225EEC: bltzl       $v0, L_80225EF4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225EF0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80225EF4;
    }
    goto skip_2;
    // 0x80225EF0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80225EF4:
    // 0x80225EF4: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80225EF8: beq         $v0, $zero, L_80225F64
    if (ctx->r2 == 0) {
        // 0x80225EFC: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80225F64;
    }
    // 0x80225EFC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225F00: j           L_80225F4C
    // 0x80225F04: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
        goto L_80225F4C;
    // 0x80225F04: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_80225F08:
    // 0x80225F08: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80225F0C: beq         $v0, $zero, L_80225F34
    if (ctx->r2 == 0) {
        // 0x80225F10: addiu       $v0, $a1, -0x14
        ctx->r2 = ADD32(ctx->r5, -0X14);
            goto L_80225F34;
    }
    // 0x80225F10: addiu       $v0, $a1, -0x14
    ctx->r2 = ADD32(ctx->r5, -0X14);
    // 0x80225F14: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x80225F18: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225F1C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80225F20: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80225F24: bne         $v1, $zero, L_80225F64
    if (ctx->r3 != 0) {
        // 0x80225F28: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80225F64;
    }
    // 0x80225F28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225F2C: j           L_80225F54
    // 0x80225F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225F54;
    // 0x80225F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225F34:
    // 0x80225F34: lh          $v1, 0xE8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE8);
    // 0x80225F38: addiu       $v0, $a1, 0x14
    ctx->r2 = ADD32(ctx->r5, 0X14);
    // 0x80225F3C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225F40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225F44: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80225F48: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_80225F4C:
    // 0x80225F4C: bne         $v0, $zero, L_80225F64
    if (ctx->r2 != 0) {
        // 0x80225F50: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225F64;
    }
    // 0x80225F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225F54:
    // 0x80225F54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225F58: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    // 0x80225F5C: jal         0x802259DC
    // 0x80225F60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_802259DC_ovl14(rdram, ctx);
        goto after_0;
    // 0x80225F60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
L_80225F64:
    // 0x80225F64: lh          $v1, 0x1A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1A);
    // 0x80225F68: lh          $v0, 0x1C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1C);
    // 0x80225F6C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225F70: beq         $v0, $zero, L_80225F88
    if (ctx->r2 == 0) {
        // 0x80225F74: nop
    
            goto L_80225F88;
    }
    // 0x80225F74: nop

    // 0x80225F78: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80225F7C: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80225F80: j           L_80225F94
    // 0x80225F84: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_80225F94;
    // 0x80225F84: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_80225F88:
    // 0x80225F88: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80225F8C: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80225F90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80225F94:
    // 0x80225F94: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F9C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225FA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225FA4: jal         0x8004DA90
    // 0x80225FA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80225FA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80225FAC: jal         0x8003F754
    // 0x80225FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_2;
    // 0x80225FB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80225FB4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80225FB8: beq         $s1, $zero, L_80225FF0
    if (ctx->r17 == 0) {
        // 0x80225FBC: nop
    
            goto L_80225FF0;
    }
    // 0x80225FBC: nop

    // 0x80225FC0: jal         0x800715F8
    // 0x80225FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_3;
    // 0x80225FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225FC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225FCC: jal         0x800711A8
    // 0x80225FD0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_800711A8_4C5A8(rdram, ctx);
        goto after_4;
    // 0x80225FD0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_4:
    // 0x80225FD4: jal         0x8006036C
    // 0x80225FD8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225FD8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_5:
    // 0x80225FDC: jal         0x8006036C
    // 0x80225FE0: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225FE0: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    after_6:
    // 0x80225FE4: addiu       $a0, $zero, 0x17F
    ctx->r4 = ADD32(0, 0X17F);
    // 0x80225FE8: jal         0x8002A33C
    // 0x80225FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80225FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
L_80225FF0:
    // 0x80225FF0: lbu         $a1, 0x20($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X20);
    // 0x80225FF4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225FF8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225FFC: addiu       $v0, $v0, 0xC50
    ctx->r2 = ADD32(ctx->r2, 0XC50);
    // 0x80226000: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80226004: jal         0x8004EC38
    // 0x80226008: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8004EC38_2A038(rdram, ctx);
        goto after_8;
    // 0x80226008: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_8:
    // 0x8022600C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226010: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x80226014: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80226018: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022601C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80226020: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80226024: jr          $ra
    // 0x80226028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80226028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022DD8C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD8C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022DD90: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DD94: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022DD98: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022DD9C: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022DDA0: bltzl       $v0, L_8022DDA8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DDA4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022DDA8;
    }
    goto skip_0;
    // 0x8022DDA4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022DDA8:
    // 0x8022DDA8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DDAC: bne         $v0, $zero, L_8022DDC4
    if (ctx->r2 != 0) {
        // 0x8022DDB0: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022DDC4;
    }
    // 0x8022DDB0: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022DDB4: bne         $v0, $zero, L_8022DDC0
    if (ctx->r2 != 0) {
        // 0x8022DDB8: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_8022DDC0;
    }
    // 0x8022DDB8: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x8022DDBC: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_8022DDC0:
    // 0x8022DDC0: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DDC4:
    // 0x8022DDC4: jr          $ra
    // 0x8022DDC8: nop

    TRACE_RETURN()
    return;
    // 0x8022DDC8: nop

    // 0x8022DDCC: nop

;}
RECOMP_FUNC void func_8022EAC4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EAC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EACC: jal         0x8004F4F8
    // 0x8022EAD0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022EAD0: nop

    after_0:
    // 0x8022EAD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAD8: jr          $ra
    // 0x8022EADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226484_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022648C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226498: lbu         $a1, 0xF0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF0);
    // 0x8022649C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802264A0: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802264A4: addiu       $s1, $s1, 0xC50
    ctx->r17 = ADD32(ctx->r17, 0XC50);
    // 0x802264A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802264AC: jal         0x8004EC38
    // 0x802264B0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x802264B0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_0:
    // 0x802264B4: lbu         $a1, 0xF0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF0);
    // 0x802264B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802264BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802264C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264C4: addiu       $a0, $s1, -0x8
    ctx->r4 = ADD32(ctx->r17, -0X8);
    // 0x802264C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802264CC: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802264D0: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x802264D4: jal         0x8004DE68
    // 0x802264D8: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_8004DE68_29268(rdram, ctx);
        goto after_1;
    // 0x802264D8: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_1:
    // 0x802264DC: sw          $v0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r2;
    // 0x802264E0: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x802264E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802264E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802264EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264F0: jr          $ra
    // 0x802264F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802264F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EA18_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EA1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EA28: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022EA30: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022EA34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA38: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022EA3C: beq         $v1, $v0, L_8022EA78
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA40: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022EA78;
    }
    // 0x8022EA40: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EA44: beql        $v0, $zero, L_8022EA5C
    if (ctx->r2 == 0) {
        // 0x8022EA48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EA5C;
    }
    goto skip_0;
    // 0x8022EA48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EA4C: beq         $v1, $zero, L_8022EA6C
    if (ctx->r3 == 0) {
        // 0x8022EA50: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022EA6C;
    }
    // 0x8022EA50: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022EA54: j           L_8022EAB4
    // 0x8022EA58: nop

        goto L_8022EAB4;
    // 0x8022EA58: nop

L_8022EA5C:
    // 0x8022EA5C: beq         $v1, $v0, L_8022EAA0
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA60: nop
    
            goto L_8022EAA0;
    }
    // 0x8022EA60: nop

    // 0x8022EA64: j           L_8022EAB4
    // 0x8022EA68: nop

        goto L_8022EAB4;
    // 0x8022EA68: nop

L_8022EA6C:
    // 0x8022EA6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EA70: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022EA74: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_8022EA78:
    // 0x8022EA78: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8022EA7C: bne         $v0, $s0, L_8022EAB4
    if (ctx->r2 != ctx->r16) {
        // 0x8022EA80: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EAB4;
    }
    // 0x8022EA80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EA84: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x8022EA88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EA8C: jal         0x800610AC
    // 0x8022EA90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022EA90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022EA94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA98: j           L_8022EAB0
    // 0x8022EA9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022EAB0;
    // 0x8022EA9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EAA0:
    // 0x8022EAA0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022EAA4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022EAA8: bne         $v0, $zero, L_8022EAB4
    if (ctx->r2 != 0) {
        // 0x8022EAAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EAB4;
    }
    // 0x8022EAAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EAB0:
    // 0x8022EAB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EAB4:
    // 0x8022EAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EAB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EABC: jr          $ra
    // 0x8022EAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EAC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229EE4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229EE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229EEC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80229EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229EF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229EF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229EFC: lw          $v0, 0x1920($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1920);
    // 0x80229F00: jalr        $v0
    // 0x80229F04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229F04: nop

    after_0:
    // 0x80229F08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F0C: jr          $ra
    // 0x80229F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B74C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B74C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B758: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B75C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022B760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B764: jal         0x8004DDE8
    // 0x8022B768: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022B768: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B76C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B770: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x8022B774: beq         $v0, $zero, L_8022B7B8
    if (ctx->r2 == 0) {
        // 0x8022B778: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_8022B7B8;
    }
    // 0x8022B778: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022B77C: beq         $v0, $zero, L_8022B798
    if (ctx->r2 == 0) {
        // 0x8022B780: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B798;
    }
    // 0x8022B780: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B784: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B788: beq         $v1, $v0, L_8022B7F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B78C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B7F8;
    }
    // 0x8022B78C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B790: j           L_8022B7F8
    // 0x8022B794: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B7F8;
    // 0x8022B794: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B798:
    // 0x8022B798: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B79C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B7A0: beq         $v1, $v0, L_8022B7F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B7A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B7F8;
    }
    // 0x8022B7A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B7A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B7AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7B0: j           L_8022B7D8
    // 0x8022B7B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022B7D8;
    // 0x8022B7B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022B7B8:
    // 0x8022B7B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B7BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B7C0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022B7C4: bne         $v0, $zero, L_8022B7F8
    if (ctx->r2 != 0) {
        // 0x8022B7C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B7F8;
    }
    // 0x8022B7C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B7CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022B7D8:
    // 0x8022B7D8: jal         0x80050294
    // 0x8022B7DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B7DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B7E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7E4: jal         0x8022B828
    // 0x8022B7E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B828_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022B7E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022B7EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7F0: jal         0x8022B808
    // 0x8022B7F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B808_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022B7F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8022B7F8:
    // 0x8022B7F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B800: jr          $ra
    // 0x8022B804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E38_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E4C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80227E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E54: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80227E58: beq         $v1, $v0, L_80227ED0
    if (ctx->r3 == ctx->r2) {
        // 0x80227E5C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227ED0;
    }
    // 0x80227E5C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227E60: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227E64: beql        $v0, $zero, L_80227E7C
    if (ctx->r2 == 0) {
        // 0x80227E68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E7C;
    }
    goto skip_0;
    // 0x80227E68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227E6C: beq         $v1, $zero, L_80227E94
    if (ctx->r3 == 0) {
        // 0x80227E70: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227E94;
    }
    // 0x80227E70: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227E74: j           L_80227FE4
    // 0x80227E78: nop

        goto L_80227FE4;
    // 0x80227E78: nop

L_80227E7C:
    // 0x80227E7C: beq         $v1, $v0, L_80227F30
    if (ctx->r3 == ctx->r2) {
        // 0x80227E80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227F30;
    }
    // 0x80227E80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227E84: beq         $v1, $v0, L_80227FBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227E88: nop
    
            goto L_80227FBC;
    }
    // 0x80227E88: nop

    // 0x80227E8C: j           L_80227FE4
    // 0x80227E90: nop

        goto L_80227FE4;
    // 0x80227E90: nop

L_80227E94:
    // 0x80227E94: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80227E98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227E9C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80227EA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227EA4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80227EA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227EAC: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80227EB0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80227EB4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227EB8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80227EBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227EC0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80227EC4: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x80227EC8: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80227ECC: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80227ED0:
    // 0x80227ED0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227ED8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227EE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227EE4: bltz        $v0, L_80227F14
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227EE8: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80227F14;
    }
    // 0x80227EE8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80227EEC: beq         $v0, $zero, L_80227FE4
    if (ctx->r2 == 0) {
        // 0x80227EF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FE4;
    }
    // 0x80227EF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227EF4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227EF8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80227EFC: jal         0x8004DA90
    // 0x80227F00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227F00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227F04: jal         0x80040F30
    // 0x80227F08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80227F08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227F0C: j           L_80227FE4
    // 0x80227F10: nop

        goto L_80227FE4;
    // 0x80227F10: nop

L_80227F14:
    // 0x80227F14: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227F18: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227F1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F20: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x80227F24: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227F28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F30:
    // 0x80227F30: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80227F34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227F3C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227F40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227F44: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227F48: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80227F4C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80227F50: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80227F54: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227F58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227F5C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80227F60: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80227F64: jal         0x8004DA90
    // 0x80227F68: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80227F68: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80227F6C: jal         0x80040F30
    // 0x80227F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80227F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227F74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227F78: beq         $v1, $zero, L_80227FE4
    if (ctx->r3 == 0) {
        // 0x80227F7C: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80227FE4;
    }
    // 0x80227F7C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80227F80: bnel        $v0, $zero, L_80227F88
    if (ctx->r2 != 0) {
        // 0x80227F84: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80227F88;
    }
    goto skip_1;
    // 0x80227F84: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80227F88:
    // 0x80227F88: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80227F8C: beq         $v0, $zero, L_80227FE4
    if (ctx->r2 == 0) {
        // 0x80227F90: nop
    
            goto L_80227FE4;
    }
    // 0x80227F90: nop

    // 0x80227F94: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80227F98: bgtz        $v0, L_80227FE4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80227F9C: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80227FE4;
    }
    // 0x80227F9C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80227FA0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227FA4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FA8: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x80227FAC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227FB4: j           L_80227FE4
    // 0x80227FB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227FE4;
    // 0x80227FB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227FBC:
    // 0x80227FBC: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x80227FC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227FC4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80227FC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227FCC: bgez        $v0, L_80227FE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227FD0: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80227FE4;
    }
    // 0x80227FD0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80227FD4: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227FD8: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x80227FDC: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x80227FE0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80227FE4:
    // 0x80227FE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227FE8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227FEC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FF0: jr          $ra
    // 0x80227FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A790_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A790: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A794: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022A798: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A79C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A7A0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022A7A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A7A8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A7AC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022A7B0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A7B4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A7B8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022A7BC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022A7C0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022A7C4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022A7C8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022A7CC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022A7D0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022A7D4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A7D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A7DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A7E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A7E4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022A7E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A7EC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022A7F0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022A7F4: jal         0x8009A3B4
    // 0x8022A7F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A7F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A7FC: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022A800: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A804: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022A808: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A80C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022A810: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A814: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022A818: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022A81C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A820: jal         0x8004EC38
    // 0x8022A824: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022A824: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022A828: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A82C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022A830: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022A834: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022A838: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022A83C: jal         0x80034FCC
    // 0x8022A840: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022A840: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022A844: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022A848: jal         0x8022AE38
    // 0x8022A84C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022A84C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022A850: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A854: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A858: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A85C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A860: jal         0x8004F820
    // 0x8022A864: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022A864: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022A868: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A86C: bgez        $v0, L_8022A898
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A870: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022A898;
    }
    // 0x8022A870: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A874: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A878: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A87C: jal         0x8004F820
    // 0x8022A880: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022A880: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022A884: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A888: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A88C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A890: j           L_8022A8B0
    // 0x8022A894: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022A8B0;
    // 0x8022A894: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022A898:
    // 0x8022A898: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A89C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A8A0: jal         0x8004F820
    // 0x8022A8A4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022A8A4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022A8A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8AC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022A8B0:
    // 0x8022A8B0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A8B4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022A8B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A8BC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A8C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A8C4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022A8C8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022A8CC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022A8D0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A8D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A8D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A8DC: jr          $ra
    // 0x8022A8E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A8E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022BCA0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BCA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BCA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BCA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BCAC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BCB0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BCB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BCB8: jal         0x8009A3B4
    // 0x8022BCBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BCBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BCC0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BCC4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BCC8: jal         0x8009A3B4
    // 0x8022BCCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BCCC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BCD0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BCD4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BCD8: jal         0x8009A3B4
    // 0x8022BCDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BCDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BCE0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BCE4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022BCE8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022BCEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BCF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BCF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BCF8: lw          $v0, 0x19AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X19AC);
    // 0x8022BCFC: jalr        $v0
    // 0x8022BD00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BD00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BD04: sw          $zero, 0x2F0($s0)
    MEM_W(0X2F0, ctx->r16) = 0;
    // 0x8022BD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD10: jr          $ra
    // 0x8022BD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229984_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229988: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022998C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229994: jal         0x8022AE88
    // 0x80229998: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022AE88_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229998: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022999C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802299A0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802299A4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802299A8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802299AC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802299B0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802299B4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802299B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802299BC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802299C0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x802299C4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x802299C8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x802299CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802299D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802299D4: jr          $ra
    // 0x802299D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802299D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292E4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802292F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802292F4: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802292F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802292FC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229300: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229304: bne         $v0, $zero, L_80229370
    if (ctx->r2 != 0) {
        // 0x80229308: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80229370;
    }
    // 0x80229308: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022930C: jal         0x8022AED4
    // 0x80229310: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229310: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80229314: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229318: beq         $v0, $zero, L_8022936C
    if (ctx->r2 == 0) {
        // 0x8022931C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022936C;
    }
    // 0x8022931C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229320: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80229324: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80229328: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022932C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229330: bne         $v1, $zero, L_80229340
    if (ctx->r3 != 0) {
        // 0x80229334: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80229340;
    }
    // 0x80229334: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80229338: j           L_80229370
    // 0x8022933C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80229370;
    // 0x8022933C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80229340:
    // 0x80229340: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229344: jal         0x8022AE48
    // 0x80229348: nop

    func_8022AE48_ovl14(rdram, ctx);
        goto after_1;
    // 0x80229348: nop

    after_1:
    // 0x8022934C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229350: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229354: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229358: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022935C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80229360: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229364: j           L_80229370
    // 0x80229368: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80229370;
    // 0x80229368: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022936C:
    // 0x8022936C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229370:
    // 0x80229370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229378: jr          $ra
    // 0x8022937C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022937C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E6D0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E6D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E6D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022E6D8: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022E6DC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022E6E0: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8022E6E4: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x8022E6E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E6EC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8022E6F0: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x8022E6F4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022E6F8: jr          $ra
    // 0x8022E6FC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022E6FC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802290A8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802290AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802290B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802290B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802290B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802290BC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802290C0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802290C4: jal         0x8004FA7C
    // 0x802290C8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802290C8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802290CC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802290D0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802290D4: bne         $v0, $zero, L_802290F8
    if (ctx->r2 != 0) {
        // 0x802290D8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802290F8;
    }
    // 0x802290D8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802290DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802290E0: jal         0x8022AE38
    // 0x802290E4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x802290E4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x802290E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802290EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802290F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802290F4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802290F8:
    // 0x802290F8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802290FC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229100: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229104: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229108: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022910C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229110: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229114: jr          $ra
    // 0x80229118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DB00_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022DB04: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022DB08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DB0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022DB10: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022DB14: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022DB18: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022DB1C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DB20: lw          $v1, 0x348($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X348);
    // 0x8022DB24: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022DB28: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DB2C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022DB30: bne         $v1, $v0, L_8022DBCC
    if (ctx->r3 != ctx->r2) {
        // 0x8022DB34: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022DBCC;
    }
    // 0x8022DB34: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022DB38: lh          $v1, 0x368($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X368);
    // 0x8022DB3C: lh          $v0, 0x328($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X328);
    // 0x8022DB40: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022DB44: beq         $v1, $v0, L_8022DC84
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB48: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022DC84;
    }
    // 0x8022DB48: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022DB4C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022DB50: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022DB54: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022DB58: sltiu       $v0, $a1, 0x800
    ctx->r2 = ctx->r5 < 0X800 ? 1 : 0;
    // 0x8022DB5C: beq         $v0, $zero, L_8022DB8C
    if (ctx->r2 == 0) {
        // 0x8022DB60: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_8022DB8C;
    }
    // 0x8022DB60: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022DB64: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022DB68: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022DB6C: beq         $v0, $zero, L_8022DB84
    if (ctx->r2 == 0) {
        // 0x8022DB70: nop
    
            goto L_8022DB84;
    }
    // 0x8022DB70: nop

    // 0x8022DB74: jal         0x8022DCAC
    // 0x8022DB78: nop

    func_8022DCAC_ovl14(rdram, ctx);
        goto after_0;
    // 0x8022DB78: nop

    after_0:
    // 0x8022DB7C: j           L_8022DB90
    // 0x8022DB80: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022DB90;
    // 0x8022DB80: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022DB84:
    // 0x8022DB84: jal         0x8022DCFC
    // 0x8022DB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022DCFC_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022DB88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8022DB8C:
    // 0x8022DB8C: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022DB90:
    // 0x8022DB90: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022DB94: beq         $v0, $zero, L_8022DC84
    if (ctx->r2 == 0) {
        // 0x8022DB98: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022DC84;
    }
    // 0x8022DB98: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022DB9C: beq         $v0, $zero, L_8022DBB8
    if (ctx->r2 == 0) {
        // 0x8022DBA0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DBB8;
    }
    // 0x8022DBA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DBA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022DBA8: jal         0x8022DCAC
    // 0x8022DBAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022DCAC_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022DBAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022DBB0: j           L_8022DC84
    // 0x8022DBB4: nop

        goto L_8022DC84;
    // 0x8022DBB4: nop

L_8022DBB8:
    // 0x8022DBB8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022DBBC: jal         0x8022DCFC
    // 0x8022DBC0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022DCFC_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022DBC0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DBC4: j           L_8022DC84
    // 0x8022DBC8: nop

        goto L_8022DC84;
    // 0x8022DBC8: nop

L_8022DBCC:
    // 0x8022DBCC: addiu       $s0, $a1, 0xC4
    ctx->r16 = ADD32(ctx->r5, 0XC4);
    // 0x8022DBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DBD4: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x8022DBD8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022DBDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DBE0: andi        $s2, $v0, 0xFFF
    ctx->r18 = ctx->r2 & 0XFFF;
    // 0x8022DBE4: jal         0x8009A3B4
    // 0x8022DBE8: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022DBE8: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022DBEC: addiu       $a0, $s1, 0x198
    ctx->r4 = ADD32(ctx->r17, 0X198);
    // 0x8022DBF0: lh          $a2, 0x366($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X366);
    // 0x8022DBF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DBF8: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022DBFC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DC00: jal         0x8004E800
    // 0x8022DC04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E800_29C00(rdram, ctx);
        goto after_5;
    // 0x8022DC04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022DC08: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x8022DC0C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8022DC10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022DC14: sltiu       $v0, $s2, 0x800
    ctx->r2 = ctx->r18 < 0X800 ? 1 : 0;
    // 0x8022DC18: sh          $s0, 0x368($s1)
    MEM_H(0X368, ctx->r17) = ctx->r16;
    // 0x8022DC1C: beq         $v0, $zero, L_8022DC4C
    if (ctx->r2 == 0) {
        // 0x8022DC20: sh          $s0, 0x328($s1)
        MEM_H(0X328, ctx->r17) = ctx->r16;
            goto L_8022DC4C;
    }
    // 0x8022DC20: sh          $s0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r16;
    // 0x8022DC24: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022DC28: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022DC2C: beq         $v0, $zero, L_8022DC44
    if (ctx->r2 == 0) {
        // 0x8022DC30: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DC44;
    }
    // 0x8022DC30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DC34: jal         0x8022DD4C
    // 0x8022DC38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022DD4C_ovl14(rdram, ctx);
        goto after_6;
    // 0x8022DC38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022DC3C: j           L_8022DC50
    // 0x8022DC40: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022DC50;
    // 0x8022DC40: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022DC44:
    // 0x8022DC44: jal         0x8022DD8C
    // 0x8022DC48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022DD8C_ovl14(rdram, ctx);
        goto after_7;
    // 0x8022DC48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
L_8022DC4C:
    // 0x8022DC4C: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022DC50:
    // 0x8022DC50: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022DC54: beq         $v0, $zero, L_8022DC84
    if (ctx->r2 == 0) {
        // 0x8022DC58: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022DC84;
    }
    // 0x8022DC58: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022DC5C: beq         $v0, $zero, L_8022DC78
    if (ctx->r2 == 0) {
        // 0x8022DC60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DC78;
    }
    // 0x8022DC60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DC64: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022DC68: jal         0x8022DD4C
    // 0x8022DC6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022DD4C_ovl14(rdram, ctx);
        goto after_8;
    // 0x8022DC6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022DC70: j           L_8022DC84
    // 0x8022DC74: nop

        goto L_8022DC84;
    // 0x8022DC74: nop

L_8022DC78:
    // 0x8022DC78: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022DC7C: jal         0x8022DD8C
    // 0x8022DC80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022DD8C_ovl14(rdram, ctx);
        goto after_9;
    // 0x8022DC80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
L_8022DC84:
    // 0x8022DC84: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022DC88: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x8022DC8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022DC90: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022DC94: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022DC98: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022DC9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DCA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DCA4: jr          $ra
    // 0x8022DCA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022DCA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022BAC0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BAC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BAC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BAD0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BAD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BAD8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BADC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BAE0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BAE4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BAE8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022BAEC: jal         0x8004D5D4
    // 0x8022BAF0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BAF0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BAF8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BAFC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BB00: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BB04: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BB08: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BB0C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BB10: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BB14: addiu       $v0, $v0, 0x1980
    ctx->r2 = ADD32(ctx->r2, 0X1980);
    // 0x8022BB18: jal         0x8003E934
    // 0x8022BB1C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022BB1C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BB20: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022BB24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB28: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BB2C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BB30: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022BB34: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BB38: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BB3C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BB40: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022BB44: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022BB48: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022BB4C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BB50: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022BB54: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022BB58: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022BB5C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022BB60: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022BB64: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022BB68: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022BB6C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022BB70: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022BB74: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BB78: jal         0x800A3450
    // 0x8022BB7C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022BB7C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022BB80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022BB88: jal         0x80050294
    // 0x8022BB8C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022BB8C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x8022BB90: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BB94: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BB98: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022BB9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BBA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BBA4: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022BBA8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022BBAC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022BBB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBB4: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x8022BBB8: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022BBBC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022BBC0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022BBC4: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022BBC8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022BBCC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BBD0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022BBD4: jal         0x8002A33C
    // 0x8022BBD8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022BBD8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8022BBDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BBE4: jr          $ra
    // 0x8022BBE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BBE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
