#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80247A20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247A20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80247A24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247A28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247A2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80247A30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80247A34: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80247A38: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80247A3C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80247A40: jal         0x8004D5D4
    // 0x80247A44: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80247A44: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80247A48: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80247A4C: jal         0x8002C678
    // 0x80247A50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x80247A50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80247A54: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80247A58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80247A5C: jal         0x800319B4
    // 0x80247A60: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80247A60: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80247A64: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80247A68: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80247A6C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80247A70: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80247A74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247A78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80247A7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247A88: jr          $ra
    // 0x80247A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80247A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239EA4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239EA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239EAC: jal         0x8006033C
    // 0x80239EB0: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80239EB0: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    after_0:
    // 0x80239EB4: bnel        $v0, $zero, L_80239ED0
    if (ctx->r2 != 0) {
        // 0x80239EB8: addiu       $v1, $zero, 0x4A
        ctx->r3 = ADD32(0, 0X4A);
            goto L_80239ED0;
    }
    goto skip_0;
    // 0x80239EB8: addiu       $v1, $zero, 0x4A
    ctx->r3 = ADD32(0, 0X4A);
    skip_0:
    // 0x80239EBC: jal         0x8006033C
    // 0x80239EC0: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80239EC0: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    after_1:
    // 0x80239EC4: beq         $v0, $zero, L_80239ED0
    if (ctx->r2 == 0) {
        // 0x80239EC8: addiu       $v1, $zero, 0x46
        ctx->r3 = ADD32(0, 0X46);
            goto L_80239ED0;
    }
    // 0x80239EC8: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x80239ECC: addiu       $v1, $zero, 0x48
    ctx->r3 = ADD32(0, 0X48);
L_80239ED0:
    // 0x80239ED0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239ED4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80239ED8: jr          $ra
    // 0x80239EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022893C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022893C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228940: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228944: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80228948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022894C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228950: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228954: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022895C: lb          $v1, 0x2($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2);
    // 0x80228960: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80228964: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x80228968: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022896C: beq         $v0, $zero, L_80228B6C
    if (ctx->r2 == 0) {
        // 0x80228970: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228B6C;
    }
    // 0x80228970: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228974: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228978: addu        $at, $at, $v0
    gpr jr_addend_80228980 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022897C: lw          $v0, 0x2BD8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BD8);
    // 0x80228980: jr          $v0
    // 0x80228984: nop

    switch (jr_addend_80228980 >> 2) {
        case 0: goto L_80228988; break;
        case 1: goto L_802289A8; break;
        case 2: goto L_802289E0; break;
        case 3: goto L_80228A60; break;
        case 4: goto L_80228A8C; break;
        case 5: goto L_80228AC4; break;
        case 6: goto L_80228B00; break;
        case 7: goto L_80228B24; break;
        default: switch_error(__func__, 0x80228980, 0x80252BD8);
    }
    // 0x80228984: nop

L_80228988:
    // 0x80228988: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022898C: lw          $v0, 0x5608($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5608);
    // 0x80228990: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x80228994: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80228998: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x8022899C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x802289A0: j           L_80228B1C
    // 0x802289A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228B1C;
    // 0x802289A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802289A8:
    // 0x802289A8: jal         0x8006033C
    // 0x802289AC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802289AC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x802289B0: beq         $v0, $zero, L_80228B6C
    if (ctx->r2 == 0) {
        // 0x802289B4: nop
    
            goto L_80228B6C;
    }
    // 0x802289B4: nop

    // 0x802289B8: jal         0x80060590
    // 0x802289BC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x802289BC: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x802289C0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802289C4: lw          $v1, 0x5608($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5608);
    // 0x802289C8: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802289CC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802289D0: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802289D4: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x802289D8: j           L_80228B14
    // 0x802289DC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_80228B14;
    // 0x802289DC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_802289E0:
    // 0x802289E0: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x802289E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802289E8: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x802289EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802289F0: bne         $v0, $zero, L_80228B6C
    if (ctx->r2 != 0) {
        // 0x802289F4: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_80228B6C;
    }
    // 0x802289F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802289F8: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802289FC: lw          $s0, 0x5600($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5600);
    // 0x80228A00: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80228A04: lw          $s1, 0x5608($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5608);
    // 0x80228A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A0C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80228A10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228A14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228A18: jal         0x8009A3B4
    // 0x80228A1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228A1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228A20: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228A24: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228A28: jal         0x8009A3B4
    // 0x80228A2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80228A2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80228A30: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80228A34: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228A38: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80228A3C: addiu       $v0, $v0, -0x18C
    ctx->r2 = ADD32(ctx->r2, -0X18C);
    // 0x80228A40: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228A44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A48: jal         0x8004EC38
    // 0x80228A4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x80228A4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_4:
    // 0x80228A50: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228A54: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228A58: j           L_80228B14
    // 0x80228A5C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_80228B14;
    // 0x80228A5C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_80228A60:
    // 0x80228A60: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80228A64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228A68: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228A6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A70: bne         $v0, $zero, L_80228B6C
    if (ctx->r2 != 0) {
        // 0x80228A74: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80228B6C;
    }
    // 0x80228A74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228A78: jal         0x800616FC
    // 0x80228A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80228A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80228A80: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228A84: j           L_80228B1C
    // 0x80228A88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228B1C;
    // 0x80228A88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228A8C:
    // 0x80228A8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228A90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228A94: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228A98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228A9C: bne         $v0, $zero, L_80228B6C
    if (ctx->r2 != 0) {
        // 0x80228AA0: nop
    
            goto L_80228B6C;
    }
    // 0x80228AA0: nop

    // 0x80228AA4: jal         0x800600F8
    // 0x80228AA8: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_6;
    // 0x80228AA8: nop

    after_6:
    // 0x80228AAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228AB0: jal         0x800616FC
    // 0x80228AB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80228AB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80228AB8: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228ABC: j           L_80228B1C
    // 0x80228AC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228B1C;
    // 0x80228AC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228AC4:
    // 0x80228AC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228AC8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228ACC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228AD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228AD4: bne         $v0, $zero, L_80228B6C
    if (ctx->r2 != 0) {
        // 0x80228AD8: nop
    
            goto L_80228B6C;
    }
    // 0x80228AD8: nop

    // 0x80228ADC: jal         0x8006036C
    // 0x80228AE0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80228AE0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_8:
    // 0x80228AE4: jal         0x8006036C
    // 0x80228AE8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80228AE8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_9:
    // 0x80228AEC: jal         0x8006036C
    // 0x80228AF0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80228AF0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_10:
    // 0x80228AF4: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228AF8: j           L_80228B1C
    // 0x80228AFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228B1C;
    // 0x80228AFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228B00:
    // 0x80228B00: jal         0x8006033C
    // 0x80228B04: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x80228B04: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_11:
    // 0x80228B08: beq         $v0, $zero, L_80228B6C
    if (ctx->r2 == 0) {
        // 0x80228B0C: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_80228B6C;
    }
    // 0x80228B0C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80228B10: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
L_80228B14:
    // 0x80228B14: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x80228B18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228B1C:
    // 0x80228B1C: j           L_80228B6C
    // 0x80228B20: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_80228B6C;
    // 0x80228B20: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_80228B24:
    // 0x80228B24: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80228B28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228B2C: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228B30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B34: bne         $v0, $zero, L_80228B6C
    if (ctx->r2 != 0) {
        // 0x80228B38: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228B6C;
    }
    // 0x80228B38: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228B3C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228B40: lw          $v1, 0x5600($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5600);
    // 0x80228B44: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80228B48: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228B4C: lw          $v1, 0x5608($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5608);
    // 0x80228B50: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80228B54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80228B58: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228B5C: jal         0x8022A398
    // 0x80228B60: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    func_8022A398_ovl10(rdram, ctx);
        goto after_12;
    // 0x80228B60: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    after_12:
    // 0x80228B64: jal         0x8006036C
    // 0x80228B68: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80228B68: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_13:
L_80228B6C:
    // 0x80228B6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228B70: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228B74: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228B78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228B7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228B80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B84: jr          $ra
    // 0x80228B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227D20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D20: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80227D24: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80227D28: addiu       $a2, $a2, 0x3380
    ctx->r6 = ADD32(ctx->r6, 0X3380);
    // 0x80227D2C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80227D30: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227D34: lh          $a0, 0x3384($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X3384);
    // 0x80227D38: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80227D3C: lw          $v1, 0x338C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X338C);
    // 0x80227D40: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D44: sh          $v0, 0x3382($at)
    MEM_H(0X3382, ctx->r1) = ctx->r2;
    // 0x80227D48: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80227D4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D50: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80227D54: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80227D58: beq         $v1, $v0, L_80227D80
    if (ctx->r3 == ctx->r2) {
        // 0x80227D5C: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80227D80;
    }
    // 0x80227D5C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80227D60: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227D64: bne         $v1, $v0, L_80227D78
    if (ctx->r3 != ctx->r2) {
        // 0x80227D68: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227D78;
    }
    // 0x80227D68: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227D6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D70: j           L_80227D80
    // 0x80227D74: sh          $zero, 0x3384($at)
    MEM_H(0X3384, ctx->r1) = 0;
        goto L_80227D80;
    // 0x80227D74: sh          $zero, 0x3384($at)
    MEM_H(0X3384, ctx->r1) = 0;
L_80227D78:
    // 0x80227D78: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227D7C: sh          $v0, 0x3384($at)
    MEM_H(0X3384, ctx->r1) = ctx->r2;
L_80227D80:
    // 0x80227D80: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    // 0x80227D84: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x80227D88: lh          $a1, 0xA($a2)
    ctx->r5 = MEM_H(ctx->r6, 0XA);
    // 0x80227D8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227D90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D94: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80227D98: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x80227D9C: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80227DA0: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80227DA4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80227DA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DAC: sh          $a0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r4;
    // 0x80227DB0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80227DB4: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80227DB8: beq         $v1, $v0, L_80227DD4
    if (ctx->r3 == ctx->r2) {
        // 0x80227DBC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80227DD4;
    }
    // 0x80227DBC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227DC0: bne         $v1, $v0, L_80227DD0
    if (ctx->r3 != ctx->r2) {
        // 0x80227DC4: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80227DD0;
    }
    // 0x80227DC4: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80227DC8: j           L_80227DD4
    // 0x80227DCC: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
        goto L_80227DD4;
    // 0x80227DCC: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
L_80227DD0:
    // 0x80227DD0: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
L_80227DD4:
    // 0x80227DD4: lh          $v0, 0xA($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XA);
    // 0x80227DD8: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80227DDC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227DE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DE4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80227DE8: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x80227DEC: sh          $v0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r2;
    // 0x80227DF0: sb          $v1, 0x168($a3)
    MEM_B(0X168, ctx->r7) = ctx->r3;
    // 0x80227DF4: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x80227DF8: sb          $v0, 0x169($a3)
    MEM_B(0X169, ctx->r7) = ctx->r2;
    // 0x80227DFC: jr          $ra
    // 0x80227E00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80227E00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x80227E04: nop

    // 0x80227E08: nop

    // 0x80227E0C: nop

;}
RECOMP_FUNC void func_8023C688_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023C68C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C690: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C694: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023C698: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023C69C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023C6A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C6A4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023C6A8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023C6AC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023C6B0: bne         $v0, $zero, L_8023C704
    if (ctx->r2 != 0) {
        // 0x8023C6B4: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8023C704;
    }
    // 0x8023C6B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023C6B8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8023C6BC: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x8023C6C0: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x8023C6C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C6C8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C6CC: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C6D0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023C6D4: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023C6D8: sra         $v1, $t0, 4
    ctx->r3 = S32(SIGNED(ctx->r8) >> 4);
    // 0x8023C6DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023C6E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023C6E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C6E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C6EC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023C6F0: addiu       $a0, $a0, 0x5A
    ctx->r4 = ADD32(ctx->r4, 0X5A);
    // 0x8023C6F4: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
    // 0x8023C6F8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023C6FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C700: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023C704:
    // 0x8023C704: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C708: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023C70C: beq         $v0, $zero, L_8023C7B4
    if (ctx->r2 == 0) {
        // 0x8023C710: addiu       $a0, $s0, 0x28
        ctx->r4 = ADD32(ctx->r16, 0X28);
            goto L_8023C7B4;
    }
    // 0x8023C710: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x8023C714: jal         0x800540D0
    // 0x8023C718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8023C718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8023C71C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C720: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8023C724: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C728: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023C72C: jal         0x8004DA90
    // 0x8023C730: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023C730: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023C734: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C738: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8023C73C: bne         $v0, $zero, L_8023C794
    if (ctx->r2 != 0) {
        // 0x8023C740: nop
    
            goto L_8023C794;
    }
    // 0x8023C740: nop

    // 0x8023C744: bne         $s2, $zero, L_8023C790
    if (ctx->r18 != 0) {
        // 0x8023C748: ori         $v0, $v1, 0x80
        ctx->r2 = ctx->r3 | 0X80;
            goto L_8023C790;
    }
    // 0x8023C748: ori         $v0, $v1, 0x80
    ctx->r2 = ctx->r3 | 0X80;
    // 0x8023C74C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8023C750: bgez        $v0, L_8023C794
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023C754: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8023C794;
    }
    // 0x8023C754: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023C758: andi        $v0, $v1, 0xFF7F
    ctx->r2 = ctx->r3 & 0XFF7F;
    // 0x8023C75C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023C760: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023C764: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8023C768: jal         0x8004F820
    // 0x8023C76C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023C76C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8023C770: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C774: blez        $v0, L_8023C788
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C778: nop
    
            goto L_8023C788;
    }
    // 0x8023C778: nop

    // 0x8023C77C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C780: j           L_8023C790
    // 0x8023C784: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
        goto L_8023C790;
    // 0x8023C784: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
L_8023C788:
    // 0x8023C788: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C78C: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
L_8023C790:
    // 0x8023C790: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C794:
    // 0x8023C794: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C798: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023C79C: bne         $v0, $zero, L_8023C7F8
    if (ctx->r2 != 0) {
        // 0x8023C7A0: nop
    
            goto L_8023C7F8;
    }
    // 0x8023C7A0: nop

    // 0x8023C7A4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023C7A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023C7AC: j           L_8023C7F8
    // 0x8023C7B0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8023C7F8;
    // 0x8023C7B0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023C7B4:
    // 0x8023C7B4: jal         0x800540B4
    // 0x8023C7B8: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_800540B4_2F4B4(rdram, ctx);
        goto after_3;
    // 0x8023C7B8: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x8023C7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023C7C0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8023C7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C7C8: jal         0x8004DA90
    // 0x8023C7CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8023C7CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8023C7D0: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8023C7D4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8023C7D8: andi        $v1, $v1, 0xFF7F
    ctx->r3 = ctx->r3 & 0XFF7F;
    // 0x8023C7DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023C7E0: beq         $v0, $zero, L_8023C7F0
    if (ctx->r2 == 0) {
        // 0x8023C7E4: sh          $v1, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r3;
            goto L_8023C7F0;
    }
    // 0x8023C7E4: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x8023C7E8: j           L_8023C7F4
    // 0x8023C7EC: ori         $v0, $v1, 0x41
    ctx->r2 = ctx->r3 | 0X41;
        goto L_8023C7F4;
    // 0x8023C7EC: ori         $v0, $v1, 0x41
    ctx->r2 = ctx->r3 | 0X41;
L_8023C7F0:
    // 0x8023C7F0: ori         $v0, $v1, 0x21
    ctx->r2 = ctx->r3 | 0X21;
L_8023C7F4:
    // 0x8023C7F4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8023C7F8:
    // 0x8023C7F8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023C7FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C800: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023C804: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C80C: jr          $ra
    // 0x8023C810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023C810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80246D5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246D64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246D68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80246D6C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80246D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246D74: jal         0x8006FF84
    // 0x80246D78: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80246D78: nop

    after_0:
    // 0x80246D7C: beq         $v0, $zero, L_80246DA8
    if (ctx->r2 == 0) {
        // 0x80246D80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80246DA8;
    }
    // 0x80246D80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80246D84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246D88: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80246D8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246D90: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80246D94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246D98: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    // 0x80246D9C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80246DA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246DA4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80246DA8:
    // 0x80246DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246DAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246DB0: jr          $ra
    // 0x80246DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240090_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024009C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802400A0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802400A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802400A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802400AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802400B0: lw          $v0, 0x1920($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1920);
    // 0x802400B4: jalr        $v0
    // 0x802400B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802400B8: nop

    after_0:
    // 0x802400BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802400C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802400C4: beq         $v0, $zero, L_802400E8
    if (ctx->r2 == 0) {
        // 0x802400C8: nop
    
            goto L_802400E8;
    }
    // 0x802400C8: nop

    // 0x802400CC: lw          $v0, 0x524($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X524);
    // 0x802400D0: beq         $v0, $zero, L_802400E8
    if (ctx->r2 == 0) {
        // 0x802400D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802400E8;
    }
    // 0x802400D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802400D8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802400DC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802400E0: jal         0x8003B564
    // 0x802400E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x802400E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_802400E8:
    // 0x802400E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802400EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802400F0: jr          $ra
    // 0x802400F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802400F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232B68_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B78: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80232B7C: bgez        $v0, L_80232BB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232B80: nop
    
            goto L_80232BB0;
    }
    // 0x80232B80: nop

    // 0x80232B84: jal         0x80233298
    // 0x80232B88: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_0;
    // 0x80232B88: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80232B8C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80232B90: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80232B94: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80232B98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232B9C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80232BA0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80232BA4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80232BA8: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80232BAC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80232BB0:
    // 0x80232BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232BB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232BB8: jr          $ra
    // 0x80232BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F3B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F3B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F3B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F3BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F3C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F3C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023F3C8: jal         0x8004F144
    // 0x8023F3CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023F3CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023F3D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023F3D4: beq         $a0, $zero, L_8023F434
    if (ctx->r4 == 0) {
        // 0x8023F3D8: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8023F434;
    }
    // 0x8023F3D8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8023F3DC: bne         $v0, $zero, L_8023F404
    if (ctx->r2 != 0) {
        // 0x8023F3E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F404;
    }
    // 0x8023F3E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F3E4: addiu       $v1, $zero, 0x84
    ctx->r3 = ADD32(0, 0X84);
    // 0x8023F3E8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023F3EC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8023F3F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023F3F4: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8023F3F8: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8023F3FC: j           L_8023F41C
    // 0x8023F400: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
        goto L_8023F41C;
    // 0x8023F400: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_8023F404:
    // 0x8023F404: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023F408: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023F40C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8023F410: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F414: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8023F418: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8023F41C:
    // 0x8023F41C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023F420: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8023F424: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8023F428: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8023F42C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8023F430: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_8023F434:
    // 0x8023F434: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023F438: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F43C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F440: jr          $ra
    // 0x8023F444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023F444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248FEC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248FEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248FF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80248FF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80248FF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80248FFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80249000: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80249004: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x80249008: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8024900C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80249010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249014: beq         $s1, $v0, L_8024907C
    if (ctx->r17 == ctx->r2) {
        // 0x80249018: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_8024907C;
    }
    // 0x80249018: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8024901C: beql        $v0, $zero, L_80249034
    if (ctx->r2 == 0) {
        // 0x80249020: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80249034;
    }
    goto skip_0;
    // 0x80249020: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80249024: beq         $s1, $zero, L_80249044
    if (ctx->r17 == 0) {
        // 0x80249028: nop
    
            goto L_80249044;
    }
    // 0x80249028: nop

    // 0x8024902C: j           L_802491A4
    // 0x80249030: nop

        goto L_802491A4;
    // 0x80249030: nop

L_80249034:
    // 0x80249034: beq         $s1, $v0, L_8024916C
    if (ctx->r17 == ctx->r2) {
        // 0x80249038: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024916C;
    }
    // 0x80249038: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024903C: j           L_802491A4
    // 0x80249040: nop

        goto L_802491A4;
    // 0x80249040: nop

L_80249044:
    // 0x80249044: jal         0x8006FF84
    // 0x80249048: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80249048: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8024904C: beq         $v0, $zero, L_802491A4
    if (ctx->r2 == 0) {
        // 0x80249050: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802491A4;
    }
    // 0x80249050: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80249054: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249058: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8024905C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80249060: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249064: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80249068: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024906C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80249070: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249074: j           L_8024915C
    // 0x80249078: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_8024915C;
    // 0x80249078: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_8024907C:
    // 0x8024907C: jal         0x802495F4
    // 0x80249080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802495F4_ovl10(rdram, ctx);
        goto after_1;
    // 0x80249080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80249084: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80249088: beql        $v0, $zero, L_8024914C
    if (ctx->r2 == 0) {
        // 0x8024908C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024914C;
    }
    goto skip_1;
    // 0x8024908C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x80249090: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80249094: bne         $v0, $zero, L_802490B8
    if (ctx->r2 != 0) {
        // 0x80249098: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802490B8;
    }
    // 0x80249098: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024909C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802490A0: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x802490A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802490A8: jal         0x800610AC
    // 0x802490AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x802490AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802490B0: j           L_8024915C
    // 0x802490B4: nop

        goto L_8024915C;
    // 0x802490B4: nop

L_802490B8:
    // 0x802490B8: beq         $v0, $s1, L_8024915C
    if (ctx->r2 == ctx->r17) {
        // 0x802490BC: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_8024915C;
    }
    // 0x802490BC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802490C0: beq         $v0, $zero, L_8024910C
    if (ctx->r2 == 0) {
        // 0x802490C4: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8024910C;
    }
    // 0x802490C4: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x802490C8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802490CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802490D0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802490D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802490D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802490DC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802490E0: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x802490E4: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x802490E8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802490EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802490F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802490F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802490F8: mfhi        $t0
    ctx->r8 = hi;
    // 0x802490FC: nop

    // 0x80249100: nop

    // 0x80249104: j           L_8024912C
    // 0x80249108: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_8024912C;
    // 0x80249108: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_8024910C:
    // 0x8024910C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80249110: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80249114: beq         $v1, $v0, L_80249148
    if (ctx->r3 == ctx->r2) {
        // 0x80249118: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80249148;
    }
    // 0x80249118: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8024911C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80249120: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249124: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80249128: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8024912C:
    // 0x8024912C: jal         0x80069754
    // 0x80249130: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x80249130: nop

    after_3:
    // 0x80249134: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80249138: jal         0x8006036C
    // 0x8024913C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8024913C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x80249140: j           L_8024915C
    // 0x80249144: nop

        goto L_8024915C;
    // 0x80249144: nop

L_80249148:
    // 0x80249148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8024914C:
    // 0x8024914C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80249150: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80249154: jal         0x80069754
    // 0x80249158: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x80249158: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8024915C:
    // 0x8024915C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80249160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249164: j           L_802491A4
    // 0x80249168: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802491A4;
    // 0x80249168: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024916C:
    // 0x8024916C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80249170: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80249174: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80249178: bne         $v0, $zero, L_802491A4
    if (ctx->r2 != 0) {
        // 0x8024917C: nop
    
            goto L_802491A4;
    }
    // 0x8024917C: nop

    // 0x80249180: jal         0x80070050
    // 0x80249184: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80249184: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80249188: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8024918C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249190: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80249194: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80249198: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8024919C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802491A0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802491A4:
    // 0x802491A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802491A8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802491AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802491B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802491B4: jr          $ra
    // 0x802491B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802491B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80240B10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240B10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80240B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240B1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80240B20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80240B24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240B28: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80240B2C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80240B30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240B34: jal         0x8009A3B4
    // 0x80240B38: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240B38: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80240B3C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80240B40: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80240B44: jal         0x8009A3B4
    // 0x80240B48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80240B48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240B4C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80240B50: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80240B54: jal         0x8009A3B4
    // 0x80240B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80240B58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80240B5C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80240B60: bne         $v0, $zero, L_80240B84
    if (ctx->r2 != 0) {
        // 0x80240B64: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80240B84;
    }
    // 0x80240B64: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80240B68: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80240B6C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80240B70: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80240B74: bne         $v0, $zero, L_80240B88
    if (ctx->r2 != 0) {
        // 0x80240B78: addiu       $v0, $zero, 0x3126
        ctx->r2 = ADD32(0, 0X3126);
            goto L_80240B88;
    }
    // 0x80240B78: addiu       $v0, $zero, 0x3126
    ctx->r2 = ADD32(0, 0X3126);
    // 0x80240B7C: j           L_80240B88
    // 0x80240B80: addiu       $v0, $zero, 0x3547
    ctx->r2 = ADD32(0, 0X3547);
        goto L_80240B88;
    // 0x80240B80: addiu       $v0, $zero, 0x3547
    ctx->r2 = ADD32(0, 0X3547);
L_80240B84:
    // 0x80240B84: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_80240B88:
    // 0x80240B88: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80240B8C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80240B90: jal         0x800A3450
    // 0x80240B94: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80240B94: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_3:
    // 0x80240B98: lhu         $v1, 0xC($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XC);
    // 0x80240B9C: lhu         $a0, 0x10($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X10);
    // 0x80240BA0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80240BA4: lw          $a1, 0x3520($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3520);
    // 0x80240BA8: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80240BAC: lw          $a2, 0x3524($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3524);
    // 0x80240BB0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80240BB4: sh          $v1, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r3;
    // 0x80240BB8: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
    // 0x80240BBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240BC0: sw          $a1, 0x3528($at)
    MEM_W(0X3528, ctx->r1) = ctx->r5;
    // 0x80240BC4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240BC8: sw          $a2, 0x352C($at)
    MEM_W(0X352C, ctx->r1) = ctx->r6;
    // 0x80240BCC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240BD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80240BD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240BD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240BDC: lw          $v0, 0x1A58($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A58);
    // 0x80240BE0: jalr        $v0
    // 0x80240BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80240BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80240BE8: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80240BEC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80240BF0: beq         $v1, $a1, L_80240C00
    if (ctx->r3 == ctx->r5) {
        // 0x80240BF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80240C00;
    }
    // 0x80240BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240BF8: j           L_80240C24
    // 0x80240BFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80240C24;
    // 0x80240BFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80240C00:
    // 0x80240C00: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80240C04: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80240C08: beq         $v0, $zero, L_80240C20
    if (ctx->r2 == 0) {
        // 0x80240C0C: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80240C20;
    }
    // 0x80240C0C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80240C10: jal         0x8005044C
    // 0x80240C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80240C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80240C18: j           L_80240C2C
    // 0x80240C1C: nop

        goto L_80240C2C;
    // 0x80240C1C: nop

L_80240C20:
    // 0x80240C20: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
L_80240C24:
    // 0x80240C24: jal         0x80050294
    // 0x80240C28: nop

    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80240C28: nop

    after_6:
L_80240C2C:
    // 0x80240C2C: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x80240C30: lh          $a0, 0xC($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XC);
    // 0x80240C34: beq         $v0, $a0, L_80240C5C
    if (ctx->r2 == ctx->r4) {
        // 0x80240C38: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80240C5C;
    }
    // 0x80240C38: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80240C3C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80240C40: jal         0x8003B85C
    // 0x80240C44: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_7;
    // 0x80240C44: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_7:
    // 0x80240C48: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80240C4C: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80240C50: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80240C54: jal         0x8003B840
    // 0x80240C58: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_8;
    // 0x80240C58: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_8:
L_80240C5C:
    // 0x80240C5C: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x80240C60: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x80240C64: beq         $v0, $a0, L_80240C8C
    if (ctx->r2 == ctx->r4) {
        // 0x80240C68: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80240C8C;
    }
    // 0x80240C68: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80240C6C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80240C70: jal         0x8003B85C
    // 0x80240C74: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_9;
    // 0x80240C74: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_9:
    // 0x80240C78: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80240C7C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80240C80: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80240C84: jal         0x8003B840
    // 0x80240C88: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_10;
    // 0x80240C88: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_10:
L_80240C8C:
    // 0x80240C8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80240C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80240C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240C98: jr          $ra
    // 0x80240C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B8D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B8D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024B8D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8024B8DC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024B8E0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024B8E4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8024B8E8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8024B8EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8024B8F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024B8F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B8F8: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8024B8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B900: beq         $v1, $v0, L_8024B9C8
    if (ctx->r3 == ctx->r2) {
        // 0x8024B904: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024B9C8;
    }
    // 0x8024B904: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024B908: beql        $v0, $zero, L_8024B920
    if (ctx->r2 == 0) {
        // 0x8024B90C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024B920;
    }
    goto skip_0;
    // 0x8024B90C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024B910: beq         $v1, $zero, L_8024B938
    if (ctx->r3 == 0) {
        // 0x8024B914: nop
    
            goto L_8024B938;
    }
    // 0x8024B914: nop

    // 0x8024B918: j           L_8024BA60
    // 0x8024B91C: nop

        goto L_8024BA60;
    // 0x8024B91C: nop

L_8024B920:
    // 0x8024B920: beq         $v1, $v0, L_8024B9E4
    if (ctx->r3 == ctx->r2) {
        // 0x8024B924: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024B9E4;
    }
    // 0x8024B924: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024B928: beq         $v1, $v0, L_8024BA38
    if (ctx->r3 == ctx->r2) {
        // 0x8024B92C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024BA38;
    }
    // 0x8024B92C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024B930: j           L_8024BA60
    // 0x8024B934: nop

        goto L_8024BA60;
    // 0x8024B934: nop

L_8024B938:
    // 0x8024B938: jal         0x80036B58
    // 0x8024B93C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x8024B93C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8024B940: jal         0x8006036C
    // 0x8024B944: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8024B944: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_1:
    // 0x8024B948: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8024B94C: addiu       $s0, $s0, 0x6B70
    ctx->r16 = ADD32(ctx->r16, 0X6B70);
    // 0x8024B950: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8024B954: lw          $s3, -0x72C8($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X72C8);
    // 0x8024B958: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8024B95C: addiu       $s5, $zero, 0xE
    ctx->r21 = ADD32(0, 0XE);
    // 0x8024B960: addiu       $s4, $zero, 0x21
    ctx->r20 = ADD32(0, 0X21);
L_8024B964:
    // 0x8024B964: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8024B968: bgezl       $v0, L_8024B9B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024B96C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8024B9B4;
    }
    goto skip_1;
    // 0x8024B96C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8024B970: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8024B974: slti        $v0, $v1, 0x1A
    ctx->r2 = SIGNED(ctx->r3) < 0X1A ? 1 : 0;
    // 0x8024B978: beq         $v0, $zero, L_8024B998
    if (ctx->r2 == 0) {
        // 0x8024B97C: slti        $v0, $v1, 0x18
        ctx->r2 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
            goto L_8024B998;
    }
    // 0x8024B97C: slti        $v0, $v1, 0x18
    ctx->r2 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x8024B980: beq         $v0, $zero, L_8024B9A0
    if (ctx->r2 == 0) {
        // 0x8024B984: nop
    
            goto L_8024B9A0;
    }
    // 0x8024B984: nop

    // 0x8024B988: beq         $v1, $s5, L_8024B9A0
    if (ctx->r3 == ctx->r21) {
        // 0x8024B98C: nop
    
            goto L_8024B9A0;
    }
    // 0x8024B98C: nop

    // 0x8024B990: j           L_8024B9B4
    // 0x8024B994: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8024B9B4;
    // 0x8024B994: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8024B998:
    // 0x8024B998: bnel        $v1, $s4, L_8024B9B4
    if (ctx->r3 != ctx->r20) {
        // 0x8024B99C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8024B9B4;
    }
    goto skip_2;
    // 0x8024B99C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
L_8024B9A0:
    // 0x8024B9A0: jal         0x80047B3C
    // 0x8024B9A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_2;
    // 0x8024B9A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024B9A8: jal         0x8004F684
    // 0x8024B9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_3;
    // 0x8024B9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024B9B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8024B9B4:
    // 0x8024B9B4: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8024B9B8: bne         $v0, $zero, L_8024B964
    if (ctx->r2 != 0) {
        // 0x8024B9BC: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8024B964;
    }
    // 0x8024B9BC: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8024B9C0: j           L_8024BA28
    // 0x8024B9C4: nop

        goto L_8024BA28;
    // 0x8024B9C4: nop

L_8024B9C8:
    // 0x8024B9C8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024B9CC: jal         0x8006FF84
    // 0x8024B9D0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x8024B9D0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_4:
    // 0x8024B9D4: beq         $v0, $zero, L_8024BA60
    if (ctx->r2 == 0) {
        // 0x8024B9D8: nop
    
            goto L_8024BA60;
    }
    // 0x8024B9D8: nop

    // 0x8024B9DC: j           L_8024BA28
    // 0x8024B9E0: nop

        goto L_8024BA28;
    // 0x8024B9E0: nop

L_8024B9E4:
    // 0x8024B9E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024B9E8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8024B9EC: bne         $v0, $zero, L_8024BA60
    if (ctx->r2 != 0) {
        // 0x8024B9F0: nop
    
            goto L_8024BA60;
    }
    // 0x8024B9F0: nop

    // 0x8024B9F4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8024B9F8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8024B9FC: bne         $v0, $zero, L_8024BA60
    if (ctx->r2 != 0) {
        // 0x8024BA00: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024BA60;
    }
    // 0x8024BA00: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024BA04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024BA08: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8024BA0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024BA10: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8024BA14: jal         0x8002A2F8
    // 0x8024BA18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8024BA18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8024BA1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024BA20: jal         0x800616FC
    // 0x8024BA24: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8024BA24: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_6:
L_8024BA28:
    // 0x8024BA28: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8024BA2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BA30: j           L_8024BA60
    // 0x8024BA34: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8024BA60;
    // 0x8024BA34: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8024BA38:
    // 0x8024BA38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024BA3C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024BA40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024BA44: bne         $v0, $zero, L_8024BA60
    if (ctx->r2 != 0) {
        // 0x8024BA48: nop
    
            goto L_8024BA60;
    }
    // 0x8024BA48: nop

    // 0x8024BA4C: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8024BA50: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
    // 0x8024BA54: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8024BA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BA5C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_8024BA60:
    // 0x8024BA60: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024BA64: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8024BA68: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8024BA6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8024BA70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024BA74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024BA78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BA7C: jr          $ra
    // 0x8024BA80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024BA80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233298_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233298: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8023329C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x802332A0: jr          $ra
    // 0x802332A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x802332A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8022DAF4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAF4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DAFC: beq         $v1, $v0, L_8022DB50
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB00: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022DB50;
    }
    // 0x8022DB00: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022DB04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DB08: beql        $v0, $zero, L_8022DB20
    if (ctx->r2 == 0) {
        // 0x8022DB0C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DB20;
    }
    goto skip_0;
    // 0x8022DB0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DB10: beq         $v1, $zero, L_8022DB38
    if (ctx->r3 == 0) {
        // 0x8022DB14: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022DB38;
    }
    // 0x8022DB14: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022DB18: j           L_8022DBD8
    // 0x8022DB1C: nop

        goto L_8022DBD8;
    // 0x8022DB1C: nop

L_8022DB20:
    // 0x8022DB20: beq         $v1, $v0, L_8022DB88
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB24: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DB88;
    }
    // 0x8022DB24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DB28: beq         $v1, $v0, L_8022DBB4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DB2C: nop
    
            goto L_8022DBB4;
    }
    // 0x8022DB2C: nop

    // 0x8022DB30: j           L_8022DBD8
    // 0x8022DB34: nop

        goto L_8022DBD8;
    // 0x8022DB34: nop

L_8022DB38:
    // 0x8022DB38: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022DB3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB40: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DB44: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022DB48: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022DB4C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022DB50:
    // 0x8022DB50: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022DB54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DB58: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DB5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB60: bgez        $v0, L_8022DBD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DB64: nop
    
            goto L_8022DBD8;
    }
    // 0x8022DB64: nop

    // 0x8022DB68: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022DB6C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022DB70: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022DB74: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DB78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DB7C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DB80: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022DB84: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022DB88:
    // 0x8022DB88: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022DB8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DB90: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DB94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB98: bgez        $v0, L_8022DBD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DB9C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022DBD8;
    }
    // 0x8022DB9C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022DBA0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DBA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DBA8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DBAC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022DBB0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022DBB4:
    // 0x8022DBB4: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022DBB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DBBC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DBC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DBC4: bgez        $v0, L_8022DBD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DBC8: nop
    
            goto L_8022DBD8;
    }
    // 0x8022DBC8: nop

    // 0x8022DBCC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022DBD0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022DBD4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022DBD8:
    // 0x8022DBD8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022DBDC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DBE0: beq         $v0, $zero, L_8022DBF8
    if (ctx->r2 == 0) {
        // 0x8022DBE4: nop
    
            goto L_8022DBF8;
    }
    // 0x8022DBE4: nop

    // 0x8022DBE8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022DBEC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022DBF0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022DBF4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022DBF8:
    // 0x8022DBF8: jr          $ra
    // 0x8022DBFC: nop

    TRACE_RETURN()
    return;
    // 0x8022DBFC: nop

;}
RECOMP_FUNC void func_80227E10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227E1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E24: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    // 0x80227E28: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80227E2C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80227E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E34: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80227E38: beq         $v1, $v0, L_80227E94
    if (ctx->r3 == ctx->r2) {
        // 0x80227E3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227E94;
    }
    // 0x80227E3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227E40: beql        $v0, $zero, L_80227E58
    if (ctx->r2 == 0) {
        // 0x80227E44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E58;
    }
    goto skip_0;
    // 0x80227E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227E48: beq         $v1, $zero, L_80227E70
    if (ctx->r3 == 0) {
        // 0x80227E4C: nop
    
            goto L_80227E70;
    }
    // 0x80227E4C: nop

    // 0x80227E50: j           L_80227F50
    // 0x80227E54: nop

        goto L_80227F50;
    // 0x80227E54: nop

L_80227E58:
    // 0x80227E58: beq         $v1, $v0, L_80227F1C
    if (ctx->r3 == ctx->r2) {
        // 0x80227E5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227F1C;
    }
    // 0x80227E5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227E60: beq         $v1, $v0, L_80227F34
    if (ctx->r3 == ctx->r2) {
        // 0x80227E64: nop
    
            goto L_80227F34;
    }
    // 0x80227E64: nop

    // 0x80227E68: j           L_80227F50
    // 0x80227E6C: nop

        goto L_80227F50;
    // 0x80227E6C: nop

L_80227E70:
    // 0x80227E70: jal         0x8006FF84
    // 0x80227E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80227E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80227E78: beq         $v0, $zero, L_80227F50
    if (ctx->r2 == 0) {
        // 0x80227E7C: nop
    
            goto L_80227F50;
    }
    // 0x80227E7C: nop

    // 0x80227E80: jal         0x80060170
    // 0x80227E84: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80227E84: nop

    after_1:
    // 0x80227E88: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E90: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80227E94:
    // 0x80227E94: addiu       $a0, $s0, 0x438
    ctx->r4 = ADD32(ctx->r16, 0X438);
    // 0x80227E98: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227E9C: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x80227EA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227EA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227EA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227EAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227EB0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227EB4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227EB8: jal         0x8009A3B4
    // 0x80227EBC: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227EBC: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227EC0: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x80227EC4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227EC8: jal         0x8009A3B4
    // 0x80227ECC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227ECC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80227ED0: addiu       $a0, $s0, 0x440
    ctx->r4 = ADD32(ctx->r16, 0X440);
    // 0x80227ED4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227ED8: jal         0x8009A3B4
    // 0x80227EDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80227EDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80227EE0: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x80227EE4: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80227EE8: jal         0x80060590
    // 0x80227EEC: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80227EEC: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    after_5:
    // 0x80227EF0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80227EF4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x80227EF8: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80227EFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F00: jal         0x8004A1AC
    // 0x80227F04: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_8004A1AC_255AC(rdram, ctx);
        goto after_6;
    // 0x80227F04: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_6:
    // 0x80227F08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227F0C: jal         0x800616FC
    // 0x80227F10: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80227F10: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_7:
    // 0x80227F14: j           L_80227F50
    // 0x80227F18: nop

        goto L_80227F50;
    // 0x80227F18: nop

L_80227F1C:
    // 0x80227F1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227F20: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227F24: bltz        $v0, L_80227F50
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227F28: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227F50;
    }
    // 0x80227F28: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227F2C: j           L_80227F50
    // 0x80227F30: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80227F50;
    // 0x80227F30: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80227F34:
    // 0x80227F34: jal         0x80070050
    // 0x80227F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_8;
    // 0x80227F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80227F3C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80227F40: jal         0x8006036C
    // 0x80227F44: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80227F44: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    after_9:
    // 0x80227F48: jal         0x8006036C
    // 0x80227F4C: addiu       $a0, $zero, 0x52D
    ctx->r4 = ADD32(0, 0X52D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80227F4C: addiu       $a0, $zero, 0x52D
    ctx->r4 = ADD32(0, 0X52D);
    after_10:
L_80227F50:
    // 0x80227F50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F5C: jr          $ra
    // 0x80227F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A58_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A58: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225A5C: bne         $v0, $zero, L_80225A74
    if (ctx->r2 != 0) {
        // 0x80225A60: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80225A74;
    }
    // 0x80225A60: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80225A64: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A68: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80225A6C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A70: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80225A74:
    // 0x80225A74: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225A78: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225A7C: bne         $v1, $v0, L_80225AA0
    if (ctx->r3 != ctx->r2) {
        // 0x80225A80: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80225AA0;
    }
    // 0x80225A80: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80225A84: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A88: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80225A8C: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80225A90: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A94: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225A98: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225A9C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_80225AA0:
    // 0x80225AA0: bne         $v1, $v0, L_80225AB8
    if (ctx->r3 != ctx->r2) {
        // 0x80225AA4: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80225AB8;
    }
    // 0x80225AA4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80225AA8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225AAC: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80225AB0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225AB4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80225AB8:
    // 0x80225AB8: jr          $ra
    // 0x80225ABC: nop

    TRACE_RETURN()
    return;
    // 0x80225ABC: nop

;}
RECOMP_FUNC void func_8022FC00_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FC04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FC08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FC0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FC10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FC14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FC18: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FC1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FC20: lw          $v0, 0x9AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X9AC);
    // 0x8022FC24: jalr        $v0
    // 0x8022FC28: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FC28: nop

    after_0:
    // 0x8022FC2C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022FC30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FC34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC38: jr          $ra
    // 0x8022FC3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FC3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802400F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802400F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802400FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240100: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240108: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024010C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80240110: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80240114: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80240118: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024011C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80240120: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80240124: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80240128: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024012C: sh          $zero, 0x5678($at)
    MEM_H(0X5678, ctx->r1) = 0;
    // 0x80240130: jal         0x8004D5D4
    // 0x80240134: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80240134: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80240138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024013C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80240140: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80240144: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80240148: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8024014C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80240150: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80240154: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80240158: addiu       $v0, $v0, 0x19C8
    ctx->r2 = ADD32(ctx->r2, 0X19C8);
    // 0x8024015C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80240160: jal         0x8003E934
    // 0x80240164: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80240164: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_1:
    // 0x80240168: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8024016C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240170: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80240174: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80240178: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8024017C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240180: addiu       $v1, $v1, 0x1938
    ctx->r3 = ADD32(ctx->r3, 0X1938);
    // 0x80240184: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80240188: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024018C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240190: sb          $a0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r4;
    // 0x80240194: lw          $a1, -0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, -0X4);
    // 0x80240198: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024019C: jal         0x80050294
    // 0x802401A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802401A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802401A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802401A8: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x802401AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802401B0: addiu       $a1, $a1, -0x420
    ctx->r5 = ADD32(ctx->r5, -0X420);
    // 0x802401B4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_802401B8:
    // 0x802401B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802401BC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x802401C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802401C4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802401C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802401CC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802401D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802401D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802401D8: lbu         $v0, -0x420($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X420);
    // 0x802401DC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802401E0: beq         $v0, $zero, L_80240208
    if (ctx->r2 == 0) {
        // 0x802401E4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80240208;
    }
    // 0x802401E4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802401E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802401EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802401F0: lbu         $v0, -0x41E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X41E);
    // 0x802401F4: bne         $v0, $a2, L_80240208
    if (ctx->r2 != ctx->r6) {
        // 0x802401F8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80240208;
    }
    // 0x802401F8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802401FC: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x80240200: sw          $v0, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r2;
    // 0x80240204: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80240208:
    // 0x80240208: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024020C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240210: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240214: slti        $v0, $v0, 0x12
    ctx->r2 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x80240218: bne         $v0, $zero, L_802401B8
    if (ctx->r2 != 0) {
        // 0x8024021C: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_802401B8;
    }
    // 0x8024021C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80240220: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80240224: sw          $zero, 0x524($s0)
    MEM_W(0X524, ctx->r16) = 0;
    // 0x80240228: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024022C: sw          $s0, 0x55E8($at)
    MEM_W(0X55E8, ctx->r1) = ctx->r16;
    // 0x80240230: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240234: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240238: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024023C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240244: jr          $ra
    // 0x80240248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B614_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B618: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B61C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B624: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B628: bne         $v0, $zero, L_8022B648
    if (ctx->r2 != 0) {
        // 0x8022B62C: nop
    
            goto L_8022B648;
    }
    // 0x8022B62C: nop

    // 0x8022B630: jal         0x80229F50
    // 0x8022B634: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B634: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x8022B638: jal         0x80229F50
    // 0x8022B63C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B63C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x8022B640: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B644: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B648:
    // 0x8022B648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B64C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B650: jr          $ra
    // 0x8022B654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244A84_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244A88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244A8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244A94: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80244A98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244A9C: beq         $v1, $v0, L_80244ACC
    if (ctx->r3 == ctx->r2) {
        // 0x80244AA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80244ACC;
    }
    // 0x80244AA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80244AA4: beq         $v0, $zero, L_80244BC4
    if (ctx->r2 == 0) {
        // 0x80244AA8: nop
    
            goto L_80244BC4;
    }
    // 0x80244AA8: nop

    // 0x80244AAC: bne         $v1, $zero, L_80244BC4
    if (ctx->r3 != 0) {
        // 0x80244AB0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80244BC4;
    }
    // 0x80244AB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80244AB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80244AB8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80244ABC: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x80244AC0: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x80244AC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80244AC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80244ACC:
    // 0x80244ACC: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80244AD0: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80244AD4: lhu         $a3, 0x4E($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4E);
    // 0x80244AD8: lhu         $t0, 0x50($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X50);
    // 0x80244ADC: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x80244AE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80244AE4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80244AE8: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80244AEC: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80244AF0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80244AF4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80244AF8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80244AFC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80244B00: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80244B04: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80244B08: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80244B0C: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80244B10: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80244B14: lh          $a1, 0x48($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X48);
    // 0x80244B18: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80244B1C: sw          $a2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r6;
    // 0x80244B20: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x80244B24: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80244B28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244B2C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80244B30: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80244B34: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80244B38: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80244B3C: jal         0x8004DD04
    // 0x80244B40: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80244B40: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_0:
    // 0x80244B44: jal         0x80040F30
    // 0x80244B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80244B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80244B4C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80244B50: beq         $v0, $zero, L_80244BC4
    if (ctx->r2 == 0) {
        // 0x80244B54: nop
    
            goto L_80244BC4;
    }
    // 0x80244B54: nop

    // 0x80244B58: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x80244B5C: bne         $v0, $zero, L_80244B70
    if (ctx->r2 != 0) {
        // 0x80244B60: nop
    
            goto L_80244B70;
    }
    // 0x80244B60: nop

    // 0x80244B64: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80244B68: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80244B6C: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_80244B70:
    // 0x80244B70: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80244B74: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80244B78: lhu         $a1, 0x66($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X66);
    // 0x80244B7C: lhu         $a0, 0xC0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC0);
    // 0x80244B80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244B84: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80244B88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80244B8C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80244B90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80244B94: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80244B98: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80244B9C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x80244BA0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80244BA4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80244BA8: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80244BAC: sh          $a0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r4;
    // 0x80244BB0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80244BB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80244BB8: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x80244BBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80244BC0: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_80244BC4:
    // 0x80244BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244BC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244BCC: jr          $ra
    // 0x80244BD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244BD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230ACC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230ACC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230AD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230AD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230AD8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230ADC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80230AE0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80230AE4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80230AE8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80230AEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230AF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230AF4: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x80230AF8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80230AFC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80230B00: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x80230B04: beq         $s2, $zero, L_80230CF0
    if (ctx->r18 == 0) {
        // 0x80230B08: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_80230CF0;
    }
    // 0x80230B08: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x80230B0C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80230B10: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230B14: beql        $v0, $zero, L_80230CE8
    if (ctx->r2 == 0) {
        // 0x80230B18: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80230CE8;
    }
    goto skip_0;
    // 0x80230B18: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80230B1C: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x80230B20: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x80230B24: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80230B28: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80230B2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230B30: bgtz        $v0, L_80230C28
    if (SIGNED(ctx->r2) > 0) {
        // 0x80230B34: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_80230C28;
    }
    // 0x80230B34: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x80230B38: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80230B3C: lhu         $a0, 0x348($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X348);
    // 0x80230B40: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80230B44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80230B48: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x80230B4C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80230B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230B54: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x80230B58: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80230B5C: andi        $a0, $a0, 0xFFF3
    ctx->r4 = ctx->r4 & 0XFFF3;
    // 0x80230B60: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230B64: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80230B68: sh          $a0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r4;
    // 0x80230B6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80230B70: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x80230B74: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80230B78: lbu         $s2, 0x19($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X19);
L_80230B7C:
    // 0x80230B7C: jal         0x8004F144
    // 0x80230B80: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230B80: nop

    after_0:
    // 0x80230B84: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80230B88: beq         $a1, $zero, L_80230C1C
    if (ctx->r5 == 0) {
        // 0x80230B8C: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80230C1C;
    }
    // 0x80230B8C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x80230B90: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80230B94: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x80230B98: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80230B9C: sb          $s4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r20;
    // 0x80230BA0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230BA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230BA8: lbu         $v0, 0x9EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9EC);
    // 0x80230BAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230BB0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80230BB4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80230BB8: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80230BBC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230BC0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230BC4: lbu         $v0, 0x9EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9EC);
    // 0x80230BC8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80230BCC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230BD0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80230BD4: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80230BD8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230BDC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230BE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80230BE4: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80230BE8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230BEC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230BF0: lbu         $v0, 0x9EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9EC);
    // 0x80230BF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230BF8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80230BFC: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x80230C00: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80230C04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230C08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230C10: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80230C14: bne         $v0, $zero, L_80230B7C
    if (ctx->r2 != 0) {
        // 0x80230C18: sh          $v1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r3;
            goto L_80230B7C;
    }
    // 0x80230C18: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
L_80230C1C:
    // 0x80230C1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230C20: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80230C24: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80230C28:
    // 0x80230C28: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80230C2C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80230C30: beq         $v0, $zero, L_80230CD4
    if (ctx->r2 == 0) {
        // 0x80230C34: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80230CD4;
    }
    // 0x80230C34: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80230C38: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x80230C3C: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x80230C40: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80230C44: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80230C48: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80230C4C: bne         $v1, $zero, L_80230C84
    if (ctx->r3 != 0) {
        // 0x80230C50: sh          $a0, 0xA($s3)
        MEM_H(0XA, ctx->r19) = ctx->r4;
            goto L_80230C84;
    }
    // 0x80230C50: sh          $a0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r4;
    // 0x80230C54: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80230C58: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230C5C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230C60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230C64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230C68: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230C6C: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x80230C70: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80230C74: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230C78: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230C7C: bnel        $v0, $zero, L_80230CDC
    if (ctx->r2 != 0) {
        // 0x80230C80: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_80230CDC;
    }
    goto skip_1;
    // 0x80230C80: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
L_80230C84:
    // 0x80230C84: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80230C88: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80230C8C: jal         0x8002A33C
    // 0x80230C90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80230C90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C98: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80230C9C: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x80230CA0: jal         0x8004FEA0
    // 0x80230CA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80230CA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80230CA8: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x80230CAC: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80230CB0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80230CB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230CB8: bne         $v0, $zero, L_80230CC4
    if (ctx->r2 != 0) {
        // 0x80230CBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230CC4;
    }
    // 0x80230CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230CC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80230CC4:
    // 0x80230CC4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80230CC8: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80230CCC: j           L_80230CDC
    // 0x80230CD0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_80230CDC;
    // 0x80230CD0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80230CD4:
    // 0x80230CD4: jal         0x8002A33C
    // 0x80230CD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80230CD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_80230CDC:
    // 0x80230CDC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80230CE0: j           L_80230CF0
    // 0x80230CE4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_80230CF0;
    // 0x80230CE4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_80230CE8:
    // 0x80230CE8: jal         0x8002A33C
    // 0x80230CEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80230CEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_80230CF0:
    // 0x80230CF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230CF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230CF8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80230CFC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80230D00: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80230D04: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230D08: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230D0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230D10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230D14: jr          $ra
    // 0x80230D18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230D18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80230D1C: nop

;}
RECOMP_FUNC void func_80243DD0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243DD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80243DD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80243DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243DDC: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80243DE0: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80243DE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80243DE8: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x80243DEC: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x80243DF0: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80243DF4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80243DF8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80243DFC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80243E00: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80243E04: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80243E08: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80243E0C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80243E10: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x80243E14: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x80243E18: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x80243E1C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x80243E20: beq         $v0, $zero, L_80243E5C
    if (ctx->r2 == 0) {
        // 0x80243E24: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_80243E5C;
    }
    // 0x80243E24: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80243E28: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243E2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243E30: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243E34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243E38: lhu         $v1, 0x2048($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2048);
    // 0x80243E3C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243E40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243E44: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80243E48: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243E50: lhu         $v0, 0x204A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X204A);
    // 0x80243E54: j           L_80243E8C
    // 0x80243E58: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80243E8C;
    // 0x80243E58: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80243E5C:
    // 0x80243E5C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243E60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243E64: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80243E68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80243E6C: lhu         $v1, 0x2030($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2030);
    // 0x80243E70: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80243E74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243E78: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80243E7C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243E80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243E84: lhu         $v0, 0x2032($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2032);
    // 0x80243E88: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80243E8C:
    // 0x80243E8C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80243E90: jal         0x8004F144
    // 0x80243E94: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80243E94: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x80243E98: beq         $v0, $zero, L_80243EA8
    if (ctx->r2 == 0) {
        // 0x80243E9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80243EA8;
    }
    // 0x80243E9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243EA0: jal         0x802444F0
    // 0x80243EA4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802444F0_ovl10(rdram, ctx);
        goto after_1;
    // 0x80243EA4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_80243EA8:
    // 0x80243EA8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80243EAC: jal         0x8004F4F8
    // 0x80243EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80243EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80243EB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80243EB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80243EBC: jr          $ra
    // 0x80243EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80243EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A1E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A1E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A1E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A1EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A1F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A1F4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A1F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A1FC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023A200: beq         $v1, $v0, L_8023A238
    if (ctx->r3 == ctx->r2) {
        // 0x8023A204: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023A238;
    }
    // 0x8023A204: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A208: beq         $v0, $zero, L_8023A280
    if (ctx->r2 == 0) {
        // 0x8023A20C: nop
    
            goto L_8023A280;
    }
    // 0x8023A20C: nop

    // 0x8023A210: bne         $v1, $zero, L_8023A280
    if (ctx->r3 != 0) {
        // 0x8023A214: nop
    
            goto L_8023A280;
    }
    // 0x8023A214: nop

    // 0x8023A218: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A21C: bgez        $v0, L_8023A280
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A220: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023A280;
    }
    // 0x8023A220: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023A224: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023A228: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023A22C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023A230: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A234: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8023A238:
    // 0x8023A238: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023A23C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8023A240: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023A244: addiu       $a1, $a1, 0x16F8
    ctx->r5 = ADD32(ctx->r5, 0X16F8);
    // 0x8023A248: jal         0x8004F820
    // 0x8023A24C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023A24C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023A250: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A254: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8023A258: beq         $v0, $zero, L_8023A274
    if (ctx->r2 == 0) {
        // 0x8023A25C: nop
    
            goto L_8023A274;
    }
    // 0x8023A25C: nop

    // 0x8023A260: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023A264: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A268: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023A26C: j           L_8023A280
    // 0x8023A270: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023A280;
    // 0x8023A270: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023A274:
    // 0x8023A274: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A27C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A280:
    // 0x8023A280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A288: jr          $ra
    // 0x8023A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232048_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232048: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023204C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80232050: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232054: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80232058: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8023205C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80232060: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80232064: jal         0x80233334
    // 0x80232068: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x80232068: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8023206C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232070: beq         $v0, $zero, L_802320A0
    if (ctx->r2 == 0) {
        // 0x80232074: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_802320A0;
    }
    // 0x80232074: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80232078: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023207C: bne         $v1, $v0, L_802321C8
    if (ctx->r3 != ctx->r2) {
        // 0x80232080: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802321C8;
    }
    // 0x80232080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232084: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232088: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023208C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80232090: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80232094: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80232098: j           L_802321CC
    // 0x8023209C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_802321CC;
    // 0x8023209C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_802320A0:
    // 0x802320A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802320A4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802320A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802320AC: jal         0x8004DA90
    // 0x802320B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802320B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802320B4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x802320B8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x802320BC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x802320C0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x802320C4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x802320C8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802320CC: beq         $v0, $zero, L_802320DC
    if (ctx->r2 == 0) {
        // 0x802320D0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_802320DC;
    }
    // 0x802320D0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x802320D4: j           L_802320EC
    // 0x802320D8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_802320EC;
    // 0x802320D8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_802320DC:
    // 0x802320DC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x802320E0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802320E4: beq         $v0, $zero, L_8023211C
    if (ctx->r2 == 0) {
        // 0x802320E8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8023211C;
    }
    // 0x802320E8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_802320EC:
    // 0x802320EC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802320F0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x802320F4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802320F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802320FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232104: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80232108: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8023210C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80232110: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80232114: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80232118: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8023211C:
    // 0x8023211C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80232120: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80232124: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80232128: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8023212C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80232130: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80232134: beq         $v0, $zero, L_80232148
    if (ctx->r2 == 0) {
        // 0x80232138: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80232148;
    }
    // 0x80232138: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8023213C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232140: j           L_8023215C
    // 0x80232144: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8023215C;
    // 0x80232144: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80232148:
    // 0x80232148: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8023214C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232150: beq         $v0, $zero, L_8023218C
    if (ctx->r2 == 0) {
        // 0x80232154: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8023218C;
    }
    // 0x80232154: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80232158: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8023215C:
    // 0x8023215C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80232160: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232164: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232168: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023216C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232170: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232174: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80232178: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8023217C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80232180: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80232184: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80232188: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8023218C:
    // 0x8023218C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80232190: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80232194: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80232198: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023219C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802321A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802321A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802321A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802321AC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802321B0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802321B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802321B8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802321BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802321C0: bne         $v0, $zero, L_802321CC
    if (ctx->r2 != 0) {
        // 0x802321C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802321CC;
    }
    // 0x802321C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802321C8:
    // 0x802321C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802321CC:
    // 0x802321CC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802321D0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802321D4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802321D8: jr          $ra
    // 0x802321DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802321DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802355A8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802355A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802355AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802355B0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802355B4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802355B8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802355BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802355C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802355C4: lbu         $a0, 0xA($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA);
    // 0x802355C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802355CC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802355D0: beq         $v1, $v0, L_80235690
    if (ctx->r3 == ctx->r2) {
        // 0x802355D4: addiu       $s3, $s2, 0x328
        ctx->r19 = ADD32(ctx->r18, 0X328);
            goto L_80235690;
    }
    // 0x802355D4: addiu       $s3, $s2, 0x328
    ctx->r19 = ADD32(ctx->r18, 0X328);
    // 0x802355D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802355DC: beql        $v0, $zero, L_802355F4
    if (ctx->r2 == 0) {
        // 0x802355E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802355F4;
    }
    goto skip_0;
    // 0x802355E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802355E4: beq         $v1, $zero, L_80235604
    if (ctx->r3 == 0) {
        // 0x802355E8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80235604;
    }
    // 0x802355E8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802355EC: j           L_80235714
    // 0x802355F0: nop

        goto L_80235714;
    // 0x802355F0: nop

L_802355F4:
    // 0x802355F4: beq         $v1, $v0, L_802356D8
    if (ctx->r3 == ctx->r2) {
        // 0x802355F8: nop
    
            goto L_802356D8;
    }
    // 0x802355F8: nop

    // 0x802355FC: j           L_80235714
    // 0x80235600: nop

        goto L_80235714;
    // 0x80235600: nop

L_80235604:
    // 0x80235604: lw          $a1, 0x35C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X35C);
    // 0x80235608: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8023560C: addiu       $s1, $s1, 0x34C0
    ctx->r17 = ADD32(ctx->r17, 0X34C0);
    // 0x80235610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235618: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023561C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235620: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    // 0x80235624: sh          $zero, 0x330($s2)
    MEM_H(0X330, ctx->r18) = 0;
    // 0x80235628: sh          $v0, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r2;
    // 0x8023562C: jal         0x8009A3B4
    // 0x80235630: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235630: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80235634: lw          $a1, 0x35C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X35C);
    // 0x80235638: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8023563C: addiu       $s0, $s0, 0x34C8
    ctx->r16 = ADD32(ctx->r16, 0X34C8);
    // 0x80235640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235644: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80235648: jal         0x8009A3B4
    // 0x8023564C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023564C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_1:
    // 0x80235650: lw          $v0, 0x35C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X35C);
    // 0x80235654: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235658: lh          $a2, 0x56($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X56);
    // 0x8023565C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235660: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80235664: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80235668: jal         0x8004DBA0
    // 0x8023566C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8023566C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80235670: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80235674: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80235678: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023567C: jal         0x8004F820
    // 0x80235680: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80235680: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80235684: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235688: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x8023568C: sh          $v0, 0x66($s2)
    MEM_H(0X66, ctx->r18) = ctx->r2;
L_80235690:
    // 0x80235690: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x80235694: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235698: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023569C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802356A0: bgez        $v0, L_802356C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802356A4: nop
    
            goto L_802356C4;
    }
    // 0x802356A4: nop

    // 0x802356A8: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802356AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802356B0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x802356B4: lw          $v0, 0x34($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X34);
    // 0x802356B8: lhu         $v0, 0x56($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X56);
    // 0x802356BC: j           L_802356D8
    // 0x802356C0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
        goto L_802356D8;
    // 0x802356C0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_802356C4:
    // 0x802356C4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x802356C8: lhu         $v1, 0x66($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X66);
    // 0x802356CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802356D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802356D4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_802356D8:
    // 0x802356D8: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x802356DC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x802356E0: bne         $v0, $zero, L_80235708
    if (ctx->r2 != 0) {
        // 0x802356E4: nop
    
            goto L_80235708;
    }
    // 0x802356E4: nop

    // 0x802356E8: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x802356EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802356F0: bne         $v0, $zero, L_80235708
    if (ctx->r2 != 0) {
        // 0x802356F4: nop
    
            goto L_80235708;
    }
    // 0x802356F4: nop

    // 0x802356F8: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802356FC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235700: beq         $v0, $zero, L_80235714
    if (ctx->r2 == 0) {
        // 0x80235704: nop
    
            goto L_80235714;
    }
    // 0x80235704: nop

L_80235708:
    // 0x80235708: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8023570C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235710: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80235714:
    // 0x80235714: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235718: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023571C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235720: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235724: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235728: jr          $ra
    // 0x8023572C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023572C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023E258_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E258: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E25C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E264: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023E268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023E26C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023E270: bne         $v0, $zero, L_8023E2B8
    if (ctx->r2 != 0) {
        // 0x8023E274: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023E2B8;
    }
    // 0x8023E274: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023E278: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E27C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E280: beq         $v1, $zero, L_8023E29C
    if (ctx->r3 == 0) {
        // 0x8023E284: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_8023E29C;
    }
    // 0x8023E284: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023E288: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023E28C: beq         $v1, $v0, L_8023E2A8
    if (ctx->r3 == ctx->r2) {
        // 0x8023E290: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_8023E2A8;
    }
    // 0x8023E290: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023E294: j           L_8023E2B0
    // 0x8023E298: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
        goto L_8023E2B0;
    // 0x8023E298: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
L_8023E29C:
    // 0x8023E29C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023E2A0: j           L_8023E408
    // 0x8023E2A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E408;
    // 0x8023E2A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E2A8:
    // 0x8023E2A8: j           L_8023E408
    // 0x8023E2AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E408;
    // 0x8023E2AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E2B0:
    // 0x8023E2B0: j           L_8023E408
    // 0x8023E2B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E408;
    // 0x8023E2B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E2B8:
    // 0x8023E2B8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E2BC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023E2C0: beq         $v1, $zero, L_8023E2D8
    if (ctx->r3 == 0) {
        // 0x8023E2C4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023E2D8;
    }
    // 0x8023E2C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023E2C8: beq         $v1, $v0, L_8023E3A0
    if (ctx->r3 == ctx->r2) {
        // 0x8023E2CC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023E3A0;
    }
    // 0x8023E2CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E2D0: j           L_8023E3BC
    // 0x8023E2D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023E3BC;
    // 0x8023E2D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023E2D8:
    // 0x8023E2D8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023E2DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E2E0: bne         $v1, $v0, L_8023E408
    if (ctx->r3 != ctx->r2) {
        // 0x8023E2E4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023E408;
    }
    // 0x8023E2E4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023E2E8: lhu         $v1, 0x442($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X442);
    // 0x8023E2EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E2F0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023E2F4: beq         $v1, $zero, L_8023E34C
    if (ctx->r3 == 0) {
        // 0x8023E2F8: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_8023E34C;
    }
    // 0x8023E2F8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023E2FC: lbu         $v1, 0x52A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X52A);
    // 0x8023E300: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E304: beq         $v1, $v0, L_8023E32C
    if (ctx->r3 == ctx->r2) {
        // 0x8023E308: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E32C;
    }
    // 0x8023E308: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E30C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E310: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E314: bne         $v0, $zero, L_8023E32C
    if (ctx->r2 != 0) {
        // 0x8023E318: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023E32C;
    }
    // 0x8023E318: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023E31C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023E320: sb          $zero, 0x528($s0)
    MEM_B(0X528, ctx->r16) = 0;
    // 0x8023E324: j           L_8023E338
    // 0x8023E328: sb          $v0, 0x529($s0)
    MEM_B(0X529, ctx->r16) = ctx->r2;
        goto L_8023E338;
    // 0x8023E328: sb          $v0, 0x529($s0)
    MEM_B(0X529, ctx->r16) = ctx->r2;
L_8023E32C:
    // 0x8023E32C: sb          $v0, 0xE8($s1)
    MEM_B(0XE8, ctx->r17) = ctx->r2;
    // 0x8023E330: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023E334: sb          $v0, 0xE9($s1)
    MEM_B(0XE9, ctx->r17) = ctx->r2;
L_8023E338:
    // 0x8023E338: lbu         $v0, 0xEA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XEA);
    // 0x8023E33C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E340: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E344: j           L_8023E408
    // 0x8023E348: sb          $v0, 0xEA($s1)
    MEM_B(0XEA, ctx->r17) = ctx->r2;
        goto L_8023E408;
    // 0x8023E348: sb          $v0, 0xEA($s1)
    MEM_B(0XEA, ctx->r17) = ctx->r2;
L_8023E34C:
    // 0x8023E34C: lbu         $v1, 0x52B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X52B);
    // 0x8023E350: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E354: beq         $v1, $v0, L_8023E380
    if (ctx->r3 == ctx->r2) {
        // 0x8023E358: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023E380;
    }
    // 0x8023E358: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E35C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E360: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E364: bne         $v0, $zero, L_8023E380
    if (ctx->r2 != 0) {
        // 0x8023E368: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023E380;
    }
    // 0x8023E368: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E36C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E370: sb          $v0, 0x528($s0)
    MEM_B(0X528, ctx->r16) = ctx->r2;
    // 0x8023E374: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023E378: j           L_8023E38C
    // 0x8023E37C: sb          $v0, 0x529($s0)
    MEM_B(0X529, ctx->r16) = ctx->r2;
        goto L_8023E38C;
    // 0x8023E37C: sb          $v0, 0x529($s0)
    MEM_B(0X529, ctx->r16) = ctx->r2;
L_8023E380:
    // 0x8023E380: sb          $v0, 0xE8($s1)
    MEM_B(0XE8, ctx->r17) = ctx->r2;
    // 0x8023E384: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023E388: sb          $v0, 0xE9($s1)
    MEM_B(0XE9, ctx->r17) = ctx->r2;
L_8023E38C:
    // 0x8023E38C: lbu         $v0, 0xEB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XEB);
    // 0x8023E390: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E394: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E398: j           L_8023E408
    // 0x8023E39C: sb          $v0, 0xEB($s1)
    MEM_B(0XEB, ctx->r17) = ctx->r2;
        goto L_8023E408;
    // 0x8023E39C: sb          $v0, 0xEB($s1)
    MEM_B(0XEB, ctx->r17) = ctx->r2;
L_8023E3A0:
    // 0x8023E3A0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023E3A4: bne         $v1, $v0, L_8023E408
    if (ctx->r3 != ctx->r2) {
        // 0x8023E3A8: nop
    
            goto L_8023E408;
    }
    // 0x8023E3A8: nop

    // 0x8023E3AC: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E3B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E3B4: j           L_8023E408
    // 0x8023E3B8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
        goto L_8023E408;
    // 0x8023E3B8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023E3BC:
    // 0x8023E3BC: lbu         $v1, 0xE8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE8);
    // 0x8023E3C0: beq         $v1, $v0, L_8023E3D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023E3C4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023E3D4;
    }
    // 0x8023E3C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E3C8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023E3CC: bne         $v1, $v0, L_8023E408
    if (ctx->r3 != ctx->r2) {
        // 0x8023E3D0: nop
    
            goto L_8023E408;
    }
    // 0x8023E3D0: nop

L_8023E3D4:
    // 0x8023E3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E3D8: jal         0x8023ED9C
    // 0x8023E3DC: sh          $zero, 0xE6($s1)
    MEM_H(0XE6, ctx->r17) = 0;
    func_8023ED9C_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023E3DC: sh          $zero, 0xE6($s1)
    MEM_H(0XE6, ctx->r17) = 0;
    after_0:
    // 0x8023E3E0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E3E4: lbu         $v0, 0xE9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE9);
    // 0x8023E3E8: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8023E3EC: bne         $v0, $zero, L_8023E3F8
    if (ctx->r2 != 0) {
        // 0x8023E3F0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023E3F8;
    }
    // 0x8023E3F0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023E3F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8023E3F8:
    // 0x8023E3F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E3FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023E400: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023E404: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8023E408:
    // 0x8023E408: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023E414: andi        $a2, $a2, 0x400
    ctx->r6 = ctx->r6 & 0X400;
    // 0x8023E418: sltu        $a2, $zero, $a2
    ctx->r6 = 0 < ctx->r6 ? 1 : 0;
    // 0x8023E41C: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8023E420: andi        $a2, $a2, 0x18
    ctx->r6 = ctx->r6 & 0X18;
    // 0x8023E424: jal         0x8023F448
    // 0x8023E428: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    func_8023F448_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023E428: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    after_1:
    // 0x8023E42C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023E430: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E434: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E438: jr          $ra
    // 0x8023E43C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023E43C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802286D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802286D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802286D8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802286DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802286E0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802286E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802286E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802286EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802286F0: lb          $v1, 0x2($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2);
    // 0x802286F4: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x802286F8: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x802286FC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80228700: beq         $v0, $zero, L_8022891C
    if (ctx->r2 == 0) {
        // 0x80228704: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022891C;
    }
    // 0x80228704: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228708: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022870C: addu        $at, $at, $v0
    gpr jr_addend_80228714 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228710: lw          $v0, 0x2BB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BB0);
    // 0x80228714: jr          $v0
    // 0x80228718: nop

    switch (jr_addend_80228714 >> 2) {
        case 0: goto L_8022871C; break;
        case 1: goto L_80228730; break;
        case 2: goto L_80228768; break;
        case 3: goto L_802287A0; break;
        case 4: goto L_802287D8; break;
        case 5: goto L_80228858; break;
        case 6: goto L_80228884; break;
        case 7: goto L_802288B8; break;
        case 8: goto L_802288DC; break;
        default: switch_error(__func__, 0x80228714, 0x80252BB0);
    }
    // 0x80228718: nop

L_8022871C:
    // 0x8022871C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228720: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80228724: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x80228728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022872C: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_80228730:
    // 0x80228730: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80228734: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228738: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x8022873C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228740: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x80228744: nop
    
            goto L_8022891C;
    }
    // 0x80228744: nop

    // 0x80228748: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022874C: lw          $v1, 0x5604($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5604);
    // 0x80228750: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80228754: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80228758: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x8022875C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228760: j           L_802288CC
    // 0x80228764: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_802288CC;
    // 0x80228764: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_80228768:
    // 0x80228768: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x8022876C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228770: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228778: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x8022877C: nop
    
            goto L_8022891C;
    }
    // 0x8022877C: nop

    // 0x80228780: jal         0x800600F8
    // 0x80228784: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80228784: nop

    after_0:
    // 0x80228788: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8022878C: jal         0x8022A350
    // 0x80228790: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8022A350_ovl10(rdram, ctx);
        goto after_1;
    // 0x80228790: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x80228794: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228798: j           L_802288D4
    // 0x8022879C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802288D4;
    // 0x8022879C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802287A0:
    // 0x802287A0: jal         0x8006033C
    // 0x802287A4: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802287A4: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_2:
    // 0x802287A8: beq         $v0, $zero, L_8022891C
    if (ctx->r2 == 0) {
        // 0x802287AC: nop
    
            goto L_8022891C;
    }
    // 0x802287AC: nop

    // 0x802287B0: jal         0x80060590
    // 0x802287B4: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x802287B4: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_3:
    // 0x802287B8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802287BC: lw          $v1, 0x5604($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5604);
    // 0x802287C0: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802287C4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802287C8: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802287CC: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x802287D0: j           L_802288CC
    // 0x802287D4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_802288CC;
    // 0x802287D4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_802287D8:
    // 0x802287D8: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x802287DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802287E0: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x802287E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287E8: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x802287EC: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_8022891C;
    }
    // 0x802287EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802287F0: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802287F4: lw          $s0, 0x55FC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55FC);
    // 0x802287F8: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x802287FC: lw          $s1, 0x5604($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5604);
    // 0x80228800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228804: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80228808: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022880C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228810: jal         0x8009A3B4
    // 0x80228814: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228814: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_4:
    // 0x80228818: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022881C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228820: jal         0x8009A3B4
    // 0x80228824: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228824: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80228828: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022882C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228830: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80228834: addiu       $v0, $v0, -0x18C
    ctx->r2 = ADD32(ctx->r2, -0X18C);
    // 0x80228838: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022883C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228840: jal         0x8004EC38
    // 0x80228844: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x80228844: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_6:
    // 0x80228848: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022884C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228850: j           L_802288CC
    // 0x80228854: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_802288CC;
    // 0x80228854: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_80228858:
    // 0x80228858: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x8022885C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228860: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228864: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228868: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x8022886C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022891C;
    }
    // 0x8022886C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228870: jal         0x800616FC
    // 0x80228874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80228874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80228878: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8022887C: j           L_802288D4
    // 0x80228880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802288D4;
    // 0x80228880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228884:
    // 0x80228884: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228888: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022888C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228890: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228894: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x80228898: nop
    
            goto L_8022891C;
    }
    // 0x80228898: nop

    // 0x8022889C: jal         0x800600F8
    // 0x802288A0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_8;
    // 0x802288A0: nop

    after_8:
    // 0x802288A4: jal         0x8006036C
    // 0x802288A8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x802288A8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_9:
    // 0x802288AC: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x802288B0: j           L_802288D4
    // 0x802288B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802288D4;
    // 0x802288B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802288B8:
    // 0x802288B8: jal         0x8006033C
    // 0x802288BC: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x802288BC: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_10:
    // 0x802288C0: beq         $v0, $zero, L_8022891C
    if (ctx->r2 == 0) {
        // 0x802288C4: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_8022891C;
    }
    // 0x802288C4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x802288C8: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
L_802288CC:
    // 0x802288CC: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x802288D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802288D4:
    // 0x802288D4: j           L_8022891C
    // 0x802288D8: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_8022891C;
    // 0x802288D8: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_802288DC:
    // 0x802288DC: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x802288E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802288E4: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x802288E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802288EC: bne         $v0, $zero, L_8022891C
    if (ctx->r2 != 0) {
        // 0x802288F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022891C;
    }
    // 0x802288F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802288F4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802288F8: lw          $v1, 0x55FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55FC);
    // 0x802288FC: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80228900: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228904: lw          $v1, 0x5604($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5604);
    // 0x80228908: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8022890C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80228910: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228914: jal         0x8022A398
    // 0x80228918: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    func_8022A398_ovl10(rdram, ctx);
        goto after_11;
    // 0x80228918: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    after_11:
L_8022891C:
    // 0x8022891C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228920: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228924: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228928: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022892C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228930: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228934: jr          $ra
    // 0x80228938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80247F80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247F80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80247F84: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80247F88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247F8C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80247F90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247F94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80247F98: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80247F9C: jal         0x80047284
    // 0x80247FA0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80247FA0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80247FA4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80247FA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247FAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247FB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247FB4: lw          $v0, 0x2300($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2300);
    // 0x80247FB8: jalr        $v0
    // 0x80247FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80247FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80247FC0: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80247FC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247FC8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80247FCC: jal         0x8009A3B4
    // 0x80247FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80247FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80247FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247FD8: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80247FDC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80247FE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247FE4: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80247FE8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80247FEC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80247FF0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80247FF4: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x80247FF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247FFC: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80248000: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80248004: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80248008: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024800C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80248010: jal         0x80051E18
    // 0x80248014: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80248014: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80248018: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024801C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80248020: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80248024: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80248028: jr          $ra
    // 0x8024802C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8024802C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227ACC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ACC: jr          $ra
    // 0x80227AD0: nop

    TRACE_RETURN()
    return;
    // 0x80227AD0: nop

;}
RECOMP_FUNC void func_8024CA14_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CA14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024CA18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024CA1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024CA20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024CA24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CA28: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CA2C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8024CA30: beq         $v0, $zero, L_8024CAE8
    if (ctx->r2 == 0) {
        // 0x8024CA34: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_8024CAE8;
    }
    // 0x8024CA34: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8024CA38: bne         $v0, $zero, L_8024CACC
    if (ctx->r2 != 0) {
        // 0x8024CA3C: nop
    
            goto L_8024CACC;
    }
    // 0x8024CA3C: nop

    // 0x8024CA40: jal         0x8004F144
    // 0x8024CA44: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024CA44: nop

    after_0:
    // 0x8024CA48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024CA4C: beq         $s0, $zero, L_8024CACC
    if (ctx->r16 == 0) {
        // 0x8024CA50: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024CACC;
    }
    // 0x8024CA50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024CA54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024CA58: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024CA5C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024CA60: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024CA64: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8024CA68: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CA70: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024CA74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024CA78: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8024CA7C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8024CA80: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8024CA84: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8024CA88: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024CA8C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8024CA90: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x8024CA94: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8024CA98: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024CA9C: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x8024CAA0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x8024CAA4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8024CAA8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024CAAC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8024CAB0: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8024CAB4: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8024CAB8: jal         0x800A3450
    // 0x8024CABC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CABC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x8024CAC0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CAC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024CAC8: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024CACC:
    // 0x8024CACC: jal         0x800A3450
    // 0x8024CAD0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CAD0: nop

    after_2:
    // 0x8024CAD4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CAD8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CADC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CAE0: j           L_8024CAF0
    // 0x8024CAE4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_8024CAF0;
    // 0x8024CAE4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8024CAE8:
    // 0x8024CAE8: jal         0x8004F5C4
    // 0x8024CAEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x8024CAEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_8024CAF0:
    // 0x8024CAF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024CAF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024CAF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CAFC: jr          $ra
    // 0x8024CB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024CB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B590_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B590: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x8024B594: lb          $v1, 0xF($t5)
    ctx->r3 = MEM_B(ctx->r13, 0XF);
    // 0x8024B598: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8024B59C: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x8024B5A0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024B5A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B5A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B5AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B5B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B5B4: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8024B5B8: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8024B5BC: lw          $t1, 0x26A8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26A8);
    // 0x8024B5C0: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8024B5C4: addiu       $t2, $t2, 0x49B0
    ctx->r10 = ADD32(ctx->r10, 0X49B0);
    // 0x8024B5C8: addiu       $t4, $t5, 0x14
    ctx->r12 = ADD32(ctx->r13, 0X14);
    // 0x8024B5CC: addiu       $t0, $t1, 0x2
    ctx->r8 = ADD32(ctx->r9, 0X2);
L_8024B5D0:
    // 0x8024B5D0: lh          $a1, 0x0($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X0);
    // 0x8024B5D4: beq         $a1, $zero, L_8024B6CC
    if (ctx->r5 == 0) {
        // 0x8024B5D8: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_8024B6CC;
    }
    // 0x8024B5D8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8024B5DC: lbu         $v0, 0x2($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X2);
    // 0x8024B5E0: lbu         $v1, 0x3($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X3);
    // 0x8024B5E4: bne         $v1, $zero, L_8024B638
    if (ctx->r3 != 0) {
        // 0x8024B5E8: addiu       $a3, $v0, 0x1
        ctx->r7 = ADD32(ctx->r2, 0X1);
            goto L_8024B638;
    }
    // 0x8024B5E8: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x8024B5EC: lh          $v1, 0x18($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X18);
    // 0x8024B5F0: lh          $v0, 0x30($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X30);
    // 0x8024B5F4: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x8024B5F8: sll         $a0, $a3, 6
    ctx->r4 = S32(ctx->r7 << 6);
    // 0x8024B5FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B600: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8024B604: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x8024B608: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024B60C: bnel        $v0, $zero, L_8024B6AC
    if (ctx->r2 != 0) {
        // 0x8024B610: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_8024B6AC;
    }
    goto skip_0;
    // 0x8024B610: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_0:
    // 0x8024B614: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8024B618: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024B61C: bnel        $v0, $zero, L_8024B6AC
    if (ctx->r2 != 0) {
        // 0x8024B620: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_8024B6AC;
    }
    goto skip_1;
    // 0x8024B620: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_1:
    // 0x8024B624: lhu         $v1, 0x2C($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X2C);
    // 0x8024B628: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x8024B62C: subu        $v1, $a2, $v1
    ctx->r3 = SUB32(ctx->r6, ctx->r3);
    // 0x8024B630: j           L_8024B680
    // 0x8024B634: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
        goto L_8024B680;
    // 0x8024B634: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
L_8024B638:
    // 0x8024B638: lh          $v0, 0x14($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X14);
    // 0x8024B63C: lh          $v1, 0x2C($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X2C);
    // 0x8024B640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B644: sra         $a0, $v0, 1
    ctx->r4 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8024B648: sll         $v1, $a3, 6
    ctx->r3 = S32(ctx->r7 << 6);
    // 0x8024B64C: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x8024B650: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024B654: bnel        $v0, $zero, L_8024B6AC
    if (ctx->r2 != 0) {
        // 0x8024B658: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_8024B6AC;
    }
    goto skip_2;
    // 0x8024B658: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_2:
    // 0x8024B65C: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8024B660: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024B664: bnel        $v0, $zero, L_8024B6AC
    if (ctx->r2 != 0) {
        // 0x8024B668: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_8024B6AC;
    }
    goto skip_3;
    // 0x8024B668: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_3:
    // 0x8024B66C: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8024B670: lhu         $v1, 0x30($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X30);
    // 0x8024B674: lhu         $a0, 0x4($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X4);
    // 0x8024B678: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8024B67C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_8024B680:
    // 0x8024B680: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024B684: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024B688: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024B68C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024B690: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024B694: mflo        $v0
    ctx->r2 = lo;
    // 0x8024B698: bltz        $v0, L_8024B6B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024B69C: nop
    
            goto L_8024B6B8;
    }
    // 0x8024B69C: nop

    // 0x8024B6A0: beq         $v1, $zero, L_8024B6B8
    if (ctx->r3 == 0) {
        // 0x8024B6A4: nop
    
            goto L_8024B6B8;
    }
    // 0x8024B6A4: nop

    // 0x8024B6A8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_8024B6AC:
    // 0x8024B6AC: addiu       $t0, $t0, 0x6
    ctx->r8 = ADD32(ctx->r8, 0X6);
    // 0x8024B6B0: j           L_8024B5D0
    // 0x8024B6B4: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
        goto L_8024B5D0;
    // 0x8024B6B4: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
L_8024B6B8:
    // 0x8024B6B8: lb          $v0, 0xC($t5)
    ctx->r2 = MEM_B(ctx->r13, 0XC);
    // 0x8024B6BC: beq         $t3, $v0, L_8024B6D4
    if (ctx->r11 == ctx->r2) {
        // 0x8024B6C0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024B6D4;
    }
    // 0x8024B6C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024B6C4: j           L_8024B6F0
    // 0x8024B6C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8024B6F0;
    // 0x8024B6C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024B6CC:
    // 0x8024B6CC: j           L_8024B6F0
    // 0x8024B6D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8024B6F0;
    // 0x8024B6D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8024B6D4:
    // 0x8024B6D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8024B6D8: sb          $v0, 0xC($t5)
    MEM_B(0XC, ctx->r13) = ctx->r2;
    // 0x8024B6DC: lh          $v0, 0x6($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X6);
    // 0x8024B6E0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8024B6E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8024B6E8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024B6EC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8024B6F0:
    // 0x8024B6F0: jr          $ra
    // 0x8024B6F4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8024B6F4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8023D72C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D72C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D730: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D734: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D738: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023D73C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D740: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023D744: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023D748: beq         $v0, $zero, L_8023DA08
    if (ctx->r2 == 0) {
        // 0x8023D74C: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023DA08;
    }
    // 0x8023D74C: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023D750: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023D754: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023D758: addu        $at, $at, $v0
    gpr jr_addend_8023D760 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D75C: lw          $v0, 0x2FC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2FC0);
    // 0x8023D760: jr          $v0
    // 0x8023D764: nop

    switch (jr_addend_8023D760 >> 2) {
        case 0: goto L_8023DA08; break;
        case 1: goto L_8023D768; break;
        case 2: goto L_8023D7A0; break;
        case 3: goto L_8023D814; break;
        case 4: goto L_8023D890; break;
        case 5: goto L_8023D8F8; break;
        case 6: goto L_8023D994; break;
        case 7: goto L_8023D9F8; break;
        default: switch_error(__func__, 0x8023D760, 0x80252FC0);
    }
    // 0x8023D764: nop

L_8023D768:
    // 0x8023D768: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023D76C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023D770: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023D774: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023D778: bne         $v0, $v1, L_8023DA08
    if (ctx->r2 != ctx->r3) {
        // 0x8023D77C: addiu       $v1, $zero, 0x78
        ctx->r3 = ADD32(0, 0X78);
            goto L_8023DA08;
    }
    // 0x8023D77C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8023D780: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D784: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8023D788: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8023D78C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023D790: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023D794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D798: j           L_8023DA08
    // 0x8023D79C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023DA08;
    // 0x8023D79C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023D7A0:
    // 0x8023D7A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D7A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023D7A8: beq         $v0, $zero, L_8023D7B8
    if (ctx->r2 == 0) {
        // 0x8023D7AC: nop
    
            goto L_8023D7B8;
    }
    // 0x8023D7AC: nop

    // 0x8023D7B0: jal         0x8023F2F4
    // 0x8023D7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023D7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_8023D7B8:
    // 0x8023D7B8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023D7BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023D7C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D7C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023D7C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D7CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D7D0: bne         $v0, $v1, L_8023D7E4
    if (ctx->r2 != ctx->r3) {
        // 0x8023D7D4: nop
    
            goto L_8023D7E4;
    }
    // 0x8023D7D4: nop

    // 0x8023D7D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D7DC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8023D7E0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023D7E4:
    // 0x8023D7E4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023D7E8: bne         $v0, $zero, L_8023D800
    if (ctx->r2 != 0) {
        // 0x8023D7EC: addiu       $v1, $zero, -0x1000
        ctx->r3 = ADD32(0, -0X1000);
            goto L_8023D800;
    }
    // 0x8023D7EC: addiu       $v1, $zero, -0x1000
    ctx->r3 = ADD32(0, -0X1000);
    // 0x8023D7F0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023D7F4: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8023D7F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D7FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023D800:
    // 0x8023D800: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023D804: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8023D808: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023D80C: j           L_8023DA08
    // 0x8023D810: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023DA08;
    // 0x8023D810: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023D814:
    // 0x8023D814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D818: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D81C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8023D820: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D824: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8023D828: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023D82C: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x8023D830: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x8023D834: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023D838: jal         0x8004DA90
    // 0x8023D83C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023D83C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023D840: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023D844: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023D848: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D84C: beq         $v1, $zero, L_8023DA08
    if (ctx->r3 == 0) {
        // 0x8023D850: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8023DA08;
    }
    // 0x8023D850: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023D854: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023D858: addiu       $v1, $zero, 0x2108
    ctx->r3 = ADD32(0, 0X2108);
    // 0x8023D85C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_8023D860:
    // 0x8023D860: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8023D864: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023D868: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x8023D86C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023D870: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023D874: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D878: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D87C: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8023D880: bne         $v0, $zero, L_8023D860
    if (ctx->r2 != 0) {
        // 0x8023D884: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8023D860;
    }
    // 0x8023D884: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023D888: j           L_8023DA08
    // 0x8023D88C: nop

        goto L_8023DA08;
    // 0x8023D88C: nop

L_8023D890:
    // 0x8023D890: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D894: andi        $v0, $v0, 0xFE7F
    ctx->r2 = ctx->r2 & 0XFE7F;
    // 0x8023D898: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8023D89C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023D8A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023D8A4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023D8A8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023D8AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023D8B0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023D8B4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8023D8B8: addiu       $v0, $zero, 0x2A00
    ctx->r2 = ADD32(0, 0X2A00);
    // 0x8023D8BC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023D8C0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023D8C4: addiu       $v0, $zero, -0x1400
    ctx->r2 = ADD32(0, -0X1400);
    // 0x8023D8C8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023D8CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023D8D0: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x8023D8D4: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023D8D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023D8DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D8E0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023D8E4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023D8E8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023D8EC: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8023D8F0: j           L_8023DA08
    // 0x8023D8F4: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
        goto L_8023DA08;
    // 0x8023D8F4: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_8023D8F8:
    // 0x8023D8F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D8FC: ori         $v0, $v0, 0x180
    ctx->r2 = ctx->r2 | 0X180;
    // 0x8023D900: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023D904: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023D908: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023D90C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023D910: addiu       $v0, $zero, -0x2800
    ctx->r2 = ADD32(0, -0X2800);
    // 0x8023D914: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023D918: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8023D91C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023D920: addiu       $v0, $zero, 0x2100
    ctx->r2 = ADD32(0, 0X2100);
    // 0x8023D924: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023D928: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023D92C: addiu       $a3, $zero, 0x2108
    ctx->r7 = ADD32(0, 0X2108);
    // 0x8023D930: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023D934: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023D938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D93C: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x8023D940: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023D944: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023D948: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D94C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023D950: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023D954: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023D958: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8023D95C: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8023D960: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_8023D964:
    // 0x8023D964: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8023D968: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023D96C: sh          $a3, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r7;
    // 0x8023D970: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023D974: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023D978: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D97C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D980: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8023D984: bne         $v0, $zero, L_8023D964
    if (ctx->r2 != 0) {
        // 0x8023D988: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8023D964;
    }
    // 0x8023D988: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023D98C: j           L_8023DA08
    // 0x8023D990: nop

        goto L_8023DA08;
    // 0x8023D990: nop

L_8023D994:
    // 0x8023D994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D998: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023D99C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D9A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D9A4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8023D9A8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8023D9AC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023D9B0: jal         0x8004DA90
    // 0x8023D9B4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023D9B4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023D9B8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023D9BC: bltz        $v0, L_8023D9EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023D9C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023D9EC;
    }
    // 0x8023D9C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D9C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023D9C8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023D9CC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023D9D0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023D9D4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023D9D8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023D9DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023D9E0: jal         0x8023F2F4
    // 0x8023D9E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_3;
    // 0x8023D9E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_3:
    // 0x8023D9E8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
L_8023D9EC:
    // 0x8023D9EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D9F0: j           L_8023DA08
    // 0x8023D9F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8023DA08;
    // 0x8023D9F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8023D9F8:
    // 0x8023D9F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023D9FC: andi        $v0, $v0, 0xFE7F
    ctx->r2 = ctx->r2 & 0XFE7F;
    // 0x8023DA00: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023DA04: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023DA08:
    // 0x8023DA08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023DA0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023DA10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023DA14: jr          $ra
    // 0x8023DA18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023DA18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B704_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B708: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B70C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B714: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B718: bne         $v0, $zero, L_8022B794
    if (ctx->r2 != 0) {
        // 0x8022B71C: nop
    
            goto L_8022B794;
    }
    // 0x8022B71C: nop

    // 0x8022B720: jal         0x8022BE40
    // 0x8022B724: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B724: nop

    after_0:
    // 0x8022B728: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B72C: bne         $v0, $zero, L_8022B75C
    if (ctx->r2 != 0) {
        // 0x8022B730: nop
    
            goto L_8022B75C;
    }
    // 0x8022B730: nop

    // 0x8022B734: jal         0x80229F50
    // 0x8022B738: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B738: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x8022B73C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B740: jal         0x8003E87C
    // 0x8022B744: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B744: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B748: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B74C: bne         $v0, $v1, L_8022B75C
    if (ctx->r2 != ctx->r3) {
        // 0x8022B750: nop
    
            goto L_8022B75C;
    }
    // 0x8022B750: nop

    // 0x8022B754: jal         0x8022A170
    // 0x8022B758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B758: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_8022B75C:
    // 0x8022B75C: jal         0x8006033C
    // 0x8022B760: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022B760: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_4:
    // 0x8022B764: beq         $v0, $zero, L_8022B790
    if (ctx->r2 == 0) {
        // 0x8022B768: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B790;
    }
    // 0x8022B768: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B76C: jal         0x8006033C
    // 0x8022B770: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022B770: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_5:
    // 0x8022B774: bne         $v0, $zero, L_8022B790
    if (ctx->r2 != 0) {
        // 0x8022B778: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B790;
    }
    // 0x8022B778: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B77C: jal         0x8022A170
    // 0x8022B780: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022A170_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022B780: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x8022B784: jal         0x8022A170
    // 0x8022B788: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x8022B788: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_7:
    // 0x8022B78C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B790:
    // 0x8022B790: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B794:
    // 0x8022B794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B798: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B79C: jr          $ra
    // 0x8022B7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023000C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023000C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230010: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230014: jal         0x8004F418
    // 0x80230018: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80230018: nop

    after_0:
    // 0x8023001C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230020: jr          $ra
    // 0x80230024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D710_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D714: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023D718: jal         0x8004F488
    // 0x8023D71C: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023D71C: nop

    after_0:
    // 0x8023D720: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023D724: jr          $ra
    // 0x8023D728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228008_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022800C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228014: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228018: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022801C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80228020: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228024: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228028: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022802C: beq         $v0, $zero, L_80228284
    if (ctx->r2 == 0) {
        // 0x80228030: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228284;
    }
    // 0x80228030: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228034: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228038: addu        $at, $at, $v0
    gpr jr_addend_80228040 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022803C: lw          $v0, 0x2B58($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B58);
    // 0x80228040: jr          $v0
    // 0x80228044: nop

    switch (jr_addend_80228040 >> 2) {
        case 0: goto L_80228048; break;
        case 1: goto L_802280D4; break;
        case 2: goto L_802280F8; break;
        case 3: goto L_80228170; break;
        case 4: goto L_80228194; break;
        case 5: goto L_802281BC; break;
        case 6: goto L_80228248; break;
        case 7: goto L_80228260; break;
        default: switch_error(__func__, 0x80228040, 0x80252B58);
    }
    // 0x80228044: nop

L_80228048:
    // 0x80228048: jal         0x8006FF84
    // 0x8022804C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022804C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80228050: beq         $v0, $zero, L_80228284
    if (ctx->r2 == 0) {
        // 0x80228054: nop
    
            goto L_80228284;
    }
    // 0x80228054: nop

    // 0x80228058: jal         0x80060170
    // 0x8022805C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x8022805C: nop

    after_1:
    // 0x80228060: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228064: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228068: jal         0x8005F6B4
    // 0x8022806C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x8022806C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80228070: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80228074: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228078: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x8022807C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80228080: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80228084: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228088: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022808C: jal         0x80229F50
    // 0x80228090: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_80229F50_ovl10(rdram, ctx);
        goto after_3;
    // 0x80228090: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_3:
    // 0x80228094: jal         0x8022A3B8
    // 0x80228098: nop

    func_8022A3B8_ovl10(rdram, ctx);
        goto after_4;
    // 0x80228098: nop

    after_4:
    // 0x8022809C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802280A0: jal         0x8022A350
    // 0x802280A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022A350_ovl10(rdram, ctx);
        goto after_5;
    // 0x802280A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x802280A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802280AC: jal         0x8022A350
    // 0x802280B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8022A350_ovl10(rdram, ctx);
        goto after_6;
    // 0x802280B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x802280B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802280B8: jal         0x8022A350
    // 0x802280BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8022A350_ovl10(rdram, ctx);
        goto after_7;
    // 0x802280BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x802280C0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802280C4: jal         0x8022A350
    // 0x802280C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8022A350_ovl10(rdram, ctx);
        goto after_8;
    // 0x802280C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_8:
    // 0x802280CC: j           L_80228250
    // 0x802280D0: nop

        goto L_80228250;
    // 0x802280D0: nop

L_802280D4:
    // 0x802280D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802280D8: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x802280DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802280E0: bne         $v1, $v0, L_80228284
    if (ctx->r3 != ctx->r2) {
        // 0x802280E4: addiu       $a0, $zero, 0x60C
        ctx->r4 = ADD32(0, 0X60C);
            goto L_80228284;
    }
    // 0x802280E4: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x802280E8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802280EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280F0: j           L_8022827C
    // 0x802280F4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8022827C;
    // 0x802280F4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802280F8:
    // 0x802280F8: jal         0x8006033C
    // 0x802280FC: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x802280FC: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_9:
    // 0x80228100: beq         $v0, $zero, L_80228284
    if (ctx->r2 == 0) {
        // 0x80228104: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80228284;
    }
    // 0x80228104: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80228108: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022810C: jal         0x8002A2F8
    // 0x80228110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80228110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80228114: jal         0x8022A398
    // 0x80228118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A398_ovl10(rdram, ctx);
        goto after_11;
    // 0x80228118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
    // 0x8022811C: jal         0x8022A398
    // 0x80228120: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A398_ovl10(rdram, ctx);
        goto after_12;
    // 0x80228120: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x80228124: jal         0x8022A398
    // 0x80228128: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022A398_ovl10(rdram, ctx);
        goto after_13;
    // 0x80228128: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x8022812C: jal         0x8022A398
    // 0x80228130: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A398_ovl10(rdram, ctx);
        goto after_14;
    // 0x80228130: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x80228134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228138: jal         0x8022A350
    // 0x8022813C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022A350_ovl10(rdram, ctx);
        goto after_15;
    // 0x8022813C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x80228140: jal         0x80060590
    // 0x80228144: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_80060590_3B990(rdram, ctx);
        goto after_16;
    // 0x80228144: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_16:
    // 0x80228148: jal         0x8022A04C
    // 0x8022814C: nop

    func_8022A04C_ovl10(rdram, ctx);
        goto after_17;
    // 0x8022814C: nop

    after_17:
    // 0x80228150: jal         0x80229F50
    // 0x80228154: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80229F50_ovl10(rdram, ctx);
        goto after_18;
    // 0x80228154: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_18:
    // 0x80228158: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022815C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228160: jal         0x800600F8
    // 0x80228164: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_19;
    // 0x80228164: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_19:
    // 0x80228168: j           L_80228284
    // 0x8022816C: nop

        goto L_80228284;
    // 0x8022816C: nop

L_80228170:
    // 0x80228170: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80228174: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80228178: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022817C: bne         $v1, $v0, L_80228284
    if (ctx->r3 != ctx->r2) {
        // 0x80228180: nop
    
            goto L_80228284;
    }
    // 0x80228180: nop

    // 0x80228184: jal         0x8006036C
    // 0x80228188: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_20;
    // 0x80228188: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_20:
    // 0x8022818C: j           L_80228250
    // 0x80228190: nop

        goto L_80228250;
    // 0x80228190: nop

L_80228194:
    // 0x80228194: jal         0x8006033C
    // 0x80228198: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_21;
    // 0x80228198: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_21:
    // 0x8022819C: beq         $v0, $zero, L_80228284
    if (ctx->r2 == 0) {
        // 0x802281A0: nop
    
            goto L_80228284;
    }
    // 0x802281A0: nop

    // 0x802281A4: jal         0x80060590
    // 0x802281A8: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_80060590_3B990(rdram, ctx);
        goto after_22;
    // 0x802281A8: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_22:
    // 0x802281AC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802281B0: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x802281B4: j           L_80228254
    // 0x802281B8: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_80228254;
    // 0x802281B8: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_802281BC:
    // 0x802281BC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802281C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802281C4: bne         $v0, $zero, L_80228284
    if (ctx->r2 != 0) {
        // 0x802281C8: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80228284;
    }
    // 0x802281C8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802281CC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802281D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802281D4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x802281D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802281DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281E0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x802281E4: jal         0x8022A260
    // 0x802281E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022A260_ovl10(rdram, ctx);
        goto after_23;
    // 0x802281E8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_23:
    // 0x802281EC: jal         0x8022A260
    // 0x802281F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022A260_ovl10(rdram, ctx);
        goto after_24;
    // 0x802281F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_24:
    // 0x802281F4: jal         0x8022A260
    // 0x802281F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022A260_ovl10(rdram, ctx);
        goto after_25;
    // 0x802281F8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_25:
    // 0x802281FC: jal         0x8022A04C
    // 0x80228200: nop

    func_8022A04C_ovl10(rdram, ctx);
        goto after_26;
    // 0x80228200: nop

    after_26:
    // 0x80228204: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80228208: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x8022820C: lui         $v0, 0x3F8
    ctx->r2 = S32(0X3F8 << 16);
    // 0x80228210: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80228214: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228218: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x8022821C: lui         $v0, 0x1DA3
    ctx->r2 = S32(0X1DA3 << 16);
    // 0x80228220: jal         0x8004DD04
    // 0x80228224: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_27;
    // 0x80228224: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    after_27:
    // 0x80228228: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022822C: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80228230: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80228234: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80228238: jal         0x8022A3B8
    // 0x8022823C: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    func_8022A3B8_ovl10(rdram, ctx);
        goto after_28;
    // 0x8022823C: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    after_28:
    // 0x80228240: j           L_80228284
    // 0x80228244: nop

        goto L_80228284;
    // 0x80228244: nop

L_80228248:
    // 0x80228248: jal         0x80229F50
    // 0x8022824C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80229F50_ovl10(rdram, ctx);
        goto after_29;
    // 0x8022824C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_29:
L_80228250:
    // 0x80228250: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_80228254:
    // 0x80228254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228258: j           L_80228284
    // 0x8022825C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80228284;
    // 0x8022825C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80228260:
    // 0x80228260: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228264: jal         0x800616FC
    // 0x80228268: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_30;
    // 0x80228268: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_30:
    // 0x8022826C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80228270: jal         0x80070050
    // 0x80228274: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_31;
    // 0x80228274: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_31:
    // 0x80228278: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_8022827C:
    // 0x8022827C: jal         0x8006036C
    // 0x80228280: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_32;
    // 0x80228280: nop

    after_32:
L_80228284:
    // 0x80228284: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80228288: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022828C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80228290: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228294: beq         $v1, $zero, L_802282B8
    if (ctx->r3 == 0) {
        // 0x80228298: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802282B8;
    }
    // 0x80228298: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022829C: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x802282A0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802282A4: beq         $v1, $v0, L_802282B8
    if (ctx->r3 == ctx->r2) {
        // 0x802282A8: nop
    
            goto L_802282B8;
    }
    // 0x802282A8: nop

    // 0x802282AC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x802282B0: jalr        $v0
    // 0x802282B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_33;
    // 0x802282B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
L_802282B8:
    // 0x802282B8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802282BC: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x802282C0: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x802282C4: beq         $v0, $zero, L_8022831C
    if (ctx->r2 == 0) {
        // 0x802282C8: nop
    
            goto L_8022831C;
    }
    // 0x802282C8: nop

    // 0x802282CC: jal         0x8006072C
    // 0x802282D0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_34;
    // 0x802282D0: nop

    after_34:
    // 0x802282D4: beq         $v0, $zero, L_8022831C
    if (ctx->r2 == 0) {
        // 0x802282D8: nop
    
            goto L_8022831C;
    }
    // 0x802282D8: nop

    // 0x802282DC: jal         0x80060590
    // 0x802282E0: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_80060590_3B990(rdram, ctx);
        goto after_35;
    // 0x802282E0: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_35:
    // 0x802282E4: jal         0x80061724
    // 0x802282E8: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_36;
    // 0x802282E8: nop

    after_36:
    // 0x802282EC: jal         0x80061090
    // 0x802282F0: nop

    func_80061090_3C490(rdram, ctx);
        goto after_37;
    // 0x802282F0: nop

    after_37:
    // 0x802282F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802282F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802282FC: jal         0x80036B00
    // 0x80228300: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_38;
    // 0x80228300: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_38:
    // 0x80228304: jal         0x8002A488
    // 0x80228308: nop

    func_8002A488_5888(rdram, ctx);
        goto after_39;
    // 0x80228308: nop

    after_39:
    // 0x8022830C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228310: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80228314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228318: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8022831C:
    // 0x8022831C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228320: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228328: jr          $ra
    // 0x8022832C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022832C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248F1C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248F20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248F24: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80248F28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248F2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248F34: lw          $v0, 0x2358($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2358);
    // 0x80248F38: jalr        $v0
    // 0x80248F3C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80248F3C: nop

    after_0:
    // 0x80248F40: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248F44: jr          $ra
    // 0x80248F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247D40_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247D44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80247D48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80247D4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247D50: jal         0x80047284
    // 0x80247D54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80247D54: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80247D58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80247D5C: jr          $ra
    // 0x80247D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80247D64: nop

    // 0x80247D68: nop

    // 0x80247D6C: nop

;}
RECOMP_FUNC void func_8024C974_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C978: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C97C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C984: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024C988: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C98C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C990: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C994: lw          $v0, 0x275C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X275C);
    // 0x8024C998: jalr        $v0
    // 0x8024C99C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024C99C: nop

    after_0:
    // 0x8024C9A0: jal         0x80069838
    // 0x8024C9A4: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    func_80069838_44C38(rdram, ctx);
        goto after_1;
    // 0x8024C9A4: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    after_1:
    // 0x8024C9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C9B0: jr          $ra
    // 0x8024C9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C9B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024C9B8: nop

    // 0x8024C9BC: nop

;}
RECOMP_FUNC void func_8022688C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022688C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226890: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80226894: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80226898: bne         $v1, $v0, L_802268A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022689C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802268A4;
    }
    // 0x8022689C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802268A0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802268A4:
    // 0x802268A4: jr          $ra
    // 0x802268A8: nop

    TRACE_RETURN()
    return;
    // 0x802268A8: nop

;}
RECOMP_FUNC void func_8022B658_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B65C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B660: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B668: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B66C: bne         $v0, $zero, L_8022B6B8
    if (ctx->r2 != 0) {
        // 0x8022B670: nop
    
            goto L_8022B6B8;
    }
    // 0x8022B670: nop

    // 0x8022B674: jal         0x8022BE40
    // 0x8022B678: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B678: nop

    after_0:
    // 0x8022B67C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B680: bne         $v0, $zero, L_8022B6B4
    if (ctx->r2 != 0) {
        // 0x8022B684: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B6B4;
    }
    // 0x8022B684: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B688: jal         0x80229F50
    // 0x8022B68C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B68C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_1:
    // 0x8022B690: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B694: jal         0x8003E87C
    // 0x8022B698: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B698: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B69C: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B6A0: bne         $v0, $v1, L_8022B6B4
    if (ctx->r2 != ctx->r3) {
        // 0x8022B6A4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B6B4;
    }
    // 0x8022B6A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B6A8: jal         0x8022A170
    // 0x8022B6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B6AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022B6B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B6B4:
    // 0x8022B6B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B6B8:
    // 0x8022B6B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6C0: jr          $ra
    // 0x8022B6C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B6C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A5C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226A60: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226A64: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80226A68: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80226A6C: bne         $v0, $zero, L_80226A90
    if (ctx->r2 != 0) {
        // 0x80226A70: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80226A90;
    }
    // 0x80226A70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80226A74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226A78: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226A7C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226A80: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226A84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A88: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80226A8C: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
L_80226A90:
    // 0x80226A90: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x80226A94: bne         $v0, $zero, L_80226AE0
    if (ctx->r2 != 0) {
        // 0x80226A98: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226AE0;
    }
    // 0x80226A98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226A9C: lh          $v1, 0x16($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X16);
    // 0x80226AA0: bne         $v1, $v0, L_80226B34
    if (ctx->r3 != ctx->r2) {
        // 0x80226AA4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226B34;
    }
    // 0x80226AA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226AA8: addiu       $v0, $zero, -0x160
    ctx->r2 = ADD32(0, -0X160);
    // 0x80226AAC: sb          $v1, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r3;
    // 0x80226AB0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226AB4: sh          $v0, 0x3330($at)
    MEM_H(0X3330, ctx->r1) = ctx->r2;
    // 0x80226AB8: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80226ABC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AC0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80226AC4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226AC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226ACC: sb          $v1, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = ctx->r3;
    // 0x80226AD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226AD4: sb          $v1, 0x3378($at)
    MEM_B(0X3378, ctx->r1) = ctx->r3;
    // 0x80226AD8: j           L_80226B34
    // 0x80226ADC: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
        goto L_80226B34;
    // 0x80226ADC: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80226AE0:
    // 0x80226AE0: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226AE4: beq         $v0, $zero, L_80226AF4
    if (ctx->r2 == 0) {
        // 0x80226AE8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226AF4;
    }
    // 0x80226AE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226AEC: j           L_80226AFC
    // 0x80226AF0: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
        goto L_80226AFC;
    // 0x80226AF0: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80226AF4:
    // 0x80226AF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226AF8: sb          $zero, 0x3378($at)
    MEM_B(0X3378, ctx->r1) = 0;
L_80226AFC:
    // 0x80226AFC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226B00: lh          $a0, 0x3330($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X3330);
    // 0x80226B04: lw          $v0, 0x42C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X42C);
    // 0x80226B08: lhu         $a1, 0x43C($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X43C);
    // 0x80226B0C: sll         $v1, $a0, 12
    ctx->r3 = S32(ctx->r4 << 12);
    // 0x80226B10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226B14: sw          $v0, 0x42C($a2)
    MEM_W(0X42C, ctx->r6) = ctx->r2;
    // 0x80226B18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226B1C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80226B20: addiu       $a1, $a1, -0x14
    ctx->r5 = ADD32(ctx->r5, -0X14);
    // 0x80226B24: sh          $v0, 0x43A($a2)
    MEM_H(0X43A, ctx->r6) = ctx->r2;
    // 0x80226B28: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226B2C: sh          $a0, 0x3330($at)
    MEM_H(0X3330, ctx->r1) = ctx->r4;
    // 0x80226B30: sh          $a1, 0x43C($a2)
    MEM_H(0X43C, ctx->r6) = ctx->r5;
L_80226B34:
    // 0x80226B34: jr          $ra
    // 0x80226B38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80226B38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8023F448_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F448: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F44C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F450: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023F454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F458: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023F45C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023F460: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8023F464: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F468: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023F46C: addiu       $a1, $s0, 0x3A8
    ctx->r5 = ADD32(ctx->r16, 0X3A8);
    // 0x8023F470: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F474: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8023F478: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023F47C: jal         0x8009A3B4
    // 0x8023F480: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023F480: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023F484: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8023F488: addiu       $a1, $s2, 0x180
    ctx->r5 = ADD32(ctx->r18, 0X180);
    // 0x8023F48C: jal         0x8009A3B4
    // 0x8023F490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023F490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023F494: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023F498: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023F49C: addiu       $a2, $s2, 0x508
    ctx->r6 = ADD32(ctx->r18, 0X508);
    // 0x8023F4A0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023F4A4: sh          $v0, 0x50A($s2)
    MEM_H(0X50A, ctx->r18) = ctx->r2;
    // 0x8023F4A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023F4AC: addiu       $a3, $s2, 0x510
    ctx->r7 = ADD32(ctx->r18, 0X510);
    // 0x8023F4B0: sh          $s1, 0x508($s2)
    MEM_H(0X508, ctx->r18) = ctx->r17;
    // 0x8023F4B4: jal         0x8004DF78
    // 0x8023F4B8: sh          $v0, 0x50C($s2)
    MEM_H(0X50C, ctx->r18) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8023F4B8: sh          $v0, 0x50C($s2)
    MEM_H(0X50C, ctx->r18) = ctx->r2;
    after_2:
    // 0x8023F4BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023F4C0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023F4C4: bne         $v0, $zero, L_8023F500
    if (ctx->r2 != 0) {
        // 0x8023F4C8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8023F500;
    }
    // 0x8023F4C8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023F4CC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023F4D0: beq         $v0, $zero, L_8023F4E4
    if (ctx->r2 == 0) {
        // 0x8023F4D4: nop
    
            goto L_8023F4E4;
    }
    // 0x8023F4D4: nop

    // 0x8023F4D8: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023F4DC: j           L_8023F4EC
    // 0x8023F4E0: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
        goto L_8023F4EC;
    // 0x8023F4E0: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
L_8023F4E4:
    // 0x8023F4E4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023F4E8: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
L_8023F4EC:
    // 0x8023F4EC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023F4F0: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023F4F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023F4F8: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023F4FC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8023F500:
    // 0x8023F500: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023F504: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F508: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023F50C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F514: jr          $ra
    // 0x8023F518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231494_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023149C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802314A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802314A4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802314A8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802314AC: jal         0x8004FA7C
    // 0x802314B0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802314B0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802314B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802314B8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802314BC: bne         $v0, $zero, L_802314E8
    if (ctx->r2 != 0) {
        // 0x802314C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802314E8;
    }
    // 0x802314C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802314C4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x802314C8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x802314CC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x802314D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802314D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802314D8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802314DC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802314E0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x802314E4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_802314E8:
    // 0x802314E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802314EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802314F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802314F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802314F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802314FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231500: jr          $ra
    // 0x80231504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FCB8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FCB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023FCBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023FCC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FCC4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023FCC8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023FCCC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023FCD0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023FCD4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023FCD8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023FCDC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023FCE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023FCE4: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023FCE8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023FCEC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023FCF0: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8023FCF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023FCF8: beq         $v1, $v0, L_8023FEDC
    if (ctx->r3 == ctx->r2) {
        // 0x8023FCFC: addiu       $s2, $s0, 0x440
        ctx->r18 = ADD32(ctx->r16, 0X440);
            goto L_8023FEDC;
    }
    // 0x8023FCFC: addiu       $s2, $s0, 0x440
    ctx->r18 = ADD32(ctx->r16, 0X440);
    // 0x8023FD00: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023FD04: lui         $s5, 0xFF
    ctx->r21 = S32(0XFF << 16);
    // 0x8023FD08: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8023FD0C: lui         $s6, 0x1800
    ctx->r22 = S32(0X1800 << 16);
    // 0x8023FD10: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x8023FD14: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8023FD18:
    // 0x8023FD18: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FD1C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8023FD20: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023FD24: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x8023FD28: and         $a2, $v0, $s5
    ctx->r6 = ctx->r2 & ctx->r21;
    // 0x8023FD2C: beql        $a2, $zero, L_8023FDA4
    if (ctx->r6 == 0) {
        // 0x8023FD30: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FDA4;
    }
    goto skip_0;
    // 0x8023FD30: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8023FD34: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8023FD38: beq         $v0, $zero, L_8023FDA4
    if (ctx->r2 == 0) {
        // 0x8023FD3C: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FDA4;
    }
    // 0x8023FD3C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023FD40: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023FD44: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8023FD48: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023FD4C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8023FD50: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023FD54: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023FD58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023FD5C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023FD60: sh          $s4, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r20;
    // 0x8023FD64: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8023FD68: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023FD6C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023FD70: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8023FD74: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023FD78: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8023FD7C: sh          $s4, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r20;
    // 0x8023FD80: bne         $a0, $zero, L_8023FD94
    if (ctx->r4 != 0) {
        // 0x8023FD84: sh          $s4, 0x186($v1)
        MEM_H(0X186, ctx->r3) = ctx->r20;
            goto L_8023FD94;
    }
    // 0x8023FD84: sh          $s4, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r20;
    // 0x8023FD88: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x8023FD8C: j           L_8023FD98
    // 0x8023FD90: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8023FD98;
    // 0x8023FD90: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8023FD94:
    // 0x8023FD94: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8023FD98:
    // 0x8023FD98: jal         0x8002A33C
    // 0x8023FD9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023FD9C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023FDA0: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_8023FDA4:
    // 0x8023FDA4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023FDA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FDAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FDB0: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023FDB4: bne         $v0, $zero, L_8023FD18
    if (ctx->r2 != 0) {
        // 0x8023FDB8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8023FD18;
    }
    // 0x8023FDB8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8023FDBC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x8023FDC0: lui         $s5, 0xFF
    ctx->r21 = S32(0XFF << 16);
    // 0x8023FDC4: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8023FDC8: lui         $s7, 0x1800
    ctx->r23 = S32(0X1800 << 16);
    // 0x8023FDCC: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x8023FDD0: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x8023FDD4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8023FDD8:
    // 0x8023FDD8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FDDC: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8023FDE0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023FDE4: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x8023FDE8: and         $a2, $v0, $s5
    ctx->r6 = ctx->r2 & ctx->r21;
    // 0x8023FDEC: beql        $a2, $zero, L_8023FE68
    if (ctx->r6 == 0) {
        // 0x8023FDF0: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FE68;
    }
    goto skip_1;
    // 0x8023FDF0: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8023FDF4: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x8023FDF8: beq         $v0, $zero, L_8023FE68
    if (ctx->r2 == 0) {
        // 0x8023FDFC: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FE68;
    }
    // 0x8023FDFC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023FE00: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023FE04: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8023FE08: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023FE0C: addiu       $v0, $a0, -0x4
    ctx->r2 = ADD32(ctx->r4, -0X4);
    // 0x8023FE10: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023FE14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FE18: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023FE1C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023FE20: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023FE24: sh          $s4, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r20;
    // 0x8023FE28: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8023FE2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023FE30: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023FE34: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8023FE38: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023FE3C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8023FE40: sh          $s4, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r20;
    // 0x8023FE44: bne         $a0, $s6, L_8023FE58
    if (ctx->r4 != ctx->r22) {
        // 0x8023FE48: sh          $s4, 0x186($v1)
        MEM_H(0X186, ctx->r3) = ctx->r20;
            goto L_8023FE58;
    }
    // 0x8023FE48: sh          $s4, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r20;
    // 0x8023FE4C: addu        $s3, $s3, $a2
    ctx->r19 = ADD32(ctx->r19, ctx->r6);
    // 0x8023FE50: j           L_8023FE5C
    // 0x8023FE54: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_8023FE5C;
    // 0x8023FE54: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8023FE58:
    // 0x8023FE58: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8023FE5C:
    // 0x8023FE5C: jal         0x8002A33C
    // 0x8023FE60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023FE60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023FE64: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_8023FE68:
    // 0x8023FE68: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023FE6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FE70: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FE74: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8023FE78: bne         $v0, $zero, L_8023FDD8
    if (ctx->r2 != 0) {
        // 0x8023FE7C: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8023FDD8;
    }
    // 0x8023FE7C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8023FE80: lw          $v1, 0x90($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X90);
    // 0x8023FE84: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023FE88: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023FE8C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x8023FE90: beq         $a2, $zero, L_8023FEC4
    if (ctx->r6 == 0) {
        // 0x8023FE94: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_8023FEC4;
    }
    // 0x8023FE94: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8023FE98: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023FE9C: beq         $v0, $zero, L_8023FEC4
    if (ctx->r2 == 0) {
        // 0x8023FEA0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8023FEC4;
    }
    // 0x8023FEA0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023FEA4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023FEA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023FEAC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023FEB0: sh          $v0, 0x186($s0)
    MEM_H(0X186, ctx->r16) = ctx->r2;
    // 0x8023FEB4: sh          $v0, 0x1EE($s0)
    MEM_H(0X1EE, ctx->r16) = ctx->r2;
    // 0x8023FEB8: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023FEBC: jal         0x8002A33C
    // 0x8023FEC0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023FEC0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    after_2:
L_8023FEC4:
    // 0x8023FEC4: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8023FEC8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023FECC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8023FED0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023FED4: j           L_8023FF3C
    // 0x8023FED8: and         $s3, $s3, $v0
    ctx->r19 = ctx->r19 & ctx->r2;
        goto L_8023FF3C;
    // 0x8023FED8: and         $s3, $s3, $v0
    ctx->r19 = ctx->r19 & ctx->r2;
L_8023FEDC:
    // 0x8023FEDC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023FEE0: lui         $s4, 0xFF
    ctx->r20 = S32(0XFF << 16);
    // 0x8023FEE4: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x8023FEE8: lui         $s5, 0x1800
    ctx->r21 = S32(0X1800 << 16);
    // 0x8023FEEC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8023FEF0:
    // 0x8023FEF0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023FEF4: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8023FEF8: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x8023FEFC: and         $a2, $v0, $s4
    ctx->r6 = ctx->r2 & ctx->r20;
    // 0x8023FF00: beql        $a2, $zero, L_8023FF24
    if (ctx->r6 == 0) {
        // 0x8023FF04: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FF24;
    }
    goto skip_2;
    // 0x8023FF04: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x8023FF08: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x8023FF0C: beq         $v0, $zero, L_8023FF24
    if (ctx->r2 == 0) {
        // 0x8023FF10: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8023FF24;
    }
    // 0x8023FF10: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023FF14: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8023FF18: jal         0x8002A33C
    // 0x8023FF1C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023FF1C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8023FF20: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_8023FF24:
    // 0x8023FF24: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023FF28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FF2C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FF30: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8023FF34: bne         $v0, $zero, L_8023FEF0
    if (ctx->r2 != 0) {
        // 0x8023FF38: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8023FEF0;
    }
    // 0x8023FF38: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8023FF3C:
    // 0x8023FF3C: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x8023FF40: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023FF44: beq         $v0, $v1, L_8024005C
    if (ctx->r2 == ctx->r3) {
        // 0x8023FF48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024005C;
    }
    // 0x8023FF48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FF4C: bgtz        $v1, L_8023FF84
    if (SIGNED(ctx->r3) > 0) {
        // 0x8023FF50: nop
    
            goto L_8023FF84;
    }
    // 0x8023FF50: nop

    // 0x8023FF54: lbu         $v1, 0xED($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XED);
    // 0x8023FF58: bnel        $v1, $v0, L_8023FF80
    if (ctx->r3 != ctx->r2) {
        // 0x8023FF5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023FF80;
    }
    goto skip_3;
    // 0x8023FF5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x8023FF60: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8023FF64: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8023FF68: andi        $v1, $v1, 0xFF7D
    ctx->r3 = ctx->r3 & 0XFF7D;
    // 0x8023FF6C: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
    // 0x8023FF70: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x8023FF74: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8023FF78: j           L_8024005C
    // 0x8023FF7C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8024005C;
    // 0x8023FF7C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023FF80:
    // 0x8023FF80: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_8023FF84:
    // 0x8023FF84: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023FF88: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023FF8C: beq         $v0, $zero, L_8023FFE0
    if (ctx->r2 == 0) {
        // 0x8023FF90: nop
    
            goto L_8023FFE0;
    }
    // 0x8023FF90: nop

    // 0x8023FF94: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x8023FF98: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8023FF9C: sh          $v1, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r3;
    // 0x8023FFA0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023FFA4: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8023FFA8: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8023FFAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023FFB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FFB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023FFB8: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8023FFBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023FFC0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023FFC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023FFC8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023FFCC: bne         $v1, $zero, L_8023FFE0
    if (ctx->r3 != 0) {
        // 0x8023FFD0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023FFE0;
    }
    // 0x8023FFD0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023FFD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FFD8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023FFDC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8023FFE0:
    // 0x8023FFE0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023FFE4: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023FFE8: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023FFEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023FFF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FFF4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023FFF8: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x8023FFFC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80240000: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80240004: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80240008: bne         $v0, $zero, L_8024001C
    if (ctx->r2 != 0) {
        // 0x8024000C: nop
    
            goto L_8024001C;
    }
    // 0x8024000C: nop

    // 0x80240010: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80240014: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x80240018: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8024001C:
    // 0x8024001C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80240020: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80240024: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80240028: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024002C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240030: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80240034: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x80240038: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8024003C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80240040: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80240044: bne         $v0, $zero, L_8024005C
    if (ctx->r2 != 0) {
        // 0x80240048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024005C;
    }
    // 0x80240048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024004C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80240050: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80240054: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80240058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024005C:
    // 0x8024005C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80240060: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80240064: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80240068: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8024006C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80240070: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80240074: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80240078: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024007C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240080: jr          $ra
    // 0x80240084: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80240084: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80240088: nop

    // 0x8024008C: nop

;}
RECOMP_FUNC void func_802315D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802315D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802315D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802315DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802315E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802315E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802315E8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802315EC: bgez        $v0, L_80231610
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802315F0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80231610;
    }
    // 0x802315F0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802315F4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802315F8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802315FC: beq         $a0, $v0, L_80231610
    if (ctx->r4 == ctx->r2) {
        // 0x80231600: nop
    
            goto L_80231610;
    }
    // 0x80231600: nop

    // 0x80231604: jal         0x80233298
    // 0x80231608: nop

    func_80233298_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231608: nop

    after_0:
    // 0x8023160C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80231610:
    // 0x80231610: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80231614: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231618: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8023161C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231620: bne         $v0, $zero, L_8023168C
    if (ctx->r2 != 0) {
        // 0x80231624: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8023168C;
    }
    // 0x80231624: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80231628: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8023162C: bne         $a0, $v0, L_80231644
    if (ctx->r4 != ctx->r2) {
        // 0x80231630: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80231644;
    }
    // 0x80231630: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80231634: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231638: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023163C: j           L_8023165C
    // 0x80231640: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023165C;
    // 0x80231640: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231644:
    // 0x80231644: jal         0x802332A8
    // 0x80231648: nop

    func_802332A8_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231648: nop

    after_1:
    // 0x8023164C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231650: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231654: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231658: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8023165C:
    // 0x8023165C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80231660: beq         $v0, $zero, L_80231674
    if (ctx->r2 == 0) {
        // 0x80231664: nop
    
            goto L_80231674;
    }
    // 0x80231664: nop

    // 0x80231668: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8023166C: j           L_80231684
    // 0x80231670: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80231684;
    // 0x80231670: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80231674:
    // 0x80231674: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80231678: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023167C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231680: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80231684:
    // 0x80231684: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80231688: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8023168C:
    // 0x8023168C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231698: jr          $ra
    // 0x8023169C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023169C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802350BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802350C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802350C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802350C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802350CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802350D0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802350D4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802350D8: beq         $v0, $zero, L_802350EC
    if (ctx->r2 == 0) {
        // 0x802350DC: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802350EC;
    }
    // 0x802350DC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802350E0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802350E4: j           L_802350F0
    // 0x802350E8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_802350F0;
    // 0x802350E8: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_802350EC:
    // 0x802350EC: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
L_802350F0:
    // 0x802350F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802350F4: lbu         $a2, 0x3($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3);
    // 0x802350F8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802350FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235100: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80235104: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235108: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023510C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80235110: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80235114: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80235118: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023511C: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x80235120: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235124: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80235128: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x8023512C: andi        $v1, $v1, 0xE00
    ctx->r3 = ctx->r3 & 0XE00;
    // 0x80235130: sb          $a2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r6;
    // 0x80235134: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80235138: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8023513C: jal         0x8004D5D4
    // 0x80235140: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235140: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235144: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235148: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023514C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235150: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235154: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235158: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x8023515C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80235160: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80235164: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80235168: ori         $v0, $v0, 0xB2
    ctx->r2 = ctx->r2 | 0XB2;
    // 0x8023516C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80235170: jal         0x80053ED8
    // 0x80235174: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80235174: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    after_1:
    // 0x80235178: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8023517C: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80235180: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80235184: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80235188: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023518C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235190: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80235194: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80235198: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x8023519C: jal         0x800540BC
    // 0x802351A0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x802351A0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_2:
    // 0x802351A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802351A8: addiu       $v0, $s1, 0x40
    ctx->r2 = ADD32(ctx->r17, 0X40);
    // 0x802351AC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x802351B0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802351B4: addiu       $v0, $v0, 0x124C
    ctx->r2 = ADD32(ctx->r2, 0X124C);
    // 0x802351B8: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x802351BC: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x802351C0: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x802351C4: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x802351C8: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x802351CC: sw          $zero, 0x54($s1)
    MEM_W(0X54, ctx->r17) = 0;
    // 0x802351D0: sw          $zero, 0x58($s1)
    MEM_W(0X58, ctx->r17) = 0;
    // 0x802351D4: sw          $zero, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = 0;
    // 0x802351D8: sh          $zero, 0x38($s1)
    MEM_H(0X38, ctx->r17) = 0;
    // 0x802351DC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802351E0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802351E4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802351E8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802351EC: jal         0x8003E934
    // 0x802351F0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802351F0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    after_3:
    // 0x802351F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802351F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802351FC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235200: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80235204: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x80235208: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023520C: beq         $v0, $zero, L_80235224
    if (ctx->r2 == 0) {
        // 0x80235210: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235224;
    }
    // 0x80235210: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235214: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235218: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023521C: j           L_80235254
    // 0x80235220: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235254;
    // 0x80235220: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235224:
    // 0x80235224: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80235228: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023522C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235230: bne         $v1, $v0, L_80235250
    if (ctx->r3 != ctx->r2) {
        // 0x80235234: sb          $a0, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r4;
            goto L_80235250;
    }
    // 0x80235234: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80235238: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023523C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235240: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235244: sw          $v1, 0x565C($at)
    MEM_W(0X565C, ctx->r1) = ctx->r3;
    // 0x80235248: j           L_80235258
    // 0x8023524C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80235258;
    // 0x8023524C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80235250:
    // 0x80235250: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
L_80235254:
    // 0x80235254: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80235258:
    // 0x80235258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023525C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235260: jal         0x80050294
    // 0x80235264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80235264: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80235268: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023526C: jal         0x8004EEAC
    // 0x80235270: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_5;
    // 0x80235270: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_5:
    // 0x80235274: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235278: beq         $v1, $zero, L_80235304
    if (ctx->r3 == 0) {
        // 0x8023527C: sw          $v1, 0x44($s1)
        MEM_W(0X44, ctx->r17) = ctx->r3;
            goto L_80235304;
    }
    // 0x8023527C: sw          $v1, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r3;
    // 0x80235280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235284: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235288: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x8023528C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80235290: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80235294: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80235298: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023529C: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802352A0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x802352A4: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802352A8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x802352AC: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x802352B0: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802352B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352B8: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802352BC: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x802352C0: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802352C4: addiu       $v0, $v0, -0x180
    ctx->r2 = ADD32(ctx->r2, -0X180);
    // 0x802352C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352CC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x802352D0: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x802352D4: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802352D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352DC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x802352E0: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x802352E4: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x802352E8: jal         0x8004DD04
    // 0x802352EC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x802352EC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_6:
    // 0x802352F0: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x802352F4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802352F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802352FC: jal         0x8009A3B4
    // 0x80235300: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80235300: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    after_7:
L_80235304:
    // 0x80235304: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235308: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023530C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235310: jr          $ra
    // 0x80235314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B94_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B9C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227BA0: bne         $v0, $zero, L_80227BD0
    if (ctx->r2 != 0) {
        // 0x80227BA4: nop
    
            goto L_80227BD0;
    }
    // 0x80227BA4: nop

    // 0x80227BA8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227BAC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80227BB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227BB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BB8: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80227BBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BC0: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x80227BC4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227BC8: jal         0x80227CA4
    // 0x80227BCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_80227CA4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80227BCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_80227BD0:
    // 0x80227BD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227BD4: jr          $ra
    // 0x80227BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F6D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F6D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F6D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F6DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022F6E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022F6E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F6E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F6EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F6F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F6F4: jal         0x8004D5D4
    // 0x8022F6F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F6F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F6FC: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x8022F700: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F704: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F708: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022F70C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F710: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F714: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F718: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F71C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F720: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F724: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x8022F728: jal         0x8009A3B4
    // 0x8022F72C: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F72C: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    after_1:
    // 0x8022F730: addiu       $s1, $s0, 0x374
    ctx->r17 = ADD32(ctx->r16, 0X374);
    // 0x8022F734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F738: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F73C: jal         0x8009A3B4
    // 0x8022F740: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F740: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F744: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F748: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F74C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F750: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8022F754: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F758: jal         0x8004DBA0
    // 0x8022F75C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022F75C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8022F760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F764: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F768: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F76C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F770: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022F774: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022F778: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022F77C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022F780: addiu       $v0, $v0, 0x960
    ctx->r2 = ADD32(ctx->r2, 0X960);
    // 0x8022F784: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022F788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F78C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022F790: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022F794: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022F798: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022F79C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022F7A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F7A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F7A8: jal         0x80050294
    // 0x8022F7AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022F7AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x8022F7B0: jal         0x8022F7D0
    // 0x8022F7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F7D0_ovl10(rdram, ctx);
        goto after_5;
    // 0x8022F7B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022F7B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022F7BC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F7C0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F7C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F7C8: jr          $ra
    // 0x8022F7CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F7CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233704_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233704: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x80233708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023370C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80233710: beq         $v1, $v0, L_80233738
    if (ctx->r3 == ctx->r2) {
        // 0x80233714: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80233738;
    }
    // 0x80233714: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233718: beq         $v0, $zero, L_8023374C
    if (ctx->r2 == 0) {
        // 0x8023371C: nop
    
            goto L_8023374C;
    }
    // 0x8023371C: nop

    // 0x80233720: bne         $v1, $zero, L_8023374C
    if (ctx->r3 != 0) {
        // 0x80233724: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023374C;
    }
    // 0x80233724: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80233728: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023372C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80233730: j           L_8023374C
    // 0x80233734: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8023374C;
    // 0x80233734: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80233738:
    // 0x80233738: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023373C: bgez        $v0, L_8023374C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233740: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023374C;
    }
    // 0x80233740: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80233744: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233748: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8023374C:
    // 0x8023374C: jr          $ra
    // 0x80233750: nop

    TRACE_RETURN()
    return;
    // 0x80233750: nop

;}
