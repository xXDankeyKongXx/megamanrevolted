#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225DAC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DAC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80225DB0: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80225DB4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80225DB8: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x80225DBC: bne         $v0, $zero, L_80225E6C
    if (ctx->r2 != 0) {
        // 0x80225DC0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225E6C;
    }
    // 0x80225DC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225DCC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DD4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225DD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225DDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DE0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225DE4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225DE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DEC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225DF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DF4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225DF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DFC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225E00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E04: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225E08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E0C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225E10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E14: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225E18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E1C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225E20: lw          $a1, 0x24($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X24);
    // 0x80225E24: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80225E28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225E2C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225E30: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225E34: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80225E38: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80225E3C: lw          $v1, 0x28($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X28);
    // 0x80225E40: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225E44: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x80225E48: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225E4C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225E50: lw          $a1, 0x2C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X2C);
    // 0x80225E54: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225E58: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225E5C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225E60: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80225E64: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80225E68: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_80225E6C:
    // 0x80225E6C: jr          $ra
    // 0x80225E70: nop

    TRACE_RETURN()
    return;
    // 0x80225E70: nop

;}
RECOMP_FUNC void func_80226A00_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226A10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226A14: bne         $v0, $zero, L_80226A7C
    if (ctx->r2 != 0) {
        // 0x80226A18: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80226A7C;
    }
    // 0x80226A18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A1C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226A20: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226A24: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226A28: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226A2C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226A30: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226A34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226A38: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226A3C: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80226A40: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226A44: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80226A48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226A4C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226A50: jal         0x8004D5D4
    // 0x80226A54: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226A54: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80226A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A60: jal         0x80050294
    // 0x80226A64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226A64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226A68: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226A6C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80226A70: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226A74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226A7C:
    // 0x80226A7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A84: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A8C: lw          $v0, -0x7620($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7620);
    // 0x80226A90: jalr        $v0
    // 0x80226A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80226A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226A98: jal         0x8005044C
    // 0x80226A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80226A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226AA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AA8: jr          $ra
    // 0x80226AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802260B8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260C8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802260CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802260D0: beq         $v1, $v0, L_80226168
    if (ctx->r3 == ctx->r2) {
        // 0x802260D4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226168;
    }
    // 0x802260D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802260D8: beql        $v0, $zero, L_802260F0
    if (ctx->r2 == 0) {
        // 0x802260DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802260F0;
    }
    goto skip_0;
    // 0x802260DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802260E0: beq         $v1, $zero, L_80226100
    if (ctx->r3 == 0) {
        // 0x802260E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226100;
    }
    // 0x802260E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802260E8: j           L_80226170
    // 0x802260EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80226170;
    // 0x802260EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802260F0:
    // 0x802260F0: beq         $v1, $v0, L_80226144
    if (ctx->r3 == ctx->r2) {
        // 0x802260F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226144;
    }
    // 0x802260F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802260F8: j           L_8022616C
    // 0x802260FC: nop

        goto L_8022616C;
    // 0x802260FC: nop

L_80226100:
    // 0x80226100: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226104: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226108: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022610C: jal         0x8004D5D4
    // 0x80226110: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226110: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226114: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226118: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022611C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226120: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226124: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226128: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022612C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226130: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80226134: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226138: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022613C: j           L_80226168
    // 0x80226140: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80226168;
    // 0x80226140: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80226144:
    // 0x80226144: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226148: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8022614C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226150: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226154: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226158: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022615C: lw          $v0, -0x76F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X76F0);
    // 0x80226160: jalr        $v0
    // 0x80226164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80226168:
    // 0x80226168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022616C:
    // 0x8022616C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80226170:
    // 0x80226170: jal         0x80050294
    // 0x80226174: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226174: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022617C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226180: jr          $ra
    // 0x80226184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227858_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022785C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227860: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80227864: bne         $v0, $zero, L_802278D0
    if (ctx->r2 != 0) {
        // 0x80227868: nop
    
            goto L_802278D0;
    }
    // 0x80227868: nop

    // 0x8022786C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227870: bne         $v0, $zero, L_802278C8
    if (ctx->r2 != 0) {
        // 0x80227874: nop
    
            goto L_802278C8;
    }
    // 0x80227874: nop

    // 0x80227878: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022787C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227880: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80227884: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227888: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022788C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80227890: bnel        $v1, $v0, L_802278A4
    if (ctx->r3 != ctx->r2) {
        // 0x80227894: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_802278A4;
    }
    goto skip_0;
    // 0x80227894: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x80227898: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x8022789C: j           L_802278A8
    // 0x802278A0: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_802278A8;
    // 0x802278A0: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_802278A4:
    // 0x802278A4: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_802278A8:
    // 0x802278A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x802278AC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802278B0: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802278B4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802278B8: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x802278BC: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x802278C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802278C4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_802278C8:
    // 0x802278C8: jal         0x802273D0
    // 0x802278CC: nop

    func_802273D0_ovl24(rdram, ctx);
        goto after_0;
    // 0x802278CC: nop

    after_0:
L_802278D0:
    // 0x802278D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802278D4: jr          $ra
    // 0x802278D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263AC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802263B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802263B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802263B8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802263BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802263C0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802263C4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802263C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802263CC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x802263D0: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802263D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802263D8: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802263DC: beq         $a0, $v0, L_802263F8
    if (ctx->r4 == ctx->r2) {
        // 0x802263E0: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802263F8;
    }
    // 0x802263E0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802263E4: bne         $a0, $v0, L_802263F4
    if (ctx->r4 != ctx->r2) {
        // 0x802263E8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802263F4;
    }
    // 0x802263E8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802263EC: j           L_802263F8
    // 0x802263F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_802263F8;
    // 0x802263F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802263F4:
    // 0x802263F4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802263F8:
    // 0x802263F8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802263FC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80226400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226404: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226408: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022640C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80226410: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226414: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226418: beq         $a0, $v1, L_80226440
    if (ctx->r4 == ctx->r3) {
        // 0x8022641C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80226440;
    }
    // 0x8022641C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80226420: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80226424: jal         0x8003B85C
    // 0x80226428: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226428: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022642C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80226430: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226434: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226438: jal         0x8003B840
    // 0x8022643C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022643C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80226440:
    // 0x80226440: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80226444: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80226448: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022644C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80226450: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80226454: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80226458: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022645C: beq         $v1, $v0, L_80226478
    if (ctx->r3 == ctx->r2) {
        // 0x80226460: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80226478;
    }
    // 0x80226460: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226464: bne         $v1, $v0, L_80226474
    if (ctx->r3 != ctx->r2) {
        // 0x80226468: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226474;
    }
    // 0x80226468: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022646C: j           L_80226478
    // 0x80226470: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80226478;
    // 0x80226470: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80226474:
    // 0x80226474: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80226478:
    // 0x80226478: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022647C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80226480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226484: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226488: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022648C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80226490: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226494: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226498: beq         $a0, $v1, L_802264C0
    if (ctx->r4 == ctx->r3) {
        // 0x8022649C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802264C0;
    }
    // 0x8022649C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802264A0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802264A4: jal         0x8003B85C
    // 0x802264A8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802264A8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802264AC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802264B0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802264B4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802264B8: jal         0x8003B840
    // 0x802264BC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802264BC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802264C0:
    // 0x802264C0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802264C4: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x802264C8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802264CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802264D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802264D4: jr          $ra
    // 0x802264D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802264D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802251BC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251C0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802251D0: beq         $v0, $zero, L_802251EC
    if (ctx->r2 == 0) {
        // 0x802251D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251DC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251E0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251E4: j           L_802251F4
    // 0x802251E8: addiu       $a1, $a1, -0x7B64
    ctx->r5 = ADD32(ctx->r5, -0X7B64);
        goto L_802251F4;
    // 0x802251E8: addiu       $a1, $a1, -0x7B64
    ctx->r5 = ADD32(ctx->r5, -0X7B64);
L_802251EC:
    // 0x802251EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F4:
    // 0x802251F4: jal         0x80037D80
    // 0x802251F8: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F8: nop

    after_0:
    // 0x802251FC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225200: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225204: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x80225208: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022520C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225210: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80225214: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x80225218: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x8022521C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225220: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022522C: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x80225230: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225234: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225238: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8022523C: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x80225240: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225244: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225248: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x8022524C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225250: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x80225254: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225258: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022525C: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x80225260: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225264: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225268: lw          $a0, -0x7C44($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7C44);
    // 0x8022526C: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80225270: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80225274: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225278: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022527C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80225280: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225284: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225288: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022528C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225290: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225294: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225298: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x8022529C: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x802252A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A4: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252AC: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x802252B0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B4: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252B8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252BC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802252C0: lw          $v0, -0x7C20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7C20);
    // 0x802252C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C8: jal         0x8004C790
    // 0x802252CC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252CC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252D0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252D8: addiu       $a0, $a0, -0x7BF0
    ctx->r4 = ADD32(ctx->r4, -0X7BF0);
    // 0x802252DC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252E4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E8: lw          $v1, -0x7B70($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7B70);
    // 0x802252EC: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252FC: addiu       $v0, $v0, -0x7C14
    ctx->r2 = ADD32(ctx->r2, -0X7C14);
    // 0x80225300: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225304: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225308: jal         0x80054FB8
    // 0x8022530C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x8022530C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225310: jal         0x8004A614
    // 0x80225314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225314: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225318: jal         0x80225330
    // 0x8022531C: nop

    func_80225330_ovl24(rdram, ctx);
        goto after_4;
    // 0x8022531C: nop

    after_4:
    // 0x80225320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225328: jr          $ra
    // 0x8022532C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022532C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226AC0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AC0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226AC4: beq         $v1, $zero, L_80226ADC
    if (ctx->r3 == 0) {
        // 0x80226AC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226ADC;
    }
    // 0x80226AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226ACC: beq         $v1, $v0, L_80226B0C
    if (ctx->r3 == ctx->r2) {
        // 0x80226AD0: nop
    
            goto L_80226B0C;
    }
    // 0x80226AD0: nop

    // 0x80226AD4: j           L_80226B18
    // 0x80226AD8: nop

        goto L_80226B18;
    // 0x80226AD8: nop

L_80226ADC:
    // 0x80226ADC: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226AE0: addiu       $v0, $zero, -0x12AC
    ctx->r2 = ADD32(0, -0X12AC);
    // 0x80226AE4: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80226AE8: addiu       $v0, $zero, -0x76C
    ctx->r2 = ADD32(0, -0X76C);
    // 0x80226AEC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80226AF0: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x80226AF4: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x80226AF8: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
    // 0x80226AFC: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80226B00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226B04: j           L_80226B18
    // 0x80226B08: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
        goto L_80226B18;
    // 0x80226B08: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_80226B0C:
    // 0x80226B0C: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80226B10: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80226B14: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_80226B18:
    // 0x80226B18: jr          $ra
    // 0x80226B1C: nop

    TRACE_RETURN()
    return;
    // 0x80226B1C: nop

;}
RECOMP_FUNC void func_802257F8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257F8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802257FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225800: bne         $v1, $v0, L_80225824
    if (ctx->r3 != ctx->r2) {
        // 0x80225804: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225824;
    }
    // 0x80225804: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225808: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8022580C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80225810: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225818: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x8022581C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80225820: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_80225824:
    // 0x80225824: jr          $ra
    // 0x80225828: nop

    TRACE_RETURN()
    return;
    // 0x80225828: nop

;}
RECOMP_FUNC void func_80225388_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022538C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225398: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022539C: bne         $v0, $zero, L_802253B8
    if (ctx->r2 != 0) {
        // 0x802253A0: nop
    
            goto L_802253B8;
    }
    // 0x802253A0: nop

    // 0x802253A4: jal         0x80060690
    // 0x802253A8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x802253A8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_0:
    // 0x802253AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253B8:
    // 0x802253B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226628_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022662C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226630: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226638: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022663C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226640: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226644: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226648: lw          $v0, -0x7630($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7630);
    // 0x8022664C: jalr        $v0
    // 0x80226650: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226650: nop

    after_0:
    // 0x80226654: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226658: jal         0x8004DD04
    // 0x8022665C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022665C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80226660: jal         0x800504EC
    // 0x80226664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x80226664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226668: jal         0x8005129C
    // 0x8022666C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x8022666C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226674: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226678: jr          $ra
    // 0x8022667C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022667C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226188_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226188: jr          $ra
    // 0x8022618C: nop

    TRACE_RETURN()
    return;
    // 0x8022618C: nop

;}
RECOMP_FUNC void func_80227B6C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B6C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80227B70: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80227B74: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80227B78: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80227B7C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80227B80: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80227B84: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80227B88: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80227B8C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80227B90: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80227B94: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80227B98: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80227B9C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80227BA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227BA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227BA8: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x80227BAC: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80227BB0: lhu         $s5, -0x72FC($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X72FC);
    // 0x80227BB4: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80227BB8: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x80227BBC: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80227BC0: lhu         $s6, -0x72FA($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X72FA);
    // 0x80227BC4: jal         0x800874D0
    // 0x80227BC8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80227BC8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x80227BCC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80227BD0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80227BD4: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80227BD8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227BDC: addiu       $a0, $a0, -0x7170
    ctx->r4 = ADD32(ctx->r4, -0X7170);
    // 0x80227BE0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80227BE4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227BE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227BEC: lbu         $v1, -0x7258($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7258);
    // 0x80227BF0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80227BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227BFC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80227C00: jal         0x80086F94
    // 0x80227C04: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80227C04: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80227C08: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80227C0C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80227C10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227C14: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227C18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227C20: lhu         $v0, -0x72F8($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X72F8);
    // 0x80227C24: beq         $v0, $zero, L_80227E40
    if (ctx->r2 == 0) {
        // 0x80227C28: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80227E40;
    }
    // 0x80227C28: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_80227C2C:
    // 0x80227C2C: bgez        $s6, L_80227C38
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80227C30: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80227C38;
    }
    // 0x80227C30: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80227C34: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80227C38:
    // 0x80227C38: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80227C3C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227C40: beq         $v0, $zero, L_80227EFC
    if (ctx->r2 == 0) {
        // 0x80227C44: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80227EFC;
    }
    // 0x80227C44: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227C48: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80227C4C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80227C50: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80227C54: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80227C58: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227C5C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80227C60: jal         0x800874D0
    // 0x80227C64: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80227C64: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80227C68: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227C6C: jal         0x80087248
    // 0x80227C70: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80227C70: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80227C74: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227C78: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227C7C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80227C80: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80227C84: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80227C88: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227C8C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80227C90: jal         0x800874D0
    // 0x80227C94: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80227C94: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80227C98: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227C9C: jal         0x80087248
    // 0x80227CA0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80227CA0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80227CA4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80227CA8: bgez        $s5, L_80227CB4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80227CAC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80227CB4;
    }
    // 0x80227CAC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80227CB0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80227CB4:
    // 0x80227CB4: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80227CB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227CBC: jal         0x800874D0
    // 0x80227CC0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80227CC0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80227CC4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227CC8: jal         0x80087248
    // 0x80227CCC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x80227CCC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80227CD0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80227CD4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80227CD8: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x80227CDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80227CE0: bnel        $v0, $zero, L_80227C2C
    if (ctx->r2 != 0) {
        // 0x80227CE4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80227C2C;
    }
    goto skip_0;
    // 0x80227CE4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80227CE8: beq         $a1, $zero, L_80227E38
    if (ctx->r5 == 0) {
        // 0x80227CEC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80227E38;
    }
    // 0x80227CEC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80227CF0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80227CF4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80227CF8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_80227CFC:
    // 0x80227CFC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80227D00: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80227D04: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80227D08: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x80227D0C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80227D10: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80227D14: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80227D18: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227D1C: mflo        $a3
    ctx->r7 = lo;
    // 0x80227D20: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80227D24: nop

    // 0x80227D28: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x80227D2C: bne         $a1, $zero, L_80227D38
    if (ctx->r5 != 0) {
        // 0x80227D30: nop
    
            goto L_80227D38;
    }
    // 0x80227D30: nop

    // 0x80227D34: break       7
    do_break(2149743924);
L_80227D38:
    // 0x80227D38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227D3C: bne         $a1, $at, L_80227D50
    if (ctx->r5 != ctx->r1) {
        // 0x80227D40: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227D50;
    }
    // 0x80227D40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227D44: bne         $a3, $at, L_80227D50
    if (ctx->r7 != ctx->r1) {
        // 0x80227D48: nop
    
            goto L_80227D50;
    }
    // 0x80227D48: nop

    // 0x80227D4C: break       6
    do_break(2149743948);
L_80227D50:
    // 0x80227D50: mflo        $a3
    ctx->r7 = lo;
    // 0x80227D54: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80227D58: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x80227D5C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80227D60: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80227D64: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80227D68: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227D6C: mflo        $v0
    ctx->r2 = lo;
    // 0x80227D70: nop

    // 0x80227D74: nop

    // 0x80227D78: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80227D7C: bne         $a1, $zero, L_80227D88
    if (ctx->r5 != 0) {
        // 0x80227D80: nop
    
            goto L_80227D88;
    }
    // 0x80227D80: nop

    // 0x80227D84: break       7
    do_break(2149744004);
L_80227D88:
    // 0x80227D88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227D8C: bne         $a1, $at, L_80227DA0
    if (ctx->r5 != ctx->r1) {
        // 0x80227D90: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227DA0;
    }
    // 0x80227D90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227D94: bne         $v0, $at, L_80227DA0
    if (ctx->r2 != ctx->r1) {
        // 0x80227D98: nop
    
            goto L_80227DA0;
    }
    // 0x80227D98: nop

    // 0x80227D9C: break       6
    do_break(2149744028);
L_80227DA0:
    // 0x80227DA0: mflo        $v0
    ctx->r2 = lo;
    // 0x80227DA4: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80227DA8: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x80227DAC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80227DB0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80227DB4: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80227DB8: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227DBC: mflo        $v1
    ctx->r3 = lo;
    // 0x80227DC0: nop

    // 0x80227DC4: nop

    // 0x80227DC8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80227DCC: bne         $a1, $zero, L_80227DD8
    if (ctx->r5 != 0) {
        // 0x80227DD0: nop
    
            goto L_80227DD8;
    }
    // 0x80227DD0: nop

    // 0x80227DD4: break       7
    do_break(2149744084);
L_80227DD8:
    // 0x80227DD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227DDC: bne         $a1, $at, L_80227DF0
    if (ctx->r5 != ctx->r1) {
        // 0x80227DE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227DF0;
    }
    // 0x80227DE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227DE4: bne         $v1, $at, L_80227DF0
    if (ctx->r3 != ctx->r1) {
        // 0x80227DE8: nop
    
            goto L_80227DF0;
    }
    // 0x80227DE8: nop

    // 0x80227DEC: break       6
    do_break(2149744108);
L_80227DF0:
    // 0x80227DF0: mflo        $v1
    ctx->r3 = lo;
    // 0x80227DF4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80227DF8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x80227DFC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80227E00: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80227E04: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80227E08: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x80227E0C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80227E10: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80227E14: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80227E18: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x80227E1C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80227E20: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80227E24: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80227E28: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x80227E2C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80227E30: bne         $v0, $zero, L_80227CFC
    if (ctx->r2 != 0) {
        // 0x80227E34: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_80227CFC;
    }
    // 0x80227E34: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80227E38:
    // 0x80227E38: j           L_80227C2C
    // 0x80227E3C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_80227C2C;
    // 0x80227E3C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80227E40:
    // 0x80227E40: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80227E44: bne         $v0, $zero, L_80227EFC
    if (ctx->r2 != 0) {
        // 0x80227E48: nop
    
            goto L_80227EFC;
    }
    // 0x80227E48: nop

L_80227E4C:
    // 0x80227E4C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80227E50: bltzl       $v0, L_80227E58
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227E54: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80227E58;
    }
    goto skip_1;
    // 0x80227E54: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80227E58:
    // 0x80227E58: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80227E5C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227E60: beq         $v0, $zero, L_80227EFC
    if (ctx->r2 == 0) {
        // 0x80227E64: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80227EFC;
    }
    // 0x80227E64: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227E68: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80227E6C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80227E70: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80227E74: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80227E78: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227E7C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80227E80: jal         0x800874D0
    // 0x80227E84: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80227E84: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80227E88: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227E8C: jal         0x80087248
    // 0x80227E90: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80227E90: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80227E94: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227E98: bgez        $s5, L_80227EA4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80227E9C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80227EA4;
    }
    // 0x80227E9C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80227EA0: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80227EA4:
    // 0x80227EA4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80227EA8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80227EAC: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80227EB0: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80227EB4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80227EB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80227EBC: jal         0x800874D0
    // 0x80227EC0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80227EC0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80227EC4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227EC8: jal         0x80087248
    // 0x80227ECC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x80227ECC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80227ED0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80227ED4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80227ED8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80227EDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80227EE0: bnel        $v0, $zero, L_80227E4C
    if (ctx->r2 != 0) {
        // 0x80227EE4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80227E4C;
    }
    goto skip_2;
    // 0x80227EE4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80227EE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227EEC: jal         0x80099F90
    // 0x80227EF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80227EF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80227EF4: j           L_80227E4C
    // 0x80227EF8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_80227E4C;
    // 0x80227EF8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80227EFC:
    // 0x80227EFC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80227F00: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80227F04: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80227F08: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80227F0C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80227F10: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80227F14: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80227F18: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80227F1C: jr          $ra
    // 0x80227F20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80227F20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802258EC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258FC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225900: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225904: beq         $v1, $v0, L_802259C0
    if (ctx->r3 == ctx->r2) {
        // 0x80225908: nop
    
            goto L_802259C0;
    }
    // 0x80225908: nop

    // 0x8022590C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225910: bne         $v0, $zero, L_802259C0
    if (ctx->r2 != 0) {
        // 0x80225914: nop
    
            goto L_802259C0;
    }
    // 0x80225914: nop

    // 0x80225918: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022591C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225920: bne         $v0, $zero, L_802259C0
    if (ctx->r2 != 0) {
        // 0x80225924: nop
    
            goto L_802259C0;
    }
    // 0x80225924: nop

    // 0x80225928: jal         0x80036E48
    // 0x8022592C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022592C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80225930: jal         0x80029114
    // 0x80225934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x80225934: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80225938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022593C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225940: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225944: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80225948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022594C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225954: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225958: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022595C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225960: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225964: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022596C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225970: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225974: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022597C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225984: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225988: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022598C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225994: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225998: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022599C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802259A0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x802259A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259A8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802259AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802259B0: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x802259B4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802259B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802259BC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802259C0:
    // 0x802259C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259C8: jr          $ra
    // 0x802259CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279A0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802279A8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802279AC: beq         $v0, $zero, L_80227A38
    if (ctx->r2 == 0) {
        // 0x802279B0: nop
    
            goto L_80227A38;
    }
    // 0x802279B0: nop

    // 0x802279B4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802279B8: bne         $v0, $zero, L_802279D8
    if (ctx->r2 != 0) {
        // 0x802279BC: nop
    
            goto L_802279D8;
    }
    // 0x802279BC: nop

    // 0x802279C0: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x802279C4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802279C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802279CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802279D0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802279D4: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_802279D8:
    // 0x802279D8: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x802279DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279E0: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x802279E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802279E8: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802279EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802279F0: bne         $v1, $v0, L_80227A08
    if (ctx->r3 != ctx->r2) {
        // 0x802279F4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227A08;
    }
    // 0x802279F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802279F8: jal         0x8004F5C4
    // 0x802279FC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802279FC: nop

    after_0:
    // 0x80227A00: j           L_80227A38
    // 0x80227A04: nop

        goto L_80227A38;
    // 0x80227A04: nop

L_80227A08:
    // 0x80227A08: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227A0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227A10: lw          $v1, -0x7550($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7550);
    // 0x80227A14: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x80227A18: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80227A1C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80227A20: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80227A24: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x80227A28: bne         $v0, $zero, L_80227A38
    if (ctx->r2 != 0) {
        // 0x80227A2C: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_80227A38;
    }
    // 0x80227A2C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80227A30: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x80227A34: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_80227A38:
    // 0x80227A38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227A3C: jr          $ra
    // 0x80227A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227A44: nop

    // 0x80227A48: nop

    // 0x80227A4C: nop

;}
RECOMP_FUNC void func_8022571C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022571C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225720: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225724: bne         $v0, $zero, L_80225754
    if (ctx->r2 != 0) {
        // 0x80225728: addiu       $a0, $zero, -0x3
        ctx->r4 = ADD32(0, -0X3);
            goto L_80225754;
    }
    // 0x80225728: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022572C: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80225730: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225734: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225738: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022573C: lw          $a1, 0x24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X24);
    // 0x80225740: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80225744: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022574C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225750: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80225754:
    // 0x80225754: jr          $ra
    // 0x80225758: nop

    TRACE_RETURN()
    return;
    // 0x80225758: nop

;}
RECOMP_FUNC void func_80227A50_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227A58: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227A5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A68: lw          $v0, -0x7238($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7238);
    // 0x80227A6C: jalr        $v0
    // 0x80227A70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227A70: nop

    after_0:
    // 0x80227A74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227A78: jr          $ra
    // 0x80227A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226710_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226714: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226718: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022671C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226720: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226724: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80226728: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022672C: beq         $v0, $zero, L_802269EC
    if (ctx->r2 == 0) {
        // 0x80226730: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802269EC;
    }
    // 0x80226730: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226734: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226738: addu        $at, $at, $v0
    gpr jr_addend_80226740 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022673C: lw          $v0, -0x71B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X71B0);
    // 0x80226740: jr          $v0
    // 0x80226744: nop

    switch (jr_addend_80226740 >> 2) {
        case 0: goto L_80226748; break;
        case 1: goto L_80226774; break;
        case 2: goto L_802267A4; break;
        case 3: goto L_802267B0; break;
        case 4: goto L_80226818; break;
        case 5: goto L_802268A4; break;
        case 6: goto L_80226960; break;
        case 7: goto L_802269EC; break;
        default: switch_error(__func__, 0x80226740, 0x80228E50);
    }
    // 0x80226744: nop

L_80226748:
    // 0x80226748: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022674C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80226750: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80226754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226758: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022675C: slti        $v0, $v0, 0xC42
    ctx->r2 = SIGNED(ctx->r2) < 0XC42 ? 1 : 0;
    // 0x80226760: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x80226764: nop
    
            goto L_802269EC;
    }
    // 0x80226764: nop

    // 0x80226768: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022676C: j           L_8022689C
    // 0x80226770: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022689C;
    // 0x80226770: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226774:
    // 0x80226774: lhu         $v0, 0x54($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X54);
    // 0x80226778: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022677C: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x80226780: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80226784: lh          $v1, 0x54($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X54);
    // 0x80226788: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022678C: slti        $v1, $v1, -0x1D
    ctx->r3 = SIGNED(ctx->r3) < -0X1D ? 1 : 0;
    // 0x80226790: beq         $v1, $zero, L_802269EC
    if (ctx->r3 == 0) {
        // 0x80226794: sh          $v0, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r2;
            goto L_802269EC;
    }
    // 0x80226794: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x80226798: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022679C: j           L_8022689C
    // 0x802267A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022689C;
    // 0x802267A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802267A4:
    // 0x802267A4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802267A8: j           L_80226894
    // 0x802267AC: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_80226894;
    // 0x802267AC: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
L_802267B0:
    // 0x802267B0: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802267B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802267B8: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x802267BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802267C0: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x802267C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802269EC;
    }
    // 0x802267C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802267C8: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x802267CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x802267D0: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x802267D4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802267D8: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x802267DC: jal         0x80227700
    // 0x802267E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80227700_ovl24(rdram, ctx);
        goto after_0;
    // 0x802267E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x802267E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802267E8: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x802267EC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x802267F0: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x802267F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802267F8: sw          $v0, -0x7180($at)
    MEM_W(-0X7180, ctx->r1) = ctx->r2;
    // 0x802267FC: jal         0x80227700
    // 0x80226800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80227700_ovl24(rdram, ctx);
        goto after_1;
    // 0x80226800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80226804: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226808: sw          $v0, -0x717C($at)
    MEM_W(-0X717C, ctx->r1) = ctx->r2;
    // 0x8022680C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226810: j           L_8022689C
    // 0x80226814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022689C;
    // 0x80226814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226818:
    // 0x80226818: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8022681C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226820: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80226824: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226828: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x8022682C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802269EC;
    }
    // 0x8022682C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226830: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226834: lw          $v0, -0x7180($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7180);
    // 0x80226838: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x8022683C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226840: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80226844: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80226848: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022684C: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x80226850: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80226854: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80226858: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x8022685C: jal         0x80227700
    // 0x80226860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80227700_ovl24(rdram, ctx);
        goto after_2;
    // 0x80226860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x80226864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226868: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x8022686C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80226870: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80226874: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226878: sw          $v0, -0x7180($at)
    MEM_W(-0X7180, ctx->r1) = ctx->r2;
    // 0x8022687C: jal         0x80227700
    // 0x80226880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80227700_ovl24(rdram, ctx);
        goto after_3;
    // 0x80226880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80226884: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226888: sw          $v0, -0x717C($at)
    MEM_W(-0X717C, ctx->r1) = ctx->r2;
    // 0x8022688C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226890: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
L_80226894:
    // 0x80226894: sh          $v1, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r3;
    // 0x80226898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022689C:
    // 0x8022689C: j           L_802269EC
    // 0x802268A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802269EC;
    // 0x802268A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802268A4:
    // 0x802268A4: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802268A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802268AC: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x802268B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802268B4: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x802268B8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802269EC;
    }
    // 0x802268B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802268BC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802268C0: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x802268C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802268C8: lw          $v0, -0x7180($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7180);
    // 0x802268CC: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x802268D0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802268D4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x802268D8: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x802268DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802268E0: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x802268E4: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x802268E8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x802268EC: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x802268F0: jal         0x80227700
    // 0x802268F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80227700_ovl24(rdram, ctx);
        goto after_4;
    // 0x802268F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x802268F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802268FC: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x80226900: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80226904: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80226908: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022690C: sw          $v0, -0x7180($at)
    MEM_W(-0X7180, ctx->r1) = ctx->r2;
    // 0x80226910: jal         0x80227700
    // 0x80226914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80227700_ovl24(rdram, ctx);
        goto after_5;
    // 0x80226914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
    // 0x80226918: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022691C: sw          $v0, -0x717C($at)
    MEM_W(-0X717C, ctx->r1) = ctx->r2;
    // 0x80226920: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226928: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022692C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226930: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80226934: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226938: bne         $v1, $v0, L_80226950
    if (ctx->r3 != ctx->r2) {
        // 0x8022693C: nop
    
            goto L_80226950;
    }
    // 0x8022693C: nop

    // 0x80226940: jal         0x8006033C
    // 0x80226944: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80226944: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_6:
    // 0x80226948: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x8022694C: nop
    
            goto L_802269EC;
    }
    // 0x8022694C: nop

L_80226950:
    // 0x80226950: jal         0x80036E48
    // 0x80226954: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80226954: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
    // 0x80226958: j           L_802269EC
    // 0x8022695C: nop

        goto L_802269EC;
    // 0x8022695C: nop

L_80226960:
    // 0x80226960: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226964: addiu       $a1, $zero, 0x900
    ctx->r5 = ADD32(0, 0X900);
    // 0x80226968: addiu       $a2, $zero, -0xFA
    ctx->r6 = ADD32(0, -0XFA);
    // 0x8022696C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80226970: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80226974: lhu         $t0, 0x58($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X58);
    // 0x80226978: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022697C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80226980: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x80226984: addiu       $t0, $t0, -0x10
    ctx->r8 = ADD32(ctx->r8, -0X10);
    // 0x80226988: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022698C: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80226990: jal         0x8004DA90
    // 0x80226994: sh          $t0, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x80226994: sh          $t0, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r8;
    after_8:
    // 0x80226998: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8022699C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269A0: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x802269A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802269A8: bne         $v0, $zero, L_802269EC
    if (ctx->r2 != 0) {
        // 0x802269AC: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802269EC;
    }
    // 0x802269AC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802269B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802269B4: lw          $v0, -0x7180($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7180);
    // 0x802269B8: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x802269BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802269C0: lw          $v0, -0x717C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X717C);
    // 0x802269C4: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x802269C8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802269CC: addiu       $v0, $zero, -0x12AC
    ctx->r2 = ADD32(0, -0X12AC);
    // 0x802269D0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x802269D4: addiu       $v0, $zero, -0x76C
    ctx->r2 = ADD32(0, -0X76C);
    // 0x802269D8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802269DC: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x802269E0: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802269E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802269E8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_802269EC:
    // 0x802269EC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802269F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802269F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802269F8: jr          $ra
    // 0x802269FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802269FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227F24_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F24: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80227F28: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80227F2C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80227F30: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80227F34: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80227F38: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x80227F3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80227F40: bgez        $v1, L_80227F80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80227F44: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80227F80;
    }
    // 0x80227F44: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80227F48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227F4C: bne         $v1, $v0, L_80227F6C
    if (ctx->r3 != ctx->r2) {
        // 0x80227F50: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_80227F6C;
    }
    // 0x80227F50: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80227F54: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80227F58: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80227F5C: bne         $v1, $v0, L_80227F8C
    if (ctx->r3 != ctx->r2) {
        // 0x80227F60: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227F8C;
    }
    // 0x80227F60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227F64: j           L_80227FB0
    // 0x80227F68: nop

        goto L_80227FB0;
    // 0x80227F68: nop

L_80227F6C:
    // 0x80227F6C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80227F70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227F78: j           L_80227F8C
    // 0x80227F7C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_80227F8C;
    // 0x80227F7C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80227F80:
    // 0x80227F80: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80227F84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80227F88: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80227F8C:
    // 0x80227F8C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80227F90: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80227F94: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80227F98: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80227F9C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227FA0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80227FA4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80227FA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227FAC: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80227FB0:
    // 0x80227FB0: jr          $ra
    // 0x80227FB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80227FB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80227FB8: nop

    // 0x80227FBC: nop

    // 0x80227FC0: nop

    // 0x80227FC4: nop

    // 0x80227FC8: nop

    // 0x80227FCC: nop

    // 0x80227FD0: nop

    // 0x80227FD4: nop

    // 0x80227FD8: nop

    // 0x80227FDC: nop

    // 0x80227FE0: nop

    // 0x80227FE4: nop

    // 0x80227FE8: nop

    // 0x80227FEC: nop

    // 0x80227FF0: nop

    // 0x80227FF4: nop

    // 0x80227FF8: nop

    // 0x80227FFC: nop

    // 0x80228000: nop

    // 0x80228004: nop

    // 0x80228008: nop

    // 0x8022800C: nop

    // 0x80228010: nop

    // 0x80228014: nop

    // 0x80228018: nop

    // 0x8022801C: nop

    // 0x80228020: nop

    // 0x80228024: nop

    // 0x80228028: nop

    // 0x8022802C: nop

    // 0x80228030: nop

    // 0x80228034: nop

    // 0x80228038: nop

    // 0x8022803C: nop

    // 0x80228040: nop

    // 0x80228044: nop

    // 0x80228048: nop

    // 0x8022804C: nop

    // 0x80228050: nop

    // 0x80228054: nop

    // 0x80228058: nop

    // 0x8022805C: nop

    // 0x80228060: nop

    // 0x80228064: nop

    // 0x80228068: nop

    // 0x8022806C: nop

    // 0x80228070: nop

    // 0x80228074: nop

    // 0x80228078: nop

    // 0x8022807C: nop

;}
RECOMP_FUNC void func_80225330_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225334: jr          $ra
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80225150_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x7DD8
    ctx->r2 = ADD32(ctx->r2, -0X7DD8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x7D38
    ctx->r2 = ADD32(ctx->r2, -0X7D38);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x7D1C
    ctx->r2 = ADD32(ctx->r2, -0X7D1C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x7D18
    ctx->r2 = ADD32(ctx->r2, -0X7D18);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x7CFC
    ctx->r2 = ADD32(ctx->r2, -0X7CFC);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x7CE8
    ctx->r2 = ADD32(ctx->r2, -0X7CE8);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    // 0x802251B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251B4: jr          $ra
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80226CF0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226CF4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80226CF8: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80226CFC: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80226D00: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80226D04: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226D0C: lw          $v0, -0x75A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75A8);
    // 0x80226D10: jr          $ra
    // 0x80226D14: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226D14: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225D14_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D14: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225D18: bne         $v0, $zero, L_80225D9C
    if (ctx->r2 != 0) {
        // 0x80225D1C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225D9C;
    }
    // 0x80225D1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D24: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225D28: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225D2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D30: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225D34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D3C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225D40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D48: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225D4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D50: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225D54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D58: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225D5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D60: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225D64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D68: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225D6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D70: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225D74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D78: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225D7C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225D80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D84: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225D88: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225D8C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225D90: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D94: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225D98: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225D9C:
    // 0x80225D9C: jr          $ra
    // 0x80225DA0: nop

    TRACE_RETURN()
    return;
    // 0x80225DA0: nop

;}
RECOMP_FUNC void func_80226580_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226584: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226588: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022658C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226590: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226594: bne         $v0, $zero, L_80226618
    if (ctx->r2 != 0) {
        // 0x80226598: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226618;
    }
    // 0x80226598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022659C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802265A0: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802265A4: bnel        $v1, $v0, L_802265FC
    if (ctx->r3 != ctx->r2) {
        // 0x802265A8: sb          $zero, 0xC($s0)
        MEM_B(0XC, ctx->r16) = 0;
            goto L_802265FC;
    }
    goto skip_0;
    // 0x802265A8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    skip_0:
    // 0x802265AC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802265B0: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x802265B4: bne         $v0, $v1, L_80226618
    if (ctx->r2 != ctx->r3) {
        // 0x802265B8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80226618;
    }
    // 0x802265B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802265BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802265C0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802265C4: bne         $v1, $v0, L_80226618
    if (ctx->r3 != ctx->r2) {
        // 0x802265C8: addiu       $a1, $s0, 0xC
        ctx->r5 = ADD32(ctx->r16, 0XC);
            goto L_80226618;
    }
    // 0x802265C8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x802265CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265D0: jal         0x8004D5D4
    // 0x802265D4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802265D4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802265D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802265E0: jal         0x80050294
    // 0x802265E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802265E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802265E8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802265EC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802265F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265F4: j           L_80226618
    // 0x802265F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226618;
    // 0x802265F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802265FC:
    // 0x802265FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226600: jal         0x8004D5D4
    // 0x80226604: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80226604: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_2:
    // 0x80226608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022660C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226610: jal         0x80050294
    // 0x80226614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80226614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_80226618:
    // 0x80226618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022661C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226620: jr          $ra
    // 0x80226624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802276B0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802276B8: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x802276BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802276C0: bne         $v1, $v0, L_802276D8
    if (ctx->r3 != ctx->r2) {
        // 0x802276C4: nop
    
            goto L_802276D8;
    }
    // 0x802276C4: nop

    // 0x802276C8: jal         0x8004F5C4
    // 0x802276CC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802276CC: nop

    after_0:
    // 0x802276D0: j           L_802276F4
    // 0x802276D4: nop

        goto L_802276F4;
    // 0x802276D4: nop

L_802276D8:
    // 0x802276D8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802276DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802276E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802276E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802276E8: lw          $v0, -0x7530($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7530);
    // 0x802276EC: jalr        $v0
    // 0x802276F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802276F0: nop

    after_1:
L_802276F4:
    // 0x802276F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802276F8: jr          $ra
    // 0x802276FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226680_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226684: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022668C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226690: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226694: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80226698: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022669C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802266A0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802266A4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802266A8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802266AC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802266B0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802266B4: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x802266B8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802266BC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802266C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802266C4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802266C8: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x802266CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266D0: jal         0x80226580
    // 0x802266D4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80226580_ovl24(rdram, ctx);
        goto after_0;
    // 0x802266D4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802266D8: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802266DC: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x802266E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802266E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266E8: jr          $ra
    // 0x802266EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802266EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D40_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226D44: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80226D48: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80226D4C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80226D50: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80226D54: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D58: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226D5C: lw          $v0, -0x75A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75A0);
    // 0x80226D60: jr          $ra
    // 0x80226D64: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226D64: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225F70_ovl24(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80225F80: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225F84: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80225F88: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x80225F8C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802260A8;
    }
    // 0x80225F8C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225F90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225F94: addu        $at, $at, $v0
    gpr jr_addend_80225F9C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F98: lw          $v0, -0x71D0($at)
    ctx->r2 = ADD32(ctx->r1, -0X71D0);
    // 0x80225F9C: jr          $v0
    // 0x80225FA0: nop

    switch (jr_addend_80225F9C >> 2) {
        case 0: goto L_80225FA4; break;
        case 1: goto L_80225FC0; break;
        case 2: goto L_80225FEC; break;
        case 3: goto L_80225FFC; break;
        case 4: goto L_8022602C; break;
        case 5: goto L_80226054; break;
        case 6: goto L_8022607C; break;
        case 7: goto L_802260A8; break;
        default: switch_error(__func__, 0x80225F9C, 0x80228E30);
    }
    // 0x80225FA0: nop

L_80225FA4:
    // 0x80225FA4: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80225FA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225FAC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80225FB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225FB4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225FB8: j           L_80226094
    // 0x80225FBC: slti        $v0, $v0, -0x31F
    ctx->r2 = SIGNED(ctx->r2) < -0X31F ? 1 : 0;
        goto L_80226094;
    // 0x80225FBC: slti        $v0, $v0, -0x31F
    ctx->r2 = SIGNED(ctx->r2) < -0X31F ? 1 : 0;
L_80225FC0:
    // 0x80225FC0: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80225FC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FC8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80225FCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225FD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225FD4: slti        $v0, $v0, -0x30C
    ctx->r2 = SIGNED(ctx->r2) < -0X30C ? 1 : 0;
    // 0x80225FD8: bne         $v0, $zero, L_802260A8
    if (ctx->r2 != 0) {
        // 0x80225FDC: nop
    
            goto L_802260A8;
    }
    // 0x80225FDC: nop

    // 0x80225FE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225FE4: j           L_802260A4
    // 0x80225FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_802260A4;
    // 0x80225FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80225FEC:
    // 0x80225FEC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225FF0: addiu       $v1, $zero, -0x44C
    ctx->r3 = ADD32(0, -0X44C);
    // 0x80225FF4: j           L_802260A0
    // 0x80225FF8: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
        goto L_802260A0;
    // 0x80225FF8: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
L_80225FFC:
    // 0x80225FFC: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80226000: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x80226004: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80226008: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022600C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226010: slti        $v0, $v0, -0x12BF
    ctx->r2 = SIGNED(ctx->r2) < -0X12BF ? 1 : 0;
    // 0x80226014: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x80226018: nop
    
            goto L_802260A8;
    }
    // 0x80226018: nop

    // 0x8022601C: jal         0x80036E48
    // 0x80226020: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80226020: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x80226024: j           L_8022609C
    // 0x80226028: nop

        goto L_8022609C;
    // 0x80226028: nop

L_8022602C:
    // 0x8022602C: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80226030: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x80226034: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80226038: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022603C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226040: slti        $v0, $v0, -0x176F
    ctx->r2 = SIGNED(ctx->r2) < -0X176F ? 1 : 0;
    // 0x80226044: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x80226048: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802260A8;
    }
    // 0x80226048: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022604C: j           L_802260A8
    // 0x80226050: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802260A8;
    // 0x80226050: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226054:
    // 0x80226054: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226058: addiu       $v0, $zero, -0x4E2
    ctx->r2 = ADD32(0, -0X4E2);
    // 0x8022605C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80226060: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80226064: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80226068: addiu       $v0, $zero, 0xAF0
    ctx->r2 = ADD32(0, 0XAF0);
    // 0x8022606C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80226070: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226074: j           L_802260A8
    // 0x80226078: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_802260A8;
    // 0x80226078: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022607C:
    // 0x8022607C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80226080: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80226084: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80226088: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022608C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226090: slti        $v0, $v0, -0x12B
    ctx->r2 = SIGNED(ctx->r2) < -0X12B ? 1 : 0;
L_80226094:
    // 0x80226094: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x80226098: nop
    
            goto L_802260A8;
    }
    // 0x80226098: nop

L_8022609C:
    // 0x8022609C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_802260A0:
    // 0x802260A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802260A4:
    // 0x802260A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802260A8:
    // 0x802260A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260B0: jr          $ra
    // 0x802260B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225410_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225414: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225418: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022541C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225420: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225428: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022542C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225430: addiu       $s0, $s0, -0x3A50
    ctx->r16 = ADD32(ctx->r16, -0X3A50);
    // 0x80225434: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80225438: beq         $v0, $zero, L_80225704
    if (ctx->r2 == 0) {
        // 0x8022543C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225704;
    }
    // 0x8022543C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225440: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225444: addu        $at, $at, $v0
    gpr jr_addend_8022544C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225448: lw          $v0, -0x7230($at)
    ctx->r2 = ADD32(ctx->r1, -0X7230);
    // 0x8022544C: jr          $v0
    // 0x80225450: nop

    switch (jr_addend_8022544C >> 2) {
        case 0: goto L_80225454; break;
        case 1: goto L_8022547C; break;
        case 2: goto L_80225518; break;
        case 3: goto L_80225534; break;
        case 4: goto L_80225554; break;
        case 5: goto L_80225568; break;
        case 6: goto L_802255C4; break;
        case 7: goto L_80225704; break;
        case 8: goto L_80225704; break;
        case 9: goto L_80225704; break;
        case 10: goto L_80225610; break;
        default: switch_error(__func__, 0x8022544C, 0x80228DD0);
    }
    // 0x80225450: nop

L_80225454:
    // 0x80225454: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225458: jal         0x8006FF84
    // 0x8022545C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022545C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225460: beq         $v0, $zero, L_80225704
    if (ctx->r2 == 0) {
        // 0x80225464: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225704;
    }
    // 0x80225464: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225468: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022546C: jal         0x8005F6B4
    // 0x80225470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225474: j           L_80225544
    // 0x80225478: nop

        goto L_80225544;
    // 0x80225478: nop

L_8022547C:
    // 0x8022547C: jal         0x8002A4A4
    // 0x80225480: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_2;
    // 0x80225480: nop

    after_2:
    // 0x80225484: jal         0x800A3450
    // 0x80225488: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80225488: nop

    after_3:
    // 0x8022548C: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80225490: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80225494: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225498: sh          $v0, -0x7190($at)
    MEM_H(-0X7190, ctx->r1) = ctx->r2;
    // 0x8022549C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802254A0: lh          $v1, -0x7190($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7190);
    // 0x802254A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802254A8: beq         $v1, $v0, L_802254F8
    if (ctx->r3 == ctx->r2) {
        // 0x802254AC: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_802254F8;
    }
    // 0x802254AC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802254B0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802254B4: beql        $v0, $zero, L_802254CC
    if (ctx->r2 == 0) {
        // 0x802254B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802254CC;
    }
    goto skip_0;
    // 0x802254B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802254BC: beq         $v1, $zero, L_802254E4
    if (ctx->r3 == 0) {
        // 0x802254C0: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_802254E4;
    }
    // 0x802254C0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802254C4: j           L_80225544
    // 0x802254C8: nop

        goto L_80225544;
    // 0x802254C8: nop

L_802254CC:
    // 0x802254CC: beq         $v1, $v0, L_802254EC
    if (ctx->r3 == ctx->r2) {
        // 0x802254D0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802254EC;
    }
    // 0x802254D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802254D4: beq         $v1, $v0, L_802254FC
    if (ctx->r3 == ctx->r2) {
        // 0x802254D8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802254FC;
    }
    // 0x802254D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254DC: j           L_80225544
    // 0x802254E0: nop

        goto L_80225544;
    // 0x802254E0: nop

L_802254E4:
    // 0x802254E4: j           L_80225508
    // 0x802254E8: ori         $a0, $a0, 0x5600
    ctx->r4 = ctx->r4 | 0X5600;
        goto L_80225508;
    // 0x802254E8: ori         $a0, $a0, 0x5600
    ctx->r4 = ctx->r4 | 0X5600;
L_802254EC:
    // 0x802254EC: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802254F0: j           L_80225508
    // 0x802254F4: ori         $a0, $a0, 0x5800
    ctx->r4 = ctx->r4 | 0X5800;
        goto L_80225508;
    // 0x802254F4: ori         $a0, $a0, 0x5800
    ctx->r4 = ctx->r4 | 0X5800;
L_802254F8:
    // 0x802254F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802254FC:
    // 0x802254FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225500: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225504: ori         $a0, $a0, 0x5700
    ctx->r4 = ctx->r4 | 0X5700;
L_80225508:
    // 0x80225508: jal         0x80036B1C
    // 0x8022550C: nop

    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x8022550C: nop

    after_4:
    // 0x80225510: j           L_80225544
    // 0x80225514: nop

        goto L_80225544;
    // 0x80225514: nop

L_80225518:
    // 0x80225518: jal         0x80036B7C
    // 0x8022551C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_5;
    // 0x8022551C: nop

    after_5:
    // 0x80225520: beq         $v0, $zero, L_80225704
    if (ctx->r2 == 0) {
        // 0x80225524: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225704;
    }
    // 0x80225524: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225528: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022552C: j           L_80225548
    // 0x80225530: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_80225548;
    // 0x80225530: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_80225534:
    // 0x80225534: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80225538: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022553C: bne         $v0, $zero, L_80225704
    if (ctx->r2 != 0) {
        // 0x80225540: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80225704;
    }
    // 0x80225540: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_80225544:
    // 0x80225544: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_80225548:
    // 0x80225548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022554C: j           L_80225704
    // 0x80225550: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80225704;
    // 0x80225550: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225554:
    // 0x80225554: jal         0x80036E48
    // 0x80225558: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80225558: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x8022555C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225560: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225564: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225568:
    // 0x80225568: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022556C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225570: jal         0x8005F6B4
    // 0x80225574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_7;
    // 0x80225574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225578: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022557C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225580: addiu       $s0, $s0, -0x7B00
    ctx->r16 = ADD32(ctx->r16, -0X7B00);
    // 0x80225584: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225588: addiu       $v0, $v0, -0x7AC4
    ctx->r2 = ADD32(ctx->r2, -0X7AC4);
    // 0x8022558C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225590: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225594: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225598: addiu       $v0, $v0, -0x7934
    ctx->r2 = ADD32(ctx->r2, -0X7934);
    // 0x8022559C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_802255A0:
    // 0x802255A0: jal         0x8005FA7C
    // 0x802255A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_8;
    // 0x802255A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802255A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802255AC: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x802255B0: bne         $v0, $zero, L_802255A0
    if (ctx->r2 != 0) {
        // 0x802255B4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_802255A0;
    }
    // 0x802255B4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x802255B8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802255BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255C0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802255C4:
    // 0x802255C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802255C8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802255CC: bne         $v0, $zero, L_80225610
    if (ctx->r2 != 0) {
        // 0x802255D0: nop
    
            goto L_80225610;
    }
    // 0x802255D0: nop

    // 0x802255D4: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802255D8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802255DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802255E0: beq         $v1, $v0, L_802255F8
    if (ctx->r3 == ctx->r2) {
        // 0x802255E4: nop
    
            goto L_802255F8;
    }
    // 0x802255E4: nop

    // 0x802255E8: jal         0x8006072C
    // 0x802255EC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_9;
    // 0x802255EC: nop

    after_9:
    // 0x802255F0: beq         $v0, $zero, L_80225610
    if (ctx->r2 == 0) {
        // 0x802255F4: nop
    
            goto L_80225610;
    }
    // 0x802255F4: nop

L_802255F8:
    // 0x802255F8: jal         0x80036E48
    // 0x802255FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x802255FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x80225600: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225604: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    // 0x80225608: jal         0x8006036C
    // 0x8022560C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022560C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_11:
L_80225610:
    // 0x80225610: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80225614: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225618: beq         $v1, $v0, L_80225630
    if (ctx->r3 == ctx->r2) {
        // 0x8022561C: nop
    
            goto L_80225630;
    }
    // 0x8022561C: nop

    // 0x80225620: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225624: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225628: jalr        $v0
    // 0x8022562C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x8022562C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
L_80225630:
    // 0x80225630: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225634: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x80225638: beq         $v0, $s0, L_80225648
    if (ctx->r2 == ctx->r16) {
        // 0x8022563C: nop
    
            goto L_80225648;
    }
    // 0x8022563C: nop

    // 0x80225640: jal         0x8005FB90
    // 0x80225644: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_13;
    // 0x80225644: nop

    after_13:
L_80225648:
    // 0x80225648: jal         0x80060018
    // 0x8022564C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_14;
    // 0x8022564C: nop

    after_14:
    // 0x80225650: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225654: bne         $v0, $s0, L_80225704
    if (ctx->r2 != ctx->r16) {
        // 0x80225658: nop
    
            goto L_80225704;
    }
    // 0x80225658: nop

    // 0x8022565C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225660: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225664: bne         $v0, $zero, L_80225704
    if (ctx->r2 != 0) {
        // 0x80225668: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225704;
    }
    // 0x80225668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022566C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225670: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225674: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80225678: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022567C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225680: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225688: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022568C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80225690: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225694: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80225698: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022569C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256A0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802256A4: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x802256A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256AC: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802256B0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802256B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256B8: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802256BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256C4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802256C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802256CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256D0: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802256D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256D8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802256DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802256E0: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x802256E4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x802256E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802256EC: sb          $v0, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = ctx->r2;
    // 0x802256F0: jal         0x80036B00
    // 0x802256F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_15;
    // 0x802256F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x802256F8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802256FC: jal         0x80070050
    // 0x80225700: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x80225700: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_16:
L_80225704:
    // 0x80225704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225708: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022570C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225710: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225714: jr          $ra
    // 0x80225718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802259D0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802259D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802259D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802259DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802259E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802259E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802259E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259EC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802259F0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802259F4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802259F8: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802259FC: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225A00: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225CCC;
    }
    // 0x80225A00: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225A04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225A08: addu        $at, $at, $v0
    gpr jr_addend_80225A10 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225A0C: lw          $v0, -0x7200($at)
    ctx->r2 = ADD32(ctx->r1, -0X7200);
    // 0x80225A10: jr          $v0
    // 0x80225A14: nop

    switch (jr_addend_80225A10 >> 2) {
        case 0: goto L_80225A18; break;
        case 1: goto L_80225A40; break;
        case 2: goto L_80225A90; break;
        case 3: goto L_80225AAC; break;
        case 4: goto L_80225ACC; break;
        case 5: goto L_80225AE0; break;
        case 6: goto L_80225B2C; break;
        case 7: goto L_80225CCC; break;
        case 8: goto L_80225CCC; break;
        case 9: goto L_80225CCC; break;
        case 10: goto L_80225B7C; break;
        default: switch_error(__func__, 0x80225A10, 0x80228E00);
    }
    // 0x80225A14: nop

L_80225A18:
    // 0x80225A18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225A1C: jal         0x8006FF84
    // 0x80225A20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225A20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225A24: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225A28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225CCC;
    }
    // 0x80225A28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225A2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225A30: jal         0x8005F6B4
    // 0x80225A34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225A34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225A38: j           L_80225ABC
    // 0x80225A3C: nop

        goto L_80225ABC;
    // 0x80225A3C: nop

L_80225A40:
    // 0x80225A40: jal         0x8002A4A4
    // 0x80225A44: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_2;
    // 0x80225A44: nop

    after_2:
    // 0x80225A48: jal         0x800A3450
    // 0x80225A4C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80225A4C: nop

    after_3:
    // 0x80225A50: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80225A54: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x80225A58: beq         $v1, $zero, L_80225A70
    if (ctx->r3 == 0) {
        // 0x80225A5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225A70;
    }
    // 0x80225A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A60: beq         $v1, $v0, L_80225A7C
    if (ctx->r3 == ctx->r2) {
        // 0x80225A64: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80225A7C;
    }
    // 0x80225A64: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225A68: j           L_80225ABC
    // 0x80225A6C: nop

        goto L_80225ABC;
    // 0x80225A6C: nop

L_80225A70:
    // 0x80225A70: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225A74: j           L_80225A80
    // 0x80225A78: ori         $a0, $a0, 0x6200
    ctx->r4 = ctx->r4 | 0X6200;
        goto L_80225A80;
    // 0x80225A78: ori         $a0, $a0, 0x6200
    ctx->r4 = ctx->r4 | 0X6200;
L_80225A7C:
    // 0x80225A7C: ori         $a0, $a0, 0x6300
    ctx->r4 = ctx->r4 | 0X6300;
L_80225A80:
    // 0x80225A80: jal         0x80036B1C
    // 0x80225A84: nop

    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x80225A84: nop

    after_4:
    // 0x80225A88: j           L_80225ABC
    // 0x80225A8C: nop

        goto L_80225ABC;
    // 0x80225A8C: nop

L_80225A90:
    // 0x80225A90: jal         0x80036B7C
    // 0x80225A94: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_5;
    // 0x80225A94: nop

    after_5:
    // 0x80225A98: beq         $v0, $zero, L_80225CCC
    if (ctx->r2 == 0) {
        // 0x80225A9C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225CCC;
    }
    // 0x80225A9C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225AA0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225AA4: j           L_80225AC0
    // 0x80225AA8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_80225AC0;
    // 0x80225AA8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_80225AAC:
    // 0x80225AAC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80225AB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225AB4: bne         $v0, $zero, L_80225CCC
    if (ctx->r2 != 0) {
        // 0x80225AB8: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80225CCC;
    }
    // 0x80225AB8: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_80225ABC:
    // 0x80225ABC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_80225AC0:
    // 0x80225AC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225AC4: j           L_80225CCC
    // 0x80225AC8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80225CCC;
    // 0x80225AC8: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225ACC:
    // 0x80225ACC: jal         0x80036E48
    // 0x80225AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x80225AD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x80225AD4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225ADC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225AE0:
    // 0x80225AE0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225AE4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225AE8: addiu       $s0, $s0, -0x7900
    ctx->r16 = ADD32(ctx->r16, -0X7900);
    // 0x80225AEC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225AF0: addiu       $v0, $v0, -0x78C4
    ctx->r2 = ADD32(ctx->r2, -0X78C4);
    // 0x80225AF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225AF8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225AFC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225B00: addiu       $v0, $v0, -0x7724
    ctx->r2 = ADD32(ctx->r2, -0X7724);
    // 0x80225B04: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_80225B08:
    // 0x80225B08: jal         0x8005FA7C
    // 0x80225B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80225B0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80225B10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80225B14: slti        $v0, $s1, 0x3
    ctx->r2 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80225B18: bne         $v0, $zero, L_80225B08
    if (ctx->r2 != 0) {
        // 0x80225B1C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80225B08;
    }
    // 0x80225B1C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80225B20: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225B24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B28: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225B2C:
    // 0x80225B2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225B30: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225B34: bne         $v0, $zero, L_80225B7C
    if (ctx->r2 != 0) {
        // 0x80225B38: addiu       $s0, $zero, 0xFF
        ctx->r16 = ADD32(0, 0XFF);
            goto L_80225B7C;
    }
    // 0x80225B38: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x80225B3C: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225B40: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225B44: beq         $v0, $s0, L_80225B5C
    if (ctx->r2 == ctx->r16) {
        // 0x80225B48: nop
    
            goto L_80225B5C;
    }
    // 0x80225B48: nop

    // 0x80225B4C: jal         0x8006072C
    // 0x80225B50: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_8;
    // 0x80225B50: nop

    after_8:
    // 0x80225B54: beq         $v0, $zero, L_80225B7C
    if (ctx->r2 == 0) {
        // 0x80225B58: nop
    
            goto L_80225B7C;
    }
    // 0x80225B58: nop

L_80225B5C:
    // 0x80225B5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225B60: lh          $v0, -0xC62($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC62);
    // 0x80225B64: beq         $v0, $s0, L_80225B78
    if (ctx->r2 == ctx->r16) {
        // 0x80225B68: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80225B78;
    }
    // 0x80225B68: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225B6C: jal         0x80036E48
    // 0x80225B70: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80225B70: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80225B74: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80225B78:
    // 0x80225B78: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225B7C:
    // 0x80225B7C: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80225B80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B84: beq         $v1, $v0, L_80225B9C
    if (ctx->r3 == ctx->r2) {
        // 0x80225B88: nop
    
            goto L_80225B9C;
    }
    // 0x80225B88: nop

    // 0x80225B8C: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225B90: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225B94: jalr        $v0
    // 0x80225B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80225B98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_80225B9C:
    // 0x80225B9C: jal         0x8005FB90
    // 0x80225BA0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80225BA0: nop

    after_11:
    // 0x80225BA4: jal         0x80060018
    // 0x80225BA8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x80225BA8: nop

    after_12:
    // 0x80225BAC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80225BB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225BB4: bne         $v1, $v0, L_80225CCC
    if (ctx->r3 != ctx->r2) {
        // 0x80225BB8: nop
    
            goto L_80225CCC;
    }
    // 0x80225BB8: nop

    // 0x80225BBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225BC0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225BC4: bne         $v0, $zero, L_80225CCC
    if (ctx->r2 != 0) {
        // 0x80225BC8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80225CCC;
    }
    // 0x80225BC8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225BCC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225BD0: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225BD4: bne         $v1, $v0, L_80225C2C
    if (ctx->r3 != ctx->r2) {
        // 0x80225BD8: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_80225C2C;
    }
    // 0x80225BD8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80225BDC: jal         0x8006033C
    // 0x80225BE0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x80225BE0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_13:
    // 0x80225BE4: beq         $v0, $zero, L_80225C28
    if (ctx->r2 == 0) {
        // 0x80225BE8: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_80225C28;
    }
    // 0x80225BE8: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80225BEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BF0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225BF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225BF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BFC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225C00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C04: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C0C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225C10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C14: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225C18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C1C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225C20: j           L_80225C74
    // 0x80225C24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80225C74;
    // 0x80225C24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80225C28:
    // 0x80225C28: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_80225C2C:
    // 0x80225C2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C30: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225C34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225C38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C3C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225C40: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80225C44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C48: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80225C4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C54: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80225C58: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80225C5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C60: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80225C64: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C6C: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80225C70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80225C74:
    // 0x80225C74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C78: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80225C7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C80: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225C84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C88: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225C8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C90: sb          $v1, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r3;
    // 0x80225C94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C98: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225C9C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x80225CA0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80225CA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225CA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225CAC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225CB0: sb          $zero, -0x3B9D($at)
    MEM_B(-0X3B9D, ctx->r1) = 0;
    // 0x80225CB4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225CB8: jal         0x80036B00
    // 0x80225CBC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    func_80036B00_11F00(rdram, ctx);
        goto after_14;
    // 0x80225CBC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    after_14:
    // 0x80225CC0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225CC4: jal         0x80070050
    // 0x80225CC8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_15;
    // 0x80225CC8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_15:
L_80225CCC:
    // 0x80225CCC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225CD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225CD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225CD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225CDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CE0: jr          $ra
    // 0x80225CE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225CE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802274DC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802274E0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802274E4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802274E8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802274EC: lw          $s1, 0x28($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X28);
    // 0x802274F0: lhu         $v0, 0x2C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2C);
    // 0x802274F4: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x802274F8: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x802274FC: lhu         $v0, 0x2E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2E);
    // 0x80227500: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80227504: lhu         $v0, 0x30($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X30);
    // 0x80227508: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022750C: jal         0x8002C654
    // 0x80227510: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80227510: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227514: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80227518: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022751C: jal         0x800319B4
    // 0x80227520: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80227520: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80227524: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227528: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8022752C: jal         0x80031270
    // 0x80227530: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80227530: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80227534: jal         0x8004F144
    // 0x80227538: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80227538: nop

    after_3:
    // 0x8022753C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80227540: beq         $a1, $zero, L_802275E8
    if (ctx->r5 == 0) {
        // 0x80227544: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_802275E8;
    }
    // 0x80227544: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80227548: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022754C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227550: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x80227554: sb          $v1, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r3;
    // 0x80227558: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022755C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x80227560: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
    // 0x80227564: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80227568: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022756C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227570: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80227574: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80227578: bnel        $v1, $v0, L_8022758C
    if (ctx->r3 != ctx->r2) {
        // 0x8022757C: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8022758C;
    }
    goto skip_0;
    // 0x8022757C: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x80227580: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x80227584: j           L_80227590
    // 0x80227588: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80227590;
    // 0x80227588: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8022758C:
    // 0x8022758C: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80227590:
    // 0x80227590: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x80227594: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x80227598: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x8022759C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802275A0: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x802275A4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802275A8: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x802275AC: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x802275B0: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x802275B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802275B8: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x802275BC: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x802275C0: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x802275C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802275C8: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x802275CC: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x802275D0: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x802275D4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x802275D8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802275DC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x802275E0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802275E4: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_802275E8:
    // 0x802275E8: jal         0x8004F144
    // 0x802275EC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802275EC: nop

    after_4:
    // 0x802275F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802275F4: beq         $a1, $zero, L_8022769C
    if (ctx->r5 == 0) {
        // 0x802275F8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022769C;
    }
    // 0x802275F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802275FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80227600: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227604: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80227608: sb          $a0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r4;
    // 0x8022760C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80227610: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x80227614: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x80227618: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x8022761C: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80227620: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227624: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80227628: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8022762C: bnel        $v1, $v0, L_80227640
    if (ctx->r3 != ctx->r2) {
        // 0x80227630: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_80227640;
    }
    goto skip_1;
    // 0x80227630: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_1:
    // 0x80227634: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x80227638: j           L_80227644
    // 0x8022763C: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80227644;
    // 0x8022763C: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_80227640:
    // 0x80227640: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80227644:
    // 0x80227644: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x80227648: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8022764C: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x80227650: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80227654: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x80227658: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022765C: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x80227660: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80227664: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80227668: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022766C: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80227670: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80227674: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80227678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022767C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80227680: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x80227684: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80227688: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022768C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80227690: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80227694: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227698: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_8022769C:
    // 0x8022769C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x802276A0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x802276A4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802276A8: jr          $ra
    // 0x802276AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802276AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80226384_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226384: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226388: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022638C: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80226390: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80226394: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80226398: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022639C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802263A0: lw          $v0, -0x7654($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7654);
    // 0x802263A4: jr          $ra
    // 0x802263A8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802263A8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225E74_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E84: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225E88: bne         $v0, $zero, L_80225F60
    if (ctx->r2 != 0) {
        // 0x80225E8C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80225F60;
    }
    // 0x80225E8C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225E90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225E94: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225E98: bne         $v1, $v0, L_80225EBC
    if (ctx->r3 != ctx->r2) {
        // 0x80225E9C: nop
    
            goto L_80225EBC;
    }
    // 0x80225E9C: nop

    // 0x80225EA0: jal         0x8006033C
    // 0x80225EA4: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225EA4: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_0:
    // 0x80225EA8: beq         $v0, $zero, L_80225EBC
    if (ctx->r2 == 0) {
        // 0x80225EAC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225EBC;
    }
    // 0x80225EAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EB0: lw          $v1, 0xA4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA4);
    // 0x80225EB4: j           L_80225F60
    // 0x80225EB8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_80225F60;
    // 0x80225EB8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225EBC:
    // 0x80225EBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225EC0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225EC4: bne         $v0, $zero, L_80225F60
    if (ctx->r2 != 0) {
        // 0x80225EC8: nop
    
            goto L_80225F60;
    }
    // 0x80225EC8: nop

    // 0x80225ECC: jal         0x80036E48
    // 0x80225ED0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x80225ED0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x80225ED4: jal         0x80029114
    // 0x80225ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_2;
    // 0x80225ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80225EDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EE4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225EE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EF0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225EF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EFC: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225F00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F04: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225F08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F0C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225F10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F14: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225F18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F1C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F24: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225F28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F2C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225F30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F34: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225F38: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225F3C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80225F40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225F44: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225F48: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225F4C: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80225F50: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x80225F54: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225F58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F5C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225F60:
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
RECOMP_FUNC void func_802270B0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802270B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802270B8: jal         0x8004F418
    // 0x802270BC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802270BC: nop

    after_0:
    // 0x802270C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802270C4: jr          $ra
    // 0x802270C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802270C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802270CC: nop

;}
RECOMP_FUNC void func_802253D0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253E4: bne         $v0, $zero, L_80225400
    if (ctx->r2 != 0) {
        // 0x802253E8: nop
    
            goto L_80225400;
    }
    // 0x802253E8: nop

    // 0x802253EC: jal         0x80060690
    // 0x802253F0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x802253F0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_0:
    // 0x802253F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225400:
    // 0x80225400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225408: jr          $ra
    // 0x8022540C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022540C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239BA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239BA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239BA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239BA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239BAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239BB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239BB4: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80239BB8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80239BBC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80239BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239BC4: beq         $v1, $v0, L_80239C94
    if (ctx->r3 == ctx->r2) {
        // 0x80239BC8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80239C94;
    }
    // 0x80239BC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239BCC: beql        $v0, $zero, L_80239BE4
    if (ctx->r2 == 0) {
        // 0x80239BD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239BE4;
    }
    goto skip_0;
    // 0x80239BD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80239BD4: beq         $v1, $zero, L_80239BFC
    if (ctx->r3 == 0) {
        // 0x80239BD8: addiu       $a0, $zero, 0x5E
        ctx->r4 = ADD32(0, 0X5E);
            goto L_80239BFC;
    }
    // 0x80239BD8: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x80239BDC: j           L_80239DD8
    // 0x80239BE0: nop

        goto L_80239DD8;
    // 0x80239BE0: nop

L_80239BE4:
    // 0x80239BE4: beq         $v1, $v0, L_80239D40
    if (ctx->r3 == ctx->r2) {
        // 0x80239BE8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80239D40;
    }
    // 0x80239BE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239BEC: beq         $v1, $v0, L_80239D68
    if (ctx->r3 == ctx->r2) {
        // 0x80239BF0: nop
    
            goto L_80239D68;
    }
    // 0x80239BF0: nop

    // 0x80239BF4: j           L_80239DD8
    // 0x80239BF8: nop

        goto L_80239DD8;
    // 0x80239BF8: nop

L_80239BFC:
    // 0x80239BFC: jal         0x8004CB2C
    // 0x80239C00: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80239C00: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80239C04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239C0C: jal         0x8005F6B4
    // 0x80239C10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80239C10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80239C14: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80239C18: addiu       $s0, $s0, -0xC64
    ctx->r16 = ADD32(ctx->r16, -0XC64);
    // 0x80239C1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80239C24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80239C28: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239C2C: addiu       $v0, $v0, -0xB88
    ctx->r2 = ADD32(ctx->r2, -0XB88);
    // 0x80239C30: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80239C34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80239C38: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80239C3C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239C40: addiu       $v0, $v0, -0x5D0
    ctx->r2 = ADD32(ctx->r2, -0X5D0);
    // 0x80239C44: jal         0x8005FA7C
    // 0x80239C48: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80239C48: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_2:
    // 0x80239C4C: jal         0x8005FA7C
    // 0x80239C50: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80239C50: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80239C54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239C58: jal         0x8023AB14
    // 0x80239C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_4;
    // 0x80239C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x80239C60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80239C64: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80239C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239C6C: sh          $zero, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = 0;
    // 0x80239C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239C74: sb          $s0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r16;
    // 0x80239C78: jal         0x8023AB14
    // 0x80239C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_5;
    // 0x80239C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80239C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239C84: sh          $zero, 0x4488($at)
    MEM_H(0X4488, ctx->r1) = 0;
    // 0x80239C88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239C8C: j           L_80239D58
    // 0x80239C90: sb          $s0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r16;
        goto L_80239D58;
    // 0x80239C90: sb          $s0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r16;
L_80239C94:
    // 0x80239C94: jal         0x8006FF84
    // 0x80239C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_6;
    // 0x80239C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80239C9C: beq         $v0, $zero, L_80239DD8
    if (ctx->r2 == 0) {
        // 0x80239CA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80239DD8;
    }
    // 0x80239CA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239CA4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80239CA8: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80239CAC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80239CB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CB4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80239CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239CBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CC0: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80239CC4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80239CC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CCC: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80239CD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CD4: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x80239CD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CDC: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80239CE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CE4: sh          $zero, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = 0;
    // 0x80239CE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CEC: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80239CF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CF4: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80239CF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239CFC: sw          $zero, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = 0;
    // 0x80239D00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D04: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80239D08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D0C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80239D10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D14: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x80239D18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D1C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80239D20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D24: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80239D28: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80239D2C: andi        $a0, $a0, 0xFD
    ctx->r4 = ctx->r4 & 0XFD;
    // 0x80239D30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239D34: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80239D38: j           L_80239D58
    // 0x80239D3C: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
        goto L_80239D58;
    // 0x80239D3C: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
L_80239D40:
    // 0x80239D40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239D44: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80239D48: bne         $v0, $zero, L_80239DD8
    if (ctx->r2 != 0) {
        // 0x80239D4C: lui         $a0, 0x112
        ctx->r4 = S32(0X112 << 16);
            goto L_80239DD8;
    }
    // 0x80239D4C: lui         $a0, 0x112
    ctx->r4 = S32(0X112 << 16);
    // 0x80239D50: jal         0x80036B1C
    // 0x80239D54: ori         $a0, $a0, 0x4802
    ctx->r4 = ctx->r4 | 0X4802;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_7;
    // 0x80239D54: ori         $a0, $a0, 0x4802
    ctx->r4 = ctx->r4 | 0X4802;
    after_7:
L_80239D58:
    // 0x80239D58: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80239D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239D60: j           L_80239DD8
    // 0x80239D64: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80239DD8;
    // 0x80239D64: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80239D68:
    // 0x80239D68: jal         0x80036B7C
    // 0x80239D6C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_8;
    // 0x80239D6C: nop

    after_8:
    // 0x80239D70: beq         $v0, $zero, L_80239DD8
    if (ctx->r2 == 0) {
        // 0x80239D74: nop
    
            goto L_80239DD8;
    }
    // 0x80239D74: nop

    // 0x80239D78: jal         0x80060170
    // 0x80239D7C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_9;
    // 0x80239D7C: nop

    after_9:
    // 0x80239D80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239D84: addiu       $v0, $v0, -0xB38
    ctx->r2 = ADD32(ctx->r2, -0XB38);
    // 0x80239D88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80239D8C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80239D90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239D94: addiu       $v0, $v0, -0x5C0
    ctx->r2 = ADD32(ctx->r2, -0X5C0);
    // 0x80239D98: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80239D9C: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80239DA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239DA4: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x80239DA8: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
    // 0x80239DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239DB0: sh          $v0, 0x4488($at)
    MEM_H(0X4488, ctx->r1) = ctx->r2;
    // 0x80239DB4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80239DB8: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80239DBC: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80239DC0: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80239DC4: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x80239DC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239DCC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239DD0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80239DD4: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
L_80239DD8:
    // 0x80239DD8: jal         0x8006072C
    // 0x80239DDC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_10;
    // 0x80239DDC: nop

    after_10:
    // 0x80239DE0: beq         $v0, $zero, L_80239DF4
    if (ctx->r2 == 0) {
        // 0x80239DE4: nop
    
            goto L_80239DF4;
    }
    // 0x80239DE4: nop

    // 0x80239DE8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80239DEC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80239DF0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80239DF4:
    // 0x80239DF4: jal         0x8005FB90
    // 0x80239DF8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80239DF8: nop

    after_11:
    // 0x80239DFC: jal         0x80060018
    // 0x80239E00: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x80239E00: nop

    after_12:
    // 0x80239E04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239E08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239E0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239E10: jr          $ra
    // 0x80239E14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239E14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AEAC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AEAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AEB0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AEB4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022AEB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AEBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AEC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AEC4: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022AEC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AECC: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022AED0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022AED4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022AED8: lbu         $s1, -0x1E58($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1E58);
    // 0x8022AEDC: jal         0x8003B878
    // 0x8022AEE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022AEE0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022AEE4: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AEE8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022AEEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AEF0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022AEF4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AEF8: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022AEFC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022AF00: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022AF04: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022AF08: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AF0C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022AF10: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022AF14: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x8022AF18: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022AF1C: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022AF20: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x8022AF24: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022AF28: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022AF2C: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022AF30: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x8022AF34: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022AF38: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022AF3C: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022AF40: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022AF44: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022AF48: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022AF4C: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022AF50: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022AF54: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022AF58: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022AF5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AF60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AF64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AF68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF6C: jr          $ra
    // 0x8022AF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022AF74: nop

    // 0x8022AF78: nop

    // 0x8022AF7C: nop

;}
RECOMP_FUNC void func_80232394_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232394: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x80232398: slti        $v0, $v1, 0x1BC
    ctx->r2 = SIGNED(ctx->r3) < 0X1BC ? 1 : 0;
    // 0x8023239C: beq         $v0, $zero, L_80232488
    if (ctx->r2 == 0) {
        // 0x802323A0: addiu       $v0, $zero, 0x9C
        ctx->r2 = ADD32(0, 0X9C);
            goto L_80232488;
    }
    // 0x802323A0: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
    // 0x802323A4: beq         $v1, $v0, L_80232444
    if (ctx->r3 == ctx->r2) {
        // 0x802323A8: slti        $v0, $v1, 0x9D
        ctx->r2 = SIGNED(ctx->r3) < 0X9D ? 1 : 0;
            goto L_80232444;
    }
    // 0x802323A8: slti        $v0, $v1, 0x9D
    ctx->r2 = SIGNED(ctx->r3) < 0X9D ? 1 : 0;
    // 0x802323AC: beq         $v0, $zero, L_802323E4
    if (ctx->r2 == 0) {
        // 0x802323B0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802323E4;
    }
    // 0x802323B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802323B4: beq         $v1, $v0, L_80232430
    if (ctx->r3 == ctx->r2) {
        // 0x802323B8: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_80232430;
    }
    // 0x802323B8: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x802323BC: beql        $v0, $zero, L_802323D4
    if (ctx->r2 == 0) {
        // 0x802323C0: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_802323D4;
    }
    goto skip_0;
    // 0x802323C0: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    skip_0:
    // 0x802323C4: beq         $v1, $zero, L_8023241C
    if (ctx->r3 == 0) {
        // 0x802323C8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023241C;
    }
    // 0x802323C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802323CC: j           L_80232478
    // 0x802323D0: nop

        goto L_80232478;
    // 0x802323D0: nop

L_802323D4:
    // 0x802323D4: beq         $v1, $v0, L_8023243C
    if (ctx->r3 == ctx->r2) {
        // 0x802323D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023243C;
    }
    // 0x802323D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802323DC: j           L_80232478
    // 0x802323E0: nop

        goto L_80232478;
    // 0x802323E0: nop

L_802323E4:
    // 0x802323E4: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    // 0x802323E8: beq         $v1, $v0, L_8023246C
    if (ctx->r3 == ctx->r2) {
        // 0x802323EC: slti        $v0, $v1, 0x111
        ctx->r2 = SIGNED(ctx->r3) < 0X111 ? 1 : 0;
            goto L_8023246C;
    }
    // 0x802323EC: slti        $v0, $v1, 0x111
    ctx->r2 = SIGNED(ctx->r3) < 0X111 ? 1 : 0;
    // 0x802323F0: beq         $v0, $zero, L_80232408
    if (ctx->r2 == 0) {
        // 0x802323F4: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_80232408;
    }
    // 0x802323F4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802323F8: beq         $v1, $v0, L_80232450
    if (ctx->r3 == ctx->r2) {
        // 0x802323FC: nop
    
            goto L_80232450;
    }
    // 0x802323FC: nop

    // 0x80232400: j           L_80232478
    // 0x80232404: nop

        goto L_80232478;
    // 0x80232404: nop

L_80232408:
    // 0x80232408: addiu       $v0, $zero, 0x1AC
    ctx->r2 = ADD32(0, 0X1AC);
    // 0x8023240C: beq         $v1, $v0, L_80232474
    if (ctx->r3 == ctx->r2) {
        // 0x80232410: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232474;
    }
    // 0x80232410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232414: j           L_80232478
    // 0x80232418: nop

        goto L_80232478;
    // 0x80232418: nop

L_8023241C:
    // 0x8023241C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232420: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
    // 0x80232424: xori        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 ^ 0X6;
    // 0x80232428: j           L_8023245C
    // 0x8023242C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_8023245C;
    // 0x8023242C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80232430:
    // 0x80232430: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80232434: j           L_80232478
    // 0x80232438: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
        goto L_80232478;
    // 0x80232438: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
L_8023243C:
    // 0x8023243C: j           L_80232474
    // 0x80232440: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
        goto L_80232474;
    // 0x80232440: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
L_80232444:
    // 0x80232444: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80232448: j           L_80232478
    // 0x8023244C: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
        goto L_80232478;
    // 0x8023244C: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_80232450:
    // 0x80232450: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232454: xori        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 ^ 0X6;
    // 0x80232458: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8023245C:
    // 0x8023245C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232460: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80232464: j           L_80232478
    // 0x80232468: sh          $v0, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r2;
        goto L_80232478;
    // 0x80232468: sh          $v0, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r2;
L_8023246C:
    // 0x8023246C: j           L_80232478
    // 0x80232470: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
        goto L_80232478;
    // 0x80232470: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
L_80232474:
    // 0x80232474: sh          $v0, 0x50($a0)
    MEM_H(0X50, ctx->r4) = ctx->r2;
L_80232478:
    // 0x80232478: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x8023247C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232480: j           L_802324A4
    // 0x80232484: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
        goto L_802324A4;
    // 0x80232484: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
L_80232488:
    // 0x80232488: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8023248C: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80232490: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80232494: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80232498: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x8023249C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x802324A0: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
L_802324A4:
    // 0x802324A4: jr          $ra
    // 0x802324A8: nop

    TRACE_RETURN()
    return;
    // 0x802324A8: nop

;}
RECOMP_FUNC void func_80238758_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238758: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023875C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238760: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238764: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238768: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023876C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80238770: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80238774: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80238778: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023877C: beq         $v0, $zero, L_80238974
    if (ctx->r2 == 0) {
        // 0x80238780: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80238974;
    }
    // 0x80238780: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80238784: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238788: addu        $at, $at, $v0
    gpr jr_addend_80238790 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023878C: lw          $v0, 0x1070($at)
    ctx->r2 = ADD32(ctx->r1, 0X1070);
    // 0x80238790: jr          $v0
    // 0x80238794: nop

    switch (jr_addend_80238790 >> 2) {
        case 0: goto L_80238798; break;
        case 1: goto L_802387C8; break;
        case 2: goto L_802387FC; break;
        case 3: goto L_8023880C; break;
        case 4: goto L_8023886C; break;
        case 5: goto L_80238890; break;
        case 6: goto L_802388C8; break;
        case 7: goto L_80238910; break;
        default: switch_error(__func__, 0x80238790, 0x80241070);
    }
    // 0x80238794: nop

L_80238798:
    // 0x80238798: jal         0x80036E48
    // 0x8023879C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8023879C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802387A0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x802387A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802387A8: jal         0x8002A2F8
    // 0x802387AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x802387AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802387B0: jal         0x80239168
    // 0x802387B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239168_ovl25(rdram, ctx);
        goto after_2;
    // 0x802387B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802387B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802387BC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802387C0: j           L_80238904
    // 0x802387C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80238904;
    // 0x802387C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_802387C8:
    // 0x802387C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802387CC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802387D0: bne         $v0, $zero, L_80238974
    if (ctx->r2 != 0) {
        // 0x802387D4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238974;
    }
    // 0x802387D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802387D8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802387DC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802387E0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802387E4: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x802387E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802387EC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802387F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802387F4: j           L_80238974
    // 0x802387F8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80238974;
    // 0x802387F8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802387FC:
    // 0x802387FC: jal         0x802392D4
    // 0x80238800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802392D4_ovl25(rdram, ctx);
        goto after_3;
    // 0x80238800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80238804: j           L_80238974
    // 0x80238808: nop

        goto L_80238974;
    // 0x80238808: nop

L_8023880C:
    // 0x8023880C: jal         0x80239600
    // 0x80238810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239600_ovl25(rdram, ctx);
        goto after_4;
    // 0x80238810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80238814: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80238818: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023881C: beq         $v1, $v0, L_80238860
    if (ctx->r3 == ctx->r2) {
        // 0x80238820: nop
    
            goto L_80238860;
    }
    // 0x80238820: nop

    // 0x80238824: jal         0x802397AC
    // 0x80238828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802397AC_ovl25(rdram, ctx);
        goto after_5;
    // 0x80238828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023882C: beq         $v0, $zero, L_80238860
    if (ctx->r2 == 0) {
        // 0x80238830: nop
    
            goto L_80238860;
    }
    // 0x80238830: nop

    // 0x80238834: jal         0x802399C4
    // 0x80238838: nop

    func_802399C4_ovl25(rdram, ctx);
        goto after_6;
    // 0x80238838: nop

    after_6:
    // 0x8023883C: beq         $v0, $zero, L_80238854
    if (ctx->r2 == 0) {
        // 0x80238840: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238854;
    }
    // 0x80238840: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238844: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238848: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023884C: j           L_80238860
    // 0x80238850: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238860;
    // 0x80238850: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238854:
    // 0x80238854: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238858: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023885C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80238860:
    // 0x80238860: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80238864: j           L_80238974
    // 0x80238868: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80238974;
    // 0x80238868: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8023886C:
    // 0x8023886C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80238870: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80238874: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238878: bne         $v0, $v1, L_80238974
    if (ctx->r2 != ctx->r3) {
        // 0x8023887C: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_80238974;
    }
    // 0x8023887C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80238880: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238884: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80238888: j           L_80238900
    // 0x8023888C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
        goto L_80238900;
    // 0x8023888C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
L_80238890:
    // 0x80238890: jal         0x80036B58
    // 0x80238894: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_7;
    // 0x80238894: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_7:
    // 0x80238898: jal         0x80036E48
    // 0x8023889C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x8023889C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_8:
    // 0x802388A0: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x802388A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802388A8: jal         0x8002A2F8
    // 0x802388AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x802388AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x802388B0: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    // 0x802388B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802388B8: jal         0x8002A2F8
    // 0x802388BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x802388BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x802388C0: j           L_80238900
    // 0x802388C4: nop

        goto L_80238900;
    // 0x802388C4: nop

L_802388C8:
    // 0x802388C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802388CC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802388D0: bne         $v0, $zero, L_80238974
    if (ctx->r2 != 0) {
        // 0x802388D4: nop
    
            goto L_80238974;
    }
    // 0x802388D4: nop

    // 0x802388D8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802388DC: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x802388E0: bne         $v0, $zero, L_80238974
    if (ctx->r2 != 0) {
        // 0x802388E4: nop
    
            goto L_80238974;
    }
    // 0x802388E4: nop

    // 0x802388E8: jal         0x8006FF84
    // 0x802388EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_11;
    // 0x802388EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x802388F0: beq         $v0, $zero, L_80238974
    if (ctx->r2 == 0) {
        // 0x802388F4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238974;
    }
    // 0x802388F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802388F8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802388FC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80238900:
    // 0x80238900: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_80238904:
    // 0x80238904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238908: j           L_80238974
    // 0x8023890C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238974;
    // 0x8023890C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238910:
    // 0x80238910: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238914: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238918: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023891C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238920: beq         $v0, $zero, L_80238940
    if (ctx->r2 == 0) {
        // 0x80238924: nop
    
            goto L_80238940;
    }
    // 0x80238924: nop

    // 0x80238928: jal         0x80061798
    // 0x8023892C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_12;
    // 0x8023892C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x80238930: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238934: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238938: jal         0x80036B00
    // 0x8023893C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_13;
    // 0x8023893C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
L_80238940:
    // 0x80238940: jal         0x8004A268
    // 0x80238944: nop

    func_8004A268_25668(rdram, ctx);
        goto after_14;
    // 0x80238944: nop

    after_14:
    // 0x80238948: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023894C: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    // 0x80238950: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80238954: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80238958: jal         0x8006036C
    // 0x8023895C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8023895C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_15:
    // 0x80238960: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238964: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238968: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023896C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238970: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238974:
    // 0x80238974: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238978: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023897C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238980: jr          $ra
    // 0x80238984: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238984: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B948_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B948: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023B94C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B950: sb          $zero, 0x327D($at)
    MEM_B(0X327D, ctx->r1) = 0;
    // 0x8023B954: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B958: sb          $zero, 0x327C($at)
    MEM_B(0X327C, ctx->r1) = 0;
    // 0x8023B95C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B960: sb          $zero, 0x327B($at)
    MEM_B(0X327B, ctx->r1) = 0;
    // 0x8023B964: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B968: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023B96C: lw          $v0, 0x134($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X134);
    // 0x8023B970: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B974: jr          $ra
    // 0x8023B978: sw          $v0, 0x3274($at)
    MEM_W(0X3274, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023B978: sw          $v0, 0x3274($at)
    MEM_W(0X3274, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80237B10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80237B14: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80237B18: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80237B1C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80237B20: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80237B24: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80237B28: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80237B2C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80237B30: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80237B34: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x80237B38: lb          $a0, 0xD($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XD);
    // 0x80237B3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237B40: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80237B44: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237B48: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80237B4C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237B50: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80237B54: lbu         $v1, -0xCDB($at)
    ctx->r3 = MEM_BU(ctx->r1, -0XCDB);
    // 0x80237B58: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237B5C: bne         $v0, $v1, L_80237B7C
    if (ctx->r2 != ctx->r3) {
        // 0x80237B60: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237B7C;
    }
    // 0x80237B60: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237B64: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80237B68: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x80237B6C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80237B70: bne         $v1, $v0, L_80237B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80237B74: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_80237B7C;
    }
    // 0x80237B74: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80237B78: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80237B7C:
    // 0x80237B7C: lb          $v0, 0xD($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XD);
    // 0x80237B80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237B84: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237B88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237B8C: lbu         $v1, -0xCDC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XCDC);
    // 0x80237B90: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80237B94: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80237B98: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237B9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80237BA0: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x80237BA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237BA8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x80237BAC: mfhi        $t1
    ctx->r9 = hi;
    // 0x80237BB0: srl         $t0, $t1, 2
    ctx->r8 = S32(U32(ctx->r9) >> 2);
    // 0x80237BB4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x80237BB8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80237BBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237BC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237BC4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80237BC8: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
    // 0x80237BCC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80237BD0: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80237BD4: andi        $t0, $t0, 0xFF
    ctx->r8 = ctx->r8 & 0XFF;
    // 0x80237BD8: sll         $s1, $t0, 2
    ctx->r17 = S32(ctx->r8 << 2);
    // 0x80237BDC: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
    // 0x80237BE0: jal         0x8003BA58
    // 0x80237BE4: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80237BE4: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    after_0:
    // 0x80237BE8: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x80237BEC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80237BF0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80237BF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237BF8: jal         0x8003BB80
    // 0x80237BFC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80237BFC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80237C00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80237C04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237C08: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80237C0C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80237C10: addiu       $s5, $s0, 0x23
    ctx->r21 = ADD32(ctx->r16, 0X23);
    // 0x80237C14: addiu       $v0, $s0, 0x26
    ctx->r2 = ADD32(ctx->r16, 0X26);
    // 0x80237C18: addiu       $s4, $s0, 0x4
    ctx->r20 = ADD32(ctx->r16, 0X4);
    // 0x80237C1C: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x80237C20: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80237C24: addiu       $s2, $s1, 0x54
    ctx->r18 = ADD32(ctx->r17, 0X54);
    // 0x80237C28: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x80237C2C: addiu       $v0, $s1, 0x67
    ctx->r2 = ADD32(ctx->r17, 0X67);
    // 0x80237C30: sb          $s5, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r21;
    // 0x80237C34: sb          $s4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r20;
    // 0x80237C38: sb          $s2, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r18;
    // 0x80237C3C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x80237C40: sb          $s2, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r18;
    // 0x80237C44: jal         0x8003BC68
    // 0x80237C48: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80237C48: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x80237C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80237C50: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80237C54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80237C58: jal         0x8003BB80
    // 0x80237C5C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_3;
    // 0x80237C5C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80237C60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80237C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237C68: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80237C6C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80237C70: addiu       $v0, $s0, 0x20
    ctx->r2 = ADD32(ctx->r16, 0X20);
    // 0x80237C74: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80237C78: addiu       $s1, $s1, 0x41
    ctx->r17 = ADD32(ctx->r17, 0X41);
    // 0x80237C7C: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x80237C80: sb          $s5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r21;
    // 0x80237C84: sb          $s0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r16;
    // 0x80237C88: sb          $s4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r20;
    // 0x80237C8C: sb          $s1, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r17;
    // 0x80237C90: sb          $s2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r18;
    // 0x80237C94: sb          $s1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r17;
    // 0x80237C98: jal         0x8003BC68
    // 0x80237C9C: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    func_8003BC68_17068(rdram, ctx);
        goto after_4;
    // 0x80237C9C: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    after_4:
    // 0x80237CA0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80237CA4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80237CA8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80237CAC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80237CB0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80237CB4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80237CB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80237CBC: jr          $ra
    // 0x80237CC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80237CC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022FF50_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FF54: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022FF58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FF5C: lbu         $v1, 0x9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X9);
    // 0x8022FF60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF64: beq         $v1, $v0, L_8022FFC4
    if (ctx->r3 == ctx->r2) {
        // 0x8022FF68: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FFC4;
    }
    // 0x8022FF68: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FF6C: beql        $v0, $zero, L_8022FF84
    if (ctx->r2 == 0) {
        // 0x8022FF70: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FF84;
    }
    goto skip_0;
    // 0x8022FF70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FF74: beq         $v1, $zero, L_8022FF9C
    if (ctx->r3 == 0) {
        // 0x8022FF78: nop
    
            goto L_8022FF9C;
    }
    // 0x8022FF78: nop

    // 0x8022FF7C: j           L_80230070
    // 0x8022FF80: nop

        goto L_80230070;
    // 0x8022FF80: nop

L_8022FF84:
    // 0x8022FF84: beq         $v1, $v0, L_80230020
    if (ctx->r3 == ctx->r2) {
        // 0x8022FF88: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230020;
    }
    // 0x8022FF88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FF8C: beq         $v1, $v0, L_80230040
    if (ctx->r3 == ctx->r2) {
        // 0x8022FF90: nop
    
            goto L_80230040;
    }
    // 0x8022FF90: nop

    // 0x8022FF94: j           L_80230070
    // 0x8022FF98: nop

        goto L_80230070;
    // 0x8022FF98: nop

L_8022FF9C:
    // 0x8022FF9C: lb          $v0, 0xC($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC);
    // 0x8022FFA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FFA4: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022FFA8: beq         $v0, $zero, L_8022FFB8
    if (ctx->r2 == 0) {
        // 0x8022FFAC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022FFB8;
    }
    // 0x8022FFAC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022FFB0: j           L_8023005C
    // 0x8022FFB4: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
        goto L_8023005C;
    // 0x8022FFB4: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
L_8022FFB8:
    // 0x8022FFB8: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x8022FFBC: j           L_80230014
    // 0x8022FFC0: sb          $zero, 0xC($a3)
    MEM_B(0XC, ctx->r7) = 0;
        goto L_80230014;
    // 0x8022FFC0: sb          $zero, 0xC($a3)
    MEM_B(0XC, ctx->r7) = 0;
L_8022FFC4:
    // 0x8022FFC4: lb          $v0, 0xC($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC);
    // 0x8022FFC8: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022FFCC: bne         $v0, $zero, L_8022FFD8
    if (ctx->r2 != 0) {
        // 0x8022FFD0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022FFD8;
    }
    // 0x8022FFD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FFD4: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
L_8022FFD8:
    // 0x8022FFD8: lb          $v0, 0xC($a3)
    ctx->r2 = MEM_B(ctx->r7, 0XC);
    // 0x8022FFDC: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8022FFE0: beq         $v0, $zero, L_80230010
    if (ctx->r2 == 0) {
        // 0x8022FFE4: nop
    
            goto L_80230010;
    }
    // 0x8022FFE4: nop

    // 0x8022FFE8: lbu         $v0, 0xC($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XC);
    // 0x8022FFEC: lhu         $v1, 0x44($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X44);
    // 0x8022FFF0: lhu         $a0, 0x46($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X46);
    // 0x8022FFF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FFF8: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    // 0x8022FFFC: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    // 0x80230000: sh          $v1, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r3;
    // 0x80230004: sh          $a0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r4;
    // 0x80230008: j           L_8023005C
    // 0x8023000C: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
        goto L_8023005C;
    // 0x8023000C: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
L_80230010:
    // 0x80230010: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
L_80230014:
    // 0x80230014: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230018: j           L_8023005C
    // 0x8023001C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
        goto L_8023005C;
    // 0x8023001C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
L_80230020:
    // 0x80230020: lbu         $v1, 0x9($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X9);
    // 0x80230024: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230028: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x8023002C: sb          $zero, 0xC($a3)
    MEM_B(0XC, ctx->r7) = 0;
    // 0x80230030: sb          $zero, 0xD($a3)
    MEM_B(0XD, ctx->r7) = 0;
    // 0x80230034: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230038: j           L_80230070
    // 0x8023003C: sb          $v1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r3;
        goto L_80230070;
    // 0x8023003C: sb          $v1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r3;
L_80230040:
    // 0x80230040: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80230044: slti        $v0, $v0, 0x97
    ctx->r2 = SIGNED(ctx->r2) < 0X97 ? 1 : 0;
    // 0x80230048: beq         $v0, $zero, L_80230058
    if (ctx->r2 == 0) {
        // 0x8023004C: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_80230058;
    }
    // 0x8023004C: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80230050: j           L_8023005C
    // 0x80230054: sh          $zero, 0x46($a3)
    MEM_H(0X46, ctx->r7) = 0;
        goto L_8023005C;
    // 0x80230054: sh          $zero, 0x46($a3)
    MEM_H(0X46, ctx->r7) = 0;
L_80230058:
    // 0x80230058: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_8023005C:
    // 0x8023005C: lh          $a1, 0x44($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X44);
    // 0x80230060: lh          $a2, 0x46($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X46);
    // 0x80230064: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80230068: jal         0x8004DA90
    // 0x8023006C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023006C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80230070:
    // 0x80230070: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230074: jr          $ra
    // 0x80230078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A8B0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A8B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A8BC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A8C0: bne         $v0, $zero, L_8023A90C
    if (ctx->r2 != 0) {
        // 0x8023A8C4: nop
    
            goto L_8023A90C;
    }
    // 0x8023A8C4: nop

    // 0x8023A8C8: jal         0x8004F488
    // 0x8023A8CC: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023A8CC: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    after_0:
    // 0x8023A8D0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023A8D4: addiu       $s0, $s0, -0xC28
    ctx->r16 = ADD32(ctx->r16, -0XC28);
    // 0x8023A8D8: jal         0x8005FA7C
    // 0x8023A8DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023A8DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A8E0: jal         0x8005FA7C
    // 0x8023A8E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023A8E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8023A8E8: jal         0x8005FA7C
    // 0x8023A8EC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023A8EC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x8023A8F0: jal         0x8005FA7C
    // 0x8023A8F4: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x8023A8F4: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_4:
    // 0x8023A8F8: jal         0x8005FA7C
    // 0x8023A8FC: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8023A8FC: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_5:
    // 0x8023A900: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A904: jal         0x8023A980
    // 0x8023A908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A980_ovl25(rdram, ctx);
        goto after_6;
    // 0x8023A908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_8023A90C:
    // 0x8023A90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A914: jr          $ra
    // 0x8023A918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BF24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF2C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BF30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BF34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BF38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BF3C: jal         0x8009A3B4
    // 0x8022BF40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BF40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022BF44: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BF48: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BF4C: jal         0x8009A3B4
    // 0x8022BF50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BF50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BF54: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BF58: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BF5C: jal         0x8009A3B4
    // 0x8022BF60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BF60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BF64: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BF68: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BF6C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022BF70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BF74: beq         $v1, $v0, L_8022C014
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF78: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022C014;
    }
    // 0x8022BF78: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022BF7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BF80: beql        $v0, $zero, L_8022BF98
    if (ctx->r2 == 0) {
        // 0x8022BF84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BF98;
    }
    goto skip_0;
    // 0x8022BF84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BF88: beq         $v1, $zero, L_8022BFA8
    if (ctx->r3 == 0) {
        // 0x8022BF8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BFA8;
    }
    // 0x8022BF8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF90: j           L_8022C0FC
    // 0x8022BF94: nop

        goto L_8022C0FC;
    // 0x8022BF94: nop

L_8022BF98:
    // 0x8022BF98: beq         $v1, $v0, L_8022C05C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF9C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022C05C;
    }
    // 0x8022BF9C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022BFA0: j           L_8022C100
    // 0x8022BFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C100;
    // 0x8022BFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022BFA8:
    // 0x8022BFA8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BFAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BFB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BFB4: jal         0x8004D5D4
    // 0x8022BFB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022BFB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022BFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BFC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BFC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BFC8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BFCC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BFD0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BFD4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BFD8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BFDC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BFE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BFE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BFEC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022BFF0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022BFF4: jal         0x8022C148
    // 0x8022BFF8: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    func_8022C148_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022BFF8: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    after_4:
    // 0x8022BFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C000: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C004: jal         0x8022C170
    // 0x8022C008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022C170_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022C008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022C00C: j           L_8022C04C
    // 0x8022C010: nop

        goto L_8022C04C;
    // 0x8022C010: nop

L_8022C014:
    // 0x8022C014: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C018: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C01C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C020: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022C024: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C028: bne         $v1, $v0, L_8022C100
    if (ctx->r3 != ctx->r2) {
        // 0x8022C02C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C100;
    }
    // 0x8022C02C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C030: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C034: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022C038: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C03C: bne         $v1, $v0, L_8022C100
    if (ctx->r3 != ctx->r2) {
        // 0x8022C040: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8022C100;
    }
    // 0x8022C040: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C044: jal         0x8022C148
    // 0x8022C048: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022C148_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022C048: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
L_8022C04C:
    // 0x8022C04C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C050: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C054: j           L_8022C0FC
    // 0x8022C058: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C0FC;
    // 0x8022C058: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C05C:
    // 0x8022C05C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C060: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022C064: beq         $v1, $v0, L_8022C0E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C068: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_8022C0E8;
    }
    // 0x8022C068: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x8022C06C: beq         $v0, $zero, L_8022C08C
    if (ctx->r2 == 0) {
        // 0x8022C070: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022C08C;
    }
    // 0x8022C070: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C074: beq         $v1, $v0, L_8022C0A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C078: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8022C0A8;
    }
    // 0x8022C078: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022C07C: beq         $v1, $v0, L_8022C0B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C080: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0B8;
    }
    // 0x8022C080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C084: j           L_8022C0FC
    // 0x8022C088: nop

        goto L_8022C0FC;
    // 0x8022C088: nop

L_8022C08C:
    // 0x8022C08C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022C090: beq         $v1, $v0, L_8022C0CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C094: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_8022C0CC;
    }
    // 0x8022C094: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022C098: beq         $v1, $v0, L_8022C0DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C09C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0DC;
    }
    // 0x8022C09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0A0: j           L_8022C0FC
    // 0x8022C0A4: nop

        goto L_8022C0FC;
    // 0x8022C0A4: nop

L_8022C0A8:
    // 0x8022C0A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C0B0: j           L_8022C0F4
    // 0x8022C0B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022C0F4;
    // 0x8022C0B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022C0B8:
    // 0x8022C0B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C0BC: jal         0x8022C148
    // 0x8022C0C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022C148_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022C0C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x8022C0C4: j           L_8022C100
    // 0x8022C0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C100;
    // 0x8022C0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C0CC:
    // 0x8022C0CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C0D4: j           L_8022C0F4
    // 0x8022C0D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022C0F4;
    // 0x8022C0D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022C0DC:
    // 0x8022C0DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C0E0: jal         0x8022C148
    // 0x8022C0E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022C148_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022C0E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_8:
L_8022C0E8:
    // 0x8022C0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C0F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022C0F4:
    // 0x8022C0F4: jal         0x8022C170
    // 0x8022C0F8: nop

    func_8022C170_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022C0F8: nop

    after_9:
L_8022C0FC:
    // 0x8022C0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C100:
    // 0x8022C100: jal         0x8022C198
    // 0x8022C104: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022C198_ovl25(rdram, ctx);
        goto after_10;
    // 0x8022C104: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022C108: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C10C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C110: beq         $a1, $v0, L_8022C12C
    if (ctx->r5 == ctx->r2) {
        // 0x8022C114: nop
    
            goto L_8022C12C;
    }
    // 0x8022C114: nop

    // 0x8022C118: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x8022C11C: jal         0x80050294
    // 0x8022C120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022C120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022C124: j           L_8022C134
    // 0x8022C128: nop

        goto L_8022C134;
    // 0x8022C128: nop

L_8022C12C:
    // 0x8022C12C: jal         0x8005044C
    // 0x8022C130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_12;
    // 0x8022C130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
L_8022C134:
    // 0x8022C134: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C13C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C140: jr          $ra
    // 0x8022C144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229B30_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229B34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229B38: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80229B3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229B40: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80229B44: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229B48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229B4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229B50: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80229B54: beq         $v1, $zero, L_80229B6C
    if (ctx->r3 == 0) {
        // 0x80229B58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229B6C;
    }
    // 0x80229B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B5C: beq         $v1, $v0, L_80229B7C
    if (ctx->r3 == ctx->r2) {
        // 0x80229B60: nop
    
            goto L_80229B7C;
    }
    // 0x80229B60: nop

    // 0x80229B64: j           L_80229CE4
    // 0x80229B68: nop

        goto L_80229CE4;
    // 0x80229B68: nop

L_80229B6C:
    // 0x80229B6C: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80229B70: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x80229B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B78: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_80229B7C:
    // 0x80229B7C: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229B80: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80229B84: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80229B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B8C: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
L_80229B90:
    // 0x80229B90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229B94: addiu       $v0, $v0, -0x22E0
    ctx->r2 = ADD32(ctx->r2, -0X22E0);
    // 0x80229B98: addu        $s1, $s3, $v0
    ctx->r17 = ADD32(ctx->r19, ctx->r2);
    // 0x80229B9C: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x80229BA0: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229BA4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229BA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80229BAC: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80229BB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BB4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80229BB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80229BBC: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x80229BC0: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229BC4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229BC8: mflo        $v1
    ctx->r3 = lo;
    // 0x80229BCC: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x80229BD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BD4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80229BD8: addiu       $v0, $v0, -0x1B1C
    ctx->r2 = ADD32(ctx->r2, -0X1B1C);
    // 0x80229BDC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80229BE0: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80229BE4: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229BE8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229BEC: mflo        $v1
    ctx->r3 = lo;
    // 0x80229BF0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80229BF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BF8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80229BFC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80229C00: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x80229C04: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229C08: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229C0C: mflo        $v1
    ctx->r3 = lo;
    // 0x80229C10: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80229C14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229C18: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80229C1C: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x80229C20: lh          $v1, 0x12($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X12);
    // 0x80229C24: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229C28: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229C2C: mflo        $v1
    ctx->r3 = lo;
    // 0x80229C30: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x80229C34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229C38: srl         $s0, $v0, 4
    ctx->r16 = S32(U32(ctx->r2) >> 4);
    // 0x80229C3C: sltiu       $v0, $s0, 0x80
    ctx->r2 = ctx->r16 < 0X80 ? 1 : 0;
    // 0x80229C40: beq         $v0, $zero, L_80229CD8
    if (ctx->r2 == 0) {
        // 0x80229C44: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80229CD8;
    }
    // 0x80229C44: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80229C48: jal         0x8003B878
    // 0x80229C4C: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80229C4C: nop

    after_0:
    // 0x80229C50: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x80229C54: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x80229C58: sll         $v1, $s0, 8
    ctx->r3 = S32(ctx->r16 << 8);
    // 0x80229C5C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80229C60: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80229C64: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80229C68: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80229C6C: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x80229C70: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80229C74: lhu         $a0, 0x12($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X12);
    // 0x80229C78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229C7C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80229C80: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80229C84: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80229C88: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229C8C: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80229C90: lbu         $a0, 0x14($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X14);
    // 0x80229C94: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80229C98: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80229C9C: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80229CA0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80229CA4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80229CA8: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80229CAC: addiu       $a1, $a0, 0x1F
    ctx->r5 = ADD32(ctx->r4, 0X1F);
    // 0x80229CB0: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80229CB4: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x80229CB8: or          $v1, $a1, $v1
    ctx->r3 = ctx->r5 | ctx->r3;
    // 0x80229CBC: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x80229CC0: ori         $a1, $a1, 0x1F00
    ctx->r5 = ctx->r5 | 0X1F00;
    // 0x80229CC4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80229CC8: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80229CCC: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x80229CD0: lh          $v1, 0x16($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X16);
    // 0x80229CD4: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_80229CD8:
    // 0x80229CD8: slti        $v0, $s4, 0x20
    ctx->r2 = SIGNED(ctx->r20) < 0X20 ? 1 : 0;
    // 0x80229CDC: bne         $v0, $zero, L_80229B90
    if (ctx->r2 != 0) {
        // 0x80229CE0: addiu       $s3, $s3, 0x18
        ctx->r19 = ADD32(ctx->r19, 0X18);
            goto L_80229B90;
    }
    // 0x80229CE0: addiu       $s3, $s3, 0x18
    ctx->r19 = ADD32(ctx->r19, 0X18);
L_80229CE4:
    // 0x80229CE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229CE8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229CEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229CF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229CF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229CF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229CFC: jr          $ra
    // 0x80229D00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229D00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80229D04: nop

    // 0x80229D08: nop

    // 0x80229D0C: nop

;}
RECOMP_FUNC void func_8023B97C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B97C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023B980: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    // 0x8023B984: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8023B988: beq         $v1, $zero, L_8023BA44
    if (ctx->r3 == 0) {
        // 0x8023B98C: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8023BA44;
    }
    // 0x8023B98C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023B990: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B994: lb          $v0, 0x327A($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X327A);
    // 0x8023B998: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B99C: lb          $a2, 0x1($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X1);
    // 0x8023B9A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B9A4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023B9A8: beq         $a2, $v0, L_8023B9CC
    if (ctx->r6 == ctx->r2) {
        // 0x8023B9AC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023B9CC;
    }
    // 0x8023B9AC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023B9B0: bne         $a2, $v0, L_8023B9C4
    if (ctx->r6 != ctx->r2) {
        // 0x8023B9B4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023B9C4;
    }
    // 0x8023B9B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023B9B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9BC: j           L_8023B9CC
    // 0x8023B9C0: sb          $zero, 0x327A($at)
    MEM_B(0X327A, ctx->r1) = 0;
        goto L_8023B9CC;
    // 0x8023B9C0: sb          $zero, 0x327A($at)
    MEM_B(0X327A, ctx->r1) = 0;
L_8023B9C4:
    // 0x8023B9C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9C8: sb          $v0, 0x327A($at)
    MEM_B(0X327A, ctx->r1) = ctx->r2;
L_8023B9CC:
    // 0x8023B9CC: lb          $v0, 0xA($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XA);
    // 0x8023B9D0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8023B9D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B9D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B9DC: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x8023B9E0: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8023B9E4: beq         $v1, $zero, L_8023BA44
    if (ctx->r3 == 0) {
        // 0x8023B9E8: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_8023BA44;
    }
    // 0x8023B9E8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8023B9EC: lb          $v0, 0xD($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XD);
    // 0x8023B9F0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B9F4: lb          $a2, 0x1($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X1);
    // 0x8023B9F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023B9FC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023BA00: beq         $a2, $v0, L_8023BA1C
    if (ctx->r6 == ctx->r2) {
        // 0x8023BA04: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023BA1C;
    }
    // 0x8023BA04: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023BA08: bne         $a2, $v0, L_8023BA18
    if (ctx->r6 != ctx->r2) {
        // 0x8023BA0C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023BA18;
    }
    // 0x8023BA0C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023BA10: j           L_8023BA1C
    // 0x8023BA14: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
        goto L_8023BA1C;
    // 0x8023BA14: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8023BA18:
    // 0x8023BA18: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
L_8023BA1C:
    // 0x8023BA1C: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x8023BA20: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8023BA24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BA28: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023BA2C: lbu         $v1, 0x8($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X8);
    // 0x8023BA30: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8023BA34: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023BA38: sb          $v1, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r3;
    // 0x8023BA3C: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x8023BA40: sb          $v0, 0x169($a0)
    MEM_B(0X169, ctx->r4) = ctx->r2;
L_8023BA44:
    // 0x8023BA44: jr          $ra
    // 0x8023BA48: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8023BA48: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8023BA4C: nop

;}
RECOMP_FUNC void func_8023CFDC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CFDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CFE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023CFE4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8023CFE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CFEC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CFF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CFF4: lw          $v0, 0xBFC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XBFC);
    // 0x8023CFF8: jalr        $v0
    // 0x8023CFFC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023CFFC: nop

    after_0:
    // 0x8023D000: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023D004: jr          $ra
    // 0x8023D008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AC20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AC24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AC28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023AC2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023AC30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AC34: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8023AC38: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023AC3C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023AC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AC44: beq         $v1, $v0, L_8023ACD4
    if (ctx->r3 == ctx->r2) {
        // 0x8023AC48: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023ACD4;
    }
    // 0x8023AC48: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AC4C: beql        $v0, $zero, L_8023AC64
    if (ctx->r2 == 0) {
        // 0x8023AC50: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AC64;
    }
    goto skip_0;
    // 0x8023AC50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AC54: beq         $v1, $zero, L_8023AC74
    if (ctx->r3 == 0) {
        // 0x8023AC58: addiu       $a0, $zero, 0x5E
        ctx->r4 = ADD32(0, 0X5E);
            goto L_8023AC74;
    }
    // 0x8023AC58: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x8023AC5C: j           L_8023ADDC
    // 0x8023AC60: nop

        goto L_8023ADDC;
    // 0x8023AC60: nop

L_8023AC64:
    // 0x8023AC64: beq         $v1, $v0, L_8023ADAC
    if (ctx->r3 == ctx->r2) {
        // 0x8023AC68: nop
    
            goto L_8023ADAC;
    }
    // 0x8023AC68: nop

    // 0x8023AC6C: j           L_8023ADDC
    // 0x8023AC70: nop

        goto L_8023ADDC;
    // 0x8023AC70: nop

L_8023AC74:
    // 0x8023AC74: jal         0x8004CB2C
    // 0x8023AC78: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8023AC78: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x8023AC7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023AC80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023AC84: jal         0x8005F6B4
    // 0x8023AC88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8023AC88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023AC8C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023AC90: addiu       $s0, $s0, -0x454
    ctx->r16 = ADD32(ctx->r16, -0X454);
    // 0x8023AC94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AC98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AC9C: addiu       $v0, $v0, -0x3DC
    ctx->r2 = ADD32(ctx->r2, -0X3DC);
    // 0x8023ACA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023ACA4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023ACA8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023ACAC: addiu       $v0, $v0, -0x390
    ctx->r2 = ADD32(ctx->r2, -0X390);
    // 0x8023ACB0: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x8023ACB4: jal         0x8005FA7C
    // 0x8023ACB8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023ACB8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_2:
    // 0x8023ACBC: jal         0x8005FA7C
    // 0x8023ACC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023ACC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8023ACC4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023ACC8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8023ACCC: j           L_8023ADA0
    // 0x8023ACD0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_8023ADA0;
    // 0x8023ACD0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_8023ACD4:
    // 0x8023ACD4: jal         0x8006FF84
    // 0x8023ACD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x8023ACD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023ACDC: beq         $v0, $zero, L_8023ADDC
    if (ctx->r2 == 0) {
        // 0x8023ACE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023ADDC;
    }
    // 0x8023ACE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023ACE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023ACE8: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8023ACEC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023ACF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023ACF4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023ACF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD00: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8023AD04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD08: sb          $v0, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = ctx->r2;
    // 0x8023AD0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD10: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8023AD14: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8023AD18: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x8023AD1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD20: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8023AD24: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
    // 0x8023AD28: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x8023AD2C: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023AD30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD34: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023AD38: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023AD3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD40: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023AD44: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x8023AD48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD4C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023AD50: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8023AD54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD58: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023AD5C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023AD60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD64: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023AD68: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023AD6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD70: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8023AD74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD78: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8023AD7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD80: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023AD84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD88: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023AD8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD90: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8023AD94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AD98: sw          $v1, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r3;
    // 0x8023AD9C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
L_8023ADA0:
    // 0x8023ADA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ADA4: j           L_8023ADDC
    // 0x8023ADA8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023ADDC;
    // 0x8023ADA8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023ADAC:
    // 0x8023ADAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023ADB0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023ADB4: bne         $v0, $zero, L_8023ADDC
    if (ctx->r2 != 0) {
        // 0x8023ADB8: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8023ADDC;
    }
    // 0x8023ADB8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023ADBC: jal         0x80036B1C
    // 0x8023ADC0: ori         $a0, $a0, 0x4900
    ctx->r4 = ctx->r4 | 0X4900;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x8023ADC0: ori         $a0, $a0, 0x4900
    ctx->r4 = ctx->r4 | 0X4900;
    after_5:
    // 0x8023ADC4: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8023ADC8: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8023ADCC: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8023ADD0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x8023ADD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ADD8: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8023ADDC:
    // 0x8023ADDC: jal         0x8006072C
    // 0x8023ADE0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_6;
    // 0x8023ADE0: nop

    after_6:
    // 0x8023ADE4: beq         $v0, $zero, L_8023ADF8
    if (ctx->r2 == 0) {
        // 0x8023ADE8: nop
    
            goto L_8023ADF8;
    }
    // 0x8023ADE8: nop

    // 0x8023ADEC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023ADF0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023ADF4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023ADF8:
    // 0x8023ADF8: jal         0x8005FB90
    // 0x8023ADFC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x8023ADFC: nop

    after_7:
    // 0x8023AE00: jal         0x80060018
    // 0x8023AE04: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x8023AE04: nop

    after_8:
    // 0x8023AE08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023AE0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023AE10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AE14: jr          $ra
    // 0x8023AE18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023AE18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C2D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C2D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C2D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C2DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C2E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C2E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C2E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C2EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C2F0: jal         0x8009A3B4
    // 0x8022C2F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C2F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C2F8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C2FC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C300: jal         0x8009A3B4
    // 0x8022C304: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C304: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C308: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C30C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C310: jal         0x8009A3B4
    // 0x8022C314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C318: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C31C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C320: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8022C324: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8022C328: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C330: beq         $v1, $v0, L_8022C3D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022C334: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022C3D0;
    }
    // 0x8022C334: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022C338: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C33C: beql        $v0, $zero, L_8022C354
    if (ctx->r2 == 0) {
        // 0x8022C340: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C354;
    }
    goto skip_0;
    // 0x8022C340: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C344: beq         $v1, $zero, L_8022C36C
    if (ctx->r3 == 0) {
        // 0x8022C348: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C36C;
    }
    // 0x8022C348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C34C: j           L_8022C520
    // 0x8022C350: nop

        goto L_8022C520;
    // 0x8022C350: nop

L_8022C354:
    // 0x8022C354: beq         $v1, $v0, L_8022C410
    if (ctx->r3 == ctx->r2) {
        // 0x8022C358: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C410;
    }
    // 0x8022C358: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C35C: beq         $v1, $v0, L_8022C498
    if (ctx->r3 == ctx->r2) {
        // 0x8022C360: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8022C498;
    }
    // 0x8022C360: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022C364: j           L_8022C524
    // 0x8022C368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C524;
    // 0x8022C368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C36C:
    // 0x8022C36C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C370: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C374: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C378: jal         0x8004D5D4
    // 0x8022C37C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022C37C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C38C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C390: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C394: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C398: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C39C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C3A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C3A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3A8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C3AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C3B0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C3B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C3B8: jal         0x8022C570
    // 0x8022C3BC: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    func_8022C570_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022C3BC: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    after_4:
    // 0x8022C3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C3C8: j           L_8022C480
    // 0x8022C3CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022C480;
    // 0x8022C3CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022C3D0:
    // 0x8022C3D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C3D4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C3D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C3DC: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022C3E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C3E4: bne         $v1, $v0, L_8022C524
    if (ctx->r3 != ctx->r2) {
        // 0x8022C3E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C524;
    }
    // 0x8022C3E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C3F0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022C3F4: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022C3F8: beq         $v1, $v0, L_8022C514
    if (ctx->r3 == ctx->r2) {
        // 0x8022C3FC: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8022C514;
    }
    // 0x8022C3FC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022C400: bne         $v1, $v0, L_8022C524
    if (ctx->r3 != ctx->r2) {
        // 0x8022C404: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8022C524;
    }
    // 0x8022C404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C408: j           L_8022C480
    // 0x8022C40C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022C480;
    // 0x8022C40C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022C410:
    // 0x8022C410: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C414: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022C418: bne         $v1, $v0, L_8022C444
    if (ctx->r3 != ctx->r2) {
        // 0x8022C41C: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_8022C444;
    }
    // 0x8022C41C: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8022C420: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C424: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022C428: bne         $v1, $v0, L_8022C444
    if (ctx->r3 != ctx->r2) {
        // 0x8022C42C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C444;
    }
    // 0x8022C42C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C430: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C434: jal         0x8022C598
    // 0x8022C438: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022C598_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022C438: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022C43C: j           L_8022C524
    // 0x8022C440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C524;
    // 0x8022C440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C444:
    // 0x8022C444: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022C448: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C44C: bne         $v1, $v0, L_8022C524
    if (ctx->r3 != ctx->r2) {
        // 0x8022C450: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C524;
    }
    // 0x8022C450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C454: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022C458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C45C: bne         $v1, $v0, L_8022C524
    if (ctx->r3 != ctx->r2) {
        // 0x8022C460: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8022C524;
    }
    // 0x8022C460: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C464: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C468: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C46C: jal         0x8022C570
    // 0x8022C470: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022C570_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022C470: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_6:
    // 0x8022C474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C47C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022C480:
    // 0x8022C480: jal         0x8022C598
    // 0x8022C484: nop

    func_8022C598_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022C484: nop

    after_7:
    // 0x8022C488: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C48C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C490: j           L_8022C520
    // 0x8022C494: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C520;
    // 0x8022C494: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C498:
    // 0x8022C498: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022C49C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022C4A0: beq         $v1, $v0, L_8022C4E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C4A4: slti        $v0, $v1, 0x29
        ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_8022C4E4;
    }
    // 0x8022C4A4: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8022C4A8: beq         $v0, $zero, L_8022C4C8
    if (ctx->r2 == 0) {
        // 0x8022C4AC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022C4C8;
    }
    // 0x8022C4AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C4B0: beq         $v1, $v0, L_8022C4E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C4B4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022C4E4;
    }
    // 0x8022C4B4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022C4B8: beq         $v1, $v0, L_8022C500
    if (ctx->r3 == ctx->r2) {
        // 0x8022C4BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C500;
    }
    // 0x8022C4BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4C0: j           L_8022C520
    // 0x8022C4C4: nop

        goto L_8022C520;
    // 0x8022C4C4: nop

L_8022C4C8:
    // 0x8022C4C8: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022C4CC: beq         $v1, $v0, L_8022C4FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C4D0: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022C4FC;
    }
    // 0x8022C4D0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022C4D4: beq         $v1, $v0, L_8022C514
    if (ctx->r3 == ctx->r2) {
        // 0x8022C4D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C514;
    }
    // 0x8022C4D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4DC: j           L_8022C520
    // 0x8022C4E0: nop

        goto L_8022C520;
    // 0x8022C4E0: nop

L_8022C4E4:
    // 0x8022C4E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C4EC: jal         0x8022C598
    // 0x8022C4F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022C598_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022C4F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x8022C4F4: j           L_8022C524
    // 0x8022C4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C524;
    // 0x8022C4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C4FC:
    // 0x8022C4FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C500:
    // 0x8022C500: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C504: jal         0x8022C598
    // 0x8022C508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022C598_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022C508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8022C50C: j           L_8022C524
    // 0x8022C510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C524;
    // 0x8022C510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C514:
    // 0x8022C514: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C518: jal         0x8022C570
    // 0x8022C51C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022C570_ovl25(rdram, ctx);
        goto after_10;
    // 0x8022C51C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
L_8022C520:
    // 0x8022C520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C524:
    // 0x8022C524: jal         0x8022C5C0
    // 0x8022C528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022C5C0_ovl25(rdram, ctx);
        goto after_11;
    // 0x8022C528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8022C52C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C530: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C534: beq         $a1, $v0, L_8022C550
    if (ctx->r5 == ctx->r2) {
        // 0x8022C538: nop
    
            goto L_8022C550;
    }
    // 0x8022C538: nop

    // 0x8022C53C: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x8022C540: jal         0x80050294
    // 0x8022C544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_12;
    // 0x8022C544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022C548: j           L_8022C558
    // 0x8022C54C: nop

        goto L_8022C558;
    // 0x8022C54C: nop

L_8022C550:
    // 0x8022C550: jal         0x8005044C
    // 0x8022C554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_13;
    // 0x8022C554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
L_8022C558:
    // 0x8022C558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C55C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C560: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C564: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C568: jr          $ra
    // 0x8022C56C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C56C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238274_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238278: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023827C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238284: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80238288: beq         $v1, $zero, L_802382A0
    if (ctx->r3 == 0) {
        // 0x8023828C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802382A0;
    }
    // 0x8023828C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238290: beq         $v1, $v0, L_80238314
    if (ctx->r3 == ctx->r2) {
        // 0x80238294: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80238314;
    }
    // 0x80238294: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80238298: j           L_80238364
    // 0x8023829C: nop

        goto L_80238364;
    // 0x8023829C: nop

L_802382A0:
    // 0x802382A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802382A4: jal         0x800700D8
    // 0x802382A8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_0;
    // 0x802382A8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x802382AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802382B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802382B4: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
    // 0x802382B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802382BC: sb          $zero, 0x4B25($at)
    MEM_B(0X4B25, ctx->r1) = 0;
    // 0x802382C0: jal         0x80036B58
    // 0x802382C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x802382C4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802382C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802382CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802382D0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802382D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802382D8: beq         $v0, $zero, L_802382FC
    if (ctx->r2 == 0) {
        // 0x802382DC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802382FC;
    }
    // 0x802382DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802382E0: jal         0x80061798
    // 0x802382E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_2;
    // 0x802382E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x802382E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802382EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802382F0: jal         0x80036B00
    // 0x802382F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_3;
    // 0x802382F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802382F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802382FC:
    // 0x802382FC: jal         0x800616FC
    // 0x80238300: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80238300: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80238304: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238308: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023830C: j           L_80238364
    // 0x80238310: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238364;
    // 0x80238310: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238314:
    // 0x80238314: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238318: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023831C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238320: bne         $v0, $zero, L_80238364
    if (ctx->r2 != 0) {
        // 0x80238324: addiu       $a0, $zero, 0x182
        ctx->r4 = ADD32(0, 0X182);
            goto L_80238364;
    }
    // 0x80238324: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    // 0x80238328: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023832C: jal         0x8002A2F8
    // 0x80238330: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80238330: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80238334: jal         0x8002A46C
    // 0x80238338: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8002A46C_586C(rdram, ctx);
        goto after_6;
    // 0x80238338: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x8023833C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238340: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238344: sb          $v0, -0x3C18($at)
    MEM_B(-0X3C18, ctx->r1) = ctx->r2;
    // 0x80238348: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023834C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238350: sb          $zero, -0x3C17($at)
    MEM_B(-0X3C17, ctx->r1) = 0;
    // 0x80238354: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238358: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023835C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238360: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238364:
    // 0x80238364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023836C: jr          $ra
    // 0x80238370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A82C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A82C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A830: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A838: jal         0x800A3450
    // 0x8022A83C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A83C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022A840: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A844: bne         $v1, $zero, L_8022A8A4
    if (ctx->r3 != 0) {
        // 0x8022A848: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022A8A4;
    }
    // 0x8022A848: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022A84C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A850: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022A854: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022A858: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A85C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A860: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8022A864: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x8022A868: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A86C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022A870: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022A874: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A878: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A87C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022A880: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A884: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A888: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022A88C: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8022A890: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A894: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022A898: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022A89C: j           L_8022A91C
    // 0x8022A8A0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022A91C;
    // 0x8022A8A0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022A8A4:
    // 0x8022A8A4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022A8A8: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022A8AC: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022A8B0: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022A8B4: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022A8B8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022A8BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A8C0: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022A8C4: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8022A8C8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022A8CC: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022A8D0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A8D4: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022A8D8: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022A8DC: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022A8E0: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022A8E4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022A8E8: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022A8EC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A8F0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022A8F4: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022A8F8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022A8FC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A900: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022A904: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022A908: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022A90C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022A910: bne         $v0, $zero, L_8022A91C
    if (ctx->r2 != 0) {
        // 0x8022A914: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022A91C;
    }
    // 0x8022A914: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022A918: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022A91C:
    // 0x8022A91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A924: jr          $ra
    // 0x8022A928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
