#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226A70_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226A80: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226A84: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226A88: jal         0x8004FA7C
    // 0x80226A8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226A8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226A90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226A94: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80226A98: bne         $v0, $zero, L_80226AA8
    if (ctx->r2 != 0) {
        // 0x80226A9C: nop
    
            goto L_80226AA8;
    }
    // 0x80226A9C: nop

    // 0x80226AA0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80226AA4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226AA8:
    // 0x80226AA8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226AAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226AB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226AB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226ABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AC0: jr          $ra
    // 0x80226AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802271A4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802271A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802271AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802271B0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802271B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802271B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802271BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802271C0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802271C4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802271C8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802271CC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x802271D0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x802271D4: jal         0x80227B04
    // 0x802271D8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x802271D8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x802271DC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802271E0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802271E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802271E8: beq         $v0, $zero, L_8022727C
    if (ctx->r2 == 0) {
        // 0x802271EC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022727C;
    }
    // 0x802271EC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802271F0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802271F4: jal         0x80227A68
    // 0x802271F8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x802271F8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802271FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227200: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227204: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80227208: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022720C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227210: jal         0x8004F820
    // 0x80227214: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227214: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227218: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022721C: bgez        $v0, L_80227248
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227220: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227248;
    }
    // 0x80227220: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227224: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227228: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022722C: jal         0x8004F820
    // 0x80227230: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227230: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227238: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022723C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227240: j           L_80227260
    // 0x80227244: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80227260;
    // 0x80227244: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80227248:
    // 0x80227248: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022724C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227250: jal         0x8004F820
    // 0x80227254: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227254: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80227258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022725C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80227260:
    // 0x80227260: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80227264: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80227268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022726C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80227270: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227274: j           L_802272C4
    // 0x80227278: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_802272C4;
    // 0x80227278: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022727C:
    // 0x8022727C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227280: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227284: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80227288: jal         0x8004F820
    // 0x8022728C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022728C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80227290: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227294: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227298: beq         $v0, $zero, L_802272A8
    if (ctx->r2 == 0) {
        // 0x8022729C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_802272A8;
    }
    // 0x8022729C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x802272A0: j           L_802272AC
    // 0x802272A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802272AC;
    // 0x802272A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802272A8:
    // 0x802272A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802272AC:
    // 0x802272AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802272B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802272B4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x802272B8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802272BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802272C4:
    // 0x802272C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802272C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802272CC: jal         0x800610AC
    // 0x802272D0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x802272D0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x802272D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802272D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802272DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802272E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802272E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802272E8: jr          $ra
    // 0x802272EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802272EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226AC8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226ACC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226AD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226AD8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226ADC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226AE0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226AE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226AE8: jal         0x80227A78
    // 0x80226AEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80227A78_ovl30(rdram, ctx);
        goto after_0;
    // 0x80226AEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226AF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226AF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AF8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80226AFC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226B00: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226B08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B0C: jr          $ra
    // 0x80226B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B14_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226B1C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80226B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226B24: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226B28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B2C: lw          $v0, -0x6EF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6EF0);
    // 0x80226B30: jalr        $v0
    // 0x80226B34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226B34: nop

    after_0:
    // 0x80226B38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226B3C: jr          $ra
    // 0x80226B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227AB8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AB8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80227ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AC0: beq         $a1, $v0, L_80227AEC
    if (ctx->r5 == ctx->r2) {
        // 0x80227AC4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80227AEC;
    }
    // 0x80227AC4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227AC8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x80227ACC: bne         $a0, $v0, L_80227ADC
    if (ctx->r4 != ctx->r2) {
        // 0x80227AD0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80227ADC;
    }
    // 0x80227AD0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80227AD4: j           L_80227AFC
    // 0x80227AD8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80227AFC;
    // 0x80227AD8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80227ADC:
    // 0x80227ADC: bne         $a0, $v1, L_80227AFC
    if (ctx->r4 != ctx->r3) {
        // 0x80227AE0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80227AFC;
    }
    // 0x80227AE0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80227AE4: j           L_80227AFC
    // 0x80227AE8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_80227AFC;
    // 0x80227AE8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_80227AEC:
    // 0x80227AEC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80227AF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227AF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227AF8: lbu         $v0, -0x7150($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7150);
L_80227AFC:
    // 0x80227AFC: jr          $ra
    // 0x80227B00: nop

    TRACE_RETURN()
    return;
    // 0x80227B00: nop

;}
RECOMP_FUNC void func_80225FB0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225FB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225FC0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80225FC4: bgez        $v0, L_80225FDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225FC8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80225FDC;
    }
    // 0x80225FC8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225FCC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225FD0: jal         0x80227A78
    // 0x80225FD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80227A78_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225FD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225FD8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80225FDC:
    // 0x80225FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225FE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FE4: jr          $ra
    // 0x80225FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225820_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225824: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225828: jal         0x8004F418
    // 0x8022582C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022582C: nop

    after_0:
    // 0x80225830: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225834: jr          $ra
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281B0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802281B8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802281BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802281C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802281C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802281C8: lw          $v0, -0x6E84($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6E84);
    // 0x802281CC: jalr        $v0
    // 0x802281D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802281D0: nop

    after_0:
    // 0x802281D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802281D8: jr          $ra
    // 0x802281DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022593C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022593C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80225940: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80225944: beq         $v0, $zero, L_80225960
    if (ctx->r2 == 0) {
        // 0x80225948: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225960;
    }
    // 0x80225948: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022594C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80225950: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80225954: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225958: bne         $v0, $zero, L_8022598C
    if (ctx->r2 != 0) {
        // 0x8022595C: nop
    
            goto L_8022598C;
    }
    // 0x8022595C: nop

L_80225960:
    // 0x80225960: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80225964: bgez        $v0, L_8022598C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225968: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022598C;
    }
    // 0x80225968: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022596C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80225970: bnel        $v1, $v0, L_8022598C
    if (ctx->r3 != ctx->r2) {
        // 0x80225974: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022598C;
    }
    goto skip_0;
    // 0x80225974: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80225978: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022597C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80225980: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80225984: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225988: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022598C:
    // 0x8022598C: jr          $ra
    // 0x80225990: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80225990: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80225CD8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225CDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CE4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225CE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225CEC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80225CF0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80225CF4: jal         0x8004FA7C
    // 0x80225CF8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80225CF8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80225CFC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80225D00: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80225D04: bne         $v0, $zero, L_80225D28
    if (ctx->r2 != 0) {
        // 0x80225D08: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80225D28;
    }
    // 0x80225D08: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80225D0C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225D10: jal         0x80227A68
    // 0x80225D14: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x80225D14: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225D18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225D20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225D24: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80225D28:
    // 0x80225D28: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80225D2C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80225D30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225D34: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225D38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225D3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D44: jr          $ra
    // 0x80225D48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226E90_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226E98: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80226E9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226EA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226EA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226EA8: lw          $v0, -0x6EE0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6EE0);
    // 0x80226EAC: jalr        $v0
    // 0x80226EB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226EB0: nop

    after_0:
    // 0x80226EB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226EB8: jr          $ra
    // 0x80226EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C64_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C74: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80225C78: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80225C7C: jal         0x8004FA7C
    // 0x80225C80: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80225C80: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80225C84: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80225C88: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80225C8C: bne         $v0, $zero, L_80225CB8
    if (ctx->r2 != 0) {
        // 0x80225C90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225CB8;
    }
    // 0x80225C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C94: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80225C98: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80225C9C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80225CA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CA8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80225CAC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80225CB0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80225CB4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80225CB8:
    // 0x80225CB8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80225CBC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225CC0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225CC4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CD0: jr          $ra
    // 0x80225CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022601C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022601C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80226020: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226024: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x80226028: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022602C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80226030: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80226034: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80226038: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022603C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226040: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80226044: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80226048: jr          $ra
    // 0x8022604C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022604C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80225520_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022552C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225534: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225538: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022553C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80225540: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225544: beq         $v1, $zero, L_80225554
    if (ctx->r3 == 0) {
        // 0x80225548: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80225554;
    }
    // 0x80225548: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022554C: j           L_8022555C
    // 0x80225550: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022555C;
    // 0x80225550: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80225554:
    // 0x80225554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225558: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022555C:
    // 0x8022555C: jal         0x8004D5D4
    // 0x80225560: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225560: nop

    after_0:
    // 0x80225564: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225568: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022556C: bne         $a0, $v0, L_8022557C
    if (ctx->r4 != ctx->r2) {
        // 0x80225570: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022557C;
    }
    // 0x80225570: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80225574: j           L_802255F0
    // 0x80225578: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_802255F0;
    // 0x80225578: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022557C:
    // 0x8022557C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80225580: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80225584: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225588: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022558C: bne         $v1, $zero, L_802255F0
    if (ctx->r3 != 0) {
        // 0x80225590: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802255F0;
    }
    // 0x80225590: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80225594: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80225598: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022559C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x802255A0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802255A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802255A8: bne         $v1, $zero, L_802255F0
    if (ctx->r3 != 0) {
        // 0x802255AC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802255F0;
    }
    // 0x802255AC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802255B0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x802255B4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802255B8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x802255BC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802255C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802255C4: bne         $v1, $zero, L_802255F0
    if (ctx->r3 != 0) {
        // 0x802255C8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802255F0;
    }
    // 0x802255C8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802255CC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x802255D0: bnel        $a0, $v0, L_802255F0
    if (ctx->r4 != ctx->r2) {
        // 0x802255D4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_802255F0;
    }
    goto skip_0;
    // 0x802255D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x802255D8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x802255DC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802255E0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802255E4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802255E8: j           L_802255F8
    // 0x802255EC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_802255F8;
    // 0x802255EC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_802255F0:
    // 0x802255F0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802255F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_802255F8:
    // 0x802255F8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802255FC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225600: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225604: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225608: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022560C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80225610: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225614: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80225618: bne         $v0, $zero, L_80225624
    if (ctx->r2 != 0) {
        // 0x8022561C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80225624;
    }
    // 0x8022561C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80225620: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80225624:
    // 0x80225624: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80225628: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022562C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225630: jal         0x8009A3B4
    // 0x80225634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80225638: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022563C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225640: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225644: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80225648: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022564C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225650: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225654: addiu       $v0, $v0, -0x70E0
    ctx->r2 = ADD32(ctx->r2, -0X70E0);
    // 0x80225658: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022565C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225660: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80225664: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80225668: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022566C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80225670: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80225674: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80225678: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022567C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225680: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225684: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225688: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022568C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80225690: jal         0x80050294
    // 0x80225694: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80225694: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80225698: jal         0x802256B4
    // 0x8022569C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802256B4_ovl30(rdram, ctx);
        goto after_3;
    // 0x8022569C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802256A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802256A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802256A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256AC: jr          $ra
    // 0x802256B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802256B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802281E0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802281E8: jal         0x8004F418
    // 0x802281EC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802281EC: nop

    after_0:
    // 0x802281F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802281F4: jr          $ra
    // 0x802281F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802281FC: nop

;}
RECOMP_FUNC void func_80226EC0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226ECC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226ED0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226ED4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226ED8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226EDC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226EE0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80226EE4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226EE8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226EEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226EF0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80226EF4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80226EF8: jal         0x80227A68
    // 0x80226EFC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80227A68_ovl30(rdram, ctx);
        goto after_0;
    // 0x80226EFC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80226F00: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80226F04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226F08: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226F0C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80226F10: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80226F14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226F18: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80226F1C: jal         0x8004F820
    // 0x80226F20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80226F20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226F24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226F28: bgez        $v0, L_80226F58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226F2C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80226F58;
    }
    // 0x80226F2C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80226F30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226F34: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226F38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226F3C: jal         0x8004F820
    // 0x80226F40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80226F40: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80226F44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226F48: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226F4C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226F50: j           L_80226F74
    // 0x80226F54: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80226F74;
    // 0x80226F54: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80226F58:
    // 0x80226F58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226F5C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226F60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226F64: jal         0x8004F820
    // 0x80226F68: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80226F68: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80226F6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226F70: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80226F74:
    // 0x80226F74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226F78: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80226F7C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80226F80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F84: jal         0x800610AC
    // 0x80226F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80226F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226F8C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226F90: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226F94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226F98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226F9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FA0: jr          $ra
    // 0x80226FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022796C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022796C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227970: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80227974: bne         $a1, $a0, L_802279C8
    if (ctx->r5 != ctx->r4) {
        // 0x80227978: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_802279C8;
    }
    // 0x80227978: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022797C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80227980: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80227984: bne         $v1, $v0, L_80227994
    if (ctx->r3 != ctx->r2) {
        // 0x80227988: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227994;
    }
    // 0x80227988: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022798C: j           L_802279B0
    // 0x80227990: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802279B0;
    // 0x80227990: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227994:
    // 0x80227994: bne         $v1, $v0, L_802279A4
    if (ctx->r3 != ctx->r2) {
        // 0x80227998: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802279A4;
    }
    // 0x80227998: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022799C: j           L_802279B0
    // 0x802279A0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802279B0;
    // 0x802279A0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802279A4:
    // 0x802279A4: bne         $v1, $v0, L_802279B0
    if (ctx->r3 != ctx->r2) {
        // 0x802279A8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802279B0;
    }
    // 0x802279A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802279AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802279B0:
    // 0x802279B0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802279B4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802279B8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x802279BC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802279C0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802279C4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802279C8:
    // 0x802279C8: jr          $ra
    // 0x802279CC: nop

    TRACE_RETURN()
    return;
    // 0x802279CC: nop

;}
RECOMP_FUNC void func_8022646C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022646C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022647C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80226480: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226484: jal         0x8004FA7C
    // 0x80226488: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226488: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022648C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226490: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226494: bne         $v0, $zero, L_802264E0
    if (ctx->r2 != 0) {
        // 0x80226498: nop
    
            goto L_802264E0;
    }
    // 0x80226498: nop

    // 0x8022649C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802264A0: beq         $v0, $zero, L_802264B4
    if (ctx->r2 == 0) {
        // 0x802264A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802264B4;
    }
    // 0x802264A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264A8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802264AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802264B0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802264B4:
    // 0x802264B4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x802264B8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x802264BC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x802264C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802264C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264CC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802264D0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802264D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802264D8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802264DC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_802264E0:
    // 0x802264E0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802264E4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802264E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802264EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802264F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802264F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264F8: jr          $ra
    // 0x802264FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228140_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228140: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228144: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80228148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022814C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228154: bne         $v0, $s0, L_8022818C
    if (ctx->r2 != ctx->r16) {
        // 0x80228158: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022818C;
    }
    // 0x80228158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022815C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228160: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80228164: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228168: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022816C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80228170: jal         0x8006033C
    // 0x80228174: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80228174: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x80228178: bnel        $v0, $zero, L_80228188
    if (ctx->r2 != 0) {
        // 0x8022817C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228188;
    }
    goto skip_0;
    // 0x8022817C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228180: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228188:
    // 0x80228188: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022818C:
    // 0x8022818C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228194: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228198: jal         0x80047284
    // 0x8022819C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x8022819C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802281A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802281A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281A8: jr          $ra
    // 0x802281AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F14_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F24: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80225F28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225F2C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225F30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225F34: bne         $v0, $zero, L_80225FA0
    if (ctx->r2 != 0) {
        // 0x80225F38: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80225FA0;
    }
    // 0x80225F38: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80225F3C: jal         0x80227B04
    // 0x80225F40: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225F40: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80225F44: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225F48: beq         $v0, $zero, L_80225F9C
    if (ctx->r2 == 0) {
        // 0x80225F4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225F9C;
    }
    // 0x80225F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F50: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80225F54: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80225F58: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80225F5C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80225F60: bne         $v1, $zero, L_80225F70
    if (ctx->r3 != 0) {
        // 0x80225F64: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80225F70;
    }
    // 0x80225F64: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225F68: j           L_80225FA0
    // 0x80225F6C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80225FA0;
    // 0x80225F6C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80225F70:
    // 0x80225F70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225F74: jal         0x80227A78
    // 0x80225F78: nop

    func_80227A78_ovl30(rdram, ctx);
        goto after_1;
    // 0x80225F78: nop

    after_1:
    // 0x80225F7C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80225F80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225F84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225F88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225F8C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80225F90: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80225F94: j           L_80225FA0
    // 0x80225F98: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80225FA0;
    // 0x80225F98: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80225F9C:
    // 0x80225F9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225FA0:
    // 0x80225FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225FA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FA8: jr          $ra
    // 0x80225FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802261A4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802261A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802261B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802261B8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x802261BC: bne         $v0, $zero, L_802261FC
    if (ctx->r2 != 0) {
        // 0x802261C0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802261FC;
    }
    // 0x802261C0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802261C4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802261C8: bne         $v0, $zero, L_802261F0
    if (ctx->r2 != 0) {
        // 0x802261CC: nop
    
            goto L_802261F0;
    }
    // 0x802261CC: nop

    // 0x802261D0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x802261D4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x802261D8: bne         $v1, $v0, L_802261F0
    if (ctx->r3 != ctx->r2) {
        // 0x802261DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802261F0;
    }
    // 0x802261DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802261E0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802261E4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802261E8: j           L_8022622C
    // 0x802261EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022622C;
    // 0x802261EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_802261F0:
    // 0x802261F0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x802261F4: beq         $v0, $zero, L_8022625C
    if (ctx->r2 == 0) {
        // 0x802261F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022625C;
    }
    // 0x802261F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802261FC:
    // 0x802261FC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80226200: bne         $v0, $zero, L_8022625C
    if (ctx->r2 != 0) {
        // 0x80226204: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022625C;
    }
    // 0x80226204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226208: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022620C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226210: bne         $v1, $v0, L_8022625C
    if (ctx->r3 != ctx->r2) {
        // 0x80226214: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022625C;
    }
    // 0x80226214: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80226218: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022621C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226224: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226228: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022622C:
    // 0x8022622C: jal         0x8009A3B4
    // 0x80226230: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226230: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226234: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226238: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022623C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226240: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226244: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226248: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022624C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226250: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226254: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022625C:
    // 0x8022625C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226260: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226264: jal         0x8004DA90
    // 0x80226268: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226268: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022626C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80226270: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226274: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80226278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022627C: bne         $v0, $zero, L_802262AC
    if (ctx->r2 != 0) {
        // 0x80226280: nop
    
            goto L_802262AC;
    }
    // 0x80226280: nop

    // 0x80226284: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226288: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022628C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226290: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226294: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80226298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022629C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802262A0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802262A4: j           L_802262FC
    // 0x802262A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802262FC;
    // 0x802262A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802262AC:
    // 0x802262AC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802262B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802262B4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802262B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802262BC: bne         $v0, $zero, L_802262CC
    if (ctx->r2 != 0) {
        // 0x802262C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802262CC;
    }
    // 0x802262C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802262C4: j           L_802262FC
    // 0x802262C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802262FC;
    // 0x802262C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802262CC:
    // 0x802262CC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802262D0: jal         0x80227B04
    // 0x802262D4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_2;
    // 0x802262D4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x802262D8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802262DC: beq         $v0, $zero, L_80226300
    if (ctx->r2 == 0) {
        // 0x802262E0: nop
    
            goto L_80226300;
    }
    // 0x802262E0: nop

    // 0x802262E4: jal         0x80227A68
    // 0x802262E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_3;
    // 0x802262E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x802262EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802262F0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802262F4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802262F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802262FC:
    // 0x802262FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226300:
    // 0x80226300: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226304: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226308: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022630C: jr          $ra
    // 0x80226310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227514_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022751C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227520: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227524: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227528: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022752C: jal         0x8003516C
    // 0x80227530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80227530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80227534: bne         $v0, $zero, L_80227558
    if (ctx->r2 != 0) {
        // 0x80227538: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227558;
    }
    // 0x80227538: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022753C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227540: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80227544: jal         0x800610AC
    // 0x80227548: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80227548: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022754C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227554: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227558:
    // 0x80227558: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022755C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227560: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227564: jal         0x8004F820
    // 0x80227568: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227568: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022756C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227570: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80227574: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80227578: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022757C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227580: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227584: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022758C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227590: jr          $ra
    // 0x80227594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A2C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225A30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225A34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225A38: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225A3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225A40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225A44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A48: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x80225A4C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225A50: addiu       $v0, $v0, -0x7028
    ctx->r2 = ADD32(ctx->r2, -0X7028);
    // 0x80225A54: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80225A58: jal         0x800A3450
    // 0x80225A5C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80225A5C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80225A60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225A64: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80225A68: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80225A6C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225A70: addiu       $s0, $s0, -0x6FE8
    ctx->r16 = ADD32(ctx->r16, -0X6FE8);
    // 0x80225A74: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80225A78: beq         $v1, $zero, L_80225A94
    if (ctx->r3 == 0) {
        // 0x80225A7C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80225A94;
    }
    // 0x80225A7C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80225A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A84: beq         $v1, $v0, L_80225AB4
    if (ctx->r3 == ctx->r2) {
        // 0x80225A88: nop
    
            goto L_80225AB4;
    }
    // 0x80225A88: nop

    // 0x80225A8C: j           L_80225AC8
    // 0x80225A90: nop

        goto L_80225AC8;
    // 0x80225A90: nop

L_80225A94:
    // 0x80225A94: jal         0x80227A78
    // 0x80225A98: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80227A78_ovl30(rdram, ctx);
        goto after_1;
    // 0x80225A98: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80225A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225AA4: jal         0x80227AB8
    // 0x80225AA8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80227AB8_ovl30(rdram, ctx);
        goto after_2;
    // 0x80225AA8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80225AAC: j           L_80225B20
    // 0x80225AB0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80225B20;
    // 0x80225AB0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80225AB4:
    // 0x80225AB4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225AB8: jal         0x80227A68
    // 0x80225ABC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80227A68_ovl30(rdram, ctx);
        goto after_3;
    // 0x80225ABC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80225AC0: j           L_80225B20
    // 0x80225AC4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80225B20;
    // 0x80225AC4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80225AC8:
    // 0x80225AC8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80225ACC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80225AD0: bne         $v1, $v0, L_80225AE0
    if (ctx->r3 != ctx->r2) {
        // 0x80225AD4: nop
    
            goto L_80225AE0;
    }
    // 0x80225AD4: nop

    // 0x80225AD8: j           L_80225B20
    // 0x80225ADC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80225B20;
    // 0x80225ADC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80225AE0:
    // 0x80225AE0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225AE4: jal         0x80227A78
    // 0x80225AE8: nop

    func_80227A78_ovl30(rdram, ctx);
        goto after_4;
    // 0x80225AE8: nop

    after_4:
    // 0x80225AEC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80225AF0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80225AF4: beq         $v0, $zero, L_80225B08
    if (ctx->r2 == 0) {
        // 0x80225AF8: nop
    
            goto L_80225B08;
    }
    // 0x80225AF8: nop

    // 0x80225AFC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80225B00: j           L_80225B18
    // 0x80225B04: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80225B18;
    // 0x80225B04: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80225B08:
    // 0x80225B08: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80225B0C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80225B10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225B14: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80225B18:
    // 0x80225B18: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225B1C: addiu       $s0, $s0, -0x6FC8
    ctx->r16 = ADD32(ctx->r16, -0X6FC8);
L_80225B20:
    // 0x80225B20: jal         0x800A3450
    // 0x80225B24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80225B24: nop

    after_5:
    // 0x80225B28: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225B2C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80225B30: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225B34: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80225B38: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80225B3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B40: beq         $v1, $v0, L_80225B58
    if (ctx->r3 == ctx->r2) {
        // 0x80225B44: nop
    
            goto L_80225B58;
    }
    // 0x80225B44: nop

    // 0x80225B48: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B50: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80225B54: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80225B58:
    // 0x80225B58: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225B5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225B60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B6C: jr          $ra
    // 0x80225B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225B70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802273C0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802273C4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802273C8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802273CC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802273D0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x802273D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273D8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802273DC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802273E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802273E4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x802273E8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x802273EC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x802273F0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802273F4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802273F8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802273FC: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80227400: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80227404: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227408: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022740C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80227410: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227414: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80227418: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022741C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80227420: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227424: jal         0x8009A3B4
    // 0x80227428: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227428: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022742C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227430: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227434: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80227438: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022743C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80227440: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227444: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80227448: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022744C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80227450: jal         0x8004EC38
    // 0x80227454: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80227454: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227458: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022745C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80227460: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80227464: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80227468: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022746C: jal         0x80034FCC
    // 0x80227470: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80227470: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80227474: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80227478: jal         0x80227A68
    // 0x8022747C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80227A68_ovl30(rdram, ctx);
        goto after_3;
    // 0x8022747C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80227480: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80227484: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80227488: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022748C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227490: jal         0x8004F820
    // 0x80227494: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227494: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x80227498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022749C: bgez        $v0, L_802274C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802274A0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802274C8;
    }
    // 0x802274A0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802274A4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802274A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802274AC: jal         0x8004F820
    // 0x802274B0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x802274B0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x802274B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802274BC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802274C0: j           L_802274E0
    // 0x802274C4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_802274E0;
    // 0x802274C4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_802274C8:
    // 0x802274C8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802274CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802274D0: jal         0x8004F820
    // 0x802274D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x802274D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x802274D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274DC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_802274E0:
    // 0x802274E0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802274E4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x802274E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274EC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802274F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802274F4: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x802274F8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802274FC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80227500: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80227504: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227508: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022750C: jr          $ra
    // 0x80227510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227510: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227598_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022759C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802275AC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802275B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802275B4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802275B8: jal         0x8004F820
    // 0x802275BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802275BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802275C0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802275C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802275C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802275CC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802275D0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802275D4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802275D8: bne         $v0, $zero, L_80227610
    if (ctx->r2 != 0) {
        // 0x802275DC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227610;
    }
    // 0x802275DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802275E0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802275E4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802275E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802275EC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802275F0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802275F4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802275F8: jal         0x80227A68
    // 0x802275FC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x802275FC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80227600: jal         0x80034E3C
    // 0x80227604: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80227604: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227608: j           L_8022762C
    // 0x8022760C: nop

        goto L_8022762C;
    // 0x8022760C: nop

L_80227610:
    // 0x80227610: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227614: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80227618: bne         $v1, $v0, L_8022762C
    if (ctx->r3 != ctx->r2) {
        // 0x8022761C: nop
    
            goto L_8022762C;
    }
    // 0x8022761C: nop

    // 0x80227620: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227624: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227628: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022762C:
    // 0x8022762C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227630: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227634: jr          $ra
    // 0x80227638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E70_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E80: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80225E84: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80225E88: jal         0x8004FA7C
    // 0x80225E8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80225E8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80225E90: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80225E94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225E98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80225E9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225EA0: bne         $v0, $zero, L_80225F04
    if (ctx->r2 != 0) {
        // 0x80225EA4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80225F04;
    }
    // 0x80225EA4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80225EA8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x80225EAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EB0: beq         $v1, $zero, L_80225EF4
    if (ctx->r3 == 0) {
        // 0x80225EB4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80225EF4;
    }
    // 0x80225EB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225EB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225EBC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80225EC0: jal         0x8009A3B4
    // 0x80225EC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225EC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80225EC8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80225ECC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80225ED0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80225ED4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80225ED8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225EDC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225EE0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225EE4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80225EE8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80225EEC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80225EF0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80225EF4:
    // 0x80225EF4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80225EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EFC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80225F00: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80225F04:
    // 0x80225F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F0C: jr          $ra
    // 0x80225F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FEC_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225FF4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225FF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225FFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226000: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226004: lw          $v0, -0x6FB8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6FB8);
    // 0x80226008: jalr        $v0
    // 0x8022600C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022600C: nop

    after_0:
    // 0x80226010: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226014: jr          $ra
    // 0x80226018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279D0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279D4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802279D8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802279DC: beq         $a0, $v0, L_80227A44
    if (ctx->r4 == ctx->r2) {
        // 0x802279E0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80227A44;
    }
    // 0x802279E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802279E4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x802279E8: beql        $v0, $zero, L_80227A08
    if (ctx->r2 == 0) {
        // 0x802279EC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80227A08;
    }
    goto skip_0;
    // 0x802279EC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x802279F0: beq         $a0, $zero, L_80227A3C
    if (ctx->r4 == 0) {
        // 0x802279F4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80227A3C;
    }
    // 0x802279F4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802279F8: beq         $a0, $v0, L_80227A5C
    if (ctx->r4 == ctx->r2) {
        // 0x802279FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227A5C;
    }
    // 0x802279FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A00: j           L_80227A5C
    // 0x80227A04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227A5C;
    // 0x80227A04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227A08:
    // 0x80227A08: beq         $a0, $v0, L_80227A3C
    if (ctx->r4 == ctx->r2) {
        // 0x80227A0C: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_80227A3C;
    }
    // 0x80227A0C: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80227A10: beq         $v0, $zero, L_80227A28
    if (ctx->r2 == 0) {
        // 0x80227A14: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80227A28;
    }
    // 0x80227A14: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80227A18: beq         $a0, $v0, L_80227A5C
    if (ctx->r4 == ctx->r2) {
        // 0x80227A1C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227A5C;
    }
    // 0x80227A1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227A20: j           L_80227A5C
    // 0x80227A24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227A5C;
    // 0x80227A24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227A28:
    // 0x80227A28: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x80227A2C: beq         $a0, $v0, L_80227A4C
    if (ctx->r4 == ctx->r2) {
        // 0x80227A30: nop
    
            goto L_80227A4C;
    }
    // 0x80227A30: nop

    // 0x80227A34: j           L_80227A5C
    // 0x80227A38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80227A5C;
    // 0x80227A38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227A3C:
    // 0x80227A3C: j           L_80227A5C
    // 0x80227A40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80227A5C;
    // 0x80227A40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227A44:
    // 0x80227A44: j           L_80227A5C
    // 0x80227A48: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80227A5C;
    // 0x80227A48: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80227A4C:
    // 0x80227A4C: jal         0x800A3450
    // 0x80227A50: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227A50: nop

    after_0:
    // 0x80227A54: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227A58: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80227A5C:
    // 0x80227A5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227A60: jr          $ra
    // 0x80227A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227174_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227178: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022717C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227180: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227184: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227188: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022718C: lw          $v0, -0x6ED4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6ED4);
    // 0x80227190: jalr        $v0
    // 0x80227194: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227194: nop

    after_0:
    // 0x80227198: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022719C: jr          $ra
    // 0x802271A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802271A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802265B4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802265B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802265BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802265C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802265C4: jal         0x80227AB8
    // 0x802265C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227AB8_ovl30(rdram, ctx);
        goto after_0;
    // 0x802265C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802265CC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802265D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802265D4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802265D8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802265DC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802265E0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802265E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802265E8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802265EC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802265F0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x802265F4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x802265F8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x802265FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226600: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226604: jr          $ra
    // 0x80226608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227390_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227394: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227398: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022739C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802273A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802273A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802273A8: lw          $v0, -0x6EBC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6EBC);
    // 0x802273AC: jalr        $v0
    // 0x802273B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802273B0: nop

    after_0:
    // 0x802273B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802273B8: jr          $ra
    // 0x802273BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227780_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227780: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227784: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227788: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022778C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227790: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227798: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022779C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802277A0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802277A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802277A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802277AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802277B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802277B4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802277B8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x802277BC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x802277C0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802277C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802277C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802277CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802277D0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x802277D4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x802277D8: jal         0x8004F820
    // 0x802277DC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802277DC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x802277E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802277E4: bgez        $v0, L_80227814
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802277E8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227814;
    }
    // 0x802277E8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802277EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802277F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802277F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802277F8: jal         0x8004F820
    // 0x802277FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802277FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80227800: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227804: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022780C: j           L_80227830
    // 0x80227810: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227830;
    // 0x80227810: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227814:
    // 0x80227814: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227818: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022781C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227820: jal         0x8004F820
    // 0x80227824: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227824: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227828: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022782C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227830:
    // 0x80227830: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227834: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227838: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022783C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227840: jal         0x800610AC
    // 0x80227844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80227844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227848: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022784C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227850: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227854: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227858: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022785C: jr          $ra
    // 0x80227860: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227860: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802278D8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802278DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802278E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802278EC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802278F0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802278F4: jal         0x8004FA7C
    // 0x802278F8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802278F8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x802278FC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227900: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227904: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80227908: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022790C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80227910: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80227914: beq         $v1, $zero, L_80227948
    if (ctx->r3 == 0) {
        // 0x80227918: nop
    
            goto L_80227948;
    }
    // 0x80227918: nop

    // 0x8022791C: jal         0x80227A68
    // 0x80227920: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x80227920: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80227924: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227928: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022792C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80227930: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227934: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80227938: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022793C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227940: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80227944: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80227948:
    // 0x80227948: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022794C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227950: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227954: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227958: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022795C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227964: jr          $ra
    // 0x80227968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226818_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226818: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022681C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80226820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226824: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226828: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022682C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80226830: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80226834: jal         0x80227B04
    // 0x80226838: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x80226838: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022683C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226840: beq         $v0, $zero, L_80226870
    if (ctx->r2 == 0) {
        // 0x80226844: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80226870;
    }
    // 0x80226844: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80226848: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022684C: bne         $v1, $v0, L_80226998
    if (ctx->r3 != ctx->r2) {
        // 0x80226850: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226998;
    }
    // 0x80226850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226854: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226858: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022685C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80226860: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226864: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80226868: j           L_8022699C
    // 0x8022686C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022699C;
    // 0x8022686C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80226870:
    // 0x80226870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226874: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022687C: jal         0x8004DA90
    // 0x80226880: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226880: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80226884: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80226888: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022688C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80226890: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80226894: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80226898: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022689C: beq         $v0, $zero, L_802268AC
    if (ctx->r2 == 0) {
        // 0x802268A0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_802268AC;
    }
    // 0x802268A0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x802268A4: j           L_802268BC
    // 0x802268A8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_802268BC;
    // 0x802268A8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_802268AC:
    // 0x802268AC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x802268B0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802268B4: beq         $v0, $zero, L_802268EC
    if (ctx->r2 == 0) {
        // 0x802268B8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_802268EC;
    }
    // 0x802268B8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_802268BC:
    // 0x802268BC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802268C0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x802268C4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802268C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802268CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802268D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802268D4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802268D8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802268DC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802268E0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x802268E4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802268E8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_802268EC:
    // 0x802268EC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x802268F0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x802268F4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802268F8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x802268FC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80226900: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226904: beq         $v0, $zero, L_80226918
    if (ctx->r2 == 0) {
        // 0x80226908: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80226918;
    }
    // 0x80226908: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022690C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226910: j           L_8022692C
    // 0x80226914: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022692C;
    // 0x80226914: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80226918:
    // 0x80226918: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022691C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226920: beq         $v0, $zero, L_8022695C
    if (ctx->r2 == 0) {
        // 0x80226924: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022695C;
    }
    // 0x80226924: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80226928: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022692C:
    // 0x8022692C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80226930: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226934: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226938: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022693C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226940: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226944: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226948: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022694C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226950: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80226954: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80226958: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022695C:
    // 0x8022695C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226960: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226964: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226968: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022696C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226970: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226974: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226978: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022697C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226980: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226984: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226988: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022698C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226990: bne         $v0, $zero, L_8022699C
    if (ctx->r2 != 0) {
        // 0x80226994: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022699C;
    }
    // 0x80226994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226998:
    // 0x80226998: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022699C:
    // 0x8022699C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802269A0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802269A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802269A8: jr          $ra
    // 0x802269AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802269AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226448_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226448: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022644C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226450: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226454: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226458: bne         $v0, $zero, L_80226464
    if (ctx->r2 != 0) {
        // 0x8022645C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226464;
    }
    // 0x8022645C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226460: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226464:
    // 0x80226464: jr          $ra
    // 0x80226468: nop

    TRACE_RETURN()
    return;
    // 0x80226468: nop

;}
RECOMP_FUNC void func_802259D8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259E8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802259EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802259F0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x802259F4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802259F8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802259FC: jal         0x80227AB8
    // 0x80225A00: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80227AB8_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225A00: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225A04: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225A08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225A0C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80225A10: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80225A14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225A18: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80225A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A24: jr          $ra
    // 0x80225A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x7C80
    ctx->r2 = ADD32(ctx->r2, -0X7C80);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x7B40
    ctx->r2 = ADD32(ctx->r2, -0X7B40);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x7B2C
    ctx->r2 = ADD32(ctx->r2, -0X7B2C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x7B28
    ctx->r2 = ADD32(ctx->r2, -0X7B28);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x7AF0
    ctx->r2 = ADD32(ctx->r2, -0X7AF0);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x7AEC
    ctx->r2 = ADD32(ctx->r2, -0X7AEC);
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
RECOMP_FUNC void func_8022768C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022768C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227690: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227694: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022769C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802276A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802276A4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802276A8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802276AC: jal         0x8004FA7C
    // 0x802276B0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802276B0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x802276B4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802276B8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802276BC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802276C0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802276C4: beq         $v0, $zero, L_802276DC
    if (ctx->r2 == 0) {
        // 0x802276C8: nop
    
            goto L_802276DC;
    }
    // 0x802276C8: nop

    // 0x802276CC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802276D0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802276D4: beq         $v0, $zero, L_80227728
    if (ctx->r2 == 0) {
        // 0x802276D8: nop
    
            goto L_80227728;
    }
    // 0x802276D8: nop

L_802276DC:
    // 0x802276DC: jal         0x8003516C
    // 0x802276E0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802276E0: nop

    after_1:
    // 0x802276E4: bne         $v0, $zero, L_80227728
    if (ctx->r2 != 0) {
        // 0x802276E8: nop
    
            goto L_80227728;
    }
    // 0x802276E8: nop

    // 0x802276EC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802276F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276F4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802276F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276FC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80227700: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227704: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80227708: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022770C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80227710: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227714: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227718: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022771C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80227720: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227724: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80227728:
    // 0x80227728: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022772C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227730: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227734: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022773C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227740: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227744: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227748: jr          $ra
    // 0x8022774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225358_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022535C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225364: jal         0x8022546C
    // 0x80225368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022546C_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022536C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225370: bne         $v1, $zero, L_802253B4
    if (ctx->r3 != 0) {
        // 0x80225374: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_802253B4;
    }
    // 0x80225374: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225378: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022537C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225380: addiu       $a0, $a0, -0x76C4
    ctx->r4 = ADD32(ctx->r4, -0X76C4);
    // 0x80225384: jal         0x800607C4
    // 0x80225388: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x80225388: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x8022538C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225390: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80225394: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80225398: beq         $v0, $zero, L_802253A8
    if (ctx->r2 == 0) {
        // 0x8022539C: nop
    
            goto L_802253A8;
    }
    // 0x8022539C: nop

    // 0x802253A0: jal         0x80060AAC
    // 0x802253A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x802253A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
L_802253A8:
    // 0x802253A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253B4:
    // 0x802253B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253BC: jr          $ra
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B44_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226B48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B50: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226B54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226B58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226B5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226B60: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226B64: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80226B68: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226B6C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226B70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B74: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80226B78: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80226B7C: jal         0x80227A68
    // 0x80226B80: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80227A68_ovl30(rdram, ctx);
        goto after_0;
    // 0x80226B80: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80226B84: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80226B88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226B8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226B90: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80226B94: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80226B98: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226B9C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80226BA0: jal         0x8004F820
    // 0x80226BA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80226BA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226BA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BAC: bgez        $v0, L_80226BDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226BB0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80226BDC;
    }
    // 0x80226BB0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80226BB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226BB8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226BBC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226BC0: jal         0x8004F820
    // 0x80226BC4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80226BC4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80226BC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226BD0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226BD4: j           L_80226BF8
    // 0x80226BD8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80226BF8;
    // 0x80226BD8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80226BDC:
    // 0x80226BDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226BE0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226BE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80226BE8: jal         0x8004F820
    // 0x80226BEC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80226BEC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80226BF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BF4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80226BF8:
    // 0x80226BF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226BFC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80226C00: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80226C04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226C08: jal         0x800610AC
    // 0x80226C0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80226C0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226C10: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226C14: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226C18: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226C1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226C20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C24: jr          $ra
    // 0x80226C28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226C28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227B04_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227B08: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227B0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227B10: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227B14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227B18: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x80227B1C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80227B20: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80227B24: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80227B28: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227B2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227B30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80227B34: jal         0x8004DC2C
    // 0x80227B38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80227B38: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x80227B3C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80227B40: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80227B44: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227B48: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80227B4C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80227B50: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80227B54: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80227B58: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80227B5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227B60: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80227B64: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80227B68: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80227B6C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80227B70: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80227B74: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80227B78: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80227B7C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80227B80: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80227B84: beq         $a0, $zero, L_80227B94
    if (ctx->r4 == 0) {
        // 0x80227B88: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227B94;
    }
    // 0x80227B88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227B8C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80227B90: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80227B94:
    // 0x80227B94: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80227B98: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227B9C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227BA0: jr          $ra
    // 0x80227BA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80227BA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80227BA8: nop

    // 0x80227BAC: nop

;}
RECOMP_FUNC void func_80225B74_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225B88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225B8C: jal         0x8004DA90
    // 0x80225B90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80225B90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80225B94: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80225B98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225B9C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80225BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BA4: bne         $v0, $zero, L_80225BDC
    if (ctx->r2 != 0) {
        // 0x80225BA8: nop
    
            goto L_80225BDC;
    }
    // 0x80225BA8: nop

    // 0x80225BAC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80225BB0: beq         $v0, $zero, L_80225BC4
    if (ctx->r2 == 0) {
        // 0x80225BB4: nop
    
            goto L_80225BC4;
    }
    // 0x80225BB4: nop

    // 0x80225BB8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80225BBC: j           L_80225BCC
    // 0x80225BC0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_80225BCC;
    // 0x80225BC0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80225BC4:
    // 0x80225BC4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80225BC8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_80225BCC:
    // 0x80225BCC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80225BD0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80225BD4: j           L_80225C2C
    // 0x80225BD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80225C2C;
    // 0x80225BD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80225BDC:
    // 0x80225BDC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80225BE0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225BE4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225BE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BEC: bne         $v0, $zero, L_80225BFC
    if (ctx->r2 != 0) {
        // 0x80225BF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225BFC;
    }
    // 0x80225BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225BF4: j           L_80225C2C
    // 0x80225BF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225C2C;
    // 0x80225BF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225BFC:
    // 0x80225BFC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80225C00: jal         0x80227B04
    // 0x80225C04: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_1;
    // 0x80225C04: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80225C08: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225C0C: beq         $v0, $zero, L_80225C30
    if (ctx->r2 == 0) {
        // 0x80225C10: nop
    
            goto L_80225C30;
    }
    // 0x80225C10: nop

    // 0x80225C14: jal         0x80227A68
    // 0x80225C18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_2;
    // 0x80225C18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80225C1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225C20: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225C24: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225C28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80225C2C:
    // 0x80225C2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225C30:
    // 0x80225C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C38: jr          $ra
    // 0x80225C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256B4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802256B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802256C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802256C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802256CC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802256D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802256D4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x802256D8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802256DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802256E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802256E4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802256E8: addiu       $v1, $v1, -0x7630
    ctx->r3 = ADD32(ctx->r3, -0X7630);
    // 0x802256EC: jal         0x80227B04
    // 0x802256F0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x802256F0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x802256F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802256F8: beq         $v0, $zero, L_80225808
    if (ctx->r2 == 0) {
        // 0x802256FC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80225808;
    }
    // 0x802256FC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80225700: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225704: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225708: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022570C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225710: jal         0x8009A3B4
    // 0x80225714: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225714: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225718: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022571C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225720: jal         0x8009A3B4
    // 0x80225724: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225724: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80225728: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022572C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225730: jal         0x8009A3B4
    // 0x80225734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80225738: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022573C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80225740: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225744: beq         $v0, $zero, L_80225754
    if (ctx->r2 == 0) {
        // 0x80225748: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80225754;
    }
    // 0x80225748: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022574C: jal         0x8022796C
    // 0x80225750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022796C_ovl30(rdram, ctx);
        goto after_4;
    // 0x80225750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80225754:
    // 0x80225754: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225758: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022575C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225760: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225764: lw          $v0, -0x70C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X70C8);
    // 0x80225768: jalr        $v0
    // 0x8022576C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022576C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225770: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225774: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80225778: bne         $v0, $zero, L_80225794
    if (ctx->r2 != 0) {
        // 0x8022577C: nop
    
            goto L_80225794;
    }
    // 0x8022577C: nop

    // 0x80225780: jal         0x8003E934
    // 0x80225784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80225784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225788: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022578C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225790: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80225794:
    // 0x80225794: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80225798: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022579C: beq         $v0, $a1, L_802257B4
    if (ctx->r2 == ctx->r5) {
        // 0x802257A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802257B4;
    }
    // 0x802257A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802257A4: jal         0x80050294
    // 0x802257A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802257A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802257AC: j           L_802257BC
    // 0x802257B0: nop

        goto L_802257BC;
    // 0x802257B0: nop

L_802257B4:
    // 0x802257B4: jal         0x8005044C
    // 0x802257B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802257B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802257BC:
    // 0x802257BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802257C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802257C4: beq         $v0, $zero, L_802257E0
    if (ctx->r2 == 0) {
        // 0x802257C8: nop
    
            goto L_802257E0;
    }
    // 0x802257C8: nop

    // 0x802257CC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802257D0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802257D4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x802257D8: jal         0x8003B564
    // 0x802257DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802257DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802257E0:
    // 0x802257E0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802257E4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802257E8: beq         $v0, $zero, L_802257F8
    if (ctx->r2 == 0) {
        // 0x802257EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802257F8;
    }
    // 0x802257EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802257F0: j           L_802257FC
    // 0x802257F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802257FC;
    // 0x802257F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802257F8:
    // 0x802257F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802257FC:
    // 0x802257FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80225800: jal         0x80047284
    // 0x80225804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80225804: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80225808:
    // 0x80225808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022580C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225810: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225814: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225818: jr          $ra
    // 0x8022581C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022581C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802272F0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272F0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802272F4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802272F8: bne         $v0, $zero, L_80227330
    if (ctx->r2 != 0) {
        // 0x802272FC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80227330;
    }
    // 0x802272FC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80227300: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80227304: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80227308: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022730C: beq         $v1, $zero, L_8022731C
    if (ctx->r3 == 0) {
        // 0x80227310: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022731C;
    }
    // 0x80227310: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80227314: j           L_80227320
    // 0x80227318: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80227320;
    // 0x80227318: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022731C:
    // 0x8022731C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227320:
    // 0x80227320: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227324: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80227328: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022732C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80227330:
    // 0x80227330: jr          $ra
    // 0x80227334: nop

    TRACE_RETURN()
    return;
    // 0x80227334: nop

;}
RECOMP_FUNC void func_80226FA8_ovl30(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80226FBC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226FC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226FC4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226FC8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80226FCC: bne         $v0, $zero, L_80227028
    if (ctx->r2 != 0) {
        // 0x80226FD0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227028;
    }
    // 0x80226FD0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226FD4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226FD8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80226FDC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226FE0: jal         0x8004F820
    // 0x80226FE4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226FE4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80226FE8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226FEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226FF0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80226FF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226FF8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226FFC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80227000: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227004: beq         $a0, $zero, L_80227028
    if (ctx->r4 == 0) {
        // 0x80227008: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227028;
    }
    // 0x80227008: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022700C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227010: jal         0x802279D0
    // 0x80227014: nop

    func_802279D0_ovl30(rdram, ctx);
        goto after_1;
    // 0x80227014: nop

    after_1:
    // 0x80227018: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022701C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227020: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227024: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227028:
    // 0x80227028: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022702C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227030: bne         $v0, $zero, L_80227054
    if (ctx->r2 != 0) {
        // 0x80227034: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227054;
    }
    // 0x80227034: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227038: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022703C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227040: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227044: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227048: jal         0x80227A68
    // 0x8022704C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_2;
    // 0x8022704C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227050: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227054:
    // 0x80227054: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022705C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227060: jr          $ra
    // 0x80227064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022546C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022546C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225470: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225474: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225478: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022547C: addiu       $s0, $zero, 0x38
    ctx->r16 = ADD32(0, 0X38);
    // 0x80225480: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_80225484:
    // 0x80225484: jal         0x8006033C
    // 0x80225488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022548C: beql        $v0, $zero, L_802254A8
    if (ctx->r2 == 0) {
        // 0x80225490: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802254A8;
    }
    goto skip_0;
    // 0x80225490: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80225494: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225498: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022549C: lbu         $v0, -0x7674($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7674);
    // 0x802254A0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x802254A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802254A8:
    // 0x802254A8: slti        $v0, $s0, 0x40
    ctx->r2 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x802254AC: bne         $v0, $zero, L_80225484
    if (ctx->r2 != 0) {
        // 0x802254B0: slti        $v0, $s1, 0x2E
        ctx->r2 = SIGNED(ctx->r17) < 0X2E ? 1 : 0;
            goto L_80225484;
    }
    // 0x802254B0: slti        $v0, $s1, 0x2E
    ctx->r2 = SIGNED(ctx->r17) < 0X2E ? 1 : 0;
    // 0x802254B4: bne         $v0, $zero, L_802254C4
    if (ctx->r2 != 0) {
        // 0x802254B8: slti        $v0, $s1, 0x19
        ctx->r2 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
            goto L_802254C4;
    }
    // 0x802254B8: slti        $v0, $s1, 0x19
    ctx->r2 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
    // 0x802254BC: j           L_802254D8
    // 0x802254C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802254D8;
    // 0x802254C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802254C4:
    // 0x802254C4: bne         $v0, $zero, L_802254D4
    if (ctx->r2 != 0) {
        // 0x802254C8: slti        $v0, $s1, 0xA
        ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_802254D4;
    }
    // 0x802254C8: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x802254CC: j           L_802254D8
    // 0x802254D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802254D8;
    // 0x802254D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802254D4:
    // 0x802254D4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_802254D8:
    // 0x802254D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802254DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802254E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254E4: jr          $ra
    // 0x802254E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802254E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802254EC: nop

;}
RECOMP_FUNC void func_80227BB0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227BB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227BB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80227BC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227BC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227BC8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227BCC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227BD0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227BD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BD8: beq         $v1, $v0, L_80227C4C
    if (ctx->r3 == ctx->r2) {
        // 0x80227BDC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80227C4C;
    }
    // 0x80227BDC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227BE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227BE4: beql        $v0, $zero, L_80227BFC
    if (ctx->r2 == 0) {
        // 0x80227BE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227BFC;
    }
    goto skip_0;
    // 0x80227BE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227BEC: beql        $v1, $zero, L_80227C14
    if (ctx->r3 == 0) {
        // 0x80227BF0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80227C14;
    }
    goto skip_1;
    // 0x80227BF0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_1:
    // 0x80227BF4: j           L_80227D14
    // 0x80227BF8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
        goto L_80227D14;
    // 0x80227BF8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_80227BFC:
    // 0x80227BFC: beq         $v1, $v0, L_80227C8C
    if (ctx->r3 == ctx->r2) {
        // 0x80227C00: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227C8C;
    }
    // 0x80227C00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227C04: beq         $v1, $v0, L_80227CC0
    if (ctx->r3 == ctx->r2) {
        // 0x80227C08: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80227CC0;
    }
    // 0x80227C08: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80227C0C: j           L_80227D14
    // 0x80227C10: nop

        goto L_80227D14;
    // 0x80227C10: nop

L_80227C14:
    // 0x80227C14: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227C18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227C1C: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80227C20: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    // 0x80227C24: addiu       $v0, $v0, -0x92
    ctx->r2 = ADD32(ctx->r2, -0X92);
    // 0x80227C28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227C2C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80227C30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227C38: jal         0x80034FCC
    // 0x80227C3C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80034FCC_103CC(rdram, ctx);
        goto after_0;
    // 0x80227C3C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227C40: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227C44: j           L_80227CAC
    // 0x80227C48: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80227CAC;
    // 0x80227C48: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80227C4C:
    // 0x80227C4C: jal         0x8003516C
    // 0x80227C50: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80227C50: nop

    after_1:
    // 0x80227C54: bne         $v0, $zero, L_80227D14
    if (ctx->r2 != 0) {
        // 0x80227C58: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80227D14;
    }
    // 0x80227C58: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80227C5C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227C64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C68: jal         0x800610AC
    // 0x80227C6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80227C6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80227C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227C78: jal         0x80050294
    // 0x80227C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227C80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227C84: j           L_80227CB4
    // 0x80227C88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_80227CB4;
    // 0x80227C88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80227C8C:
    // 0x80227C8C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227C90: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227C94: bne         $v0, $zero, L_80227D14
    if (ctx->r2 != 0) {
        // 0x80227C98: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80227D14;
    }
    // 0x80227C98: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80227C9C: jal         0x80034E3C
    // 0x80227CA0: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x80227CA0: nop

    after_4:
    // 0x80227CA4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227CA8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80227CAC:
    // 0x80227CAC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80227CB0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80227CB4:
    // 0x80227CB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CB8: j           L_80227D10
    // 0x80227CBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227D10;
    // 0x80227CBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227CC0:
    // 0x80227CC0: jal         0x8003516C
    // 0x80227CC4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80227CC4: nop

    after_5:
    // 0x80227CC8: bne         $v0, $zero, L_80227D14
    if (ctx->r2 != 0) {
        // 0x80227CCC: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80227D14;
    }
    // 0x80227CCC: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80227CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227CD8: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80227CDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227CE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227CE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227CE8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80227CEC: jal         0x80050294
    // 0x80227CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80227CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80227CF4: jal         0x8006036C
    // 0x80227CF8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80227CF8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_7:
    // 0x80227CFC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227D00: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80227D04: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227D08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227D0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227D10:
    // 0x80227D10: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_80227D14:
    // 0x80227D14: bne         $v0, $zero, L_80227D24
    if (ctx->r2 != 0) {
        // 0x80227D18: nop
    
            goto L_80227D24;
    }
    // 0x80227D18: nop

    // 0x80227D1C: jal         0x8005044C
    // 0x80227D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80227D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80227D24:
    // 0x80227D24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227D28: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80227D2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227D30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227D34: jr          $ra
    // 0x80227D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227FF4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227FF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228004: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228008: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022800C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228010: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228014: lw          $v0, -0x6E78($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6E78);
    // 0x80228018: jalr        $v0
    // 0x8022801C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022801C: nop

    after_0:
    // 0x80228020: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228024: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228028: beq         $v0, $zero, L_80228040
    if (ctx->r2 == 0) {
        // 0x8022802C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228040;
    }
    // 0x8022802C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228030: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80228034: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80228038: jal         0x8003B564
    // 0x8022803C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x8022803C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80228040:
    // 0x80228040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228048: jr          $ra
    // 0x8022804C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022804C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226050_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022605C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226060: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80226064: addiu       $s1, $s1, -0x6F8C
    ctx->r17 = ADD32(ctx->r17, -0X6F8C);
    // 0x80226068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022606C: jal         0x800A3450
    // 0x80226070: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226070: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80226074: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226078: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022607C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226080: lbu         $v1, -0x6F9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6F9C);
    // 0x80226084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226088: beq         $v1, $v0, L_80226128
    if (ctx->r3 == ctx->r2) {
        // 0x8022608C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226128;
    }
    // 0x8022608C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226090: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226094: beql        $v0, $zero, L_802260AC
    if (ctx->r2 == 0) {
        // 0x80226098: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802260AC;
    }
    goto skip_0;
    // 0x80226098: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022609C: beq         $v1, $zero, L_802260BC
    if (ctx->r3 == 0) {
        // 0x802260A0: nop
    
            goto L_802260BC;
    }
    // 0x802260A0: nop

    // 0x802260A4: j           L_80226174
    // 0x802260A8: nop

        goto L_80226174;
    // 0x802260A8: nop

L_802260AC:
    // 0x802260AC: beq         $v1, $v0, L_80226148
    if (ctx->r3 == ctx->r2) {
        // 0x802260B0: nop
    
            goto L_80226148;
    }
    // 0x802260B0: nop

    // 0x802260B4: j           L_80226174
    // 0x802260B8: nop

        goto L_80226174;
    // 0x802260B8: nop

L_802260BC:
    // 0x802260BC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802260C0: bne         $v0, $zero, L_802260D4
    if (ctx->r2 != 0) {
        // 0x802260C4: nop
    
            goto L_802260D4;
    }
    // 0x802260C4: nop

    // 0x802260C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260CC: j           L_802260DC
    // 0x802260D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802260DC;
    // 0x802260D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802260D4:
    // 0x802260D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260D8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_802260DC:
    // 0x802260DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802260E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802260E4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802260E8: beq         $v0, $zero, L_80226104
    if (ctx->r2 == 0) {
        // 0x802260EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226104;
    }
    // 0x802260EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802260F0: jal         0x80227AB8
    // 0x802260F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80227AB8_ovl30(rdram, ctx);
        goto after_1;
    // 0x802260F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802260F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802260FC: j           L_80226118
    // 0x80226100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80226118;
    // 0x80226100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226104:
    // 0x80226104: jal         0x80227AB8
    // 0x80226108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227AB8_ovl30(rdram, ctx);
        goto after_2;
    // 0x80226108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022610C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226110: jal         0x80227A78
    // 0x80226114: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80227A78_ovl30(rdram, ctx);
        goto after_3;
    // 0x80226114: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80226118:
    // 0x80226118: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022611C: addiu       $s1, $s1, -0x6F8C
    ctx->r17 = ADD32(ctx->r17, -0X6F8C);
    // 0x80226120: j           L_80226174
    // 0x80226124: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226174;
    // 0x80226124: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226128:
    // 0x80226128: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022612C: jal         0x80227A68
    // 0x80226130: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80227A68_ovl30(rdram, ctx);
        goto after_4;
    // 0x80226130: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80226134: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226138: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022613C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80226140: j           L_80226174
    // 0x80226144: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226174;
    // 0x80226144: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226148:
    // 0x80226148: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022614C: jal         0x80227A78
    // 0x80226150: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80227A78_ovl30(rdram, ctx);
        goto after_5;
    // 0x80226150: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80226154: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226158: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022615C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226160: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226164: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226168: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022616C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80226170: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226174:
    // 0x80226174: jal         0x800A3450
    // 0x80226178: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80226178: nop

    after_6:
    // 0x8022617C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226180: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226184: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226188: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022618C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226190: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226194: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226198: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022619C: jr          $ra
    // 0x802261A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802261A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227338_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022733C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227348: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022734C: bgez        $v0, L_80227380
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227350: nop
    
            goto L_80227380;
    }
    // 0x80227350: nop

    // 0x80227354: jal         0x80227A68
    // 0x80227358: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_0;
    // 0x80227358: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022735C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227360: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80227364: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80227368: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022736C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80227370: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80227374: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227378: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022737C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80227380:
    // 0x80227380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227384: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227388: jr          $ra
    // 0x8022738C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022738C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
