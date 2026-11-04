#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022991C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022991C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022992C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229930: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229934: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229938: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022993C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229940: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229944: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229948: jal         0x800A3450
    // 0x8022994C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022994C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229954: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229958: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022995C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80229960: jal         0x8004D5D4
    // 0x80229964: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80229964: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022996C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229970: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229974: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229978: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022997C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229980: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229984: jal         0x8003E934
    // 0x80229988: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229988: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8022998C: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x80229990: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229998: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022999C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802299A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802299A4: jal         0x8009A3B4
    // 0x802299A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802299A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x802299AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802299B0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802299B4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802299B8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802299BC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802299C0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802299C4: jal         0x800A3450
    // 0x802299C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802299C8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x802299CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802299D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802299D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802299D8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802299DC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802299E0: jal         0x80050294
    // 0x802299E4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802299E4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x802299E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802299EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802299F0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802299F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802299F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802299FC: jr          $ra
    // 0x80229A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022620C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022620C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226210: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226214: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226218: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022621C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80226220: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80226224: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x80226228: beq         $v0, $zero, L_8022627C
    if (ctx->r2 == 0) {
        // 0x8022622C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022627C;
    }
    // 0x8022622C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226230: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80226234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226238: jal         0x8002C678
    // 0x8022623C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022623C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x80226240: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80226244: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80226248: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022624C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80226250: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226254: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80226258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022625C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80226260: mfhi        $a2
    ctx->r6 = hi;
    // 0x80226264: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x80226268: nop

    // 0x8022626C: jal         0x800319B4
    // 0x80226270: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80226270: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226274: j           L_80226284
    // 0x80226278: nop

        goto L_80226284;
    // 0x80226278: nop

L_8022627C:
    // 0x8022627C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226280: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80226284:
    // 0x80226284: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80226288: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022628C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80226290: jr          $ra
    // 0x80226294: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226294: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802284B4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802284B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802284BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802284C0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802284C4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802284C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802284CC: jal         0x8003516C
    // 0x802284D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x802284D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802284D4: bne         $v0, $zero, L_802284F8
    if (ctx->r2 != 0) {
        // 0x802284D8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802284F8;
    }
    // 0x802284D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802284DC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802284E0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802284E4: jal         0x800610AC
    // 0x802284E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x802284E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802284EC: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802284F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284F4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_802284F8:
    // 0x802284F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284FC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228500: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228504: jal         0x8004F820
    // 0x80228508: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228508: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022850C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228510: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80228514: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80228518: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022851C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228520: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228524: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228528: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022852C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228530: jr          $ra
    // 0x80228534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228A08_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A08: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80228A0C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80228A10: jr          $ra
    // 0x80228A14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80228A14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80228BDC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228BE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228BE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BE8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228BEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228BF0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228BF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228BF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228BFC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80228C00: beq         $v0, $zero, L_8022907C
    if (ctx->r2 == 0) {
        // 0x80228C04: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022907C;
    }
    // 0x80228C04: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228C08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228C0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C10: addu        $at, $at, $v0
    gpr jr_addend_80228C18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C14: lw          $v0, -0x37F0($at)
    ctx->r2 = ADD32(ctx->r1, -0X37F0);
    // 0x80228C18: jr          $v0
    // 0x80228C1C: nop

    switch (jr_addend_80228C18 >> 2) {
        case 0: goto L_80228C20; break;
        case 1: goto L_80228D04; break;
        case 2: goto L_80228DAC; break;
        case 3: goto L_80228DF0; break;
        case 4: goto L_80228E6C; break;
        case 5: goto L_80228F14; break;
        case 6: goto L_80228F90; break;
        case 7: goto L_8022907C; break;
        case 8: goto L_8022903C; break;
        default: switch_error(__func__, 0x80228C18, 0x8022C810);
    }
    // 0x80228C1C: nop

L_80228C20:
    // 0x80228C20: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228C2C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80228C30: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228C34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228C38: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228C3C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228C40: jal         0x8004D5D4
    // 0x80228C44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228C44: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228C50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228C54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228C58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228C5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228C60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228C64: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228C68: addiu       $v0, $v0, -0x3930
    ctx->r2 = ADD32(ctx->r2, -0X3930);
    // 0x80228C6C: jal         0x8003E934
    // 0x80228C70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80228C70: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228C80: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228C84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228C8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228C90: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228C94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228C98: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228C9C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228CA0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80228CA4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80228CA8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80228CAC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80228CB0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80228CB4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80228CB8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80228CBC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80228CC0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80228CC4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228CC8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228CCC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80228CD0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80228CD4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228CD8: jal         0x80050294
    // 0x80228CDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80228CDC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80228CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CE4: jal         0x802293F8
    // 0x80228CE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_802293F8_ovl20(rdram, ctx);
        goto after_3;
    // 0x80228CE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80228CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CF0: jal         0x802293D8
    // 0x80228CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293D8_ovl20(rdram, ctx);
        goto after_4;
    // 0x80228CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80228CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228CFC: j           L_8022907C
    // 0x80228D00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022907C;
    // 0x80228D00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228D04:
    // 0x80228D04: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80228D08: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228D0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D14: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80228D18: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228D1C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80228D20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D28: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228D2C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80228D30: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80228D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80228D3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D40: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D44: jal         0x802295B8
    // 0x80228D48: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_802295B8_ovl20(rdram, ctx);
        goto after_5;
    // 0x80228D48: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x80228D4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228D50: bne         $v0, $zero, L_80229080
    if (ctx->r2 != 0) {
        // 0x80228D54: nop
    
            goto L_80229080;
    }
    // 0x80228D54: nop

    // 0x80228D58: jal         0x8003E934
    // 0x80228D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80228D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80228D60: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228D64: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228D68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D6C: beq         $a1, $zero, L_80228D7C
    if (ctx->r5 == 0) {
        // 0x80228D70: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80228D7C;
    }
    // 0x80228D70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228D74: jal         0x8022929C
    // 0x80228D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022929C_ovl20(rdram, ctx);
        goto after_7;
    // 0x80228D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80228D7C:
    // 0x80228D7C: jal         0x8022931C
    // 0x80228D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022931C_ovl20(rdram, ctx);
        goto after_8;
    // 0x80228D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80228D84: jal         0x8005044C
    // 0x80228D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80228D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80228D8C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228D90: bne         $v0, $zero, L_80228DA4
    if (ctx->r2 != 0) {
        // 0x80228D94: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228DA4;
    }
    // 0x80228D94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228D9C: j           L_8022907C
    // 0x80228DA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022907C;
    // 0x80228DA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228DA4:
    // 0x80228DA4: j           L_8022907C
    // 0x80228DA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022907C;
    // 0x80228DA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228DAC:
    // 0x80228DAC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228DB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228DB4: bne         $v1, $v0, L_80228DD8
    if (ctx->r3 != ctx->r2) {
        // 0x80228DB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228DD8;
    }
    // 0x80228DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228DBC: jal         0x8022929C
    // 0x80228DC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022929C_ovl20(rdram, ctx);
        goto after_10;
    // 0x80228DC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80228DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DC8: jal         0x800A3450
    // 0x80228DCC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80228DCC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80228DD0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80228DD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228DD8:
    // 0x80228DD8: jal         0x8022931C
    // 0x80228DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022931C_ovl20(rdram, ctx);
        goto after_12;
    // 0x80228DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80228DE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228DE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DE8: j           L_8022907C
    // 0x80228DEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022907C;
    // 0x80228DEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228DF0:
    // 0x80228DF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228DF4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80228DF8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80228DFC: jal         0x8004F820
    // 0x80228E00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80228E00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x80228E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E08: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80228E0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228E10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228E18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228E24: jal         0x802295B8
    // 0x80228E28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_802295B8_ovl20(rdram, ctx);
        goto after_14;
    // 0x80228E28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x80228E2C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228E30: bne         $v0, $zero, L_80229080
    if (ctx->r2 != 0) {
        // 0x80228E34: nop
    
            goto L_80229080;
    }
    // 0x80228E34: nop

    // 0x80228E38: jal         0x8003E934
    // 0x80228E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x80228E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80228E40: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228E44: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228E48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E4C: beq         $a1, $zero, L_80228E5C
    if (ctx->r5 == 0) {
        // 0x80228E50: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80228E5C;
    }
    // 0x80228E50: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228E54: jal         0x8022929C
    // 0x80228E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022929C_ovl20(rdram, ctx);
        goto after_16;
    // 0x80228E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_80228E5C:
    // 0x80228E5C: jal         0x8022931C
    // 0x80228E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022931C_ovl20(rdram, ctx);
        goto after_17;
    // 0x80228E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80228E64: j           L_80229074
    // 0x80228E68: nop

        goto L_80229074;
    // 0x80228E68: nop

L_80228E6C:
    // 0x80228E6C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80228E70: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228E74: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x80228E78: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228E7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228E80: beq         $v1, $zero, L_80228ED8
    if (ctx->r3 == 0) {
        // 0x80228E84: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80228ED8;
    }
    // 0x80228E84: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80228E88: jal         0x8002A33C
    // 0x80228E8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x80228E8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x80228E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E94: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228E98: jal         0x80050294
    // 0x80228E9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x80228E9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80228EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228EA4: jal         0x802293F8
    // 0x80228EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293F8_ovl20(rdram, ctx);
        goto after_20;
    // 0x80228EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80228EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228EB0: jal         0x802293D8
    // 0x80228EB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293D8_ovl20(rdram, ctx);
        goto after_21;
    // 0x80228EB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80228EB8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228EBC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80228EC0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80228EC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228EC8: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x80228ECC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228ED0: j           L_80228EE0
    // 0x80228ED4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228EE0;
    // 0x80228ED4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228ED8:
    // 0x80228ED8: jal         0x8005044C
    // 0x80228EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x80228EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80228EE0:
    // 0x80228EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228EE4: jal         0x802295B8
    // 0x80228EE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_802295B8_ovl20(rdram, ctx);
        goto after_23;
    // 0x80228EE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x80228EEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228EF0: bne         $v0, $zero, L_80229080
    if (ctx->r2 != 0) {
        // 0x80228EF4: nop
    
            goto L_80229080;
    }
    // 0x80228EF4: nop

    // 0x80228EF8: jal         0x8003E934
    // 0x80228EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x80228EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80228F00: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228F04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228F08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F0C: j           L_80228F78
    // 0x80228F10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80228F78;
    // 0x80228F10: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228F14:
    // 0x80228F14: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80228F18: bgez        $v0, L_80228F54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228F54;
    }
    // 0x80228F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228F24: jal         0x80050294
    // 0x80228F28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x80228F28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x80228F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F30: jal         0x802293F8
    // 0x80228F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293F8_ovl20(rdram, ctx);
        goto after_26;
    // 0x80228F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80228F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F3C: jal         0x802293D8
    // 0x80228F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_802293D8_ovl20(rdram, ctx);
        goto after_27;
    // 0x80228F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x80228F44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228F48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F4C: j           L_80228F5C
    // 0x80228F50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228F5C;
    // 0x80228F50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228F54:
    // 0x80228F54: jal         0x8005044C
    // 0x80228F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x80228F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_80228F5C:
    // 0x80228F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F60: jal         0x802295B8
    // 0x80228F64: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_802295B8_ovl20(rdram, ctx);
        goto after_29;
    // 0x80228F64: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x80228F68: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228F6C: bne         $v0, $zero, L_80229080
    if (ctx->r2 != 0) {
        // 0x80228F70: nop
    
            goto L_80229080;
    }
    // 0x80228F70: nop

    // 0x80228F74: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80228F78:
    // 0x80228F78: beql        $a1, $zero, L_80229080
    if (ctx->r5 == 0) {
        // 0x80228F7C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80229080;
    }
    goto skip_0;
    // 0x80228F7C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80228F80: jal         0x8022929C
    // 0x80228F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022929C_ovl20(rdram, ctx);
        goto after_30;
    // 0x80228F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x80228F88: j           L_80229080
    // 0x80228F8C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_80229080;
    // 0x80228F8C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80228F90:
    // 0x80228F90: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228F94: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80228F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228FA4: jal         0x8003E934
    // 0x80228FA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80228FA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x80228FAC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228FB0: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x80228FB4: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80228FB8: beq         $v0, $zero, L_80228FCC
    if (ctx->r2 == 0) {
        // 0x80228FBC: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_80228FCC;
    }
    // 0x80228FBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80228FC0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80228FC4: j           L_80228FE4
    // 0x80228FC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80228FE4;
    // 0x80228FC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228FCC:
    // 0x80228FCC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80228FD0: beq         $v0, $zero, L_80228FE0
    if (ctx->r2 == 0) {
        // 0x80228FD4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80228FE0;
    }
    // 0x80228FD4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80228FD8: j           L_80228FE4
    // 0x80228FDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80228FE4;
    // 0x80228FDC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228FE0:
    // 0x80228FE0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80228FE4:
    // 0x80228FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FE8: jal         0x802295B8
    // 0x80228FEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_802295B8_ovl20(rdram, ctx);
        goto after_32;
    // 0x80228FEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x80228FF0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228FF4: bne         $v0, $zero, L_80229080
    if (ctx->r2 != 0) {
        // 0x80228FF8: nop
    
            goto L_80229080;
    }
    // 0x80228FF8: nop

    // 0x80228FFC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229000: bne         $a1, $zero, L_80229018
    if (ctx->r5 != 0) {
        // 0x80229004: nop
    
            goto L_80229018;
    }
    // 0x80229004: nop

    // 0x80229008: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022900C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229010: bne         $v0, $zero, L_80229024
    if (ctx->r2 != 0) {
        // 0x80229014: nop
    
            goto L_80229024;
    }
    // 0x80229014: nop

L_80229018:
    // 0x80229018: jal         0x8022929C
    // 0x8022901C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022929C_ovl20(rdram, ctx);
        goto after_33;
    // 0x8022901C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x80229020: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80229024:
    // 0x80229024: jal         0x8022954C
    // 0x80229028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022954C_ovl20(rdram, ctx);
        goto after_34;
    // 0x80229028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022902C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229034: j           L_80229074
    // 0x80229038: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229074;
    // 0x80229038: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022903C:
    // 0x8022903C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x80229040: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229044: jal         0x8004FA7C
    // 0x80229048: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x80229048: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022904C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229050: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229054: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229058: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022905C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229060: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229064: bne         $v0, $zero, L_80229074
    if (ctx->r2 != 0) {
        // 0x80229068: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229074;
    }
    // 0x80229068: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022906C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229070: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229074:
    // 0x80229074: jal         0x8005044C
    // 0x80229078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x80229078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022907C:
    // 0x8022907C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80229080:
    // 0x80229080: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229084: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229088: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022908C: jr          $ra
    // 0x80229090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802273E8_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273E8: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802273EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802273F0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802273F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273F8: bne         $v0, $zero, L_80227404
    if (ctx->r2 != 0) {
        // 0x802273FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227404;
    }
    // 0x802273FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227400: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227404:
    // 0x80227404: jr          $ra
    // 0x80227408: nop

    TRACE_RETURN()
    return;
    // 0x80227408: nop

;}
RECOMP_FUNC void func_8022A86C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A86C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A87C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A880: bne         $a1, $zero, L_8022A8B0
    if (ctx->r5 != 0) {
        // 0x8022A884: andi        $v0, $a1, 0x500
        ctx->r2 = ctx->r5 & 0X500;
            goto L_8022A8B0;
    }
    // 0x8022A884: andi        $v0, $a1, 0x500
    ctx->r2 = ctx->r5 & 0X500;
    // 0x8022A888: jal         0x800A3450
    // 0x8022A88C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A88C: nop

    after_0:
    // 0x8022A890: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022A894: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022A898: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A89C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A8A0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A8A4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022A8A8: j           L_8022A8CC
    // 0x8022A8AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022A8CC;
    // 0x8022A8AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022A8B0:
    // 0x8022A8B0: bnel        $v0, $zero, L_8022A8B8
    if (ctx->r2 != 0) {
        // 0x8022A8B4: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022A8B8;
    }
    goto skip_0;
    // 0x8022A8B4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022A8B8:
    // 0x8022A8B8: andi        $v0, $a1, 0xA00
    ctx->r2 = ctx->r5 & 0XA00;
    // 0x8022A8BC: beq         $v0, $zero, L_8022A8CC
    if (ctx->r2 == 0) {
        // 0x8022A8C0: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022A8CC;
    }
    // 0x8022A8C0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A8C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A8C8: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022A8CC:
    // 0x8022A8CC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022A8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A8D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A8D8: jr          $ra
    // 0x8022A8DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A8DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225504_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225508: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022550C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80225510: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225514: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225518: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022551C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225520: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225524: bne         $v0, $zero, L_80225580
    if (ctx->r2 != 0) {
        // 0x80225528: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80225580;
    }
    // 0x80225528: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022552C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225530: addiu       $s1, $s1, -0x44E4
    ctx->r17 = ADD32(ctx->r17, -0X44E4);
    // 0x80225534: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225538: addiu       $s0, $s0, -0x4504
    ctx->r16 = ADD32(ctx->r16, -0X4504);
L_8022553C:
    // 0x8022553C: jal         0x8003E6BC
    // 0x80225540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x80225540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225544: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225548: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022554C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225550: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80225554: jal         0x80071ACC
    // 0x80225558: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_1;
    // 0x80225558: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_1:
    // 0x8022555C: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80225560: bne         $v0, $zero, L_8022553C
    if (ctx->r2 != 0) {
        // 0x80225564: nop
    
            goto L_8022553C;
    }
    // 0x80225564: nop

    // 0x80225568: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022556C: jal         0x800607C4
    // 0x80225570: addiu       $a0, $a0, -0x451C
    ctx->r4 = ADD32(ctx->r4, -0X451C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_2;
    // 0x80225570: addiu       $a0, $a0, -0x451C
    ctx->r4 = ADD32(ctx->r4, -0X451C);
    after_2:
    // 0x80225574: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022557C: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
L_80225580:
    // 0x80225580: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225584: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225588: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022558C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225590: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225594: jr          $ra
    // 0x80225598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228970_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228974: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80228978: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022897C: beq         $a0, $v0, L_802289E4
    if (ctx->r4 == ctx->r2) {
        // 0x80228980: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802289E4;
    }
    // 0x80228980: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228984: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x80228988: beql        $v0, $zero, L_802289A8
    if (ctx->r2 == 0) {
        // 0x8022898C: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802289A8;
    }
    goto skip_0;
    // 0x8022898C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x80228990: beq         $a0, $zero, L_802289DC
    if (ctx->r4 == 0) {
        // 0x80228994: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802289DC;
    }
    // 0x80228994: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80228998: beq         $a0, $v0, L_802289FC
    if (ctx->r4 == ctx->r2) {
        // 0x8022899C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802289FC;
    }
    // 0x8022899C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802289A0: j           L_802289FC
    // 0x802289A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802289FC;
    // 0x802289A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802289A8:
    // 0x802289A8: beq         $a0, $v0, L_802289DC
    if (ctx->r4 == ctx->r2) {
        // 0x802289AC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_802289DC;
    }
    // 0x802289AC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x802289B0: beq         $v0, $zero, L_802289C8
    if (ctx->r2 == 0) {
        // 0x802289B4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_802289C8;
    }
    // 0x802289B4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802289B8: beq         $a0, $v0, L_802289FC
    if (ctx->r4 == ctx->r2) {
        // 0x802289BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802289FC;
    }
    // 0x802289BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802289C0: j           L_802289FC
    // 0x802289C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802289FC;
    // 0x802289C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802289C8:
    // 0x802289C8: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x802289CC: beq         $a0, $v0, L_802289EC
    if (ctx->r4 == ctx->r2) {
        // 0x802289D0: nop
    
            goto L_802289EC;
    }
    // 0x802289D0: nop

    // 0x802289D4: j           L_802289FC
    // 0x802289D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802289FC;
    // 0x802289D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802289DC:
    // 0x802289DC: j           L_802289FC
    // 0x802289E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802289FC;
    // 0x802289E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802289E4:
    // 0x802289E4: j           L_802289FC
    // 0x802289E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_802289FC;
    // 0x802289E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802289EC:
    // 0x802289EC: jal         0x800A3450
    // 0x802289F0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802289F0: nop

    after_0:
    // 0x802289F4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802289F8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_802289FC:
    // 0x802289FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228A00: jr          $ra
    // 0x80228A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226298_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226298: jr          $ra
    // 0x8022629C: nop

    TRACE_RETURN()
    return;
    // 0x8022629C: nop

;}
RECOMP_FUNC void func_80226978_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022697C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226988: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022698C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226990: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80226994: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226998: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022699C: jal         0x80228A58
    // 0x802269A0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80228A58_ovl20(rdram, ctx);
        goto after_0;
    // 0x802269A0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802269A4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802269A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802269AC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802269B0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802269B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802269B8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802269BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802269C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269C4: jr          $ra
    // 0x802269C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228114_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022811C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228120: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228124: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228128: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022812C: lw          $v0, -0x3974($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3974);
    // 0x80228130: jalr        $v0
    // 0x80228134: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228134: nop

    after_0:
    // 0x80228138: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022813C: jr          $ra
    // 0x80228140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A8E0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A8E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A8E4: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022A8E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A8EC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022A8F0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x8022A8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A8F8: beq         $a1, $a0, L_8022A908
    if (ctx->r5 == ctx->r4) {
        // 0x8022A8FC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022A908;
    }
    // 0x8022A8FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A900: j           L_8022A984
    // 0x8022A904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022A984;
    // 0x8022A904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A908:
    // 0x8022A908: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8022A90C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A910: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022A914: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A918: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022A91C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A920: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022A924: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x8022A928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A92C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022A930: lh          $v0, 0x180($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X180);
    // 0x8022A934: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022A938: addiu       $s0, $s0, -0x36C0
    ctx->r16 = ADD32(ctx->r16, -0X36C0);
    // 0x8022A93C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022A940: lh          $v0, 0x182($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X182);
    // 0x8022A944: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A948: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A94C: sw          $v0, -0x36BC($at)
    MEM_W(-0X36BC, ctx->r1) = ctx->r2;
    // 0x8022A950: lh          $v0, 0x184($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X184);
    // 0x8022A954: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x8022A958: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A95C: sw          $v0, -0x36B8($at)
    MEM_W(-0X36B8, ctx->r1) = ctx->r2;
    // 0x8022A960: jal         0x8004EC38
    // 0x8022A964: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022A964: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022A968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A96C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022A970: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022A974: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022A978: jal         0x80034FCC
    // 0x8022A97C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x8022A97C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x8022A980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A984:
    // 0x8022A984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A98C: jr          $ra
    // 0x8022A990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D24_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227D28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227D34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227D38: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227D3C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227D40: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227D44: jal         0x8004FA7C
    // 0x80227D48: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227D48: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80227D4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227D50: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227D54: beq         $v0, $zero, L_80227DE8
    if (ctx->r2 == 0) {
        // 0x80227D58: nop
    
            goto L_80227DE8;
    }
    // 0x80227D58: nop

    // 0x80227D5C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227D60: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227D64: bne         $v0, $zero, L_80227DE8
    if (ctx->r2 != 0) {
        // 0x80227D68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227DE8;
    }
    // 0x80227D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D6C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227D70: beq         $v1, $v0, L_80227D88
    if (ctx->r3 == ctx->r2) {
        // 0x80227D74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227D88;
    }
    // 0x80227D74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227D78: beq         $v1, $v0, L_80227DB8
    if (ctx->r3 == ctx->r2) {
        // 0x80227D7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227DB8;
    }
    // 0x80227D7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227D80: j           L_80227DDC
    // 0x80227D84: nop

        goto L_80227DDC;
    // 0x80227D84: nop

L_80227D88:
    // 0x80227D88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227D8C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227D90: bne         $v0, $zero, L_80227DDC
    if (ctx->r2 != 0) {
        // 0x80227D94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227DDC;
    }
    // 0x80227D94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227D98: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227D9C: bne         $v0, $zero, L_80227DDC
    if (ctx->r2 != 0) {
        // 0x80227DA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227DDC;
    }
    // 0x80227DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227DA8: bne         $v1, $v0, L_80227DDC
    if (ctx->r3 != ctx->r2) {
        // 0x80227DAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227DDC;
    }
    // 0x80227DAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227DB0: j           L_80227DDC
    // 0x80227DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227DDC;
    // 0x80227DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227DB8:
    // 0x80227DB8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227DBC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227DC0: beq         $v0, $zero, L_80227DD8
    if (ctx->r2 == 0) {
        // 0x80227DC4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80227DD8;
    }
    // 0x80227DC4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227DC8: bne         $v0, $zero, L_80227DDC
    if (ctx->r2 != 0) {
        // 0x80227DCC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227DDC;
    }
    // 0x80227DCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227DD0: j           L_80227DDC
    // 0x80227DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227DDC;
    // 0x80227DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227DD8:
    // 0x80227DD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227DDC:
    // 0x80227DDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227DE0: beq         $v0, $zero, L_80227E0C
    if (ctx->r2 == 0) {
        // 0x80227DE4: nop
    
            goto L_80227E0C;
    }
    // 0x80227DE4: nop

L_80227DE8:
    // 0x80227DE8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80227DEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227DF0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227DF4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227DF8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227DFC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227E00: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227E04: j           L_80227E1C
    // 0x80227E08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227E1C;
    // 0x80227E08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227E0C:
    // 0x80227E0C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227E14: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227E18: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227E1C:
    // 0x80227E1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227E20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E28: jr          $ra
    // 0x80227E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226118_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226118: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022611C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226120: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226124: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80226128: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022612C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80226130: beq         $v0, $zero, L_80226184
    if (ctx->r2 == 0) {
        // 0x80226134: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226184;
    }
    // 0x80226134: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226138: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022613C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226140: jal         0x8002C678
    // 0x80226144: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80226144: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x80226148: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022614C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80226150: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80226154: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80226158: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022615C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80226160: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226164: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80226168: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022616C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x80226170: nop

    // 0x80226174: jal         0x800319B4
    // 0x80226178: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80226178: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022617C: j           L_80226190
    // 0x80226180: nop

        goto L_80226190;
    // 0x80226180: nop

L_80226184:
    // 0x80226184: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80226188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022618C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80226190:
    // 0x80226190: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80226194: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80226198: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022619C: jr          $ra
    // 0x802261A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802261A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229A04_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A08: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229A0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229A10: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x80229A14: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x80229A18: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x80229A1C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229A20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229A24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80229A28: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x80229A2C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229A30: bne         $v1, $zero, L_80229A44
    if (ctx->r3 != 0) {
        // 0x80229A34: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_80229A44;
    }
    // 0x80229A34: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80229A38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229A3C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80229A40: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80229A44:
    // 0x80229A44: jal         0x80229B48
    // 0x80229A48: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80229B48_ovl20(rdram, ctx);
        goto after_0;
    // 0x80229A48: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80229A4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229A50: jr          $ra
    // 0x80229A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228330_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228338: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022833C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228340: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228348: lw          $v0, -0x395C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X395C);
    // 0x8022834C: jalr        $v0
    // 0x80228350: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228350: nop

    after_0:
    // 0x80228354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228358: jr          $ra
    // 0x8022835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl20(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251C4: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251E4
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E4;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, -0x498C
    ctx->r5 = ADD32(ctx->r5, -0X498C);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, -0x498C
    ctx->r5 = ADD32(ctx->r5, -0X498C);
L_802251E4:
    // 0x802251E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251EC:
    // 0x802251EC: jal         0x80037D80
    // 0x802251F0: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F0: nop

    after_0:
    // 0x802251F4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251F8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251FC: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x80225200: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225204: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225208: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8022520C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225210: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225218: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022521C: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x80225220: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225224: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225228: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8022522C: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225230: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225238: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x8022523C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225240: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225244: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225248: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022524C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225250: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
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
    // 0x80225274: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225278: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022527C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225284: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225288: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022528C: bne         $t1, $zero, L_8022529C
    if (ctx->r9 != 0) {
        // 0x80225290: sb          $a1, 0x53D4($at)
        MEM_B(0X53D4, ctx->r1) = ctx->r5;
            goto L_8022529C;
    }
    // 0x80225290: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x80225294: jal         0x8006036C
    // 0x80225298: addiu       $a0, $zero, 0x31F
    ctx->r4 = ADD32(0, 0X31F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225298: addiu       $a0, $zero, 0x31F
    ctx->r4 = ADD32(0, 0X31F);
    after_1:
L_8022529C:
    // 0x8022529C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252A0: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252A4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252AC: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x802252B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252B8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252BC: lw          $a0, -0x4AE4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AE4);
    // 0x802252C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252C8: lw          $v0, -0x4A70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4A70);
    // 0x802252CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252D0: jal         0x8004C790
    // 0x802252D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_2;
    // 0x802252D4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_2:
    // 0x802252D8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252E0: addiu       $a0, $a0, -0x4A20
    ctx->r4 = ADD32(ctx->r4, -0X4A20);
    // 0x802252E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252EC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252F0: lw          $v1, -0x49A0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X49A0);
    // 0x802252F4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252FC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225300: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225304: addiu       $v0, $v0, -0x4A5C
    ctx->r2 = ADD32(ctx->r2, -0X4A5C);
    // 0x80225308: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022530C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225310: jal         0x80054FB8
    // 0x80225314: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_3;
    // 0x80225314: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_3:
    // 0x80225318: jal         0x8004A614
    // 0x8022531C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_4;
    // 0x8022531C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x80225320: jal         0x80225340
    // 0x80225324: nop

    func_80225340_ovl20(rdram, ctx);
        goto after_5;
    // 0x80225324: nop

    after_5:
    // 0x80225328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022532C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225330: jr          $ra
    // 0x80225334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225338: nop

    // 0x8022533C: nop

;}
RECOMP_FUNC void func_802253DC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253EC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253F0: bne         $v0, $zero, L_80225410
    if (ctx->r2 != 0) {
        // 0x802253F4: nop
    
            goto L_80225410;
    }
    // 0x802253F4: nop

    // 0x802253F8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253FC: jal         0x800607C4
    // 0x80225400: addiu       $a0, $a0, -0x452C
    ctx->r4 = ADD32(ctx->r4, -0X452C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225400: addiu       $a0, $a0, -0x452C
    ctx->r4 = ADD32(ctx->r4, -0X452C);
    after_0:
    // 0x80225404: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022540C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225410:
    // 0x80225410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225414: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225418: jr          $ra
    // 0x8022541C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022541C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228144_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022814C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228150: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228154: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228158: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022815C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228160: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228164: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228168: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022816C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80228170: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80228174: jal         0x80228AA4
    // 0x80228178: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80228AA4_ovl20(rdram, ctx);
        goto after_0;
    // 0x80228178: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022817C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228180: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228184: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228188: beq         $v0, $zero, L_8022821C
    if (ctx->r2 == 0) {
        // 0x8022818C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022821C;
    }
    // 0x8022818C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228190: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228194: jal         0x80228A08
    // 0x80228198: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x80228198: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022819C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802281A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802281A4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x802281A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802281B0: jal         0x8004F820
    // 0x802281B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802281B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802281B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281BC: bgez        $v0, L_802281E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802281C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802281E8;
    }
    // 0x802281C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802281C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802281C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281CC: jal         0x8004F820
    // 0x802281D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802281D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x802281D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802281DC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802281E0: j           L_80228200
    // 0x802281E4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80228200;
    // 0x802281E4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_802281E8:
    // 0x802281E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802281EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281F0: jal         0x8004F820
    // 0x802281F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x802281F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x802281F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281FC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80228200:
    // 0x80228200: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80228204: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80228208: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022820C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80228210: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228214: j           L_80228264
    // 0x80228218: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80228264;
    // 0x80228218: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022821C:
    // 0x8022821C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228220: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228224: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80228228: jal         0x8004F820
    // 0x8022822C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022822C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80228230: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228234: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228238: beq         $v0, $zero, L_80228248
    if (ctx->r2 == 0) {
        // 0x8022823C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80228248;
    }
    // 0x8022823C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80228240: j           L_8022824C
    // 0x80228244: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022824C;
    // 0x80228244: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80228248:
    // 0x80228248: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022824C:
    // 0x8022824C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228250: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228254: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80228258: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022825C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228260: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228264:
    // 0x80228264: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022826C: jal         0x800610AC
    // 0x80228270: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x80228270: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x80228274: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228278: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022827C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228280: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228288: jr          $ra
    // 0x8022828C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022828C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226C04_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C14: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226C18: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226C1C: jal         0x8004FA7C
    // 0x80226C20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226C20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226C24: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226C28: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226C2C: bne         $v0, $zero, L_80226C58
    if (ctx->r2 != 0) {
        // 0x80226C30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226C58;
    }
    // 0x80226C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C34: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226C38: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80226C3C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226C40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C48: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226C4C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226C50: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226C54: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80226C58:
    // 0x80226C58: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226C5C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226C60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226C64: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226C6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C70: jr          $ra
    // 0x80226C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297BC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802297C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802297C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802297C8: jal         0x8003E934
    // 0x802297CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x802297CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802297D0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802297D4: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x802297D8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802297DC: beq         $v1, $zero, L_802297EC
    if (ctx->r3 == 0) {
        // 0x802297E0: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_802297EC;
    }
    // 0x802297E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802297E4: jal         0x8004F418
    // 0x802297E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x802297E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802297EC:
    // 0x802297EC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x802297F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802297F4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802297F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802297FC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80229800: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x80229804: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229808: jal         0x8004DA90
    // 0x8022980C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022980C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x80229810: jal         0x8003E810
    // 0x80229814: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x80229814: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80229818: beq         $v0, $zero, L_80229830
    if (ctx->r2 == 0) {
        // 0x8022981C: nop
    
            goto L_80229830;
    }
    // 0x8022981C: nop

    // 0x80229820: jal         0x8004F418
    // 0x80229824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80229824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229828: j           L_80229840
    // 0x8022982C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229840;
    // 0x8022982C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229830:
    // 0x80229830: jal         0x80040F30
    // 0x80229834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80229834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229838: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022983C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229840:
    // 0x80229840: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229844: bne         $v0, $zero, L_80229854
    if (ctx->r2 != 0) {
        // 0x80229848: nop
    
            goto L_80229854;
    }
    // 0x80229848: nop

    // 0x8022984C: jal         0x8005044C
    // 0x80229850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80229850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80229854:
    // 0x80229854: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229858: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022985C: jr          $ra
    // 0x80229860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80229864: nop

    // 0x80229868: nop

    // 0x8022986C: nop

;}
RECOMP_FUNC void func_802264C0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802264C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802264D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802264D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802264D8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802264DC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802264E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802264E4: beq         $v1, $zero, L_802264F4
    if (ctx->r3 == 0) {
        // 0x802264E8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_802264F4;
    }
    // 0x802264E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802264EC: j           L_802264FC
    // 0x802264F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_802264FC;
    // 0x802264F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_802264F4:
    // 0x802264F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802264FC:
    // 0x802264FC: jal         0x8004D5D4
    // 0x80226500: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226500: nop

    after_0:
    // 0x80226504: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226508: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022650C: bne         $a0, $v0, L_8022651C
    if (ctx->r4 != ctx->r2) {
        // 0x80226510: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022651C;
    }
    // 0x80226510: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80226514: j           L_80226590
    // 0x80226518: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80226590;
    // 0x80226518: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022651C:
    // 0x8022651C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226520: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80226524: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226528: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022652C: bne         $v1, $zero, L_80226590
    if (ctx->r3 != 0) {
        // 0x80226530: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226590;
    }
    // 0x80226530: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226534: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80226538: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022653C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80226540: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226544: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226548: bne         $v1, $zero, L_80226590
    if (ctx->r3 != 0) {
        // 0x8022654C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226590;
    }
    // 0x8022654C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80226550: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80226554: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226558: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022655C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226560: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226564: bne         $v1, $zero, L_80226590
    if (ctx->r3 != 0) {
        // 0x80226568: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226590;
    }
    // 0x80226568: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022656C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80226570: bnel        $a0, $v0, L_80226590
    if (ctx->r4 != ctx->r2) {
        // 0x80226574: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80226590;
    }
    goto skip_0;
    // 0x80226574: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80226578: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022657C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226580: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226584: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226588: j           L_80226598
    // 0x8022658C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80226598;
    // 0x8022658C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80226590:
    // 0x80226590: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226594: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80226598:
    // 0x80226598: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022659C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802265A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802265A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802265A8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802265AC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802265B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802265B4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802265B8: bne         $v0, $zero, L_802265C4
    if (ctx->r2 != 0) {
        // 0x802265BC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_802265C4;
    }
    // 0x802265BC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x802265C0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_802265C4:
    // 0x802265C4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802265C8: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x802265CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802265D0: jal         0x8009A3B4
    // 0x802265D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802265D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802265D8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802265DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802265E4: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x802265E8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802265EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802265F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265F4: addiu       $v0, $v0, -0x3B80
    ctx->r2 = ADD32(ctx->r2, -0X3B80);
    // 0x802265F8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802265FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226600: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226604: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226608: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022660C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226610: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80226614: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80226618: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022661C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226620: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226624: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226628: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022662C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226630: jal         0x80050294
    // 0x80226634: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226634: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80226638: jal         0x80226654
    // 0x8022663C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226654_ovl20(rdram, ctx);
        goto after_3;
    // 0x8022663C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226640: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022664C: jr          $ra
    // 0x80226650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227AB4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227ABC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227AC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227AC4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227AC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227ACC: lw          $v0, -0x3990($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3990);
    // 0x80227AD0: jalr        $v0
    // 0x80227AD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227AD4: nop

    after_0:
    // 0x80227AD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227ADC: jr          $ra
    // 0x80227AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A58_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229A5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229A68: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80229A6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229A70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229A74: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x80229A78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229A7C: jal         0x8004DE68
    // 0x80229A80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x80229A80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80229A84: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80229A88: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80229A8C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80229A90: beq         $v1, $zero, L_80229AAC
    if (ctx->r3 == 0) {
        // 0x80229A94: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_80229AAC;
    }
    // 0x80229A94: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80229A98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A9C: beq         $v1, $v0, L_80229ACC
    if (ctx->r3 == ctx->r2) {
        // 0x80229AA0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80229ACC;
    }
    // 0x80229AA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229AA4: j           L_80229B0C
    // 0x80229AA8: nop

        goto L_80229B0C;
    // 0x80229AA8: nop

L_80229AAC:
    // 0x80229AAC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80229AB0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80229AB4: bne         $v0, $zero, L_80229AF8
    if (ctx->r2 != 0) {
        // 0x80229AB8: nop
    
            goto L_80229AF8;
    }
    // 0x80229AB8: nop

    // 0x80229ABC: beq         $v1, $zero, L_80229AF8
    if (ctx->r3 == 0) {
        // 0x80229AC0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80229AF8;
    }
    // 0x80229AC0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80229AC4: j           L_80229B0C
    // 0x80229AC8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229B0C;
    // 0x80229AC8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229ACC:
    // 0x80229ACC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229AD0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80229AD4: jal         0x8004F820
    // 0x80229AD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229AD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80229ADC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229AE0: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x80229AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229AE8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229AEC: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x80229AF0: beq         $a0, $zero, L_80229B0C
    if (ctx->r4 == 0) {
        // 0x80229AF4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229B0C;
    }
    // 0x80229AF4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229AF8:
    // 0x80229AF8: jal         0x80229C20
    // 0x80229AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229C20_ovl20(rdram, ctx);
        goto after_2;
    // 0x80229AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B04: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229B08: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80229B0C:
    // 0x80229B0C: jal         0x80229B48
    // 0x80229B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229B48_ovl20(rdram, ctx);
        goto after_3;
    // 0x80229B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229B18: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229B1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229B20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B24: jr          $ra
    // 0x80229B28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229B28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226CEC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226CFC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226D00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226D04: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226D08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226D0C: bne         $v0, $zero, L_80226D34
    if (ctx->r2 != 0) {
        // 0x80226D10: nop
    
            goto L_80226D34;
    }
    // 0x80226D10: nop

    // 0x80226D14: jal         0x80228970
    // 0x80226D18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228970_ovl20(rdram, ctx);
        goto after_0;
    // 0x80226D18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80226D1C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226D20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226D24: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226D28: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226D2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226D30: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226D34:
    // 0x80226D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D3C: jr          $ra
    // 0x80226D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802267C0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802267C8: jal         0x8004F418
    // 0x802267CC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802267CC: nop

    after_0:
    // 0x802267D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802267D4: jr          $ra
    // 0x802267D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E10_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E20: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226E24: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226E28: jal         0x8004FA7C
    // 0x80226E2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226E2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226E30: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226E34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226E38: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226E3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E40: bne         $v0, $zero, L_80226EA4
    if (ctx->r2 != 0) {
        // 0x80226E44: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226EA4;
    }
    // 0x80226E44: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226E48: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x80226E4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E50: beq         $v1, $zero, L_80226E94
    if (ctx->r3 == 0) {
        // 0x80226E54: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80226E94;
    }
    // 0x80226E54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226E58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226E5C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80226E60: jal         0x8009A3B4
    // 0x80226E64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226E64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226E68: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226E6C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226E70: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226E74: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80226E78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E7C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226E80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226E84: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226E88: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226E8C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226E90: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80226E94:
    // 0x80226E94: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226EA0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80226EA4:
    // 0x80226EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226EA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226EAC: jr          $ra
    // 0x80226EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B58_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B58: jr          $ra
    // 0x80225B5C: nop

    TRACE_RETURN()
    return;
    // 0x80225B5C: nop

;}
RECOMP_FUNC void func_80228B50_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228B60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B68: jal         0x8009A3B4
    // 0x80228B6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228B6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80228B70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228B74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228B78: jal         0x8009A3B4
    // 0x80228B7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228B7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80228B80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228B84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80228B88: jal         0x8009A3B4
    // 0x80228B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80228B90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228B94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228B98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228B9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228BA0: lw          $v0, -0x3924($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3924);
    // 0x80228BA4: jalr        $v0
    // 0x80228BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80228BA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228BAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228BB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228BB4: beq         $v0, $zero, L_80228BCC
    if (ctx->r2 == 0) {
        // 0x80228BB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BCC;
    }
    // 0x80228BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80228BC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80228BC4: jal         0x8003B564
    // 0x80228BC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80228BC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80228BCC:
    // 0x80228BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228BD4: jr          $ra
    // 0x80228BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F64_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F64: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80225F68: beq         $v1, $zero, L_80225F80
    if (ctx->r3 == 0) {
        // 0x80225F6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225F80;
    }
    // 0x80225F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F70: beq         $v1, $v0, L_80225FA4
    if (ctx->r3 == ctx->r2) {
        // 0x80225F74: nop
    
            goto L_80225FA4;
    }
    // 0x80225F74: nop

    // 0x80225F78: j           L_80225FC0
    // 0x80225F7C: nop

        goto L_80225FC0;
    // 0x80225F7C: nop

L_80225F80:
    // 0x80225F80: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x80225F84: sltiu       $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 < 0X3F ? 1 : 0;
    // 0x80225F88: beq         $v0, $zero, L_80225FB4
    if (ctx->r2 == 0) {
        // 0x80225F8C: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_80225FB4;
    }
    // 0x80225F8C: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x80225F90: beq         $v0, $zero, L_80225FC0
    if (ctx->r2 == 0) {
        // 0x80225F94: nop
    
            goto L_80225FC0;
    }
    // 0x80225F94: nop

    // 0x80225F98: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225F9C: j           L_80225FBC
    // 0x80225FA0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80225FBC;
    // 0x80225FA0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80225FA4:
    // 0x80225FA4: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80225FA8: sltiu       $v0, $v0, 0xE1
    ctx->r2 = ctx->r2 < 0XE1 ? 1 : 0;
    // 0x80225FAC: bne         $v0, $zero, L_80225FC0
    if (ctx->r2 != 0) {
        // 0x80225FB0: nop
    
            goto L_80225FC0;
    }
    // 0x80225FB0: nop

L_80225FB4:
    // 0x80225FB4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225FB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80225FBC:
    // 0x80225FBC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_80225FC0:
    // 0x80225FC0: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80225FC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225FC8: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80225FCC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225FD0: bne         $v0, $zero, L_80225FE4
    if (ctx->r2 != 0) {
        // 0x80225FD4: nop
    
            goto L_80225FE4;
    }
    // 0x80225FD4: nop

    // 0x80225FD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80225FDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FE0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80225FE4:
    // 0x80225FE4: jr          $ra
    // 0x80225FE8: nop

    TRACE_RETURN()
    return;
    // 0x80225FE8: nop

;}
RECOMP_FUNC void func_802286F0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802286F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802286F8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x802286FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228700: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228704: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228708: lw          $v0, -0x3948($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3948);
    // 0x8022870C: jalr        $v0
    // 0x80228710: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228710: nop

    after_0:
    // 0x80228714: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228718: jr          $ra
    // 0x8022871C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022871C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272B4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802272B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802272BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802272C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802272C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802272C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272CC: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x802272D0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x802272D4: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x802272D8: jal         0x8004FA7C
    // 0x802272DC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802272DC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x802272E0: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x802272E4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802272E8: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x802272EC: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802272F0: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x802272F4: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802272F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802272FC: bnel        $v0, $zero, L_8022731C
    if (ctx->r2 != 0) {
        // 0x80227300: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022731C;
    }
    goto skip_0;
    // 0x80227300: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80227304: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80227308: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022730C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227310: beq         $v0, $zero, L_80227320
    if (ctx->r2 == 0) {
        // 0x80227314: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80227320;
    }
    // 0x80227314: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80227318: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022731C:
    // 0x8022731C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80227320:
    // 0x80227320: bne         $v0, $zero, L_80227350
    if (ctx->r2 != 0) {
        // 0x80227324: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227350;
    }
    // 0x80227324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227328: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022732C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80227330: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80227334: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80227338: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022733C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227344: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80227348: j           L_802273A8
    // 0x8022734C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_802273A8;
    // 0x8022734C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80227350:
    // 0x80227350: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80227354: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227358: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022735C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227360: beq         $v0, $zero, L_802273A4
    if (ctx->r2 == 0) {
        // 0x80227364: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802273A4;
    }
    // 0x80227364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227368: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022736C: jal         0x80228AA4
    // 0x80227370: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_1;
    // 0x80227370: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80227374: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227378: beq         $v0, $zero, L_802273B0
    if (ctx->r2 == 0) {
        // 0x8022737C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802273B0;
    }
    // 0x8022737C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227380: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227384: jal         0x80228A08
    // 0x80227388: nop

    func_80228A08_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227388: nop

    after_2:
    // 0x8022738C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227390: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227394: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227398: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022739C: j           L_802273D0
    // 0x802273A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802273D0;
    // 0x802273A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802273A4:
    // 0x802273A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802273A8:
    // 0x802273A8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802273AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802273B0:
    // 0x802273B0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802273B4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802273B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802273BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802273C0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802273C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802273C8: jal         0x8004DA90
    // 0x802273CC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802273CC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_802273D0:
    // 0x802273D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802273D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802273D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802273DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273E0: jr          $ra
    // 0x802273E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802273E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022929C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022929C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802292A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292A8: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x802292AC: bne         $a1, $zero, L_802292DC
    if (ctx->r5 != 0) {
        // 0x802292B0: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_802292DC;
    }
    // 0x802292B0: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x802292B4: jal         0x800A3450
    // 0x802292B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802292B8: nop

    after_0:
    // 0x802292BC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802292C0: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x802292C4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802292C8: mflo        $v0
    ctx->r2 = lo;
    // 0x802292CC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802292D0: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802292D4: j           L_80229300
    // 0x802292D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_80229300;
    // 0x802292D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_802292DC:
    // 0x802292DC: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x802292E0: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x802292E4: bnel        $v0, $zero, L_802292EC
    if (ctx->r2 != 0) {
        // 0x802292E8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_802292EC;
    }
    goto skip_0;
    // 0x802292E8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_802292EC:
    // 0x802292EC: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x802292F0: beq         $v0, $zero, L_80229300
    if (ctx->r2 == 0) {
        // 0x802292F4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80229300;
    }
    // 0x802292F4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802292F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802292FC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_80229300:
    // 0x80229300: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80229304: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x80229308: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022930C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229314: jr          $ra
    // 0x80229318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022954C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022954C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229550: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229554: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229558: beq         $a1, $zero, L_802295A8
    if (ctx->r5 == 0) {
        // 0x8022955C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802295A8;
    }
    // 0x8022955C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229560: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80229564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229568: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022956C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229570: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229574: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x80229578: bne         $v0, $zero, L_802295A8
    if (ctx->r2 != 0) {
        // 0x8022957C: nop
    
            goto L_802295A8;
    }
    // 0x8022957C: nop

    // 0x80229580: jal         0x800A3450
    // 0x80229584: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229584: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x80229588: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022958C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80229590: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229594: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229598: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022959C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802295A0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802295A4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_802295A8:
    // 0x802295A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802295AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295B0: jr          $ra
    // 0x802295B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802295B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226878_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022687C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226888: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022688C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226890: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226894: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226898: bne         $v0, $zero, L_802268CC
    if (ctx->r2 != 0) {
        // 0x8022689C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802268CC;
    }
    // 0x8022689C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802268A0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802268A4: bne         $v1, $v0, L_802268B0
    if (ctx->r3 != ctx->r2) {
        // 0x802268A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802268B0;
    }
    // 0x802268A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802268AC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_802268B0:
    // 0x802268B0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802268B4: jal         0x80228970
    // 0x802268B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228970_ovl20(rdram, ctx);
        goto after_0;
    // 0x802268B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802268BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802268C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802268C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802268C8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802268CC:
    // 0x802268CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268D4: jr          $ra
    // 0x802268D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022534C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225354: jal         0x8006033C
    // 0x80225358: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225358: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x8022535C: bne         $v0, $zero, L_80225388
    if (ctx->r2 != 0) {
        // 0x80225360: nop
    
            goto L_80225388;
    }
    // 0x80225360: nop

    // 0x80225364: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225368: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022536C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225370: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225374: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225378: lw          $v0, -0x48B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X48B4);
    // 0x8022537C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225380: jalr        $v0
    // 0x80225384: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225384: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225388:
    // 0x80225388: jal         0x8006033C
    // 0x8022538C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022538C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225390: beq         $v0, $zero, L_802253D0
    if (ctx->r2 == 0) {
        // 0x80225394: nop
    
            goto L_802253D0;
    }
    // 0x80225394: nop

    // 0x80225398: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022539C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802253A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802253A4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802253A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253B4: lw          $v1, -0x48F4($at)
    ctx->r3 = MEM_W(ctx->r1, -0X48F4);
    // 0x802253B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253C4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253C8: jalr        $v0
    // 0x802253CC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802253CC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802253D0:
    // 0x802253D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253D4: jr          $ra
    // 0x802253D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C24_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C24: jr          $ra
    // 0x80225C28: nop

    TRACE_RETURN()
    return;
    // 0x80225C28: nop

;}
RECOMP_FUNC void func_80227E30_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227E34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227E38: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227E3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227E40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227E44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227E48: lw          $v0, -0x3980($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3980);
    // 0x80227E4C: jalr        $v0
    // 0x80227E50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227E50: nop

    after_0:
    // 0x80227E54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227E58: jr          $ra
    // 0x80227E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228804_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228808: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022880C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228814: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228818: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022881C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228820: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228824: jal         0x8004F820
    // 0x80228828: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228828: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022882C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228830: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228834: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228838: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022883C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228840: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228844: bne         $v0, $zero, L_80228868
    if (ctx->r2 != 0) {
        // 0x80228848: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80228868;
    }
    // 0x80228848: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022884C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228850: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228854: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228858: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022885C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228860: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228864: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_80228868:
    // 0x80228868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022886C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228870: jr          $ra
    // 0x80228874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A68_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A80: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227A84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227A88: jal         0x80228A18
    // 0x80227A8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228A18_ovl20(rdram, ctx);
        goto after_0;
    // 0x80227A8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227A90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A98: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80227A9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227AA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AAC: jr          $ra
    // 0x80227AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x4DF8
    ctx->r2 = ADD32(ctx->r2, -0X4DF8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x4C6C
    ctx->r2 = ADD32(ctx->r2, -0X4C6C);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x4C50
    ctx->r2 = ADD32(ctx->r2, -0X4C50);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x4BFC
    ctx->r2 = ADD32(ctx->r2, -0X4BFC);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x4BE4
    ctx->r2 = ADD32(ctx->r2, -0X4BE4);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x4BE0
    ctx->r2 = ADD32(ctx->r2, -0X4BE0);
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
RECOMP_FUNC void func_8022559C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022559C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802255A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802255A4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802255A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802255AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802255B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802255B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255B8: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x802255BC: bne         $v0, $zero, L_80225618
    if (ctx->r2 != 0) {
        // 0x802255C0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80225618;
    }
    // 0x802255C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802255C4: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x802255C8: addiu       $s1, $s1, -0x44E4
    ctx->r17 = ADD32(ctx->r17, -0X44E4);
    // 0x802255CC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802255D0: addiu       $s0, $s0, -0x4504
    ctx->r16 = ADD32(ctx->r16, -0X4504);
L_802255D4:
    // 0x802255D4: jal         0x8003E6BC
    // 0x802255D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x802255D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802255DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802255E0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802255E4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802255E8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802255EC: jal         0x80071ACC
    // 0x802255F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_1;
    // 0x802255F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_1:
    // 0x802255F4: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x802255F8: bne         $v0, $zero, L_802255D4
    if (ctx->r2 != 0) {
        // 0x802255FC: nop
    
            goto L_802255D4;
    }
    // 0x802255FC: nop

    // 0x80225600: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225604: jal         0x800607C4
    // 0x80225608: addiu       $a0, $a0, -0x4514
    ctx->r4 = ADD32(ctx->r4, -0X4514);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_2;
    // 0x80225608: addiu       $a0, $a0, -0x4514
    ctx->r4 = ADD32(ctx->r4, -0X4514);
    after_2:
    // 0x8022560C: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225614: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
L_80225618:
    // 0x80225618: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022561C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225620: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022562C: jr          $ra
    // 0x80225630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229870_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022987C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229880: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229888: jal         0x8009A3B4
    // 0x8022988C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022988C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80229890: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229894: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229898: jal         0x8009A3B4
    // 0x8022989C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022989C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802298A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802298A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802298A8: jal         0x8009A3B4
    // 0x802298AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802298AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802298B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802298B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802298B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802298BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802298C0: lw          $v0, -0x3910($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3910);
    // 0x802298C4: jalr        $v0
    // 0x802298C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802298C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802298CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802298D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802298D4: beq         $v0, $zero, L_802298EC
    if (ctx->r2 == 0) {
        // 0x802298D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802298EC;
    }
    // 0x802298D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802298DC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802298E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802298E4: jal         0x8003B564
    // 0x802298E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802298E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802298EC:
    // 0x802298EC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802298F0: beq         $v0, $zero, L_80229908
    if (ctx->r2 == 0) {
        // 0x802298F4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80229908;
    }
    // 0x802298F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802298F8: jal         0x8005044C
    // 0x802298FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802298FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229900: j           L_8022990C
    // 0x80229904: nop

        goto L_8022990C;
    // 0x80229904: nop

L_80229908:
    // 0x80229908: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022990C:
    // 0x8022990C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229914: jr          $ra
    // 0x80229918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E34_ovl20(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80225E44: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225E48: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225E4C: bne         $v0, $zero, L_80225F30
    if (ctx->r2 != 0) {
        // 0x80225E50: nop
    
            goto L_80225F30;
    }
    // 0x80225E50: nop

    // 0x80225E54: jal         0x8004F144
    // 0x80225E58: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225E58: nop

    after_0:
    // 0x80225E5C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225E60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225E64: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225E68: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80225E6C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80225E70: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80225E74: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80225E78: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80225E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E80: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80225E84: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80225E88: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80225E8C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80225E90: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80225E94: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x80225E98: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80225E9C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x80225EA0: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80225EA4: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80225EA8: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80225EAC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225EB0: bne         $v1, $v0, L_80225ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80225EB4: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_80225ECC;
    }
    // 0x80225EB4: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80225EB8: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80225EBC: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80225EC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80225EC4: j           L_80225EFC
    // 0x80225EC8: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
        goto L_80225EFC;
    // 0x80225EC8: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
L_80225ECC:
    // 0x80225ECC: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80225ED0: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80225ED4: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80225ED8: lui         $v1, 0xAE00
    ctx->r3 = S32(0XAE00 << 16);
    // 0x80225EDC: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80225EE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225EE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225EE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225EEC: lw          $v0, -0x4170($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4170);
    // 0x80225EF0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80225EF4: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80225EF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80225EFC:
    // 0x80225EFC: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80225F00: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80225F04: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80225F08: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80225F0C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80225F10: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80225F14: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80225F18: bne         $v1, $zero, L_80225F28
    if (ctx->r3 != 0) {
        // 0x80225F1C: sh          $v0, 0x24($a0)
        MEM_H(0X24, ctx->r4) = ctx->r2;
            goto L_80225F28;
    }
    // 0x80225F1C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80225F20: j           L_80225F2C
    // 0x80225F24: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
        goto L_80225F2C;
    // 0x80225F24: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_80225F28:
    // 0x80225F28: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_80225F2C:
    // 0x80225F2C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80225F30:
    // 0x80225F30: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80225F34: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80225F38: bne         $v0, $zero, L_80225F50
    if (ctx->r2 != 0) {
        // 0x80225F3C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80225F50;
    }
    // 0x80225F3C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80225F40: jal         0x8004F5C4
    // 0x80225F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80225F44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225F48: j           L_80225F54
    // 0x80225F4C: nop

        goto L_80225F54;
    // 0x80225F4C: nop

L_80225F50:
    // 0x80225F50: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80225F54:
    // 0x80225F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F5C: jr          $ra
    // 0x80225F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226010_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226014: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226018: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022601C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226020: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226024: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226028: lw          $v0, -0x4150($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4150);
    // 0x8022602C: jalr        $v0
    // 0x80226030: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226030: nop

    after_0:
    // 0x80226034: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226038: jr          $ra
    // 0x8022603C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022603C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022862C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022862C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228634: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022863C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228640: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228644: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228648: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022864C: jal         0x8004FA7C
    // 0x80228650: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228650: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80228654: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228658: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022865C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228660: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228664: beq         $v0, $zero, L_8022867C
    if (ctx->r2 == 0) {
        // 0x80228668: nop
    
            goto L_8022867C;
    }
    // 0x80228668: nop

    // 0x8022866C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228670: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228674: beq         $v0, $zero, L_802286C8
    if (ctx->r2 == 0) {
        // 0x80228678: nop
    
            goto L_802286C8;
    }
    // 0x80228678: nop

L_8022867C:
    // 0x8022867C: jal         0x8003516C
    // 0x80228680: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80228680: nop

    after_1:
    // 0x80228684: bne         $v0, $zero, L_802286C8
    if (ctx->r2 != 0) {
        // 0x80228688: nop
    
            goto L_802286C8;
    }
    // 0x80228688: nop

    // 0x8022868C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80228690: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228694: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80228698: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022869C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x802286A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802286A4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802286A8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802286AC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802286B0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x802286B4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802286B8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x802286BC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x802286C0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802286C4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802286C8:
    // 0x802286C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802286CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802286D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802286D4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802286D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802286DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802286E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802286E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802286E8: jr          $ra
    // 0x802286EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802286EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ABB0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ABB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ABB8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022ABBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ABC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ABC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ABC8: lw          $v0, -0x38B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X38B0);
    // 0x8022ABCC: jalr        $v0
    // 0x8022ABD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022ABD0: nop

    after_0:
    // 0x8022ABD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABD8: jr          $ra
    // 0x8022ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226948_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022694C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226950: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226954: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226958: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022695C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226960: lw          $v0, -0x3AF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3AF4);
    // 0x80226964: jalr        $v0
    // 0x80226968: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226968: nop

    after_0:
    // 0x8022696C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226970: jr          $ra
    // 0x80226974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226EB4_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226EC4: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226EC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226ECC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226ED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226ED4: bne         $v0, $zero, L_80226F40
    if (ctx->r2 != 0) {
        // 0x80226ED8: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226F40;
    }
    // 0x80226ED8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226EDC: jal         0x80228AA4
    // 0x80226EE0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_0;
    // 0x80226EE0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226EE4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226EE8: beq         $v0, $zero, L_80226F3C
    if (ctx->r2 == 0) {
        // 0x80226EEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226F3C;
    }
    // 0x80226EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EF0: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226EF4: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80226EF8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80226EFC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226F00: bne         $v1, $zero, L_80226F10
    if (ctx->r3 != 0) {
        // 0x80226F04: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226F10;
    }
    // 0x80226F04: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226F08: j           L_80226F40
    // 0x80226F0C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80226F40;
    // 0x80226F0C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80226F10:
    // 0x80226F10: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F14: jal         0x80228A18
    // 0x80226F18: nop

    func_80228A18_ovl20(rdram, ctx);
        goto after_1;
    // 0x80226F18: nop

    after_1:
    // 0x80226F1C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226F24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226F28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226F2C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226F30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226F34: j           L_80226F40
    // 0x80226F38: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80226F40;
    // 0x80226F38: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80226F3C:
    // 0x80226F3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F40:
    // 0x80226F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F48: jr          $ra
    // 0x80226F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
